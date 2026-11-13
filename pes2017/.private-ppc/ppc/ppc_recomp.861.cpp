#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C88984"))) PPC_WEAK_FUNC(sub_83C88984);
PPC_FUNC_IMPL(__imp__sub_83C88984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88988"))) PPC_WEAK_FUNC(sub_83C88988);
PPC_FUNC_IMPL(__imp__sub_83C88988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4408
	ctx.r3.s64 = ctx.r11.s64 + 4408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88994"))) PPC_WEAK_FUNC(sub_83C88994);
PPC_FUNC_IMPL(__imp__sub_83C88994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88998"))) PPC_WEAK_FUNC(sub_83C88998);
PPC_FUNC_IMPL(__imp__sub_83C88998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C889A4"))) PPC_WEAK_FUNC(sub_83C889A4);
PPC_FUNC_IMPL(__imp__sub_83C889A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C889A8"))) PPC_WEAK_FUNC(sub_83C889A8);
PPC_FUNC_IMPL(__imp__sub_83C889A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C889B4"))) PPC_WEAK_FUNC(sub_83C889B4);
PPC_FUNC_IMPL(__imp__sub_83C889B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C889B8"))) PPC_WEAK_FUNC(sub_83C889B8);
PPC_FUNC_IMPL(__imp__sub_83C889B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C889C4"))) PPC_WEAK_FUNC(sub_83C889C4);
PPC_FUNC_IMPL(__imp__sub_83C889C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C889C8"))) PPC_WEAK_FUNC(sub_83C889C8);
PPC_FUNC_IMPL(__imp__sub_83C889C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4440
	ctx.r3.s64 = ctx.r11.s64 + 4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C889D4"))) PPC_WEAK_FUNC(sub_83C889D4);
PPC_FUNC_IMPL(__imp__sub_83C889D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C889D8"))) PPC_WEAK_FUNC(sub_83C889D8);
PPC_FUNC_IMPL(__imp__sub_83C889D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4448
	ctx.r3.s64 = ctx.r11.s64 + 4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C889E4"))) PPC_WEAK_FUNC(sub_83C889E4);
PPC_FUNC_IMPL(__imp__sub_83C889E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C889E8"))) PPC_WEAK_FUNC(sub_83C889E8);
PPC_FUNC_IMPL(__imp__sub_83C889E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4456
	ctx.r3.s64 = ctx.r11.s64 + 4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C889F4"))) PPC_WEAK_FUNC(sub_83C889F4);
PPC_FUNC_IMPL(__imp__sub_83C889F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C889F8"))) PPC_WEAK_FUNC(sub_83C889F8);
PPC_FUNC_IMPL(__imp__sub_83C889F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,5568
	ctx.r11.s64 = ctx.r11.s64 + 5568;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C88A10:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83c88a10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C88A10;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C88A3C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83c88a3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C88A3C;
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88A50"))) PPC_WEAK_FUNC(sub_83C88A50);
PPC_FUNC_IMPL(__imp__sub_83C88A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4488
	ctx.r3.s64 = ctx.r11.s64 + 4488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88A5C"))) PPC_WEAK_FUNC(sub_83C88A5C);
PPC_FUNC_IMPL(__imp__sub_83C88A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88A60"))) PPC_WEAK_FUNC(sub_83C88A60);
PPC_FUNC_IMPL(__imp__sub_83C88A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4496
	ctx.r3.s64 = ctx.r11.s64 + 4496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88A6C"))) PPC_WEAK_FUNC(sub_83C88A6C);
PPC_FUNC_IMPL(__imp__sub_83C88A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88A70"))) PPC_WEAK_FUNC(sub_83C88A70);
PPC_FUNC_IMPL(__imp__sub_83C88A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4504
	ctx.r3.s64 = ctx.r11.s64 + 4504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88A7C"))) PPC_WEAK_FUNC(sub_83C88A7C);
PPC_FUNC_IMPL(__imp__sub_83C88A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88A80"))) PPC_WEAK_FUNC(sub_83C88A80);
PPC_FUNC_IMPL(__imp__sub_83C88A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4512
	ctx.r3.s64 = ctx.r11.s64 + 4512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88A8C"))) PPC_WEAK_FUNC(sub_83C88A8C);
PPC_FUNC_IMPL(__imp__sub_83C88A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88A90"))) PPC_WEAK_FUNC(sub_83C88A90);
PPC_FUNC_IMPL(__imp__sub_83C88A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4520
	ctx.r3.s64 = ctx.r11.s64 + 4520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88A9C"))) PPC_WEAK_FUNC(sub_83C88A9C);
PPC_FUNC_IMPL(__imp__sub_83C88A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88AA0"))) PPC_WEAK_FUNC(sub_83C88AA0);
PPC_FUNC_IMPL(__imp__sub_83C88AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4528
	ctx.r3.s64 = ctx.r11.s64 + 4528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88AAC"))) PPC_WEAK_FUNC(sub_83C88AAC);
PPC_FUNC_IMPL(__imp__sub_83C88AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88AB0"))) PPC_WEAK_FUNC(sub_83C88AB0);
PPC_FUNC_IMPL(__imp__sub_83C88AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88ABC"))) PPC_WEAK_FUNC(sub_83C88ABC);
PPC_FUNC_IMPL(__imp__sub_83C88ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88AC0"))) PPC_WEAK_FUNC(sub_83C88AC0);
PPC_FUNC_IMPL(__imp__sub_83C88AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4544
	ctx.r3.s64 = ctx.r11.s64 + 4544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88ACC"))) PPC_WEAK_FUNC(sub_83C88ACC);
PPC_FUNC_IMPL(__imp__sub_83C88ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88AD0"))) PPC_WEAK_FUNC(sub_83C88AD0);
PPC_FUNC_IMPL(__imp__sub_83C88AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4552
	ctx.r3.s64 = ctx.r11.s64 + 4552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88ADC"))) PPC_WEAK_FUNC(sub_83C88ADC);
PPC_FUNC_IMPL(__imp__sub_83C88ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88AE0"))) PPC_WEAK_FUNC(sub_83C88AE0);
PPC_FUNC_IMPL(__imp__sub_83C88AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4560
	ctx.r3.s64 = ctx.r11.s64 + 4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88AEC"))) PPC_WEAK_FUNC(sub_83C88AEC);
PPC_FUNC_IMPL(__imp__sub_83C88AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88AF0"))) PPC_WEAK_FUNC(sub_83C88AF0);
PPC_FUNC_IMPL(__imp__sub_83C88AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4568
	ctx.r3.s64 = ctx.r11.s64 + 4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88AFC"))) PPC_WEAK_FUNC(sub_83C88AFC);
PPC_FUNC_IMPL(__imp__sub_83C88AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88B00"))) PPC_WEAK_FUNC(sub_83C88B00);
PPC_FUNC_IMPL(__imp__sub_83C88B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4576
	ctx.r3.s64 = ctx.r11.s64 + 4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88B0C"))) PPC_WEAK_FUNC(sub_83C88B0C);
PPC_FUNC_IMPL(__imp__sub_83C88B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88B10"))) PPC_WEAK_FUNC(sub_83C88B10);
PPC_FUNC_IMPL(__imp__sub_83C88B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,5648
	ctx.r11.s64 = ctx.r11.s64 + 5648;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C88B28:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83c88b28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C88B28;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C88B54:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83c88b54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C88B54;
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4584
	ctx.r3.s64 = ctx.r11.s64 + 4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88B68"))) PPC_WEAK_FUNC(sub_83C88B68);
PPC_FUNC_IMPL(__imp__sub_83C88B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83C88B70;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,5704
	ctx.r11.s64 = ctx.r11.s64 + 5704;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r31,r11,174
	ctx.r31.s64 = ctx.r11.s64 + 174;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// li r26,-142
	ctx.r26.s64 = -142;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r29,r10,30820
	ctx.r29.s64 = ctx.r10.s64 + 30820;
	// addi r28,r9,30844
	ctx.r28.s64 = ctx.r9.s64 + 30844;
	// addi r24,r11,-31864
	ctx.r24.s64 = ctx.r11.s64 + -31864;
loc_83C88BB8:
	// stw r27,-154(r31)
	PPC_STORE_U32(ctx.r31.u32 + -154, ctx.r27.u32);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// stw r30,-158(r31)
	PPC_STORE_U32(ctx.r31.u32 + -158, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r30,-174(r31)
	PPC_STORE_U8(ctx.r31.u32 + -174, ctx.r30.u8);
	// addi r6,r11,11064
	ctx.r6.s64 = ctx.r11.s64 + 11064;
	// stdx r30,r31,r26
	PPC_STORE_U64(ctx.r31.u32 + ctx.r26.u32, ctx.r30.u64);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,-134
	ctx.r3.s64 = ctx.r31.s64 + -134;
	// bl 0x823fca98
	ctx.lr = 0x83C88BE0;
	sub_823FCA98(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,-38(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -38, temp.u32);
	// stw r30,-30(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30, ctx.r30.u32);
	// stfs f31,-34(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -34, temp.u32);
	// stw r30,-26(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26, ctx.r30.u32);
	// stfs f31,-10(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -10, temp.u32);
	// stw r30,-22(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22, ctx.r30.u32);
	// stw r30,-18(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18, ctx.r30.u32);
	// addi r3,r31,-6
	ctx.r3.s64 = ctx.r31.s64 + -6;
	// stw r30,-14(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r29,-6(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6, ctx.r29.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r30,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r30.u16);
loc_83C88C18:
	// stbx r30,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83c88c18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C88C18;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83C88C3C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83c88c3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C88C3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83C88C58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// bge 0x83c88bb8
	if (!cr0.lt) goto loc_83C88BB8;
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C88C70;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88C7C"))) PPC_WEAK_FUNC(sub_83C88C7C);
PPC_FUNC_IMPL(__imp__sub_83C88C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88C80"))) PPC_WEAK_FUNC(sub_83C88C80);
PPC_FUNC_IMPL(__imp__sub_83C88C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83C88C88;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,6160
	ctx.r11.s64 = ctx.r11.s64 + 6160;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r31,r11,174
	ctx.r31.s64 = ctx.r11.s64 + 174;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r23,1
	ctx.r23.s64 = 1;
	// li r26,-142
	ctx.r26.s64 = -142;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r29,r10,30820
	ctx.r29.s64 = ctx.r10.s64 + 30820;
	// addi r28,r9,30844
	ctx.r28.s64 = ctx.r9.s64 + 30844;
	// addi r24,r11,-31864
	ctx.r24.s64 = ctx.r11.s64 + -31864;
loc_83C88CD0:
	// stw r27,-154(r31)
	PPC_STORE_U32(ctx.r31.u32 + -154, ctx.r27.u32);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// stw r30,-158(r31)
	PPC_STORE_U32(ctx.r31.u32 + -158, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r30,-174(r31)
	PPC_STORE_U8(ctx.r31.u32 + -174, ctx.r30.u8);
	// addi r6,r11,11064
	ctx.r6.s64 = ctx.r11.s64 + 11064;
	// stdx r30,r31,r26
	PPC_STORE_U64(ctx.r31.u32 + ctx.r26.u32, ctx.r30.u64);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,-134
	ctx.r3.s64 = ctx.r31.s64 + -134;
	// bl 0x823fca98
	ctx.lr = 0x83C88CF8;
	sub_823FCA98(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,-38(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -38, temp.u32);
	// stw r30,-30(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30, ctx.r30.u32);
	// stfs f31,-34(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -34, temp.u32);
	// stw r30,-26(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26, ctx.r30.u32);
	// stfs f31,-10(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -10, temp.u32);
	// stw r30,-22(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22, ctx.r30.u32);
	// stw r30,-18(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18, ctx.r30.u32);
	// addi r3,r31,-6
	ctx.r3.s64 = ctx.r31.s64 + -6;
	// stw r30,-14(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r29,-6(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6, ctx.r29.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r30,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r30.u16);
loc_83C88D30:
	// stbx r30,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83c88d30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C88D30;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83C88D54:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83c88d54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C88D54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83C88D70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// bge 0x83c88cd0
	if (!cr0.lt) goto loc_83C88CD0;
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4608
	ctx.r3.s64 = ctx.r11.s64 + 4608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C88D88;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88D94"))) PPC_WEAK_FUNC(sub_83C88D94);
PPC_FUNC_IMPL(__imp__sub_83C88D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88D98"))) PPC_WEAK_FUNC(sub_83C88D98);
PPC_FUNC_IMPL(__imp__sub_83C88D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88DA4"))) PPC_WEAK_FUNC(sub_83C88DA4);
PPC_FUNC_IMPL(__imp__sub_83C88DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88DA8"))) PPC_WEAK_FUNC(sub_83C88DA8);
PPC_FUNC_IMPL(__imp__sub_83C88DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4872
	ctx.r3.s64 = ctx.r11.s64 + 4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88DB4"))) PPC_WEAK_FUNC(sub_83C88DB4);
PPC_FUNC_IMPL(__imp__sub_83C88DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88DB8"))) PPC_WEAK_FUNC(sub_83C88DB8);
PPC_FUNC_IMPL(__imp__sub_83C88DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88DC4"))) PPC_WEAK_FUNC(sub_83C88DC4);
PPC_FUNC_IMPL(__imp__sub_83C88DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88DC8"))) PPC_WEAK_FUNC(sub_83C88DC8);
PPC_FUNC_IMPL(__imp__sub_83C88DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4888
	ctx.r3.s64 = ctx.r11.s64 + 4888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88DD4"))) PPC_WEAK_FUNC(sub_83C88DD4);
PPC_FUNC_IMPL(__imp__sub_83C88DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88DD8"))) PPC_WEAK_FUNC(sub_83C88DD8);
PPC_FUNC_IMPL(__imp__sub_83C88DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4896
	ctx.r3.s64 = ctx.r11.s64 + 4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88DE4"))) PPC_WEAK_FUNC(sub_83C88DE4);
PPC_FUNC_IMPL(__imp__sub_83C88DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88DE8"))) PPC_WEAK_FUNC(sub_83C88DE8);
PPC_FUNC_IMPL(__imp__sub_83C88DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88DF4"))) PPC_WEAK_FUNC(sub_83C88DF4);
PPC_FUNC_IMPL(__imp__sub_83C88DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88DF8"))) PPC_WEAK_FUNC(sub_83C88DF8);
PPC_FUNC_IMPL(__imp__sub_83C88DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4912
	ctx.r3.s64 = ctx.r11.s64 + 4912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88E04"))) PPC_WEAK_FUNC(sub_83C88E04);
PPC_FUNC_IMPL(__imp__sub_83C88E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88E08"))) PPC_WEAK_FUNC(sub_83C88E08);
PPC_FUNC_IMPL(__imp__sub_83C88E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4920
	ctx.r3.s64 = ctx.r11.s64 + 4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88E14"))) PPC_WEAK_FUNC(sub_83C88E14);
PPC_FUNC_IMPL(__imp__sub_83C88E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88E18"))) PPC_WEAK_FUNC(sub_83C88E18);
PPC_FUNC_IMPL(__imp__sub_83C88E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88E24"))) PPC_WEAK_FUNC(sub_83C88E24);
PPC_FUNC_IMPL(__imp__sub_83C88E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88E28"))) PPC_WEAK_FUNC(sub_83C88E28);
PPC_FUNC_IMPL(__imp__sub_83C88E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4936
	ctx.r3.s64 = ctx.r11.s64 + 4936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88E34"))) PPC_WEAK_FUNC(sub_83C88E34);
PPC_FUNC_IMPL(__imp__sub_83C88E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88E38"))) PPC_WEAK_FUNC(sub_83C88E38);
PPC_FUNC_IMPL(__imp__sub_83C88E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4944
	ctx.r3.s64 = ctx.r11.s64 + 4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88E44"))) PPC_WEAK_FUNC(sub_83C88E44);
PPC_FUNC_IMPL(__imp__sub_83C88E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88E48"))) PPC_WEAK_FUNC(sub_83C88E48);
PPC_FUNC_IMPL(__imp__sub_83C88E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4952
	ctx.r3.s64 = ctx.r11.s64 + 4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C88E54"))) PPC_WEAK_FUNC(sub_83C88E54);
PPC_FUNC_IMPL(__imp__sub_83C88E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C88E58"))) PPC_WEAK_FUNC(sub_83C88E58);
PPC_FUNC_IMPL(__imp__sub_83C88E58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,6840
	ctx.r6.s64 = ctx.r7.s64 + 6840;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,6840(r7)
	PPC_STORE_U32(ctx.r7.u32 + 6840, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// stw r8,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r8.u32);
	// sth r11,24(r6)
	PPC_STORE_U16(ctx.r6.u32 + 24, ctx.r11.u16);
	// stw r7,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r8.u32);
	// stw r11,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// stw r7,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// stw r10,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r10.u32);
	// std r9,64(r6)
	PPC_STORE_U64(ctx.r6.u32 + 64, ctx.r9.u64);
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// stw r11,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r11.u32);
	// sth r7,80(r6)
	PPC_STORE_U16(ctx.r6.u32 + 80, ctx.r7.u16);
	// stw r10,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r10.u32);
	// stw r9,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r9.u32);
	// stw r8,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r8.u32);
	// stw r11,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r11.u32);
	// stw r7,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r7.u32);
	// stw r10,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r10.u32);
	// stw r9,112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 112, ctx.r9.u32);
	// std r8,120(r6)
	PPC_STORE_U64(ctx.r6.u32 + 120, ctx.r8.u64);
	// stw r11,128(r6)
	PPC_STORE_U32(ctx.r6.u32 + 128, ctx.r11.u32);
	// stw r7,132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 132, ctx.r7.u32);
	// sth r10,136(r6)
	PPC_STORE_U16(ctx.r6.u32 + 136, ctx.r10.u16);
	// stw r9,140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 140, ctx.r9.u32);
	// stw r8,144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 144, ctx.r8.u32);
	// stw r11,148(r6)
	PPC_STORE_U32(ctx.r6.u32 + 148, ctx.r11.u32);
	// stw r7,152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 152, ctx.r7.u32);
	// stw r10,156(r6)
	PPC_STORE_U32(ctx.r6.u32 + 156, ctx.r10.u32);
	// stw r9,160(r6)
	PPC_STORE_U32(ctx.r6.u32 + 160, ctx.r9.u32);
	// stw r8,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r8.u32);
	// std r11,176(r6)
	PPC_STORE_U64(ctx.r6.u32 + 176, ctx.r11.u64);
	// stw r7,184(r6)
	PPC_STORE_U32(ctx.r6.u32 + 184, ctx.r7.u32);
	// stw r10,188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 188, ctx.r10.u32);
	// sth r9,192(r6)
	PPC_STORE_U16(ctx.r6.u32 + 192, ctx.r9.u16);
	// stw r8,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r8.u32);
	// stw r11,200(r6)
	PPC_STORE_U32(ctx.r6.u32 + 200, ctx.r11.u32);
	// stw r10,204(r6)
	PPC_STORE_U32(ctx.r6.u32 + 204, ctx.r10.u32);
	// stw r9,208(r6)
	PPC_STORE_U32(ctx.r6.u32 + 208, ctx.r9.u32);
	// stw r11,212(r6)
	PPC_STORE_U32(ctx.r6.u32 + 212, ctx.r11.u32);
	// stw r10,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C88F28"))) PPC_WEAK_FUNC(sub_83C88F28);
PPC_FUNC_IMPL(__imp__sub_83C88F28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,6728
	ctx.r6.s64 = ctx.r8.s64 + 6728;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,6728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6728, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// stw r8,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r8.u32);
	// sth r11,24(r6)
	PPC_STORE_U16(ctx.r6.u32 + 24, ctx.r11.u16);
	// stw r7,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r8.u32);
	// stw r11,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// stw r7,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// stw r10,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r10.u32);
	// std r9,64(r6)
	PPC_STORE_U64(ctx.r6.u32 + 64, ctx.r9.u64);
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// stw r11,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r11.u32);
	// sth r7,80(r6)
	PPC_STORE_U16(ctx.r6.u32 + 80, ctx.r7.u16);
	// stw r10,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r10.u32);
	// stw r9,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r9.u32);
	// stw r8,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r8.u32);
	// stw r11,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r11.u32);
	// stw r7,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r7.u32);
	// stw r10,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C88FA0"))) PPC_WEAK_FUNC(sub_83C88FA0);
PPC_FUNC_IMPL(__imp__sub_83C88FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,6616
	ctx.r6.s64 = ctx.r8.s64 + 6616;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,6616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6616, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// stw r8,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r8.u32);
	// sth r11,24(r6)
	PPC_STORE_U16(ctx.r6.u32 + 24, ctx.r11.u16);
	// stw r7,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r8.u32);
	// stw r11,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// stw r7,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// stw r10,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r10.u32);
	// std r9,64(r6)
	PPC_STORE_U64(ctx.r6.u32 + 64, ctx.r9.u64);
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// stw r11,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r11.u32);
	// sth r7,80(r6)
	PPC_STORE_U16(ctx.r6.u32 + 80, ctx.r7.u16);
	// stw r10,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r10.u32);
	// stw r9,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r9.u32);
	// stw r8,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r8.u32);
	// stw r11,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r11.u32);
	// stw r7,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r7.u32);
	// stw r10,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C89018"))) PPC_WEAK_FUNC(sub_83C89018);
PPC_FUNC_IMPL(__imp__sub_83C89018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4960
	ctx.r3.s64 = ctx.r11.s64 + 4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89024"))) PPC_WEAK_FUNC(sub_83C89024);
PPC_FUNC_IMPL(__imp__sub_83C89024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89028"))) PPC_WEAK_FUNC(sub_83C89028);
PPC_FUNC_IMPL(__imp__sub_83C89028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4968
	ctx.r3.s64 = ctx.r11.s64 + 4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89034"))) PPC_WEAK_FUNC(sub_83C89034);
PPC_FUNC_IMPL(__imp__sub_83C89034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89038"))) PPC_WEAK_FUNC(sub_83C89038);
PPC_FUNC_IMPL(__imp__sub_83C89038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89044"))) PPC_WEAK_FUNC(sub_83C89044);
PPC_FUNC_IMPL(__imp__sub_83C89044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89048"))) PPC_WEAK_FUNC(sub_83C89048);
PPC_FUNC_IMPL(__imp__sub_83C89048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4984
	ctx.r3.s64 = ctx.r11.s64 + 4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89054"))) PPC_WEAK_FUNC(sub_83C89054);
PPC_FUNC_IMPL(__imp__sub_83C89054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89058"))) PPC_WEAK_FUNC(sub_83C89058);
PPC_FUNC_IMPL(__imp__sub_83C89058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,4992
	ctx.r3.s64 = ctx.r11.s64 + 4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89064"))) PPC_WEAK_FUNC(sub_83C89064);
PPC_FUNC_IMPL(__imp__sub_83C89064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89068"))) PPC_WEAK_FUNC(sub_83C89068);
PPC_FUNC_IMPL(__imp__sub_83C89068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5000
	ctx.r3.s64 = ctx.r11.s64 + 5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89074"))) PPC_WEAK_FUNC(sub_83C89074);
PPC_FUNC_IMPL(__imp__sub_83C89074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89078"))) PPC_WEAK_FUNC(sub_83C89078);
PPC_FUNC_IMPL(__imp__sub_83C89078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89084"))) PPC_WEAK_FUNC(sub_83C89084);
PPC_FUNC_IMPL(__imp__sub_83C89084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89088"))) PPC_WEAK_FUNC(sub_83C89088);
PPC_FUNC_IMPL(__imp__sub_83C89088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5016
	ctx.r3.s64 = ctx.r11.s64 + 5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89094"))) PPC_WEAK_FUNC(sub_83C89094);
PPC_FUNC_IMPL(__imp__sub_83C89094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89098"))) PPC_WEAK_FUNC(sub_83C89098);
PPC_FUNC_IMPL(__imp__sub_83C89098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5024
	ctx.r3.s64 = ctx.r11.s64 + 5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C890A4"))) PPC_WEAK_FUNC(sub_83C890A4);
PPC_FUNC_IMPL(__imp__sub_83C890A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C890A8"))) PPC_WEAK_FUNC(sub_83C890A8);
PPC_FUNC_IMPL(__imp__sub_83C890A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C890B4"))) PPC_WEAK_FUNC(sub_83C890B4);
PPC_FUNC_IMPL(__imp__sub_83C890B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C890B8"))) PPC_WEAK_FUNC(sub_83C890B8);
PPC_FUNC_IMPL(__imp__sub_83C890B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C890C4"))) PPC_WEAK_FUNC(sub_83C890C4);
PPC_FUNC_IMPL(__imp__sub_83C890C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C890C8"))) PPC_WEAK_FUNC(sub_83C890C8);
PPC_FUNC_IMPL(__imp__sub_83C890C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5048
	ctx.r3.s64 = ctx.r11.s64 + 5048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C890D4"))) PPC_WEAK_FUNC(sub_83C890D4);
PPC_FUNC_IMPL(__imp__sub_83C890D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C890D8"))) PPC_WEAK_FUNC(sub_83C890D8);
PPC_FUNC_IMPL(__imp__sub_83C890D8) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,7180
	ctx.r3.s64 = ctx.r11.s64 + 7180;
	// bl 0x83523120
	ctx.lr = 0x83C890F0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,5056
	ctx.r3.s64 = ctx.r10.s64 + 5056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C890FC;
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

__attribute__((alias("__imp__sub_83C8910C"))) PPC_WEAK_FUNC(sub_83C8910C);
PPC_FUNC_IMPL(__imp__sub_83C8910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89110"))) PPC_WEAK_FUNC(sub_83C89110);
PPC_FUNC_IMPL(__imp__sub_83C89110) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7272
	ctx.r7.s64 = ctx.r8.s64 + 7272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C89138"))) PPC_WEAK_FUNC(sub_83C89138);
PPC_FUNC_IMPL(__imp__sub_83C89138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,7424
	ctx.r11.s64 = ctx.r11.s64 + 7424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C89150:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83c89150
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C89150;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C8917C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83c8917c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C8917C;
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89190"))) PPC_WEAK_FUNC(sub_83C89190);
PPC_FUNC_IMPL(__imp__sub_83C89190) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,7184
	ctx.r6.s64 = ctx.r7.s64 + 7184;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,7184(r7)
	PPC_STORE_U32(ctx.r7.u32 + 7184, ctx.r11.u32);
	// li r11,100
	ctx.r11.s64 = 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// li r8,100
	ctx.r8.s64 = 100;
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r11.u32);
	// li r11,100
	ctx.r11.s64 = 100;
	// stb r7,40(r6)
	PPC_STORE_U8(ctx.r6.u32 + 40, ctx.r7.u8);
	// li r7,100
	ctx.r7.s64 = 100;
	// stb r10,41(r6)
	PPC_STORE_U8(ctx.r6.u32 + 41, ctx.r10.u8);
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// stw r8,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// stw r9,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r9.u32);
	// stw r8,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r8.u32);
	// stw r9,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r9.u32);
	// stw r8,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r8.u32);
	// stw r11,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r11.u32);
	// stw r7,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r7.u32);
	// stw r10,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, ctx.r10.u32);
	// stb r9,84(r6)
	PPC_STORE_U8(ctx.r6.u32 + 84, ctx.r9.u8);
	// stb r8,85(r6)
	PPC_STORE_U8(ctx.r6.u32 + 85, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C89238"))) PPC_WEAK_FUNC(sub_83C89238);
PPC_FUNC_IMPL(__imp__sub_83C89238) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r8,7280
	ctx.r6.s64 = ctx.r8.s64 + 7280;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,7280(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7280, ctx.r9.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r8.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r7,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,32(r6)
	PPC_STORE_U8(ctx.r6.u32 + 32, ctx.r11.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r5,-31787
	ctx.r5.s64 = -2083192832;
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// stw r10,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r10.u32);
	// stw r8,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r8.u32);
	// addi r3,r5,5096
	ctx.r3.s64 = ctx.r5.s64 + 5096;
	// stw r7,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, ctx.r7.u32);
	// stb r9,64(r6)
	PPC_STORE_U8(ctx.r6.u32 + 64, ctx.r9.u8);
	// stw r11,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r11.u32);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C892A4"))) PPC_WEAK_FUNC(sub_83C892A4);
PPC_FUNC_IMPL(__imp__sub_83C892A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C892A8"))) PPC_WEAK_FUNC(sub_83C892A8);
PPC_FUNC_IMPL(__imp__sub_83C892A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83C892B0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,7480
	ctx.r11.s64 = ctx.r11.s64 + 7480;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r31,r11,174
	ctx.r31.s64 = ctx.r11.s64 + 174;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r23,2
	ctx.r23.s64 = 2;
	// li r26,-142
	ctx.r26.s64 = -142;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r29,r10,30820
	ctx.r29.s64 = ctx.r10.s64 + 30820;
	// addi r28,r9,30844
	ctx.r28.s64 = ctx.r9.s64 + 30844;
	// addi r24,r11,-31864
	ctx.r24.s64 = ctx.r11.s64 + -31864;
loc_83C892F8:
	// stw r27,-154(r31)
	PPC_STORE_U32(ctx.r31.u32 + -154, ctx.r27.u32);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// stw r30,-158(r31)
	PPC_STORE_U32(ctx.r31.u32 + -158, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r30,-174(r31)
	PPC_STORE_U8(ctx.r31.u32 + -174, ctx.r30.u8);
	// addi r6,r11,11064
	ctx.r6.s64 = ctx.r11.s64 + 11064;
	// stdx r30,r31,r26
	PPC_STORE_U64(ctx.r31.u32 + ctx.r26.u32, ctx.r30.u64);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,-134
	ctx.r3.s64 = ctx.r31.s64 + -134;
	// bl 0x823fca98
	ctx.lr = 0x83C89320;
	sub_823FCA98(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,-38(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -38, temp.u32);
	// stw r30,-30(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30, ctx.r30.u32);
	// stfs f31,-34(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -34, temp.u32);
	// stw r30,-26(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26, ctx.r30.u32);
	// stfs f31,-10(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -10, temp.u32);
	// stw r30,-22(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22, ctx.r30.u32);
	// stw r30,-18(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18, ctx.r30.u32);
	// addi r3,r31,-6
	ctx.r3.s64 = ctx.r31.s64 + -6;
	// stw r30,-14(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r29,-6(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6, ctx.r29.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r30,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r30.u16);
loc_83C89358:
	// stbx r30,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83c89358
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C89358;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83C8937C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83c8937c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C8937C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83C89398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// bge 0x83c892f8
	if (!cr0.lt) goto loc_83C892F8;
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5200
	ctx.r3.s64 = ctx.r11.s64 + 5200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C893B0;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C893BC"))) PPC_WEAK_FUNC(sub_83C893BC);
PPC_FUNC_IMPL(__imp__sub_83C893BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C893C0"))) PPC_WEAK_FUNC(sub_83C893C0);
PPC_FUNC_IMPL(__imp__sub_83C893C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r9,7376
	ctx.r3.s64 = ctx.r9.s64 + 7376;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,7376(r9)
	PPC_STORE_U32(ctx.r9.u32 + 7376, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r9,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r9.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stb r7,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r7.u8);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stb r4,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C89424"))) PPC_WEAK_FUNC(sub_83C89424);
PPC_FUNC_IMPL(__imp__sub_83C89424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89428"))) PPC_WEAK_FUNC(sub_83C89428);
PPC_FUNC_IMPL(__imp__sub_83C89428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5328
	ctx.r3.s64 = ctx.r11.s64 + 5328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89434"))) PPC_WEAK_FUNC(sub_83C89434);
PPC_FUNC_IMPL(__imp__sub_83C89434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89438"))) PPC_WEAK_FUNC(sub_83C89438);
PPC_FUNC_IMPL(__imp__sub_83C89438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5336
	ctx.r3.s64 = ctx.r11.s64 + 5336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89444"))) PPC_WEAK_FUNC(sub_83C89444);
PPC_FUNC_IMPL(__imp__sub_83C89444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89448"))) PPC_WEAK_FUNC(sub_83C89448);
PPC_FUNC_IMPL(__imp__sub_83C89448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89454"))) PPC_WEAK_FUNC(sub_83C89454);
PPC_FUNC_IMPL(__imp__sub_83C89454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89458"))) PPC_WEAK_FUNC(sub_83C89458);
PPC_FUNC_IMPL(__imp__sub_83C89458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5352
	ctx.r3.s64 = ctx.r11.s64 + 5352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89464"))) PPC_WEAK_FUNC(sub_83C89464);
PPC_FUNC_IMPL(__imp__sub_83C89464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89468"))) PPC_WEAK_FUNC(sub_83C89468);
PPC_FUNC_IMPL(__imp__sub_83C89468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5360
	ctx.r3.s64 = ctx.r11.s64 + 5360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89474"))) PPC_WEAK_FUNC(sub_83C89474);
PPC_FUNC_IMPL(__imp__sub_83C89474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89478"))) PPC_WEAK_FUNC(sub_83C89478);
PPC_FUNC_IMPL(__imp__sub_83C89478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89484"))) PPC_WEAK_FUNC(sub_83C89484);
PPC_FUNC_IMPL(__imp__sub_83C89484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89488"))) PPC_WEAK_FUNC(sub_83C89488);
PPC_FUNC_IMPL(__imp__sub_83C89488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5376
	ctx.r3.s64 = ctx.r11.s64 + 5376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89494"))) PPC_WEAK_FUNC(sub_83C89494);
PPC_FUNC_IMPL(__imp__sub_83C89494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89498"))) PPC_WEAK_FUNC(sub_83C89498);
PPC_FUNC_IMPL(__imp__sub_83C89498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5384
	ctx.r3.s64 = ctx.r11.s64 + 5384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C894A4"))) PPC_WEAK_FUNC(sub_83C894A4);
PPC_FUNC_IMPL(__imp__sub_83C894A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C894A8"))) PPC_WEAK_FUNC(sub_83C894A8);
PPC_FUNC_IMPL(__imp__sub_83C894A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5392
	ctx.r3.s64 = ctx.r11.s64 + 5392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C894B4"))) PPC_WEAK_FUNC(sub_83C894B4);
PPC_FUNC_IMPL(__imp__sub_83C894B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C894B8"))) PPC_WEAK_FUNC(sub_83C894B8);
PPC_FUNC_IMPL(__imp__sub_83C894B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5400
	ctx.r3.s64 = ctx.r11.s64 + 5400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C894C4"))) PPC_WEAK_FUNC(sub_83C894C4);
PPC_FUNC_IMPL(__imp__sub_83C894C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C894C8"))) PPC_WEAK_FUNC(sub_83C894C8);
PPC_FUNC_IMPL(__imp__sub_83C894C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C894D4"))) PPC_WEAK_FUNC(sub_83C894D4);
PPC_FUNC_IMPL(__imp__sub_83C894D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C894D8"))) PPC_WEAK_FUNC(sub_83C894D8);
PPC_FUNC_IMPL(__imp__sub_83C894D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5416
	ctx.r3.s64 = ctx.r11.s64 + 5416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C894E4"))) PPC_WEAK_FUNC(sub_83C894E4);
PPC_FUNC_IMPL(__imp__sub_83C894E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C894E8"))) PPC_WEAK_FUNC(sub_83C894E8);
PPC_FUNC_IMPL(__imp__sub_83C894E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C894F4"))) PPC_WEAK_FUNC(sub_83C894F4);
PPC_FUNC_IMPL(__imp__sub_83C894F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C894F8"))) PPC_WEAK_FUNC(sub_83C894F8);
PPC_FUNC_IMPL(__imp__sub_83C894F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5432
	ctx.r3.s64 = ctx.r11.s64 + 5432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89504"))) PPC_WEAK_FUNC(sub_83C89504);
PPC_FUNC_IMPL(__imp__sub_83C89504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89508"))) PPC_WEAK_FUNC(sub_83C89508);
PPC_FUNC_IMPL(__imp__sub_83C89508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5440
	ctx.r3.s64 = ctx.r11.s64 + 5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89514"))) PPC_WEAK_FUNC(sub_83C89514);
PPC_FUNC_IMPL(__imp__sub_83C89514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89518"))) PPC_WEAK_FUNC(sub_83C89518);
PPC_FUNC_IMPL(__imp__sub_83C89518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5448
	ctx.r3.s64 = ctx.r11.s64 + 5448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89524"))) PPC_WEAK_FUNC(sub_83C89524);
PPC_FUNC_IMPL(__imp__sub_83C89524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89528"))) PPC_WEAK_FUNC(sub_83C89528);
PPC_FUNC_IMPL(__imp__sub_83C89528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89534"))) PPC_WEAK_FUNC(sub_83C89534);
PPC_FUNC_IMPL(__imp__sub_83C89534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89538"))) PPC_WEAK_FUNC(sub_83C89538);
PPC_FUNC_IMPL(__imp__sub_83C89538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89544"))) PPC_WEAK_FUNC(sub_83C89544);
PPC_FUNC_IMPL(__imp__sub_83C89544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89548"))) PPC_WEAK_FUNC(sub_83C89548);
PPC_FUNC_IMPL(__imp__sub_83C89548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5472
	ctx.r3.s64 = ctx.r11.s64 + 5472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89554"))) PPC_WEAK_FUNC(sub_83C89554);
PPC_FUNC_IMPL(__imp__sub_83C89554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89558"))) PPC_WEAK_FUNC(sub_83C89558);
PPC_FUNC_IMPL(__imp__sub_83C89558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89564"))) PPC_WEAK_FUNC(sub_83C89564);
PPC_FUNC_IMPL(__imp__sub_83C89564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89568"))) PPC_WEAK_FUNC(sub_83C89568);
PPC_FUNC_IMPL(__imp__sub_83C89568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89574"))) PPC_WEAK_FUNC(sub_83C89574);
PPC_FUNC_IMPL(__imp__sub_83C89574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89578"))) PPC_WEAK_FUNC(sub_83C89578);
PPC_FUNC_IMPL(__imp__sub_83C89578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5496
	ctx.r3.s64 = ctx.r11.s64 + 5496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89584"))) PPC_WEAK_FUNC(sub_83C89584);
PPC_FUNC_IMPL(__imp__sub_83C89584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89588"))) PPC_WEAK_FUNC(sub_83C89588);
PPC_FUNC_IMPL(__imp__sub_83C89588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89594"))) PPC_WEAK_FUNC(sub_83C89594);
PPC_FUNC_IMPL(__imp__sub_83C89594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89598"))) PPC_WEAK_FUNC(sub_83C89598);
PPC_FUNC_IMPL(__imp__sub_83C89598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5512
	ctx.r3.s64 = ctx.r11.s64 + 5512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C895A4"))) PPC_WEAK_FUNC(sub_83C895A4);
PPC_FUNC_IMPL(__imp__sub_83C895A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C895A8"))) PPC_WEAK_FUNC(sub_83C895A8);
PPC_FUNC_IMPL(__imp__sub_83C895A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5544
	ctx.r3.s64 = ctx.r11.s64 + 5544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C895B4"))) PPC_WEAK_FUNC(sub_83C895B4);
PPC_FUNC_IMPL(__imp__sub_83C895B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C895B8"))) PPC_WEAK_FUNC(sub_83C895B8);
PPC_FUNC_IMPL(__imp__sub_83C895B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,8216
	ctx.r11.s64 = ctx.r11.s64 + 8216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C895D0:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83c895d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C895D0;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C895FC:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83c895fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C895FC;
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89610"))) PPC_WEAK_FUNC(sub_83C89610);
PPC_FUNC_IMPL(__imp__sub_83C89610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8961C"))) PPC_WEAK_FUNC(sub_83C8961C);
PPC_FUNC_IMPL(__imp__sub_83C8961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89620"))) PPC_WEAK_FUNC(sub_83C89620);
PPC_FUNC_IMPL(__imp__sub_83C89620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8962C"))) PPC_WEAK_FUNC(sub_83C8962C);
PPC_FUNC_IMPL(__imp__sub_83C8962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89630"))) PPC_WEAK_FUNC(sub_83C89630);
PPC_FUNC_IMPL(__imp__sub_83C89630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5680
	ctx.r3.s64 = ctx.r11.s64 + 5680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8963C"))) PPC_WEAK_FUNC(sub_83C8963C);
PPC_FUNC_IMPL(__imp__sub_83C8963C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89640"))) PPC_WEAK_FUNC(sub_83C89640);
PPC_FUNC_IMPL(__imp__sub_83C89640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5688
	ctx.r3.s64 = ctx.r11.s64 + 5688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8964C"))) PPC_WEAK_FUNC(sub_83C8964C);
PPC_FUNC_IMPL(__imp__sub_83C8964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89650"))) PPC_WEAK_FUNC(sub_83C89650);
PPC_FUNC_IMPL(__imp__sub_83C89650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5696
	ctx.r3.s64 = ctx.r11.s64 + 5696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8965C"))) PPC_WEAK_FUNC(sub_83C8965C);
PPC_FUNC_IMPL(__imp__sub_83C8965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89660"))) PPC_WEAK_FUNC(sub_83C89660);
PPC_FUNC_IMPL(__imp__sub_83C89660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5704
	ctx.r3.s64 = ctx.r11.s64 + 5704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8966C"))) PPC_WEAK_FUNC(sub_83C8966C);
PPC_FUNC_IMPL(__imp__sub_83C8966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89670"))) PPC_WEAK_FUNC(sub_83C89670);
PPC_FUNC_IMPL(__imp__sub_83C89670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5712
	ctx.r3.s64 = ctx.r11.s64 + 5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8967C"))) PPC_WEAK_FUNC(sub_83C8967C);
PPC_FUNC_IMPL(__imp__sub_83C8967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89680"))) PPC_WEAK_FUNC(sub_83C89680);
PPC_FUNC_IMPL(__imp__sub_83C89680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5720
	ctx.r3.s64 = ctx.r11.s64 + 5720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8968C"))) PPC_WEAK_FUNC(sub_83C8968C);
PPC_FUNC_IMPL(__imp__sub_83C8968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89690"))) PPC_WEAK_FUNC(sub_83C89690);
PPC_FUNC_IMPL(__imp__sub_83C89690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5728
	ctx.r3.s64 = ctx.r11.s64 + 5728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8969C"))) PPC_WEAK_FUNC(sub_83C8969C);
PPC_FUNC_IMPL(__imp__sub_83C8969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C896A0"))) PPC_WEAK_FUNC(sub_83C896A0);
PPC_FUNC_IMPL(__imp__sub_83C896A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5736
	ctx.r3.s64 = ctx.r11.s64 + 5736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C896AC"))) PPC_WEAK_FUNC(sub_83C896AC);
PPC_FUNC_IMPL(__imp__sub_83C896AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C896B0"))) PPC_WEAK_FUNC(sub_83C896B0);
PPC_FUNC_IMPL(__imp__sub_83C896B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C896BC"))) PPC_WEAK_FUNC(sub_83C896BC);
PPC_FUNC_IMPL(__imp__sub_83C896BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C896C0"))) PPC_WEAK_FUNC(sub_83C896C0);
PPC_FUNC_IMPL(__imp__sub_83C896C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5752
	ctx.r3.s64 = ctx.r11.s64 + 5752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C896CC"))) PPC_WEAK_FUNC(sub_83C896CC);
PPC_FUNC_IMPL(__imp__sub_83C896CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C896D0"))) PPC_WEAK_FUNC(sub_83C896D0);
PPC_FUNC_IMPL(__imp__sub_83C896D0) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,8273
	ctx.r3.s64 = ctx.r11.s64 + 8273;
	// bl 0x83523120
	ctx.lr = 0x83C896E8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,5760
	ctx.r3.s64 = ctx.r10.s64 + 5760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C896F4;
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

__attribute__((alias("__imp__sub_83C89704"))) PPC_WEAK_FUNC(sub_83C89704);
PPC_FUNC_IMPL(__imp__sub_83C89704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89708"))) PPC_WEAK_FUNC(sub_83C89708);
PPC_FUNC_IMPL(__imp__sub_83C89708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,8280
	ctx.r11.s64 = ctx.r11.s64 + 8280;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C89720:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83c89720
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C89720;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83C8974C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83c8974c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C8974C;
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89760"))) PPC_WEAK_FUNC(sub_83C89760);
PPC_FUNC_IMPL(__imp__sub_83C89760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5776
	ctx.r3.s64 = ctx.r11.s64 + 5776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8976C"))) PPC_WEAK_FUNC(sub_83C8976C);
PPC_FUNC_IMPL(__imp__sub_83C8976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89770"))) PPC_WEAK_FUNC(sub_83C89770);
PPC_FUNC_IMPL(__imp__sub_83C89770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5824
	ctx.r3.s64 = ctx.r11.s64 + 5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8977C"))) PPC_WEAK_FUNC(sub_83C8977C);
PPC_FUNC_IMPL(__imp__sub_83C8977C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89780"))) PPC_WEAK_FUNC(sub_83C89780);
PPC_FUNC_IMPL(__imp__sub_83C89780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5832
	ctx.r3.s64 = ctx.r11.s64 + 5832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8978C"))) PPC_WEAK_FUNC(sub_83C8978C);
PPC_FUNC_IMPL(__imp__sub_83C8978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89790"))) PPC_WEAK_FUNC(sub_83C89790);
PPC_FUNC_IMPL(__imp__sub_83C89790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5840
	ctx.r3.s64 = ctx.r11.s64 + 5840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8979C"))) PPC_WEAK_FUNC(sub_83C8979C);
PPC_FUNC_IMPL(__imp__sub_83C8979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C897A0"))) PPC_WEAK_FUNC(sub_83C897A0);
PPC_FUNC_IMPL(__imp__sub_83C897A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C897AC"))) PPC_WEAK_FUNC(sub_83C897AC);
PPC_FUNC_IMPL(__imp__sub_83C897AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C897B0"))) PPC_WEAK_FUNC(sub_83C897B0);
PPC_FUNC_IMPL(__imp__sub_83C897B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C897BC"))) PPC_WEAK_FUNC(sub_83C897BC);
PPC_FUNC_IMPL(__imp__sub_83C897BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C897C0"))) PPC_WEAK_FUNC(sub_83C897C0);
PPC_FUNC_IMPL(__imp__sub_83C897C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5864
	ctx.r3.s64 = ctx.r11.s64 + 5864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C897CC"))) PPC_WEAK_FUNC(sub_83C897CC);
PPC_FUNC_IMPL(__imp__sub_83C897CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C897D0"))) PPC_WEAK_FUNC(sub_83C897D0);
PPC_FUNC_IMPL(__imp__sub_83C897D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5872
	ctx.r3.s64 = ctx.r11.s64 + 5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C897DC"))) PPC_WEAK_FUNC(sub_83C897DC);
PPC_FUNC_IMPL(__imp__sub_83C897DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C897E0"))) PPC_WEAK_FUNC(sub_83C897E0);
PPC_FUNC_IMPL(__imp__sub_83C897E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C897EC"))) PPC_WEAK_FUNC(sub_83C897EC);
PPC_FUNC_IMPL(__imp__sub_83C897EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C897F0"))) PPC_WEAK_FUNC(sub_83C897F0);
PPC_FUNC_IMPL(__imp__sub_83C897F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5888
	ctx.r3.s64 = ctx.r11.s64 + 5888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C897FC"))) PPC_WEAK_FUNC(sub_83C897FC);
PPC_FUNC_IMPL(__imp__sub_83C897FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89800"))) PPC_WEAK_FUNC(sub_83C89800);
PPC_FUNC_IMPL(__imp__sub_83C89800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5896
	ctx.r3.s64 = ctx.r11.s64 + 5896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8980C"))) PPC_WEAK_FUNC(sub_83C8980C);
PPC_FUNC_IMPL(__imp__sub_83C8980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89810"))) PPC_WEAK_FUNC(sub_83C89810);
PPC_FUNC_IMPL(__imp__sub_83C89810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5904
	ctx.r3.s64 = ctx.r11.s64 + 5904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8981C"))) PPC_WEAK_FUNC(sub_83C8981C);
PPC_FUNC_IMPL(__imp__sub_83C8981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89820"))) PPC_WEAK_FUNC(sub_83C89820);
PPC_FUNC_IMPL(__imp__sub_83C89820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5912
	ctx.r3.s64 = ctx.r11.s64 + 5912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8982C"))) PPC_WEAK_FUNC(sub_83C8982C);
PPC_FUNC_IMPL(__imp__sub_83C8982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89830"))) PPC_WEAK_FUNC(sub_83C89830);
PPC_FUNC_IMPL(__imp__sub_83C89830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5920
	ctx.r3.s64 = ctx.r11.s64 + 5920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8983C"))) PPC_WEAK_FUNC(sub_83C8983C);
PPC_FUNC_IMPL(__imp__sub_83C8983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89840"))) PPC_WEAK_FUNC(sub_83C89840);
PPC_FUNC_IMPL(__imp__sub_83C89840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5928
	ctx.r3.s64 = ctx.r11.s64 + 5928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8984C"))) PPC_WEAK_FUNC(sub_83C8984C);
PPC_FUNC_IMPL(__imp__sub_83C8984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89850"))) PPC_WEAK_FUNC(sub_83C89850);
PPC_FUNC_IMPL(__imp__sub_83C89850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5936
	ctx.r3.s64 = ctx.r11.s64 + 5936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8985C"))) PPC_WEAK_FUNC(sub_83C8985C);
PPC_FUNC_IMPL(__imp__sub_83C8985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89860"))) PPC_WEAK_FUNC(sub_83C89860);
PPC_FUNC_IMPL(__imp__sub_83C89860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5944
	ctx.r3.s64 = ctx.r11.s64 + 5944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8986C"))) PPC_WEAK_FUNC(sub_83C8986C);
PPC_FUNC_IMPL(__imp__sub_83C8986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89870"))) PPC_WEAK_FUNC(sub_83C89870);
PPC_FUNC_IMPL(__imp__sub_83C89870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5952
	ctx.r3.s64 = ctx.r11.s64 + 5952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8987C"))) PPC_WEAK_FUNC(sub_83C8987C);
PPC_FUNC_IMPL(__imp__sub_83C8987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89880"))) PPC_WEAK_FUNC(sub_83C89880);
PPC_FUNC_IMPL(__imp__sub_83C89880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5960
	ctx.r3.s64 = ctx.r11.s64 + 5960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8988C"))) PPC_WEAK_FUNC(sub_83C8988C);
PPC_FUNC_IMPL(__imp__sub_83C8988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89890"))) PPC_WEAK_FUNC(sub_83C89890);
PPC_FUNC_IMPL(__imp__sub_83C89890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5968
	ctx.r3.s64 = ctx.r11.s64 + 5968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8989C"))) PPC_WEAK_FUNC(sub_83C8989C);
PPC_FUNC_IMPL(__imp__sub_83C8989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C898A0"))) PPC_WEAK_FUNC(sub_83C898A0);
PPC_FUNC_IMPL(__imp__sub_83C898A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5976
	ctx.r3.s64 = ctx.r11.s64 + 5976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C898AC"))) PPC_WEAK_FUNC(sub_83C898AC);
PPC_FUNC_IMPL(__imp__sub_83C898AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C898B0"))) PPC_WEAK_FUNC(sub_83C898B0);
PPC_FUNC_IMPL(__imp__sub_83C898B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5984
	ctx.r3.s64 = ctx.r11.s64 + 5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C898BC"))) PPC_WEAK_FUNC(sub_83C898BC);
PPC_FUNC_IMPL(__imp__sub_83C898BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C898C0"))) PPC_WEAK_FUNC(sub_83C898C0);
PPC_FUNC_IMPL(__imp__sub_83C898C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,5992
	ctx.r3.s64 = ctx.r11.s64 + 5992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C898CC"))) PPC_WEAK_FUNC(sub_83C898CC);
PPC_FUNC_IMPL(__imp__sub_83C898CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C898D0"))) PPC_WEAK_FUNC(sub_83C898D0);
PPC_FUNC_IMPL(__imp__sub_83C898D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6000
	ctx.r3.s64 = ctx.r11.s64 + 6000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C898DC"))) PPC_WEAK_FUNC(sub_83C898DC);
PPC_FUNC_IMPL(__imp__sub_83C898DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C898E0"))) PPC_WEAK_FUNC(sub_83C898E0);
PPC_FUNC_IMPL(__imp__sub_83C898E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C898EC"))) PPC_WEAK_FUNC(sub_83C898EC);
PPC_FUNC_IMPL(__imp__sub_83C898EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C898F0"))) PPC_WEAK_FUNC(sub_83C898F0);
PPC_FUNC_IMPL(__imp__sub_83C898F0) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83C89914;
	sub_82595718(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,6016
	ctx.r3.s64 = ctx.r9.s64 + 6016;
	// stw r11,9892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9892, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,9892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9892);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C89938;
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

__attribute__((alias("__imp__sub_83C89948"))) PPC_WEAK_FUNC(sub_83C89948);
PPC_FUNC_IMPL(__imp__sub_83C89948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,64
	ctx.r10.s64 = 64;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,8352
	ctx.r11.s64 = ctx.r11.s64 + 8352;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83C89964:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// stwu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83c89964
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83C89964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8997C"))) PPC_WEAK_FUNC(sub_83C8997C);
PPC_FUNC_IMPL(__imp__sub_83C8997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89980"))) PPC_WEAK_FUNC(sub_83C89980);
PPC_FUNC_IMPL(__imp__sub_83C89980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6088
	ctx.r3.s64 = ctx.r11.s64 + 6088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8998C"))) PPC_WEAK_FUNC(sub_83C8998C);
PPC_FUNC_IMPL(__imp__sub_83C8998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89990"))) PPC_WEAK_FUNC(sub_83C89990);
PPC_FUNC_IMPL(__imp__sub_83C89990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6096
	ctx.r3.s64 = ctx.r11.s64 + 6096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8999C"))) PPC_WEAK_FUNC(sub_83C8999C);
PPC_FUNC_IMPL(__imp__sub_83C8999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C899A0"))) PPC_WEAK_FUNC(sub_83C899A0);
PPC_FUNC_IMPL(__imp__sub_83C899A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6104
	ctx.r3.s64 = ctx.r11.s64 + 6104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C899AC"))) PPC_WEAK_FUNC(sub_83C899AC);
PPC_FUNC_IMPL(__imp__sub_83C899AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C899B0"))) PPC_WEAK_FUNC(sub_83C899B0);
PPC_FUNC_IMPL(__imp__sub_83C899B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6112
	ctx.r3.s64 = ctx.r11.s64 + 6112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C899BC"))) PPC_WEAK_FUNC(sub_83C899BC);
PPC_FUNC_IMPL(__imp__sub_83C899BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C899C0"))) PPC_WEAK_FUNC(sub_83C899C0);
PPC_FUNC_IMPL(__imp__sub_83C899C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C899CC"))) PPC_WEAK_FUNC(sub_83C899CC);
PPC_FUNC_IMPL(__imp__sub_83C899CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C899D0"))) PPC_WEAK_FUNC(sub_83C899D0);
PPC_FUNC_IMPL(__imp__sub_83C899D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6128
	ctx.r3.s64 = ctx.r11.s64 + 6128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C899DC"))) PPC_WEAK_FUNC(sub_83C899DC);
PPC_FUNC_IMPL(__imp__sub_83C899DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C899E0"))) PPC_WEAK_FUNC(sub_83C899E0);
PPC_FUNC_IMPL(__imp__sub_83C899E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6136
	ctx.r3.s64 = ctx.r11.s64 + 6136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C899EC"))) PPC_WEAK_FUNC(sub_83C899EC);
PPC_FUNC_IMPL(__imp__sub_83C899EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C899F0"))) PPC_WEAK_FUNC(sub_83C899F0);
PPC_FUNC_IMPL(__imp__sub_83C899F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C899FC"))) PPC_WEAK_FUNC(sub_83C899FC);
PPC_FUNC_IMPL(__imp__sub_83C899FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C89A00"))) PPC_WEAK_FUNC(sub_83C89A00);
PPC_FUNC_IMPL(__imp__sub_83C89A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,6152
	ctx.r3.s64 = ctx.r11.s64 + 6152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C89A0C"))) PPC_WEAK_FUNC(sub_83C89A0C);
PPC_FUNC_IMPL(__imp__sub_83C89A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

