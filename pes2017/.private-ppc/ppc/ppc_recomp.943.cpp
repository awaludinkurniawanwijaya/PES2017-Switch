#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CD9ACC"))) PPC_WEAK_FUNC(sub_83CD9ACC);
PPC_FUNC_IMPL(__imp__sub_83CD9ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9AD0"))) PPC_WEAK_FUNC(sub_83CD9AD0);
PPC_FUNC_IMPL(__imp__sub_83CD9AD0) {
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
	// addi r3,r11,18584
	ctx.r3.s64 = ctx.r11.s64 + 18584;
	// bl 0x8259af80
	ctx.lr = 0x83CD9AE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9232
	ctx.r3.s64 = ctx.r10.s64 + -9232;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9AF4;
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

__attribute__((alias("__imp__sub_83CD9B04"))) PPC_WEAK_FUNC(sub_83CD9B04);
PPC_FUNC_IMPL(__imp__sub_83CD9B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9B08"))) PPC_WEAK_FUNC(sub_83CD9B08);
PPC_FUNC_IMPL(__imp__sub_83CD9B08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18564
	ctx.r11.s64 = ctx.r8.s64 + 18564;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,7076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7076);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9240
	ctx.r3.s64 = ctx.r6.s64 + -9240;
	// stw r10,18564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9B38"))) PPC_WEAK_FUNC(sub_83CD9B38);
PPC_FUNC_IMPL(__imp__sub_83CD9B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9224
	ctx.r3.s64 = ctx.r11.s64 + -9224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9B44"))) PPC_WEAK_FUNC(sub_83CD9B44);
PPC_FUNC_IMPL(__imp__sub_83CD9B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9B48"))) PPC_WEAK_FUNC(sub_83CD9B48);
PPC_FUNC_IMPL(__imp__sub_83CD9B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9216
	ctx.r3.s64 = ctx.r11.s64 + -9216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9B54"))) PPC_WEAK_FUNC(sub_83CD9B54);
PPC_FUNC_IMPL(__imp__sub_83CD9B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9B58"))) PPC_WEAK_FUNC(sub_83CD9B58);
PPC_FUNC_IMPL(__imp__sub_83CD9B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9208
	ctx.r3.s64 = ctx.r11.s64 + -9208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9B64"))) PPC_WEAK_FUNC(sub_83CD9B64);
PPC_FUNC_IMPL(__imp__sub_83CD9B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9B68"))) PPC_WEAK_FUNC(sub_83CD9B68);
PPC_FUNC_IMPL(__imp__sub_83CD9B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9B74"))) PPC_WEAK_FUNC(sub_83CD9B74);
PPC_FUNC_IMPL(__imp__sub_83CD9B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9B78"))) PPC_WEAK_FUNC(sub_83CD9B78);
PPC_FUNC_IMPL(__imp__sub_83CD9B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9192
	ctx.r3.s64 = ctx.r11.s64 + -9192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9B84"))) PPC_WEAK_FUNC(sub_83CD9B84);
PPC_FUNC_IMPL(__imp__sub_83CD9B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9B88"))) PPC_WEAK_FUNC(sub_83CD9B88);
PPC_FUNC_IMPL(__imp__sub_83CD9B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9B94"))) PPC_WEAK_FUNC(sub_83CD9B94);
PPC_FUNC_IMPL(__imp__sub_83CD9B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9B98"))) PPC_WEAK_FUNC(sub_83CD9B98);
PPC_FUNC_IMPL(__imp__sub_83CD9B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9176
	ctx.r3.s64 = ctx.r11.s64 + -9176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9BA4"))) PPC_WEAK_FUNC(sub_83CD9BA4);
PPC_FUNC_IMPL(__imp__sub_83CD9BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9BA8"))) PPC_WEAK_FUNC(sub_83CD9BA8);
PPC_FUNC_IMPL(__imp__sub_83CD9BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9168
	ctx.r3.s64 = ctx.r11.s64 + -9168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9BB4"))) PPC_WEAK_FUNC(sub_83CD9BB4);
PPC_FUNC_IMPL(__imp__sub_83CD9BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9BB8"))) PPC_WEAK_FUNC(sub_83CD9BB8);
PPC_FUNC_IMPL(__imp__sub_83CD9BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9160
	ctx.r3.s64 = ctx.r11.s64 + -9160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9BC4"))) PPC_WEAK_FUNC(sub_83CD9BC4);
PPC_FUNC_IMPL(__imp__sub_83CD9BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9BC8"))) PPC_WEAK_FUNC(sub_83CD9BC8);
PPC_FUNC_IMPL(__imp__sub_83CD9BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9152
	ctx.r3.s64 = ctx.r11.s64 + -9152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9BD4"))) PPC_WEAK_FUNC(sub_83CD9BD4);
PPC_FUNC_IMPL(__imp__sub_83CD9BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9BD8"))) PPC_WEAK_FUNC(sub_83CD9BD8);
PPC_FUNC_IMPL(__imp__sub_83CD9BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9144
	ctx.r3.s64 = ctx.r11.s64 + -9144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9BE4"))) PPC_WEAK_FUNC(sub_83CD9BE4);
PPC_FUNC_IMPL(__imp__sub_83CD9BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9BE8"))) PPC_WEAK_FUNC(sub_83CD9BE8);
PPC_FUNC_IMPL(__imp__sub_83CD9BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9136
	ctx.r3.s64 = ctx.r11.s64 + -9136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9BF4"))) PPC_WEAK_FUNC(sub_83CD9BF4);
PPC_FUNC_IMPL(__imp__sub_83CD9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9BF8"))) PPC_WEAK_FUNC(sub_83CD9BF8);
PPC_FUNC_IMPL(__imp__sub_83CD9BF8) {
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
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// bl 0x83523120
	ctx.lr = 0x83CD9C10;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9128
	ctx.r3.s64 = ctx.r10.s64 + -9128;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9C1C;
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

__attribute__((alias("__imp__sub_83CD9C2C"))) PPC_WEAK_FUNC(sub_83CD9C2C);
PPC_FUNC_IMPL(__imp__sub_83CD9C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9C30"))) PPC_WEAK_FUNC(sub_83CD9C30);
PPC_FUNC_IMPL(__imp__sub_83CD9C30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18944
	ctx.r7.s64 = ctx.r8.s64 + 18944;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18944(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18944);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18944(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18944, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9C58"))) PPC_WEAK_FUNC(sub_83CD9C58);
PPC_FUNC_IMPL(__imp__sub_83CD9C58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,7248
	ctx.r6.s64 = ctx.r7.s64 + 7248;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7164(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7164);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18944(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18944);
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
	// std r9,7248(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7248, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9CA0"))) PPC_WEAK_FUNC(sub_83CD9CA0);
PPC_FUNC_IMPL(__imp__sub_83CD9CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9112
	ctx.r3.s64 = ctx.r11.s64 + -9112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9CAC"))) PPC_WEAK_FUNC(sub_83CD9CAC);
PPC_FUNC_IMPL(__imp__sub_83CD9CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9CB0"))) PPC_WEAK_FUNC(sub_83CD9CB0);
PPC_FUNC_IMPL(__imp__sub_83CD9CB0) {
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
	// addi r3,r11,18952
	ctx.r3.s64 = ctx.r11.s64 + 18952;
	// bl 0x8259af80
	ctx.lr = 0x83CD9CC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9096
	ctx.r3.s64 = ctx.r10.s64 + -9096;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9CD4;
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

__attribute__((alias("__imp__sub_83CD9CE4"))) PPC_WEAK_FUNC(sub_83CD9CE4);
PPC_FUNC_IMPL(__imp__sub_83CD9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9CE8"))) PPC_WEAK_FUNC(sub_83CD9CE8);
PPC_FUNC_IMPL(__imp__sub_83CD9CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18932
	ctx.r11.s64 = ctx.r8.s64 + 18932;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,7212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7212);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9104
	ctx.r3.s64 = ctx.r6.s64 + -9104;
	// stw r10,18932(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18932, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9D18"))) PPC_WEAK_FUNC(sub_83CD9D18);
PPC_FUNC_IMPL(__imp__sub_83CD9D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r7,-9(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lbz r6,-9(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// lfs f0,24572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24572);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lbz r5,-9(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// lfs f0,21588(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lbz r4,-9(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 | ctx.r5.u64;
	// stw r11,19296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9D84"))) PPC_WEAK_FUNC(sub_83CD9D84);
PPC_FUNC_IMPL(__imp__sub_83CD9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9D88"))) PPC_WEAK_FUNC(sub_83CD9D88);
PPC_FUNC_IMPL(__imp__sub_83CD9D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9088
	ctx.r3.s64 = ctx.r11.s64 + -9088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9D94"))) PPC_WEAK_FUNC(sub_83CD9D94);
PPC_FUNC_IMPL(__imp__sub_83CD9D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9D98"))) PPC_WEAK_FUNC(sub_83CD9D98);
PPC_FUNC_IMPL(__imp__sub_83CD9D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9080
	ctx.r3.s64 = ctx.r11.s64 + -9080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9DA4"))) PPC_WEAK_FUNC(sub_83CD9DA4);
PPC_FUNC_IMPL(__imp__sub_83CD9DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9DA8"))) PPC_WEAK_FUNC(sub_83CD9DA8);
PPC_FUNC_IMPL(__imp__sub_83CD9DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9072
	ctx.r3.s64 = ctx.r11.s64 + -9072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9DB4"))) PPC_WEAK_FUNC(sub_83CD9DB4);
PPC_FUNC_IMPL(__imp__sub_83CD9DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9DB8"))) PPC_WEAK_FUNC(sub_83CD9DB8);
PPC_FUNC_IMPL(__imp__sub_83CD9DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9DC4"))) PPC_WEAK_FUNC(sub_83CD9DC4);
PPC_FUNC_IMPL(__imp__sub_83CD9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9DC8"))) PPC_WEAK_FUNC(sub_83CD9DC8);
PPC_FUNC_IMPL(__imp__sub_83CD9DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9056
	ctx.r3.s64 = ctx.r11.s64 + -9056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9DD4"))) PPC_WEAK_FUNC(sub_83CD9DD4);
PPC_FUNC_IMPL(__imp__sub_83CD9DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9DD8"))) PPC_WEAK_FUNC(sub_83CD9DD8);
PPC_FUNC_IMPL(__imp__sub_83CD9DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9048
	ctx.r3.s64 = ctx.r11.s64 + -9048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9DE4"))) PPC_WEAK_FUNC(sub_83CD9DE4);
PPC_FUNC_IMPL(__imp__sub_83CD9DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9DE8"))) PPC_WEAK_FUNC(sub_83CD9DE8);
PPC_FUNC_IMPL(__imp__sub_83CD9DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9040
	ctx.r3.s64 = ctx.r11.s64 + -9040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9DF4"))) PPC_WEAK_FUNC(sub_83CD9DF4);
PPC_FUNC_IMPL(__imp__sub_83CD9DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9DF8"))) PPC_WEAK_FUNC(sub_83CD9DF8);
PPC_FUNC_IMPL(__imp__sub_83CD9DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9032
	ctx.r3.s64 = ctx.r11.s64 + -9032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9E04"))) PPC_WEAK_FUNC(sub_83CD9E04);
PPC_FUNC_IMPL(__imp__sub_83CD9E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9E08"))) PPC_WEAK_FUNC(sub_83CD9E08);
PPC_FUNC_IMPL(__imp__sub_83CD9E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9024
	ctx.r3.s64 = ctx.r11.s64 + -9024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9E14"))) PPC_WEAK_FUNC(sub_83CD9E14);
PPC_FUNC_IMPL(__imp__sub_83CD9E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9E18"))) PPC_WEAK_FUNC(sub_83CD9E18);
PPC_FUNC_IMPL(__imp__sub_83CD9E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9016
	ctx.r3.s64 = ctx.r11.s64 + -9016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9E24"))) PPC_WEAK_FUNC(sub_83CD9E24);
PPC_FUNC_IMPL(__imp__sub_83CD9E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9E28"))) PPC_WEAK_FUNC(sub_83CD9E28);
PPC_FUNC_IMPL(__imp__sub_83CD9E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9E34"))) PPC_WEAK_FUNC(sub_83CD9E34);
PPC_FUNC_IMPL(__imp__sub_83CD9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9E38"))) PPC_WEAK_FUNC(sub_83CD9E38);
PPC_FUNC_IMPL(__imp__sub_83CD9E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9000
	ctx.r3.s64 = ctx.r11.s64 + -9000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9E44"))) PPC_WEAK_FUNC(sub_83CD9E44);
PPC_FUNC_IMPL(__imp__sub_83CD9E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9E48"))) PPC_WEAK_FUNC(sub_83CD9E48);
PPC_FUNC_IMPL(__imp__sub_83CD9E48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19320
	ctx.r7.s64 = ctx.r8.s64 + 19320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9E70"))) PPC_WEAK_FUNC(sub_83CD9E70);
PPC_FUNC_IMPL(__imp__sub_83CD9E70) {
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
	// addi r3,r11,19304
	ctx.r3.s64 = ctx.r11.s64 + 19304;
	// bl 0x83523120
	ctx.lr = 0x83CD9E88;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8992
	ctx.r3.s64 = ctx.r10.s64 + -8992;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9E94;
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

__attribute__((alias("__imp__sub_83CD9EA4"))) PPC_WEAK_FUNC(sub_83CD9EA4);
PPC_FUNC_IMPL(__imp__sub_83CD9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9EA8"))) PPC_WEAK_FUNC(sub_83CD9EA8);
PPC_FUNC_IMPL(__imp__sub_83CD9EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,7400
	ctx.r6.s64 = ctx.r7.s64 + 7400;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7316(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7316);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19320);
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
	// std r9,7400(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7400, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9EF0"))) PPC_WEAK_FUNC(sub_83CD9EF0);
PPC_FUNC_IMPL(__imp__sub_83CD9EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8976
	ctx.r3.s64 = ctx.r11.s64 + -8976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9EFC"))) PPC_WEAK_FUNC(sub_83CD9EFC);
PPC_FUNC_IMPL(__imp__sub_83CD9EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9F00"))) PPC_WEAK_FUNC(sub_83CD9F00);
PPC_FUNC_IMPL(__imp__sub_83CD9F00) {
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
	// addi r3,r11,19328
	ctx.r3.s64 = ctx.r11.s64 + 19328;
	// bl 0x8259af80
	ctx.lr = 0x83CD9F18;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8960
	ctx.r3.s64 = ctx.r10.s64 + -8960;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9F24;
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

__attribute__((alias("__imp__sub_83CD9F34"))) PPC_WEAK_FUNC(sub_83CD9F34);
PPC_FUNC_IMPL(__imp__sub_83CD9F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9F38"))) PPC_WEAK_FUNC(sub_83CD9F38);
PPC_FUNC_IMPL(__imp__sub_83CD9F38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19308
	ctx.r11.s64 = ctx.r8.s64 + 19308;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,7364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7364);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8968
	ctx.r3.s64 = ctx.r6.s64 + -8968;
	// stw r10,19308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9F68"))) PPC_WEAK_FUNC(sub_83CD9F68);
PPC_FUNC_IMPL(__imp__sub_83CD9F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8952
	ctx.r3.s64 = ctx.r11.s64 + -8952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9F74"))) PPC_WEAK_FUNC(sub_83CD9F74);
PPC_FUNC_IMPL(__imp__sub_83CD9F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9F78"))) PPC_WEAK_FUNC(sub_83CD9F78);
PPC_FUNC_IMPL(__imp__sub_83CD9F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8944
	ctx.r3.s64 = ctx.r11.s64 + -8944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9F84"))) PPC_WEAK_FUNC(sub_83CD9F84);
PPC_FUNC_IMPL(__imp__sub_83CD9F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9F88"))) PPC_WEAK_FUNC(sub_83CD9F88);
PPC_FUNC_IMPL(__imp__sub_83CD9F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8936
	ctx.r3.s64 = ctx.r11.s64 + -8936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9F94"))) PPC_WEAK_FUNC(sub_83CD9F94);
PPC_FUNC_IMPL(__imp__sub_83CD9F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9F98"))) PPC_WEAK_FUNC(sub_83CD9F98);
PPC_FUNC_IMPL(__imp__sub_83CD9F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8928
	ctx.r3.s64 = ctx.r11.s64 + -8928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9FA4"))) PPC_WEAK_FUNC(sub_83CD9FA4);
PPC_FUNC_IMPL(__imp__sub_83CD9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9FA8"))) PPC_WEAK_FUNC(sub_83CD9FA8);
PPC_FUNC_IMPL(__imp__sub_83CD9FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8920
	ctx.r3.s64 = ctx.r11.s64 + -8920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9FB4"))) PPC_WEAK_FUNC(sub_83CD9FB4);
PPC_FUNC_IMPL(__imp__sub_83CD9FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9FB8"))) PPC_WEAK_FUNC(sub_83CD9FB8);
PPC_FUNC_IMPL(__imp__sub_83CD9FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8912
	ctx.r3.s64 = ctx.r11.s64 + -8912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9FC4"))) PPC_WEAK_FUNC(sub_83CD9FC4);
PPC_FUNC_IMPL(__imp__sub_83CD9FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9FC8"))) PPC_WEAK_FUNC(sub_83CD9FC8);
PPC_FUNC_IMPL(__imp__sub_83CD9FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8904
	ctx.r3.s64 = ctx.r11.s64 + -8904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9FD4"))) PPC_WEAK_FUNC(sub_83CD9FD4);
PPC_FUNC_IMPL(__imp__sub_83CD9FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9FD8"))) PPC_WEAK_FUNC(sub_83CD9FD8);
PPC_FUNC_IMPL(__imp__sub_83CD9FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9FE4"))) PPC_WEAK_FUNC(sub_83CD9FE4);
PPC_FUNC_IMPL(__imp__sub_83CD9FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9FE8"))) PPC_WEAK_FUNC(sub_83CD9FE8);
PPC_FUNC_IMPL(__imp__sub_83CD9FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8888
	ctx.r3.s64 = ctx.r11.s64 + -8888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9FF4"))) PPC_WEAK_FUNC(sub_83CD9FF4);
PPC_FUNC_IMPL(__imp__sub_83CD9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9FF8"))) PPC_WEAK_FUNC(sub_83CD9FF8);
PPC_FUNC_IMPL(__imp__sub_83CD9FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8880
	ctx.r3.s64 = ctx.r11.s64 + -8880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA004"))) PPC_WEAK_FUNC(sub_83CDA004);
PPC_FUNC_IMPL(__imp__sub_83CDA004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA008"))) PPC_WEAK_FUNC(sub_83CDA008);
PPC_FUNC_IMPL(__imp__sub_83CDA008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8872
	ctx.r3.s64 = ctx.r11.s64 + -8872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA014"))) PPC_WEAK_FUNC(sub_83CDA014);
PPC_FUNC_IMPL(__imp__sub_83CDA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA018"))) PPC_WEAK_FUNC(sub_83CDA018);
PPC_FUNC_IMPL(__imp__sub_83CDA018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8864
	ctx.r3.s64 = ctx.r11.s64 + -8864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA024"))) PPC_WEAK_FUNC(sub_83CDA024);
PPC_FUNC_IMPL(__imp__sub_83CDA024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA028"))) PPC_WEAK_FUNC(sub_83CDA028);
PPC_FUNC_IMPL(__imp__sub_83CDA028) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19676
	ctx.r7.s64 = ctx.r8.s64 + 19676;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19676(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19676);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19676, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA050"))) PPC_WEAK_FUNC(sub_83CDA050);
PPC_FUNC_IMPL(__imp__sub_83CDA050) {
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
	// addi r3,r11,19672
	ctx.r3.s64 = ctx.r11.s64 + 19672;
	// bl 0x83523120
	ctx.lr = 0x83CDA068;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8856
	ctx.r3.s64 = ctx.r10.s64 + -8856;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA074;
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

__attribute__((alias("__imp__sub_83CDA084"))) PPC_WEAK_FUNC(sub_83CDA084);
PPC_FUNC_IMPL(__imp__sub_83CDA084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA088"))) PPC_WEAK_FUNC(sub_83CDA088);
PPC_FUNC_IMPL(__imp__sub_83CDA088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8840
	ctx.r3.s64 = ctx.r11.s64 + -8840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA094"))) PPC_WEAK_FUNC(sub_83CDA094);
PPC_FUNC_IMPL(__imp__sub_83CDA094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA098"))) PPC_WEAK_FUNC(sub_83CDA098);
PPC_FUNC_IMPL(__imp__sub_83CDA098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8832
	ctx.r3.s64 = ctx.r11.s64 + -8832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA0A4"))) PPC_WEAK_FUNC(sub_83CDA0A4);
PPC_FUNC_IMPL(__imp__sub_83CDA0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA0A8"))) PPC_WEAK_FUNC(sub_83CDA0A8);
PPC_FUNC_IMPL(__imp__sub_83CDA0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8824
	ctx.r3.s64 = ctx.r11.s64 + -8824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA0B4"))) PPC_WEAK_FUNC(sub_83CDA0B4);
PPC_FUNC_IMPL(__imp__sub_83CDA0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA0B8"))) PPC_WEAK_FUNC(sub_83CDA0B8);
PPC_FUNC_IMPL(__imp__sub_83CDA0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8816
	ctx.r3.s64 = ctx.r11.s64 + -8816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA0C4"))) PPC_WEAK_FUNC(sub_83CDA0C4);
PPC_FUNC_IMPL(__imp__sub_83CDA0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA0C8"))) PPC_WEAK_FUNC(sub_83CDA0C8);
PPC_FUNC_IMPL(__imp__sub_83CDA0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8808
	ctx.r3.s64 = ctx.r11.s64 + -8808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA0D4"))) PPC_WEAK_FUNC(sub_83CDA0D4);
PPC_FUNC_IMPL(__imp__sub_83CDA0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA0D8"))) PPC_WEAK_FUNC(sub_83CDA0D8);
PPC_FUNC_IMPL(__imp__sub_83CDA0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8800
	ctx.r3.s64 = ctx.r11.s64 + -8800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA0E4"))) PPC_WEAK_FUNC(sub_83CDA0E4);
PPC_FUNC_IMPL(__imp__sub_83CDA0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA0E8"))) PPC_WEAK_FUNC(sub_83CDA0E8);
PPC_FUNC_IMPL(__imp__sub_83CDA0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8792
	ctx.r3.s64 = ctx.r11.s64 + -8792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA0F4"))) PPC_WEAK_FUNC(sub_83CDA0F4);
PPC_FUNC_IMPL(__imp__sub_83CDA0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA0F8"))) PPC_WEAK_FUNC(sub_83CDA0F8);
PPC_FUNC_IMPL(__imp__sub_83CDA0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8784
	ctx.r3.s64 = ctx.r11.s64 + -8784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA104"))) PPC_WEAK_FUNC(sub_83CDA104);
PPC_FUNC_IMPL(__imp__sub_83CDA104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA108"))) PPC_WEAK_FUNC(sub_83CDA108);
PPC_FUNC_IMPL(__imp__sub_83CDA108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8776
	ctx.r3.s64 = ctx.r11.s64 + -8776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA114"))) PPC_WEAK_FUNC(sub_83CDA114);
PPC_FUNC_IMPL(__imp__sub_83CDA114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA118"))) PPC_WEAK_FUNC(sub_83CDA118);
PPC_FUNC_IMPL(__imp__sub_83CDA118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8768
	ctx.r3.s64 = ctx.r11.s64 + -8768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA124"))) PPC_WEAK_FUNC(sub_83CDA124);
PPC_FUNC_IMPL(__imp__sub_83CDA124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA128"))) PPC_WEAK_FUNC(sub_83CDA128);
PPC_FUNC_IMPL(__imp__sub_83CDA128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8760
	ctx.r3.s64 = ctx.r11.s64 + -8760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA134"))) PPC_WEAK_FUNC(sub_83CDA134);
PPC_FUNC_IMPL(__imp__sub_83CDA134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA138"))) PPC_WEAK_FUNC(sub_83CDA138);
PPC_FUNC_IMPL(__imp__sub_83CDA138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8752
	ctx.r3.s64 = ctx.r11.s64 + -8752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA144"))) PPC_WEAK_FUNC(sub_83CDA144);
PPC_FUNC_IMPL(__imp__sub_83CDA144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA148"))) PPC_WEAK_FUNC(sub_83CDA148);
PPC_FUNC_IMPL(__imp__sub_83CDA148) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19704
	ctx.r7.s64 = ctx.r8.s64 + 19704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19704(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA170"))) PPC_WEAK_FUNC(sub_83CDA170);
PPC_FUNC_IMPL(__imp__sub_83CDA170) {
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
	// addi r3,r11,19688
	ctx.r3.s64 = ctx.r11.s64 + 19688;
	// bl 0x83523120
	ctx.lr = 0x83CDA188;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8744
	ctx.r3.s64 = ctx.r10.s64 + -8744;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA194;
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

__attribute__((alias("__imp__sub_83CDA1A4"))) PPC_WEAK_FUNC(sub_83CDA1A4);
PPC_FUNC_IMPL(__imp__sub_83CDA1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA1A8"))) PPC_WEAK_FUNC(sub_83CDA1A8);
PPC_FUNC_IMPL(__imp__sub_83CDA1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,7704
	ctx.r6.s64 = ctx.r7.s64 + 7704;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19704);
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
	// std r9,7704(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA1F0"))) PPC_WEAK_FUNC(sub_83CDA1F0);
PPC_FUNC_IMPL(__imp__sub_83CDA1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8728
	ctx.r3.s64 = ctx.r11.s64 + -8728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA1FC"))) PPC_WEAK_FUNC(sub_83CDA1FC);
PPC_FUNC_IMPL(__imp__sub_83CDA1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA200"))) PPC_WEAK_FUNC(sub_83CDA200);
PPC_FUNC_IMPL(__imp__sub_83CDA200) {
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
	// addi r3,r11,19712
	ctx.r3.s64 = ctx.r11.s64 + 19712;
	// bl 0x8259af80
	ctx.lr = 0x83CDA218;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8712
	ctx.r3.s64 = ctx.r10.s64 + -8712;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA224;
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

__attribute__((alias("__imp__sub_83CDA234"))) PPC_WEAK_FUNC(sub_83CDA234);
PPC_FUNC_IMPL(__imp__sub_83CDA234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA238"))) PPC_WEAK_FUNC(sub_83CDA238);
PPC_FUNC_IMPL(__imp__sub_83CDA238) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19692
	ctx.r11.s64 = ctx.r8.s64 + 19692;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,7668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7668);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8720
	ctx.r3.s64 = ctx.r6.s64 + -8720;
	// stw r10,19692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA268"))) PPC_WEAK_FUNC(sub_83CDA268);
PPC_FUNC_IMPL(__imp__sub_83CDA268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8704
	ctx.r3.s64 = ctx.r11.s64 + -8704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA274"))) PPC_WEAK_FUNC(sub_83CDA274);
PPC_FUNC_IMPL(__imp__sub_83CDA274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA278"))) PPC_WEAK_FUNC(sub_83CDA278);
PPC_FUNC_IMPL(__imp__sub_83CDA278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8696
	ctx.r3.s64 = ctx.r11.s64 + -8696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA284"))) PPC_WEAK_FUNC(sub_83CDA284);
PPC_FUNC_IMPL(__imp__sub_83CDA284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA288"))) PPC_WEAK_FUNC(sub_83CDA288);
PPC_FUNC_IMPL(__imp__sub_83CDA288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8688
	ctx.r3.s64 = ctx.r11.s64 + -8688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA294"))) PPC_WEAK_FUNC(sub_83CDA294);
PPC_FUNC_IMPL(__imp__sub_83CDA294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA298"))) PPC_WEAK_FUNC(sub_83CDA298);
PPC_FUNC_IMPL(__imp__sub_83CDA298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA2A4"))) PPC_WEAK_FUNC(sub_83CDA2A4);
PPC_FUNC_IMPL(__imp__sub_83CDA2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA2A8"))) PPC_WEAK_FUNC(sub_83CDA2A8);
PPC_FUNC_IMPL(__imp__sub_83CDA2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA2B4"))) PPC_WEAK_FUNC(sub_83CDA2B4);
PPC_FUNC_IMPL(__imp__sub_83CDA2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA2B8"))) PPC_WEAK_FUNC(sub_83CDA2B8);
PPC_FUNC_IMPL(__imp__sub_83CDA2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA2C4"))) PPC_WEAK_FUNC(sub_83CDA2C4);
PPC_FUNC_IMPL(__imp__sub_83CDA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA2C8"))) PPC_WEAK_FUNC(sub_83CDA2C8);
PPC_FUNC_IMPL(__imp__sub_83CDA2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8656
	ctx.r3.s64 = ctx.r11.s64 + -8656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA2D4"))) PPC_WEAK_FUNC(sub_83CDA2D4);
PPC_FUNC_IMPL(__imp__sub_83CDA2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA2D8"))) PPC_WEAK_FUNC(sub_83CDA2D8);
PPC_FUNC_IMPL(__imp__sub_83CDA2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8648
	ctx.r3.s64 = ctx.r11.s64 + -8648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA2E4"))) PPC_WEAK_FUNC(sub_83CDA2E4);
PPC_FUNC_IMPL(__imp__sub_83CDA2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA2E8"))) PPC_WEAK_FUNC(sub_83CDA2E8);
PPC_FUNC_IMPL(__imp__sub_83CDA2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8640
	ctx.r3.s64 = ctx.r11.s64 + -8640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA2F4"))) PPC_WEAK_FUNC(sub_83CDA2F4);
PPC_FUNC_IMPL(__imp__sub_83CDA2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA2F8"))) PPC_WEAK_FUNC(sub_83CDA2F8);
PPC_FUNC_IMPL(__imp__sub_83CDA2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8632
	ctx.r3.s64 = ctx.r11.s64 + -8632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA304"))) PPC_WEAK_FUNC(sub_83CDA304);
PPC_FUNC_IMPL(__imp__sub_83CDA304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA308"))) PPC_WEAK_FUNC(sub_83CDA308);
PPC_FUNC_IMPL(__imp__sub_83CDA308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8624
	ctx.r3.s64 = ctx.r11.s64 + -8624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA314"))) PPC_WEAK_FUNC(sub_83CDA314);
PPC_FUNC_IMPL(__imp__sub_83CDA314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA318"))) PPC_WEAK_FUNC(sub_83CDA318);
PPC_FUNC_IMPL(__imp__sub_83CDA318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8616
	ctx.r3.s64 = ctx.r11.s64 + -8616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA324"))) PPC_WEAK_FUNC(sub_83CDA324);
PPC_FUNC_IMPL(__imp__sub_83CDA324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA328"))) PPC_WEAK_FUNC(sub_83CDA328);
PPC_FUNC_IMPL(__imp__sub_83CDA328) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20072
	ctx.r7.s64 = ctx.r8.s64 + 20072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20072(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA350"))) PPC_WEAK_FUNC(sub_83CDA350);
PPC_FUNC_IMPL(__imp__sub_83CDA350) {
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
	// addi r3,r11,20056
	ctx.r3.s64 = ctx.r11.s64 + 20056;
	// bl 0x83523120
	ctx.lr = 0x83CDA368;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8608
	ctx.r3.s64 = ctx.r10.s64 + -8608;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA374;
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

__attribute__((alias("__imp__sub_83CDA384"))) PPC_WEAK_FUNC(sub_83CDA384);
PPC_FUNC_IMPL(__imp__sub_83CDA384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA388"))) PPC_WEAK_FUNC(sub_83CDA388);
PPC_FUNC_IMPL(__imp__sub_83CDA388) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,7908
	ctx.r6.s64 = ctx.r7.s64 + 7908;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20072(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20072);
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
	// std r9,7908(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7908, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA3D0"))) PPC_WEAK_FUNC(sub_83CDA3D0);
PPC_FUNC_IMPL(__imp__sub_83CDA3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8592
	ctx.r3.s64 = ctx.r11.s64 + -8592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA3DC"))) PPC_WEAK_FUNC(sub_83CDA3DC);
PPC_FUNC_IMPL(__imp__sub_83CDA3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA3E0"))) PPC_WEAK_FUNC(sub_83CDA3E0);
PPC_FUNC_IMPL(__imp__sub_83CDA3E0) {
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
	// addi r3,r11,20080
	ctx.r3.s64 = ctx.r11.s64 + 20080;
	// bl 0x8259af80
	ctx.lr = 0x83CDA3F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8576
	ctx.r3.s64 = ctx.r10.s64 + -8576;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA404;
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

__attribute__((alias("__imp__sub_83CDA414"))) PPC_WEAK_FUNC(sub_83CDA414);
PPC_FUNC_IMPL(__imp__sub_83CDA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA418"))) PPC_WEAK_FUNC(sub_83CDA418);
PPC_FUNC_IMPL(__imp__sub_83CDA418) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20060
	ctx.r11.s64 = ctx.r8.s64 + 20060;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,7872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7872);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8584
	ctx.r3.s64 = ctx.r6.s64 + -8584;
	// stw r10,20060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20060, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA448"))) PPC_WEAK_FUNC(sub_83CDA448);
PPC_FUNC_IMPL(__imp__sub_83CDA448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8568
	ctx.r3.s64 = ctx.r11.s64 + -8568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA454"))) PPC_WEAK_FUNC(sub_83CDA454);
PPC_FUNC_IMPL(__imp__sub_83CDA454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA458"))) PPC_WEAK_FUNC(sub_83CDA458);
PPC_FUNC_IMPL(__imp__sub_83CDA458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8560
	ctx.r3.s64 = ctx.r11.s64 + -8560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA464"))) PPC_WEAK_FUNC(sub_83CDA464);
PPC_FUNC_IMPL(__imp__sub_83CDA464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA468"))) PPC_WEAK_FUNC(sub_83CDA468);
PPC_FUNC_IMPL(__imp__sub_83CDA468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8552
	ctx.r3.s64 = ctx.r11.s64 + -8552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA474"))) PPC_WEAK_FUNC(sub_83CDA474);
PPC_FUNC_IMPL(__imp__sub_83CDA474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA478"))) PPC_WEAK_FUNC(sub_83CDA478);
PPC_FUNC_IMPL(__imp__sub_83CDA478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8544
	ctx.r3.s64 = ctx.r11.s64 + -8544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA484"))) PPC_WEAK_FUNC(sub_83CDA484);
PPC_FUNC_IMPL(__imp__sub_83CDA484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA488"))) PPC_WEAK_FUNC(sub_83CDA488);
PPC_FUNC_IMPL(__imp__sub_83CDA488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8536
	ctx.r3.s64 = ctx.r11.s64 + -8536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA494"))) PPC_WEAK_FUNC(sub_83CDA494);
PPC_FUNC_IMPL(__imp__sub_83CDA494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA498"))) PPC_WEAK_FUNC(sub_83CDA498);
PPC_FUNC_IMPL(__imp__sub_83CDA498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8528
	ctx.r3.s64 = ctx.r11.s64 + -8528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA4A4"))) PPC_WEAK_FUNC(sub_83CDA4A4);
PPC_FUNC_IMPL(__imp__sub_83CDA4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA4A8"))) PPC_WEAK_FUNC(sub_83CDA4A8);
PPC_FUNC_IMPL(__imp__sub_83CDA4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8520
	ctx.r3.s64 = ctx.r11.s64 + -8520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA4B4"))) PPC_WEAK_FUNC(sub_83CDA4B4);
PPC_FUNC_IMPL(__imp__sub_83CDA4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA4B8"))) PPC_WEAK_FUNC(sub_83CDA4B8);
PPC_FUNC_IMPL(__imp__sub_83CDA4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8512
	ctx.r3.s64 = ctx.r11.s64 + -8512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA4C4"))) PPC_WEAK_FUNC(sub_83CDA4C4);
PPC_FUNC_IMPL(__imp__sub_83CDA4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA4C8"))) PPC_WEAK_FUNC(sub_83CDA4C8);
PPC_FUNC_IMPL(__imp__sub_83CDA4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA4D4"))) PPC_WEAK_FUNC(sub_83CDA4D4);
PPC_FUNC_IMPL(__imp__sub_83CDA4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA4D8"))) PPC_WEAK_FUNC(sub_83CDA4D8);
PPC_FUNC_IMPL(__imp__sub_83CDA4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8496
	ctx.r3.s64 = ctx.r11.s64 + -8496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA4E4"))) PPC_WEAK_FUNC(sub_83CDA4E4);
PPC_FUNC_IMPL(__imp__sub_83CDA4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA4E8"))) PPC_WEAK_FUNC(sub_83CDA4E8);
PPC_FUNC_IMPL(__imp__sub_83CDA4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8488
	ctx.r3.s64 = ctx.r11.s64 + -8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA4F4"))) PPC_WEAK_FUNC(sub_83CDA4F4);
PPC_FUNC_IMPL(__imp__sub_83CDA4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA4F8"))) PPC_WEAK_FUNC(sub_83CDA4F8);
PPC_FUNC_IMPL(__imp__sub_83CDA4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8480
	ctx.r3.s64 = ctx.r11.s64 + -8480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA504"))) PPC_WEAK_FUNC(sub_83CDA504);
PPC_FUNC_IMPL(__imp__sub_83CDA504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA508"))) PPC_WEAK_FUNC(sub_83CDA508);
PPC_FUNC_IMPL(__imp__sub_83CDA508) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20428
	ctx.r7.s64 = ctx.r8.s64 + 20428;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20428(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20428);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20428, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA530"))) PPC_WEAK_FUNC(sub_83CDA530);
PPC_FUNC_IMPL(__imp__sub_83CDA530) {
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
	// addi r3,r11,20424
	ctx.r3.s64 = ctx.r11.s64 + 20424;
	// bl 0x83523120
	ctx.lr = 0x83CDA548;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8472
	ctx.r3.s64 = ctx.r10.s64 + -8472;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA554;
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

__attribute__((alias("__imp__sub_83CDA564"))) PPC_WEAK_FUNC(sub_83CDA564);
PPC_FUNC_IMPL(__imp__sub_83CDA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA568"))) PPC_WEAK_FUNC(sub_83CDA568);
PPC_FUNC_IMPL(__imp__sub_83CDA568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8456
	ctx.r3.s64 = ctx.r11.s64 + -8456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA574"))) PPC_WEAK_FUNC(sub_83CDA574);
PPC_FUNC_IMPL(__imp__sub_83CDA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA578"))) PPC_WEAK_FUNC(sub_83CDA578);
PPC_FUNC_IMPL(__imp__sub_83CDA578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8448
	ctx.r3.s64 = ctx.r11.s64 + -8448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA584"))) PPC_WEAK_FUNC(sub_83CDA584);
PPC_FUNC_IMPL(__imp__sub_83CDA584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA588"))) PPC_WEAK_FUNC(sub_83CDA588);
PPC_FUNC_IMPL(__imp__sub_83CDA588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8440
	ctx.r3.s64 = ctx.r11.s64 + -8440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA594"))) PPC_WEAK_FUNC(sub_83CDA594);
PPC_FUNC_IMPL(__imp__sub_83CDA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA598"))) PPC_WEAK_FUNC(sub_83CDA598);
PPC_FUNC_IMPL(__imp__sub_83CDA598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8432
	ctx.r3.s64 = ctx.r11.s64 + -8432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA5A4"))) PPC_WEAK_FUNC(sub_83CDA5A4);
PPC_FUNC_IMPL(__imp__sub_83CDA5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA5A8"))) PPC_WEAK_FUNC(sub_83CDA5A8);
PPC_FUNC_IMPL(__imp__sub_83CDA5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8424
	ctx.r3.s64 = ctx.r11.s64 + -8424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA5B4"))) PPC_WEAK_FUNC(sub_83CDA5B4);
PPC_FUNC_IMPL(__imp__sub_83CDA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA5B8"))) PPC_WEAK_FUNC(sub_83CDA5B8);
PPC_FUNC_IMPL(__imp__sub_83CDA5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA5C4"))) PPC_WEAK_FUNC(sub_83CDA5C4);
PPC_FUNC_IMPL(__imp__sub_83CDA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA5C8"))) PPC_WEAK_FUNC(sub_83CDA5C8);
PPC_FUNC_IMPL(__imp__sub_83CDA5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8408
	ctx.r3.s64 = ctx.r11.s64 + -8408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA5D4"))) PPC_WEAK_FUNC(sub_83CDA5D4);
PPC_FUNC_IMPL(__imp__sub_83CDA5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA5D8"))) PPC_WEAK_FUNC(sub_83CDA5D8);
PPC_FUNC_IMPL(__imp__sub_83CDA5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8400
	ctx.r3.s64 = ctx.r11.s64 + -8400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA5E4"))) PPC_WEAK_FUNC(sub_83CDA5E4);
PPC_FUNC_IMPL(__imp__sub_83CDA5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA5E8"))) PPC_WEAK_FUNC(sub_83CDA5E8);
PPC_FUNC_IMPL(__imp__sub_83CDA5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA5F4"))) PPC_WEAK_FUNC(sub_83CDA5F4);
PPC_FUNC_IMPL(__imp__sub_83CDA5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA5F8"))) PPC_WEAK_FUNC(sub_83CDA5F8);
PPC_FUNC_IMPL(__imp__sub_83CDA5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA604"))) PPC_WEAK_FUNC(sub_83CDA604);
PPC_FUNC_IMPL(__imp__sub_83CDA604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA608"))) PPC_WEAK_FUNC(sub_83CDA608);
PPC_FUNC_IMPL(__imp__sub_83CDA608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8376
	ctx.r3.s64 = ctx.r11.s64 + -8376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA614"))) PPC_WEAK_FUNC(sub_83CDA614);
PPC_FUNC_IMPL(__imp__sub_83CDA614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA618"))) PPC_WEAK_FUNC(sub_83CDA618);
PPC_FUNC_IMPL(__imp__sub_83CDA618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8368
	ctx.r3.s64 = ctx.r11.s64 + -8368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA624"))) PPC_WEAK_FUNC(sub_83CDA624);
PPC_FUNC_IMPL(__imp__sub_83CDA624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA628"))) PPC_WEAK_FUNC(sub_83CDA628);
PPC_FUNC_IMPL(__imp__sub_83CDA628) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20456
	ctx.r7.s64 = ctx.r8.s64 + 20456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA650"))) PPC_WEAK_FUNC(sub_83CDA650);
PPC_FUNC_IMPL(__imp__sub_83CDA650) {
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
	// addi r3,r11,20440
	ctx.r3.s64 = ctx.r11.s64 + 20440;
	// bl 0x83523120
	ctx.lr = 0x83CDA668;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8360
	ctx.r3.s64 = ctx.r10.s64 + -8360;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA674;
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

__attribute__((alias("__imp__sub_83CDA684"))) PPC_WEAK_FUNC(sub_83CDA684);
PPC_FUNC_IMPL(__imp__sub_83CDA684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA688"))) PPC_WEAK_FUNC(sub_83CDA688);
PPC_FUNC_IMPL(__imp__sub_83CDA688) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,8196
	ctx.r6.s64 = ctx.r7.s64 + 8196;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20456);
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
	// std r9,8196(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8196, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA6D0"))) PPC_WEAK_FUNC(sub_83CDA6D0);
PPC_FUNC_IMPL(__imp__sub_83CDA6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8344
	ctx.r3.s64 = ctx.r11.s64 + -8344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA6DC"))) PPC_WEAK_FUNC(sub_83CDA6DC);
PPC_FUNC_IMPL(__imp__sub_83CDA6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA6E0"))) PPC_WEAK_FUNC(sub_83CDA6E0);
PPC_FUNC_IMPL(__imp__sub_83CDA6E0) {
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
	// addi r3,r11,20464
	ctx.r3.s64 = ctx.r11.s64 + 20464;
	// bl 0x8259af80
	ctx.lr = 0x83CDA6F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8328
	ctx.r3.s64 = ctx.r10.s64 + -8328;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA704;
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

__attribute__((alias("__imp__sub_83CDA714"))) PPC_WEAK_FUNC(sub_83CDA714);
PPC_FUNC_IMPL(__imp__sub_83CDA714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA718"))) PPC_WEAK_FUNC(sub_83CDA718);
PPC_FUNC_IMPL(__imp__sub_83CDA718) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20444
	ctx.r11.s64 = ctx.r8.s64 + 20444;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,8148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8148);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8336
	ctx.r3.s64 = ctx.r6.s64 + -8336;
	// stw r10,20444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20444, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA748"))) PPC_WEAK_FUNC(sub_83CDA748);
PPC_FUNC_IMPL(__imp__sub_83CDA748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8320
	ctx.r3.s64 = ctx.r11.s64 + -8320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA754"))) PPC_WEAK_FUNC(sub_83CDA754);
PPC_FUNC_IMPL(__imp__sub_83CDA754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA758"))) PPC_WEAK_FUNC(sub_83CDA758);
PPC_FUNC_IMPL(__imp__sub_83CDA758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8312
	ctx.r3.s64 = ctx.r11.s64 + -8312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA764"))) PPC_WEAK_FUNC(sub_83CDA764);
PPC_FUNC_IMPL(__imp__sub_83CDA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA768"))) PPC_WEAK_FUNC(sub_83CDA768);
PPC_FUNC_IMPL(__imp__sub_83CDA768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8304
	ctx.r3.s64 = ctx.r11.s64 + -8304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA774"))) PPC_WEAK_FUNC(sub_83CDA774);
PPC_FUNC_IMPL(__imp__sub_83CDA774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA778"))) PPC_WEAK_FUNC(sub_83CDA778);
PPC_FUNC_IMPL(__imp__sub_83CDA778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8296
	ctx.r3.s64 = ctx.r11.s64 + -8296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA784"))) PPC_WEAK_FUNC(sub_83CDA784);
PPC_FUNC_IMPL(__imp__sub_83CDA784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA788"))) PPC_WEAK_FUNC(sub_83CDA788);
PPC_FUNC_IMPL(__imp__sub_83CDA788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8288
	ctx.r3.s64 = ctx.r11.s64 + -8288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA794"))) PPC_WEAK_FUNC(sub_83CDA794);
PPC_FUNC_IMPL(__imp__sub_83CDA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA798"))) PPC_WEAK_FUNC(sub_83CDA798);
PPC_FUNC_IMPL(__imp__sub_83CDA798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8280
	ctx.r3.s64 = ctx.r11.s64 + -8280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA7A4"))) PPC_WEAK_FUNC(sub_83CDA7A4);
PPC_FUNC_IMPL(__imp__sub_83CDA7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA7A8"))) PPC_WEAK_FUNC(sub_83CDA7A8);
PPC_FUNC_IMPL(__imp__sub_83CDA7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8272
	ctx.r3.s64 = ctx.r11.s64 + -8272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA7B4"))) PPC_WEAK_FUNC(sub_83CDA7B4);
PPC_FUNC_IMPL(__imp__sub_83CDA7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA7B8"))) PPC_WEAK_FUNC(sub_83CDA7B8);
PPC_FUNC_IMPL(__imp__sub_83CDA7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8264
	ctx.r3.s64 = ctx.r11.s64 + -8264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA7C4"))) PPC_WEAK_FUNC(sub_83CDA7C4);
PPC_FUNC_IMPL(__imp__sub_83CDA7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA7C8"))) PPC_WEAK_FUNC(sub_83CDA7C8);
PPC_FUNC_IMPL(__imp__sub_83CDA7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8256
	ctx.r3.s64 = ctx.r11.s64 + -8256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA7D4"))) PPC_WEAK_FUNC(sub_83CDA7D4);
PPC_FUNC_IMPL(__imp__sub_83CDA7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA7D8"))) PPC_WEAK_FUNC(sub_83CDA7D8);
PPC_FUNC_IMPL(__imp__sub_83CDA7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8248
	ctx.r3.s64 = ctx.r11.s64 + -8248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA7E4"))) PPC_WEAK_FUNC(sub_83CDA7E4);
PPC_FUNC_IMPL(__imp__sub_83CDA7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA7E8"))) PPC_WEAK_FUNC(sub_83CDA7E8);
PPC_FUNC_IMPL(__imp__sub_83CDA7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8240
	ctx.r3.s64 = ctx.r11.s64 + -8240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA7F4"))) PPC_WEAK_FUNC(sub_83CDA7F4);
PPC_FUNC_IMPL(__imp__sub_83CDA7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA7F8"))) PPC_WEAK_FUNC(sub_83CDA7F8);
PPC_FUNC_IMPL(__imp__sub_83CDA7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA804"))) PPC_WEAK_FUNC(sub_83CDA804);
PPC_FUNC_IMPL(__imp__sub_83CDA804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA808"))) PPC_WEAK_FUNC(sub_83CDA808);
PPC_FUNC_IMPL(__imp__sub_83CDA808) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20824
	ctx.r7.s64 = ctx.r8.s64 + 20824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA830"))) PPC_WEAK_FUNC(sub_83CDA830);
PPC_FUNC_IMPL(__imp__sub_83CDA830) {
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
	// addi r3,r11,20808
	ctx.r3.s64 = ctx.r11.s64 + 20808;
	// bl 0x83523120
	ctx.lr = 0x83CDA848;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8224
	ctx.r3.s64 = ctx.r10.s64 + -8224;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA854;
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

__attribute__((alias("__imp__sub_83CDA864"))) PPC_WEAK_FUNC(sub_83CDA864);
PPC_FUNC_IMPL(__imp__sub_83CDA864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA868"))) PPC_WEAK_FUNC(sub_83CDA868);
PPC_FUNC_IMPL(__imp__sub_83CDA868) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,8356
	ctx.r6.s64 = ctx.r7.s64 + 8356;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8260(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8260);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20824);
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
	// std r9,8356(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDA8B0"))) PPC_WEAK_FUNC(sub_83CDA8B0);
PPC_FUNC_IMPL(__imp__sub_83CDA8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8208
	ctx.r3.s64 = ctx.r11.s64 + -8208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA8BC"))) PPC_WEAK_FUNC(sub_83CDA8BC);
PPC_FUNC_IMPL(__imp__sub_83CDA8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA8C0"))) PPC_WEAK_FUNC(sub_83CDA8C0);
PPC_FUNC_IMPL(__imp__sub_83CDA8C0) {
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
	// addi r3,r11,20832
	ctx.r3.s64 = ctx.r11.s64 + 20832;
	// bl 0x8259af80
	ctx.lr = 0x83CDA8D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8192
	ctx.r3.s64 = ctx.r10.s64 + -8192;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDA8E4;
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

