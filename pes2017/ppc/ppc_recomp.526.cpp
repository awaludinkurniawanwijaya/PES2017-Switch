#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B6F1C0"))) PPC_WEAK_FUNC(sub_83B6F1C0);
PPC_FUNC_IMPL(__imp__sub_83B6F1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,10928
	ctx.r3.s64 = ctx.r11.s64 + 10928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F1CC"))) PPC_WEAK_FUNC(sub_83B6F1CC);
PPC_FUNC_IMPL(__imp__sub_83B6F1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F1D0"))) PPC_WEAK_FUNC(sub_83B6F1D0);
PPC_FUNC_IMPL(__imp__sub_83B6F1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,11040
	ctx.r3.s64 = ctx.r11.s64 + 11040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F1DC"))) PPC_WEAK_FUNC(sub_83B6F1DC);
PPC_FUNC_IMPL(__imp__sub_83B6F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F1E0"))) PPC_WEAK_FUNC(sub_83B6F1E0);
PPC_FUNC_IMPL(__imp__sub_83B6F1E0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d2828
	ctx.lr = 0x83B6F1F4;
	sub_831D2828(ctx, base);
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r9,-22200
	ctx.r10.s64 = ctx.r9.s64 + -22200;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r11,-22200(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22200, ctx.r11.u32);
	// bl 0x8257fa88
	ctx.lr = 0x83B6F20C;
	sub_8257FA88(ctx, base);
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,11080
	ctx.r3.s64 = ctx.r8.s64 + 11080;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F218;
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

__attribute__((alias("__imp__sub_83B6F228"))) PPC_WEAK_FUNC(sub_83B6F228);
PPC_FUNC_IMPL(__imp__sub_83B6F228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82528968
	ctx.lr = 0x83B6F238;
	sub_82528968(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,-4412
	ctx.r6.s64 = ctx.r10.s64 + -4412;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r6,-8
	ctx.r9.s64 = ctx.r6.s64 + -8;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r6,-12
	ctx.r8.s64 = ctx.r6.s64 + -12;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x8248e6d0
	ctx.lr = 0x83B6F288;
	sub_8248E6D0(ctx, base);
	// lis r7,-31766
	ctx.r7.s64 = -2081816576;
	// stb r3,-19931(r7)
	PPC_STORE_U8(ctx.r7.u32 + -19931, ctx.r3.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6F2A0"))) PPC_WEAK_FUNC(sub_83B6F2A0);
PPC_FUNC_IMPL(__imp__sub_83B6F2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82528968
	ctx.lr = 0x83B6F2B4;
	sub_82528968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82528a28
	ctx.lr = 0x83B6F2BC;
	sub_82528A28(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r10,-4376
	ctx.r6.s64 = ctx.r10.s64 + -4376;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r9,r6,-12
	ctx.r9.s64 = ctx.r6.s64 + -12;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r8,r6,-16
	ctx.r8.s64 = ctx.r6.s64 + -16;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8248e6d0
	ctx.lr = 0x83B6F30C;
	sub_8248E6D0(ctx, base);
	// lis r7,-31766
	ctx.r7.s64 = -2081816576;
	// stb r3,-19930(r7)
	PPC_STORE_U8(ctx.r7.u32 + -19930, ctx.r3.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6F328"))) PPC_WEAK_FUNC(sub_83B6F328);
PPC_FUNC_IMPL(__imp__sub_83B6F328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82528a28
	ctx.lr = 0x83B6F338;
	sub_82528A28(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,-4348
	ctx.r6.s64 = ctx.r10.s64 + -4348;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r6,-12
	ctx.r9.s64 = ctx.r6.s64 + -12;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r6,-16
	ctx.r8.s64 = ctx.r6.s64 + -16;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x8248e6d0
	ctx.lr = 0x83B6F388;
	sub_8248E6D0(ctx, base);
	// lis r7,-31766
	ctx.r7.s64 = -2081816576;
	// stb r3,-19932(r7)
	PPC_STORE_U8(ctx.r7.u32 + -19932, ctx.r3.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6F3A0"))) PPC_WEAK_FUNC(sub_83B6F3A0);
PPC_FUNC_IMPL(__imp__sub_83B6F3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,-3696
	ctx.r4.s64 = ctx.r10.s64 + -3696;
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// lfs f2,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r4,-12
	ctx.r5.s64 = ctx.r4.s64 + -12;
	// addi r3,r8,-19928
	ctx.r3.s64 = ctx.r8.s64 + -19928;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F3CC"))) PPC_WEAK_FUNC(sub_83B6F3CC);
PPC_FUNC_IMPL(__imp__sub_83B6F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F3D0"))) PPC_WEAK_FUNC(sub_83B6F3D0);
PPC_FUNC_IMPL(__imp__sub_83B6F3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,-3584
	ctx.r4.s64 = ctx.r10.s64 + -3584;
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// lfs f2,-3404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3404);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r4,-12
	ctx.r5.s64 = ctx.r4.s64 + -12;
	// addi r3,r8,-19904
	ctx.r3.s64 = ctx.r8.s64 + -19904;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F3FC"))) PPC_WEAK_FUNC(sub_83B6F3FC);
PPC_FUNC_IMPL(__imp__sub_83B6F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F400"))) PPC_WEAK_FUNC(sub_83B6F400);
PPC_FUNC_IMPL(__imp__sub_83B6F400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,-3556
	ctx.r4.s64 = ctx.r10.s64 + -3556;
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// lfs f2,-3400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r4,-12
	ctx.r5.s64 = ctx.r4.s64 + -12;
	// addi r3,r8,-19916
	ctx.r3.s64 = ctx.r8.s64 + -19916;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F42C"))) PPC_WEAK_FUNC(sub_83B6F42C);
PPC_FUNC_IMPL(__imp__sub_83B6F42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F430"))) PPC_WEAK_FUNC(sub_83B6F430);
PPC_FUNC_IMPL(__imp__sub_83B6F430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,-3528
	ctx.r4.s64 = ctx.r10.s64 + -3528;
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// lfs f2,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r4,-12
	ctx.r5.s64 = ctx.r4.s64 + -12;
	// addi r3,r8,-19892
	ctx.r3.s64 = ctx.r8.s64 + -19892;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F45C"))) PPC_WEAK_FUNC(sub_83B6F45C);
PPC_FUNC_IMPL(__imp__sub_83B6F45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F460"))) PPC_WEAK_FUNC(sub_83B6F460);
PPC_FUNC_IMPL(__imp__sub_83B6F460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-3336
	ctx.r4.s64 = ctx.r11.s64 + -3336;
	// lis r7,-31766
	ctx.r7.s64 = -2081816576;
	// lfs f3,-3404(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3404);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3216(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3216);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-19876
	ctx.r3.s64 = ctx.r7.s64 + -19876;
	// lfs f1,-3220(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3220);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F490"))) PPC_WEAK_FUNC(sub_83B6F490);
PPC_FUNC_IMPL(__imp__sub_83B6F490) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82534518
	ctx.lr = 0x83B6F4A4;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-19864
	ctx.r9.s64 = ctx.r10.s64 + -19864;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,11240
	ctx.r3.s64 = ctx.r8.s64 + 11240;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F4E8;
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

__attribute__((alias("__imp__sub_83B6F4F8"))) PPC_WEAK_FUNC(sub_83B6F4F8);
PPC_FUNC_IMPL(__imp__sub_83B6F4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,11312
	ctx.r3.s64 = ctx.r11.s64 + 11312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F504"))) PPC_WEAK_FUNC(sub_83B6F504);
PPC_FUNC_IMPL(__imp__sub_83B6F504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F508"))) PPC_WEAK_FUNC(sub_83B6F508);
PPC_FUNC_IMPL(__imp__sub_83B6F508) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-19824
	ctx.r3.s64 = ctx.r11.s64 + -19824;
	// bl 0x83b2d9f0
	ctx.lr = 0x83B6F524;
	sub_83B2D9F0(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,11320
	ctx.r3.s64 = ctx.r10.s64 + 11320;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F530;
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

__attribute__((alias("__imp__sub_83B6F540"))) PPC_WEAK_FUNC(sub_83B6F540);
PPC_FUNC_IMPL(__imp__sub_83B6F540) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r5,r11,-2620
	ctx.r5.s64 = ctx.r11.s64 + -2620;
	// addi r3,r10,-19784
	ctx.r3.s64 = ctx.r10.s64 + -19784;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83B6F564;
	sub_8241F1E8(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,11336
	ctx.r3.s64 = ctx.r9.s64 + 11336;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F570;
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

__attribute__((alias("__imp__sub_83B6F580"))) PPC_WEAK_FUNC(sub_83B6F580);
PPC_FUNC_IMPL(__imp__sub_83B6F580) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r5,r11,-2616
	ctx.r5.s64 = ctx.r11.s64 + -2616;
	// addi r3,r10,-19752
	ctx.r3.s64 = ctx.r10.s64 + -19752;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83B6F5A4;
	sub_8241F1E8(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,11352
	ctx.r3.s64 = ctx.r9.s64 + 11352;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F5B0;
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

__attribute__((alias("__imp__sub_83B6F5C0"))) PPC_WEAK_FUNC(sub_83B6F5C0);
PPC_FUNC_IMPL(__imp__sub_83B6F5C0) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,-19784
	ctx.r4.s64 = ctx.r11.s64 + -19784;
	// addi r3,r10,-19800
	ctx.r3.s64 = ctx.r10.s64 + -19800;
	// bl 0x8241f130
	ctx.lr = 0x83B6F5E0;
	sub_8241F130(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,11368
	ctx.r3.s64 = ctx.r9.s64 + 11368;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F5EC;
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

__attribute__((alias("__imp__sub_83B6F5FC"))) PPC_WEAK_FUNC(sub_83B6F5FC);
PPC_FUNC_IMPL(__imp__sub_83B6F5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F600"))) PPC_WEAK_FUNC(sub_83B6F600);
PPC_FUNC_IMPL(__imp__sub_83B6F600) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,-19752
	ctx.r4.s64 = ctx.r11.s64 + -19752;
	// addi r3,r10,-19768
	ctx.r3.s64 = ctx.r10.s64 + -19768;
	// bl 0x8241f130
	ctx.lr = 0x83B6F620;
	sub_8241F130(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,11384
	ctx.r3.s64 = ctx.r9.s64 + 11384;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F62C;
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

__attribute__((alias("__imp__sub_83B6F63C"))) PPC_WEAK_FUNC(sub_83B6F63C);
PPC_FUNC_IMPL(__imp__sub_83B6F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F640"))) PPC_WEAK_FUNC(sub_83B6F640);
PPC_FUNC_IMPL(__imp__sub_83B6F640) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82534518
	ctx.lr = 0x83B6F654;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-19580
	ctx.r9.s64 = ctx.r10.s64 + -19580;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,11504
	ctx.r3.s64 = ctx.r8.s64 + 11504;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F698;
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

__attribute__((alias("__imp__sub_83B6F6A8"))) PPC_WEAK_FUNC(sub_83B6F6A8);
PPC_FUNC_IMPL(__imp__sub_83B6F6A8) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-19552
	ctx.r3.s64 = ctx.r11.s64 + -19552;
	// bl 0x825359d8
	ctx.lr = 0x83B6F6C4;
	sub_825359D8(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,11576
	ctx.r3.s64 = ctx.r10.s64 + 11576;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F6D0;
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

__attribute__((alias("__imp__sub_83B6F6E0"))) PPC_WEAK_FUNC(sub_83B6F6E0);
PPC_FUNC_IMPL(__imp__sub_83B6F6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-19400
	ctx.r3.s64 = ctx.r11.s64 + -19400;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F6F0"))) PPC_WEAK_FUNC(sub_83B6F6F0);
PPC_FUNC_IMPL(__imp__sub_83B6F6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,12008
	ctx.r3.s64 = ctx.r11.s64 + 12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6F6FC"))) PPC_WEAK_FUNC(sub_83B6F6FC);
PPC_FUNC_IMPL(__imp__sub_83B6F6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F700"))) PPC_WEAK_FUNC(sub_83B6F700);
PPC_FUNC_IMPL(__imp__sub_83B6F700) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,12844
	ctx.r4.s64 = ctx.r11.s64 + 12844;
	// addi r3,r10,-19176
	ctx.r3.s64 = ctx.r10.s64 + -19176;
	// bl 0x82576848
	ctx.lr = 0x83B6F720;
	sub_82576848(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,11920
	ctx.r3.s64 = ctx.r9.s64 + 11920;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F72C;
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

__attribute__((alias("__imp__sub_83B6F73C"))) PPC_WEAK_FUNC(sub_83B6F73C);
PPC_FUNC_IMPL(__imp__sub_83B6F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F740"))) PPC_WEAK_FUNC(sub_83B6F740);
PPC_FUNC_IMPL(__imp__sub_83B6F740) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82534518
	ctx.lr = 0x83B6F754;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18888
	ctx.r9.s64 = ctx.r10.s64 + -18888;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,12432
	ctx.r3.s64 = ctx.r8.s64 + 12432;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F798;
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

__attribute__((alias("__imp__sub_83B6F7A8"))) PPC_WEAK_FUNC(sub_83B6F7A8);
PPC_FUNC_IMPL(__imp__sub_83B6F7A8) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82534518
	ctx.lr = 0x83B6F7BC;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18980
	ctx.r9.s64 = ctx.r10.s64 + -18980;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,12216
	ctx.r3.s64 = ctx.r8.s64 + 12216;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F800;
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

__attribute__((alias("__imp__sub_83B6F810"))) PPC_WEAK_FUNC(sub_83B6F810);
PPC_FUNC_IMPL(__imp__sub_83B6F810) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82534518
	ctx.lr = 0x83B6F824;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18904
	ctx.r9.s64 = ctx.r10.s64 + -18904;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,12288
	ctx.r3.s64 = ctx.r8.s64 + 12288;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F868;
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

__attribute__((alias("__imp__sub_83B6F878"))) PPC_WEAK_FUNC(sub_83B6F878);
PPC_FUNC_IMPL(__imp__sub_83B6F878) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82534518
	ctx.lr = 0x83B6F88C;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18920
	ctx.r9.s64 = ctx.r10.s64 + -18920;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,12360
	ctx.r3.s64 = ctx.r8.s64 + 12360;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F8D0;
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

__attribute__((alias("__imp__sub_83B6F8E0"))) PPC_WEAK_FUNC(sub_83B6F8E0);
PPC_FUNC_IMPL(__imp__sub_83B6F8E0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,13772
	ctx.r4.s64 = ctx.r11.s64 + 13772;
	// addi r3,r10,-18960
	ctx.r3.s64 = ctx.r10.s64 + -18960;
	// bl 0x82576848
	ctx.lr = 0x83B6F900;
	sub_82576848(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,12128
	ctx.r3.s64 = ctx.r9.s64 + 12128;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F90C;
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

__attribute__((alias("__imp__sub_83B6F91C"))) PPC_WEAK_FUNC(sub_83B6F91C);
PPC_FUNC_IMPL(__imp__sub_83B6F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F920"))) PPC_WEAK_FUNC(sub_83B6F920);
PPC_FUNC_IMPL(__imp__sub_83B6F920) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// bl 0x825766d0
	ctx.lr = 0x83B6F938;
	sub_825766D0(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,12504
	ctx.r3.s64 = ctx.r10.s64 + 12504;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F944;
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

__attribute__((alias("__imp__sub_83B6F954"))) PPC_WEAK_FUNC(sub_83B6F954);
PPC_FUNC_IMPL(__imp__sub_83B6F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F958"))) PPC_WEAK_FUNC(sub_83B6F958);
PPC_FUNC_IMPL(__imp__sub_83B6F958) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82534518
	ctx.lr = 0x83B6F96C;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18792
	ctx.r9.s64 = ctx.r10.s64 + -18792;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,12752
	ctx.r3.s64 = ctx.r8.s64 + 12752;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F9B0;
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

__attribute__((alias("__imp__sub_83B6F9C0"))) PPC_WEAK_FUNC(sub_83B6F9C0);
PPC_FUNC_IMPL(__imp__sub_83B6F9C0) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-18776
	ctx.r3.s64 = ctx.r11.s64 + -18776;
	// bl 0x825766d0
	ctx.lr = 0x83B6F9D8;
	sub_825766D0(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,12592
	ctx.r3.s64 = ctx.r10.s64 + 12592;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6F9E4;
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

__attribute__((alias("__imp__sub_83B6F9F4"))) PPC_WEAK_FUNC(sub_83B6F9F4);
PPC_FUNC_IMPL(__imp__sub_83B6F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6F9F8"))) PPC_WEAK_FUNC(sub_83B6F9F8);
PPC_FUNC_IMPL(__imp__sub_83B6F9F8) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82534518
	ctx.lr = 0x83B6FA0C;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18868
	ctx.r9.s64 = ctx.r10.s64 + -18868;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,12680
	ctx.r3.s64 = ctx.r8.s64 + 12680;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,97(r11)
	PPC_STORE_U8(ctx.r11.u32 + 97, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FA50;
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

__attribute__((alias("__imp__sub_83B6FA60"))) PPC_WEAK_FUNC(sub_83B6FA60);
PPC_FUNC_IMPL(__imp__sub_83B6FA60) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82534518
	ctx.lr = 0x83B6FA74;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18852
	ctx.r9.s64 = ctx.r10.s64 + -18852;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,12824
	ctx.r3.s64 = ctx.r8.s64 + 12824;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FAB8;
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

__attribute__((alias("__imp__sub_83B6FAC8"))) PPC_WEAK_FUNC(sub_83B6FAC8);
PPC_FUNC_IMPL(__imp__sub_83B6FAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,12896
	ctx.r3.s64 = ctx.r11.s64 + 12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6FAD4"))) PPC_WEAK_FUNC(sub_83B6FAD4);
PPC_FUNC_IMPL(__imp__sub_83B6FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FAD8"))) PPC_WEAK_FUNC(sub_83B6FAD8);
PPC_FUNC_IMPL(__imp__sub_83B6FAD8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,13876
	ctx.r4.s64 = ctx.r11.s64 + 13876;
	// addi r3,r10,-18312
	ctx.r3.s64 = ctx.r10.s64 + -18312;
	// bl 0x82576848
	ctx.lr = 0x83B6FAF8;
	sub_82576848(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,13000
	ctx.r3.s64 = ctx.r9.s64 + 13000;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FB04;
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

__attribute__((alias("__imp__sub_83B6FB14"))) PPC_WEAK_FUNC(sub_83B6FB14);
PPC_FUNC_IMPL(__imp__sub_83B6FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FB18"))) PPC_WEAK_FUNC(sub_83B6FB18);
PPC_FUNC_IMPL(__imp__sub_83B6FB18) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,13888
	ctx.r4.s64 = ctx.r11.s64 + 13888;
	// addi r3,r10,-18472
	ctx.r3.s64 = ctx.r10.s64 + -18472;
	// bl 0x82576848
	ctx.lr = 0x83B6FB38;
	sub_82576848(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,13088
	ctx.r3.s64 = ctx.r9.s64 + 13088;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FB44;
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

__attribute__((alias("__imp__sub_83B6FB54"))) PPC_WEAK_FUNC(sub_83B6FB54);
PPC_FUNC_IMPL(__imp__sub_83B6FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FB58"))) PPC_WEAK_FUNC(sub_83B6FB58);
PPC_FUNC_IMPL(__imp__sub_83B6FB58) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,13896
	ctx.r4.s64 = ctx.r11.s64 + 13896;
	// addi r3,r10,-18272
	ctx.r3.s64 = ctx.r10.s64 + -18272;
	// bl 0x82576848
	ctx.lr = 0x83B6FB78;
	sub_82576848(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,13176
	ctx.r3.s64 = ctx.r9.s64 + 13176;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FB84;
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

__attribute__((alias("__imp__sub_83B6FB94"))) PPC_WEAK_FUNC(sub_83B6FB94);
PPC_FUNC_IMPL(__imp__sub_83B6FB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FB98"))) PPC_WEAK_FUNC(sub_83B6FB98);
PPC_FUNC_IMPL(__imp__sub_83B6FB98) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,13904
	ctx.r4.s64 = ctx.r11.s64 + 13904;
	// addi r3,r10,-18392
	ctx.r3.s64 = ctx.r10.s64 + -18392;
	// bl 0x82576848
	ctx.lr = 0x83B6FBB8;
	sub_82576848(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,13264
	ctx.r3.s64 = ctx.r9.s64 + 13264;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FBC4;
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

__attribute__((alias("__imp__sub_83B6FBD4"))) PPC_WEAK_FUNC(sub_83B6FBD4);
PPC_FUNC_IMPL(__imp__sub_83B6FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FBD8"))) PPC_WEAK_FUNC(sub_83B6FBD8);
PPC_FUNC_IMPL(__imp__sub_83B6FBD8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,13912
	ctx.r4.s64 = ctx.r11.s64 + 13912;
	// addi r3,r10,-18352
	ctx.r3.s64 = ctx.r10.s64 + -18352;
	// bl 0x82576848
	ctx.lr = 0x83B6FBF8;
	sub_82576848(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,13352
	ctx.r3.s64 = ctx.r9.s64 + 13352;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FC04;
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

__attribute__((alias("__imp__sub_83B6FC14"))) PPC_WEAK_FUNC(sub_83B6FC14);
PPC_FUNC_IMPL(__imp__sub_83B6FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FC18"))) PPC_WEAK_FUNC(sub_83B6FC18);
PPC_FUNC_IMPL(__imp__sub_83B6FC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r30,r11,-18352
	ctx.r30.s64 = ctx.r11.s64 + -18352;
	// addi r31,r10,-18712
	ctx.r31.s64 = ctx.r10.s64 + -18712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825767c8
	ctx.lr = 0x83B6FC48;
	sub_825767C8(ctx, base);
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r9,-18272
	ctx.r4.s64 = ctx.r9.s64 + -18272;
	// bl 0x825767c8
	ctx.lr = 0x83B6FC58;
	sub_825767C8(ctx, base);
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r8,-18392
	ctx.r4.s64 = ctx.r8.s64 + -18392;
	// bl 0x825767c8
	ctx.lr = 0x83B6FC68;
	sub_825767C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x825767c8
	ctx.lr = 0x83B6FC74;
	sub_825767C8(ctx, base);
	// lis r7,-31766
	ctx.r7.s64 = -2081816576;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r7,-18312
	ctx.r4.s64 = ctx.r7.s64 + -18312;
	// bl 0x825767c8
	ctx.lr = 0x83B6FC84;
	sub_825767C8(ctx, base);
	// lis r6,-31766
	ctx.r6.s64 = -2081816576;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// addi r4,r6,-18472
	ctx.r4.s64 = ctx.r6.s64 + -18472;
	// bl 0x825767c8
	ctx.lr = 0x83B6FC94;
	sub_825767C8(ctx, base);
	// lis r5,-31793
	ctx.r5.s64 = -2083586048;
	// addi r3,r5,13440
	ctx.r3.s64 = ctx.r5.s64 + 13440;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FCA0;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6FCB8"))) PPC_WEAK_FUNC(sub_83B6FCB8);
PPC_FUNC_IMPL(__imp__sub_83B6FCB8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// addi r4,r11,13920
	ctx.r4.s64 = ctx.r11.s64 + 13920;
	// addi r3,r10,-18432
	ctx.r3.s64 = ctx.r10.s64 + -18432;
	// bl 0x82576848
	ctx.lr = 0x83B6FCD8;
	sub_82576848(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,13528
	ctx.r3.s64 = ctx.r9.s64 + 13528;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FCE4;
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

__attribute__((alias("__imp__sub_83B6FCF4"))) PPC_WEAK_FUNC(sub_83B6FCF4);
PPC_FUNC_IMPL(__imp__sub_83B6FCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FCF8"))) PPC_WEAK_FUNC(sub_83B6FCF8);
PPC_FUNC_IMPL(__imp__sub_83B6FCF8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x83B6FD0C;
	sub_825891B8(ctx, base);
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18184
	ctx.r7.s64 = ctx.r8.s64 + -18184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r6,-31793
	ctx.r6.s64 = -2083586048;
	// std r11,-18184(r8)
	PPC_STORE_U64(ctx.r8.u32 + -18184, ctx.r11.u64);
	// addi r3,r6,13616
	ctx.r3.s64 = ctx.r6.s64 + 13616;
	// std r10,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r10.u64);
	// std r9,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r9.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FD3C;
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

__attribute__((alias("__imp__sub_83B6FD4C"))) PPC_WEAK_FUNC(sub_83B6FD4C);
PPC_FUNC_IMPL(__imp__sub_83B6FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FD50"))) PPC_WEAK_FUNC(sub_83B6FD50);
PPC_FUNC_IMPL(__imp__sub_83B6FD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r31,8
	ctx.r31.s64 = 8;
	// addi r30,r11,-18152
	ctx.r30.s64 = ctx.r11.s64 + -18152;
loc_83B6FD70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257fa88
	ctx.lr = 0x83B6FD78;
	sub_8257FA88(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bge 0x83b6fd70
	if (!cr0.lt) goto loc_83B6FD70;
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,13624
	ctx.r3.s64 = ctx.r11.s64 + 13624;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FD90;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6FDA8"))) PPC_WEAK_FUNC(sub_83B6FDA8);
PPC_FUNC_IMPL(__imp__sub_83B6FDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r10,14524
	ctx.r4.s64 = ctx.r10.s64 + 14524;
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// lfs f2,14556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14556);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// addi r3,r8,-17704
	ctx.r3.s64 = ctx.r8.s64 + -17704;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,14552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14552);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6FDD4"))) PPC_WEAK_FUNC(sub_83B6FDD4);
PPC_FUNC_IMPL(__imp__sub_83B6FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FDD8"))) PPC_WEAK_FUNC(sub_83B6FDD8);
PPC_FUNC_IMPL(__imp__sub_83B6FDD8) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17712
	ctx.r3.s64 = ctx.r11.s64 + -17712;
	// bl 0x82572fa0
	ctx.lr = 0x83B6FDF4;
	sub_82572FA0(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,13704
	ctx.r3.s64 = ctx.r10.s64 + 13704;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FE00;
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

__attribute__((alias("__imp__sub_83B6FE10"))) PPC_WEAK_FUNC(sub_83B6FE10);
PPC_FUNC_IMPL(__imp__sub_83B6FE10) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17688
	ctx.r3.s64 = ctx.r11.s64 + -17688;
	// bl 0x82572fa0
	ctx.lr = 0x83B6FE2C;
	sub_82572FA0(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,13720
	ctx.r3.s64 = ctx.r10.s64 + 13720;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FE38;
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

__attribute__((alias("__imp__sub_83B6FE48"))) PPC_WEAK_FUNC(sub_83B6FE48);
PPC_FUNC_IMPL(__imp__sub_83B6FE48) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82534518
	ctx.lr = 0x83B6FE5C;
	sub_82534518(ctx, base);
	// lis r10,-31766
	ctx.r10.s64 = -2081816576;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-17680
	ctx.r9.s64 = ctx.r10.s64 + -17680;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,13736
	ctx.r3.s64 = ctx.r8.s64 + 13736;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FEA0;
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

__attribute__((alias("__imp__sub_83B6FEB0"))) PPC_WEAK_FUNC(sub_83B6FEB0);
PPC_FUNC_IMPL(__imp__sub_83B6FEB0) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17544
	ctx.r3.s64 = ctx.r11.s64 + -17544;
	// bl 0x82572fa0
	ctx.lr = 0x83B6FECC;
	sub_82572FA0(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,13984
	ctx.r3.s64 = ctx.r10.s64 + 13984;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FED8;
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

__attribute__((alias("__imp__sub_83B6FEE8"))) PPC_WEAK_FUNC(sub_83B6FEE8);
PPC_FUNC_IMPL(__imp__sub_83B6FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6FEF8"))) PPC_WEAK_FUNC(sub_83B6FEF8);
PPC_FUNC_IMPL(__imp__sub_83B6FEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,19
	ctx.r10.s64 = 19;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r11,r11,-17320
	ctx.r11.s64 = ctx.r11.s64 + -17320;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83B6FF10:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83b6ff10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B6FF10;
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14248
	ctx.r3.s64 = ctx.r11.s64 + 14248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6FF2C"))) PPC_WEAK_FUNC(sub_83B6FF2C);
PPC_FUNC_IMPL(__imp__sub_83B6FF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FF30"))) PPC_WEAK_FUNC(sub_83B6FF30);
PPC_FUNC_IMPL(__imp__sub_83B6FF30) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r11,-17340
	ctx.r3.s64 = ctx.r11.s64 + -17340;
	// bl 0x825919e8
	ctx.lr = 0x83B6FF4C;
	sub_825919E8(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,14232
	ctx.r3.s64 = ctx.r10.s64 + 14232;
	// bl 0x831cdcc8
	ctx.lr = 0x83B6FF58;
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

__attribute__((alias("__imp__sub_83B6FF68"))) PPC_WEAK_FUNC(sub_83B6FF68);
PPC_FUNC_IMPL(__imp__sub_83B6FF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17348
	ctx.r3.s64 = ctx.r11.s64 + -17348;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6FF78"))) PPC_WEAK_FUNC(sub_83B6FF78);
PPC_FUNC_IMPL(__imp__sub_83B6FF78) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x83B6FF8C;
	sub_83102DB0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x83102db0
	ctx.lr = 0x83B6FF94;
	sub_83102DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B6FFA4"))) PPC_WEAK_FUNC(sub_83B6FFA4);
PPC_FUNC_IMPL(__imp__sub_83B6FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B6FFA8"))) PPC_WEAK_FUNC(sub_83B6FFA8);
PPC_FUNC_IMPL(__imp__sub_83B6FFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// addi r5,r10,21224
	ctx.r5.s64 = ctx.r10.s64 + 21224;
	// addi r3,r9,-16784
	ctx.r3.s64 = ctx.r9.s64 + -16784;
	// lfs f3,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6FFD0"))) PPC_WEAK_FUNC(sub_83B6FFD0);
PPC_FUNC_IMPL(__imp__sub_83B6FFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// addi r5,r10,21260
	ctx.r5.s64 = ctx.r10.s64 + 21260;
	// addi r3,r9,-16772
	ctx.r3.s64 = ctx.r9.s64 + -16772;
	// lfs f3,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B6FFF8"))) PPC_WEAK_FUNC(sub_83B6FFF8);
PPC_FUNC_IMPL(__imp__sub_83B6FFF8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x83B7000C;
	sub_825891B8(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r11,-16744
	ctx.r9.s64 = ctx.r11.s64 + -16744;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x8258b3d0
	ctx.lr = 0x83B70024;
	sub_8258B3D0(ctx, base);
	// lis r8,-31793
	ctx.r8.s64 = -2083586048;
	// addi r3,r8,14384
	ctx.r3.s64 = ctx.r8.s64 + 14384;
	// bl 0x831cdcc8
	ctx.lr = 0x83B70030;
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

__attribute__((alias("__imp__sub_83B70040"))) PPC_WEAK_FUNC(sub_83B70040);
PPC_FUNC_IMPL(__imp__sub_83B70040) {
	PPC_FUNC_PROLOGUE();
	PPCVRegister vTemp{};
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// vspltisw128 v61,-1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r11,-16480
	ctx.r9.s64 = ctx.r11.s64 + -16480;
	// li r8,16
	ctx.r8.s64 = 16;
	// vupkd3d128 v60,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v60 = vTemp;
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vsldoi128 v59,v62,v61,12
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 4));
	// vor128 v13,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vsldoi128 v58,v61,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// li r7,32
	ctx.r7.s64 = 32;
	// vsldoi128 v57,v62,v61,8
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 8));
	// vsldoi128 v56,v61,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vor128 v11,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v0,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vsldoi128 v63,v60,v62,12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 4));
	// vand128 v9,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vsldoi128 v62,v62,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// vand128 v10,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vsel v9,v12,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel v12,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r9,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r9,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B700AC"))) PPC_WEAK_FUNC(sub_83B700AC);
PPC_FUNC_IMPL(__imp__sub_83B700AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B700B0"))) PPC_WEAK_FUNC(sub_83B700B0);
PPC_FUNC_IMPL(__imp__sub_83B700B0) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// bl 0x825766d0
	ctx.lr = 0x83B700C8;
	sub_825766D0(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,14392
	ctx.r3.s64 = ctx.r10.s64 + 14392;
	// bl 0x831cdcc8
	ctx.lr = 0x83B700D4;
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

__attribute__((alias("__imp__sub_83B700E4"))) PPC_WEAK_FUNC(sub_83B700E4);
PPC_FUNC_IMPL(__imp__sub_83B700E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B700E8"))) PPC_WEAK_FUNC(sub_83B700E8);
PPC_FUNC_IMPL(__imp__sub_83B700E8) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r3,r11,-16296
	ctx.r3.s64 = ctx.r11.s64 + -16296;
	// bl 0x8257fa88
	ctx.lr = 0x83B70100;
	sub_8257FA88(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,14480
	ctx.r3.s64 = ctx.r10.s64 + 14480;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7010C;
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

__attribute__((alias("__imp__sub_83B7011C"))) PPC_WEAK_FUNC(sub_83B7011C);
PPC_FUNC_IMPL(__imp__sub_83B7011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70120"))) PPC_WEAK_FUNC(sub_83B70120);
PPC_FUNC_IMPL(__imp__sub_83B70120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14496
	ctx.r3.s64 = ctx.r11.s64 + 14496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7012C"))) PPC_WEAK_FUNC(sub_83B7012C);
PPC_FUNC_IMPL(__imp__sub_83B7012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70130"))) PPC_WEAK_FUNC(sub_83B70130);
PPC_FUNC_IMPL(__imp__sub_83B70130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16160
	ctx.r3.s64 = ctx.r11.s64 + -16160;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70140"))) PPC_WEAK_FUNC(sub_83B70140);
PPC_FUNC_IMPL(__imp__sub_83B70140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14520
	ctx.r3.s64 = ctx.r11.s64 + 14520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7014C"))) PPC_WEAK_FUNC(sub_83B7014C);
PPC_FUNC_IMPL(__imp__sub_83B7014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70150"))) PPC_WEAK_FUNC(sub_83B70150);
PPC_FUNC_IMPL(__imp__sub_83B70150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// addi r5,r10,21896
	ctx.r5.s64 = ctx.r10.s64 + 21896;
	// addi r3,r9,-15804
	ctx.r3.s64 = ctx.r9.s64 + -15804;
	// lfs f3,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70178"))) PPC_WEAK_FUNC(sub_83B70178);
PPC_FUNC_IMPL(__imp__sub_83B70178) {
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
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r11,-15792
	ctx.r3.s64 = ctx.r11.s64 + -15792;
	// bl 0x82590c40
	ctx.lr = 0x83B70194;
	sub_82590C40(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,14584
	ctx.r3.s64 = ctx.r10.s64 + 14584;
	// bl 0x831cdcc8
	ctx.lr = 0x83B701A0;
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

__attribute__((alias("__imp__sub_83B701B0"))) PPC_WEAK_FUNC(sub_83B701B0);
PPC_FUNC_IMPL(__imp__sub_83B701B0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x83B701C4;
	sub_825891B8(ctx, base);
	// lis r8,-31766
	ctx.r8.s64 = -2081816576;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14312
	ctx.r7.s64 = ctx.r8.s64 + -14312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r6,-31793
	ctx.r6.s64 = -2083586048;
	// std r11,-14312(r8)
	PPC_STORE_U64(ctx.r8.u32 + -14312, ctx.r11.u64);
	// addi r3,r6,14792
	ctx.r3.s64 = ctx.r6.s64 + 14792;
	// std r10,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r10.u64);
	// std r9,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r9.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// bl 0x831cdcc8
	ctx.lr = 0x83B701F4;
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

__attribute__((alias("__imp__sub_83B70204"))) PPC_WEAK_FUNC(sub_83B70204);
PPC_FUNC_IMPL(__imp__sub_83B70204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70208"))) PPC_WEAK_FUNC(sub_83B70208);
PPC_FUNC_IMPL(__imp__sub_83B70208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14824
	ctx.r3.s64 = ctx.r11.s64 + 14824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70214"))) PPC_WEAK_FUNC(sub_83B70214);
PPC_FUNC_IMPL(__imp__sub_83B70214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70218"))) PPC_WEAK_FUNC(sub_83B70218);
PPC_FUNC_IMPL(__imp__sub_83B70218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r5,r11,22356
	ctx.r5.s64 = ctx.r11.s64 + 22356;
	// lis r7,-31766
	ctx.r7.s64 = -2081816576;
	// lfs f3,22404(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22404);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// lfs f2,22400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-14276
	ctx.r3.s64 = ctx.r7.s64 + -14276;
	// lfs f1,22396(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22396);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70248"))) PPC_WEAK_FUNC(sub_83B70248);
PPC_FUNC_IMPL(__imp__sub_83B70248) {
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
	// bl 0x82595690
	ctx.lr = 0x83B70258;
	sub_82595690(ctx, base);
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14856
	ctx.r3.s64 = ctx.r11.s64 + 14856;
	// bl 0x831cdcc8
	ctx.lr = 0x83B70264;
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

__attribute__((alias("__imp__sub_83B70274"))) PPC_WEAK_FUNC(sub_83B70274);
PPC_FUNC_IMPL(__imp__sub_83B70274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70278"))) PPC_WEAK_FUNC(sub_83B70278);
PPC_FUNC_IMPL(__imp__sub_83B70278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14920
	ctx.r3.s64 = ctx.r11.s64 + 14920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70284"))) PPC_WEAK_FUNC(sub_83B70284);
PPC_FUNC_IMPL(__imp__sub_83B70284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70288"))) PPC_WEAK_FUNC(sub_83B70288);
PPC_FUNC_IMPL(__imp__sub_83B70288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14928
	ctx.r3.s64 = ctx.r11.s64 + 14928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70294"))) PPC_WEAK_FUNC(sub_83B70294);
PPC_FUNC_IMPL(__imp__sub_83B70294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70298"))) PPC_WEAK_FUNC(sub_83B70298);
PPC_FUNC_IMPL(__imp__sub_83B70298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14936
	ctx.r3.s64 = ctx.r11.s64 + 14936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B702A4"))) PPC_WEAK_FUNC(sub_83B702A4);
PPC_FUNC_IMPL(__imp__sub_83B702A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B702A8"))) PPC_WEAK_FUNC(sub_83B702A8);
PPC_FUNC_IMPL(__imp__sub_83B702A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14944
	ctx.r3.s64 = ctx.r11.s64 + 14944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B702B4"))) PPC_WEAK_FUNC(sub_83B702B4);
PPC_FUNC_IMPL(__imp__sub_83B702B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B702B8"))) PPC_WEAK_FUNC(sub_83B702B8);
PPC_FUNC_IMPL(__imp__sub_83B702B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14952
	ctx.r3.s64 = ctx.r11.s64 + 14952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B702C4"))) PPC_WEAK_FUNC(sub_83B702C4);
PPC_FUNC_IMPL(__imp__sub_83B702C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B702C8"))) PPC_WEAK_FUNC(sub_83B702C8);
PPC_FUNC_IMPL(__imp__sub_83B702C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14960
	ctx.r3.s64 = ctx.r11.s64 + 14960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B702D4"))) PPC_WEAK_FUNC(sub_83B702D4);
PPC_FUNC_IMPL(__imp__sub_83B702D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B702D8"))) PPC_WEAK_FUNC(sub_83B702D8);
PPC_FUNC_IMPL(__imp__sub_83B702D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14968
	ctx.r3.s64 = ctx.r11.s64 + 14968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B702E4"))) PPC_WEAK_FUNC(sub_83B702E4);
PPC_FUNC_IMPL(__imp__sub_83B702E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B702E8"))) PPC_WEAK_FUNC(sub_83B702E8);
PPC_FUNC_IMPL(__imp__sub_83B702E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14976
	ctx.r3.s64 = ctx.r11.s64 + 14976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B702F4"))) PPC_WEAK_FUNC(sub_83B702F4);
PPC_FUNC_IMPL(__imp__sub_83B702F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B702F8"))) PPC_WEAK_FUNC(sub_83B702F8);
PPC_FUNC_IMPL(__imp__sub_83B702F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14984
	ctx.r3.s64 = ctx.r11.s64 + 14984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70304"))) PPC_WEAK_FUNC(sub_83B70304);
PPC_FUNC_IMPL(__imp__sub_83B70304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70308"))) PPC_WEAK_FUNC(sub_83B70308);
PPC_FUNC_IMPL(__imp__sub_83B70308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,14992
	ctx.r3.s64 = ctx.r11.s64 + 14992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70314"))) PPC_WEAK_FUNC(sub_83B70314);
PPC_FUNC_IMPL(__imp__sub_83B70314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70318"))) PPC_WEAK_FUNC(sub_83B70318);
PPC_FUNC_IMPL(__imp__sub_83B70318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70324"))) PPC_WEAK_FUNC(sub_83B70324);
PPC_FUNC_IMPL(__imp__sub_83B70324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70328"))) PPC_WEAK_FUNC(sub_83B70328);
PPC_FUNC_IMPL(__imp__sub_83B70328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15008
	ctx.r3.s64 = ctx.r11.s64 + 15008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70334"))) PPC_WEAK_FUNC(sub_83B70334);
PPC_FUNC_IMPL(__imp__sub_83B70334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70338"))) PPC_WEAK_FUNC(sub_83B70338);
PPC_FUNC_IMPL(__imp__sub_83B70338) {
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
	// addi r3,r11,-23056
	ctx.r3.s64 = ctx.r11.s64 + -23056;
	// bl 0x83523120
	ctx.lr = 0x83B70350;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15016
	ctx.r3.s64 = ctx.r10.s64 + 15016;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7035C;
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

__attribute__((alias("__imp__sub_83B7036C"))) PPC_WEAK_FUNC(sub_83B7036C);
PPC_FUNC_IMPL(__imp__sub_83B7036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70370"))) PPC_WEAK_FUNC(sub_83B70370);
PPC_FUNC_IMPL(__imp__sub_83B70370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23136
	ctx.r4.s64 = ctx.r11.s64 + 23136;
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
	// addi r3,r7,-23032
	ctx.r3.s64 = ctx.r7.s64 + -23032;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B703A0"))) PPC_WEAK_FUNC(sub_83B703A0);
PPC_FUNC_IMPL(__imp__sub_83B703A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23040
	ctx.r7.s64 = ctx.r8.s64 + -23040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23040(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B703C8"))) PPC_WEAK_FUNC(sub_83B703C8);
PPC_FUNC_IMPL(__imp__sub_83B703C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22672
	ctx.r11.s64 = ctx.r11.s64 + -22672;
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

__attribute__((alias("__imp__sub_83B70408"))) PPC_WEAK_FUNC(sub_83B70408);
PPC_FUNC_IMPL(__imp__sub_83B70408) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// addi r6,r7,19760
	ctx.r6.s64 = ctx.r7.s64 + 19760;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19656(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19656);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23040);
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
	// std r9,19760(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19760, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B70450"))) PPC_WEAK_FUNC(sub_83B70450);
PPC_FUNC_IMPL(__imp__sub_83B70450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15032
	ctx.r3.s64 = ctx.r11.s64 + 15032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7045C"))) PPC_WEAK_FUNC(sub_83B7045C);
PPC_FUNC_IMPL(__imp__sub_83B7045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70460"))) PPC_WEAK_FUNC(sub_83B70460);
PPC_FUNC_IMPL(__imp__sub_83B70460) {
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
	// addi r3,r11,-23016
	ctx.r3.s64 = ctx.r11.s64 + -23016;
	// bl 0x8259af80
	ctx.lr = 0x83B70478;
	sub_8259AF80(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15048
	ctx.r3.s64 = ctx.r10.s64 + 15048;
	// bl 0x831cdcc8
	ctx.lr = 0x83B70484;
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

__attribute__((alias("__imp__sub_83B70494"))) PPC_WEAK_FUNC(sub_83B70494);
PPC_FUNC_IMPL(__imp__sub_83B70494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70498"))) PPC_WEAK_FUNC(sub_83B70498);
PPC_FUNC_IMPL(__imp__sub_83B70498) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23052
	ctx.r11.s64 = ctx.r8.s64 + -23052;
	// lis r6,-31793
	ctx.r6.s64 = -2083586048;
	// lwz r10,19704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19704);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15040
	ctx.r3.s64 = ctx.r6.s64 + 15040;
	// stw r10,-23052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23052, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B704C8"))) PPC_WEAK_FUNC(sub_83B704C8);
PPC_FUNC_IMPL(__imp__sub_83B704C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15056
	ctx.r3.s64 = ctx.r11.s64 + 15056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B704D4"))) PPC_WEAK_FUNC(sub_83B704D4);
PPC_FUNC_IMPL(__imp__sub_83B704D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B704D8"))) PPC_WEAK_FUNC(sub_83B704D8);
PPC_FUNC_IMPL(__imp__sub_83B704D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15064
	ctx.r3.s64 = ctx.r11.s64 + 15064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B704E4"))) PPC_WEAK_FUNC(sub_83B704E4);
PPC_FUNC_IMPL(__imp__sub_83B704E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B704E8"))) PPC_WEAK_FUNC(sub_83B704E8);
PPC_FUNC_IMPL(__imp__sub_83B704E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15072
	ctx.r3.s64 = ctx.r11.s64 + 15072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B704F4"))) PPC_WEAK_FUNC(sub_83B704F4);
PPC_FUNC_IMPL(__imp__sub_83B704F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B704F8"))) PPC_WEAK_FUNC(sub_83B704F8);
PPC_FUNC_IMPL(__imp__sub_83B704F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15080
	ctx.r3.s64 = ctx.r11.s64 + 15080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70504"))) PPC_WEAK_FUNC(sub_83B70504);
PPC_FUNC_IMPL(__imp__sub_83B70504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70508"))) PPC_WEAK_FUNC(sub_83B70508);
PPC_FUNC_IMPL(__imp__sub_83B70508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15088
	ctx.r3.s64 = ctx.r11.s64 + 15088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70514"))) PPC_WEAK_FUNC(sub_83B70514);
PPC_FUNC_IMPL(__imp__sub_83B70514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70518"))) PPC_WEAK_FUNC(sub_83B70518);
PPC_FUNC_IMPL(__imp__sub_83B70518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70524"))) PPC_WEAK_FUNC(sub_83B70524);
PPC_FUNC_IMPL(__imp__sub_83B70524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70528"))) PPC_WEAK_FUNC(sub_83B70528);
PPC_FUNC_IMPL(__imp__sub_83B70528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15104
	ctx.r3.s64 = ctx.r11.s64 + 15104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70534"))) PPC_WEAK_FUNC(sub_83B70534);
PPC_FUNC_IMPL(__imp__sub_83B70534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70538"))) PPC_WEAK_FUNC(sub_83B70538);
PPC_FUNC_IMPL(__imp__sub_83B70538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15112
	ctx.r3.s64 = ctx.r11.s64 + 15112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70544"))) PPC_WEAK_FUNC(sub_83B70544);
PPC_FUNC_IMPL(__imp__sub_83B70544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70548"))) PPC_WEAK_FUNC(sub_83B70548);
PPC_FUNC_IMPL(__imp__sub_83B70548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15120
	ctx.r3.s64 = ctx.r11.s64 + 15120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70554"))) PPC_WEAK_FUNC(sub_83B70554);
PPC_FUNC_IMPL(__imp__sub_83B70554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70558"))) PPC_WEAK_FUNC(sub_83B70558);
PPC_FUNC_IMPL(__imp__sub_83B70558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15128
	ctx.r3.s64 = ctx.r11.s64 + 15128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70564"))) PPC_WEAK_FUNC(sub_83B70564);
PPC_FUNC_IMPL(__imp__sub_83B70564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70568"))) PPC_WEAK_FUNC(sub_83B70568);
PPC_FUNC_IMPL(__imp__sub_83B70568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15136
	ctx.r3.s64 = ctx.r11.s64 + 15136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70574"))) PPC_WEAK_FUNC(sub_83B70574);
PPC_FUNC_IMPL(__imp__sub_83B70574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70578"))) PPC_WEAK_FUNC(sub_83B70578);
PPC_FUNC_IMPL(__imp__sub_83B70578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15144
	ctx.r3.s64 = ctx.r11.s64 + 15144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70584"))) PPC_WEAK_FUNC(sub_83B70584);
PPC_FUNC_IMPL(__imp__sub_83B70584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70588"))) PPC_WEAK_FUNC(sub_83B70588);
PPC_FUNC_IMPL(__imp__sub_83B70588) {
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
	// addi r3,r11,-22624
	ctx.r3.s64 = ctx.r11.s64 + -22624;
	// bl 0x83523120
	ctx.lr = 0x83B705A0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15152
	ctx.r3.s64 = ctx.r10.s64 + 15152;
	// bl 0x831cdcc8
	ctx.lr = 0x83B705AC;
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

__attribute__((alias("__imp__sub_83B705BC"))) PPC_WEAK_FUNC(sub_83B705BC);
PPC_FUNC_IMPL(__imp__sub_83B705BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B705C0"))) PPC_WEAK_FUNC(sub_83B705C0);
PPC_FUNC_IMPL(__imp__sub_83B705C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22608
	ctx.r7.s64 = ctx.r8.s64 + -22608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B705E8"))) PPC_WEAK_FUNC(sub_83B705E8);
PPC_FUNC_IMPL(__imp__sub_83B705E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// addi r6,r7,19888
	ctx.r6.s64 = ctx.r7.s64 + 19888;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19816(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19816);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22608);
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
	// std r9,19888(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B70630"))) PPC_WEAK_FUNC(sub_83B70630);
PPC_FUNC_IMPL(__imp__sub_83B70630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15168
	ctx.r3.s64 = ctx.r11.s64 + 15168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7063C"))) PPC_WEAK_FUNC(sub_83B7063C);
PPC_FUNC_IMPL(__imp__sub_83B7063C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70640"))) PPC_WEAK_FUNC(sub_83B70640);
PPC_FUNC_IMPL(__imp__sub_83B70640) {
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
	// addi r3,r11,-22600
	ctx.r3.s64 = ctx.r11.s64 + -22600;
	// bl 0x8259af80
	ctx.lr = 0x83B70658;
	sub_8259AF80(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15184
	ctx.r3.s64 = ctx.r10.s64 + 15184;
	// bl 0x831cdcc8
	ctx.lr = 0x83B70664;
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

__attribute__((alias("__imp__sub_83B70674"))) PPC_WEAK_FUNC(sub_83B70674);
PPC_FUNC_IMPL(__imp__sub_83B70674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70678"))) PPC_WEAK_FUNC(sub_83B70678);
PPC_FUNC_IMPL(__imp__sub_83B70678) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22620
	ctx.r11.s64 = ctx.r8.s64 + -22620;
	// lis r6,-31793
	ctx.r6.s64 = -2083586048;
	// lwz r10,19864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15176
	ctx.r3.s64 = ctx.r6.s64 + 15176;
	// stw r10,-22620(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B706A8"))) PPC_WEAK_FUNC(sub_83B706A8);
PPC_FUNC_IMPL(__imp__sub_83B706A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15192
	ctx.r3.s64 = ctx.r11.s64 + 15192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B706B4"))) PPC_WEAK_FUNC(sub_83B706B4);
PPC_FUNC_IMPL(__imp__sub_83B706B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B706B8"))) PPC_WEAK_FUNC(sub_83B706B8);
PPC_FUNC_IMPL(__imp__sub_83B706B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15224
	ctx.r3.s64 = ctx.r11.s64 + 15224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B706C4"))) PPC_WEAK_FUNC(sub_83B706C4);
PPC_FUNC_IMPL(__imp__sub_83B706C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B706C8"))) PPC_WEAK_FUNC(sub_83B706C8);
PPC_FUNC_IMPL(__imp__sub_83B706C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15232
	ctx.r3.s64 = ctx.r11.s64 + 15232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B706D4"))) PPC_WEAK_FUNC(sub_83B706D4);
PPC_FUNC_IMPL(__imp__sub_83B706D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B706D8"))) PPC_WEAK_FUNC(sub_83B706D8);
PPC_FUNC_IMPL(__imp__sub_83B706D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15240
	ctx.r3.s64 = ctx.r11.s64 + 15240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B706E4"))) PPC_WEAK_FUNC(sub_83B706E4);
PPC_FUNC_IMPL(__imp__sub_83B706E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B706E8"))) PPC_WEAK_FUNC(sub_83B706E8);
PPC_FUNC_IMPL(__imp__sub_83B706E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15248
	ctx.r3.s64 = ctx.r11.s64 + 15248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B706F4"))) PPC_WEAK_FUNC(sub_83B706F4);
PPC_FUNC_IMPL(__imp__sub_83B706F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B706F8"))) PPC_WEAK_FUNC(sub_83B706F8);
PPC_FUNC_IMPL(__imp__sub_83B706F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15256
	ctx.r3.s64 = ctx.r11.s64 + 15256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70704"))) PPC_WEAK_FUNC(sub_83B70704);
PPC_FUNC_IMPL(__imp__sub_83B70704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70708"))) PPC_WEAK_FUNC(sub_83B70708);
PPC_FUNC_IMPL(__imp__sub_83B70708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15264
	ctx.r3.s64 = ctx.r11.s64 + 15264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70714"))) PPC_WEAK_FUNC(sub_83B70714);
PPC_FUNC_IMPL(__imp__sub_83B70714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70718"))) PPC_WEAK_FUNC(sub_83B70718);
PPC_FUNC_IMPL(__imp__sub_83B70718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15272
	ctx.r3.s64 = ctx.r11.s64 + 15272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70724"))) PPC_WEAK_FUNC(sub_83B70724);
PPC_FUNC_IMPL(__imp__sub_83B70724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70728"))) PPC_WEAK_FUNC(sub_83B70728);
PPC_FUNC_IMPL(__imp__sub_83B70728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15280
	ctx.r3.s64 = ctx.r11.s64 + 15280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70734"))) PPC_WEAK_FUNC(sub_83B70734);
PPC_FUNC_IMPL(__imp__sub_83B70734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70738"))) PPC_WEAK_FUNC(sub_83B70738);
PPC_FUNC_IMPL(__imp__sub_83B70738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15288
	ctx.r3.s64 = ctx.r11.s64 + 15288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70744"))) PPC_WEAK_FUNC(sub_83B70744);
PPC_FUNC_IMPL(__imp__sub_83B70744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70748"))) PPC_WEAK_FUNC(sub_83B70748);
PPC_FUNC_IMPL(__imp__sub_83B70748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15296
	ctx.r3.s64 = ctx.r11.s64 + 15296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70754"))) PPC_WEAK_FUNC(sub_83B70754);
PPC_FUNC_IMPL(__imp__sub_83B70754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70758"))) PPC_WEAK_FUNC(sub_83B70758);
PPC_FUNC_IMPL(__imp__sub_83B70758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70764"))) PPC_WEAK_FUNC(sub_83B70764);
PPC_FUNC_IMPL(__imp__sub_83B70764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70768"))) PPC_WEAK_FUNC(sub_83B70768);
PPC_FUNC_IMPL(__imp__sub_83B70768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15312
	ctx.r3.s64 = ctx.r11.s64 + 15312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70774"))) PPC_WEAK_FUNC(sub_83B70774);
PPC_FUNC_IMPL(__imp__sub_83B70774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70778"))) PPC_WEAK_FUNC(sub_83B70778);
PPC_FUNC_IMPL(__imp__sub_83B70778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15320
	ctx.r3.s64 = ctx.r11.s64 + 15320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70784"))) PPC_WEAK_FUNC(sub_83B70784);
PPC_FUNC_IMPL(__imp__sub_83B70784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70788"))) PPC_WEAK_FUNC(sub_83B70788);
PPC_FUNC_IMPL(__imp__sub_83B70788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15328
	ctx.r3.s64 = ctx.r11.s64 + 15328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70794"))) PPC_WEAK_FUNC(sub_83B70794);
PPC_FUNC_IMPL(__imp__sub_83B70794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70798"))) PPC_WEAK_FUNC(sub_83B70798);
PPC_FUNC_IMPL(__imp__sub_83B70798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15336
	ctx.r3.s64 = ctx.r11.s64 + 15336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B707A4"))) PPC_WEAK_FUNC(sub_83B707A4);
PPC_FUNC_IMPL(__imp__sub_83B707A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B707A8"))) PPC_WEAK_FUNC(sub_83B707A8);
PPC_FUNC_IMPL(__imp__sub_83B707A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15344
	ctx.r3.s64 = ctx.r11.s64 + 15344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B707B4"))) PPC_WEAK_FUNC(sub_83B707B4);
PPC_FUNC_IMPL(__imp__sub_83B707B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B707B8"))) PPC_WEAK_FUNC(sub_83B707B8);
PPC_FUNC_IMPL(__imp__sub_83B707B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15352
	ctx.r3.s64 = ctx.r11.s64 + 15352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B707C4"))) PPC_WEAK_FUNC(sub_83B707C4);
PPC_FUNC_IMPL(__imp__sub_83B707C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B707C8"))) PPC_WEAK_FUNC(sub_83B707C8);
PPC_FUNC_IMPL(__imp__sub_83B707C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15360
	ctx.r3.s64 = ctx.r11.s64 + 15360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B707D4"))) PPC_WEAK_FUNC(sub_83B707D4);
PPC_FUNC_IMPL(__imp__sub_83B707D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B707D8"))) PPC_WEAK_FUNC(sub_83B707D8);
PPC_FUNC_IMPL(__imp__sub_83B707D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15368
	ctx.r3.s64 = ctx.r11.s64 + 15368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B707E4"))) PPC_WEAK_FUNC(sub_83B707E4);
PPC_FUNC_IMPL(__imp__sub_83B707E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B707E8"))) PPC_WEAK_FUNC(sub_83B707E8);
PPC_FUNC_IMPL(__imp__sub_83B707E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15376
	ctx.r3.s64 = ctx.r11.s64 + 15376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B707F4"))) PPC_WEAK_FUNC(sub_83B707F4);
PPC_FUNC_IMPL(__imp__sub_83B707F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B707F8"))) PPC_WEAK_FUNC(sub_83B707F8);
PPC_FUNC_IMPL(__imp__sub_83B707F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15384
	ctx.r3.s64 = ctx.r11.s64 + 15384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70804"))) PPC_WEAK_FUNC(sub_83B70804);
PPC_FUNC_IMPL(__imp__sub_83B70804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70808"))) PPC_WEAK_FUNC(sub_83B70808);
PPC_FUNC_IMPL(__imp__sub_83B70808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15392
	ctx.r3.s64 = ctx.r11.s64 + 15392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70814"))) PPC_WEAK_FUNC(sub_83B70814);
PPC_FUNC_IMPL(__imp__sub_83B70814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70818"))) PPC_WEAK_FUNC(sub_83B70818);
PPC_FUNC_IMPL(__imp__sub_83B70818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15400
	ctx.r3.s64 = ctx.r11.s64 + 15400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70824"))) PPC_WEAK_FUNC(sub_83B70824);
PPC_FUNC_IMPL(__imp__sub_83B70824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70828"))) PPC_WEAK_FUNC(sub_83B70828);
PPC_FUNC_IMPL(__imp__sub_83B70828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15408
	ctx.r3.s64 = ctx.r11.s64 + 15408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70834"))) PPC_WEAK_FUNC(sub_83B70834);
PPC_FUNC_IMPL(__imp__sub_83B70834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70838"))) PPC_WEAK_FUNC(sub_83B70838);
PPC_FUNC_IMPL(__imp__sub_83B70838) {
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
	// addi r3,r11,-22172
	ctx.r3.s64 = ctx.r11.s64 + -22172;
	// bl 0x83523120
	ctx.lr = 0x83B70850;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15416
	ctx.r3.s64 = ctx.r10.s64 + 15416;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7085C;
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

__attribute__((alias("__imp__sub_83B7086C"))) PPC_WEAK_FUNC(sub_83B7086C);
PPC_FUNC_IMPL(__imp__sub_83B7086C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70870"))) PPC_WEAK_FUNC(sub_83B70870);
PPC_FUNC_IMPL(__imp__sub_83B70870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,25396
	ctx.r4.s64 = ctx.r11.s64 + 25396;
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
	// addi r3,r7,-22148
	ctx.r3.s64 = ctx.r7.s64 + -22148;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B708A0"))) PPC_WEAK_FUNC(sub_83B708A0);
PPC_FUNC_IMPL(__imp__sub_83B708A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22156
	ctx.r7.s64 = ctx.r8.s64 + -22156;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22156(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22156);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22156, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B708C8"))) PPC_WEAK_FUNC(sub_83B708C8);
PPC_FUNC_IMPL(__imp__sub_83B708C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21788
	ctx.r11.s64 = ctx.r11.s64 + -21788;
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

__attribute__((alias("__imp__sub_83B70908"))) PPC_WEAK_FUNC(sub_83B70908);
PPC_FUNC_IMPL(__imp__sub_83B70908) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// addi r6,r7,20372
	ctx.r6.s64 = ctx.r7.s64 + 20372;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20268(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20268);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22156(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22156);
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
	// std r9,20372(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20372, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B70950"))) PPC_WEAK_FUNC(sub_83B70950);
PPC_FUNC_IMPL(__imp__sub_83B70950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15432
	ctx.r3.s64 = ctx.r11.s64 + 15432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7095C"))) PPC_WEAK_FUNC(sub_83B7095C);
PPC_FUNC_IMPL(__imp__sub_83B7095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70960"))) PPC_WEAK_FUNC(sub_83B70960);
PPC_FUNC_IMPL(__imp__sub_83B70960) {
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
	// addi r3,r11,-22136
	ctx.r3.s64 = ctx.r11.s64 + -22136;
	// bl 0x8259af80
	ctx.lr = 0x83B70978;
	sub_8259AF80(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,15448
	ctx.r3.s64 = ctx.r10.s64 + 15448;
	// bl 0x831cdcc8
	ctx.lr = 0x83B70984;
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

__attribute__((alias("__imp__sub_83B70994"))) PPC_WEAK_FUNC(sub_83B70994);
PPC_FUNC_IMPL(__imp__sub_83B70994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70998"))) PPC_WEAK_FUNC(sub_83B70998);
PPC_FUNC_IMPL(__imp__sub_83B70998) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22168
	ctx.r11.s64 = ctx.r8.s64 + -22168;
	// lis r6,-31793
	ctx.r6.s64 = -2083586048;
	// lwz r10,20316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20316);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15440
	ctx.r3.s64 = ctx.r6.s64 + 15440;
	// stw r10,-22168(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22168, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B709C8"))) PPC_WEAK_FUNC(sub_83B709C8);
PPC_FUNC_IMPL(__imp__sub_83B709C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15480
	ctx.r3.s64 = ctx.r11.s64 + 15480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B709D4"))) PPC_WEAK_FUNC(sub_83B709D4);
PPC_FUNC_IMPL(__imp__sub_83B709D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B709D8"))) PPC_WEAK_FUNC(sub_83B709D8);
PPC_FUNC_IMPL(__imp__sub_83B709D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15456
	ctx.r3.s64 = ctx.r11.s64 + 15456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B709E4"))) PPC_WEAK_FUNC(sub_83B709E4);
PPC_FUNC_IMPL(__imp__sub_83B709E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B709E8"))) PPC_WEAK_FUNC(sub_83B709E8);
PPC_FUNC_IMPL(__imp__sub_83B709E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15568
	ctx.r3.s64 = ctx.r11.s64 + 15568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B709F4"))) PPC_WEAK_FUNC(sub_83B709F4);
PPC_FUNC_IMPL(__imp__sub_83B709F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B709F8"))) PPC_WEAK_FUNC(sub_83B709F8);
PPC_FUNC_IMPL(__imp__sub_83B709F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15576
	ctx.r3.s64 = ctx.r11.s64 + 15576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A04"))) PPC_WEAK_FUNC(sub_83B70A04);
PPC_FUNC_IMPL(__imp__sub_83B70A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A08"))) PPC_WEAK_FUNC(sub_83B70A08);
PPC_FUNC_IMPL(__imp__sub_83B70A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15584
	ctx.r3.s64 = ctx.r11.s64 + 15584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A14"))) PPC_WEAK_FUNC(sub_83B70A14);
PPC_FUNC_IMPL(__imp__sub_83B70A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A18"))) PPC_WEAK_FUNC(sub_83B70A18);
PPC_FUNC_IMPL(__imp__sub_83B70A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15592
	ctx.r3.s64 = ctx.r11.s64 + 15592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A24"))) PPC_WEAK_FUNC(sub_83B70A24);
PPC_FUNC_IMPL(__imp__sub_83B70A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A28"))) PPC_WEAK_FUNC(sub_83B70A28);
PPC_FUNC_IMPL(__imp__sub_83B70A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15600
	ctx.r3.s64 = ctx.r11.s64 + 15600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A34"))) PPC_WEAK_FUNC(sub_83B70A34);
PPC_FUNC_IMPL(__imp__sub_83B70A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A38"))) PPC_WEAK_FUNC(sub_83B70A38);
PPC_FUNC_IMPL(__imp__sub_83B70A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15608
	ctx.r3.s64 = ctx.r11.s64 + 15608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A44"))) PPC_WEAK_FUNC(sub_83B70A44);
PPC_FUNC_IMPL(__imp__sub_83B70A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A48"))) PPC_WEAK_FUNC(sub_83B70A48);
PPC_FUNC_IMPL(__imp__sub_83B70A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A54"))) PPC_WEAK_FUNC(sub_83B70A54);
PPC_FUNC_IMPL(__imp__sub_83B70A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A58"))) PPC_WEAK_FUNC(sub_83B70A58);
PPC_FUNC_IMPL(__imp__sub_83B70A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15624
	ctx.r3.s64 = ctx.r11.s64 + 15624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A64"))) PPC_WEAK_FUNC(sub_83B70A64);
PPC_FUNC_IMPL(__imp__sub_83B70A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A68"))) PPC_WEAK_FUNC(sub_83B70A68);
PPC_FUNC_IMPL(__imp__sub_83B70A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15632
	ctx.r3.s64 = ctx.r11.s64 + 15632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A74"))) PPC_WEAK_FUNC(sub_83B70A74);
PPC_FUNC_IMPL(__imp__sub_83B70A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A78"))) PPC_WEAK_FUNC(sub_83B70A78);
PPC_FUNC_IMPL(__imp__sub_83B70A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15640
	ctx.r3.s64 = ctx.r11.s64 + 15640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A84"))) PPC_WEAK_FUNC(sub_83B70A84);
PPC_FUNC_IMPL(__imp__sub_83B70A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B70A88"))) PPC_WEAK_FUNC(sub_83B70A88);
PPC_FUNC_IMPL(__imp__sub_83B70A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,15648
	ctx.r3.s64 = ctx.r11.s64 + 15648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B70A94"))) PPC_WEAK_FUNC(sub_83B70A94);
PPC_FUNC_IMPL(__imp__sub_83B70A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

