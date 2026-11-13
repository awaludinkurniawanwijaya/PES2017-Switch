#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C7DB78"))) PPC_WEAK_FUNC(sub_83C7DB78);
PPC_FUNC_IMPL(__imp__sub_83C7DB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB84"))) PPC_WEAK_FUNC(sub_83C7DB84);
PPC_FUNC_IMPL(__imp__sub_83C7DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB88"))) PPC_WEAK_FUNC(sub_83C7DB88);
PPC_FUNC_IMPL(__imp__sub_83C7DB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13720
	ctx.r3.s64 = ctx.r11.s64 + -13720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB94"))) PPC_WEAK_FUNC(sub_83C7DB94);
PPC_FUNC_IMPL(__imp__sub_83C7DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB98"))) PPC_WEAK_FUNC(sub_83C7DB98);
PPC_FUNC_IMPL(__imp__sub_83C7DB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DBA4"))) PPC_WEAK_FUNC(sub_83C7DBA4);
PPC_FUNC_IMPL(__imp__sub_83C7DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DBA8"))) PPC_WEAK_FUNC(sub_83C7DBA8);
PPC_FUNC_IMPL(__imp__sub_83C7DBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13704
	ctx.r3.s64 = ctx.r11.s64 + -13704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DBB4"))) PPC_WEAK_FUNC(sub_83C7DBB4);
PPC_FUNC_IMPL(__imp__sub_83C7DBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DBB8"))) PPC_WEAK_FUNC(sub_83C7DBB8);
PPC_FUNC_IMPL(__imp__sub_83C7DBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15216
	ctx.r7.s64 = ctx.r8.s64 + 15216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7DBE0"))) PPC_WEAK_FUNC(sub_83C7DBE0);
PPC_FUNC_IMPL(__imp__sub_83C7DBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-1296
	ctx.r6.s64 = ctx.r7.s64 + -1296;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1368(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1368);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15216);
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
	// std r9,-1296(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1296, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7DC28"))) PPC_WEAK_FUNC(sub_83C7DC28);
PPC_FUNC_IMPL(__imp__sub_83C7DC28) {
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
	// addi r3,r11,15200
	ctx.r3.s64 = ctx.r11.s64 + 15200;
	// bl 0x83523120
	ctx.lr = 0x83C7DC40;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-13696
	ctx.r3.s64 = ctx.r10.s64 + -13696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7DC4C;
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

__attribute__((alias("__imp__sub_83C7DC5C"))) PPC_WEAK_FUNC(sub_83C7DC5C);
PPC_FUNC_IMPL(__imp__sub_83C7DC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DC60"))) PPC_WEAK_FUNC(sub_83C7DC60);
PPC_FUNC_IMPL(__imp__sub_83C7DC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13680
	ctx.r3.s64 = ctx.r11.s64 + -13680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DC6C"))) PPC_WEAK_FUNC(sub_83C7DC6C);
PPC_FUNC_IMPL(__imp__sub_83C7DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DC70"))) PPC_WEAK_FUNC(sub_83C7DC70);
PPC_FUNC_IMPL(__imp__sub_83C7DC70) {
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
	// addi r3,r11,15224
	ctx.r3.s64 = ctx.r11.s64 + 15224;
	// bl 0x8259af80
	ctx.lr = 0x83C7DC88;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-13656
	ctx.r3.s64 = ctx.r10.s64 + -13656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7DC94;
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

__attribute__((alias("__imp__sub_83C7DCA4"))) PPC_WEAK_FUNC(sub_83C7DCA4);
PPC_FUNC_IMPL(__imp__sub_83C7DCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DCA8"))) PPC_WEAK_FUNC(sub_83C7DCA8);
PPC_FUNC_IMPL(__imp__sub_83C7DCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15204
	ctx.r11.s64 = ctx.r8.s64 + 15204;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1320);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13672
	ctx.r3.s64 = ctx.r6.s64 + -13672;
	// stw r10,15204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DCD8"))) PPC_WEAK_FUNC(sub_83C7DCD8);
PPC_FUNC_IMPL(__imp__sub_83C7DCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13664
	ctx.r3.s64 = ctx.r11.s64 + -13664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DCE4"))) PPC_WEAK_FUNC(sub_83C7DCE4);
PPC_FUNC_IMPL(__imp__sub_83C7DCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DCE8"))) PPC_WEAK_FUNC(sub_83C7DCE8);
PPC_FUNC_IMPL(__imp__sub_83C7DCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13648
	ctx.r3.s64 = ctx.r11.s64 + -13648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DCF4"))) PPC_WEAK_FUNC(sub_83C7DCF4);
PPC_FUNC_IMPL(__imp__sub_83C7DCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DCF8"))) PPC_WEAK_FUNC(sub_83C7DCF8);
PPC_FUNC_IMPL(__imp__sub_83C7DCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13640
	ctx.r3.s64 = ctx.r11.s64 + -13640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD04"))) PPC_WEAK_FUNC(sub_83C7DD04);
PPC_FUNC_IMPL(__imp__sub_83C7DD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD08"))) PPC_WEAK_FUNC(sub_83C7DD08);
PPC_FUNC_IMPL(__imp__sub_83C7DD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD14"))) PPC_WEAK_FUNC(sub_83C7DD14);
PPC_FUNC_IMPL(__imp__sub_83C7DD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD18"))) PPC_WEAK_FUNC(sub_83C7DD18);
PPC_FUNC_IMPL(__imp__sub_83C7DD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13624
	ctx.r3.s64 = ctx.r11.s64 + -13624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD24"))) PPC_WEAK_FUNC(sub_83C7DD24);
PPC_FUNC_IMPL(__imp__sub_83C7DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD28"))) PPC_WEAK_FUNC(sub_83C7DD28);
PPC_FUNC_IMPL(__imp__sub_83C7DD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13616
	ctx.r3.s64 = ctx.r11.s64 + -13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD34"))) PPC_WEAK_FUNC(sub_83C7DD34);
PPC_FUNC_IMPL(__imp__sub_83C7DD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD38"))) PPC_WEAK_FUNC(sub_83C7DD38);
PPC_FUNC_IMPL(__imp__sub_83C7DD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13608
	ctx.r3.s64 = ctx.r11.s64 + -13608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD44"))) PPC_WEAK_FUNC(sub_83C7DD44);
PPC_FUNC_IMPL(__imp__sub_83C7DD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD48"))) PPC_WEAK_FUNC(sub_83C7DD48);
PPC_FUNC_IMPL(__imp__sub_83C7DD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13600
	ctx.r3.s64 = ctx.r11.s64 + -13600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD54"))) PPC_WEAK_FUNC(sub_83C7DD54);
PPC_FUNC_IMPL(__imp__sub_83C7DD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD58"))) PPC_WEAK_FUNC(sub_83C7DD58);
PPC_FUNC_IMPL(__imp__sub_83C7DD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13592
	ctx.r3.s64 = ctx.r11.s64 + -13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD64"))) PPC_WEAK_FUNC(sub_83C7DD64);
PPC_FUNC_IMPL(__imp__sub_83C7DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD68"))) PPC_WEAK_FUNC(sub_83C7DD68);
PPC_FUNC_IMPL(__imp__sub_83C7DD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13584
	ctx.r3.s64 = ctx.r11.s64 + -13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD74"))) PPC_WEAK_FUNC(sub_83C7DD74);
PPC_FUNC_IMPL(__imp__sub_83C7DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD78"))) PPC_WEAK_FUNC(sub_83C7DD78);
PPC_FUNC_IMPL(__imp__sub_83C7DD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13576
	ctx.r3.s64 = ctx.r11.s64 + -13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD84"))) PPC_WEAK_FUNC(sub_83C7DD84);
PPC_FUNC_IMPL(__imp__sub_83C7DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD88"))) PPC_WEAK_FUNC(sub_83C7DD88);
PPC_FUNC_IMPL(__imp__sub_83C7DD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DD94"))) PPC_WEAK_FUNC(sub_83C7DD94);
PPC_FUNC_IMPL(__imp__sub_83C7DD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DD98"))) PPC_WEAK_FUNC(sub_83C7DD98);
PPC_FUNC_IMPL(__imp__sub_83C7DD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13560
	ctx.r3.s64 = ctx.r11.s64 + -13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DDA4"))) PPC_WEAK_FUNC(sub_83C7DDA4);
PPC_FUNC_IMPL(__imp__sub_83C7DDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DDA8"))) PPC_WEAK_FUNC(sub_83C7DDA8);
PPC_FUNC_IMPL(__imp__sub_83C7DDA8) {
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
	// addi r3,r11,15572
	ctx.r3.s64 = ctx.r11.s64 + 15572;
	// bl 0x83523120
	ctx.lr = 0x83C7DDC0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-13552
	ctx.r3.s64 = ctx.r10.s64 + -13552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7DDCC;
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

__attribute__((alias("__imp__sub_83C7DDDC"))) PPC_WEAK_FUNC(sub_83C7DDDC);
PPC_FUNC_IMPL(__imp__sub_83C7DDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DDE0"))) PPC_WEAK_FUNC(sub_83C7DDE0);
PPC_FUNC_IMPL(__imp__sub_83C7DDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13536
	ctx.r3.s64 = ctx.r11.s64 + -13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DDEC"))) PPC_WEAK_FUNC(sub_83C7DDEC);
PPC_FUNC_IMPL(__imp__sub_83C7DDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DDF0"))) PPC_WEAK_FUNC(sub_83C7DDF0);
PPC_FUNC_IMPL(__imp__sub_83C7DDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13528
	ctx.r3.s64 = ctx.r11.s64 + -13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DDFC"))) PPC_WEAK_FUNC(sub_83C7DDFC);
PPC_FUNC_IMPL(__imp__sub_83C7DDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE00"))) PPC_WEAK_FUNC(sub_83C7DE00);
PPC_FUNC_IMPL(__imp__sub_83C7DE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13520
	ctx.r3.s64 = ctx.r11.s64 + -13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE0C"))) PPC_WEAK_FUNC(sub_83C7DE0C);
PPC_FUNC_IMPL(__imp__sub_83C7DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE10"))) PPC_WEAK_FUNC(sub_83C7DE10);
PPC_FUNC_IMPL(__imp__sub_83C7DE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13512
	ctx.r3.s64 = ctx.r11.s64 + -13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE1C"))) PPC_WEAK_FUNC(sub_83C7DE1C);
PPC_FUNC_IMPL(__imp__sub_83C7DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE20"))) PPC_WEAK_FUNC(sub_83C7DE20);
PPC_FUNC_IMPL(__imp__sub_83C7DE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13504
	ctx.r3.s64 = ctx.r11.s64 + -13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE2C"))) PPC_WEAK_FUNC(sub_83C7DE2C);
PPC_FUNC_IMPL(__imp__sub_83C7DE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE30"))) PPC_WEAK_FUNC(sub_83C7DE30);
PPC_FUNC_IMPL(__imp__sub_83C7DE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE3C"))) PPC_WEAK_FUNC(sub_83C7DE3C);
PPC_FUNC_IMPL(__imp__sub_83C7DE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE40"))) PPC_WEAK_FUNC(sub_83C7DE40);
PPC_FUNC_IMPL(__imp__sub_83C7DE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE4C"))) PPC_WEAK_FUNC(sub_83C7DE4C);
PPC_FUNC_IMPL(__imp__sub_83C7DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE50"))) PPC_WEAK_FUNC(sub_83C7DE50);
PPC_FUNC_IMPL(__imp__sub_83C7DE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13480
	ctx.r3.s64 = ctx.r11.s64 + -13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE5C"))) PPC_WEAK_FUNC(sub_83C7DE5C);
PPC_FUNC_IMPL(__imp__sub_83C7DE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE60"))) PPC_WEAK_FUNC(sub_83C7DE60);
PPC_FUNC_IMPL(__imp__sub_83C7DE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13472
	ctx.r3.s64 = ctx.r11.s64 + -13472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE6C"))) PPC_WEAK_FUNC(sub_83C7DE6C);
PPC_FUNC_IMPL(__imp__sub_83C7DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE70"))) PPC_WEAK_FUNC(sub_83C7DE70);
PPC_FUNC_IMPL(__imp__sub_83C7DE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13464
	ctx.r3.s64 = ctx.r11.s64 + -13464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE7C"))) PPC_WEAK_FUNC(sub_83C7DE7C);
PPC_FUNC_IMPL(__imp__sub_83C7DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE80"))) PPC_WEAK_FUNC(sub_83C7DE80);
PPC_FUNC_IMPL(__imp__sub_83C7DE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13456
	ctx.r3.s64 = ctx.r11.s64 + -13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE8C"))) PPC_WEAK_FUNC(sub_83C7DE8C);
PPC_FUNC_IMPL(__imp__sub_83C7DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DE90"))) PPC_WEAK_FUNC(sub_83C7DE90);
PPC_FUNC_IMPL(__imp__sub_83C7DE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13448
	ctx.r3.s64 = ctx.r11.s64 + -13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DE9C"))) PPC_WEAK_FUNC(sub_83C7DE9C);
PPC_FUNC_IMPL(__imp__sub_83C7DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DEA0"))) PPC_WEAK_FUNC(sub_83C7DEA0);
PPC_FUNC_IMPL(__imp__sub_83C7DEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13440
	ctx.r3.s64 = ctx.r11.s64 + -13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DEAC"))) PPC_WEAK_FUNC(sub_83C7DEAC);
PPC_FUNC_IMPL(__imp__sub_83C7DEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DEB0"))) PPC_WEAK_FUNC(sub_83C7DEB0);
PPC_FUNC_IMPL(__imp__sub_83C7DEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13432
	ctx.r3.s64 = ctx.r11.s64 + -13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DEBC"))) PPC_WEAK_FUNC(sub_83C7DEBC);
PPC_FUNC_IMPL(__imp__sub_83C7DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DEC0"))) PPC_WEAK_FUNC(sub_83C7DEC0);
PPC_FUNC_IMPL(__imp__sub_83C7DEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DECC"))) PPC_WEAK_FUNC(sub_83C7DECC);
PPC_FUNC_IMPL(__imp__sub_83C7DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DED0"))) PPC_WEAK_FUNC(sub_83C7DED0);
PPC_FUNC_IMPL(__imp__sub_83C7DED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13416
	ctx.r3.s64 = ctx.r11.s64 + -13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DEDC"))) PPC_WEAK_FUNC(sub_83C7DEDC);
PPC_FUNC_IMPL(__imp__sub_83C7DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DEE0"))) PPC_WEAK_FUNC(sub_83C7DEE0);
PPC_FUNC_IMPL(__imp__sub_83C7DEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13408
	ctx.r3.s64 = ctx.r11.s64 + -13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DEEC"))) PPC_WEAK_FUNC(sub_83C7DEEC);
PPC_FUNC_IMPL(__imp__sub_83C7DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DEF0"))) PPC_WEAK_FUNC(sub_83C7DEF0);
PPC_FUNC_IMPL(__imp__sub_83C7DEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13400
	ctx.r3.s64 = ctx.r11.s64 + -13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DEFC"))) PPC_WEAK_FUNC(sub_83C7DEFC);
PPC_FUNC_IMPL(__imp__sub_83C7DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF00"))) PPC_WEAK_FUNC(sub_83C7DF00);
PPC_FUNC_IMPL(__imp__sub_83C7DF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13392
	ctx.r3.s64 = ctx.r11.s64 + -13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF0C"))) PPC_WEAK_FUNC(sub_83C7DF0C);
PPC_FUNC_IMPL(__imp__sub_83C7DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF10"))) PPC_WEAK_FUNC(sub_83C7DF10);
PPC_FUNC_IMPL(__imp__sub_83C7DF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13384
	ctx.r3.s64 = ctx.r11.s64 + -13384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF1C"))) PPC_WEAK_FUNC(sub_83C7DF1C);
PPC_FUNC_IMPL(__imp__sub_83C7DF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF20"))) PPC_WEAK_FUNC(sub_83C7DF20);
PPC_FUNC_IMPL(__imp__sub_83C7DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13376
	ctx.r3.s64 = ctx.r11.s64 + -13376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF2C"))) PPC_WEAK_FUNC(sub_83C7DF2C);
PPC_FUNC_IMPL(__imp__sub_83C7DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF30"))) PPC_WEAK_FUNC(sub_83C7DF30);
PPC_FUNC_IMPL(__imp__sub_83C7DF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13368
	ctx.r3.s64 = ctx.r11.s64 + -13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF3C"))) PPC_WEAK_FUNC(sub_83C7DF3C);
PPC_FUNC_IMPL(__imp__sub_83C7DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF40"))) PPC_WEAK_FUNC(sub_83C7DF40);
PPC_FUNC_IMPL(__imp__sub_83C7DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13360
	ctx.r3.s64 = ctx.r11.s64 + -13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF4C"))) PPC_WEAK_FUNC(sub_83C7DF4C);
PPC_FUNC_IMPL(__imp__sub_83C7DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF50"))) PPC_WEAK_FUNC(sub_83C7DF50);
PPC_FUNC_IMPL(__imp__sub_83C7DF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF5C"))) PPC_WEAK_FUNC(sub_83C7DF5C);
PPC_FUNC_IMPL(__imp__sub_83C7DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF60"))) PPC_WEAK_FUNC(sub_83C7DF60);
PPC_FUNC_IMPL(__imp__sub_83C7DF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13344
	ctx.r3.s64 = ctx.r11.s64 + -13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF6C"))) PPC_WEAK_FUNC(sub_83C7DF6C);
PPC_FUNC_IMPL(__imp__sub_83C7DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF70"))) PPC_WEAK_FUNC(sub_83C7DF70);
PPC_FUNC_IMPL(__imp__sub_83C7DF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13336
	ctx.r3.s64 = ctx.r11.s64 + -13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF7C"))) PPC_WEAK_FUNC(sub_83C7DF7C);
PPC_FUNC_IMPL(__imp__sub_83C7DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF80"))) PPC_WEAK_FUNC(sub_83C7DF80);
PPC_FUNC_IMPL(__imp__sub_83C7DF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13328
	ctx.r3.s64 = ctx.r11.s64 + -13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF8C"))) PPC_WEAK_FUNC(sub_83C7DF8C);
PPC_FUNC_IMPL(__imp__sub_83C7DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DF90"))) PPC_WEAK_FUNC(sub_83C7DF90);
PPC_FUNC_IMPL(__imp__sub_83C7DF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13320
	ctx.r3.s64 = ctx.r11.s64 + -13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DF9C"))) PPC_WEAK_FUNC(sub_83C7DF9C);
PPC_FUNC_IMPL(__imp__sub_83C7DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DFA0"))) PPC_WEAK_FUNC(sub_83C7DFA0);
PPC_FUNC_IMPL(__imp__sub_83C7DFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13312
	ctx.r3.s64 = ctx.r11.s64 + -13312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DFAC"))) PPC_WEAK_FUNC(sub_83C7DFAC);
PPC_FUNC_IMPL(__imp__sub_83C7DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DFB0"))) PPC_WEAK_FUNC(sub_83C7DFB0);
PPC_FUNC_IMPL(__imp__sub_83C7DFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DFBC"))) PPC_WEAK_FUNC(sub_83C7DFBC);
PPC_FUNC_IMPL(__imp__sub_83C7DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DFC0"))) PPC_WEAK_FUNC(sub_83C7DFC0);
PPC_FUNC_IMPL(__imp__sub_83C7DFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13296
	ctx.r3.s64 = ctx.r11.s64 + -13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DFCC"))) PPC_WEAK_FUNC(sub_83C7DFCC);
PPC_FUNC_IMPL(__imp__sub_83C7DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DFD0"))) PPC_WEAK_FUNC(sub_83C7DFD0);
PPC_FUNC_IMPL(__imp__sub_83C7DFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13288
	ctx.r3.s64 = ctx.r11.s64 + -13288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DFDC"))) PPC_WEAK_FUNC(sub_83C7DFDC);
PPC_FUNC_IMPL(__imp__sub_83C7DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DFE0"))) PPC_WEAK_FUNC(sub_83C7DFE0);
PPC_FUNC_IMPL(__imp__sub_83C7DFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13280
	ctx.r3.s64 = ctx.r11.s64 + -13280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DFEC"))) PPC_WEAK_FUNC(sub_83C7DFEC);
PPC_FUNC_IMPL(__imp__sub_83C7DFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DFF0"))) PPC_WEAK_FUNC(sub_83C7DFF0);
PPC_FUNC_IMPL(__imp__sub_83C7DFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13272
	ctx.r3.s64 = ctx.r11.s64 + -13272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DFFC"))) PPC_WEAK_FUNC(sub_83C7DFFC);
PPC_FUNC_IMPL(__imp__sub_83C7DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E000"))) PPC_WEAK_FUNC(sub_83C7E000);
PPC_FUNC_IMPL(__imp__sub_83C7E000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E00C"))) PPC_WEAK_FUNC(sub_83C7E00C);
PPC_FUNC_IMPL(__imp__sub_83C7E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E010"))) PPC_WEAK_FUNC(sub_83C7E010);
PPC_FUNC_IMPL(__imp__sub_83C7E010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13256
	ctx.r3.s64 = ctx.r11.s64 + -13256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E01C"))) PPC_WEAK_FUNC(sub_83C7E01C);
PPC_FUNC_IMPL(__imp__sub_83C7E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E020"))) PPC_WEAK_FUNC(sub_83C7E020);
PPC_FUNC_IMPL(__imp__sub_83C7E020) {
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
	// addi r3,r11,15588
	ctx.r3.s64 = ctx.r11.s64 + 15588;
	// bl 0x83523120
	ctx.lr = 0x83C7E038;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-13248
	ctx.r3.s64 = ctx.r10.s64 + -13248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7E044;
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

__attribute__((alias("__imp__sub_83C7E054"))) PPC_WEAK_FUNC(sub_83C7E054);
PPC_FUNC_IMPL(__imp__sub_83C7E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E058"))) PPC_WEAK_FUNC(sub_83C7E058);
PPC_FUNC_IMPL(__imp__sub_83C7E058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E064"))) PPC_WEAK_FUNC(sub_83C7E064);
PPC_FUNC_IMPL(__imp__sub_83C7E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E068"))) PPC_WEAK_FUNC(sub_83C7E068);
PPC_FUNC_IMPL(__imp__sub_83C7E068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E074"))) PPC_WEAK_FUNC(sub_83C7E074);
PPC_FUNC_IMPL(__imp__sub_83C7E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E078"))) PPC_WEAK_FUNC(sub_83C7E078);
PPC_FUNC_IMPL(__imp__sub_83C7E078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E084"))) PPC_WEAK_FUNC(sub_83C7E084);
PPC_FUNC_IMPL(__imp__sub_83C7E084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E088"))) PPC_WEAK_FUNC(sub_83C7E088);
PPC_FUNC_IMPL(__imp__sub_83C7E088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13208
	ctx.r3.s64 = ctx.r11.s64 + -13208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E094"))) PPC_WEAK_FUNC(sub_83C7E094);
PPC_FUNC_IMPL(__imp__sub_83C7E094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E098"))) PPC_WEAK_FUNC(sub_83C7E098);
PPC_FUNC_IMPL(__imp__sub_83C7E098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E0A4"))) PPC_WEAK_FUNC(sub_83C7E0A4);
PPC_FUNC_IMPL(__imp__sub_83C7E0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E0A8"))) PPC_WEAK_FUNC(sub_83C7E0A8);
PPC_FUNC_IMPL(__imp__sub_83C7E0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13192
	ctx.r3.s64 = ctx.r11.s64 + -13192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E0B4"))) PPC_WEAK_FUNC(sub_83C7E0B4);
PPC_FUNC_IMPL(__imp__sub_83C7E0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E0B8"))) PPC_WEAK_FUNC(sub_83C7E0B8);
PPC_FUNC_IMPL(__imp__sub_83C7E0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13184
	ctx.r3.s64 = ctx.r11.s64 + -13184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E0C4"))) PPC_WEAK_FUNC(sub_83C7E0C4);
PPC_FUNC_IMPL(__imp__sub_83C7E0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E0C8"))) PPC_WEAK_FUNC(sub_83C7E0C8);
PPC_FUNC_IMPL(__imp__sub_83C7E0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E0D4"))) PPC_WEAK_FUNC(sub_83C7E0D4);
PPC_FUNC_IMPL(__imp__sub_83C7E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E0D8"))) PPC_WEAK_FUNC(sub_83C7E0D8);
PPC_FUNC_IMPL(__imp__sub_83C7E0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13168
	ctx.r3.s64 = ctx.r11.s64 + -13168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E0E4"))) PPC_WEAK_FUNC(sub_83C7E0E4);
PPC_FUNC_IMPL(__imp__sub_83C7E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E0E8"))) PPC_WEAK_FUNC(sub_83C7E0E8);
PPC_FUNC_IMPL(__imp__sub_83C7E0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13160
	ctx.r3.s64 = ctx.r11.s64 + -13160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E0F4"))) PPC_WEAK_FUNC(sub_83C7E0F4);
PPC_FUNC_IMPL(__imp__sub_83C7E0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E0F8"))) PPC_WEAK_FUNC(sub_83C7E0F8);
PPC_FUNC_IMPL(__imp__sub_83C7E0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13152
	ctx.r3.s64 = ctx.r11.s64 + -13152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E104"))) PPC_WEAK_FUNC(sub_83C7E104);
PPC_FUNC_IMPL(__imp__sub_83C7E104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E108"))) PPC_WEAK_FUNC(sub_83C7E108);
PPC_FUNC_IMPL(__imp__sub_83C7E108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13144
	ctx.r3.s64 = ctx.r11.s64 + -13144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E114"))) PPC_WEAK_FUNC(sub_83C7E114);
PPC_FUNC_IMPL(__imp__sub_83C7E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E118"))) PPC_WEAK_FUNC(sub_83C7E118);
PPC_FUNC_IMPL(__imp__sub_83C7E118) {
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
	// addi r3,r11,15596
	ctx.r3.s64 = ctx.r11.s64 + 15596;
	// bl 0x83523120
	ctx.lr = 0x83C7E130;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-13136
	ctx.r3.s64 = ctx.r10.s64 + -13136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7E13C;
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

__attribute__((alias("__imp__sub_83C7E14C"))) PPC_WEAK_FUNC(sub_83C7E14C);
PPC_FUNC_IMPL(__imp__sub_83C7E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E150"))) PPC_WEAK_FUNC(sub_83C7E150);
PPC_FUNC_IMPL(__imp__sub_83C7E150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13120
	ctx.r3.s64 = ctx.r11.s64 + -13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E15C"))) PPC_WEAK_FUNC(sub_83C7E15C);
PPC_FUNC_IMPL(__imp__sub_83C7E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E160"))) PPC_WEAK_FUNC(sub_83C7E160);
PPC_FUNC_IMPL(__imp__sub_83C7E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E16C"))) PPC_WEAK_FUNC(sub_83C7E16C);
PPC_FUNC_IMPL(__imp__sub_83C7E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E170"))) PPC_WEAK_FUNC(sub_83C7E170);
PPC_FUNC_IMPL(__imp__sub_83C7E170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E17C"))) PPC_WEAK_FUNC(sub_83C7E17C);
PPC_FUNC_IMPL(__imp__sub_83C7E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E180"))) PPC_WEAK_FUNC(sub_83C7E180);
PPC_FUNC_IMPL(__imp__sub_83C7E180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E18C"))) PPC_WEAK_FUNC(sub_83C7E18C);
PPC_FUNC_IMPL(__imp__sub_83C7E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E190"))) PPC_WEAK_FUNC(sub_83C7E190);
PPC_FUNC_IMPL(__imp__sub_83C7E190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13088
	ctx.r3.s64 = ctx.r11.s64 + -13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E19C"))) PPC_WEAK_FUNC(sub_83C7E19C);
PPC_FUNC_IMPL(__imp__sub_83C7E19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E1A0"))) PPC_WEAK_FUNC(sub_83C7E1A0);
PPC_FUNC_IMPL(__imp__sub_83C7E1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13080
	ctx.r3.s64 = ctx.r11.s64 + -13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E1AC"))) PPC_WEAK_FUNC(sub_83C7E1AC);
PPC_FUNC_IMPL(__imp__sub_83C7E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E1B0"))) PPC_WEAK_FUNC(sub_83C7E1B0);
PPC_FUNC_IMPL(__imp__sub_83C7E1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13072
	ctx.r3.s64 = ctx.r11.s64 + -13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E1BC"))) PPC_WEAK_FUNC(sub_83C7E1BC);
PPC_FUNC_IMPL(__imp__sub_83C7E1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E1C0"))) PPC_WEAK_FUNC(sub_83C7E1C0);
PPC_FUNC_IMPL(__imp__sub_83C7E1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13064
	ctx.r3.s64 = ctx.r11.s64 + -13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E1CC"))) PPC_WEAK_FUNC(sub_83C7E1CC);
PPC_FUNC_IMPL(__imp__sub_83C7E1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E1D0"))) PPC_WEAK_FUNC(sub_83C7E1D0);
PPC_FUNC_IMPL(__imp__sub_83C7E1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E1DC"))) PPC_WEAK_FUNC(sub_83C7E1DC);
PPC_FUNC_IMPL(__imp__sub_83C7E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E1E0"))) PPC_WEAK_FUNC(sub_83C7E1E0);
PPC_FUNC_IMPL(__imp__sub_83C7E1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13048
	ctx.r3.s64 = ctx.r11.s64 + -13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E1EC"))) PPC_WEAK_FUNC(sub_83C7E1EC);
PPC_FUNC_IMPL(__imp__sub_83C7E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E1F0"))) PPC_WEAK_FUNC(sub_83C7E1F0);
PPC_FUNC_IMPL(__imp__sub_83C7E1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13040
	ctx.r3.s64 = ctx.r11.s64 + -13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E1FC"))) PPC_WEAK_FUNC(sub_83C7E1FC);
PPC_FUNC_IMPL(__imp__sub_83C7E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E200"))) PPC_WEAK_FUNC(sub_83C7E200);
PPC_FUNC_IMPL(__imp__sub_83C7E200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13032
	ctx.r3.s64 = ctx.r11.s64 + -13032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E20C"))) PPC_WEAK_FUNC(sub_83C7E20C);
PPC_FUNC_IMPL(__imp__sub_83C7E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E210"))) PPC_WEAK_FUNC(sub_83C7E210);
PPC_FUNC_IMPL(__imp__sub_83C7E210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13024
	ctx.r3.s64 = ctx.r11.s64 + -13024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E21C"))) PPC_WEAK_FUNC(sub_83C7E21C);
PPC_FUNC_IMPL(__imp__sub_83C7E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E220"))) PPC_WEAK_FUNC(sub_83C7E220);
PPC_FUNC_IMPL(__imp__sub_83C7E220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13016
	ctx.r3.s64 = ctx.r11.s64 + -13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E22C"))) PPC_WEAK_FUNC(sub_83C7E22C);
PPC_FUNC_IMPL(__imp__sub_83C7E22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E230"))) PPC_WEAK_FUNC(sub_83C7E230);
PPC_FUNC_IMPL(__imp__sub_83C7E230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13008
	ctx.r3.s64 = ctx.r11.s64 + -13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E23C"))) PPC_WEAK_FUNC(sub_83C7E23C);
PPC_FUNC_IMPL(__imp__sub_83C7E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E240"))) PPC_WEAK_FUNC(sub_83C7E240);
PPC_FUNC_IMPL(__imp__sub_83C7E240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13000
	ctx.r3.s64 = ctx.r11.s64 + -13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E24C"))) PPC_WEAK_FUNC(sub_83C7E24C);
PPC_FUNC_IMPL(__imp__sub_83C7E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E250"))) PPC_WEAK_FUNC(sub_83C7E250);
PPC_FUNC_IMPL(__imp__sub_83C7E250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12992
	ctx.r3.s64 = ctx.r11.s64 + -12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E25C"))) PPC_WEAK_FUNC(sub_83C7E25C);
PPC_FUNC_IMPL(__imp__sub_83C7E25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E260"))) PPC_WEAK_FUNC(sub_83C7E260);
PPC_FUNC_IMPL(__imp__sub_83C7E260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12984
	ctx.r3.s64 = ctx.r11.s64 + -12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E26C"))) PPC_WEAK_FUNC(sub_83C7E26C);
PPC_FUNC_IMPL(__imp__sub_83C7E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E270"))) PPC_WEAK_FUNC(sub_83C7E270);
PPC_FUNC_IMPL(__imp__sub_83C7E270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12976
	ctx.r3.s64 = ctx.r11.s64 + -12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E27C"))) PPC_WEAK_FUNC(sub_83C7E27C);
PPC_FUNC_IMPL(__imp__sub_83C7E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E280"))) PPC_WEAK_FUNC(sub_83C7E280);
PPC_FUNC_IMPL(__imp__sub_83C7E280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E28C"))) PPC_WEAK_FUNC(sub_83C7E28C);
PPC_FUNC_IMPL(__imp__sub_83C7E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E290"))) PPC_WEAK_FUNC(sub_83C7E290);
PPC_FUNC_IMPL(__imp__sub_83C7E290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E29C"))) PPC_WEAK_FUNC(sub_83C7E29C);
PPC_FUNC_IMPL(__imp__sub_83C7E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E2A0"))) PPC_WEAK_FUNC(sub_83C7E2A0);
PPC_FUNC_IMPL(__imp__sub_83C7E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12952
	ctx.r3.s64 = ctx.r11.s64 + -12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E2AC"))) PPC_WEAK_FUNC(sub_83C7E2AC);
PPC_FUNC_IMPL(__imp__sub_83C7E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E2B0"))) PPC_WEAK_FUNC(sub_83C7E2B0);
PPC_FUNC_IMPL(__imp__sub_83C7E2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E2BC"))) PPC_WEAK_FUNC(sub_83C7E2BC);
PPC_FUNC_IMPL(__imp__sub_83C7E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E2C0"))) PPC_WEAK_FUNC(sub_83C7E2C0);
PPC_FUNC_IMPL(__imp__sub_83C7E2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E2CC"))) PPC_WEAK_FUNC(sub_83C7E2CC);
PPC_FUNC_IMPL(__imp__sub_83C7E2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E2D0"))) PPC_WEAK_FUNC(sub_83C7E2D0);
PPC_FUNC_IMPL(__imp__sub_83C7E2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12928
	ctx.r3.s64 = ctx.r11.s64 + -12928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E2DC"))) PPC_WEAK_FUNC(sub_83C7E2DC);
PPC_FUNC_IMPL(__imp__sub_83C7E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E2E0"))) PPC_WEAK_FUNC(sub_83C7E2E0);
PPC_FUNC_IMPL(__imp__sub_83C7E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12920
	ctx.r3.s64 = ctx.r11.s64 + -12920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E2EC"))) PPC_WEAK_FUNC(sub_83C7E2EC);
PPC_FUNC_IMPL(__imp__sub_83C7E2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E2F0"))) PPC_WEAK_FUNC(sub_83C7E2F0);
PPC_FUNC_IMPL(__imp__sub_83C7E2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E2FC"))) PPC_WEAK_FUNC(sub_83C7E2FC);
PPC_FUNC_IMPL(__imp__sub_83C7E2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E300"))) PPC_WEAK_FUNC(sub_83C7E300);
PPC_FUNC_IMPL(__imp__sub_83C7E300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12904
	ctx.r3.s64 = ctx.r11.s64 + -12904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E30C"))) PPC_WEAK_FUNC(sub_83C7E30C);
PPC_FUNC_IMPL(__imp__sub_83C7E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E310"))) PPC_WEAK_FUNC(sub_83C7E310);
PPC_FUNC_IMPL(__imp__sub_83C7E310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12896
	ctx.r3.s64 = ctx.r11.s64 + -12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E31C"))) PPC_WEAK_FUNC(sub_83C7E31C);
PPC_FUNC_IMPL(__imp__sub_83C7E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E320"))) PPC_WEAK_FUNC(sub_83C7E320);
PPC_FUNC_IMPL(__imp__sub_83C7E320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12888
	ctx.r3.s64 = ctx.r11.s64 + -12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E32C"))) PPC_WEAK_FUNC(sub_83C7E32C);
PPC_FUNC_IMPL(__imp__sub_83C7E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E330"))) PPC_WEAK_FUNC(sub_83C7E330);
PPC_FUNC_IMPL(__imp__sub_83C7E330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12880
	ctx.r3.s64 = ctx.r11.s64 + -12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E33C"))) PPC_WEAK_FUNC(sub_83C7E33C);
PPC_FUNC_IMPL(__imp__sub_83C7E33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E340"))) PPC_WEAK_FUNC(sub_83C7E340);
PPC_FUNC_IMPL(__imp__sub_83C7E340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E34C"))) PPC_WEAK_FUNC(sub_83C7E34C);
PPC_FUNC_IMPL(__imp__sub_83C7E34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E350"))) PPC_WEAK_FUNC(sub_83C7E350);
PPC_FUNC_IMPL(__imp__sub_83C7E350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12864
	ctx.r3.s64 = ctx.r11.s64 + -12864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E35C"))) PPC_WEAK_FUNC(sub_83C7E35C);
PPC_FUNC_IMPL(__imp__sub_83C7E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E360"))) PPC_WEAK_FUNC(sub_83C7E360);
PPC_FUNC_IMPL(__imp__sub_83C7E360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12856
	ctx.r3.s64 = ctx.r11.s64 + -12856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E36C"))) PPC_WEAK_FUNC(sub_83C7E36C);
PPC_FUNC_IMPL(__imp__sub_83C7E36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E370"))) PPC_WEAK_FUNC(sub_83C7E370);
PPC_FUNC_IMPL(__imp__sub_83C7E370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E37C"))) PPC_WEAK_FUNC(sub_83C7E37C);
PPC_FUNC_IMPL(__imp__sub_83C7E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E380"))) PPC_WEAK_FUNC(sub_83C7E380);
PPC_FUNC_IMPL(__imp__sub_83C7E380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12840
	ctx.r3.s64 = ctx.r11.s64 + -12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E38C"))) PPC_WEAK_FUNC(sub_83C7E38C);
PPC_FUNC_IMPL(__imp__sub_83C7E38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E390"))) PPC_WEAK_FUNC(sub_83C7E390);
PPC_FUNC_IMPL(__imp__sub_83C7E390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E39C"))) PPC_WEAK_FUNC(sub_83C7E39C);
PPC_FUNC_IMPL(__imp__sub_83C7E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E3A0"))) PPC_WEAK_FUNC(sub_83C7E3A0);
PPC_FUNC_IMPL(__imp__sub_83C7E3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12824
	ctx.r3.s64 = ctx.r11.s64 + -12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E3AC"))) PPC_WEAK_FUNC(sub_83C7E3AC);
PPC_FUNC_IMPL(__imp__sub_83C7E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E3B0"))) PPC_WEAK_FUNC(sub_83C7E3B0);
PPC_FUNC_IMPL(__imp__sub_83C7E3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E3BC"))) PPC_WEAK_FUNC(sub_83C7E3BC);
PPC_FUNC_IMPL(__imp__sub_83C7E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E3C0"))) PPC_WEAK_FUNC(sub_83C7E3C0);
PPC_FUNC_IMPL(__imp__sub_83C7E3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E3CC"))) PPC_WEAK_FUNC(sub_83C7E3CC);
PPC_FUNC_IMPL(__imp__sub_83C7E3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E3D0"))) PPC_WEAK_FUNC(sub_83C7E3D0);
PPC_FUNC_IMPL(__imp__sub_83C7E3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12800
	ctx.r3.s64 = ctx.r11.s64 + -12800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E3DC"))) PPC_WEAK_FUNC(sub_83C7E3DC);
PPC_FUNC_IMPL(__imp__sub_83C7E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E3E0"))) PPC_WEAK_FUNC(sub_83C7E3E0);
PPC_FUNC_IMPL(__imp__sub_83C7E3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12792
	ctx.r3.s64 = ctx.r11.s64 + -12792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E3EC"))) PPC_WEAK_FUNC(sub_83C7E3EC);
PPC_FUNC_IMPL(__imp__sub_83C7E3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E3F0"))) PPC_WEAK_FUNC(sub_83C7E3F0);
PPC_FUNC_IMPL(__imp__sub_83C7E3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12784
	ctx.r3.s64 = ctx.r11.s64 + -12784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E3FC"))) PPC_WEAK_FUNC(sub_83C7E3FC);
PPC_FUNC_IMPL(__imp__sub_83C7E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E400"))) PPC_WEAK_FUNC(sub_83C7E400);
PPC_FUNC_IMPL(__imp__sub_83C7E400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E40C"))) PPC_WEAK_FUNC(sub_83C7E40C);
PPC_FUNC_IMPL(__imp__sub_83C7E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E410"))) PPC_WEAK_FUNC(sub_83C7E410);
PPC_FUNC_IMPL(__imp__sub_83C7E410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E41C"))) PPC_WEAK_FUNC(sub_83C7E41C);
PPC_FUNC_IMPL(__imp__sub_83C7E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E420"))) PPC_WEAK_FUNC(sub_83C7E420);
PPC_FUNC_IMPL(__imp__sub_83C7E420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12760
	ctx.r3.s64 = ctx.r11.s64 + -12760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E42C"))) PPC_WEAK_FUNC(sub_83C7E42C);
PPC_FUNC_IMPL(__imp__sub_83C7E42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E430"))) PPC_WEAK_FUNC(sub_83C7E430);
PPC_FUNC_IMPL(__imp__sub_83C7E430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E43C"))) PPC_WEAK_FUNC(sub_83C7E43C);
PPC_FUNC_IMPL(__imp__sub_83C7E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E440"))) PPC_WEAK_FUNC(sub_83C7E440);
PPC_FUNC_IMPL(__imp__sub_83C7E440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E44C"))) PPC_WEAK_FUNC(sub_83C7E44C);
PPC_FUNC_IMPL(__imp__sub_83C7E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E450"))) PPC_WEAK_FUNC(sub_83C7E450);
PPC_FUNC_IMPL(__imp__sub_83C7E450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E45C"))) PPC_WEAK_FUNC(sub_83C7E45C);
PPC_FUNC_IMPL(__imp__sub_83C7E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E460"))) PPC_WEAK_FUNC(sub_83C7E460);
PPC_FUNC_IMPL(__imp__sub_83C7E460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12728
	ctx.r3.s64 = ctx.r11.s64 + -12728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E46C"))) PPC_WEAK_FUNC(sub_83C7E46C);
PPC_FUNC_IMPL(__imp__sub_83C7E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E470"))) PPC_WEAK_FUNC(sub_83C7E470);
PPC_FUNC_IMPL(__imp__sub_83C7E470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12720
	ctx.r3.s64 = ctx.r11.s64 + -12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E47C"))) PPC_WEAK_FUNC(sub_83C7E47C);
PPC_FUNC_IMPL(__imp__sub_83C7E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E480"))) PPC_WEAK_FUNC(sub_83C7E480);
PPC_FUNC_IMPL(__imp__sub_83C7E480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E48C"))) PPC_WEAK_FUNC(sub_83C7E48C);
PPC_FUNC_IMPL(__imp__sub_83C7E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E490"))) PPC_WEAK_FUNC(sub_83C7E490);
PPC_FUNC_IMPL(__imp__sub_83C7E490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E49C"))) PPC_WEAK_FUNC(sub_83C7E49C);
PPC_FUNC_IMPL(__imp__sub_83C7E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E4A0"))) PPC_WEAK_FUNC(sub_83C7E4A0);
PPC_FUNC_IMPL(__imp__sub_83C7E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E4AC"))) PPC_WEAK_FUNC(sub_83C7E4AC);
PPC_FUNC_IMPL(__imp__sub_83C7E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E4B0"))) PPC_WEAK_FUNC(sub_83C7E4B0);
PPC_FUNC_IMPL(__imp__sub_83C7E4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12688
	ctx.r3.s64 = ctx.r11.s64 + -12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7E4BC"))) PPC_WEAK_FUNC(sub_83C7E4BC);
PPC_FUNC_IMPL(__imp__sub_83C7E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7E4C0"))) PPC_WEAK_FUNC(sub_83C7E4C0);
PPC_FUNC_IMPL(__imp__sub_83C7E4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

