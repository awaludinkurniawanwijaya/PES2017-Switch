#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C6F850"))) PPC_WEAK_FUNC(sub_83C6F850);
PPC_FUNC_IMPL(__imp__sub_83C6F850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29616
	ctx.r3.s64 = ctx.r11.s64 + 29616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F85C"))) PPC_WEAK_FUNC(sub_83C6F85C);
PPC_FUNC_IMPL(__imp__sub_83C6F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F860"))) PPC_WEAK_FUNC(sub_83C6F860);
PPC_FUNC_IMPL(__imp__sub_83C6F860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29624
	ctx.r3.s64 = ctx.r11.s64 + 29624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F86C"))) PPC_WEAK_FUNC(sub_83C6F86C);
PPC_FUNC_IMPL(__imp__sub_83C6F86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F870"))) PPC_WEAK_FUNC(sub_83C6F870);
PPC_FUNC_IMPL(__imp__sub_83C6F870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29632
	ctx.r3.s64 = ctx.r11.s64 + 29632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F87C"))) PPC_WEAK_FUNC(sub_83C6F87C);
PPC_FUNC_IMPL(__imp__sub_83C6F87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F880"))) PPC_WEAK_FUNC(sub_83C6F880);
PPC_FUNC_IMPL(__imp__sub_83C6F880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29640
	ctx.r3.s64 = ctx.r11.s64 + 29640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F88C"))) PPC_WEAK_FUNC(sub_83C6F88C);
PPC_FUNC_IMPL(__imp__sub_83C6F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F890"))) PPC_WEAK_FUNC(sub_83C6F890);
PPC_FUNC_IMPL(__imp__sub_83C6F890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29648
	ctx.r3.s64 = ctx.r11.s64 + 29648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F89C"))) PPC_WEAK_FUNC(sub_83C6F89C);
PPC_FUNC_IMPL(__imp__sub_83C6F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F8A0"))) PPC_WEAK_FUNC(sub_83C6F8A0);
PPC_FUNC_IMPL(__imp__sub_83C6F8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29656
	ctx.r3.s64 = ctx.r11.s64 + 29656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F8AC"))) PPC_WEAK_FUNC(sub_83C6F8AC);
PPC_FUNC_IMPL(__imp__sub_83C6F8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F8B0"))) PPC_WEAK_FUNC(sub_83C6F8B0);
PPC_FUNC_IMPL(__imp__sub_83C6F8B0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// bl 0x83523120
	ctx.lr = 0x83C6F8C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,29664
	ctx.r3.s64 = ctx.r10.s64 + 29664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6F8D4;
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

__attribute__((alias("__imp__sub_83C6F8E4"))) PPC_WEAK_FUNC(sub_83C6F8E4);
PPC_FUNC_IMPL(__imp__sub_83C6F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F8E8"))) PPC_WEAK_FUNC(sub_83C6F8E8);
PPC_FUNC_IMPL(__imp__sub_83C6F8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16200
	ctx.r7.s64 = ctx.r8.s64 + -16200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16200(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6F910"))) PPC_WEAK_FUNC(sub_83C6F910);
PPC_FUNC_IMPL(__imp__sub_83C6F910) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-20100
	ctx.r6.s64 = ctx.r7.s64 + -20100;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20172(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20172);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16200);
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
	// std r9,-20100(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6F958"))) PPC_WEAK_FUNC(sub_83C6F958);
PPC_FUNC_IMPL(__imp__sub_83C6F958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29680
	ctx.r3.s64 = ctx.r11.s64 + 29680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F964"))) PPC_WEAK_FUNC(sub_83C6F964);
PPC_FUNC_IMPL(__imp__sub_83C6F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F968"))) PPC_WEAK_FUNC(sub_83C6F968);
PPC_FUNC_IMPL(__imp__sub_83C6F968) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-16192
	ctx.r3.s64 = ctx.r11.s64 + -16192;
	// bl 0x8259af80
	ctx.lr = 0x83C6F980;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,29696
	ctx.r3.s64 = ctx.r10.s64 + 29696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6F98C;
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

__attribute__((alias("__imp__sub_83C6F99C"))) PPC_WEAK_FUNC(sub_83C6F99C);
PPC_FUNC_IMPL(__imp__sub_83C6F99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F9A0"))) PPC_WEAK_FUNC(sub_83C6F9A0);
PPC_FUNC_IMPL(__imp__sub_83C6F9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16212
	ctx.r11.s64 = ctx.r8.s64 + -16212;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-20124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20124);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29688
	ctx.r3.s64 = ctx.r6.s64 + 29688;
	// stw r10,-16212(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F9D0"))) PPC_WEAK_FUNC(sub_83C6F9D0);
PPC_FUNC_IMPL(__imp__sub_83C6F9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29704
	ctx.r3.s64 = ctx.r11.s64 + 29704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F9DC"))) PPC_WEAK_FUNC(sub_83C6F9DC);
PPC_FUNC_IMPL(__imp__sub_83C6F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F9E0"))) PPC_WEAK_FUNC(sub_83C6F9E0);
PPC_FUNC_IMPL(__imp__sub_83C6F9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29712
	ctx.r3.s64 = ctx.r11.s64 + 29712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F9EC"))) PPC_WEAK_FUNC(sub_83C6F9EC);
PPC_FUNC_IMPL(__imp__sub_83C6F9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6F9F0"))) PPC_WEAK_FUNC(sub_83C6F9F0);
PPC_FUNC_IMPL(__imp__sub_83C6F9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29720
	ctx.r3.s64 = ctx.r11.s64 + 29720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6F9FC"))) PPC_WEAK_FUNC(sub_83C6F9FC);
PPC_FUNC_IMPL(__imp__sub_83C6F9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA00"))) PPC_WEAK_FUNC(sub_83C6FA00);
PPC_FUNC_IMPL(__imp__sub_83C6FA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29728
	ctx.r3.s64 = ctx.r11.s64 + 29728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA0C"))) PPC_WEAK_FUNC(sub_83C6FA0C);
PPC_FUNC_IMPL(__imp__sub_83C6FA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA10"))) PPC_WEAK_FUNC(sub_83C6FA10);
PPC_FUNC_IMPL(__imp__sub_83C6FA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA1C"))) PPC_WEAK_FUNC(sub_83C6FA1C);
PPC_FUNC_IMPL(__imp__sub_83C6FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA20"))) PPC_WEAK_FUNC(sub_83C6FA20);
PPC_FUNC_IMPL(__imp__sub_83C6FA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29744
	ctx.r3.s64 = ctx.r11.s64 + 29744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA2C"))) PPC_WEAK_FUNC(sub_83C6FA2C);
PPC_FUNC_IMPL(__imp__sub_83C6FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA30"))) PPC_WEAK_FUNC(sub_83C6FA30);
PPC_FUNC_IMPL(__imp__sub_83C6FA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29752
	ctx.r3.s64 = ctx.r11.s64 + 29752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA3C"))) PPC_WEAK_FUNC(sub_83C6FA3C);
PPC_FUNC_IMPL(__imp__sub_83C6FA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA40"))) PPC_WEAK_FUNC(sub_83C6FA40);
PPC_FUNC_IMPL(__imp__sub_83C6FA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29760
	ctx.r3.s64 = ctx.r11.s64 + 29760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA4C"))) PPC_WEAK_FUNC(sub_83C6FA4C);
PPC_FUNC_IMPL(__imp__sub_83C6FA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA50"))) PPC_WEAK_FUNC(sub_83C6FA50);
PPC_FUNC_IMPL(__imp__sub_83C6FA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29768
	ctx.r3.s64 = ctx.r11.s64 + 29768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA5C"))) PPC_WEAK_FUNC(sub_83C6FA5C);
PPC_FUNC_IMPL(__imp__sub_83C6FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA60"))) PPC_WEAK_FUNC(sub_83C6FA60);
PPC_FUNC_IMPL(__imp__sub_83C6FA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29776
	ctx.r3.s64 = ctx.r11.s64 + 29776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA6C"))) PPC_WEAK_FUNC(sub_83C6FA6C);
PPC_FUNC_IMPL(__imp__sub_83C6FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA70"))) PPC_WEAK_FUNC(sub_83C6FA70);
PPC_FUNC_IMPL(__imp__sub_83C6FA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29784
	ctx.r3.s64 = ctx.r11.s64 + 29784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA7C"))) PPC_WEAK_FUNC(sub_83C6FA7C);
PPC_FUNC_IMPL(__imp__sub_83C6FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA80"))) PPC_WEAK_FUNC(sub_83C6FA80);
PPC_FUNC_IMPL(__imp__sub_83C6FA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29792
	ctx.r3.s64 = ctx.r11.s64 + 29792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FA8C"))) PPC_WEAK_FUNC(sub_83C6FA8C);
PPC_FUNC_IMPL(__imp__sub_83C6FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FA90"))) PPC_WEAK_FUNC(sub_83C6FA90);
PPC_FUNC_IMPL(__imp__sub_83C6FA90) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// bl 0x83523120
	ctx.lr = 0x83C6FAA8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,29800
	ctx.r3.s64 = ctx.r10.s64 + 29800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6FAB4;
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

__attribute__((alias("__imp__sub_83C6FAC4"))) PPC_WEAK_FUNC(sub_83C6FAC4);
PPC_FUNC_IMPL(__imp__sub_83C6FAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FAC8"))) PPC_WEAK_FUNC(sub_83C6FAC8);
PPC_FUNC_IMPL(__imp__sub_83C6FAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15832
	ctx.r7.s64 = ctx.r8.s64 + -15832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6FAF0"))) PPC_WEAK_FUNC(sub_83C6FAF0);
PPC_FUNC_IMPL(__imp__sub_83C6FAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-19972
	ctx.r6.s64 = ctx.r7.s64 + -19972;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20044(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20044);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15832);
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
	// std r9,-19972(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19972, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6FB38"))) PPC_WEAK_FUNC(sub_83C6FB38);
PPC_FUNC_IMPL(__imp__sub_83C6FB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29816
	ctx.r3.s64 = ctx.r11.s64 + 29816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FB44"))) PPC_WEAK_FUNC(sub_83C6FB44);
PPC_FUNC_IMPL(__imp__sub_83C6FB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FB48"))) PPC_WEAK_FUNC(sub_83C6FB48);
PPC_FUNC_IMPL(__imp__sub_83C6FB48) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-15824
	ctx.r3.s64 = ctx.r11.s64 + -15824;
	// bl 0x8259af80
	ctx.lr = 0x83C6FB60;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,29832
	ctx.r3.s64 = ctx.r10.s64 + 29832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6FB6C;
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

__attribute__((alias("__imp__sub_83C6FB7C"))) PPC_WEAK_FUNC(sub_83C6FB7C);
PPC_FUNC_IMPL(__imp__sub_83C6FB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FB80"))) PPC_WEAK_FUNC(sub_83C6FB80);
PPC_FUNC_IMPL(__imp__sub_83C6FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15844
	ctx.r11.s64 = ctx.r8.s64 + -15844;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-19996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19996);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29824
	ctx.r3.s64 = ctx.r6.s64 + 29824;
	// stw r10,-15844(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FBB0"))) PPC_WEAK_FUNC(sub_83C6FBB0);
PPC_FUNC_IMPL(__imp__sub_83C6FBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29840
	ctx.r3.s64 = ctx.r11.s64 + 29840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FBBC"))) PPC_WEAK_FUNC(sub_83C6FBBC);
PPC_FUNC_IMPL(__imp__sub_83C6FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FBC0"))) PPC_WEAK_FUNC(sub_83C6FBC0);
PPC_FUNC_IMPL(__imp__sub_83C6FBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29848
	ctx.r3.s64 = ctx.r11.s64 + 29848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FBCC"))) PPC_WEAK_FUNC(sub_83C6FBCC);
PPC_FUNC_IMPL(__imp__sub_83C6FBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FBD0"))) PPC_WEAK_FUNC(sub_83C6FBD0);
PPC_FUNC_IMPL(__imp__sub_83C6FBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29856
	ctx.r3.s64 = ctx.r11.s64 + 29856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FBDC"))) PPC_WEAK_FUNC(sub_83C6FBDC);
PPC_FUNC_IMPL(__imp__sub_83C6FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FBE0"))) PPC_WEAK_FUNC(sub_83C6FBE0);
PPC_FUNC_IMPL(__imp__sub_83C6FBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29864
	ctx.r3.s64 = ctx.r11.s64 + 29864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FBEC"))) PPC_WEAK_FUNC(sub_83C6FBEC);
PPC_FUNC_IMPL(__imp__sub_83C6FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FBF0"))) PPC_WEAK_FUNC(sub_83C6FBF0);
PPC_FUNC_IMPL(__imp__sub_83C6FBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29872
	ctx.r3.s64 = ctx.r11.s64 + 29872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FBFC"))) PPC_WEAK_FUNC(sub_83C6FBFC);
PPC_FUNC_IMPL(__imp__sub_83C6FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FC00"))) PPC_WEAK_FUNC(sub_83C6FC00);
PPC_FUNC_IMPL(__imp__sub_83C6FC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29880
	ctx.r3.s64 = ctx.r11.s64 + 29880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FC0C"))) PPC_WEAK_FUNC(sub_83C6FC0C);
PPC_FUNC_IMPL(__imp__sub_83C6FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FC10"))) PPC_WEAK_FUNC(sub_83C6FC10);
PPC_FUNC_IMPL(__imp__sub_83C6FC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FC1C"))) PPC_WEAK_FUNC(sub_83C6FC1C);
PPC_FUNC_IMPL(__imp__sub_83C6FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FC20"))) PPC_WEAK_FUNC(sub_83C6FC20);
PPC_FUNC_IMPL(__imp__sub_83C6FC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29896
	ctx.r3.s64 = ctx.r11.s64 + 29896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FC2C"))) PPC_WEAK_FUNC(sub_83C6FC2C);
PPC_FUNC_IMPL(__imp__sub_83C6FC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FC30"))) PPC_WEAK_FUNC(sub_83C6FC30);
PPC_FUNC_IMPL(__imp__sub_83C6FC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29904
	ctx.r3.s64 = ctx.r11.s64 + 29904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FC3C"))) PPC_WEAK_FUNC(sub_83C6FC3C);
PPC_FUNC_IMPL(__imp__sub_83C6FC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FC40"))) PPC_WEAK_FUNC(sub_83C6FC40);
PPC_FUNC_IMPL(__imp__sub_83C6FC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29912
	ctx.r3.s64 = ctx.r11.s64 + 29912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FC4C"))) PPC_WEAK_FUNC(sub_83C6FC4C);
PPC_FUNC_IMPL(__imp__sub_83C6FC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FC50"))) PPC_WEAK_FUNC(sub_83C6FC50);
PPC_FUNC_IMPL(__imp__sub_83C6FC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29920
	ctx.r3.s64 = ctx.r11.s64 + 29920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FC5C"))) PPC_WEAK_FUNC(sub_83C6FC5C);
PPC_FUNC_IMPL(__imp__sub_83C6FC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FC60"))) PPC_WEAK_FUNC(sub_83C6FC60);
PPC_FUNC_IMPL(__imp__sub_83C6FC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29928
	ctx.r3.s64 = ctx.r11.s64 + 29928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FC6C"))) PPC_WEAK_FUNC(sub_83C6FC6C);
PPC_FUNC_IMPL(__imp__sub_83C6FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FC70"))) PPC_WEAK_FUNC(sub_83C6FC70);
PPC_FUNC_IMPL(__imp__sub_83C6FC70) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-15480
	ctx.r3.s64 = ctx.r11.s64 + -15480;
	// bl 0x83523120
	ctx.lr = 0x83C6FC88;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,29936
	ctx.r3.s64 = ctx.r10.s64 + 29936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6FC94;
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

__attribute__((alias("__imp__sub_83C6FCA4"))) PPC_WEAK_FUNC(sub_83C6FCA4);
PPC_FUNC_IMPL(__imp__sub_83C6FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FCA8"))) PPC_WEAK_FUNC(sub_83C6FCA8);
PPC_FUNC_IMPL(__imp__sub_83C6FCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15464
	ctx.r7.s64 = ctx.r8.s64 + -15464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15464(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6FCD0"))) PPC_WEAK_FUNC(sub_83C6FCD0);
PPC_FUNC_IMPL(__imp__sub_83C6FCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-19844
	ctx.r6.s64 = ctx.r7.s64 + -19844;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19916(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19916);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15464);
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
	// std r9,-19844(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19844, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6FD18"))) PPC_WEAK_FUNC(sub_83C6FD18);
PPC_FUNC_IMPL(__imp__sub_83C6FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29952
	ctx.r3.s64 = ctx.r11.s64 + 29952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FD24"))) PPC_WEAK_FUNC(sub_83C6FD24);
PPC_FUNC_IMPL(__imp__sub_83C6FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FD28"))) PPC_WEAK_FUNC(sub_83C6FD28);
PPC_FUNC_IMPL(__imp__sub_83C6FD28) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-15456
	ctx.r3.s64 = ctx.r11.s64 + -15456;
	// bl 0x8259af80
	ctx.lr = 0x83C6FD40;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,29968
	ctx.r3.s64 = ctx.r10.s64 + 29968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6FD4C;
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

__attribute__((alias("__imp__sub_83C6FD5C"))) PPC_WEAK_FUNC(sub_83C6FD5C);
PPC_FUNC_IMPL(__imp__sub_83C6FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FD60"))) PPC_WEAK_FUNC(sub_83C6FD60);
PPC_FUNC_IMPL(__imp__sub_83C6FD60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15476
	ctx.r11.s64 = ctx.r8.s64 + -15476;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-19868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19868);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29960
	ctx.r3.s64 = ctx.r6.s64 + 29960;
	// stw r10,-15476(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15476, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FD90"))) PPC_WEAK_FUNC(sub_83C6FD90);
PPC_FUNC_IMPL(__imp__sub_83C6FD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29976
	ctx.r3.s64 = ctx.r11.s64 + 29976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FD9C"))) PPC_WEAK_FUNC(sub_83C6FD9C);
PPC_FUNC_IMPL(__imp__sub_83C6FD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FDA0"))) PPC_WEAK_FUNC(sub_83C6FDA0);
PPC_FUNC_IMPL(__imp__sub_83C6FDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29984
	ctx.r3.s64 = ctx.r11.s64 + 29984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FDAC"))) PPC_WEAK_FUNC(sub_83C6FDAC);
PPC_FUNC_IMPL(__imp__sub_83C6FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FDB0"))) PPC_WEAK_FUNC(sub_83C6FDB0);
PPC_FUNC_IMPL(__imp__sub_83C6FDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,29992
	ctx.r3.s64 = ctx.r11.s64 + 29992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FDBC"))) PPC_WEAK_FUNC(sub_83C6FDBC);
PPC_FUNC_IMPL(__imp__sub_83C6FDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FDC0"))) PPC_WEAK_FUNC(sub_83C6FDC0);
PPC_FUNC_IMPL(__imp__sub_83C6FDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30000
	ctx.r3.s64 = ctx.r11.s64 + 30000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FDCC"))) PPC_WEAK_FUNC(sub_83C6FDCC);
PPC_FUNC_IMPL(__imp__sub_83C6FDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FDD0"))) PPC_WEAK_FUNC(sub_83C6FDD0);
PPC_FUNC_IMPL(__imp__sub_83C6FDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30008
	ctx.r3.s64 = ctx.r11.s64 + 30008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FDDC"))) PPC_WEAK_FUNC(sub_83C6FDDC);
PPC_FUNC_IMPL(__imp__sub_83C6FDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FDE0"))) PPC_WEAK_FUNC(sub_83C6FDE0);
PPC_FUNC_IMPL(__imp__sub_83C6FDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30016
	ctx.r3.s64 = ctx.r11.s64 + 30016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FDEC"))) PPC_WEAK_FUNC(sub_83C6FDEC);
PPC_FUNC_IMPL(__imp__sub_83C6FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FDF0"))) PPC_WEAK_FUNC(sub_83C6FDF0);
PPC_FUNC_IMPL(__imp__sub_83C6FDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30024
	ctx.r3.s64 = ctx.r11.s64 + 30024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FDFC"))) PPC_WEAK_FUNC(sub_83C6FDFC);
PPC_FUNC_IMPL(__imp__sub_83C6FDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FE00"))) PPC_WEAK_FUNC(sub_83C6FE00);
PPC_FUNC_IMPL(__imp__sub_83C6FE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30032
	ctx.r3.s64 = ctx.r11.s64 + 30032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FE0C"))) PPC_WEAK_FUNC(sub_83C6FE0C);
PPC_FUNC_IMPL(__imp__sub_83C6FE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FE10"))) PPC_WEAK_FUNC(sub_83C6FE10);
PPC_FUNC_IMPL(__imp__sub_83C6FE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30040
	ctx.r3.s64 = ctx.r11.s64 + 30040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FE1C"))) PPC_WEAK_FUNC(sub_83C6FE1C);
PPC_FUNC_IMPL(__imp__sub_83C6FE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FE20"))) PPC_WEAK_FUNC(sub_83C6FE20);
PPC_FUNC_IMPL(__imp__sub_83C6FE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30048
	ctx.r3.s64 = ctx.r11.s64 + 30048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FE2C"))) PPC_WEAK_FUNC(sub_83C6FE2C);
PPC_FUNC_IMPL(__imp__sub_83C6FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FE30"))) PPC_WEAK_FUNC(sub_83C6FE30);
PPC_FUNC_IMPL(__imp__sub_83C6FE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30056
	ctx.r3.s64 = ctx.r11.s64 + 30056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FE3C"))) PPC_WEAK_FUNC(sub_83C6FE3C);
PPC_FUNC_IMPL(__imp__sub_83C6FE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FE40"))) PPC_WEAK_FUNC(sub_83C6FE40);
PPC_FUNC_IMPL(__imp__sub_83C6FE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30064
	ctx.r3.s64 = ctx.r11.s64 + 30064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FE4C"))) PPC_WEAK_FUNC(sub_83C6FE4C);
PPC_FUNC_IMPL(__imp__sub_83C6FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FE50"))) PPC_WEAK_FUNC(sub_83C6FE50);
PPC_FUNC_IMPL(__imp__sub_83C6FE50) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-15112
	ctx.r3.s64 = ctx.r11.s64 + -15112;
	// bl 0x83523120
	ctx.lr = 0x83C6FE68;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30072
	ctx.r3.s64 = ctx.r10.s64 + 30072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6FE74;
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

__attribute__((alias("__imp__sub_83C6FE84"))) PPC_WEAK_FUNC(sub_83C6FE84);
PPC_FUNC_IMPL(__imp__sub_83C6FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FE88"))) PPC_WEAK_FUNC(sub_83C6FE88);
PPC_FUNC_IMPL(__imp__sub_83C6FE88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15096
	ctx.r7.s64 = ctx.r8.s64 + -15096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15096(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6FEB0"))) PPC_WEAK_FUNC(sub_83C6FEB0);
PPC_FUNC_IMPL(__imp__sub_83C6FEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-19716
	ctx.r6.s64 = ctx.r7.s64 + -19716;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19788(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19788);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15096);
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
	// std r9,-19716(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19716, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6FEF8"))) PPC_WEAK_FUNC(sub_83C6FEF8);
PPC_FUNC_IMPL(__imp__sub_83C6FEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30088
	ctx.r3.s64 = ctx.r11.s64 + 30088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FF04"))) PPC_WEAK_FUNC(sub_83C6FF04);
PPC_FUNC_IMPL(__imp__sub_83C6FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FF08"))) PPC_WEAK_FUNC(sub_83C6FF08);
PPC_FUNC_IMPL(__imp__sub_83C6FF08) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-15088
	ctx.r3.s64 = ctx.r11.s64 + -15088;
	// bl 0x8259af80
	ctx.lr = 0x83C6FF20;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30104
	ctx.r3.s64 = ctx.r10.s64 + 30104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6FF2C;
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

__attribute__((alias("__imp__sub_83C6FF3C"))) PPC_WEAK_FUNC(sub_83C6FF3C);
PPC_FUNC_IMPL(__imp__sub_83C6FF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FF40"))) PPC_WEAK_FUNC(sub_83C6FF40);
PPC_FUNC_IMPL(__imp__sub_83C6FF40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15108
	ctx.r11.s64 = ctx.r8.s64 + -15108;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-19740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19740);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30096
	ctx.r3.s64 = ctx.r6.s64 + 30096;
	// stw r10,-15108(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15108, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FF70"))) PPC_WEAK_FUNC(sub_83C6FF70);
PPC_FUNC_IMPL(__imp__sub_83C6FF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30112
	ctx.r3.s64 = ctx.r11.s64 + 30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FF7C"))) PPC_WEAK_FUNC(sub_83C6FF7C);
PPC_FUNC_IMPL(__imp__sub_83C6FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FF80"))) PPC_WEAK_FUNC(sub_83C6FF80);
PPC_FUNC_IMPL(__imp__sub_83C6FF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FF8C"))) PPC_WEAK_FUNC(sub_83C6FF8C);
PPC_FUNC_IMPL(__imp__sub_83C6FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FF90"))) PPC_WEAK_FUNC(sub_83C6FF90);
PPC_FUNC_IMPL(__imp__sub_83C6FF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FF9C"))) PPC_WEAK_FUNC(sub_83C6FF9C);
PPC_FUNC_IMPL(__imp__sub_83C6FF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FFA0"))) PPC_WEAK_FUNC(sub_83C6FFA0);
PPC_FUNC_IMPL(__imp__sub_83C6FFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30136
	ctx.r3.s64 = ctx.r11.s64 + 30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FFAC"))) PPC_WEAK_FUNC(sub_83C6FFAC);
PPC_FUNC_IMPL(__imp__sub_83C6FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FFB0"))) PPC_WEAK_FUNC(sub_83C6FFB0);
PPC_FUNC_IMPL(__imp__sub_83C6FFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FFBC"))) PPC_WEAK_FUNC(sub_83C6FFBC);
PPC_FUNC_IMPL(__imp__sub_83C6FFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FFC0"))) PPC_WEAK_FUNC(sub_83C6FFC0);
PPC_FUNC_IMPL(__imp__sub_83C6FFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30152
	ctx.r3.s64 = ctx.r11.s64 + 30152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FFCC"))) PPC_WEAK_FUNC(sub_83C6FFCC);
PPC_FUNC_IMPL(__imp__sub_83C6FFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FFD0"))) PPC_WEAK_FUNC(sub_83C6FFD0);
PPC_FUNC_IMPL(__imp__sub_83C6FFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30160
	ctx.r3.s64 = ctx.r11.s64 + 30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FFDC"))) PPC_WEAK_FUNC(sub_83C6FFDC);
PPC_FUNC_IMPL(__imp__sub_83C6FFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FFE0"))) PPC_WEAK_FUNC(sub_83C6FFE0);
PPC_FUNC_IMPL(__imp__sub_83C6FFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FFEC"))) PPC_WEAK_FUNC(sub_83C6FFEC);
PPC_FUNC_IMPL(__imp__sub_83C6FFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6FFF0"))) PPC_WEAK_FUNC(sub_83C6FFF0);
PPC_FUNC_IMPL(__imp__sub_83C6FFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30176
	ctx.r3.s64 = ctx.r11.s64 + 30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6FFFC"))) PPC_WEAK_FUNC(sub_83C6FFFC);
PPC_FUNC_IMPL(__imp__sub_83C6FFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70000"))) PPC_WEAK_FUNC(sub_83C70000);
PPC_FUNC_IMPL(__imp__sub_83C70000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30184
	ctx.r3.s64 = ctx.r11.s64 + 30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7000C"))) PPC_WEAK_FUNC(sub_83C7000C);
PPC_FUNC_IMPL(__imp__sub_83C7000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70010"))) PPC_WEAK_FUNC(sub_83C70010);
PPC_FUNC_IMPL(__imp__sub_83C70010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7001C"))) PPC_WEAK_FUNC(sub_83C7001C);
PPC_FUNC_IMPL(__imp__sub_83C7001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70020"))) PPC_WEAK_FUNC(sub_83C70020);
PPC_FUNC_IMPL(__imp__sub_83C70020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30200
	ctx.r3.s64 = ctx.r11.s64 + 30200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7002C"))) PPC_WEAK_FUNC(sub_83C7002C);
PPC_FUNC_IMPL(__imp__sub_83C7002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70030"))) PPC_WEAK_FUNC(sub_83C70030);
PPC_FUNC_IMPL(__imp__sub_83C70030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30208
	ctx.r3.s64 = ctx.r11.s64 + 30208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7003C"))) PPC_WEAK_FUNC(sub_83C7003C);
PPC_FUNC_IMPL(__imp__sub_83C7003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70040"))) PPC_WEAK_FUNC(sub_83C70040);
PPC_FUNC_IMPL(__imp__sub_83C70040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30216
	ctx.r3.s64 = ctx.r11.s64 + 30216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7004C"))) PPC_WEAK_FUNC(sub_83C7004C);
PPC_FUNC_IMPL(__imp__sub_83C7004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70050"))) PPC_WEAK_FUNC(sub_83C70050);
PPC_FUNC_IMPL(__imp__sub_83C70050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30224
	ctx.r3.s64 = ctx.r11.s64 + 30224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7005C"))) PPC_WEAK_FUNC(sub_83C7005C);
PPC_FUNC_IMPL(__imp__sub_83C7005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70060"))) PPC_WEAK_FUNC(sub_83C70060);
PPC_FUNC_IMPL(__imp__sub_83C70060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30232
	ctx.r3.s64 = ctx.r11.s64 + 30232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7006C"))) PPC_WEAK_FUNC(sub_83C7006C);
PPC_FUNC_IMPL(__imp__sub_83C7006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70070"))) PPC_WEAK_FUNC(sub_83C70070);
PPC_FUNC_IMPL(__imp__sub_83C70070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30240
	ctx.r3.s64 = ctx.r11.s64 + 30240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7007C"))) PPC_WEAK_FUNC(sub_83C7007C);
PPC_FUNC_IMPL(__imp__sub_83C7007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70080"))) PPC_WEAK_FUNC(sub_83C70080);
PPC_FUNC_IMPL(__imp__sub_83C70080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30248
	ctx.r3.s64 = ctx.r11.s64 + 30248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7008C"))) PPC_WEAK_FUNC(sub_83C7008C);
PPC_FUNC_IMPL(__imp__sub_83C7008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70090"))) PPC_WEAK_FUNC(sub_83C70090);
PPC_FUNC_IMPL(__imp__sub_83C70090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30256
	ctx.r3.s64 = ctx.r11.s64 + 30256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7009C"))) PPC_WEAK_FUNC(sub_83C7009C);
PPC_FUNC_IMPL(__imp__sub_83C7009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C700A0"))) PPC_WEAK_FUNC(sub_83C700A0);
PPC_FUNC_IMPL(__imp__sub_83C700A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30264
	ctx.r3.s64 = ctx.r11.s64 + 30264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C700AC"))) PPC_WEAK_FUNC(sub_83C700AC);
PPC_FUNC_IMPL(__imp__sub_83C700AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C700B0"))) PPC_WEAK_FUNC(sub_83C700B0);
PPC_FUNC_IMPL(__imp__sub_83C700B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30272
	ctx.r3.s64 = ctx.r11.s64 + 30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C700BC"))) PPC_WEAK_FUNC(sub_83C700BC);
PPC_FUNC_IMPL(__imp__sub_83C700BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C700C0"))) PPC_WEAK_FUNC(sub_83C700C0);
PPC_FUNC_IMPL(__imp__sub_83C700C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30280
	ctx.r3.s64 = ctx.r11.s64 + 30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C700CC"))) PPC_WEAK_FUNC(sub_83C700CC);
PPC_FUNC_IMPL(__imp__sub_83C700CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C700D0"))) PPC_WEAK_FUNC(sub_83C700D0);
PPC_FUNC_IMPL(__imp__sub_83C700D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C700DC"))) PPC_WEAK_FUNC(sub_83C700DC);
PPC_FUNC_IMPL(__imp__sub_83C700DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C700E0"))) PPC_WEAK_FUNC(sub_83C700E0);
PPC_FUNC_IMPL(__imp__sub_83C700E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30296
	ctx.r3.s64 = ctx.r11.s64 + 30296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C700EC"))) PPC_WEAK_FUNC(sub_83C700EC);
PPC_FUNC_IMPL(__imp__sub_83C700EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C700F0"))) PPC_WEAK_FUNC(sub_83C700F0);
PPC_FUNC_IMPL(__imp__sub_83C700F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14720
	ctx.r7.s64 = ctx.r8.s64 + -14720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70118"))) PPC_WEAK_FUNC(sub_83C70118);
PPC_FUNC_IMPL(__imp__sub_83C70118) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-19484
	ctx.r6.s64 = ctx.r7.s64 + -19484;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14720);
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
	// std r9,-19484(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19484, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70160"))) PPC_WEAK_FUNC(sub_83C70160);
PPC_FUNC_IMPL(__imp__sub_83C70160) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-14736
	ctx.r3.s64 = ctx.r11.s64 + -14736;
	// bl 0x83523120
	ctx.lr = 0x83C70178;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30304
	ctx.r3.s64 = ctx.r10.s64 + 30304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70184;
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

__attribute__((alias("__imp__sub_83C70194"))) PPC_WEAK_FUNC(sub_83C70194);
PPC_FUNC_IMPL(__imp__sub_83C70194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70198"))) PPC_WEAK_FUNC(sub_83C70198);
PPC_FUNC_IMPL(__imp__sub_83C70198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30320
	ctx.r3.s64 = ctx.r11.s64 + 30320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C701A4"))) PPC_WEAK_FUNC(sub_83C701A4);
PPC_FUNC_IMPL(__imp__sub_83C701A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C701A8"))) PPC_WEAK_FUNC(sub_83C701A8);
PPC_FUNC_IMPL(__imp__sub_83C701A8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-14712
	ctx.r3.s64 = ctx.r11.s64 + -14712;
	// bl 0x8259af80
	ctx.lr = 0x83C701C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30336
	ctx.r3.s64 = ctx.r10.s64 + 30336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C701CC;
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

__attribute__((alias("__imp__sub_83C701DC"))) PPC_WEAK_FUNC(sub_83C701DC);
PPC_FUNC_IMPL(__imp__sub_83C701DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C701E0"))) PPC_WEAK_FUNC(sub_83C701E0);
PPC_FUNC_IMPL(__imp__sub_83C701E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14732
	ctx.r11.s64 = ctx.r8.s64 + -14732;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-19508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19508);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30328
	ctx.r3.s64 = ctx.r6.s64 + 30328;
	// stw r10,-14732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70210"))) PPC_WEAK_FUNC(sub_83C70210);
PPC_FUNC_IMPL(__imp__sub_83C70210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30344
	ctx.r3.s64 = ctx.r11.s64 + 30344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7021C"))) PPC_WEAK_FUNC(sub_83C7021C);
PPC_FUNC_IMPL(__imp__sub_83C7021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70220"))) PPC_WEAK_FUNC(sub_83C70220);
PPC_FUNC_IMPL(__imp__sub_83C70220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30352
	ctx.r3.s64 = ctx.r11.s64 + 30352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7022C"))) PPC_WEAK_FUNC(sub_83C7022C);
PPC_FUNC_IMPL(__imp__sub_83C7022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70230"))) PPC_WEAK_FUNC(sub_83C70230);
PPC_FUNC_IMPL(__imp__sub_83C70230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7023C"))) PPC_WEAK_FUNC(sub_83C7023C);
PPC_FUNC_IMPL(__imp__sub_83C7023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70240"))) PPC_WEAK_FUNC(sub_83C70240);
PPC_FUNC_IMPL(__imp__sub_83C70240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30368
	ctx.r3.s64 = ctx.r11.s64 + 30368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7024C"))) PPC_WEAK_FUNC(sub_83C7024C);
PPC_FUNC_IMPL(__imp__sub_83C7024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70250"))) PPC_WEAK_FUNC(sub_83C70250);
PPC_FUNC_IMPL(__imp__sub_83C70250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30376
	ctx.r3.s64 = ctx.r11.s64 + 30376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7025C"))) PPC_WEAK_FUNC(sub_83C7025C);
PPC_FUNC_IMPL(__imp__sub_83C7025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70260"))) PPC_WEAK_FUNC(sub_83C70260);
PPC_FUNC_IMPL(__imp__sub_83C70260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30384
	ctx.r3.s64 = ctx.r11.s64 + 30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7026C"))) PPC_WEAK_FUNC(sub_83C7026C);
PPC_FUNC_IMPL(__imp__sub_83C7026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70270"))) PPC_WEAK_FUNC(sub_83C70270);
PPC_FUNC_IMPL(__imp__sub_83C70270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30392
	ctx.r3.s64 = ctx.r11.s64 + 30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7027C"))) PPC_WEAK_FUNC(sub_83C7027C);
PPC_FUNC_IMPL(__imp__sub_83C7027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70280"))) PPC_WEAK_FUNC(sub_83C70280);
PPC_FUNC_IMPL(__imp__sub_83C70280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7028C"))) PPC_WEAK_FUNC(sub_83C7028C);
PPC_FUNC_IMPL(__imp__sub_83C7028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70290"))) PPC_WEAK_FUNC(sub_83C70290);
PPC_FUNC_IMPL(__imp__sub_83C70290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30408
	ctx.r3.s64 = ctx.r11.s64 + 30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7029C"))) PPC_WEAK_FUNC(sub_83C7029C);
PPC_FUNC_IMPL(__imp__sub_83C7029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C702A0"))) PPC_WEAK_FUNC(sub_83C702A0);
PPC_FUNC_IMPL(__imp__sub_83C702A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30416
	ctx.r3.s64 = ctx.r11.s64 + 30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C702AC"))) PPC_WEAK_FUNC(sub_83C702AC);
PPC_FUNC_IMPL(__imp__sub_83C702AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C702B0"))) PPC_WEAK_FUNC(sub_83C702B0);
PPC_FUNC_IMPL(__imp__sub_83C702B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30424
	ctx.r3.s64 = ctx.r11.s64 + 30424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C702BC"))) PPC_WEAK_FUNC(sub_83C702BC);
PPC_FUNC_IMPL(__imp__sub_83C702BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C702C0"))) PPC_WEAK_FUNC(sub_83C702C0);
PPC_FUNC_IMPL(__imp__sub_83C702C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30432
	ctx.r3.s64 = ctx.r11.s64 + 30432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C702CC"))) PPC_WEAK_FUNC(sub_83C702CC);
PPC_FUNC_IMPL(__imp__sub_83C702CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C702D0"))) PPC_WEAK_FUNC(sub_83C702D0);
PPC_FUNC_IMPL(__imp__sub_83C702D0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-14368
	ctx.r3.s64 = ctx.r11.s64 + -14368;
	// bl 0x83523120
	ctx.lr = 0x83C702E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30440
	ctx.r3.s64 = ctx.r10.s64 + 30440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C702F4;
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

__attribute__((alias("__imp__sub_83C70304"))) PPC_WEAK_FUNC(sub_83C70304);
PPC_FUNC_IMPL(__imp__sub_83C70304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70308"))) PPC_WEAK_FUNC(sub_83C70308);
PPC_FUNC_IMPL(__imp__sub_83C70308) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14352
	ctx.r7.s64 = ctx.r8.s64 + -14352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14352(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70330"))) PPC_WEAK_FUNC(sub_83C70330);
PPC_FUNC_IMPL(__imp__sub_83C70330) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-19356
	ctx.r6.s64 = ctx.r7.s64 + -19356;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14352);
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
	// std r9,-19356(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70378"))) PPC_WEAK_FUNC(sub_83C70378);
PPC_FUNC_IMPL(__imp__sub_83C70378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70384"))) PPC_WEAK_FUNC(sub_83C70384);
PPC_FUNC_IMPL(__imp__sub_83C70384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70388"))) PPC_WEAK_FUNC(sub_83C70388);
PPC_FUNC_IMPL(__imp__sub_83C70388) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-14344
	ctx.r3.s64 = ctx.r11.s64 + -14344;
	// bl 0x8259af80
	ctx.lr = 0x83C703A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30472
	ctx.r3.s64 = ctx.r10.s64 + 30472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C703AC;
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

__attribute__((alias("__imp__sub_83C703BC"))) PPC_WEAK_FUNC(sub_83C703BC);
PPC_FUNC_IMPL(__imp__sub_83C703BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C703C0"))) PPC_WEAK_FUNC(sub_83C703C0);
PPC_FUNC_IMPL(__imp__sub_83C703C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14364
	ctx.r11.s64 = ctx.r8.s64 + -14364;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-19380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19380);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30464
	ctx.r3.s64 = ctx.r6.s64 + 30464;
	// stw r10,-14364(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14364, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C703F0"))) PPC_WEAK_FUNC(sub_83C703F0);
PPC_FUNC_IMPL(__imp__sub_83C703F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30480
	ctx.r3.s64 = ctx.r11.s64 + 30480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C703FC"))) PPC_WEAK_FUNC(sub_83C703FC);
PPC_FUNC_IMPL(__imp__sub_83C703FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70400"))) PPC_WEAK_FUNC(sub_83C70400);
PPC_FUNC_IMPL(__imp__sub_83C70400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30488
	ctx.r3.s64 = ctx.r11.s64 + 30488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7040C"))) PPC_WEAK_FUNC(sub_83C7040C);
PPC_FUNC_IMPL(__imp__sub_83C7040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70410"))) PPC_WEAK_FUNC(sub_83C70410);
PPC_FUNC_IMPL(__imp__sub_83C70410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30496
	ctx.r3.s64 = ctx.r11.s64 + 30496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7041C"))) PPC_WEAK_FUNC(sub_83C7041C);
PPC_FUNC_IMPL(__imp__sub_83C7041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70420"))) PPC_WEAK_FUNC(sub_83C70420);
PPC_FUNC_IMPL(__imp__sub_83C70420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30504
	ctx.r3.s64 = ctx.r11.s64 + 30504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7042C"))) PPC_WEAK_FUNC(sub_83C7042C);
PPC_FUNC_IMPL(__imp__sub_83C7042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70430"))) PPC_WEAK_FUNC(sub_83C70430);
PPC_FUNC_IMPL(__imp__sub_83C70430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30512
	ctx.r3.s64 = ctx.r11.s64 + 30512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7043C"))) PPC_WEAK_FUNC(sub_83C7043C);
PPC_FUNC_IMPL(__imp__sub_83C7043C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70440"))) PPC_WEAK_FUNC(sub_83C70440);
PPC_FUNC_IMPL(__imp__sub_83C70440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7044C"))) PPC_WEAK_FUNC(sub_83C7044C);
PPC_FUNC_IMPL(__imp__sub_83C7044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70450"))) PPC_WEAK_FUNC(sub_83C70450);
PPC_FUNC_IMPL(__imp__sub_83C70450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7045C"))) PPC_WEAK_FUNC(sub_83C7045C);
PPC_FUNC_IMPL(__imp__sub_83C7045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70460"))) PPC_WEAK_FUNC(sub_83C70460);
PPC_FUNC_IMPL(__imp__sub_83C70460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7046C"))) PPC_WEAK_FUNC(sub_83C7046C);
PPC_FUNC_IMPL(__imp__sub_83C7046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70470"))) PPC_WEAK_FUNC(sub_83C70470);
PPC_FUNC_IMPL(__imp__sub_83C70470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7047C"))) PPC_WEAK_FUNC(sub_83C7047C);
PPC_FUNC_IMPL(__imp__sub_83C7047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70480"))) PPC_WEAK_FUNC(sub_83C70480);
PPC_FUNC_IMPL(__imp__sub_83C70480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30552
	ctx.r3.s64 = ctx.r11.s64 + 30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7048C"))) PPC_WEAK_FUNC(sub_83C7048C);
PPC_FUNC_IMPL(__imp__sub_83C7048C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70490"))) PPC_WEAK_FUNC(sub_83C70490);
PPC_FUNC_IMPL(__imp__sub_83C70490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7049C"))) PPC_WEAK_FUNC(sub_83C7049C);
PPC_FUNC_IMPL(__imp__sub_83C7049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C704A0"))) PPC_WEAK_FUNC(sub_83C704A0);
PPC_FUNC_IMPL(__imp__sub_83C704A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30568
	ctx.r3.s64 = ctx.r11.s64 + 30568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C704AC"))) PPC_WEAK_FUNC(sub_83C704AC);
PPC_FUNC_IMPL(__imp__sub_83C704AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C704B0"))) PPC_WEAK_FUNC(sub_83C704B0);
PPC_FUNC_IMPL(__imp__sub_83C704B0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-14000
	ctx.r3.s64 = ctx.r11.s64 + -14000;
	// bl 0x83523120
	ctx.lr = 0x83C704C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30576
	ctx.r3.s64 = ctx.r10.s64 + 30576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C704D4;
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

__attribute__((alias("__imp__sub_83C704E4"))) PPC_WEAK_FUNC(sub_83C704E4);
PPC_FUNC_IMPL(__imp__sub_83C704E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C704E8"))) PPC_WEAK_FUNC(sub_83C704E8);
PPC_FUNC_IMPL(__imp__sub_83C704E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13996
	ctx.r7.s64 = ctx.r8.s64 + -13996;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13996(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13996);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13996(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13996, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70510"))) PPC_WEAK_FUNC(sub_83C70510);
PPC_FUNC_IMPL(__imp__sub_83C70510) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-19228
	ctx.r6.s64 = ctx.r7.s64 + -19228;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19300(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19300);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13996(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13996);
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
	// std r9,-19228(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19228, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70558"))) PPC_WEAK_FUNC(sub_83C70558);
PPC_FUNC_IMPL(__imp__sub_83C70558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30592
	ctx.r3.s64 = ctx.r11.s64 + 30592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70564"))) PPC_WEAK_FUNC(sub_83C70564);
PPC_FUNC_IMPL(__imp__sub_83C70564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70568"))) PPC_WEAK_FUNC(sub_83C70568);
PPC_FUNC_IMPL(__imp__sub_83C70568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30600
	ctx.r3.s64 = ctx.r11.s64 + 30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70574"))) PPC_WEAK_FUNC(sub_83C70574);
PPC_FUNC_IMPL(__imp__sub_83C70574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70578"))) PPC_WEAK_FUNC(sub_83C70578);
PPC_FUNC_IMPL(__imp__sub_83C70578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30608
	ctx.r3.s64 = ctx.r11.s64 + 30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70584"))) PPC_WEAK_FUNC(sub_83C70584);
PPC_FUNC_IMPL(__imp__sub_83C70584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70588"))) PPC_WEAK_FUNC(sub_83C70588);
PPC_FUNC_IMPL(__imp__sub_83C70588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30616
	ctx.r3.s64 = ctx.r11.s64 + 30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70594"))) PPC_WEAK_FUNC(sub_83C70594);
PPC_FUNC_IMPL(__imp__sub_83C70594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70598"))) PPC_WEAK_FUNC(sub_83C70598);
PPC_FUNC_IMPL(__imp__sub_83C70598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30624
	ctx.r3.s64 = ctx.r11.s64 + 30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C705A4"))) PPC_WEAK_FUNC(sub_83C705A4);
PPC_FUNC_IMPL(__imp__sub_83C705A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C705A8"))) PPC_WEAK_FUNC(sub_83C705A8);
PPC_FUNC_IMPL(__imp__sub_83C705A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30632
	ctx.r3.s64 = ctx.r11.s64 + 30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C705B4"))) PPC_WEAK_FUNC(sub_83C705B4);
PPC_FUNC_IMPL(__imp__sub_83C705B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C705B8"))) PPC_WEAK_FUNC(sub_83C705B8);
PPC_FUNC_IMPL(__imp__sub_83C705B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30640
	ctx.r3.s64 = ctx.r11.s64 + 30640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C705C4"))) PPC_WEAK_FUNC(sub_83C705C4);
PPC_FUNC_IMPL(__imp__sub_83C705C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C705C8"))) PPC_WEAK_FUNC(sub_83C705C8);
PPC_FUNC_IMPL(__imp__sub_83C705C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30648
	ctx.r3.s64 = ctx.r11.s64 + 30648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C705D4"))) PPC_WEAK_FUNC(sub_83C705D4);
PPC_FUNC_IMPL(__imp__sub_83C705D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C705D8"))) PPC_WEAK_FUNC(sub_83C705D8);
PPC_FUNC_IMPL(__imp__sub_83C705D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C705E4"))) PPC_WEAK_FUNC(sub_83C705E4);
PPC_FUNC_IMPL(__imp__sub_83C705E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

