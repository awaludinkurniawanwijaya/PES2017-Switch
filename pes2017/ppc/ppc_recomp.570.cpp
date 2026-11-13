#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B8FCD0"))) PPC_WEAK_FUNC(sub_83B8FCD0);
PPC_FUNC_IMPL(__imp__sub_83B8FCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6632
	ctx.r7.s64 = ctx.r8.s64 + -6632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6632(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8FCF8"))) PPC_WEAK_FUNC(sub_83B8FCF8);
PPC_FUNC_IMPL(__imp__sub_83B8FCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6612
	ctx.r11.s64 = ctx.r11.s64 + -6612;
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

__attribute__((alias("__imp__sub_83B8FD38"))) PPC_WEAK_FUNC(sub_83B8FD38);
PPC_FUNC_IMPL(__imp__sub_83B8FD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-26464
	ctx.r4.s64 = ctx.r11.s64 + -26464;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-6624
	ctx.r3.s64 = ctx.r7.s64 + -6624;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FD68"))) PPC_WEAK_FUNC(sub_83B8FD68);
PPC_FUNC_IMPL(__imp__sub_83B8FD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4336
	ctx.r3.s64 = ctx.r11.s64 + -4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FD74"))) PPC_WEAK_FUNC(sub_83B8FD74);
PPC_FUNC_IMPL(__imp__sub_83B8FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FD78"))) PPC_WEAK_FUNC(sub_83B8FD78);
PPC_FUNC_IMPL(__imp__sub_83B8FD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4328
	ctx.r3.s64 = ctx.r11.s64 + -4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FD84"))) PPC_WEAK_FUNC(sub_83B8FD84);
PPC_FUNC_IMPL(__imp__sub_83B8FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FD88"))) PPC_WEAK_FUNC(sub_83B8FD88);
PPC_FUNC_IMPL(__imp__sub_83B8FD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4320
	ctx.r3.s64 = ctx.r11.s64 + -4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FD94"))) PPC_WEAK_FUNC(sub_83B8FD94);
PPC_FUNC_IMPL(__imp__sub_83B8FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FD98"))) PPC_WEAK_FUNC(sub_83B8FD98);
PPC_FUNC_IMPL(__imp__sub_83B8FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4312
	ctx.r3.s64 = ctx.r11.s64 + -4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FDA4"))) PPC_WEAK_FUNC(sub_83B8FDA4);
PPC_FUNC_IMPL(__imp__sub_83B8FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FDA8"))) PPC_WEAK_FUNC(sub_83B8FDA8);
PPC_FUNC_IMPL(__imp__sub_83B8FDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4304
	ctx.r3.s64 = ctx.r11.s64 + -4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FDB4"))) PPC_WEAK_FUNC(sub_83B8FDB4);
PPC_FUNC_IMPL(__imp__sub_83B8FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FDB8"))) PPC_WEAK_FUNC(sub_83B8FDB8);
PPC_FUNC_IMPL(__imp__sub_83B8FDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4296
	ctx.r3.s64 = ctx.r11.s64 + -4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FDC4"))) PPC_WEAK_FUNC(sub_83B8FDC4);
PPC_FUNC_IMPL(__imp__sub_83B8FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FDC8"))) PPC_WEAK_FUNC(sub_83B8FDC8);
PPC_FUNC_IMPL(__imp__sub_83B8FDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4288
	ctx.r3.s64 = ctx.r11.s64 + -4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FDD4"))) PPC_WEAK_FUNC(sub_83B8FDD4);
PPC_FUNC_IMPL(__imp__sub_83B8FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FDD8"))) PPC_WEAK_FUNC(sub_83B8FDD8);
PPC_FUNC_IMPL(__imp__sub_83B8FDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4280
	ctx.r3.s64 = ctx.r11.s64 + -4280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FDE4"))) PPC_WEAK_FUNC(sub_83B8FDE4);
PPC_FUNC_IMPL(__imp__sub_83B8FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FDE8"))) PPC_WEAK_FUNC(sub_83B8FDE8);
PPC_FUNC_IMPL(__imp__sub_83B8FDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4272
	ctx.r3.s64 = ctx.r11.s64 + -4272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FDF4"))) PPC_WEAK_FUNC(sub_83B8FDF4);
PPC_FUNC_IMPL(__imp__sub_83B8FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FDF8"))) PPC_WEAK_FUNC(sub_83B8FDF8);
PPC_FUNC_IMPL(__imp__sub_83B8FDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4264
	ctx.r3.s64 = ctx.r11.s64 + -4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FE04"))) PPC_WEAK_FUNC(sub_83B8FE04);
PPC_FUNC_IMPL(__imp__sub_83B8FE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FE08"))) PPC_WEAK_FUNC(sub_83B8FE08);
PPC_FUNC_IMPL(__imp__sub_83B8FE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4256
	ctx.r3.s64 = ctx.r11.s64 + -4256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FE14"))) PPC_WEAK_FUNC(sub_83B8FE14);
PPC_FUNC_IMPL(__imp__sub_83B8FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FE18"))) PPC_WEAK_FUNC(sub_83B8FE18);
PPC_FUNC_IMPL(__imp__sub_83B8FE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4248
	ctx.r3.s64 = ctx.r11.s64 + -4248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FE24"))) PPC_WEAK_FUNC(sub_83B8FE24);
PPC_FUNC_IMPL(__imp__sub_83B8FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FE28"))) PPC_WEAK_FUNC(sub_83B8FE28);
PPC_FUNC_IMPL(__imp__sub_83B8FE28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6576
	ctx.r7.s64 = ctx.r8.s64 + -6576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8FE50"))) PPC_WEAK_FUNC(sub_83B8FE50);
PPC_FUNC_IMPL(__imp__sub_83B8FE50) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6580
	ctx.r3.s64 = ctx.r11.s64 + -6580;
	// bl 0x83523120
	ctx.lr = 0x83B8FE68;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-4240
	ctx.r3.s64 = ctx.r10.s64 + -4240;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8FE74;
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

__attribute__((alias("__imp__sub_83B8FE84"))) PPC_WEAK_FUNC(sub_83B8FE84);
PPC_FUNC_IMPL(__imp__sub_83B8FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FE88"))) PPC_WEAK_FUNC(sub_83B8FE88);
PPC_FUNC_IMPL(__imp__sub_83B8FE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FE94"))) PPC_WEAK_FUNC(sub_83B8FE94);
PPC_FUNC_IMPL(__imp__sub_83B8FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FE98"))) PPC_WEAK_FUNC(sub_83B8FE98);
PPC_FUNC_IMPL(__imp__sub_83B8FE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4216
	ctx.r3.s64 = ctx.r11.s64 + -4216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FEA4"))) PPC_WEAK_FUNC(sub_83B8FEA4);
PPC_FUNC_IMPL(__imp__sub_83B8FEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FEA8"))) PPC_WEAK_FUNC(sub_83B8FEA8);
PPC_FUNC_IMPL(__imp__sub_83B8FEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4208
	ctx.r3.s64 = ctx.r11.s64 + -4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FEB4"))) PPC_WEAK_FUNC(sub_83B8FEB4);
PPC_FUNC_IMPL(__imp__sub_83B8FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FEB8"))) PPC_WEAK_FUNC(sub_83B8FEB8);
PPC_FUNC_IMPL(__imp__sub_83B8FEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4200
	ctx.r3.s64 = ctx.r11.s64 + -4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FEC4"))) PPC_WEAK_FUNC(sub_83B8FEC4);
PPC_FUNC_IMPL(__imp__sub_83B8FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FEC8"))) PPC_WEAK_FUNC(sub_83B8FEC8);
PPC_FUNC_IMPL(__imp__sub_83B8FEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4192
	ctx.r3.s64 = ctx.r11.s64 + -4192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FED4"))) PPC_WEAK_FUNC(sub_83B8FED4);
PPC_FUNC_IMPL(__imp__sub_83B8FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FED8"))) PPC_WEAK_FUNC(sub_83B8FED8);
PPC_FUNC_IMPL(__imp__sub_83B8FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4184
	ctx.r3.s64 = ctx.r11.s64 + -4184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FEE4"))) PPC_WEAK_FUNC(sub_83B8FEE4);
PPC_FUNC_IMPL(__imp__sub_83B8FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FEE8"))) PPC_WEAK_FUNC(sub_83B8FEE8);
PPC_FUNC_IMPL(__imp__sub_83B8FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4176
	ctx.r3.s64 = ctx.r11.s64 + -4176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FEF4"))) PPC_WEAK_FUNC(sub_83B8FEF4);
PPC_FUNC_IMPL(__imp__sub_83B8FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FEF8"))) PPC_WEAK_FUNC(sub_83B8FEF8);
PPC_FUNC_IMPL(__imp__sub_83B8FEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4168
	ctx.r3.s64 = ctx.r11.s64 + -4168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FF04"))) PPC_WEAK_FUNC(sub_83B8FF04);
PPC_FUNC_IMPL(__imp__sub_83B8FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FF08"))) PPC_WEAK_FUNC(sub_83B8FF08);
PPC_FUNC_IMPL(__imp__sub_83B8FF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4160
	ctx.r3.s64 = ctx.r11.s64 + -4160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FF14"))) PPC_WEAK_FUNC(sub_83B8FF14);
PPC_FUNC_IMPL(__imp__sub_83B8FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FF18"))) PPC_WEAK_FUNC(sub_83B8FF18);
PPC_FUNC_IMPL(__imp__sub_83B8FF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4152
	ctx.r3.s64 = ctx.r11.s64 + -4152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FF24"))) PPC_WEAK_FUNC(sub_83B8FF24);
PPC_FUNC_IMPL(__imp__sub_83B8FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FF28"))) PPC_WEAK_FUNC(sub_83B8FF28);
PPC_FUNC_IMPL(__imp__sub_83B8FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4144
	ctx.r3.s64 = ctx.r11.s64 + -4144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FF34"))) PPC_WEAK_FUNC(sub_83B8FF34);
PPC_FUNC_IMPL(__imp__sub_83B8FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FF38"))) PPC_WEAK_FUNC(sub_83B8FF38);
PPC_FUNC_IMPL(__imp__sub_83B8FF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4136
	ctx.r3.s64 = ctx.r11.s64 + -4136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FF44"))) PPC_WEAK_FUNC(sub_83B8FF44);
PPC_FUNC_IMPL(__imp__sub_83B8FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FF48"))) PPC_WEAK_FUNC(sub_83B8FF48);
PPC_FUNC_IMPL(__imp__sub_83B8FF48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6560
	ctx.r7.s64 = ctx.r8.s64 + -6560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6560(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8FF70"))) PPC_WEAK_FUNC(sub_83B8FF70);
PPC_FUNC_IMPL(__imp__sub_83B8FF70) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6564
	ctx.r3.s64 = ctx.r11.s64 + -6564;
	// bl 0x83523120
	ctx.lr = 0x83B8FF88;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-4128
	ctx.r3.s64 = ctx.r10.s64 + -4128;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8FF94;
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

__attribute__((alias("__imp__sub_83B8FFA4"))) PPC_WEAK_FUNC(sub_83B8FFA4);
PPC_FUNC_IMPL(__imp__sub_83B8FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FFA8"))) PPC_WEAK_FUNC(sub_83B8FFA8);
PPC_FUNC_IMPL(__imp__sub_83B8FFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4112
	ctx.r3.s64 = ctx.r11.s64 + -4112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FFB4"))) PPC_WEAK_FUNC(sub_83B8FFB4);
PPC_FUNC_IMPL(__imp__sub_83B8FFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FFB8"))) PPC_WEAK_FUNC(sub_83B8FFB8);
PPC_FUNC_IMPL(__imp__sub_83B8FFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4104
	ctx.r3.s64 = ctx.r11.s64 + -4104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FFC4"))) PPC_WEAK_FUNC(sub_83B8FFC4);
PPC_FUNC_IMPL(__imp__sub_83B8FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FFC8"))) PPC_WEAK_FUNC(sub_83B8FFC8);
PPC_FUNC_IMPL(__imp__sub_83B8FFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4096
	ctx.r3.s64 = ctx.r11.s64 + -4096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FFD4"))) PPC_WEAK_FUNC(sub_83B8FFD4);
PPC_FUNC_IMPL(__imp__sub_83B8FFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FFD8"))) PPC_WEAK_FUNC(sub_83B8FFD8);
PPC_FUNC_IMPL(__imp__sub_83B8FFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4088
	ctx.r3.s64 = ctx.r11.s64 + -4088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FFE4"))) PPC_WEAK_FUNC(sub_83B8FFE4);
PPC_FUNC_IMPL(__imp__sub_83B8FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FFE8"))) PPC_WEAK_FUNC(sub_83B8FFE8);
PPC_FUNC_IMPL(__imp__sub_83B8FFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4080
	ctx.r3.s64 = ctx.r11.s64 + -4080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8FFF4"))) PPC_WEAK_FUNC(sub_83B8FFF4);
PPC_FUNC_IMPL(__imp__sub_83B8FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8FFF8"))) PPC_WEAK_FUNC(sub_83B8FFF8);
PPC_FUNC_IMPL(__imp__sub_83B8FFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4072
	ctx.r3.s64 = ctx.r11.s64 + -4072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90004"))) PPC_WEAK_FUNC(sub_83B90004);
PPC_FUNC_IMPL(__imp__sub_83B90004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90008"))) PPC_WEAK_FUNC(sub_83B90008);
PPC_FUNC_IMPL(__imp__sub_83B90008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4064
	ctx.r3.s64 = ctx.r11.s64 + -4064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90014"))) PPC_WEAK_FUNC(sub_83B90014);
PPC_FUNC_IMPL(__imp__sub_83B90014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90018"))) PPC_WEAK_FUNC(sub_83B90018);
PPC_FUNC_IMPL(__imp__sub_83B90018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4056
	ctx.r3.s64 = ctx.r11.s64 + -4056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90024"))) PPC_WEAK_FUNC(sub_83B90024);
PPC_FUNC_IMPL(__imp__sub_83B90024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90028"))) PPC_WEAK_FUNC(sub_83B90028);
PPC_FUNC_IMPL(__imp__sub_83B90028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4048
	ctx.r3.s64 = ctx.r11.s64 + -4048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90034"))) PPC_WEAK_FUNC(sub_83B90034);
PPC_FUNC_IMPL(__imp__sub_83B90034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90038"))) PPC_WEAK_FUNC(sub_83B90038);
PPC_FUNC_IMPL(__imp__sub_83B90038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4040
	ctx.r3.s64 = ctx.r11.s64 + -4040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90044"))) PPC_WEAK_FUNC(sub_83B90044);
PPC_FUNC_IMPL(__imp__sub_83B90044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90048"))) PPC_WEAK_FUNC(sub_83B90048);
PPC_FUNC_IMPL(__imp__sub_83B90048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4032
	ctx.r3.s64 = ctx.r11.s64 + -4032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90054"))) PPC_WEAK_FUNC(sub_83B90054);
PPC_FUNC_IMPL(__imp__sub_83B90054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90058"))) PPC_WEAK_FUNC(sub_83B90058);
PPC_FUNC_IMPL(__imp__sub_83B90058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4024
	ctx.r3.s64 = ctx.r11.s64 + -4024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90064"))) PPC_WEAK_FUNC(sub_83B90064);
PPC_FUNC_IMPL(__imp__sub_83B90064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90068"))) PPC_WEAK_FUNC(sub_83B90068);
PPC_FUNC_IMPL(__imp__sub_83B90068) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6548
	ctx.r7.s64 = ctx.r8.s64 + -6548;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6548(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6548);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6548(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6548, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B90090"))) PPC_WEAK_FUNC(sub_83B90090);
PPC_FUNC_IMPL(__imp__sub_83B90090) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6552
	ctx.r3.s64 = ctx.r11.s64 + -6552;
	// bl 0x83523120
	ctx.lr = 0x83B900A8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-4016
	ctx.r3.s64 = ctx.r10.s64 + -4016;
	// bl 0x831cdcc8
	ctx.lr = 0x83B900B4;
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

__attribute__((alias("__imp__sub_83B900C4"))) PPC_WEAK_FUNC(sub_83B900C4);
PPC_FUNC_IMPL(__imp__sub_83B900C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B900C8"))) PPC_WEAK_FUNC(sub_83B900C8);
PPC_FUNC_IMPL(__imp__sub_83B900C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6540
	ctx.r11.s64 = ctx.r11.s64 + -6540;
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

__attribute__((alias("__imp__sub_83B90108"))) PPC_WEAK_FUNC(sub_83B90108);
PPC_FUNC_IMPL(__imp__sub_83B90108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-4000
	ctx.r3.s64 = ctx.r11.s64 + -4000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90114"))) PPC_WEAK_FUNC(sub_83B90114);
PPC_FUNC_IMPL(__imp__sub_83B90114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90118"))) PPC_WEAK_FUNC(sub_83B90118);
PPC_FUNC_IMPL(__imp__sub_83B90118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3992
	ctx.r3.s64 = ctx.r11.s64 + -3992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90124"))) PPC_WEAK_FUNC(sub_83B90124);
PPC_FUNC_IMPL(__imp__sub_83B90124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90128"))) PPC_WEAK_FUNC(sub_83B90128);
PPC_FUNC_IMPL(__imp__sub_83B90128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3984
	ctx.r3.s64 = ctx.r11.s64 + -3984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90134"))) PPC_WEAK_FUNC(sub_83B90134);
PPC_FUNC_IMPL(__imp__sub_83B90134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90138"))) PPC_WEAK_FUNC(sub_83B90138);
PPC_FUNC_IMPL(__imp__sub_83B90138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3976
	ctx.r3.s64 = ctx.r11.s64 + -3976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90144"))) PPC_WEAK_FUNC(sub_83B90144);
PPC_FUNC_IMPL(__imp__sub_83B90144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90148"))) PPC_WEAK_FUNC(sub_83B90148);
PPC_FUNC_IMPL(__imp__sub_83B90148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90154"))) PPC_WEAK_FUNC(sub_83B90154);
PPC_FUNC_IMPL(__imp__sub_83B90154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90158"))) PPC_WEAK_FUNC(sub_83B90158);
PPC_FUNC_IMPL(__imp__sub_83B90158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3960
	ctx.r3.s64 = ctx.r11.s64 + -3960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90164"))) PPC_WEAK_FUNC(sub_83B90164);
PPC_FUNC_IMPL(__imp__sub_83B90164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90168"))) PPC_WEAK_FUNC(sub_83B90168);
PPC_FUNC_IMPL(__imp__sub_83B90168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3952
	ctx.r3.s64 = ctx.r11.s64 + -3952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90174"))) PPC_WEAK_FUNC(sub_83B90174);
PPC_FUNC_IMPL(__imp__sub_83B90174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90178"))) PPC_WEAK_FUNC(sub_83B90178);
PPC_FUNC_IMPL(__imp__sub_83B90178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3944
	ctx.r3.s64 = ctx.r11.s64 + -3944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90184"))) PPC_WEAK_FUNC(sub_83B90184);
PPC_FUNC_IMPL(__imp__sub_83B90184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90188"))) PPC_WEAK_FUNC(sub_83B90188);
PPC_FUNC_IMPL(__imp__sub_83B90188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3936
	ctx.r3.s64 = ctx.r11.s64 + -3936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90194"))) PPC_WEAK_FUNC(sub_83B90194);
PPC_FUNC_IMPL(__imp__sub_83B90194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90198"))) PPC_WEAK_FUNC(sub_83B90198);
PPC_FUNC_IMPL(__imp__sub_83B90198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3928
	ctx.r3.s64 = ctx.r11.s64 + -3928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B901A4"))) PPC_WEAK_FUNC(sub_83B901A4);
PPC_FUNC_IMPL(__imp__sub_83B901A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B901A8"))) PPC_WEAK_FUNC(sub_83B901A8);
PPC_FUNC_IMPL(__imp__sub_83B901A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3920
	ctx.r3.s64 = ctx.r11.s64 + -3920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B901B4"))) PPC_WEAK_FUNC(sub_83B901B4);
PPC_FUNC_IMPL(__imp__sub_83B901B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B901B8"))) PPC_WEAK_FUNC(sub_83B901B8);
PPC_FUNC_IMPL(__imp__sub_83B901B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3912
	ctx.r3.s64 = ctx.r11.s64 + -3912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B901C4"))) PPC_WEAK_FUNC(sub_83B901C4);
PPC_FUNC_IMPL(__imp__sub_83B901C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B901C8"))) PPC_WEAK_FUNC(sub_83B901C8);
PPC_FUNC_IMPL(__imp__sub_83B901C8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6508
	ctx.r3.s64 = ctx.r11.s64 + -6508;
	// bl 0x83523120
	ctx.lr = 0x83B901E0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-3904
	ctx.r3.s64 = ctx.r10.s64 + -3904;
	// bl 0x831cdcc8
	ctx.lr = 0x83B901EC;
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

__attribute__((alias("__imp__sub_83B901FC"))) PPC_WEAK_FUNC(sub_83B901FC);
PPC_FUNC_IMPL(__imp__sub_83B901FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90200"))) PPC_WEAK_FUNC(sub_83B90200);
PPC_FUNC_IMPL(__imp__sub_83B90200) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6504
	ctx.r7.s64 = ctx.r8.s64 + -6504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B90228"))) PPC_WEAK_FUNC(sub_83B90228);
PPC_FUNC_IMPL(__imp__sub_83B90228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6484
	ctx.r11.s64 = ctx.r11.s64 + -6484;
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

__attribute__((alias("__imp__sub_83B90268"))) PPC_WEAK_FUNC(sub_83B90268);
PPC_FUNC_IMPL(__imp__sub_83B90268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-20636
	ctx.r4.s64 = ctx.r11.s64 + -20636;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-6496
	ctx.r3.s64 = ctx.r7.s64 + -6496;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90298"))) PPC_WEAK_FUNC(sub_83B90298);
PPC_FUNC_IMPL(__imp__sub_83B90298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3888
	ctx.r3.s64 = ctx.r11.s64 + -3888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B902A4"))) PPC_WEAK_FUNC(sub_83B902A4);
PPC_FUNC_IMPL(__imp__sub_83B902A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B902A8"))) PPC_WEAK_FUNC(sub_83B902A8);
PPC_FUNC_IMPL(__imp__sub_83B902A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3880
	ctx.r3.s64 = ctx.r11.s64 + -3880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B902B4"))) PPC_WEAK_FUNC(sub_83B902B4);
PPC_FUNC_IMPL(__imp__sub_83B902B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B902B8"))) PPC_WEAK_FUNC(sub_83B902B8);
PPC_FUNC_IMPL(__imp__sub_83B902B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3872
	ctx.r3.s64 = ctx.r11.s64 + -3872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B902C4"))) PPC_WEAK_FUNC(sub_83B902C4);
PPC_FUNC_IMPL(__imp__sub_83B902C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B902C8"))) PPC_WEAK_FUNC(sub_83B902C8);
PPC_FUNC_IMPL(__imp__sub_83B902C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3864
	ctx.r3.s64 = ctx.r11.s64 + -3864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B902D4"))) PPC_WEAK_FUNC(sub_83B902D4);
PPC_FUNC_IMPL(__imp__sub_83B902D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B902D8"))) PPC_WEAK_FUNC(sub_83B902D8);
PPC_FUNC_IMPL(__imp__sub_83B902D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3856
	ctx.r3.s64 = ctx.r11.s64 + -3856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B902E4"))) PPC_WEAK_FUNC(sub_83B902E4);
PPC_FUNC_IMPL(__imp__sub_83B902E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B902E8"))) PPC_WEAK_FUNC(sub_83B902E8);
PPC_FUNC_IMPL(__imp__sub_83B902E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3848
	ctx.r3.s64 = ctx.r11.s64 + -3848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B902F4"))) PPC_WEAK_FUNC(sub_83B902F4);
PPC_FUNC_IMPL(__imp__sub_83B902F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B902F8"))) PPC_WEAK_FUNC(sub_83B902F8);
PPC_FUNC_IMPL(__imp__sub_83B902F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3840
	ctx.r3.s64 = ctx.r11.s64 + -3840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90304"))) PPC_WEAK_FUNC(sub_83B90304);
PPC_FUNC_IMPL(__imp__sub_83B90304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90308"))) PPC_WEAK_FUNC(sub_83B90308);
PPC_FUNC_IMPL(__imp__sub_83B90308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3832
	ctx.r3.s64 = ctx.r11.s64 + -3832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90314"))) PPC_WEAK_FUNC(sub_83B90314);
PPC_FUNC_IMPL(__imp__sub_83B90314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90318"))) PPC_WEAK_FUNC(sub_83B90318);
PPC_FUNC_IMPL(__imp__sub_83B90318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3824
	ctx.r3.s64 = ctx.r11.s64 + -3824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90324"))) PPC_WEAK_FUNC(sub_83B90324);
PPC_FUNC_IMPL(__imp__sub_83B90324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90328"))) PPC_WEAK_FUNC(sub_83B90328);
PPC_FUNC_IMPL(__imp__sub_83B90328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3816
	ctx.r3.s64 = ctx.r11.s64 + -3816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90334"))) PPC_WEAK_FUNC(sub_83B90334);
PPC_FUNC_IMPL(__imp__sub_83B90334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90338"))) PPC_WEAK_FUNC(sub_83B90338);
PPC_FUNC_IMPL(__imp__sub_83B90338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3808
	ctx.r3.s64 = ctx.r11.s64 + -3808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90344"))) PPC_WEAK_FUNC(sub_83B90344);
PPC_FUNC_IMPL(__imp__sub_83B90344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90348"))) PPC_WEAK_FUNC(sub_83B90348);
PPC_FUNC_IMPL(__imp__sub_83B90348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3800
	ctx.r3.s64 = ctx.r11.s64 + -3800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90354"))) PPC_WEAK_FUNC(sub_83B90354);
PPC_FUNC_IMPL(__imp__sub_83B90354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90358"))) PPC_WEAK_FUNC(sub_83B90358);
PPC_FUNC_IMPL(__imp__sub_83B90358) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6448
	ctx.r7.s64 = ctx.r8.s64 + -6448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B90380"))) PPC_WEAK_FUNC(sub_83B90380);
PPC_FUNC_IMPL(__imp__sub_83B90380) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6452
	ctx.r3.s64 = ctx.r11.s64 + -6452;
	// bl 0x83523120
	ctx.lr = 0x83B90398;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-3792
	ctx.r3.s64 = ctx.r10.s64 + -3792;
	// bl 0x831cdcc8
	ctx.lr = 0x83B903A4;
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

__attribute__((alias("__imp__sub_83B903B4"))) PPC_WEAK_FUNC(sub_83B903B4);
PPC_FUNC_IMPL(__imp__sub_83B903B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B903B8"))) PPC_WEAK_FUNC(sub_83B903B8);
PPC_FUNC_IMPL(__imp__sub_83B903B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3776
	ctx.r3.s64 = ctx.r11.s64 + -3776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B903C4"))) PPC_WEAK_FUNC(sub_83B903C4);
PPC_FUNC_IMPL(__imp__sub_83B903C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B903C8"))) PPC_WEAK_FUNC(sub_83B903C8);
PPC_FUNC_IMPL(__imp__sub_83B903C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3768
	ctx.r3.s64 = ctx.r11.s64 + -3768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B903D4"))) PPC_WEAK_FUNC(sub_83B903D4);
PPC_FUNC_IMPL(__imp__sub_83B903D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B903D8"))) PPC_WEAK_FUNC(sub_83B903D8);
PPC_FUNC_IMPL(__imp__sub_83B903D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B903E4"))) PPC_WEAK_FUNC(sub_83B903E4);
PPC_FUNC_IMPL(__imp__sub_83B903E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B903E8"))) PPC_WEAK_FUNC(sub_83B903E8);
PPC_FUNC_IMPL(__imp__sub_83B903E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3752
	ctx.r3.s64 = ctx.r11.s64 + -3752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B903F4"))) PPC_WEAK_FUNC(sub_83B903F4);
PPC_FUNC_IMPL(__imp__sub_83B903F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B903F8"))) PPC_WEAK_FUNC(sub_83B903F8);
PPC_FUNC_IMPL(__imp__sub_83B903F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3744
	ctx.r3.s64 = ctx.r11.s64 + -3744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90404"))) PPC_WEAK_FUNC(sub_83B90404);
PPC_FUNC_IMPL(__imp__sub_83B90404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90408"))) PPC_WEAK_FUNC(sub_83B90408);
PPC_FUNC_IMPL(__imp__sub_83B90408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3736
	ctx.r3.s64 = ctx.r11.s64 + -3736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90414"))) PPC_WEAK_FUNC(sub_83B90414);
PPC_FUNC_IMPL(__imp__sub_83B90414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90418"))) PPC_WEAK_FUNC(sub_83B90418);
PPC_FUNC_IMPL(__imp__sub_83B90418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3728
	ctx.r3.s64 = ctx.r11.s64 + -3728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90424"))) PPC_WEAK_FUNC(sub_83B90424);
PPC_FUNC_IMPL(__imp__sub_83B90424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90428"))) PPC_WEAK_FUNC(sub_83B90428);
PPC_FUNC_IMPL(__imp__sub_83B90428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3720
	ctx.r3.s64 = ctx.r11.s64 + -3720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90434"))) PPC_WEAK_FUNC(sub_83B90434);
PPC_FUNC_IMPL(__imp__sub_83B90434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90438"))) PPC_WEAK_FUNC(sub_83B90438);
PPC_FUNC_IMPL(__imp__sub_83B90438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3712
	ctx.r3.s64 = ctx.r11.s64 + -3712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90444"))) PPC_WEAK_FUNC(sub_83B90444);
PPC_FUNC_IMPL(__imp__sub_83B90444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90448"))) PPC_WEAK_FUNC(sub_83B90448);
PPC_FUNC_IMPL(__imp__sub_83B90448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3704
	ctx.r3.s64 = ctx.r11.s64 + -3704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90454"))) PPC_WEAK_FUNC(sub_83B90454);
PPC_FUNC_IMPL(__imp__sub_83B90454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90458"))) PPC_WEAK_FUNC(sub_83B90458);
PPC_FUNC_IMPL(__imp__sub_83B90458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3696
	ctx.r3.s64 = ctx.r11.s64 + -3696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90464"))) PPC_WEAK_FUNC(sub_83B90464);
PPC_FUNC_IMPL(__imp__sub_83B90464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90468"))) PPC_WEAK_FUNC(sub_83B90468);
PPC_FUNC_IMPL(__imp__sub_83B90468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3688
	ctx.r3.s64 = ctx.r11.s64 + -3688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90474"))) PPC_WEAK_FUNC(sub_83B90474);
PPC_FUNC_IMPL(__imp__sub_83B90474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90478"))) PPC_WEAK_FUNC(sub_83B90478);
PPC_FUNC_IMPL(__imp__sub_83B90478) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6436
	ctx.r7.s64 = ctx.r8.s64 + -6436;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6436(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6436);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6436(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6436, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B904A0"))) PPC_WEAK_FUNC(sub_83B904A0);
PPC_FUNC_IMPL(__imp__sub_83B904A0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// bl 0x83523120
	ctx.lr = 0x83B904B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-3680
	ctx.r3.s64 = ctx.r10.s64 + -3680;
	// bl 0x831cdcc8
	ctx.lr = 0x83B904C4;
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

__attribute__((alias("__imp__sub_83B904D4"))) PPC_WEAK_FUNC(sub_83B904D4);
PPC_FUNC_IMPL(__imp__sub_83B904D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B904D8"))) PPC_WEAK_FUNC(sub_83B904D8);
PPC_FUNC_IMPL(__imp__sub_83B904D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3664
	ctx.r3.s64 = ctx.r11.s64 + -3664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B904E4"))) PPC_WEAK_FUNC(sub_83B904E4);
PPC_FUNC_IMPL(__imp__sub_83B904E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B904E8"))) PPC_WEAK_FUNC(sub_83B904E8);
PPC_FUNC_IMPL(__imp__sub_83B904E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3656
	ctx.r3.s64 = ctx.r11.s64 + -3656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B904F4"))) PPC_WEAK_FUNC(sub_83B904F4);
PPC_FUNC_IMPL(__imp__sub_83B904F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B904F8"))) PPC_WEAK_FUNC(sub_83B904F8);
PPC_FUNC_IMPL(__imp__sub_83B904F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3648
	ctx.r3.s64 = ctx.r11.s64 + -3648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90504"))) PPC_WEAK_FUNC(sub_83B90504);
PPC_FUNC_IMPL(__imp__sub_83B90504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90508"))) PPC_WEAK_FUNC(sub_83B90508);
PPC_FUNC_IMPL(__imp__sub_83B90508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3640
	ctx.r3.s64 = ctx.r11.s64 + -3640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90514"))) PPC_WEAK_FUNC(sub_83B90514);
PPC_FUNC_IMPL(__imp__sub_83B90514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90518"))) PPC_WEAK_FUNC(sub_83B90518);
PPC_FUNC_IMPL(__imp__sub_83B90518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3632
	ctx.r3.s64 = ctx.r11.s64 + -3632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90524"))) PPC_WEAK_FUNC(sub_83B90524);
PPC_FUNC_IMPL(__imp__sub_83B90524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90528"))) PPC_WEAK_FUNC(sub_83B90528);
PPC_FUNC_IMPL(__imp__sub_83B90528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3624
	ctx.r3.s64 = ctx.r11.s64 + -3624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90534"))) PPC_WEAK_FUNC(sub_83B90534);
PPC_FUNC_IMPL(__imp__sub_83B90534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90538"))) PPC_WEAK_FUNC(sub_83B90538);
PPC_FUNC_IMPL(__imp__sub_83B90538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3616
	ctx.r3.s64 = ctx.r11.s64 + -3616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90544"))) PPC_WEAK_FUNC(sub_83B90544);
PPC_FUNC_IMPL(__imp__sub_83B90544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90548"))) PPC_WEAK_FUNC(sub_83B90548);
PPC_FUNC_IMPL(__imp__sub_83B90548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3608
	ctx.r3.s64 = ctx.r11.s64 + -3608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90554"))) PPC_WEAK_FUNC(sub_83B90554);
PPC_FUNC_IMPL(__imp__sub_83B90554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90558"))) PPC_WEAK_FUNC(sub_83B90558);
PPC_FUNC_IMPL(__imp__sub_83B90558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90564"))) PPC_WEAK_FUNC(sub_83B90564);
PPC_FUNC_IMPL(__imp__sub_83B90564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90568"))) PPC_WEAK_FUNC(sub_83B90568);
PPC_FUNC_IMPL(__imp__sub_83B90568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3592
	ctx.r3.s64 = ctx.r11.s64 + -3592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90574"))) PPC_WEAK_FUNC(sub_83B90574);
PPC_FUNC_IMPL(__imp__sub_83B90574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90578"))) PPC_WEAK_FUNC(sub_83B90578);
PPC_FUNC_IMPL(__imp__sub_83B90578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3584
	ctx.r3.s64 = ctx.r11.s64 + -3584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90584"))) PPC_WEAK_FUNC(sub_83B90584);
PPC_FUNC_IMPL(__imp__sub_83B90584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90588"))) PPC_WEAK_FUNC(sub_83B90588);
PPC_FUNC_IMPL(__imp__sub_83B90588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3576
	ctx.r3.s64 = ctx.r11.s64 + -3576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90594"))) PPC_WEAK_FUNC(sub_83B90594);
PPC_FUNC_IMPL(__imp__sub_83B90594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90598"))) PPC_WEAK_FUNC(sub_83B90598);
PPC_FUNC_IMPL(__imp__sub_83B90598) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6424
	ctx.r7.s64 = ctx.r8.s64 + -6424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6424(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B905C0"))) PPC_WEAK_FUNC(sub_83B905C0);
PPC_FUNC_IMPL(__imp__sub_83B905C0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6428
	ctx.r3.s64 = ctx.r11.s64 + -6428;
	// bl 0x83523120
	ctx.lr = 0x83B905D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-3568
	ctx.r3.s64 = ctx.r10.s64 + -3568;
	// bl 0x831cdcc8
	ctx.lr = 0x83B905E4;
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

__attribute__((alias("__imp__sub_83B905F4"))) PPC_WEAK_FUNC(sub_83B905F4);
PPC_FUNC_IMPL(__imp__sub_83B905F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B905F8"))) PPC_WEAK_FUNC(sub_83B905F8);
PPC_FUNC_IMPL(__imp__sub_83B905F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3552
	ctx.r3.s64 = ctx.r11.s64 + -3552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90604"))) PPC_WEAK_FUNC(sub_83B90604);
PPC_FUNC_IMPL(__imp__sub_83B90604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90608"))) PPC_WEAK_FUNC(sub_83B90608);
PPC_FUNC_IMPL(__imp__sub_83B90608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3544
	ctx.r3.s64 = ctx.r11.s64 + -3544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90614"))) PPC_WEAK_FUNC(sub_83B90614);
PPC_FUNC_IMPL(__imp__sub_83B90614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90618"))) PPC_WEAK_FUNC(sub_83B90618);
PPC_FUNC_IMPL(__imp__sub_83B90618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3536
	ctx.r3.s64 = ctx.r11.s64 + -3536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90624"))) PPC_WEAK_FUNC(sub_83B90624);
PPC_FUNC_IMPL(__imp__sub_83B90624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90628"))) PPC_WEAK_FUNC(sub_83B90628);
PPC_FUNC_IMPL(__imp__sub_83B90628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3528
	ctx.r3.s64 = ctx.r11.s64 + -3528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90634"))) PPC_WEAK_FUNC(sub_83B90634);
PPC_FUNC_IMPL(__imp__sub_83B90634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90638"))) PPC_WEAK_FUNC(sub_83B90638);
PPC_FUNC_IMPL(__imp__sub_83B90638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3520
	ctx.r3.s64 = ctx.r11.s64 + -3520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90644"))) PPC_WEAK_FUNC(sub_83B90644);
PPC_FUNC_IMPL(__imp__sub_83B90644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90648"))) PPC_WEAK_FUNC(sub_83B90648);
PPC_FUNC_IMPL(__imp__sub_83B90648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3512
	ctx.r3.s64 = ctx.r11.s64 + -3512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90654"))) PPC_WEAK_FUNC(sub_83B90654);
PPC_FUNC_IMPL(__imp__sub_83B90654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90658"))) PPC_WEAK_FUNC(sub_83B90658);
PPC_FUNC_IMPL(__imp__sub_83B90658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3504
	ctx.r3.s64 = ctx.r11.s64 + -3504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90664"))) PPC_WEAK_FUNC(sub_83B90664);
PPC_FUNC_IMPL(__imp__sub_83B90664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90668"))) PPC_WEAK_FUNC(sub_83B90668);
PPC_FUNC_IMPL(__imp__sub_83B90668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3496
	ctx.r3.s64 = ctx.r11.s64 + -3496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90674"))) PPC_WEAK_FUNC(sub_83B90674);
PPC_FUNC_IMPL(__imp__sub_83B90674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90678"))) PPC_WEAK_FUNC(sub_83B90678);
PPC_FUNC_IMPL(__imp__sub_83B90678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3488
	ctx.r3.s64 = ctx.r11.s64 + -3488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90684"))) PPC_WEAK_FUNC(sub_83B90684);
PPC_FUNC_IMPL(__imp__sub_83B90684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90688"))) PPC_WEAK_FUNC(sub_83B90688);
PPC_FUNC_IMPL(__imp__sub_83B90688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3480
	ctx.r3.s64 = ctx.r11.s64 + -3480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90694"))) PPC_WEAK_FUNC(sub_83B90694);
PPC_FUNC_IMPL(__imp__sub_83B90694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90698"))) PPC_WEAK_FUNC(sub_83B90698);
PPC_FUNC_IMPL(__imp__sub_83B90698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3472
	ctx.r3.s64 = ctx.r11.s64 + -3472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B906A4"))) PPC_WEAK_FUNC(sub_83B906A4);
PPC_FUNC_IMPL(__imp__sub_83B906A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B906A8"))) PPC_WEAK_FUNC(sub_83B906A8);
PPC_FUNC_IMPL(__imp__sub_83B906A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3464
	ctx.r3.s64 = ctx.r11.s64 + -3464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B906B4"))) PPC_WEAK_FUNC(sub_83B906B4);
PPC_FUNC_IMPL(__imp__sub_83B906B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B906B8"))) PPC_WEAK_FUNC(sub_83B906B8);
PPC_FUNC_IMPL(__imp__sub_83B906B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-19444
	ctx.r4.s64 = ctx.r11.s64 + -19444;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-6404
	ctx.r3.s64 = ctx.r7.s64 + -6404;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B906E8"))) PPC_WEAK_FUNC(sub_83B906E8);
PPC_FUNC_IMPL(__imp__sub_83B906E8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6416
	ctx.r3.s64 = ctx.r11.s64 + -6416;
	// bl 0x83523120
	ctx.lr = 0x83B90700;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-3456
	ctx.r3.s64 = ctx.r10.s64 + -3456;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9070C;
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

__attribute__((alias("__imp__sub_83B9071C"))) PPC_WEAK_FUNC(sub_83B9071C);
PPC_FUNC_IMPL(__imp__sub_83B9071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90720"))) PPC_WEAK_FUNC(sub_83B90720);
PPC_FUNC_IMPL(__imp__sub_83B90720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6412
	ctx.r7.s64 = ctx.r8.s64 + -6412;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6412(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6412);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6412, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B90748"))) PPC_WEAK_FUNC(sub_83B90748);
PPC_FUNC_IMPL(__imp__sub_83B90748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3440
	ctx.r3.s64 = ctx.r11.s64 + -3440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90754"))) PPC_WEAK_FUNC(sub_83B90754);
PPC_FUNC_IMPL(__imp__sub_83B90754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90758"))) PPC_WEAK_FUNC(sub_83B90758);
PPC_FUNC_IMPL(__imp__sub_83B90758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3432
	ctx.r3.s64 = ctx.r11.s64 + -3432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90764"))) PPC_WEAK_FUNC(sub_83B90764);
PPC_FUNC_IMPL(__imp__sub_83B90764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90768"))) PPC_WEAK_FUNC(sub_83B90768);
PPC_FUNC_IMPL(__imp__sub_83B90768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3424
	ctx.r3.s64 = ctx.r11.s64 + -3424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90774"))) PPC_WEAK_FUNC(sub_83B90774);
PPC_FUNC_IMPL(__imp__sub_83B90774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90778"))) PPC_WEAK_FUNC(sub_83B90778);
PPC_FUNC_IMPL(__imp__sub_83B90778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3416
	ctx.r3.s64 = ctx.r11.s64 + -3416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90784"))) PPC_WEAK_FUNC(sub_83B90784);
PPC_FUNC_IMPL(__imp__sub_83B90784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90788"))) PPC_WEAK_FUNC(sub_83B90788);
PPC_FUNC_IMPL(__imp__sub_83B90788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3408
	ctx.r3.s64 = ctx.r11.s64 + -3408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90794"))) PPC_WEAK_FUNC(sub_83B90794);
PPC_FUNC_IMPL(__imp__sub_83B90794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90798"))) PPC_WEAK_FUNC(sub_83B90798);
PPC_FUNC_IMPL(__imp__sub_83B90798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3400
	ctx.r3.s64 = ctx.r11.s64 + -3400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B907A4"))) PPC_WEAK_FUNC(sub_83B907A4);
PPC_FUNC_IMPL(__imp__sub_83B907A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B907A8"))) PPC_WEAK_FUNC(sub_83B907A8);
PPC_FUNC_IMPL(__imp__sub_83B907A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3392
	ctx.r3.s64 = ctx.r11.s64 + -3392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B907B4"))) PPC_WEAK_FUNC(sub_83B907B4);
PPC_FUNC_IMPL(__imp__sub_83B907B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B907B8"))) PPC_WEAK_FUNC(sub_83B907B8);
PPC_FUNC_IMPL(__imp__sub_83B907B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3384
	ctx.r3.s64 = ctx.r11.s64 + -3384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B907C4"))) PPC_WEAK_FUNC(sub_83B907C4);
PPC_FUNC_IMPL(__imp__sub_83B907C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B907C8"))) PPC_WEAK_FUNC(sub_83B907C8);
PPC_FUNC_IMPL(__imp__sub_83B907C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3376
	ctx.r3.s64 = ctx.r11.s64 + -3376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B907D4"))) PPC_WEAK_FUNC(sub_83B907D4);
PPC_FUNC_IMPL(__imp__sub_83B907D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B907D8"))) PPC_WEAK_FUNC(sub_83B907D8);
PPC_FUNC_IMPL(__imp__sub_83B907D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3368
	ctx.r3.s64 = ctx.r11.s64 + -3368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B907E4"))) PPC_WEAK_FUNC(sub_83B907E4);
PPC_FUNC_IMPL(__imp__sub_83B907E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B907E8"))) PPC_WEAK_FUNC(sub_83B907E8);
PPC_FUNC_IMPL(__imp__sub_83B907E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B907F4"))) PPC_WEAK_FUNC(sub_83B907F4);
PPC_FUNC_IMPL(__imp__sub_83B907F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B907F8"))) PPC_WEAK_FUNC(sub_83B907F8);
PPC_FUNC_IMPL(__imp__sub_83B907F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3352
	ctx.r3.s64 = ctx.r11.s64 + -3352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90804"))) PPC_WEAK_FUNC(sub_83B90804);
PPC_FUNC_IMPL(__imp__sub_83B90804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90808"))) PPC_WEAK_FUNC(sub_83B90808);
PPC_FUNC_IMPL(__imp__sub_83B90808) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6388
	ctx.r7.s64 = ctx.r8.s64 + -6388;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6388);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6388(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6388, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B90830"))) PPC_WEAK_FUNC(sub_83B90830);
PPC_FUNC_IMPL(__imp__sub_83B90830) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-6392
	ctx.r3.s64 = ctx.r11.s64 + -6392;
	// bl 0x83523120
	ctx.lr = 0x83B90848;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-3344
	ctx.r3.s64 = ctx.r10.s64 + -3344;
	// bl 0x831cdcc8
	ctx.lr = 0x83B90854;
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

__attribute__((alias("__imp__sub_83B90864"))) PPC_WEAK_FUNC(sub_83B90864);
PPC_FUNC_IMPL(__imp__sub_83B90864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90868"))) PPC_WEAK_FUNC(sub_83B90868);
PPC_FUNC_IMPL(__imp__sub_83B90868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3328
	ctx.r3.s64 = ctx.r11.s64 + -3328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90874"))) PPC_WEAK_FUNC(sub_83B90874);
PPC_FUNC_IMPL(__imp__sub_83B90874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90878"))) PPC_WEAK_FUNC(sub_83B90878);
PPC_FUNC_IMPL(__imp__sub_83B90878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3320
	ctx.r3.s64 = ctx.r11.s64 + -3320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90884"))) PPC_WEAK_FUNC(sub_83B90884);
PPC_FUNC_IMPL(__imp__sub_83B90884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B90888"))) PPC_WEAK_FUNC(sub_83B90888);
PPC_FUNC_IMPL(__imp__sub_83B90888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-3312
	ctx.r3.s64 = ctx.r11.s64 + -3312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B90894"))) PPC_WEAK_FUNC(sub_83B90894);
PPC_FUNC_IMPL(__imp__sub_83B90894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

