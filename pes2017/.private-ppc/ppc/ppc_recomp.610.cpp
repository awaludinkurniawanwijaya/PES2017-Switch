#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BAD018"))) PPC_WEAK_FUNC(sub_83BAD018);
PPC_FUNC_IMPL(__imp__sub_83BAD018) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28392
	ctx.r7.s64 = ctx.r8.s64 + -28392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD040"))) PPC_WEAK_FUNC(sub_83BAD040);
PPC_FUNC_IMPL(__imp__sub_83BAD040) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-29740
	ctx.r6.s64 = ctx.r7.s64 + -29740;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29812(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29812);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28392);
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
	// std r9,-29740(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29740, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD088"))) PPC_WEAK_FUNC(sub_83BAD088);
PPC_FUNC_IMPL(__imp__sub_83BAD088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD094"))) PPC_WEAK_FUNC(sub_83BAD094);
PPC_FUNC_IMPL(__imp__sub_83BAD094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD098"))) PPC_WEAK_FUNC(sub_83BAD098);
PPC_FUNC_IMPL(__imp__sub_83BAD098) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-28384
	ctx.r3.s64 = ctx.r11.s64 + -28384;
	// bl 0x8259af80
	ctx.lr = 0x83BAD0B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27632
	ctx.r3.s64 = ctx.r10.s64 + -27632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD0BC;
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

__attribute__((alias("__imp__sub_83BAD0CC"))) PPC_WEAK_FUNC(sub_83BAD0CC);
PPC_FUNC_IMPL(__imp__sub_83BAD0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD0D0"))) PPC_WEAK_FUNC(sub_83BAD0D0);
PPC_FUNC_IMPL(__imp__sub_83BAD0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28404
	ctx.r11.s64 = ctx.r8.s64 + -28404;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-29764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29764);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27640
	ctx.r3.s64 = ctx.r6.s64 + -27640;
	// stw r10,-28404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD100"))) PPC_WEAK_FUNC(sub_83BAD100);
PPC_FUNC_IMPL(__imp__sub_83BAD100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r11,-28040
	ctx.r9.s64 = ctx.r11.s64 + -28040;
	// lfs f0,-29840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD120"))) PPC_WEAK_FUNC(sub_83BAD120);
PPC_FUNC_IMPL(__imp__sub_83BAD120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27624
	ctx.r3.s64 = ctx.r11.s64 + -27624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD12C"))) PPC_WEAK_FUNC(sub_83BAD12C);
PPC_FUNC_IMPL(__imp__sub_83BAD12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD130"))) PPC_WEAK_FUNC(sub_83BAD130);
PPC_FUNC_IMPL(__imp__sub_83BAD130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27616
	ctx.r3.s64 = ctx.r11.s64 + -27616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD13C"))) PPC_WEAK_FUNC(sub_83BAD13C);
PPC_FUNC_IMPL(__imp__sub_83BAD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD140"))) PPC_WEAK_FUNC(sub_83BAD140);
PPC_FUNC_IMPL(__imp__sub_83BAD140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27608
	ctx.r3.s64 = ctx.r11.s64 + -27608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD14C"))) PPC_WEAK_FUNC(sub_83BAD14C);
PPC_FUNC_IMPL(__imp__sub_83BAD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD150"))) PPC_WEAK_FUNC(sub_83BAD150);
PPC_FUNC_IMPL(__imp__sub_83BAD150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27600
	ctx.r3.s64 = ctx.r11.s64 + -27600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD15C"))) PPC_WEAK_FUNC(sub_83BAD15C);
PPC_FUNC_IMPL(__imp__sub_83BAD15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD160"))) PPC_WEAK_FUNC(sub_83BAD160);
PPC_FUNC_IMPL(__imp__sub_83BAD160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27592
	ctx.r3.s64 = ctx.r11.s64 + -27592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD16C"))) PPC_WEAK_FUNC(sub_83BAD16C);
PPC_FUNC_IMPL(__imp__sub_83BAD16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD170"))) PPC_WEAK_FUNC(sub_83BAD170);
PPC_FUNC_IMPL(__imp__sub_83BAD170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD17C"))) PPC_WEAK_FUNC(sub_83BAD17C);
PPC_FUNC_IMPL(__imp__sub_83BAD17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD180"))) PPC_WEAK_FUNC(sub_83BAD180);
PPC_FUNC_IMPL(__imp__sub_83BAD180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27576
	ctx.r3.s64 = ctx.r11.s64 + -27576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD18C"))) PPC_WEAK_FUNC(sub_83BAD18C);
PPC_FUNC_IMPL(__imp__sub_83BAD18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD190"))) PPC_WEAK_FUNC(sub_83BAD190);
PPC_FUNC_IMPL(__imp__sub_83BAD190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27568
	ctx.r3.s64 = ctx.r11.s64 + -27568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD19C"))) PPC_WEAK_FUNC(sub_83BAD19C);
PPC_FUNC_IMPL(__imp__sub_83BAD19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD1A0"))) PPC_WEAK_FUNC(sub_83BAD1A0);
PPC_FUNC_IMPL(__imp__sub_83BAD1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27560
	ctx.r3.s64 = ctx.r11.s64 + -27560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD1AC"))) PPC_WEAK_FUNC(sub_83BAD1AC);
PPC_FUNC_IMPL(__imp__sub_83BAD1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD1B0"))) PPC_WEAK_FUNC(sub_83BAD1B0);
PPC_FUNC_IMPL(__imp__sub_83BAD1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD1BC"))) PPC_WEAK_FUNC(sub_83BAD1BC);
PPC_FUNC_IMPL(__imp__sub_83BAD1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD1C0"))) PPC_WEAK_FUNC(sub_83BAD1C0);
PPC_FUNC_IMPL(__imp__sub_83BAD1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27544
	ctx.r3.s64 = ctx.r11.s64 + -27544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD1CC"))) PPC_WEAK_FUNC(sub_83BAD1CC);
PPC_FUNC_IMPL(__imp__sub_83BAD1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD1D0"))) PPC_WEAK_FUNC(sub_83BAD1D0);
PPC_FUNC_IMPL(__imp__sub_83BAD1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27536
	ctx.r3.s64 = ctx.r11.s64 + -27536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD1DC"))) PPC_WEAK_FUNC(sub_83BAD1DC);
PPC_FUNC_IMPL(__imp__sub_83BAD1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD1E0"))) PPC_WEAK_FUNC(sub_83BAD1E0);
PPC_FUNC_IMPL(__imp__sub_83BAD1E0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-27992
	ctx.r3.s64 = ctx.r11.s64 + -27992;
	// bl 0x83523120
	ctx.lr = 0x83BAD1F8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27528
	ctx.r3.s64 = ctx.r10.s64 + -27528;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD204;
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

__attribute__((alias("__imp__sub_83BAD214"))) PPC_WEAK_FUNC(sub_83BAD214);
PPC_FUNC_IMPL(__imp__sub_83BAD214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD218"))) PPC_WEAK_FUNC(sub_83BAD218);
PPC_FUNC_IMPL(__imp__sub_83BAD218) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27976
	ctx.r7.s64 = ctx.r8.s64 + -27976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27976(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD240"))) PPC_WEAK_FUNC(sub_83BAD240);
PPC_FUNC_IMPL(__imp__sub_83BAD240) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-29608
	ctx.r6.s64 = ctx.r7.s64 + -29608;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29680(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29680);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27976);
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
	// std r9,-29608(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD288"))) PPC_WEAK_FUNC(sub_83BAD288);
PPC_FUNC_IMPL(__imp__sub_83BAD288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27512
	ctx.r3.s64 = ctx.r11.s64 + -27512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD294"))) PPC_WEAK_FUNC(sub_83BAD294);
PPC_FUNC_IMPL(__imp__sub_83BAD294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD298"))) PPC_WEAK_FUNC(sub_83BAD298);
PPC_FUNC_IMPL(__imp__sub_83BAD298) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-27968
	ctx.r3.s64 = ctx.r11.s64 + -27968;
	// bl 0x8259af80
	ctx.lr = 0x83BAD2B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27496
	ctx.r3.s64 = ctx.r10.s64 + -27496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD2BC;
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

__attribute__((alias("__imp__sub_83BAD2CC"))) PPC_WEAK_FUNC(sub_83BAD2CC);
PPC_FUNC_IMPL(__imp__sub_83BAD2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD2D0"))) PPC_WEAK_FUNC(sub_83BAD2D0);
PPC_FUNC_IMPL(__imp__sub_83BAD2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27988
	ctx.r11.s64 = ctx.r8.s64 + -27988;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-29632(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29632);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27504
	ctx.r3.s64 = ctx.r6.s64 + -27504;
	// stw r10,-27988(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD300"))) PPC_WEAK_FUNC(sub_83BAD300);
PPC_FUNC_IMPL(__imp__sub_83BAD300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r11,-29584
	ctx.r9.s64 = ctx.r11.s64 + -29584;
	// lfs f0,-29708(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// stfs f0,124(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 124, temp.u32);
	// stfs f0,180(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 180, temp.u32);
	// stfs f0,208(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD324"))) PPC_WEAK_FUNC(sub_83BAD324);
PPC_FUNC_IMPL(__imp__sub_83BAD324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD328"))) PPC_WEAK_FUNC(sub_83BAD328);
PPC_FUNC_IMPL(__imp__sub_83BAD328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD334"))) PPC_WEAK_FUNC(sub_83BAD334);
PPC_FUNC_IMPL(__imp__sub_83BAD334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD338"))) PPC_WEAK_FUNC(sub_83BAD338);
PPC_FUNC_IMPL(__imp__sub_83BAD338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27480
	ctx.r3.s64 = ctx.r11.s64 + -27480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD344"))) PPC_WEAK_FUNC(sub_83BAD344);
PPC_FUNC_IMPL(__imp__sub_83BAD344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD348"))) PPC_WEAK_FUNC(sub_83BAD348);
PPC_FUNC_IMPL(__imp__sub_83BAD348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD354"))) PPC_WEAK_FUNC(sub_83BAD354);
PPC_FUNC_IMPL(__imp__sub_83BAD354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD358"))) PPC_WEAK_FUNC(sub_83BAD358);
PPC_FUNC_IMPL(__imp__sub_83BAD358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27464
	ctx.r3.s64 = ctx.r11.s64 + -27464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD364"))) PPC_WEAK_FUNC(sub_83BAD364);
PPC_FUNC_IMPL(__imp__sub_83BAD364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD368"))) PPC_WEAK_FUNC(sub_83BAD368);
PPC_FUNC_IMPL(__imp__sub_83BAD368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27456
	ctx.r3.s64 = ctx.r11.s64 + -27456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD374"))) PPC_WEAK_FUNC(sub_83BAD374);
PPC_FUNC_IMPL(__imp__sub_83BAD374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD378"))) PPC_WEAK_FUNC(sub_83BAD378);
PPC_FUNC_IMPL(__imp__sub_83BAD378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27448
	ctx.r3.s64 = ctx.r11.s64 + -27448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD384"))) PPC_WEAK_FUNC(sub_83BAD384);
PPC_FUNC_IMPL(__imp__sub_83BAD384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD388"))) PPC_WEAK_FUNC(sub_83BAD388);
PPC_FUNC_IMPL(__imp__sub_83BAD388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27440
	ctx.r3.s64 = ctx.r11.s64 + -27440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD394"))) PPC_WEAK_FUNC(sub_83BAD394);
PPC_FUNC_IMPL(__imp__sub_83BAD394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD398"))) PPC_WEAK_FUNC(sub_83BAD398);
PPC_FUNC_IMPL(__imp__sub_83BAD398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD3A4"))) PPC_WEAK_FUNC(sub_83BAD3A4);
PPC_FUNC_IMPL(__imp__sub_83BAD3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD3A8"))) PPC_WEAK_FUNC(sub_83BAD3A8);
PPC_FUNC_IMPL(__imp__sub_83BAD3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27424
	ctx.r3.s64 = ctx.r11.s64 + -27424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD3B4"))) PPC_WEAK_FUNC(sub_83BAD3B4);
PPC_FUNC_IMPL(__imp__sub_83BAD3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD3B8"))) PPC_WEAK_FUNC(sub_83BAD3B8);
PPC_FUNC_IMPL(__imp__sub_83BAD3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27416
	ctx.r3.s64 = ctx.r11.s64 + -27416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD3C4"))) PPC_WEAK_FUNC(sub_83BAD3C4);
PPC_FUNC_IMPL(__imp__sub_83BAD3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD3C8"))) PPC_WEAK_FUNC(sub_83BAD3C8);
PPC_FUNC_IMPL(__imp__sub_83BAD3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27408
	ctx.r3.s64 = ctx.r11.s64 + -27408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD3D4"))) PPC_WEAK_FUNC(sub_83BAD3D4);
PPC_FUNC_IMPL(__imp__sub_83BAD3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD3D8"))) PPC_WEAK_FUNC(sub_83BAD3D8);
PPC_FUNC_IMPL(__imp__sub_83BAD3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27400
	ctx.r3.s64 = ctx.r11.s64 + -27400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD3E4"))) PPC_WEAK_FUNC(sub_83BAD3E4);
PPC_FUNC_IMPL(__imp__sub_83BAD3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD3E8"))) PPC_WEAK_FUNC(sub_83BAD3E8);
PPC_FUNC_IMPL(__imp__sub_83BAD3E8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-27624
	ctx.r3.s64 = ctx.r11.s64 + -27624;
	// bl 0x83523120
	ctx.lr = 0x83BAD400;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27392
	ctx.r3.s64 = ctx.r10.s64 + -27392;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD40C;
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

__attribute__((alias("__imp__sub_83BAD41C"))) PPC_WEAK_FUNC(sub_83BAD41C);
PPC_FUNC_IMPL(__imp__sub_83BAD41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD420"))) PPC_WEAK_FUNC(sub_83BAD420);
PPC_FUNC_IMPL(__imp__sub_83BAD420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27608
	ctx.r7.s64 = ctx.r8.s64 + -27608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD448"))) PPC_WEAK_FUNC(sub_83BAD448);
PPC_FUNC_IMPL(__imp__sub_83BAD448) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-29232
	ctx.r6.s64 = ctx.r7.s64 + -29232;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27608);
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
	// std r9,-29232(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29232, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD490"))) PPC_WEAK_FUNC(sub_83BAD490);
PPC_FUNC_IMPL(__imp__sub_83BAD490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD49C"))) PPC_WEAK_FUNC(sub_83BAD49C);
PPC_FUNC_IMPL(__imp__sub_83BAD49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD4A0"))) PPC_WEAK_FUNC(sub_83BAD4A0);
PPC_FUNC_IMPL(__imp__sub_83BAD4A0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-27600
	ctx.r3.s64 = ctx.r11.s64 + -27600;
	// bl 0x8259af80
	ctx.lr = 0x83BAD4B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27360
	ctx.r3.s64 = ctx.r10.s64 + -27360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD4C4;
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

__attribute__((alias("__imp__sub_83BAD4D4"))) PPC_WEAK_FUNC(sub_83BAD4D4);
PPC_FUNC_IMPL(__imp__sub_83BAD4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD4D8"))) PPC_WEAK_FUNC(sub_83BAD4D8);
PPC_FUNC_IMPL(__imp__sub_83BAD4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27620
	ctx.r11.s64 = ctx.r8.s64 + -27620;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-29256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29256);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27368
	ctx.r3.s64 = ctx.r6.s64 + -27368;
	// stw r10,-27620(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD508"))) PPC_WEAK_FUNC(sub_83BAD508);
PPC_FUNC_IMPL(__imp__sub_83BAD508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27352
	ctx.r3.s64 = ctx.r11.s64 + -27352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD514"))) PPC_WEAK_FUNC(sub_83BAD514);
PPC_FUNC_IMPL(__imp__sub_83BAD514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD518"))) PPC_WEAK_FUNC(sub_83BAD518);
PPC_FUNC_IMPL(__imp__sub_83BAD518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD524"))) PPC_WEAK_FUNC(sub_83BAD524);
PPC_FUNC_IMPL(__imp__sub_83BAD524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD528"))) PPC_WEAK_FUNC(sub_83BAD528);
PPC_FUNC_IMPL(__imp__sub_83BAD528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27336
	ctx.r3.s64 = ctx.r11.s64 + -27336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD534"))) PPC_WEAK_FUNC(sub_83BAD534);
PPC_FUNC_IMPL(__imp__sub_83BAD534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD538"))) PPC_WEAK_FUNC(sub_83BAD538);
PPC_FUNC_IMPL(__imp__sub_83BAD538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27328
	ctx.r3.s64 = ctx.r11.s64 + -27328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD544"))) PPC_WEAK_FUNC(sub_83BAD544);
PPC_FUNC_IMPL(__imp__sub_83BAD544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD548"))) PPC_WEAK_FUNC(sub_83BAD548);
PPC_FUNC_IMPL(__imp__sub_83BAD548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD554"))) PPC_WEAK_FUNC(sub_83BAD554);
PPC_FUNC_IMPL(__imp__sub_83BAD554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD558"))) PPC_WEAK_FUNC(sub_83BAD558);
PPC_FUNC_IMPL(__imp__sub_83BAD558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD564"))) PPC_WEAK_FUNC(sub_83BAD564);
PPC_FUNC_IMPL(__imp__sub_83BAD564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD568"))) PPC_WEAK_FUNC(sub_83BAD568);
PPC_FUNC_IMPL(__imp__sub_83BAD568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD574"))) PPC_WEAK_FUNC(sub_83BAD574);
PPC_FUNC_IMPL(__imp__sub_83BAD574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD578"))) PPC_WEAK_FUNC(sub_83BAD578);
PPC_FUNC_IMPL(__imp__sub_83BAD578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27296
	ctx.r3.s64 = ctx.r11.s64 + -27296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD584"))) PPC_WEAK_FUNC(sub_83BAD584);
PPC_FUNC_IMPL(__imp__sub_83BAD584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD588"))) PPC_WEAK_FUNC(sub_83BAD588);
PPC_FUNC_IMPL(__imp__sub_83BAD588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD594"))) PPC_WEAK_FUNC(sub_83BAD594);
PPC_FUNC_IMPL(__imp__sub_83BAD594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD598"))) PPC_WEAK_FUNC(sub_83BAD598);
PPC_FUNC_IMPL(__imp__sub_83BAD598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27280
	ctx.r3.s64 = ctx.r11.s64 + -27280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD5A4"))) PPC_WEAK_FUNC(sub_83BAD5A4);
PPC_FUNC_IMPL(__imp__sub_83BAD5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD5A8"))) PPC_WEAK_FUNC(sub_83BAD5A8);
PPC_FUNC_IMPL(__imp__sub_83BAD5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27272
	ctx.r3.s64 = ctx.r11.s64 + -27272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD5B4"))) PPC_WEAK_FUNC(sub_83BAD5B4);
PPC_FUNC_IMPL(__imp__sub_83BAD5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD5B8"))) PPC_WEAK_FUNC(sub_83BAD5B8);
PPC_FUNC_IMPL(__imp__sub_83BAD5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27264
	ctx.r3.s64 = ctx.r11.s64 + -27264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD5C4"))) PPC_WEAK_FUNC(sub_83BAD5C4);
PPC_FUNC_IMPL(__imp__sub_83BAD5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD5C8"))) PPC_WEAK_FUNC(sub_83BAD5C8);
PPC_FUNC_IMPL(__imp__sub_83BAD5C8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-27256
	ctx.r3.s64 = ctx.r11.s64 + -27256;
	// bl 0x83523120
	ctx.lr = 0x83BAD5E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27256
	ctx.r3.s64 = ctx.r10.s64 + -27256;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD5EC;
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

__attribute__((alias("__imp__sub_83BAD5FC"))) PPC_WEAK_FUNC(sub_83BAD5FC);
PPC_FUNC_IMPL(__imp__sub_83BAD5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD600"))) PPC_WEAK_FUNC(sub_83BAD600);
PPC_FUNC_IMPL(__imp__sub_83BAD600) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27240
	ctx.r7.s64 = ctx.r8.s64 + -27240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD628"))) PPC_WEAK_FUNC(sub_83BAD628);
PPC_FUNC_IMPL(__imp__sub_83BAD628) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-28728
	ctx.r6.s64 = ctx.r7.s64 + -28728;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28800(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28800);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27240);
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
	// std r9,-28728(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28728, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD670"))) PPC_WEAK_FUNC(sub_83BAD670);
PPC_FUNC_IMPL(__imp__sub_83BAD670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27240
	ctx.r3.s64 = ctx.r11.s64 + -27240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD67C"))) PPC_WEAK_FUNC(sub_83BAD67C);
PPC_FUNC_IMPL(__imp__sub_83BAD67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD680"))) PPC_WEAK_FUNC(sub_83BAD680);
PPC_FUNC_IMPL(__imp__sub_83BAD680) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-27232
	ctx.r3.s64 = ctx.r11.s64 + -27232;
	// bl 0x8259af80
	ctx.lr = 0x83BAD698;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27224
	ctx.r3.s64 = ctx.r10.s64 + -27224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD6A4;
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

__attribute__((alias("__imp__sub_83BAD6B4"))) PPC_WEAK_FUNC(sub_83BAD6B4);
PPC_FUNC_IMPL(__imp__sub_83BAD6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD6B8"))) PPC_WEAK_FUNC(sub_83BAD6B8);
PPC_FUNC_IMPL(__imp__sub_83BAD6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27252
	ctx.r11.s64 = ctx.r8.s64 + -27252;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28752(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28752);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27232
	ctx.r3.s64 = ctx.r6.s64 + -27232;
	// stw r10,-27252(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD6E8"))) PPC_WEAK_FUNC(sub_83BAD6E8);
PPC_FUNC_IMPL(__imp__sub_83BAD6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27216
	ctx.r3.s64 = ctx.r11.s64 + -27216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD6F4"))) PPC_WEAK_FUNC(sub_83BAD6F4);
PPC_FUNC_IMPL(__imp__sub_83BAD6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD6F8"))) PPC_WEAK_FUNC(sub_83BAD6F8);
PPC_FUNC_IMPL(__imp__sub_83BAD6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27208
	ctx.r3.s64 = ctx.r11.s64 + -27208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD704"))) PPC_WEAK_FUNC(sub_83BAD704);
PPC_FUNC_IMPL(__imp__sub_83BAD704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD708"))) PPC_WEAK_FUNC(sub_83BAD708);
PPC_FUNC_IMPL(__imp__sub_83BAD708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD714"))) PPC_WEAK_FUNC(sub_83BAD714);
PPC_FUNC_IMPL(__imp__sub_83BAD714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD718"))) PPC_WEAK_FUNC(sub_83BAD718);
PPC_FUNC_IMPL(__imp__sub_83BAD718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27192
	ctx.r3.s64 = ctx.r11.s64 + -27192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD724"))) PPC_WEAK_FUNC(sub_83BAD724);
PPC_FUNC_IMPL(__imp__sub_83BAD724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD728"))) PPC_WEAK_FUNC(sub_83BAD728);
PPC_FUNC_IMPL(__imp__sub_83BAD728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27184
	ctx.r3.s64 = ctx.r11.s64 + -27184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD734"))) PPC_WEAK_FUNC(sub_83BAD734);
PPC_FUNC_IMPL(__imp__sub_83BAD734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD738"))) PPC_WEAK_FUNC(sub_83BAD738);
PPC_FUNC_IMPL(__imp__sub_83BAD738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27176
	ctx.r3.s64 = ctx.r11.s64 + -27176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD744"))) PPC_WEAK_FUNC(sub_83BAD744);
PPC_FUNC_IMPL(__imp__sub_83BAD744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD748"))) PPC_WEAK_FUNC(sub_83BAD748);
PPC_FUNC_IMPL(__imp__sub_83BAD748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27168
	ctx.r3.s64 = ctx.r11.s64 + -27168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD754"))) PPC_WEAK_FUNC(sub_83BAD754);
PPC_FUNC_IMPL(__imp__sub_83BAD754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD758"))) PPC_WEAK_FUNC(sub_83BAD758);
PPC_FUNC_IMPL(__imp__sub_83BAD758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27160
	ctx.r3.s64 = ctx.r11.s64 + -27160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD764"))) PPC_WEAK_FUNC(sub_83BAD764);
PPC_FUNC_IMPL(__imp__sub_83BAD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD768"))) PPC_WEAK_FUNC(sub_83BAD768);
PPC_FUNC_IMPL(__imp__sub_83BAD768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27152
	ctx.r3.s64 = ctx.r11.s64 + -27152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD774"))) PPC_WEAK_FUNC(sub_83BAD774);
PPC_FUNC_IMPL(__imp__sub_83BAD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD778"))) PPC_WEAK_FUNC(sub_83BAD778);
PPC_FUNC_IMPL(__imp__sub_83BAD778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD784"))) PPC_WEAK_FUNC(sub_83BAD784);
PPC_FUNC_IMPL(__imp__sub_83BAD784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD788"))) PPC_WEAK_FUNC(sub_83BAD788);
PPC_FUNC_IMPL(__imp__sub_83BAD788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD794"))) PPC_WEAK_FUNC(sub_83BAD794);
PPC_FUNC_IMPL(__imp__sub_83BAD794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD798"))) PPC_WEAK_FUNC(sub_83BAD798);
PPC_FUNC_IMPL(__imp__sub_83BAD798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27128
	ctx.r3.s64 = ctx.r11.s64 + -27128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD7A4"))) PPC_WEAK_FUNC(sub_83BAD7A4);
PPC_FUNC_IMPL(__imp__sub_83BAD7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD7A8"))) PPC_WEAK_FUNC(sub_83BAD7A8);
PPC_FUNC_IMPL(__imp__sub_83BAD7A8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x83523120
	ctx.lr = 0x83BAD7C0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27120
	ctx.r3.s64 = ctx.r10.s64 + -27120;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD7CC;
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

__attribute__((alias("__imp__sub_83BAD7DC"))) PPC_WEAK_FUNC(sub_83BAD7DC);
PPC_FUNC_IMPL(__imp__sub_83BAD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD7E0"))) PPC_WEAK_FUNC(sub_83BAD7E0);
PPC_FUNC_IMPL(__imp__sub_83BAD7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26872
	ctx.r7.s64 = ctx.r8.s64 + -26872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26872(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD808"))) PPC_WEAK_FUNC(sub_83BAD808);
PPC_FUNC_IMPL(__imp__sub_83BAD808) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-28592
	ctx.r6.s64 = ctx.r7.s64 + -28592;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26872);
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
	// std r9,-28592(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28592, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD850"))) PPC_WEAK_FUNC(sub_83BAD850);
PPC_FUNC_IMPL(__imp__sub_83BAD850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27104
	ctx.r3.s64 = ctx.r11.s64 + -27104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD85C"))) PPC_WEAK_FUNC(sub_83BAD85C);
PPC_FUNC_IMPL(__imp__sub_83BAD85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD860"))) PPC_WEAK_FUNC(sub_83BAD860);
PPC_FUNC_IMPL(__imp__sub_83BAD860) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-26864
	ctx.r3.s64 = ctx.r11.s64 + -26864;
	// bl 0x8259af80
	ctx.lr = 0x83BAD878;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-27088
	ctx.r3.s64 = ctx.r10.s64 + -27088;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD884;
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

__attribute__((alias("__imp__sub_83BAD894"))) PPC_WEAK_FUNC(sub_83BAD894);
PPC_FUNC_IMPL(__imp__sub_83BAD894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD898"))) PPC_WEAK_FUNC(sub_83BAD898);
PPC_FUNC_IMPL(__imp__sub_83BAD898) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26884
	ctx.r11.s64 = ctx.r8.s64 + -26884;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28616(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28616);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27096
	ctx.r3.s64 = ctx.r6.s64 + -27096;
	// stw r10,-26884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD8C8"))) PPC_WEAK_FUNC(sub_83BAD8C8);
PPC_FUNC_IMPL(__imp__sub_83BAD8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27080
	ctx.r3.s64 = ctx.r11.s64 + -27080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD8D4"))) PPC_WEAK_FUNC(sub_83BAD8D4);
PPC_FUNC_IMPL(__imp__sub_83BAD8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD8D8"))) PPC_WEAK_FUNC(sub_83BAD8D8);
PPC_FUNC_IMPL(__imp__sub_83BAD8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27072
	ctx.r3.s64 = ctx.r11.s64 + -27072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD8E4"))) PPC_WEAK_FUNC(sub_83BAD8E4);
PPC_FUNC_IMPL(__imp__sub_83BAD8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD8E8"))) PPC_WEAK_FUNC(sub_83BAD8E8);
PPC_FUNC_IMPL(__imp__sub_83BAD8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27064
	ctx.r3.s64 = ctx.r11.s64 + -27064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD8F4"))) PPC_WEAK_FUNC(sub_83BAD8F4);
PPC_FUNC_IMPL(__imp__sub_83BAD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD8F8"))) PPC_WEAK_FUNC(sub_83BAD8F8);
PPC_FUNC_IMPL(__imp__sub_83BAD8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27056
	ctx.r3.s64 = ctx.r11.s64 + -27056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD904"))) PPC_WEAK_FUNC(sub_83BAD904);
PPC_FUNC_IMPL(__imp__sub_83BAD904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD908"))) PPC_WEAK_FUNC(sub_83BAD908);
PPC_FUNC_IMPL(__imp__sub_83BAD908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27048
	ctx.r3.s64 = ctx.r11.s64 + -27048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD914"))) PPC_WEAK_FUNC(sub_83BAD914);
PPC_FUNC_IMPL(__imp__sub_83BAD914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD918"))) PPC_WEAK_FUNC(sub_83BAD918);
PPC_FUNC_IMPL(__imp__sub_83BAD918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27040
	ctx.r3.s64 = ctx.r11.s64 + -27040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD924"))) PPC_WEAK_FUNC(sub_83BAD924);
PPC_FUNC_IMPL(__imp__sub_83BAD924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD928"))) PPC_WEAK_FUNC(sub_83BAD928);
PPC_FUNC_IMPL(__imp__sub_83BAD928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27032
	ctx.r3.s64 = ctx.r11.s64 + -27032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD934"))) PPC_WEAK_FUNC(sub_83BAD934);
PPC_FUNC_IMPL(__imp__sub_83BAD934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD938"))) PPC_WEAK_FUNC(sub_83BAD938);
PPC_FUNC_IMPL(__imp__sub_83BAD938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27024
	ctx.r3.s64 = ctx.r11.s64 + -27024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD944"))) PPC_WEAK_FUNC(sub_83BAD944);
PPC_FUNC_IMPL(__imp__sub_83BAD944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD948"))) PPC_WEAK_FUNC(sub_83BAD948);
PPC_FUNC_IMPL(__imp__sub_83BAD948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27016
	ctx.r3.s64 = ctx.r11.s64 + -27016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD954"))) PPC_WEAK_FUNC(sub_83BAD954);
PPC_FUNC_IMPL(__imp__sub_83BAD954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD958"))) PPC_WEAK_FUNC(sub_83BAD958);
PPC_FUNC_IMPL(__imp__sub_83BAD958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27008
	ctx.r3.s64 = ctx.r11.s64 + -27008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD964"))) PPC_WEAK_FUNC(sub_83BAD964);
PPC_FUNC_IMPL(__imp__sub_83BAD964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD968"))) PPC_WEAK_FUNC(sub_83BAD968);
PPC_FUNC_IMPL(__imp__sub_83BAD968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-27000
	ctx.r3.s64 = ctx.r11.s64 + -27000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD974"))) PPC_WEAK_FUNC(sub_83BAD974);
PPC_FUNC_IMPL(__imp__sub_83BAD974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD978"))) PPC_WEAK_FUNC(sub_83BAD978);
PPC_FUNC_IMPL(__imp__sub_83BAD978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26992
	ctx.r3.s64 = ctx.r11.s64 + -26992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAD984"))) PPC_WEAK_FUNC(sub_83BAD984);
PPC_FUNC_IMPL(__imp__sub_83BAD984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD988"))) PPC_WEAK_FUNC(sub_83BAD988);
PPC_FUNC_IMPL(__imp__sub_83BAD988) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// bl 0x83523120
	ctx.lr = 0x83BAD9A0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26984
	ctx.r3.s64 = ctx.r10.s64 + -26984;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAD9AC;
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

__attribute__((alias("__imp__sub_83BAD9BC"))) PPC_WEAK_FUNC(sub_83BAD9BC);
PPC_FUNC_IMPL(__imp__sub_83BAD9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAD9C0"))) PPC_WEAK_FUNC(sub_83BAD9C0);
PPC_FUNC_IMPL(__imp__sub_83BAD9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26504
	ctx.r7.s64 = ctx.r8.s64 + -26504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAD9E8"))) PPC_WEAK_FUNC(sub_83BAD9E8);
PPC_FUNC_IMPL(__imp__sub_83BAD9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-28456
	ctx.r6.s64 = ctx.r7.s64 + -28456;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28528(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28528);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26504);
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
	// std r9,-28456(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28456, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BADA30"))) PPC_WEAK_FUNC(sub_83BADA30);
PPC_FUNC_IMPL(__imp__sub_83BADA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26968
	ctx.r3.s64 = ctx.r11.s64 + -26968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADA3C"))) PPC_WEAK_FUNC(sub_83BADA3C);
PPC_FUNC_IMPL(__imp__sub_83BADA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADA40"))) PPC_WEAK_FUNC(sub_83BADA40);
PPC_FUNC_IMPL(__imp__sub_83BADA40) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-26496
	ctx.r3.s64 = ctx.r11.s64 + -26496;
	// bl 0x8259af80
	ctx.lr = 0x83BADA58;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26952
	ctx.r3.s64 = ctx.r10.s64 + -26952;
	// bl 0x831cdcc8
	ctx.lr = 0x83BADA64;
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

__attribute__((alias("__imp__sub_83BADA74"))) PPC_WEAK_FUNC(sub_83BADA74);
PPC_FUNC_IMPL(__imp__sub_83BADA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADA78"))) PPC_WEAK_FUNC(sub_83BADA78);
PPC_FUNC_IMPL(__imp__sub_83BADA78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26516
	ctx.r11.s64 = ctx.r8.s64 + -26516;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26960
	ctx.r3.s64 = ctx.r6.s64 + -26960;
	// stw r10,-26516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADAA8"))) PPC_WEAK_FUNC(sub_83BADAA8);
PPC_FUNC_IMPL(__imp__sub_83BADAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26944
	ctx.r3.s64 = ctx.r11.s64 + -26944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADAB4"))) PPC_WEAK_FUNC(sub_83BADAB4);
PPC_FUNC_IMPL(__imp__sub_83BADAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADAB8"))) PPC_WEAK_FUNC(sub_83BADAB8);
PPC_FUNC_IMPL(__imp__sub_83BADAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26936
	ctx.r3.s64 = ctx.r11.s64 + -26936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADAC4"))) PPC_WEAK_FUNC(sub_83BADAC4);
PPC_FUNC_IMPL(__imp__sub_83BADAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADAC8"))) PPC_WEAK_FUNC(sub_83BADAC8);
PPC_FUNC_IMPL(__imp__sub_83BADAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26928
	ctx.r3.s64 = ctx.r11.s64 + -26928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADAD4"))) PPC_WEAK_FUNC(sub_83BADAD4);
PPC_FUNC_IMPL(__imp__sub_83BADAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADAD8"))) PPC_WEAK_FUNC(sub_83BADAD8);
PPC_FUNC_IMPL(__imp__sub_83BADAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26920
	ctx.r3.s64 = ctx.r11.s64 + -26920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADAE4"))) PPC_WEAK_FUNC(sub_83BADAE4);
PPC_FUNC_IMPL(__imp__sub_83BADAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADAE8"))) PPC_WEAK_FUNC(sub_83BADAE8);
PPC_FUNC_IMPL(__imp__sub_83BADAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26912
	ctx.r3.s64 = ctx.r11.s64 + -26912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADAF4"))) PPC_WEAK_FUNC(sub_83BADAF4);
PPC_FUNC_IMPL(__imp__sub_83BADAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADAF8"))) PPC_WEAK_FUNC(sub_83BADAF8);
PPC_FUNC_IMPL(__imp__sub_83BADAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26904
	ctx.r3.s64 = ctx.r11.s64 + -26904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADB04"))) PPC_WEAK_FUNC(sub_83BADB04);
PPC_FUNC_IMPL(__imp__sub_83BADB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADB08"))) PPC_WEAK_FUNC(sub_83BADB08);
PPC_FUNC_IMPL(__imp__sub_83BADB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26896
	ctx.r3.s64 = ctx.r11.s64 + -26896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADB14"))) PPC_WEAK_FUNC(sub_83BADB14);
PPC_FUNC_IMPL(__imp__sub_83BADB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADB18"))) PPC_WEAK_FUNC(sub_83BADB18);
PPC_FUNC_IMPL(__imp__sub_83BADB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADB24"))) PPC_WEAK_FUNC(sub_83BADB24);
PPC_FUNC_IMPL(__imp__sub_83BADB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADB28"))) PPC_WEAK_FUNC(sub_83BADB28);
PPC_FUNC_IMPL(__imp__sub_83BADB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26880
	ctx.r3.s64 = ctx.r11.s64 + -26880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADB34"))) PPC_WEAK_FUNC(sub_83BADB34);
PPC_FUNC_IMPL(__imp__sub_83BADB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADB38"))) PPC_WEAK_FUNC(sub_83BADB38);
PPC_FUNC_IMPL(__imp__sub_83BADB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26872
	ctx.r3.s64 = ctx.r11.s64 + -26872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADB44"))) PPC_WEAK_FUNC(sub_83BADB44);
PPC_FUNC_IMPL(__imp__sub_83BADB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADB48"))) PPC_WEAK_FUNC(sub_83BADB48);
PPC_FUNC_IMPL(__imp__sub_83BADB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26864
	ctx.r3.s64 = ctx.r11.s64 + -26864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADB54"))) PPC_WEAK_FUNC(sub_83BADB54);
PPC_FUNC_IMPL(__imp__sub_83BADB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADB58"))) PPC_WEAK_FUNC(sub_83BADB58);
PPC_FUNC_IMPL(__imp__sub_83BADB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADB64"))) PPC_WEAK_FUNC(sub_83BADB64);
PPC_FUNC_IMPL(__imp__sub_83BADB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADB68"))) PPC_WEAK_FUNC(sub_83BADB68);
PPC_FUNC_IMPL(__imp__sub_83BADB68) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-26152
	ctx.r3.s64 = ctx.r11.s64 + -26152;
	// bl 0x83523120
	ctx.lr = 0x83BADB80;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26848
	ctx.r3.s64 = ctx.r10.s64 + -26848;
	// bl 0x831cdcc8
	ctx.lr = 0x83BADB8C;
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

__attribute__((alias("__imp__sub_83BADB9C"))) PPC_WEAK_FUNC(sub_83BADB9C);
PPC_FUNC_IMPL(__imp__sub_83BADB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADBA0"))) PPC_WEAK_FUNC(sub_83BADBA0);
PPC_FUNC_IMPL(__imp__sub_83BADBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26136
	ctx.r7.s64 = ctx.r8.s64 + -26136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26136(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BADBC8"))) PPC_WEAK_FUNC(sub_83BADBC8);
PPC_FUNC_IMPL(__imp__sub_83BADBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-28320
	ctx.r6.s64 = ctx.r7.s64 + -28320;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28392(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28392);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26136);
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
	// std r9,-28320(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28320, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BADC10"))) PPC_WEAK_FUNC(sub_83BADC10);
PPC_FUNC_IMPL(__imp__sub_83BADC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26832
	ctx.r3.s64 = ctx.r11.s64 + -26832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADC1C"))) PPC_WEAK_FUNC(sub_83BADC1C);
PPC_FUNC_IMPL(__imp__sub_83BADC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADC20"))) PPC_WEAK_FUNC(sub_83BADC20);
PPC_FUNC_IMPL(__imp__sub_83BADC20) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-26128
	ctx.r3.s64 = ctx.r11.s64 + -26128;
	// bl 0x8259af80
	ctx.lr = 0x83BADC38;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26816
	ctx.r3.s64 = ctx.r10.s64 + -26816;
	// bl 0x831cdcc8
	ctx.lr = 0x83BADC44;
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

__attribute__((alias("__imp__sub_83BADC54"))) PPC_WEAK_FUNC(sub_83BADC54);
PPC_FUNC_IMPL(__imp__sub_83BADC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADC58"))) PPC_WEAK_FUNC(sub_83BADC58);
PPC_FUNC_IMPL(__imp__sub_83BADC58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26148
	ctx.r11.s64 = ctx.r8.s64 + -26148;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28344);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26824
	ctx.r3.s64 = ctx.r6.s64 + -26824;
	// stw r10,-26148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADC88"))) PPC_WEAK_FUNC(sub_83BADC88);
PPC_FUNC_IMPL(__imp__sub_83BADC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26808
	ctx.r3.s64 = ctx.r11.s64 + -26808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADC94"))) PPC_WEAK_FUNC(sub_83BADC94);
PPC_FUNC_IMPL(__imp__sub_83BADC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADC98"))) PPC_WEAK_FUNC(sub_83BADC98);
PPC_FUNC_IMPL(__imp__sub_83BADC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26800
	ctx.r3.s64 = ctx.r11.s64 + -26800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADCA4"))) PPC_WEAK_FUNC(sub_83BADCA4);
PPC_FUNC_IMPL(__imp__sub_83BADCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADCA8"))) PPC_WEAK_FUNC(sub_83BADCA8);
PPC_FUNC_IMPL(__imp__sub_83BADCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26792
	ctx.r3.s64 = ctx.r11.s64 + -26792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADCB4"))) PPC_WEAK_FUNC(sub_83BADCB4);
PPC_FUNC_IMPL(__imp__sub_83BADCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADCB8"))) PPC_WEAK_FUNC(sub_83BADCB8);
PPC_FUNC_IMPL(__imp__sub_83BADCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26784
	ctx.r3.s64 = ctx.r11.s64 + -26784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADCC4"))) PPC_WEAK_FUNC(sub_83BADCC4);
PPC_FUNC_IMPL(__imp__sub_83BADCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADCC8"))) PPC_WEAK_FUNC(sub_83BADCC8);
PPC_FUNC_IMPL(__imp__sub_83BADCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26776
	ctx.r3.s64 = ctx.r11.s64 + -26776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADCD4"))) PPC_WEAK_FUNC(sub_83BADCD4);
PPC_FUNC_IMPL(__imp__sub_83BADCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADCD8"))) PPC_WEAK_FUNC(sub_83BADCD8);
PPC_FUNC_IMPL(__imp__sub_83BADCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26768
	ctx.r3.s64 = ctx.r11.s64 + -26768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADCE4"))) PPC_WEAK_FUNC(sub_83BADCE4);
PPC_FUNC_IMPL(__imp__sub_83BADCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADCE8"))) PPC_WEAK_FUNC(sub_83BADCE8);
PPC_FUNC_IMPL(__imp__sub_83BADCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26760
	ctx.r3.s64 = ctx.r11.s64 + -26760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADCF4"))) PPC_WEAK_FUNC(sub_83BADCF4);
PPC_FUNC_IMPL(__imp__sub_83BADCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADCF8"))) PPC_WEAK_FUNC(sub_83BADCF8);
PPC_FUNC_IMPL(__imp__sub_83BADCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26752
	ctx.r3.s64 = ctx.r11.s64 + -26752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADD04"))) PPC_WEAK_FUNC(sub_83BADD04);
PPC_FUNC_IMPL(__imp__sub_83BADD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADD08"))) PPC_WEAK_FUNC(sub_83BADD08);
PPC_FUNC_IMPL(__imp__sub_83BADD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26744
	ctx.r3.s64 = ctx.r11.s64 + -26744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADD14"))) PPC_WEAK_FUNC(sub_83BADD14);
PPC_FUNC_IMPL(__imp__sub_83BADD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADD18"))) PPC_WEAK_FUNC(sub_83BADD18);
PPC_FUNC_IMPL(__imp__sub_83BADD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26736
	ctx.r3.s64 = ctx.r11.s64 + -26736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADD24"))) PPC_WEAK_FUNC(sub_83BADD24);
PPC_FUNC_IMPL(__imp__sub_83BADD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADD28"))) PPC_WEAK_FUNC(sub_83BADD28);
PPC_FUNC_IMPL(__imp__sub_83BADD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26728
	ctx.r3.s64 = ctx.r11.s64 + -26728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADD34"))) PPC_WEAK_FUNC(sub_83BADD34);
PPC_FUNC_IMPL(__imp__sub_83BADD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADD38"))) PPC_WEAK_FUNC(sub_83BADD38);
PPC_FUNC_IMPL(__imp__sub_83BADD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26720
	ctx.r3.s64 = ctx.r11.s64 + -26720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADD44"))) PPC_WEAK_FUNC(sub_83BADD44);
PPC_FUNC_IMPL(__imp__sub_83BADD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADD48"))) PPC_WEAK_FUNC(sub_83BADD48);
PPC_FUNC_IMPL(__imp__sub_83BADD48) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-25784
	ctx.r3.s64 = ctx.r11.s64 + -25784;
	// bl 0x83523120
	ctx.lr = 0x83BADD60;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26712
	ctx.r3.s64 = ctx.r10.s64 + -26712;
	// bl 0x831cdcc8
	ctx.lr = 0x83BADD6C;
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

__attribute__((alias("__imp__sub_83BADD7C"))) PPC_WEAK_FUNC(sub_83BADD7C);
PPC_FUNC_IMPL(__imp__sub_83BADD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADD80"))) PPC_WEAK_FUNC(sub_83BADD80);
PPC_FUNC_IMPL(__imp__sub_83BADD80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25768
	ctx.r7.s64 = ctx.r8.s64 + -25768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BADDA8"))) PPC_WEAK_FUNC(sub_83BADDA8);
PPC_FUNC_IMPL(__imp__sub_83BADDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-28192
	ctx.r6.s64 = ctx.r7.s64 + -28192;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25768);
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
	// std r9,-28192(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28192, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BADDF0"))) PPC_WEAK_FUNC(sub_83BADDF0);
PPC_FUNC_IMPL(__imp__sub_83BADDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADDFC"))) PPC_WEAK_FUNC(sub_83BADDFC);
PPC_FUNC_IMPL(__imp__sub_83BADDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADE00"))) PPC_WEAK_FUNC(sub_83BADE00);
PPC_FUNC_IMPL(__imp__sub_83BADE00) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-25760
	ctx.r3.s64 = ctx.r11.s64 + -25760;
	// bl 0x8259af80
	ctx.lr = 0x83BADE18;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26680
	ctx.r3.s64 = ctx.r10.s64 + -26680;
	// bl 0x831cdcc8
	ctx.lr = 0x83BADE24;
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

__attribute__((alias("__imp__sub_83BADE34"))) PPC_WEAK_FUNC(sub_83BADE34);
PPC_FUNC_IMPL(__imp__sub_83BADE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADE38"))) PPC_WEAK_FUNC(sub_83BADE38);
PPC_FUNC_IMPL(__imp__sub_83BADE38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25780
	ctx.r11.s64 = ctx.r8.s64 + -25780;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28216);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26688
	ctx.r3.s64 = ctx.r6.s64 + -26688;
	// stw r10,-25780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADE68"))) PPC_WEAK_FUNC(sub_83BADE68);
PPC_FUNC_IMPL(__imp__sub_83BADE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26672
	ctx.r3.s64 = ctx.r11.s64 + -26672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADE74"))) PPC_WEAK_FUNC(sub_83BADE74);
PPC_FUNC_IMPL(__imp__sub_83BADE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADE78"))) PPC_WEAK_FUNC(sub_83BADE78);
PPC_FUNC_IMPL(__imp__sub_83BADE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26664
	ctx.r3.s64 = ctx.r11.s64 + -26664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADE84"))) PPC_WEAK_FUNC(sub_83BADE84);
PPC_FUNC_IMPL(__imp__sub_83BADE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADE88"))) PPC_WEAK_FUNC(sub_83BADE88);
PPC_FUNC_IMPL(__imp__sub_83BADE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26656
	ctx.r3.s64 = ctx.r11.s64 + -26656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADE94"))) PPC_WEAK_FUNC(sub_83BADE94);
PPC_FUNC_IMPL(__imp__sub_83BADE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADE98"))) PPC_WEAK_FUNC(sub_83BADE98);
PPC_FUNC_IMPL(__imp__sub_83BADE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26648
	ctx.r3.s64 = ctx.r11.s64 + -26648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADEA4"))) PPC_WEAK_FUNC(sub_83BADEA4);
PPC_FUNC_IMPL(__imp__sub_83BADEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADEA8"))) PPC_WEAK_FUNC(sub_83BADEA8);
PPC_FUNC_IMPL(__imp__sub_83BADEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26640
	ctx.r3.s64 = ctx.r11.s64 + -26640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADEB4"))) PPC_WEAK_FUNC(sub_83BADEB4);
PPC_FUNC_IMPL(__imp__sub_83BADEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADEB8"))) PPC_WEAK_FUNC(sub_83BADEB8);
PPC_FUNC_IMPL(__imp__sub_83BADEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26632
	ctx.r3.s64 = ctx.r11.s64 + -26632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADEC4"))) PPC_WEAK_FUNC(sub_83BADEC4);
PPC_FUNC_IMPL(__imp__sub_83BADEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADEC8"))) PPC_WEAK_FUNC(sub_83BADEC8);
PPC_FUNC_IMPL(__imp__sub_83BADEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26624
	ctx.r3.s64 = ctx.r11.s64 + -26624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADED4"))) PPC_WEAK_FUNC(sub_83BADED4);
PPC_FUNC_IMPL(__imp__sub_83BADED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADED8"))) PPC_WEAK_FUNC(sub_83BADED8);
PPC_FUNC_IMPL(__imp__sub_83BADED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26616
	ctx.r3.s64 = ctx.r11.s64 + -26616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

