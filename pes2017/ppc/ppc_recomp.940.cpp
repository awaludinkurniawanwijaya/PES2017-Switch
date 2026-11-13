#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CD6CB0"))) PPC_WEAK_FUNC(sub_83CD6CB0);
PPC_FUNC_IMPL(__imp__sub_83CD6CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,8924
	ctx.r6.s64 = ctx.r7.s64 + 8924;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8820(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8820);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7904);
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
	// std r9,8924(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8924, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6CF8"))) PPC_WEAK_FUNC(sub_83CD6CF8);
PPC_FUNC_IMPL(__imp__sub_83CD6CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12368
	ctx.r3.s64 = ctx.r11.s64 + -12368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6D04"))) PPC_WEAK_FUNC(sub_83CD6D04);
PPC_FUNC_IMPL(__imp__sub_83CD6D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6D08"))) PPC_WEAK_FUNC(sub_83CD6D08);
PPC_FUNC_IMPL(__imp__sub_83CD6D08) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,7928
	ctx.r3.s64 = ctx.r11.s64 + 7928;
	// bl 0x8259af80
	ctx.lr = 0x83CD6D20;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12352
	ctx.r3.s64 = ctx.r10.s64 + -12352;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD6D2C;
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

__attribute__((alias("__imp__sub_83CD6D3C"))) PPC_WEAK_FUNC(sub_83CD6D3C);
PPC_FUNC_IMPL(__imp__sub_83CD6D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6D40"))) PPC_WEAK_FUNC(sub_83CD6D40);
PPC_FUNC_IMPL(__imp__sub_83CD6D40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7892
	ctx.r11.s64 = ctx.r8.s64 + 7892;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,8868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8868);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12360
	ctx.r3.s64 = ctx.r6.s64 + -12360;
	// stw r10,7892(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6D70"))) PPC_WEAK_FUNC(sub_83CD6D70);
PPC_FUNC_IMPL(__imp__sub_83CD6D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6D7C"))) PPC_WEAK_FUNC(sub_83CD6D7C);
PPC_FUNC_IMPL(__imp__sub_83CD6D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6D80"))) PPC_WEAK_FUNC(sub_83CD6D80);
PPC_FUNC_IMPL(__imp__sub_83CD6D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12336
	ctx.r3.s64 = ctx.r11.s64 + -12336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6D8C"))) PPC_WEAK_FUNC(sub_83CD6D8C);
PPC_FUNC_IMPL(__imp__sub_83CD6D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6D90"))) PPC_WEAK_FUNC(sub_83CD6D90);
PPC_FUNC_IMPL(__imp__sub_83CD6D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12328
	ctx.r3.s64 = ctx.r11.s64 + -12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6D9C"))) PPC_WEAK_FUNC(sub_83CD6D9C);
PPC_FUNC_IMPL(__imp__sub_83CD6D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6DA0"))) PPC_WEAK_FUNC(sub_83CD6DA0);
PPC_FUNC_IMPL(__imp__sub_83CD6DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12320
	ctx.r3.s64 = ctx.r11.s64 + -12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6DAC"))) PPC_WEAK_FUNC(sub_83CD6DAC);
PPC_FUNC_IMPL(__imp__sub_83CD6DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6DB0"))) PPC_WEAK_FUNC(sub_83CD6DB0);
PPC_FUNC_IMPL(__imp__sub_83CD6DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12312
	ctx.r3.s64 = ctx.r11.s64 + -12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6DBC"))) PPC_WEAK_FUNC(sub_83CD6DBC);
PPC_FUNC_IMPL(__imp__sub_83CD6DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6DC0"))) PPC_WEAK_FUNC(sub_83CD6DC0);
PPC_FUNC_IMPL(__imp__sub_83CD6DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6DCC"))) PPC_WEAK_FUNC(sub_83CD6DCC);
PPC_FUNC_IMPL(__imp__sub_83CD6DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6DD0"))) PPC_WEAK_FUNC(sub_83CD6DD0);
PPC_FUNC_IMPL(__imp__sub_83CD6DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6DDC"))) PPC_WEAK_FUNC(sub_83CD6DDC);
PPC_FUNC_IMPL(__imp__sub_83CD6DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6DE0"))) PPC_WEAK_FUNC(sub_83CD6DE0);
PPC_FUNC_IMPL(__imp__sub_83CD6DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12288
	ctx.r3.s64 = ctx.r11.s64 + -12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6DEC"))) PPC_WEAK_FUNC(sub_83CD6DEC);
PPC_FUNC_IMPL(__imp__sub_83CD6DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6DF0"))) PPC_WEAK_FUNC(sub_83CD6DF0);
PPC_FUNC_IMPL(__imp__sub_83CD6DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12280
	ctx.r3.s64 = ctx.r11.s64 + -12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6DFC"))) PPC_WEAK_FUNC(sub_83CD6DFC);
PPC_FUNC_IMPL(__imp__sub_83CD6DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6E00"))) PPC_WEAK_FUNC(sub_83CD6E00);
PPC_FUNC_IMPL(__imp__sub_83CD6E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12272
	ctx.r3.s64 = ctx.r11.s64 + -12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6E0C"))) PPC_WEAK_FUNC(sub_83CD6E0C);
PPC_FUNC_IMPL(__imp__sub_83CD6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6E10"))) PPC_WEAK_FUNC(sub_83CD6E10);
PPC_FUNC_IMPL(__imp__sub_83CD6E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12264
	ctx.r3.s64 = ctx.r11.s64 + -12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6E1C"))) PPC_WEAK_FUNC(sub_83CD6E1C);
PPC_FUNC_IMPL(__imp__sub_83CD6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6E20"))) PPC_WEAK_FUNC(sub_83CD6E20);
PPC_FUNC_IMPL(__imp__sub_83CD6E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12256
	ctx.r3.s64 = ctx.r11.s64 + -12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6E2C"))) PPC_WEAK_FUNC(sub_83CD6E2C);
PPC_FUNC_IMPL(__imp__sub_83CD6E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6E30"))) PPC_WEAK_FUNC(sub_83CD6E30);
PPC_FUNC_IMPL(__imp__sub_83CD6E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-12172
	ctx.r4.s64 = ctx.r11.s64 + -12172;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,8328
	ctx.r3.s64 = ctx.r7.s64 + 8328;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6E60"))) PPC_WEAK_FUNC(sub_83CD6E60);
PPC_FUNC_IMPL(__imp__sub_83CD6E60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8320
	ctx.r7.s64 = ctx.r8.s64 + 8320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6E88"))) PPC_WEAK_FUNC(sub_83CD6E88);
PPC_FUNC_IMPL(__imp__sub_83CD6E88) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,8304
	ctx.r3.s64 = ctx.r11.s64 + 8304;
	// bl 0x83523120
	ctx.lr = 0x83CD6EA0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12248
	ctx.r3.s64 = ctx.r10.s64 + -12248;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD6EAC;
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

__attribute__((alias("__imp__sub_83CD6EBC"))) PPC_WEAK_FUNC(sub_83CD6EBC);
PPC_FUNC_IMPL(__imp__sub_83CD6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6EC0"))) PPC_WEAK_FUNC(sub_83CD6EC0);
PPC_FUNC_IMPL(__imp__sub_83CD6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,8688
	ctx.r11.s64 = ctx.r11.s64 + 8688;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6F00"))) PPC_WEAK_FUNC(sub_83CD6F00);
PPC_FUNC_IMPL(__imp__sub_83CD6F00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,9084
	ctx.r6.s64 = ctx.r7.s64 + 9084;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8980(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8980);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8320);
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
	// std r9,9084(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9084, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD6F48"))) PPC_WEAK_FUNC(sub_83CD6F48);
PPC_FUNC_IMPL(__imp__sub_83CD6F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12232
	ctx.r3.s64 = ctx.r11.s64 + -12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6F54"))) PPC_WEAK_FUNC(sub_83CD6F54);
PPC_FUNC_IMPL(__imp__sub_83CD6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6F58"))) PPC_WEAK_FUNC(sub_83CD6F58);
PPC_FUNC_IMPL(__imp__sub_83CD6F58) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,8344
	ctx.r3.s64 = ctx.r11.s64 + 8344;
	// bl 0x8259af80
	ctx.lr = 0x83CD6F70;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12216
	ctx.r3.s64 = ctx.r10.s64 + -12216;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD6F7C;
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

__attribute__((alias("__imp__sub_83CD6F8C"))) PPC_WEAK_FUNC(sub_83CD6F8C);
PPC_FUNC_IMPL(__imp__sub_83CD6F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6F90"))) PPC_WEAK_FUNC(sub_83CD6F90);
PPC_FUNC_IMPL(__imp__sub_83CD6F90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8308
	ctx.r11.s64 = ctx.r8.s64 + 8308;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9028);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12224
	ctx.r3.s64 = ctx.r6.s64 + -12224;
	// stw r10,8308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6FC0"))) PPC_WEAK_FUNC(sub_83CD6FC0);
PPC_FUNC_IMPL(__imp__sub_83CD6FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12208
	ctx.r3.s64 = ctx.r11.s64 + -12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6FCC"))) PPC_WEAK_FUNC(sub_83CD6FCC);
PPC_FUNC_IMPL(__imp__sub_83CD6FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6FD0"))) PPC_WEAK_FUNC(sub_83CD6FD0);
PPC_FUNC_IMPL(__imp__sub_83CD6FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12200
	ctx.r3.s64 = ctx.r11.s64 + -12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6FDC"))) PPC_WEAK_FUNC(sub_83CD6FDC);
PPC_FUNC_IMPL(__imp__sub_83CD6FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6FE0"))) PPC_WEAK_FUNC(sub_83CD6FE0);
PPC_FUNC_IMPL(__imp__sub_83CD6FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12192
	ctx.r3.s64 = ctx.r11.s64 + -12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6FEC"))) PPC_WEAK_FUNC(sub_83CD6FEC);
PPC_FUNC_IMPL(__imp__sub_83CD6FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD6FF0"))) PPC_WEAK_FUNC(sub_83CD6FF0);
PPC_FUNC_IMPL(__imp__sub_83CD6FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12184
	ctx.r3.s64 = ctx.r11.s64 + -12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD6FFC"))) PPC_WEAK_FUNC(sub_83CD6FFC);
PPC_FUNC_IMPL(__imp__sub_83CD6FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7000"))) PPC_WEAK_FUNC(sub_83CD7000);
PPC_FUNC_IMPL(__imp__sub_83CD7000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD700C"))) PPC_WEAK_FUNC(sub_83CD700C);
PPC_FUNC_IMPL(__imp__sub_83CD700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7010"))) PPC_WEAK_FUNC(sub_83CD7010);
PPC_FUNC_IMPL(__imp__sub_83CD7010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12168
	ctx.r3.s64 = ctx.r11.s64 + -12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD701C"))) PPC_WEAK_FUNC(sub_83CD701C);
PPC_FUNC_IMPL(__imp__sub_83CD701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7020"))) PPC_WEAK_FUNC(sub_83CD7020);
PPC_FUNC_IMPL(__imp__sub_83CD7020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12160
	ctx.r3.s64 = ctx.r11.s64 + -12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD702C"))) PPC_WEAK_FUNC(sub_83CD702C);
PPC_FUNC_IMPL(__imp__sub_83CD702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7030"))) PPC_WEAK_FUNC(sub_83CD7030);
PPC_FUNC_IMPL(__imp__sub_83CD7030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12152
	ctx.r3.s64 = ctx.r11.s64 + -12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD703C"))) PPC_WEAK_FUNC(sub_83CD703C);
PPC_FUNC_IMPL(__imp__sub_83CD703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7040"))) PPC_WEAK_FUNC(sub_83CD7040);
PPC_FUNC_IMPL(__imp__sub_83CD7040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12144
	ctx.r3.s64 = ctx.r11.s64 + -12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD704C"))) PPC_WEAK_FUNC(sub_83CD704C);
PPC_FUNC_IMPL(__imp__sub_83CD704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7050"))) PPC_WEAK_FUNC(sub_83CD7050);
PPC_FUNC_IMPL(__imp__sub_83CD7050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD705C"))) PPC_WEAK_FUNC(sub_83CD705C);
PPC_FUNC_IMPL(__imp__sub_83CD705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7060"))) PPC_WEAK_FUNC(sub_83CD7060);
PPC_FUNC_IMPL(__imp__sub_83CD7060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12128
	ctx.r3.s64 = ctx.r11.s64 + -12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD706C"))) PPC_WEAK_FUNC(sub_83CD706C);
PPC_FUNC_IMPL(__imp__sub_83CD706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7070"))) PPC_WEAK_FUNC(sub_83CD7070);
PPC_FUNC_IMPL(__imp__sub_83CD7070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD707C"))) PPC_WEAK_FUNC(sub_83CD707C);
PPC_FUNC_IMPL(__imp__sub_83CD707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7080"))) PPC_WEAK_FUNC(sub_83CD7080);
PPC_FUNC_IMPL(__imp__sub_83CD7080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-11692
	ctx.r4.s64 = ctx.r11.s64 + -11692;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,8744
	ctx.r3.s64 = ctx.r7.s64 + 8744;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD70B0"))) PPC_WEAK_FUNC(sub_83CD70B0);
PPC_FUNC_IMPL(__imp__sub_83CD70B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8736
	ctx.r7.s64 = ctx.r8.s64 + 8736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD70D8"))) PPC_WEAK_FUNC(sub_83CD70D8);
PPC_FUNC_IMPL(__imp__sub_83CD70D8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,8720
	ctx.r3.s64 = ctx.r11.s64 + 8720;
	// bl 0x83523120
	ctx.lr = 0x83CD70F0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12112
	ctx.r3.s64 = ctx.r10.s64 + -12112;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD70FC;
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

__attribute__((alias("__imp__sub_83CD710C"))) PPC_WEAK_FUNC(sub_83CD710C);
PPC_FUNC_IMPL(__imp__sub_83CD710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7110"))) PPC_WEAK_FUNC(sub_83CD7110);
PPC_FUNC_IMPL(__imp__sub_83CD7110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9104
	ctx.r11.s64 = ctx.r11.s64 + 9104;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7150"))) PPC_WEAK_FUNC(sub_83CD7150);
PPC_FUNC_IMPL(__imp__sub_83CD7150) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,9244
	ctx.r6.s64 = ctx.r7.s64 + 9244;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9140(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9140);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8736);
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
	// std r9,9244(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9244, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7198"))) PPC_WEAK_FUNC(sub_83CD7198);
PPC_FUNC_IMPL(__imp__sub_83CD7198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD71A4"))) PPC_WEAK_FUNC(sub_83CD71A4);
PPC_FUNC_IMPL(__imp__sub_83CD71A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD71A8"))) PPC_WEAK_FUNC(sub_83CD71A8);
PPC_FUNC_IMPL(__imp__sub_83CD71A8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,8760
	ctx.r3.s64 = ctx.r11.s64 + 8760;
	// bl 0x8259af80
	ctx.lr = 0x83CD71C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-12080
	ctx.r3.s64 = ctx.r10.s64 + -12080;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD71CC;
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

__attribute__((alias("__imp__sub_83CD71DC"))) PPC_WEAK_FUNC(sub_83CD71DC);
PPC_FUNC_IMPL(__imp__sub_83CD71DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD71E0"))) PPC_WEAK_FUNC(sub_83CD71E0);
PPC_FUNC_IMPL(__imp__sub_83CD71E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8724
	ctx.r11.s64 = ctx.r8.s64 + 8724;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12088
	ctx.r3.s64 = ctx.r6.s64 + -12088;
	// stw r10,8724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7210"))) PPC_WEAK_FUNC(sub_83CD7210);
PPC_FUNC_IMPL(__imp__sub_83CD7210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD721C"))) PPC_WEAK_FUNC(sub_83CD721C);
PPC_FUNC_IMPL(__imp__sub_83CD721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7220"))) PPC_WEAK_FUNC(sub_83CD7220);
PPC_FUNC_IMPL(__imp__sub_83CD7220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12064
	ctx.r3.s64 = ctx.r11.s64 + -12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD722C"))) PPC_WEAK_FUNC(sub_83CD722C);
PPC_FUNC_IMPL(__imp__sub_83CD722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7230"))) PPC_WEAK_FUNC(sub_83CD7230);
PPC_FUNC_IMPL(__imp__sub_83CD7230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD723C"))) PPC_WEAK_FUNC(sub_83CD723C);
PPC_FUNC_IMPL(__imp__sub_83CD723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7240"))) PPC_WEAK_FUNC(sub_83CD7240);
PPC_FUNC_IMPL(__imp__sub_83CD7240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD724C"))) PPC_WEAK_FUNC(sub_83CD724C);
PPC_FUNC_IMPL(__imp__sub_83CD724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7250"))) PPC_WEAK_FUNC(sub_83CD7250);
PPC_FUNC_IMPL(__imp__sub_83CD7250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12040
	ctx.r3.s64 = ctx.r11.s64 + -12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD725C"))) PPC_WEAK_FUNC(sub_83CD725C);
PPC_FUNC_IMPL(__imp__sub_83CD725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7260"))) PPC_WEAK_FUNC(sub_83CD7260);
PPC_FUNC_IMPL(__imp__sub_83CD7260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD726C"))) PPC_WEAK_FUNC(sub_83CD726C);
PPC_FUNC_IMPL(__imp__sub_83CD726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7270"))) PPC_WEAK_FUNC(sub_83CD7270);
PPC_FUNC_IMPL(__imp__sub_83CD7270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12024
	ctx.r3.s64 = ctx.r11.s64 + -12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD727C"))) PPC_WEAK_FUNC(sub_83CD727C);
PPC_FUNC_IMPL(__imp__sub_83CD727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7280"))) PPC_WEAK_FUNC(sub_83CD7280);
PPC_FUNC_IMPL(__imp__sub_83CD7280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12016
	ctx.r3.s64 = ctx.r11.s64 + -12016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD728C"))) PPC_WEAK_FUNC(sub_83CD728C);
PPC_FUNC_IMPL(__imp__sub_83CD728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7290"))) PPC_WEAK_FUNC(sub_83CD7290);
PPC_FUNC_IMPL(__imp__sub_83CD7290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD729C"))) PPC_WEAK_FUNC(sub_83CD729C);
PPC_FUNC_IMPL(__imp__sub_83CD729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD72A0"))) PPC_WEAK_FUNC(sub_83CD72A0);
PPC_FUNC_IMPL(__imp__sub_83CD72A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD72AC"))) PPC_WEAK_FUNC(sub_83CD72AC);
PPC_FUNC_IMPL(__imp__sub_83CD72AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD72B0"))) PPC_WEAK_FUNC(sub_83CD72B0);
PPC_FUNC_IMPL(__imp__sub_83CD72B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11992
	ctx.r3.s64 = ctx.r11.s64 + -11992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD72BC"))) PPC_WEAK_FUNC(sub_83CD72BC);
PPC_FUNC_IMPL(__imp__sub_83CD72BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD72C0"))) PPC_WEAK_FUNC(sub_83CD72C0);
PPC_FUNC_IMPL(__imp__sub_83CD72C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD72CC"))) PPC_WEAK_FUNC(sub_83CD72CC);
PPC_FUNC_IMPL(__imp__sub_83CD72CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD72D0"))) PPC_WEAK_FUNC(sub_83CD72D0);
PPC_FUNC_IMPL(__imp__sub_83CD72D0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// bl 0x83523120
	ctx.lr = 0x83CD72E8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11976
	ctx.r3.s64 = ctx.r10.s64 + -11976;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD72F4;
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

__attribute__((alias("__imp__sub_83CD7304"))) PPC_WEAK_FUNC(sub_83CD7304);
PPC_FUNC_IMPL(__imp__sub_83CD7304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7308"))) PPC_WEAK_FUNC(sub_83CD7308);
PPC_FUNC_IMPL(__imp__sub_83CD7308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-10864
	ctx.r4.s64 = ctx.r11.s64 + -10864;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,9160
	ctx.r3.s64 = ctx.r7.s64 + 9160;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7338"))) PPC_WEAK_FUNC(sub_83CD7338);
PPC_FUNC_IMPL(__imp__sub_83CD7338) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9152
	ctx.r7.s64 = ctx.r8.s64 + 9152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7360"))) PPC_WEAK_FUNC(sub_83CD7360);
PPC_FUNC_IMPL(__imp__sub_83CD7360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9520
	ctx.r11.s64 = ctx.r11.s64 + 9520;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD73A0"))) PPC_WEAK_FUNC(sub_83CD73A0);
PPC_FUNC_IMPL(__imp__sub_83CD73A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,9404
	ctx.r6.s64 = ctx.r7.s64 + 9404;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9300(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9300);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9152);
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
	// std r9,9404(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9404, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD73E8"))) PPC_WEAK_FUNC(sub_83CD73E8);
PPC_FUNC_IMPL(__imp__sub_83CD73E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11960
	ctx.r3.s64 = ctx.r11.s64 + -11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD73F4"))) PPC_WEAK_FUNC(sub_83CD73F4);
PPC_FUNC_IMPL(__imp__sub_83CD73F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD73F8"))) PPC_WEAK_FUNC(sub_83CD73F8);
PPC_FUNC_IMPL(__imp__sub_83CD73F8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,9176
	ctx.r3.s64 = ctx.r11.s64 + 9176;
	// bl 0x8259af80
	ctx.lr = 0x83CD7410;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11944
	ctx.r3.s64 = ctx.r10.s64 + -11944;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD741C;
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

__attribute__((alias("__imp__sub_83CD742C"))) PPC_WEAK_FUNC(sub_83CD742C);
PPC_FUNC_IMPL(__imp__sub_83CD742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7430"))) PPC_WEAK_FUNC(sub_83CD7430);
PPC_FUNC_IMPL(__imp__sub_83CD7430) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9140
	ctx.r11.s64 = ctx.r8.s64 + 9140;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9348);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11952
	ctx.r3.s64 = ctx.r6.s64 + -11952;
	// stw r10,9140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7460"))) PPC_WEAK_FUNC(sub_83CD7460);
PPC_FUNC_IMPL(__imp__sub_83CD7460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD746C"))) PPC_WEAK_FUNC(sub_83CD746C);
PPC_FUNC_IMPL(__imp__sub_83CD746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7470"))) PPC_WEAK_FUNC(sub_83CD7470);
PPC_FUNC_IMPL(__imp__sub_83CD7470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11928
	ctx.r3.s64 = ctx.r11.s64 + -11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD747C"))) PPC_WEAK_FUNC(sub_83CD747C);
PPC_FUNC_IMPL(__imp__sub_83CD747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7480"))) PPC_WEAK_FUNC(sub_83CD7480);
PPC_FUNC_IMPL(__imp__sub_83CD7480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11920
	ctx.r3.s64 = ctx.r11.s64 + -11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD748C"))) PPC_WEAK_FUNC(sub_83CD748C);
PPC_FUNC_IMPL(__imp__sub_83CD748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7490"))) PPC_WEAK_FUNC(sub_83CD7490);
PPC_FUNC_IMPL(__imp__sub_83CD7490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11912
	ctx.r3.s64 = ctx.r11.s64 + -11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD749C"))) PPC_WEAK_FUNC(sub_83CD749C);
PPC_FUNC_IMPL(__imp__sub_83CD749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD74A0"))) PPC_WEAK_FUNC(sub_83CD74A0);
PPC_FUNC_IMPL(__imp__sub_83CD74A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD74AC"))) PPC_WEAK_FUNC(sub_83CD74AC);
PPC_FUNC_IMPL(__imp__sub_83CD74AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD74B0"))) PPC_WEAK_FUNC(sub_83CD74B0);
PPC_FUNC_IMPL(__imp__sub_83CD74B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11896
	ctx.r3.s64 = ctx.r11.s64 + -11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD74BC"))) PPC_WEAK_FUNC(sub_83CD74BC);
PPC_FUNC_IMPL(__imp__sub_83CD74BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD74C0"))) PPC_WEAK_FUNC(sub_83CD74C0);
PPC_FUNC_IMPL(__imp__sub_83CD74C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11888
	ctx.r3.s64 = ctx.r11.s64 + -11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD74CC"))) PPC_WEAK_FUNC(sub_83CD74CC);
PPC_FUNC_IMPL(__imp__sub_83CD74CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD74D0"))) PPC_WEAK_FUNC(sub_83CD74D0);
PPC_FUNC_IMPL(__imp__sub_83CD74D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11880
	ctx.r3.s64 = ctx.r11.s64 + -11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD74DC"))) PPC_WEAK_FUNC(sub_83CD74DC);
PPC_FUNC_IMPL(__imp__sub_83CD74DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD74E0"))) PPC_WEAK_FUNC(sub_83CD74E0);
PPC_FUNC_IMPL(__imp__sub_83CD74E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD74EC"))) PPC_WEAK_FUNC(sub_83CD74EC);
PPC_FUNC_IMPL(__imp__sub_83CD74EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD74F0"))) PPC_WEAK_FUNC(sub_83CD74F0);
PPC_FUNC_IMPL(__imp__sub_83CD74F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11864
	ctx.r3.s64 = ctx.r11.s64 + -11864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD74FC"))) PPC_WEAK_FUNC(sub_83CD74FC);
PPC_FUNC_IMPL(__imp__sub_83CD74FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7500"))) PPC_WEAK_FUNC(sub_83CD7500);
PPC_FUNC_IMPL(__imp__sub_83CD7500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11856
	ctx.r3.s64 = ctx.r11.s64 + -11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD750C"))) PPC_WEAK_FUNC(sub_83CD750C);
PPC_FUNC_IMPL(__imp__sub_83CD750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7510"))) PPC_WEAK_FUNC(sub_83CD7510);
PPC_FUNC_IMPL(__imp__sub_83CD7510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD751C"))) PPC_WEAK_FUNC(sub_83CD751C);
PPC_FUNC_IMPL(__imp__sub_83CD751C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7520"))) PPC_WEAK_FUNC(sub_83CD7520);
PPC_FUNC_IMPL(__imp__sub_83CD7520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-10524
	ctx.r4.s64 = ctx.r11.s64 + -10524;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,9576
	ctx.r3.s64 = ctx.r7.s64 + 9576;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7550"))) PPC_WEAK_FUNC(sub_83CD7550);
PPC_FUNC_IMPL(__imp__sub_83CD7550) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9568
	ctx.r7.s64 = ctx.r8.s64 + 9568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7578"))) PPC_WEAK_FUNC(sub_83CD7578);
PPC_FUNC_IMPL(__imp__sub_83CD7578) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// bl 0x83523120
	ctx.lr = 0x83CD7590;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11840
	ctx.r3.s64 = ctx.r10.s64 + -11840;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD759C;
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

__attribute__((alias("__imp__sub_83CD75AC"))) PPC_WEAK_FUNC(sub_83CD75AC);
PPC_FUNC_IMPL(__imp__sub_83CD75AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD75B0"))) PPC_WEAK_FUNC(sub_83CD75B0);
PPC_FUNC_IMPL(__imp__sub_83CD75B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9936
	ctx.r11.s64 = ctx.r11.s64 + 9936;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD75F0"))) PPC_WEAK_FUNC(sub_83CD75F0);
PPC_FUNC_IMPL(__imp__sub_83CD75F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,9564
	ctx.r6.s64 = ctx.r7.s64 + 9564;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9568);
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
	// std r9,9564(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9564, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7638"))) PPC_WEAK_FUNC(sub_83CD7638);
PPC_FUNC_IMPL(__imp__sub_83CD7638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7644"))) PPC_WEAK_FUNC(sub_83CD7644);
PPC_FUNC_IMPL(__imp__sub_83CD7644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7648"))) PPC_WEAK_FUNC(sub_83CD7648);
PPC_FUNC_IMPL(__imp__sub_83CD7648) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,9592
	ctx.r3.s64 = ctx.r11.s64 + 9592;
	// bl 0x8259af80
	ctx.lr = 0x83CD7660;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11808
	ctx.r3.s64 = ctx.r10.s64 + -11808;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD766C;
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

__attribute__((alias("__imp__sub_83CD767C"))) PPC_WEAK_FUNC(sub_83CD767C);
PPC_FUNC_IMPL(__imp__sub_83CD767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7680"))) PPC_WEAK_FUNC(sub_83CD7680);
PPC_FUNC_IMPL(__imp__sub_83CD7680) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9556
	ctx.r11.s64 = ctx.r8.s64 + 9556;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9508);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11816
	ctx.r3.s64 = ctx.r6.s64 + -11816;
	// stw r10,9556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD76B0"))) PPC_WEAK_FUNC(sub_83CD76B0);
PPC_FUNC_IMPL(__imp__sub_83CD76B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11800
	ctx.r3.s64 = ctx.r11.s64 + -11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD76BC"))) PPC_WEAK_FUNC(sub_83CD76BC);
PPC_FUNC_IMPL(__imp__sub_83CD76BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD76C0"))) PPC_WEAK_FUNC(sub_83CD76C0);
PPC_FUNC_IMPL(__imp__sub_83CD76C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11792
	ctx.r3.s64 = ctx.r11.s64 + -11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD76CC"))) PPC_WEAK_FUNC(sub_83CD76CC);
PPC_FUNC_IMPL(__imp__sub_83CD76CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD76D0"))) PPC_WEAK_FUNC(sub_83CD76D0);
PPC_FUNC_IMPL(__imp__sub_83CD76D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11784
	ctx.r3.s64 = ctx.r11.s64 + -11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD76DC"))) PPC_WEAK_FUNC(sub_83CD76DC);
PPC_FUNC_IMPL(__imp__sub_83CD76DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD76E0"))) PPC_WEAK_FUNC(sub_83CD76E0);
PPC_FUNC_IMPL(__imp__sub_83CD76E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD76EC"))) PPC_WEAK_FUNC(sub_83CD76EC);
PPC_FUNC_IMPL(__imp__sub_83CD76EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD76F0"))) PPC_WEAK_FUNC(sub_83CD76F0);
PPC_FUNC_IMPL(__imp__sub_83CD76F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11768
	ctx.r3.s64 = ctx.r11.s64 + -11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD76FC"))) PPC_WEAK_FUNC(sub_83CD76FC);
PPC_FUNC_IMPL(__imp__sub_83CD76FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7700"))) PPC_WEAK_FUNC(sub_83CD7700);
PPC_FUNC_IMPL(__imp__sub_83CD7700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11760
	ctx.r3.s64 = ctx.r11.s64 + -11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD770C"))) PPC_WEAK_FUNC(sub_83CD770C);
PPC_FUNC_IMPL(__imp__sub_83CD770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7710"))) PPC_WEAK_FUNC(sub_83CD7710);
PPC_FUNC_IMPL(__imp__sub_83CD7710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11752
	ctx.r3.s64 = ctx.r11.s64 + -11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD771C"))) PPC_WEAK_FUNC(sub_83CD771C);
PPC_FUNC_IMPL(__imp__sub_83CD771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7720"))) PPC_WEAK_FUNC(sub_83CD7720);
PPC_FUNC_IMPL(__imp__sub_83CD7720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11744
	ctx.r3.s64 = ctx.r11.s64 + -11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD772C"))) PPC_WEAK_FUNC(sub_83CD772C);
PPC_FUNC_IMPL(__imp__sub_83CD772C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7730"))) PPC_WEAK_FUNC(sub_83CD7730);
PPC_FUNC_IMPL(__imp__sub_83CD7730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD773C"))) PPC_WEAK_FUNC(sub_83CD773C);
PPC_FUNC_IMPL(__imp__sub_83CD773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7740"))) PPC_WEAK_FUNC(sub_83CD7740);
PPC_FUNC_IMPL(__imp__sub_83CD7740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD774C"))) PPC_WEAK_FUNC(sub_83CD774C);
PPC_FUNC_IMPL(__imp__sub_83CD774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7750"))) PPC_WEAK_FUNC(sub_83CD7750);
PPC_FUNC_IMPL(__imp__sub_83CD7750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11720
	ctx.r3.s64 = ctx.r11.s64 + -11720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD775C"))) PPC_WEAK_FUNC(sub_83CD775C);
PPC_FUNC_IMPL(__imp__sub_83CD775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7760"))) PPC_WEAK_FUNC(sub_83CD7760);
PPC_FUNC_IMPL(__imp__sub_83CD7760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11712
	ctx.r3.s64 = ctx.r11.s64 + -11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD776C"))) PPC_WEAK_FUNC(sub_83CD776C);
PPC_FUNC_IMPL(__imp__sub_83CD776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7770"))) PPC_WEAK_FUNC(sub_83CD7770);
PPC_FUNC_IMPL(__imp__sub_83CD7770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-10044
	ctx.r4.s64 = ctx.r11.s64 + -10044;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,10000
	ctx.r3.s64 = ctx.r7.s64 + 10000;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD77A0"))) PPC_WEAK_FUNC(sub_83CD77A0);
PPC_FUNC_IMPL(__imp__sub_83CD77A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9992
	ctx.r7.s64 = ctx.r8.s64 + 9992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD77C8"))) PPC_WEAK_FUNC(sub_83CD77C8);
PPC_FUNC_IMPL(__imp__sub_83CD77C8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,9976
	ctx.r3.s64 = ctx.r11.s64 + 9976;
	// bl 0x83523120
	ctx.lr = 0x83CD77E0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11704
	ctx.r3.s64 = ctx.r10.s64 + -11704;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD77EC;
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

__attribute__((alias("__imp__sub_83CD77FC"))) PPC_WEAK_FUNC(sub_83CD77FC);
PPC_FUNC_IMPL(__imp__sub_83CD77FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7800"))) PPC_WEAK_FUNC(sub_83CD7800);
PPC_FUNC_IMPL(__imp__sub_83CD7800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7840"))) PPC_WEAK_FUNC(sub_83CD7840);
PPC_FUNC_IMPL(__imp__sub_83CD7840) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,9724
	ctx.r6.s64 = ctx.r7.s64 + 9724;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9992);
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
	// std r9,9724(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9724, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7888"))) PPC_WEAK_FUNC(sub_83CD7888);
PPC_FUNC_IMPL(__imp__sub_83CD7888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7894"))) PPC_WEAK_FUNC(sub_83CD7894);
PPC_FUNC_IMPL(__imp__sub_83CD7894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7898"))) PPC_WEAK_FUNC(sub_83CD7898);
PPC_FUNC_IMPL(__imp__sub_83CD7898) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// bl 0x8259af80
	ctx.lr = 0x83CD78B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11672
	ctx.r3.s64 = ctx.r10.s64 + -11672;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD78BC;
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

__attribute__((alias("__imp__sub_83CD78CC"))) PPC_WEAK_FUNC(sub_83CD78CC);
PPC_FUNC_IMPL(__imp__sub_83CD78CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD78D0"))) PPC_WEAK_FUNC(sub_83CD78D0);
PPC_FUNC_IMPL(__imp__sub_83CD78D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9980
	ctx.r11.s64 = ctx.r8.s64 + 9980;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9668);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11680
	ctx.r3.s64 = ctx.r6.s64 + -11680;
	// stw r10,9980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7900"))) PPC_WEAK_FUNC(sub_83CD7900);
PPC_FUNC_IMPL(__imp__sub_83CD7900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11664
	ctx.r3.s64 = ctx.r11.s64 + -11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD790C"))) PPC_WEAK_FUNC(sub_83CD790C);
PPC_FUNC_IMPL(__imp__sub_83CD790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7910"))) PPC_WEAK_FUNC(sub_83CD7910);
PPC_FUNC_IMPL(__imp__sub_83CD7910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11656
	ctx.r3.s64 = ctx.r11.s64 + -11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD791C"))) PPC_WEAK_FUNC(sub_83CD791C);
PPC_FUNC_IMPL(__imp__sub_83CD791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7920"))) PPC_WEAK_FUNC(sub_83CD7920);
PPC_FUNC_IMPL(__imp__sub_83CD7920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11648
	ctx.r3.s64 = ctx.r11.s64 + -11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD792C"))) PPC_WEAK_FUNC(sub_83CD792C);
PPC_FUNC_IMPL(__imp__sub_83CD792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7930"))) PPC_WEAK_FUNC(sub_83CD7930);
PPC_FUNC_IMPL(__imp__sub_83CD7930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD793C"))) PPC_WEAK_FUNC(sub_83CD793C);
PPC_FUNC_IMPL(__imp__sub_83CD793C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7940"))) PPC_WEAK_FUNC(sub_83CD7940);
PPC_FUNC_IMPL(__imp__sub_83CD7940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11632
	ctx.r3.s64 = ctx.r11.s64 + -11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD794C"))) PPC_WEAK_FUNC(sub_83CD794C);
PPC_FUNC_IMPL(__imp__sub_83CD794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7950"))) PPC_WEAK_FUNC(sub_83CD7950);
PPC_FUNC_IMPL(__imp__sub_83CD7950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11624
	ctx.r3.s64 = ctx.r11.s64 + -11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD795C"))) PPC_WEAK_FUNC(sub_83CD795C);
PPC_FUNC_IMPL(__imp__sub_83CD795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7960"))) PPC_WEAK_FUNC(sub_83CD7960);
PPC_FUNC_IMPL(__imp__sub_83CD7960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD796C"))) PPC_WEAK_FUNC(sub_83CD796C);
PPC_FUNC_IMPL(__imp__sub_83CD796C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7970"))) PPC_WEAK_FUNC(sub_83CD7970);
PPC_FUNC_IMPL(__imp__sub_83CD7970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11608
	ctx.r3.s64 = ctx.r11.s64 + -11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD797C"))) PPC_WEAK_FUNC(sub_83CD797C);
PPC_FUNC_IMPL(__imp__sub_83CD797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7980"))) PPC_WEAK_FUNC(sub_83CD7980);
PPC_FUNC_IMPL(__imp__sub_83CD7980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11600
	ctx.r3.s64 = ctx.r11.s64 + -11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD798C"))) PPC_WEAK_FUNC(sub_83CD798C);
PPC_FUNC_IMPL(__imp__sub_83CD798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7990"))) PPC_WEAK_FUNC(sub_83CD7990);
PPC_FUNC_IMPL(__imp__sub_83CD7990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11592
	ctx.r3.s64 = ctx.r11.s64 + -11592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD799C"))) PPC_WEAK_FUNC(sub_83CD799C);
PPC_FUNC_IMPL(__imp__sub_83CD799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD79A0"))) PPC_WEAK_FUNC(sub_83CD79A0);
PPC_FUNC_IMPL(__imp__sub_83CD79A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD79AC"))) PPC_WEAK_FUNC(sub_83CD79AC);
PPC_FUNC_IMPL(__imp__sub_83CD79AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD79B0"))) PPC_WEAK_FUNC(sub_83CD79B0);
PPC_FUNC_IMPL(__imp__sub_83CD79B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD79BC"))) PPC_WEAK_FUNC(sub_83CD79BC);
PPC_FUNC_IMPL(__imp__sub_83CD79BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD79C0"))) PPC_WEAK_FUNC(sub_83CD79C0);
PPC_FUNC_IMPL(__imp__sub_83CD79C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-9340
	ctx.r4.s64 = ctx.r11.s64 + -9340;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,10416
	ctx.r3.s64 = ctx.r7.s64 + 10416;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD79F0"))) PPC_WEAK_FUNC(sub_83CD79F0);
PPC_FUNC_IMPL(__imp__sub_83CD79F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10408
	ctx.r7.s64 = ctx.r8.s64 + 10408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7A18"))) PPC_WEAK_FUNC(sub_83CD7A18);
PPC_FUNC_IMPL(__imp__sub_83CD7A18) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,10392
	ctx.r3.s64 = ctx.r11.s64 + 10392;
	// bl 0x83523120
	ctx.lr = 0x83CD7A30;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11568
	ctx.r3.s64 = ctx.r10.s64 + -11568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD7A3C;
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

__attribute__((alias("__imp__sub_83CD7A4C"))) PPC_WEAK_FUNC(sub_83CD7A4C);
PPC_FUNC_IMPL(__imp__sub_83CD7A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7A50"))) PPC_WEAK_FUNC(sub_83CD7A50);
PPC_FUNC_IMPL(__imp__sub_83CD7A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,10776
	ctx.r11.s64 = ctx.r11.s64 + 10776;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7A90"))) PPC_WEAK_FUNC(sub_83CD7A90);
PPC_FUNC_IMPL(__imp__sub_83CD7A90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,9884
	ctx.r6.s64 = ctx.r7.s64 + 9884;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9780(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9780);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10408);
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
	// std r9,9884(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9884, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7AD8"))) PPC_WEAK_FUNC(sub_83CD7AD8);
PPC_FUNC_IMPL(__imp__sub_83CD7AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7AE4"))) PPC_WEAK_FUNC(sub_83CD7AE4);
PPC_FUNC_IMPL(__imp__sub_83CD7AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7AE8"))) PPC_WEAK_FUNC(sub_83CD7AE8);
PPC_FUNC_IMPL(__imp__sub_83CD7AE8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,10432
	ctx.r3.s64 = ctx.r11.s64 + 10432;
	// bl 0x8259af80
	ctx.lr = 0x83CD7B00;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11536
	ctx.r3.s64 = ctx.r10.s64 + -11536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD7B0C;
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

__attribute__((alias("__imp__sub_83CD7B1C"))) PPC_WEAK_FUNC(sub_83CD7B1C);
PPC_FUNC_IMPL(__imp__sub_83CD7B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7B20"))) PPC_WEAK_FUNC(sub_83CD7B20);
PPC_FUNC_IMPL(__imp__sub_83CD7B20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10396
	ctx.r11.s64 = ctx.r8.s64 + 10396;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9828(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9828);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11544
	ctx.r3.s64 = ctx.r6.s64 + -11544;
	// stw r10,10396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7B50"))) PPC_WEAK_FUNC(sub_83CD7B50);
PPC_FUNC_IMPL(__imp__sub_83CD7B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11528
	ctx.r3.s64 = ctx.r11.s64 + -11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7B5C"))) PPC_WEAK_FUNC(sub_83CD7B5C);
PPC_FUNC_IMPL(__imp__sub_83CD7B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7B60"))) PPC_WEAK_FUNC(sub_83CD7B60);
PPC_FUNC_IMPL(__imp__sub_83CD7B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11520
	ctx.r3.s64 = ctx.r11.s64 + -11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7B6C"))) PPC_WEAK_FUNC(sub_83CD7B6C);
PPC_FUNC_IMPL(__imp__sub_83CD7B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7B70"))) PPC_WEAK_FUNC(sub_83CD7B70);
PPC_FUNC_IMPL(__imp__sub_83CD7B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11512
	ctx.r3.s64 = ctx.r11.s64 + -11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7B7C"))) PPC_WEAK_FUNC(sub_83CD7B7C);
PPC_FUNC_IMPL(__imp__sub_83CD7B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7B80"))) PPC_WEAK_FUNC(sub_83CD7B80);
PPC_FUNC_IMPL(__imp__sub_83CD7B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11504
	ctx.r3.s64 = ctx.r11.s64 + -11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7B8C"))) PPC_WEAK_FUNC(sub_83CD7B8C);
PPC_FUNC_IMPL(__imp__sub_83CD7B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7B90"))) PPC_WEAK_FUNC(sub_83CD7B90);
PPC_FUNC_IMPL(__imp__sub_83CD7B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11496
	ctx.r3.s64 = ctx.r11.s64 + -11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7B9C"))) PPC_WEAK_FUNC(sub_83CD7B9C);
PPC_FUNC_IMPL(__imp__sub_83CD7B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7BA0"))) PPC_WEAK_FUNC(sub_83CD7BA0);
PPC_FUNC_IMPL(__imp__sub_83CD7BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7BAC"))) PPC_WEAK_FUNC(sub_83CD7BAC);
PPC_FUNC_IMPL(__imp__sub_83CD7BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7BB0"))) PPC_WEAK_FUNC(sub_83CD7BB0);
PPC_FUNC_IMPL(__imp__sub_83CD7BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7BBC"))) PPC_WEAK_FUNC(sub_83CD7BBC);
PPC_FUNC_IMPL(__imp__sub_83CD7BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7BC0"))) PPC_WEAK_FUNC(sub_83CD7BC0);
PPC_FUNC_IMPL(__imp__sub_83CD7BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11472
	ctx.r3.s64 = ctx.r11.s64 + -11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7BCC"))) PPC_WEAK_FUNC(sub_83CD7BCC);
PPC_FUNC_IMPL(__imp__sub_83CD7BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7BD0"))) PPC_WEAK_FUNC(sub_83CD7BD0);
PPC_FUNC_IMPL(__imp__sub_83CD7BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11464
	ctx.r3.s64 = ctx.r11.s64 + -11464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7BDC"))) PPC_WEAK_FUNC(sub_83CD7BDC);
PPC_FUNC_IMPL(__imp__sub_83CD7BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7BE0"))) PPC_WEAK_FUNC(sub_83CD7BE0);
PPC_FUNC_IMPL(__imp__sub_83CD7BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11456
	ctx.r3.s64 = ctx.r11.s64 + -11456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7BEC"))) PPC_WEAK_FUNC(sub_83CD7BEC);
PPC_FUNC_IMPL(__imp__sub_83CD7BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7BF0"))) PPC_WEAK_FUNC(sub_83CD7BF0);
PPC_FUNC_IMPL(__imp__sub_83CD7BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11448
	ctx.r3.s64 = ctx.r11.s64 + -11448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7BFC"))) PPC_WEAK_FUNC(sub_83CD7BFC);
PPC_FUNC_IMPL(__imp__sub_83CD7BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7C00"))) PPC_WEAK_FUNC(sub_83CD7C00);
PPC_FUNC_IMPL(__imp__sub_83CD7C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11440
	ctx.r3.s64 = ctx.r11.s64 + -11440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7C0C"))) PPC_WEAK_FUNC(sub_83CD7C0C);
PPC_FUNC_IMPL(__imp__sub_83CD7C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7C10"))) PPC_WEAK_FUNC(sub_83CD7C10);
PPC_FUNC_IMPL(__imp__sub_83CD7C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-8860
	ctx.r4.s64 = ctx.r11.s64 + -8860;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,10832
	ctx.r3.s64 = ctx.r7.s64 + 10832;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7C40"))) PPC_WEAK_FUNC(sub_83CD7C40);
PPC_FUNC_IMPL(__imp__sub_83CD7C40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10824
	ctx.r7.s64 = ctx.r8.s64 + 10824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7C68"))) PPC_WEAK_FUNC(sub_83CD7C68);
PPC_FUNC_IMPL(__imp__sub_83CD7C68) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,10808
	ctx.r3.s64 = ctx.r11.s64 + 10808;
	// bl 0x83523120
	ctx.lr = 0x83CD7C80;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11432
	ctx.r3.s64 = ctx.r10.s64 + -11432;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD7C8C;
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

__attribute__((alias("__imp__sub_83CD7C9C"))) PPC_WEAK_FUNC(sub_83CD7C9C);
PPC_FUNC_IMPL(__imp__sub_83CD7C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7CA0"))) PPC_WEAK_FUNC(sub_83CD7CA0);
PPC_FUNC_IMPL(__imp__sub_83CD7CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11192
	ctx.r11.s64 = ctx.r11.s64 + 11192;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7CE0"))) PPC_WEAK_FUNC(sub_83CD7CE0);
PPC_FUNC_IMPL(__imp__sub_83CD7CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,10044
	ctx.r6.s64 = ctx.r7.s64 + 10044;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9940(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9940);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10824);
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
	// std r9,10044(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10044, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD7D28"))) PPC_WEAK_FUNC(sub_83CD7D28);
PPC_FUNC_IMPL(__imp__sub_83CD7D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11416
	ctx.r3.s64 = ctx.r11.s64 + -11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7D34"))) PPC_WEAK_FUNC(sub_83CD7D34);
PPC_FUNC_IMPL(__imp__sub_83CD7D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7D38"))) PPC_WEAK_FUNC(sub_83CD7D38);
PPC_FUNC_IMPL(__imp__sub_83CD7D38) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,10848
	ctx.r3.s64 = ctx.r11.s64 + 10848;
	// bl 0x8259af80
	ctx.lr = 0x83CD7D50;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-11400
	ctx.r3.s64 = ctx.r10.s64 + -11400;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD7D5C;
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

__attribute__((alias("__imp__sub_83CD7D6C"))) PPC_WEAK_FUNC(sub_83CD7D6C);
PPC_FUNC_IMPL(__imp__sub_83CD7D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7D70"))) PPC_WEAK_FUNC(sub_83CD7D70);
PPC_FUNC_IMPL(__imp__sub_83CD7D70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10812
	ctx.r11.s64 = ctx.r8.s64 + 10812;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9988);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11408
	ctx.r3.s64 = ctx.r6.s64 + -11408;
	// stw r10,10812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10812, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7DA0"))) PPC_WEAK_FUNC(sub_83CD7DA0);
PPC_FUNC_IMPL(__imp__sub_83CD7DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11392
	ctx.r3.s64 = ctx.r11.s64 + -11392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7DAC"))) PPC_WEAK_FUNC(sub_83CD7DAC);
PPC_FUNC_IMPL(__imp__sub_83CD7DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7DB0"))) PPC_WEAK_FUNC(sub_83CD7DB0);
PPC_FUNC_IMPL(__imp__sub_83CD7DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11384
	ctx.r3.s64 = ctx.r11.s64 + -11384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD7DBC"))) PPC_WEAK_FUNC(sub_83CD7DBC);
PPC_FUNC_IMPL(__imp__sub_83CD7DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD7DC0"))) PPC_WEAK_FUNC(sub_83CD7DC0);
PPC_FUNC_IMPL(__imp__sub_83CD7DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

