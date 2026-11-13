#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C9FED8"))) PPC_WEAK_FUNC(sub_83C9FED8);
PPC_FUNC_IMPL(__imp__sub_83C9FED8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// bl 0x83523120
	ctx.lr = 0x83C9FEF0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27312
	ctx.r3.s64 = ctx.r10.s64 + -27312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FEFC;
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

__attribute__((alias("__imp__sub_83C9FF0C"))) PPC_WEAK_FUNC(sub_83C9FF0C);
PPC_FUNC_IMPL(__imp__sub_83C9FF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FF10"))) PPC_WEAK_FUNC(sub_83C9FF10);
PPC_FUNC_IMPL(__imp__sub_83C9FF10) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5031
	ctx.r3.s64 = ctx.r11.s64 + -5031;
	// bl 0x83523120
	ctx.lr = 0x83C9FF28;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27296
	ctx.r3.s64 = ctx.r10.s64 + -27296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FF34;
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

__attribute__((alias("__imp__sub_83C9FF44"))) PPC_WEAK_FUNC(sub_83C9FF44);
PPC_FUNC_IMPL(__imp__sub_83C9FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FF48"))) PPC_WEAK_FUNC(sub_83C9FF48);
PPC_FUNC_IMPL(__imp__sub_83C9FF48) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5030
	ctx.r3.s64 = ctx.r11.s64 + -5030;
	// bl 0x83523120
	ctx.lr = 0x83C9FF60;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27280
	ctx.r3.s64 = ctx.r10.s64 + -27280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FF6C;
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

__attribute__((alias("__imp__sub_83C9FF7C"))) PPC_WEAK_FUNC(sub_83C9FF7C);
PPC_FUNC_IMPL(__imp__sub_83C9FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FF80"))) PPC_WEAK_FUNC(sub_83C9FF80);
PPC_FUNC_IMPL(__imp__sub_83C9FF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,21996
	ctx.r4.s64 = ctx.r11.s64 + 21996;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-5012
	ctx.r3.s64 = ctx.r7.s64 + -5012;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9FFB0"))) PPC_WEAK_FUNC(sub_83C9FFB0);
PPC_FUNC_IMPL(__imp__sub_83C9FFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-5000
	ctx.r31.s64 = ctx.r11.s64 + -5000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83C9FFD4;
	sub_82572FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82572fa0
	ctx.lr = 0x83C9FFE8;
	sub_82572FA0(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27264
	ctx.r3.s64 = ctx.r10.s64 + -27264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FFF4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0008"))) PPC_WEAK_FUNC(sub_83CA0008);
PPC_FUNC_IMPL(__imp__sub_83CA0008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,22132
	ctx.r4.s64 = ctx.r11.s64 + 22132;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4972
	ctx.r3.s64 = ctx.r7.s64 + -4972;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0038"))) PPC_WEAK_FUNC(sub_83CA0038);
PPC_FUNC_IMPL(__imp__sub_83CA0038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-4980
	ctx.r3.s64 = ctx.r11.s64 + -4980;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0048"))) PPC_WEAK_FUNC(sub_83CA0048);
PPC_FUNC_IMPL(__imp__sub_83CA0048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,22184
	ctx.r4.s64 = ctx.r11.s64 + 22184;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,72
	ctx.r5.s64 = ctx.r4.s64 + 72;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4944
	ctx.r3.s64 = ctx.r7.s64 + -4944;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0078"))) PPC_WEAK_FUNC(sub_83CA0078);
PPC_FUNC_IMPL(__imp__sub_83CA0078) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-4952
	ctx.r3.s64 = ctx.r11.s64 + -4952;
	// bl 0x82572fa0
	ctx.lr = 0x83CA0094;
	sub_82572FA0(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27176
	ctx.r3.s64 = ctx.r10.s64 + -27176;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA00A0;
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

__attribute__((alias("__imp__sub_83CA00B0"))) PPC_WEAK_FUNC(sub_83CA00B0);
PPC_FUNC_IMPL(__imp__sub_83CA00B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,22752
	ctx.r4.s64 = ctx.r11.s64 + 22752;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4924
	ctx.r3.s64 = ctx.r7.s64 + -4924;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA00E0"))) PPC_WEAK_FUNC(sub_83CA00E0);
PPC_FUNC_IMPL(__imp__sub_83CA00E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23128
	ctx.r4.s64 = ctx.r11.s64 + 23128;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4904
	ctx.r3.s64 = ctx.r7.s64 + -4904;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0110"))) PPC_WEAK_FUNC(sub_83CA0110);
PPC_FUNC_IMPL(__imp__sub_83CA0110) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-4880
	ctx.r3.s64 = ctx.r11.s64 + -4880;
	// bl 0x82572fa0
	ctx.lr = 0x83CA012C;
	sub_82572FA0(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27160
	ctx.r3.s64 = ctx.r10.s64 + -27160;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0138;
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

__attribute__((alias("__imp__sub_83CA0148"))) PPC_WEAK_FUNC(sub_83CA0148);
PPC_FUNC_IMPL(__imp__sub_83CA0148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23436
	ctx.r4.s64 = ctx.r11.s64 + 23436;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4632
	ctx.r3.s64 = ctx.r7.s64 + -4632;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0178"))) PPC_WEAK_FUNC(sub_83CA0178);
PPC_FUNC_IMPL(__imp__sub_83CA0178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23604
	ctx.r4.s64 = ctx.r11.s64 + 23604;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4616
	ctx.r3.s64 = ctx.r7.s64 + -4616;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA01A8"))) PPC_WEAK_FUNC(sub_83CA01A8);
PPC_FUNC_IMPL(__imp__sub_83CA01A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23624
	ctx.r4.s64 = ctx.r11.s64 + 23624;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4604
	ctx.r3.s64 = ctx.r7.s64 + -4604;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA01D8"))) PPC_WEAK_FUNC(sub_83CA01D8);
PPC_FUNC_IMPL(__imp__sub_83CA01D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23804
	ctx.r4.s64 = ctx.r11.s64 + 23804;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4576
	ctx.r3.s64 = ctx.r7.s64 + -4576;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0208"))) PPC_WEAK_FUNC(sub_83CA0208);
PPC_FUNC_IMPL(__imp__sub_83CA0208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23832
	ctx.r4.s64 = ctx.r11.s64 + 23832;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-24
	ctx.r5.s64 = ctx.r4.s64 + -24;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4588
	ctx.r3.s64 = ctx.r7.s64 + -4588;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0238"))) PPC_WEAK_FUNC(sub_83CA0238);
PPC_FUNC_IMPL(__imp__sub_83CA0238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0244"))) PPC_WEAK_FUNC(sub_83CA0244);
PPC_FUNC_IMPL(__imp__sub_83CA0244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0248"))) PPC_WEAK_FUNC(sub_83CA0248);
PPC_FUNC_IMPL(__imp__sub_83CA0248) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r5,r11,24028
	ctx.r5.s64 = ctx.r11.s64 + 24028;
	// addi r3,r10,-4192
	ctx.r3.s64 = ctx.r10.s64 + -4192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CA026C;
	sub_8241F1E8(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27016
	ctx.r3.s64 = ctx.r9.s64 + -27016;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0278;
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

__attribute__((alias("__imp__sub_83CA0288"))) PPC_WEAK_FUNC(sub_83CA0288);
PPC_FUNC_IMPL(__imp__sub_83CA0288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,25124
	ctx.r4.s64 = ctx.r11.s64 + 25124;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2944
	ctx.r3.s64 = ctx.r7.s64 + -2944;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA02B8"))) PPC_WEAK_FUNC(sub_83CA02B8);
PPC_FUNC_IMPL(__imp__sub_83CA02B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,25136
	ctx.r9.s64 = ctx.r11.s64 + 25136;
	// addi r8,r10,-2912
	ctx.r8.s64 = ctx.r10.s64 + -2912;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA02D4"))) PPC_WEAK_FUNC(sub_83CA02D4);
PPC_FUNC_IMPL(__imp__sub_83CA02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA02D8"))) PPC_WEAK_FUNC(sub_83CA02D8);
PPC_FUNC_IMPL(__imp__sub_83CA02D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,25152
	ctx.r9.s64 = ctx.r11.s64 + 25152;
	// addi r8,r10,-2896
	ctx.r8.s64 = ctx.r10.s64 + -2896;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA02F4"))) PPC_WEAK_FUNC(sub_83CA02F4);
PPC_FUNC_IMPL(__imp__sub_83CA02F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA02F8"))) PPC_WEAK_FUNC(sub_83CA02F8);
PPC_FUNC_IMPL(__imp__sub_83CA02F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,25168
	ctx.r9.s64 = ctx.r11.s64 + 25168;
	// addi r8,r10,-2880
	ctx.r8.s64 = ctx.r10.s64 + -2880;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0314"))) PPC_WEAK_FUNC(sub_83CA0314);
PPC_FUNC_IMPL(__imp__sub_83CA0314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0318"))) PPC_WEAK_FUNC(sub_83CA0318);
PPC_FUNC_IMPL(__imp__sub_83CA0318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,25184
	ctx.r9.s64 = ctx.r11.s64 + 25184;
	// addi r8,r10,-2928
	ctx.r8.s64 = ctx.r10.s64 + -2928;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0334"))) PPC_WEAK_FUNC(sub_83CA0334);
PPC_FUNC_IMPL(__imp__sub_83CA0334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0338"))) PPC_WEAK_FUNC(sub_83CA0338);
PPC_FUNC_IMPL(__imp__sub_83CA0338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,25200
	ctx.r9.s64 = ctx.r11.s64 + 25200;
	// addi r8,r10,-2960
	ctx.r8.s64 = ctx.r10.s64 + -2960;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0354"))) PPC_WEAK_FUNC(sub_83CA0354);
PPC_FUNC_IMPL(__imp__sub_83CA0354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0358"))) PPC_WEAK_FUNC(sub_83CA0358);
PPC_FUNC_IMPL(__imp__sub_83CA0358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,25216
	ctx.r9.s64 = ctx.r11.s64 + 25216;
	// addi r8,r10,-2976
	ctx.r8.s64 = ctx.r10.s64 + -2976;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0374"))) PPC_WEAK_FUNC(sub_83CA0374);
PPC_FUNC_IMPL(__imp__sub_83CA0374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0378"))) PPC_WEAK_FUNC(sub_83CA0378);
PPC_FUNC_IMPL(__imp__sub_83CA0378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,25348
	ctx.r4.s64 = ctx.r11.s64 + 25348;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2860
	ctx.r3.s64 = ctx.r7.s64 + -2860;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA03A8"))) PPC_WEAK_FUNC(sub_83CA03A8);
PPC_FUNC_IMPL(__imp__sub_83CA03A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,25476
	ctx.r4.s64 = ctx.r11.s64 + 25476;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2836
	ctx.r3.s64 = ctx.r7.s64 + -2836;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA03D8"))) PPC_WEAK_FUNC(sub_83CA03D8);
PPC_FUNC_IMPL(__imp__sub_83CA03D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,25496
	ctx.r4.s64 = ctx.r11.s64 + 25496;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2848
	ctx.r3.s64 = ctx.r7.s64 + -2848;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0408"))) PPC_WEAK_FUNC(sub_83CA0408);
PPC_FUNC_IMPL(__imp__sub_83CA0408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,26108
	ctx.r4.s64 = ctx.r11.s64 + 26108;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2696
	ctx.r3.s64 = ctx.r7.s64 + -2696;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0438"))) PPC_WEAK_FUNC(sub_83CA0438);
PPC_FUNC_IMPL(__imp__sub_83CA0438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r8,r11,-2616
	ctx.r8.s64 = ctx.r11.s64 + -2616;
	// lfs f0,30624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24504(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-2616(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -2616, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// stfs f0,48(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// stfs f0,52(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// stfs f0,56(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stfs f0,60(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0498"))) PPC_WEAK_FUNC(sub_83CA0498);
PPC_FUNC_IMPL(__imp__sub_83CA0498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r8,r11,-2680
	ctx.r8.s64 = ctx.r11.s64 + -2680;
	// lfs f0,30624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24504(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-2680(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -2680, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// stfs f0,48(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// stfs f0,52(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// stfs f0,56(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// stfs f0,60(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA04F8"))) PPC_WEAK_FUNC(sub_83CA04F8);
PPC_FUNC_IMPL(__imp__sub_83CA04F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r4,r10,26208
	ctx.r4.s64 = ctx.r10.s64 + 26208;
	// lis r8,-31746
	ctx.r8.s64 = -2080505856;
	// lfs f3,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-12
	ctx.r5.s64 = ctx.r4.s64 + -12;
	// addi r3,r8,-2552
	ctx.r3.s64 = ctx.r8.s64 + -2552;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0524"))) PPC_WEAK_FUNC(sub_83CA0524);
PPC_FUNC_IMPL(__imp__sub_83CA0524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0528"))) PPC_WEAK_FUNC(sub_83CA0528);
PPC_FUNC_IMPL(__imp__sub_83CA0528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r4,r11,26292
	ctx.r4.s64 = ctx.r11.s64 + 26292;
	// addi r3,r10,-2540
	ctx.r3.s64 = ctx.r10.s64 + -2540;
	// addi r5,r4,-12
	ctx.r5.s64 = ctx.r4.s64 + -12;
	// lfs f2,-20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -16);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA054C"))) PPC_WEAK_FUNC(sub_83CA054C);
PPC_FUNC_IMPL(__imp__sub_83CA054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0550"))) PPC_WEAK_FUNC(sub_83CA0550);
PPC_FUNC_IMPL(__imp__sub_83CA0550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,26508
	ctx.r4.s64 = ctx.r11.s64 + 26508;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 + 68;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2528
	ctx.r3.s64 = ctx.r7.s64 + -2528;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0580"))) PPC_WEAK_FUNC(sub_83CA0580);
PPC_FUNC_IMPL(__imp__sub_83CA0580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,26652
	ctx.r4.s64 = ctx.r11.s64 + 26652;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 + 68;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2512
	ctx.r3.s64 = ctx.r7.s64 + -2512;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA05B0"))) PPC_WEAK_FUNC(sub_83CA05B0);
PPC_FUNC_IMPL(__imp__sub_83CA05B0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r5,r11,26792
	ctx.r5.s64 = ctx.r11.s64 + 26792;
	// addi r3,r10,-2480
	ctx.r3.s64 = ctx.r10.s64 + -2480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CA05D4;
	sub_8241F1E8(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-26904
	ctx.r3.s64 = ctx.r9.s64 + -26904;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA05E0;
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

__attribute__((alias("__imp__sub_83CA05F0"))) PPC_WEAK_FUNC(sub_83CA05F0);
PPC_FUNC_IMPL(__imp__sub_83CA05F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r4,r11,26828
	ctx.r4.s64 = ctx.r11.s64 + 26828;
	// addi r3,r10,-2496
	ctx.r3.s64 = ctx.r10.s64 + -2496;
	// addi r5,r4,-20
	ctx.r5.s64 = ctx.r4.s64 + -20;
	// lfs f2,-52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -48);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0614"))) PPC_WEAK_FUNC(sub_83CA0614);
PPC_FUNC_IMPL(__imp__sub_83CA0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0618"))) PPC_WEAK_FUNC(sub_83CA0618);
PPC_FUNC_IMPL(__imp__sub_83CA0618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// addi r4,r10,26940
	ctx.r4.s64 = ctx.r10.s64 + 26940;
	// addi r3,r9,-2456
	ctx.r3.s64 = ctx.r9.s64 + -2456;
	// lfs f3,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0640"))) PPC_WEAK_FUNC(sub_83CA0640);
PPC_FUNC_IMPL(__imp__sub_83CA0640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-2464
	ctx.r3.s64 = ctx.r11.s64 + -2464;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0650"))) PPC_WEAK_FUNC(sub_83CA0650);
PPC_FUNC_IMPL(__imp__sub_83CA0650) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r5,r11,26952
	ctx.r5.s64 = ctx.r11.s64 + 26952;
	// addi r3,r10,-2440
	ctx.r3.s64 = ctx.r10.s64 + -2440;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CA0674;
	sub_8241F1E8(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-26888
	ctx.r3.s64 = ctx.r9.s64 + -26888;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0680;
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

__attribute__((alias("__imp__sub_83CA0690"))) PPC_WEAK_FUNC(sub_83CA0690);
PPC_FUNC_IMPL(__imp__sub_83CA0690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// addi r4,r10,27028
	ctx.r4.s64 = ctx.r10.s64 + 27028;
	// addi r3,r9,-2416
	ctx.r3.s64 = ctx.r9.s64 + -2416;
	// lfs f3,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA06B8"))) PPC_WEAK_FUNC(sub_83CA06B8);
PPC_FUNC_IMPL(__imp__sub_83CA06B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-2424
	ctx.r3.s64 = ctx.r11.s64 + -2424;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA06C8"))) PPC_WEAK_FUNC(sub_83CA06C8);
PPC_FUNC_IMPL(__imp__sub_83CA06C8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r5,r11,27040
	ctx.r5.s64 = ctx.r11.s64 + 27040;
	// addi r3,r10,-2400
	ctx.r3.s64 = ctx.r10.s64 + -2400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CA06EC;
	sub_8241F1E8(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-26872
	ctx.r3.s64 = ctx.r9.s64 + -26872;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA06F8;
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

__attribute__((alias("__imp__sub_83CA0708"))) PPC_WEAK_FUNC(sub_83CA0708);
PPC_FUNC_IMPL(__imp__sub_83CA0708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,27228
	ctx.r4.s64 = ctx.r11.s64 + 27228;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2364
	ctx.r3.s64 = ctx.r7.s64 + -2364;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0738"))) PPC_WEAK_FUNC(sub_83CA0738);
PPC_FUNC_IMPL(__imp__sub_83CA0738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// addi r4,r10,27252
	ctx.r4.s64 = ctx.r10.s64 + 27252;
	// addi r3,r9,-2376
	ctx.r3.s64 = ctx.r9.s64 + -2376;
	// lfs f3,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-20
	ctx.r5.s64 = ctx.r4.s64 + -20;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0760"))) PPC_WEAK_FUNC(sub_83CA0760);
PPC_FUNC_IMPL(__imp__sub_83CA0760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-2384
	ctx.r3.s64 = ctx.r11.s64 + -2384;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0770"))) PPC_WEAK_FUNC(sub_83CA0770);
PPC_FUNC_IMPL(__imp__sub_83CA0770) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r5,r11,27264
	ctx.r5.s64 = ctx.r11.s64 + 27264;
	// addi r3,r10,-2352
	ctx.r3.s64 = ctx.r10.s64 + -2352;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CA0794;
	sub_8241F1E8(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-26856
	ctx.r3.s64 = ctx.r9.s64 + -26856;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA07A0;
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

__attribute__((alias("__imp__sub_83CA07B0"))) PPC_WEAK_FUNC(sub_83CA07B0);
PPC_FUNC_IMPL(__imp__sub_83CA07B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// addi r4,r10,27344
	ctx.r4.s64 = ctx.r10.s64 + 27344;
	// addi r3,r9,-2328
	ctx.r3.s64 = ctx.r9.s64 + -2328;
	// lfs f3,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-20
	ctx.r5.s64 = ctx.r4.s64 + -20;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA07D8"))) PPC_WEAK_FUNC(sub_83CA07D8);
PPC_FUNC_IMPL(__imp__sub_83CA07D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA07E8"))) PPC_WEAK_FUNC(sub_83CA07E8);
PPC_FUNC_IMPL(__imp__sub_83CA07E8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r5,r11,27356
	ctx.r5.s64 = ctx.r11.s64 + 27356;
	// addi r3,r10,-2312
	ctx.r3.s64 = ctx.r10.s64 + -2312;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CA080C;
	sub_8241F1E8(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-26840
	ctx.r3.s64 = ctx.r9.s64 + -26840;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0818;
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

__attribute__((alias("__imp__sub_83CA0828"))) PPC_WEAK_FUNC(sub_83CA0828);
PPC_FUNC_IMPL(__imp__sub_83CA0828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// addi r4,r10,27444
	ctx.r4.s64 = ctx.r10.s64 + 27444;
	// addi r3,r9,-2288
	ctx.r3.s64 = ctx.r9.s64 + -2288;
	// lfs f3,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0850"))) PPC_WEAK_FUNC(sub_83CA0850);
PPC_FUNC_IMPL(__imp__sub_83CA0850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-2296
	ctx.r3.s64 = ctx.r11.s64 + -2296;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0860"))) PPC_WEAK_FUNC(sub_83CA0860);
PPC_FUNC_IMPL(__imp__sub_83CA0860) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r5,r11,27456
	ctx.r5.s64 = ctx.r11.s64 + 27456;
	// addi r3,r10,-2272
	ctx.r3.s64 = ctx.r10.s64 + -2272;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CA0884;
	sub_8241F1E8(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-26824
	ctx.r3.s64 = ctx.r9.s64 + -26824;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0890;
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

__attribute__((alias("__imp__sub_83CA08A0"))) PPC_WEAK_FUNC(sub_83CA08A0);
PPC_FUNC_IMPL(__imp__sub_83CA08A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,27632
	ctx.r4.s64 = ctx.r11.s64 + 27632;
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-2256
	ctx.r3.s64 = ctx.r7.s64 + -2256;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA08D0"))) PPC_WEAK_FUNC(sub_83CA08D0);
PPC_FUNC_IMPL(__imp__sub_83CA08D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// addi r11,r10,27752
	ctx.r11.s64 = ctx.r10.s64 + 27752;
	// addi r3,r9,-2232
	ctx.r3.s64 = ctx.r9.s64 + -2232;
	// addi r5,r11,76
	ctx.r5.s64 = ctx.r11.s64 + 76;
	// lfs f3,27752(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27752);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA08F8"))) PPC_WEAK_FUNC(sub_83CA08F8);
PPC_FUNC_IMPL(__imp__sub_83CA08F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-2240
	ctx.r3.s64 = ctx.r11.s64 + -2240;
	// b 0x8257efb8
	sub_8257EFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0908"))) PPC_WEAK_FUNC(sub_83CA0908);
PPC_FUNC_IMPL(__imp__sub_83CA0908) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r5,r11,27864
	ctx.r5.s64 = ctx.r11.s64 + 27864;
	// addi r3,r10,-2216
	ctx.r3.s64 = ctx.r10.s64 + -2216;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83CA092C;
	sub_8241F1E8(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-26808
	ctx.r3.s64 = ctx.r9.s64 + -26808;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0938;
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

__attribute__((alias("__imp__sub_83CA0948"))) PPC_WEAK_FUNC(sub_83CA0948);
PPC_FUNC_IMPL(__imp__sub_83CA0948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// bl 0x831d1a10
	ctx.lr = 0x83CA0960;
	sub_831D1A10(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-2172(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -2172, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA097C"))) PPC_WEAK_FUNC(sub_83CA097C);
PPC_FUNC_IMPL(__imp__sub_83CA097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0980"))) PPC_WEAK_FUNC(sub_83CA0980);
PPC_FUNC_IMPL(__imp__sub_83CA0980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-30564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30564);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32036);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x831d1a10
	ctx.lr = 0x83CA09A4;
	sub_831D1A10(ctx, base);
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-2176(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -2176, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA09C0"))) PPC_WEAK_FUNC(sub_83CA09C0);
PPC_FUNC_IMPL(__imp__sub_83CA09C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-30560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30560);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32036);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x831d1a10
	ctx.lr = 0x83CA09E4;
	sub_831D1A10(ctx, base);
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-2164(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -2164, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0A00"))) PPC_WEAK_FUNC(sub_83CA0A00);
PPC_FUNC_IMPL(__imp__sub_83CA0A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// vspltisw v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// vcsxwfp128 v11,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// lis r7,-31746
	ctx.r7.s64 = -2080505856;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27732);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r7,-2192
	ctx.r6.s64 = ctx.r7.s64 + -2192;
	// lfs f12,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v10,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v10,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vrsqrtefp128 v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v61.f32))));
	// vmulfp128 v13,v61,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v13,v12,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v10,v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0A68"))) PPC_WEAK_FUNC(sub_83CA0A68);
PPC_FUNC_IMPL(__imp__sub_83CA0A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// lfs f0,-30576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28192);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-2160(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -2160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0A88"))) PPC_WEAK_FUNC(sub_83CA0A88);
PPC_FUNC_IMPL(__imp__sub_83CA0A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-30576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-6664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6664);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x831d1a10
	ctx.lr = 0x83CA0AAC;
	sub_831D1A10(ctx, base);
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,-2168(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -2168, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0AC8"))) PPC_WEAK_FUNC(sub_83CA0AC8);
PPC_FUNC_IMPL(__imp__sub_83CA0AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-31746
	ctx.r9.s64 = -2080505856;
	// lfs f0,-30576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-2156(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -2156, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0AE8"))) PPC_WEAK_FUNC(sub_83CA0AE8);
PPC_FUNC_IMPL(__imp__sub_83CA0AE8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-1904
	ctx.r3.s64 = ctx.r11.s64 + -1904;
	// bl 0x83522f18
	ctx.lr = 0x83CA0B00;
	sub_83522F18(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-26728
	ctx.r3.s64 = ctx.r10.s64 + -26728;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0B0C;
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

__attribute__((alias("__imp__sub_83CA0B1C"))) PPC_WEAK_FUNC(sub_83CA0B1C);
PPC_FUNC_IMPL(__imp__sub_83CA0B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0B20"))) PPC_WEAK_FUNC(sub_83CA0B20);
PPC_FUNC_IMPL(__imp__sub_83CA0B20) {
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
	// bl 0x82594ff8
	ctx.lr = 0x83CA0B30;
	sub_82594FF8(ctx, base);
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-1904
	ctx.r3.s64 = ctx.r11.s64 + -1904;
	// bl 0x83522f18
	ctx.lr = 0x83CA0B3C;
	sub_83522F18(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-26776
	ctx.r3.s64 = ctx.r10.s64 + -26776;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0B48;
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

__attribute__((alias("__imp__sub_83CA0B58"))) PPC_WEAK_FUNC(sub_83CA0B58);
PPC_FUNC_IMPL(__imp__sub_83CA0B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,50
	ctx.r10.s64 = 50;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-1600
	ctx.r8.s64 = ctx.r11.s64 + -1600;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
loc_83CA0B78:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ca0b78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA0B78;
	// li r9,50
	ctx.r9.s64 = 50;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA0B94:
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83ca0b94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA0B94;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0BA4"))) PPC_WEAK_FUNC(sub_83CA0BA4);
PPC_FUNC_IMPL(__imp__sub_83CA0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0BA8"))) PPC_WEAK_FUNC(sub_83CA0BA8);
PPC_FUNC_IMPL(__imp__sub_83CA0BA8) {
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
	// bl 0x82594ff8
	ctx.lr = 0x83CA0BB8;
	sub_82594FF8(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26712
	ctx.r3.s64 = ctx.r11.s64 + -26712;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0BC4;
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

__attribute__((alias("__imp__sub_83CA0BD4"))) PPC_WEAK_FUNC(sub_83CA0BD4);
PPC_FUNC_IMPL(__imp__sub_83CA0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0BD8"))) PPC_WEAK_FUNC(sub_83CA0BD8);
PPC_FUNC_IMPL(__imp__sub_83CA0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26704
	ctx.r3.s64 = ctx.r11.s64 + -26704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0BE4"))) PPC_WEAK_FUNC(sub_83CA0BE4);
PPC_FUNC_IMPL(__imp__sub_83CA0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0BE8"))) PPC_WEAK_FUNC(sub_83CA0BE8);
PPC_FUNC_IMPL(__imp__sub_83CA0BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r8,r11,-1036
	ctx.r8.s64 = ctx.r11.s64 + -1036;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83CA0C00:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ca0c00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA0C00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0C14"))) PPC_WEAK_FUNC(sub_83CA0C14);
PPC_FUNC_IMPL(__imp__sub_83CA0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0C18"))) PPC_WEAK_FUNC(sub_83CA0C18);
PPC_FUNC_IMPL(__imp__sub_83CA0C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,-952
	ctx.r31.s64 = ctx.r11.s64 + -952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83524b10
	ctx.lr = 0x83CA0C38;
	sub_83524B10(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,-940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -940, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0C58"))) PPC_WEAK_FUNC(sub_83CA0C58);
PPC_FUNC_IMPL(__imp__sub_83CA0C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26544
	ctx.r3.s64 = ctx.r11.s64 + -26544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0C64"))) PPC_WEAK_FUNC(sub_83CA0C64);
PPC_FUNC_IMPL(__imp__sub_83CA0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0C68"))) PPC_WEAK_FUNC(sub_83CA0C68);
PPC_FUNC_IMPL(__imp__sub_83CA0C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0C74"))) PPC_WEAK_FUNC(sub_83CA0C74);
PPC_FUNC_IMPL(__imp__sub_83CA0C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0C78"))) PPC_WEAK_FUNC(sub_83CA0C78);
PPC_FUNC_IMPL(__imp__sub_83CA0C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26496
	ctx.r3.s64 = ctx.r11.s64 + -26496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0C84"))) PPC_WEAK_FUNC(sub_83CA0C84);
PPC_FUNC_IMPL(__imp__sub_83CA0C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0C88"))) PPC_WEAK_FUNC(sub_83CA0C88);
PPC_FUNC_IMPL(__imp__sub_83CA0C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26616
	ctx.r3.s64 = ctx.r11.s64 + -26616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0C94"))) PPC_WEAK_FUNC(sub_83CA0C94);
PPC_FUNC_IMPL(__imp__sub_83CA0C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0C98"))) PPC_WEAK_FUNC(sub_83CA0C98);
PPC_FUNC_IMPL(__imp__sub_83CA0C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26592
	ctx.r3.s64 = ctx.r11.s64 + -26592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0CA4"))) PPC_WEAK_FUNC(sub_83CA0CA4);
PPC_FUNC_IMPL(__imp__sub_83CA0CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0CA8"))) PPC_WEAK_FUNC(sub_83CA0CA8);
PPC_FUNC_IMPL(__imp__sub_83CA0CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26568
	ctx.r3.s64 = ctx.r11.s64 + -26568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0CB4"))) PPC_WEAK_FUNC(sub_83CA0CB4);
PPC_FUNC_IMPL(__imp__sub_83CA0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0CB8"))) PPC_WEAK_FUNC(sub_83CA0CB8);
PPC_FUNC_IMPL(__imp__sub_83CA0CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26472
	ctx.r3.s64 = ctx.r11.s64 + -26472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0CC4"))) PPC_WEAK_FUNC(sub_83CA0CC4);
PPC_FUNC_IMPL(__imp__sub_83CA0CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0CC8"))) PPC_WEAK_FUNC(sub_83CA0CC8);
PPC_FUNC_IMPL(__imp__sub_83CA0CC8) {
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
	// bl 0x82594ff8
	ctx.lr = 0x83CA0CD8;
	sub_82594FF8(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26456
	ctx.r3.s64 = ctx.r11.s64 + -26456;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0CE4;
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

__attribute__((alias("__imp__sub_83CA0CF4"))) PPC_WEAK_FUNC(sub_83CA0CF4);
PPC_FUNC_IMPL(__imp__sub_83CA0CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0CF8"))) PPC_WEAK_FUNC(sub_83CA0CF8);
PPC_FUNC_IMPL(__imp__sub_83CA0CF8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r11,r11,-276
	ctx.r11.s64 = ctx.r11.s64 + -276;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82596fa8
	ctx.lr = 0x83CA0D14;
	sub_82596FA8(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-26448
	ctx.r3.s64 = ctx.r10.s64 + -26448;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0D20;
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

__attribute__((alias("__imp__sub_83CA0D30"))) PPC_WEAK_FUNC(sub_83CA0D30);
PPC_FUNC_IMPL(__imp__sub_83CA0D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0D3C"))) PPC_WEAK_FUNC(sub_83CA0D3C);
PPC_FUNC_IMPL(__imp__sub_83CA0D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0D40"))) PPC_WEAK_FUNC(sub_83CA0D40);
PPC_FUNC_IMPL(__imp__sub_83CA0D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82594ff8
	ctx.lr = 0x83CA0D54;
	sub_82594FF8(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,-144
	ctx.r31.s64 = ctx.r11.s64 + -144;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82596fa8
	ctx.lr = 0x83CA0D64;
	sub_82596FA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// addi r3,r9,-26416
	ctx.r3.s64 = ctx.r9.s64 + -26416;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0D90;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA0DA4"))) PPC_WEAK_FUNC(sub_83CA0DA4);
PPC_FUNC_IMPL(__imp__sub_83CA0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0DA8"))) PPC_WEAK_FUNC(sub_83CA0DA8);
PPC_FUNC_IMPL(__imp__sub_83CA0DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-26400
	ctx.r3.s64 = ctx.r11.s64 + -26400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA0DB4"))) PPC_WEAK_FUNC(sub_83CA0DB4);
PPC_FUNC_IMPL(__imp__sub_83CA0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0DB8"))) PPC_WEAK_FUNC(sub_83CA0DB8);
PPC_FUNC_IMPL(__imp__sub_83CA0DB8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// bl 0x83523120
	ctx.lr = 0x83CA0DD0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-26376
	ctx.r3.s64 = ctx.r10.s64 + -26376;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0DDC;
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

__attribute__((alias("__imp__sub_83CA0DEC"))) PPC_WEAK_FUNC(sub_83CA0DEC);
PPC_FUNC_IMPL(__imp__sub_83CA0DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0DF0"))) PPC_WEAK_FUNC(sub_83CA0DF0);
PPC_FUNC_IMPL(__imp__sub_83CA0DF0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,1020
	ctx.r3.s64 = ctx.r11.s64 + 1020;
	// bl 0x83523120
	ctx.lr = 0x83CA0E08;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-25752
	ctx.r3.s64 = ctx.r10.s64 + -25752;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0E14;
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

__attribute__((alias("__imp__sub_83CA0E24"))) PPC_WEAK_FUNC(sub_83CA0E24);
PPC_FUNC_IMPL(__imp__sub_83CA0E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0E28"))) PPC_WEAK_FUNC(sub_83CA0E28);
PPC_FUNC_IMPL(__imp__sub_83CA0E28) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,1052
	ctx.r3.s64 = ctx.r11.s64 + 1052;
	// bl 0x83523120
	ctx.lr = 0x83CA0E40;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-25720
	ctx.r3.s64 = ctx.r10.s64 + -25720;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0E4C;
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

__attribute__((alias("__imp__sub_83CA0E5C"))) PPC_WEAK_FUNC(sub_83CA0E5C);
PPC_FUNC_IMPL(__imp__sub_83CA0E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0E60"))) PPC_WEAK_FUNC(sub_83CA0E60);
PPC_FUNC_IMPL(__imp__sub_83CA0E60) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,1128
	ctx.r3.s64 = ctx.r11.s64 + 1128;
	// bl 0x83523120
	ctx.lr = 0x83CA0E78;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-25704
	ctx.r3.s64 = ctx.r10.s64 + -25704;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0E84;
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

__attribute__((alias("__imp__sub_83CA0E94"))) PPC_WEAK_FUNC(sub_83CA0E94);
PPC_FUNC_IMPL(__imp__sub_83CA0E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA0E98"))) PPC_WEAK_FUNC(sub_83CA0E98);
PPC_FUNC_IMPL(__imp__sub_83CA0E98) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,7472
	ctx.r3.s64 = ctx.r11.s64 + 7472;
	// addi r4,r10,-26864
	ctx.r4.s64 = ctx.r10.s64 + -26864;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83CA0EC4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-25688
	ctx.r3.s64 = ctx.r9.s64 + -25688;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0ED0;
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

__attribute__((alias("__imp__sub_83CA0EE0"))) PPC_WEAK_FUNC(sub_83CA0EE0);
PPC_FUNC_IMPL(__imp__sub_83CA0EE0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,5244
	ctx.r3.s64 = ctx.r11.s64 + 5244;
	// addi r4,r10,-26852
	ctx.r4.s64 = ctx.r10.s64 + -26852;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83CA0F0C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-25672
	ctx.r3.s64 = ctx.r9.s64 + -25672;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0F18;
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

__attribute__((alias("__imp__sub_83CA0F28"))) PPC_WEAK_FUNC(sub_83CA0F28);
PPC_FUNC_IMPL(__imp__sub_83CA0F28) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,7412
	ctx.r3.s64 = ctx.r11.s64 + 7412;
	// addi r4,r10,-26836
	ctx.r4.s64 = ctx.r10.s64 + -26836;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83523160
	ctx.lr = 0x83CA0F54;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-25656
	ctx.r3.s64 = ctx.r9.s64 + -25656;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0F60;
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

__attribute__((alias("__imp__sub_83CA0F70"))) PPC_WEAK_FUNC(sub_83CA0F70);
PPC_FUNC_IMPL(__imp__sub_83CA0F70) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,7548
	ctx.r3.s64 = ctx.r11.s64 + 7548;
	// addi r4,r10,-26832
	ctx.r4.s64 = ctx.r10.s64 + -26832;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83CA0F9C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-25640
	ctx.r3.s64 = ctx.r9.s64 + -25640;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0FA8;
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

__attribute__((alias("__imp__sub_83CA0FB8"))) PPC_WEAK_FUNC(sub_83CA0FB8);
PPC_FUNC_IMPL(__imp__sub_83CA0FB8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,7352
	ctx.r3.s64 = ctx.r11.s64 + 7352;
	// addi r4,r10,-26828
	ctx.r4.s64 = ctx.r10.s64 + -26828;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83CA0FE4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-25624
	ctx.r3.s64 = ctx.r9.s64 + -25624;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA0FF0;
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

__attribute__((alias("__imp__sub_83CA1000"))) PPC_WEAK_FUNC(sub_83CA1000);
PPC_FUNC_IMPL(__imp__sub_83CA1000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,5304
	ctx.r11.s64 = ctx.r11.s64 + 5304;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,21716
	ctx.r10.s64 = ctx.r10.s64 + 21716;
loc_83CA1020:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ca1020
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA1020;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25608
	ctx.r3.s64 = ctx.r11.s64 + -25608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA1038"))) PPC_WEAK_FUNC(sub_83CA1038);
PPC_FUNC_IMPL(__imp__sub_83CA1038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,1132
	ctx.r11.s64 = ctx.r11.s64 + 1132;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,21716
	ctx.r9.s64 = ctx.r9.s64 + 21716;
loc_83CA105C:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ca105c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA105C;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25568
	ctx.r3.s64 = ctx.r11.s64 + -25568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA107C"))) PPC_WEAK_FUNC(sub_83CA107C);
PPC_FUNC_IMPL(__imp__sub_83CA107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1080"))) PPC_WEAK_FUNC(sub_83CA1080);
PPC_FUNC_IMPL(__imp__sub_83CA1080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25528
	ctx.r3.s64 = ctx.r11.s64 + -25528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA108C"))) PPC_WEAK_FUNC(sub_83CA108C);
PPC_FUNC_IMPL(__imp__sub_83CA108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1090"))) PPC_WEAK_FUNC(sub_83CA1090);
PPC_FUNC_IMPL(__imp__sub_83CA1090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25432
	ctx.r3.s64 = ctx.r11.s64 + -25432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA109C"))) PPC_WEAK_FUNC(sub_83CA109C);
PPC_FUNC_IMPL(__imp__sub_83CA109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA10A0"))) PPC_WEAK_FUNC(sub_83CA10A0);
PPC_FUNC_IMPL(__imp__sub_83CA10A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-25336
	ctx.r3.s64 = ctx.r11.s64 + -25336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA10AC"))) PPC_WEAK_FUNC(sub_83CA10AC);
PPC_FUNC_IMPL(__imp__sub_83CA10AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA10B0"))) PPC_WEAK_FUNC(sub_83CA10B0);
PPC_FUNC_IMPL(__imp__sub_83CA10B0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,7656
	ctx.r3.s64 = ctx.r11.s64 + 7656;
	// bl 0x83523120
	ctx.lr = 0x83CA10C8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-25240
	ctx.r3.s64 = ctx.r10.s64 + -25240;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA10D4;
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

__attribute__((alias("__imp__sub_83CA10E4"))) PPC_WEAK_FUNC(sub_83CA10E4);
PPC_FUNC_IMPL(__imp__sub_83CA10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA10E8"))) PPC_WEAK_FUNC(sub_83CA10E8);
PPC_FUNC_IMPL(__imp__sub_83CA10E8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,8320
	ctx.r3.s64 = ctx.r11.s64 + 8320;
	// bl 0x83523120
	ctx.lr = 0x83CA1100;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-25224
	ctx.r3.s64 = ctx.r10.s64 + -25224;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA110C;
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

__attribute__((alias("__imp__sub_83CA111C"))) PPC_WEAK_FUNC(sub_83CA111C);
PPC_FUNC_IMPL(__imp__sub_83CA111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1120"))) PPC_WEAK_FUNC(sub_83CA1120);
PPC_FUNC_IMPL(__imp__sub_83CA1120) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,8332
	ctx.r3.s64 = ctx.r11.s64 + 8332;
	// bl 0x83523120
	ctx.lr = 0x83CA1138;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-24728
	ctx.r3.s64 = ctx.r10.s64 + -24728;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1144;
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

__attribute__((alias("__imp__sub_83CA1154"))) PPC_WEAK_FUNC(sub_83CA1154);
PPC_FUNC_IMPL(__imp__sub_83CA1154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1158"))) PPC_WEAK_FUNC(sub_83CA1158);
PPC_FUNC_IMPL(__imp__sub_83CA1158) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,8348
	ctx.r3.s64 = ctx.r11.s64 + 8348;
	// bl 0x83523120
	ctx.lr = 0x83CA1170;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-24712
	ctx.r3.s64 = ctx.r10.s64 + -24712;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA117C;
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

__attribute__((alias("__imp__sub_83CA118C"))) PPC_WEAK_FUNC(sub_83CA118C);
PPC_FUNC_IMPL(__imp__sub_83CA118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1190"))) PPC_WEAK_FUNC(sub_83CA1190);
PPC_FUNC_IMPL(__imp__sub_83CA1190) {
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
	// bl 0x82594ff8
	ctx.lr = 0x83CA11A0;
	sub_82594FF8(ctx, base);
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-24696
	ctx.r3.s64 = ctx.r11.s64 + -24696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA11AC;
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

__attribute__((alias("__imp__sub_83CA11BC"))) PPC_WEAK_FUNC(sub_83CA11BC);
PPC_FUNC_IMPL(__imp__sub_83CA11BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA11C0"))) PPC_WEAK_FUNC(sub_83CA11C0);
PPC_FUNC_IMPL(__imp__sub_83CA11C0) {
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
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83CA11E4;
	sub_82595718(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,8368
	ctx.r9.s64 = ctx.r10.s64 + 8368;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31786
	ctx.r8.s64 = -2083127296;
	// addi r3,r8,-23936
	ctx.r3.s64 = ctx.r8.s64 + -23936;
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
	// stb r10,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1228;
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

__attribute__((alias("__imp__sub_83CA1238"))) PPC_WEAK_FUNC(sub_83CA1238);
PPC_FUNC_IMPL(__imp__sub_83CA1238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-24656
	ctx.r3.s64 = ctx.r11.s64 + -24656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA1244"))) PPC_WEAK_FUNC(sub_83CA1244);
PPC_FUNC_IMPL(__imp__sub_83CA1244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1248"))) PPC_WEAK_FUNC(sub_83CA1248);
PPC_FUNC_IMPL(__imp__sub_83CA1248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-24536
	ctx.r3.s64 = ctx.r11.s64 + -24536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA1254"))) PPC_WEAK_FUNC(sub_83CA1254);
PPC_FUNC_IMPL(__imp__sub_83CA1254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1258"))) PPC_WEAK_FUNC(sub_83CA1258);
PPC_FUNC_IMPL(__imp__sub_83CA1258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-24416
	ctx.r3.s64 = ctx.r11.s64 + -24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA1264"))) PPC_WEAK_FUNC(sub_83CA1264);
PPC_FUNC_IMPL(__imp__sub_83CA1264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1268"))) PPC_WEAK_FUNC(sub_83CA1268);
PPC_FUNC_IMPL(__imp__sub_83CA1268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-24296
	ctx.r3.s64 = ctx.r11.s64 + -24296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA1274"))) PPC_WEAK_FUNC(sub_83CA1274);
PPC_FUNC_IMPL(__imp__sub_83CA1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1278"))) PPC_WEAK_FUNC(sub_83CA1278);
PPC_FUNC_IMPL(__imp__sub_83CA1278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-24176
	ctx.r3.s64 = ctx.r11.s64 + -24176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA1284"))) PPC_WEAK_FUNC(sub_83CA1284);
PPC_FUNC_IMPL(__imp__sub_83CA1284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1288"))) PPC_WEAK_FUNC(sub_83CA1288);
PPC_FUNC_IMPL(__imp__sub_83CA1288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-24056
	ctx.r3.s64 = ctx.r11.s64 + -24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA1294"))) PPC_WEAK_FUNC(sub_83CA1294);
PPC_FUNC_IMPL(__imp__sub_83CA1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1298"))) PPC_WEAK_FUNC(sub_83CA1298);
PPC_FUNC_IMPL(__imp__sub_83CA1298) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,8468
	ctx.r3.s64 = ctx.r11.s64 + 8468;
	// bl 0x83523120
	ctx.lr = 0x83CA12B0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23848
	ctx.r3.s64 = ctx.r10.s64 + -23848;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA12BC;
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

__attribute__((alias("__imp__sub_83CA12CC"))) PPC_WEAK_FUNC(sub_83CA12CC);
PPC_FUNC_IMPL(__imp__sub_83CA12CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA12D0"))) PPC_WEAK_FUNC(sub_83CA12D0);
PPC_FUNC_IMPL(__imp__sub_83CA12D0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,8508
	ctx.r3.s64 = ctx.r11.s64 + 8508;
	// bl 0x83523120
	ctx.lr = 0x83CA12E8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23792
	ctx.r3.s64 = ctx.r10.s64 + -23792;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA12F4;
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

__attribute__((alias("__imp__sub_83CA1304"))) PPC_WEAK_FUNC(sub_83CA1304);
PPC_FUNC_IMPL(__imp__sub_83CA1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1308"))) PPC_WEAK_FUNC(sub_83CA1308);
PPC_FUNC_IMPL(__imp__sub_83CA1308) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,8540
	ctx.r3.s64 = ctx.r11.s64 + 8540;
	// bl 0x83523120
	ctx.lr = 0x83CA1320;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23760
	ctx.r3.s64 = ctx.r10.s64 + -23760;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA132C;
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

__attribute__((alias("__imp__sub_83CA133C"))) PPC_WEAK_FUNC(sub_83CA133C);
PPC_FUNC_IMPL(__imp__sub_83CA133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1340"))) PPC_WEAK_FUNC(sub_83CA1340);
PPC_FUNC_IMPL(__imp__sub_83CA1340) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,8572
	ctx.r3.s64 = ctx.r11.s64 + 8572;
	// bl 0x83523120
	ctx.lr = 0x83CA1358;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23728
	ctx.r3.s64 = ctx.r10.s64 + -23728;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1364;
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

__attribute__((alias("__imp__sub_83CA1374"))) PPC_WEAK_FUNC(sub_83CA1374);
PPC_FUNC_IMPL(__imp__sub_83CA1374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1378"))) PPC_WEAK_FUNC(sub_83CA1378);
PPC_FUNC_IMPL(__imp__sub_83CA1378) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9324
	ctx.r3.s64 = ctx.r11.s64 + 9324;
	// bl 0x83523120
	ctx.lr = 0x83CA1390;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23696
	ctx.r3.s64 = ctx.r10.s64 + -23696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA139C;
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

__attribute__((alias("__imp__sub_83CA13AC"))) PPC_WEAK_FUNC(sub_83CA13AC);
PPC_FUNC_IMPL(__imp__sub_83CA13AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA13B0"))) PPC_WEAK_FUNC(sub_83CA13B0);
PPC_FUNC_IMPL(__imp__sub_83CA13B0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9325
	ctx.r3.s64 = ctx.r11.s64 + 9325;
	// bl 0x83523120
	ctx.lr = 0x83CA13C8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23680
	ctx.r3.s64 = ctx.r10.s64 + -23680;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA13D4;
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

__attribute__((alias("__imp__sub_83CA13E4"))) PPC_WEAK_FUNC(sub_83CA13E4);
PPC_FUNC_IMPL(__imp__sub_83CA13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA13E8"))) PPC_WEAK_FUNC(sub_83CA13E8);
PPC_FUNC_IMPL(__imp__sub_83CA13E8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9326
	ctx.r3.s64 = ctx.r11.s64 + 9326;
	// bl 0x83523120
	ctx.lr = 0x83CA1400;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23664
	ctx.r3.s64 = ctx.r10.s64 + -23664;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA140C;
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

__attribute__((alias("__imp__sub_83CA141C"))) PPC_WEAK_FUNC(sub_83CA141C);
PPC_FUNC_IMPL(__imp__sub_83CA141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1420"))) PPC_WEAK_FUNC(sub_83CA1420);
PPC_FUNC_IMPL(__imp__sub_83CA1420) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9332
	ctx.r3.s64 = ctx.r11.s64 + 9332;
	// bl 0x83523120
	ctx.lr = 0x83CA1438;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23648
	ctx.r3.s64 = ctx.r10.s64 + -23648;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1444;
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

__attribute__((alias("__imp__sub_83CA1454"))) PPC_WEAK_FUNC(sub_83CA1454);
PPC_FUNC_IMPL(__imp__sub_83CA1454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1458"))) PPC_WEAK_FUNC(sub_83CA1458);
PPC_FUNC_IMPL(__imp__sub_83CA1458) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9340
	ctx.r3.s64 = ctx.r11.s64 + 9340;
	// bl 0x83523120
	ctx.lr = 0x83CA1470;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23632
	ctx.r3.s64 = ctx.r10.s64 + -23632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA147C;
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

__attribute__((alias("__imp__sub_83CA148C"))) PPC_WEAK_FUNC(sub_83CA148C);
PPC_FUNC_IMPL(__imp__sub_83CA148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1490"))) PPC_WEAK_FUNC(sub_83CA1490);
PPC_FUNC_IMPL(__imp__sub_83CA1490) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9348
	ctx.r3.s64 = ctx.r11.s64 + 9348;
	// bl 0x83523120
	ctx.lr = 0x83CA14A8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23616
	ctx.r3.s64 = ctx.r10.s64 + -23616;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA14B4;
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

__attribute__((alias("__imp__sub_83CA14C4"))) PPC_WEAK_FUNC(sub_83CA14C4);
PPC_FUNC_IMPL(__imp__sub_83CA14C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA14C8"))) PPC_WEAK_FUNC(sub_83CA14C8);
PPC_FUNC_IMPL(__imp__sub_83CA14C8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9356
	ctx.r3.s64 = ctx.r11.s64 + 9356;
	// bl 0x83523120
	ctx.lr = 0x83CA14E0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23600
	ctx.r3.s64 = ctx.r10.s64 + -23600;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA14EC;
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

__attribute__((alias("__imp__sub_83CA14FC"))) PPC_WEAK_FUNC(sub_83CA14FC);
PPC_FUNC_IMPL(__imp__sub_83CA14FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1500"))) PPC_WEAK_FUNC(sub_83CA1500);
PPC_FUNC_IMPL(__imp__sub_83CA1500) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9364
	ctx.r3.s64 = ctx.r11.s64 + 9364;
	// bl 0x83523120
	ctx.lr = 0x83CA1518;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23584
	ctx.r3.s64 = ctx.r10.s64 + -23584;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1524;
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

__attribute__((alias("__imp__sub_83CA1534"))) PPC_WEAK_FUNC(sub_83CA1534);
PPC_FUNC_IMPL(__imp__sub_83CA1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1538"))) PPC_WEAK_FUNC(sub_83CA1538);
PPC_FUNC_IMPL(__imp__sub_83CA1538) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9372
	ctx.r3.s64 = ctx.r11.s64 + 9372;
	// bl 0x83523120
	ctx.lr = 0x83CA1550;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23568
	ctx.r3.s64 = ctx.r10.s64 + -23568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA155C;
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

__attribute__((alias("__imp__sub_83CA156C"))) PPC_WEAK_FUNC(sub_83CA156C);
PPC_FUNC_IMPL(__imp__sub_83CA156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1570"))) PPC_WEAK_FUNC(sub_83CA1570);
PPC_FUNC_IMPL(__imp__sub_83CA1570) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9380
	ctx.r3.s64 = ctx.r11.s64 + 9380;
	// bl 0x83523120
	ctx.lr = 0x83CA1588;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23552
	ctx.r3.s64 = ctx.r10.s64 + -23552;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1594;
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

__attribute__((alias("__imp__sub_83CA15A4"))) PPC_WEAK_FUNC(sub_83CA15A4);
PPC_FUNC_IMPL(__imp__sub_83CA15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA15A8"))) PPC_WEAK_FUNC(sub_83CA15A8);
PPC_FUNC_IMPL(__imp__sub_83CA15A8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9392
	ctx.r3.s64 = ctx.r11.s64 + 9392;
	// bl 0x83523120
	ctx.lr = 0x83CA15C0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23536
	ctx.r3.s64 = ctx.r10.s64 + -23536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA15CC;
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

__attribute__((alias("__imp__sub_83CA15DC"))) PPC_WEAK_FUNC(sub_83CA15DC);
PPC_FUNC_IMPL(__imp__sub_83CA15DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA15E0"))) PPC_WEAK_FUNC(sub_83CA15E0);
PPC_FUNC_IMPL(__imp__sub_83CA15E0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9400
	ctx.r3.s64 = ctx.r11.s64 + 9400;
	// bl 0x83523120
	ctx.lr = 0x83CA15F8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23520
	ctx.r3.s64 = ctx.r10.s64 + -23520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1604;
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

__attribute__((alias("__imp__sub_83CA1614"))) PPC_WEAK_FUNC(sub_83CA1614);
PPC_FUNC_IMPL(__imp__sub_83CA1614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1618"))) PPC_WEAK_FUNC(sub_83CA1618);
PPC_FUNC_IMPL(__imp__sub_83CA1618) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9408
	ctx.r3.s64 = ctx.r11.s64 + 9408;
	// bl 0x83523120
	ctx.lr = 0x83CA1630;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23504
	ctx.r3.s64 = ctx.r10.s64 + -23504;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA163C;
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

__attribute__((alias("__imp__sub_83CA164C"))) PPC_WEAK_FUNC(sub_83CA164C);
PPC_FUNC_IMPL(__imp__sub_83CA164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1650"))) PPC_WEAK_FUNC(sub_83CA1650);
PPC_FUNC_IMPL(__imp__sub_83CA1650) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9416
	ctx.r3.s64 = ctx.r11.s64 + 9416;
	// bl 0x83523120
	ctx.lr = 0x83CA1668;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23488
	ctx.r3.s64 = ctx.r10.s64 + -23488;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1674;
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

__attribute__((alias("__imp__sub_83CA1684"))) PPC_WEAK_FUNC(sub_83CA1684);
PPC_FUNC_IMPL(__imp__sub_83CA1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1688"))) PPC_WEAK_FUNC(sub_83CA1688);
PPC_FUNC_IMPL(__imp__sub_83CA1688) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9424
	ctx.r3.s64 = ctx.r11.s64 + 9424;
	// bl 0x83523120
	ctx.lr = 0x83CA16A0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23472
	ctx.r3.s64 = ctx.r10.s64 + -23472;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA16AC;
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

__attribute__((alias("__imp__sub_83CA16BC"))) PPC_WEAK_FUNC(sub_83CA16BC);
PPC_FUNC_IMPL(__imp__sub_83CA16BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA16C0"))) PPC_WEAK_FUNC(sub_83CA16C0);
PPC_FUNC_IMPL(__imp__sub_83CA16C0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9432
	ctx.r3.s64 = ctx.r11.s64 + 9432;
	// bl 0x83523120
	ctx.lr = 0x83CA16D8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23456
	ctx.r3.s64 = ctx.r10.s64 + -23456;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA16E4;
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

__attribute__((alias("__imp__sub_83CA16F4"))) PPC_WEAK_FUNC(sub_83CA16F4);
PPC_FUNC_IMPL(__imp__sub_83CA16F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA16F8"))) PPC_WEAK_FUNC(sub_83CA16F8);
PPC_FUNC_IMPL(__imp__sub_83CA16F8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9440
	ctx.r3.s64 = ctx.r11.s64 + 9440;
	// bl 0x83523120
	ctx.lr = 0x83CA1710;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23440
	ctx.r3.s64 = ctx.r10.s64 + -23440;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA171C;
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

__attribute__((alias("__imp__sub_83CA172C"))) PPC_WEAK_FUNC(sub_83CA172C);
PPC_FUNC_IMPL(__imp__sub_83CA172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1730"))) PPC_WEAK_FUNC(sub_83CA1730);
PPC_FUNC_IMPL(__imp__sub_83CA1730) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9448
	ctx.r3.s64 = ctx.r11.s64 + 9448;
	// bl 0x83523120
	ctx.lr = 0x83CA1748;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23424
	ctx.r3.s64 = ctx.r10.s64 + -23424;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1754;
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

__attribute__((alias("__imp__sub_83CA1764"))) PPC_WEAK_FUNC(sub_83CA1764);
PPC_FUNC_IMPL(__imp__sub_83CA1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1768"))) PPC_WEAK_FUNC(sub_83CA1768);
PPC_FUNC_IMPL(__imp__sub_83CA1768) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9456
	ctx.r3.s64 = ctx.r11.s64 + 9456;
	// bl 0x83523120
	ctx.lr = 0x83CA1780;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23408
	ctx.r3.s64 = ctx.r10.s64 + -23408;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA178C;
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

__attribute__((alias("__imp__sub_83CA179C"))) PPC_WEAK_FUNC(sub_83CA179C);
PPC_FUNC_IMPL(__imp__sub_83CA179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA17A0"))) PPC_WEAK_FUNC(sub_83CA17A0);
PPC_FUNC_IMPL(__imp__sub_83CA17A0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9457
	ctx.r3.s64 = ctx.r11.s64 + 9457;
	// bl 0x83523120
	ctx.lr = 0x83CA17B8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23392
	ctx.r3.s64 = ctx.r10.s64 + -23392;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA17C4;
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

__attribute__((alias("__imp__sub_83CA17D4"))) PPC_WEAK_FUNC(sub_83CA17D4);
PPC_FUNC_IMPL(__imp__sub_83CA17D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA17D8"))) PPC_WEAK_FUNC(sub_83CA17D8);
PPC_FUNC_IMPL(__imp__sub_83CA17D8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9464
	ctx.r3.s64 = ctx.r11.s64 + 9464;
	// bl 0x83523120
	ctx.lr = 0x83CA17F0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23376
	ctx.r3.s64 = ctx.r10.s64 + -23376;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA17FC;
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

__attribute__((alias("__imp__sub_83CA180C"))) PPC_WEAK_FUNC(sub_83CA180C);
PPC_FUNC_IMPL(__imp__sub_83CA180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1810"))) PPC_WEAK_FUNC(sub_83CA1810);
PPC_FUNC_IMPL(__imp__sub_83CA1810) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9496
	ctx.r3.s64 = ctx.r11.s64 + 9496;
	// bl 0x83523120
	ctx.lr = 0x83CA1828;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23344
	ctx.r3.s64 = ctx.r10.s64 + -23344;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1834;
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

__attribute__((alias("__imp__sub_83CA1844"))) PPC_WEAK_FUNC(sub_83CA1844);
PPC_FUNC_IMPL(__imp__sub_83CA1844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1848"))) PPC_WEAK_FUNC(sub_83CA1848);
PPC_FUNC_IMPL(__imp__sub_83CA1848) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9524
	ctx.r3.s64 = ctx.r11.s64 + 9524;
	// bl 0x83523120
	ctx.lr = 0x83CA1860;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23312
	ctx.r3.s64 = ctx.r10.s64 + -23312;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA186C;
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

__attribute__((alias("__imp__sub_83CA187C"))) PPC_WEAK_FUNC(sub_83CA187C);
PPC_FUNC_IMPL(__imp__sub_83CA187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1880"))) PPC_WEAK_FUNC(sub_83CA1880);
PPC_FUNC_IMPL(__imp__sub_83CA1880) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9532
	ctx.r3.s64 = ctx.r11.s64 + 9532;
	// bl 0x83523120
	ctx.lr = 0x83CA1898;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23296
	ctx.r3.s64 = ctx.r10.s64 + -23296;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA18A4;
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

__attribute__((alias("__imp__sub_83CA18B4"))) PPC_WEAK_FUNC(sub_83CA18B4);
PPC_FUNC_IMPL(__imp__sub_83CA18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA18B8"))) PPC_WEAK_FUNC(sub_83CA18B8);
PPC_FUNC_IMPL(__imp__sub_83CA18B8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9564
	ctx.r3.s64 = ctx.r11.s64 + 9564;
	// bl 0x83523120
	ctx.lr = 0x83CA18D0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23264
	ctx.r3.s64 = ctx.r10.s64 + -23264;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA18DC;
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

__attribute__((alias("__imp__sub_83CA18EC"))) PPC_WEAK_FUNC(sub_83CA18EC);
PPC_FUNC_IMPL(__imp__sub_83CA18EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA18F0"))) PPC_WEAK_FUNC(sub_83CA18F0);
PPC_FUNC_IMPL(__imp__sub_83CA18F0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9592
	ctx.r3.s64 = ctx.r11.s64 + 9592;
	// bl 0x83523120
	ctx.lr = 0x83CA1908;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23232
	ctx.r3.s64 = ctx.r10.s64 + -23232;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1914;
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

__attribute__((alias("__imp__sub_83CA1924"))) PPC_WEAK_FUNC(sub_83CA1924);
PPC_FUNC_IMPL(__imp__sub_83CA1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1928"))) PPC_WEAK_FUNC(sub_83CA1928);
PPC_FUNC_IMPL(__imp__sub_83CA1928) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9600
	ctx.r3.s64 = ctx.r11.s64 + 9600;
	// bl 0x83523120
	ctx.lr = 0x83CA1940;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23216
	ctx.r3.s64 = ctx.r10.s64 + -23216;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA194C;
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

__attribute__((alias("__imp__sub_83CA195C"))) PPC_WEAK_FUNC(sub_83CA195C);
PPC_FUNC_IMPL(__imp__sub_83CA195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1960"))) PPC_WEAK_FUNC(sub_83CA1960);
PPC_FUNC_IMPL(__imp__sub_83CA1960) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9612
	ctx.r3.s64 = ctx.r11.s64 + 9612;
	// bl 0x83523120
	ctx.lr = 0x83CA1978;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23200
	ctx.r3.s64 = ctx.r10.s64 + -23200;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1984;
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

__attribute__((alias("__imp__sub_83CA1994"))) PPC_WEAK_FUNC(sub_83CA1994);
PPC_FUNC_IMPL(__imp__sub_83CA1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1998"))) PPC_WEAK_FUNC(sub_83CA1998);
PPC_FUNC_IMPL(__imp__sub_83CA1998) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,9616
	ctx.r3.s64 = ctx.r11.s64 + 9616;
	// addi r4,r10,-21576
	ctx.r4.s64 = ctx.r10.s64 + -21576;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x83523160
	ctx.lr = 0x83CA19C4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-23184
	ctx.r3.s64 = ctx.r9.s64 + -23184;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA19D0;
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

__attribute__((alias("__imp__sub_83CA19E0"))) PPC_WEAK_FUNC(sub_83CA19E0);
PPC_FUNC_IMPL(__imp__sub_83CA19E0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9728
	ctx.r3.s64 = ctx.r11.s64 + 9728;
	// bl 0x83523120
	ctx.lr = 0x83CA19F8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23136
	ctx.r3.s64 = ctx.r10.s64 + -23136;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1A04;
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

__attribute__((alias("__imp__sub_83CA1A14"))) PPC_WEAK_FUNC(sub_83CA1A14);
PPC_FUNC_IMPL(__imp__sub_83CA1A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1A18"))) PPC_WEAK_FUNC(sub_83CA1A18);
PPC_FUNC_IMPL(__imp__sub_83CA1A18) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9764
	ctx.r3.s64 = ctx.r11.s64 + 9764;
	// bl 0x83523120
	ctx.lr = 0x83CA1A30;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23104
	ctx.r3.s64 = ctx.r10.s64 + -23104;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1A3C;
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

__attribute__((alias("__imp__sub_83CA1A4C"))) PPC_WEAK_FUNC(sub_83CA1A4C);
PPC_FUNC_IMPL(__imp__sub_83CA1A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1A50"))) PPC_WEAK_FUNC(sub_83CA1A50);
PPC_FUNC_IMPL(__imp__sub_83CA1A50) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9832
	ctx.r3.s64 = ctx.r11.s64 + 9832;
	// bl 0x83523120
	ctx.lr = 0x83CA1A68;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-23056
	ctx.r3.s64 = ctx.r10.s64 + -23056;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1A74;
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

__attribute__((alias("__imp__sub_83CA1A84"))) PPC_WEAK_FUNC(sub_83CA1A84);
PPC_FUNC_IMPL(__imp__sub_83CA1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1A88"))) PPC_WEAK_FUNC(sub_83CA1A88);
PPC_FUNC_IMPL(__imp__sub_83CA1A88) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9932
	ctx.r3.s64 = ctx.r11.s64 + 9932;
	// bl 0x83523120
	ctx.lr = 0x83CA1AA0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22976
	ctx.r3.s64 = ctx.r10.s64 + -22976;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1AAC;
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

__attribute__((alias("__imp__sub_83CA1ABC"))) PPC_WEAK_FUNC(sub_83CA1ABC);
PPC_FUNC_IMPL(__imp__sub_83CA1ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1AC0"))) PPC_WEAK_FUNC(sub_83CA1AC0);
PPC_FUNC_IMPL(__imp__sub_83CA1AC0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9933
	ctx.r3.s64 = ctx.r11.s64 + 9933;
	// bl 0x83523120
	ctx.lr = 0x83CA1AD8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22960
	ctx.r3.s64 = ctx.r10.s64 + -22960;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1AE4;
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

__attribute__((alias("__imp__sub_83CA1AF4"))) PPC_WEAK_FUNC(sub_83CA1AF4);
PPC_FUNC_IMPL(__imp__sub_83CA1AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1AF8"))) PPC_WEAK_FUNC(sub_83CA1AF8);
PPC_FUNC_IMPL(__imp__sub_83CA1AF8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,9944
	ctx.r3.s64 = ctx.r11.s64 + 9944;
	// bl 0x83523120
	ctx.lr = 0x83CA1B10;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22944
	ctx.r3.s64 = ctx.r10.s64 + -22944;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1B1C;
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

__attribute__((alias("__imp__sub_83CA1B2C"))) PPC_WEAK_FUNC(sub_83CA1B2C);
PPC_FUNC_IMPL(__imp__sub_83CA1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1B30"))) PPC_WEAK_FUNC(sub_83CA1B30);
PPC_FUNC_IMPL(__imp__sub_83CA1B30) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10000
	ctx.r3.s64 = ctx.r11.s64 + 10000;
	// bl 0x83523120
	ctx.lr = 0x83CA1B48;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22896
	ctx.r3.s64 = ctx.r10.s64 + -22896;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1B54;
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

__attribute__((alias("__imp__sub_83CA1B64"))) PPC_WEAK_FUNC(sub_83CA1B64);
PPC_FUNC_IMPL(__imp__sub_83CA1B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1B68"))) PPC_WEAK_FUNC(sub_83CA1B68);
PPC_FUNC_IMPL(__imp__sub_83CA1B68) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10032
	ctx.r3.s64 = ctx.r11.s64 + 10032;
	// bl 0x83523120
	ctx.lr = 0x83CA1B80;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22864
	ctx.r3.s64 = ctx.r10.s64 + -22864;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1B8C;
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

__attribute__((alias("__imp__sub_83CA1B9C"))) PPC_WEAK_FUNC(sub_83CA1B9C);
PPC_FUNC_IMPL(__imp__sub_83CA1B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1BA0"))) PPC_WEAK_FUNC(sub_83CA1BA0);
PPC_FUNC_IMPL(__imp__sub_83CA1BA0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10220
	ctx.r3.s64 = ctx.r11.s64 + 10220;
	// bl 0x83523120
	ctx.lr = 0x83CA1BB8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22832
	ctx.r3.s64 = ctx.r10.s64 + -22832;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1BC4;
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

__attribute__((alias("__imp__sub_83CA1BD4"))) PPC_WEAK_FUNC(sub_83CA1BD4);
PPC_FUNC_IMPL(__imp__sub_83CA1BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1BD8"))) PPC_WEAK_FUNC(sub_83CA1BD8);
PPC_FUNC_IMPL(__imp__sub_83CA1BD8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10280
	ctx.r3.s64 = ctx.r11.s64 + 10280;
	// bl 0x83523120
	ctx.lr = 0x83CA1BF0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22784
	ctx.r3.s64 = ctx.r10.s64 + -22784;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1BFC;
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

__attribute__((alias("__imp__sub_83CA1C0C"))) PPC_WEAK_FUNC(sub_83CA1C0C);
PPC_FUNC_IMPL(__imp__sub_83CA1C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1C10"))) PPC_WEAK_FUNC(sub_83CA1C10);
PPC_FUNC_IMPL(__imp__sub_83CA1C10) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10336
	ctx.r3.s64 = ctx.r11.s64 + 10336;
	// bl 0x83523120
	ctx.lr = 0x83CA1C28;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22736
	ctx.r3.s64 = ctx.r10.s64 + -22736;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1C34;
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

__attribute__((alias("__imp__sub_83CA1C44"))) PPC_WEAK_FUNC(sub_83CA1C44);
PPC_FUNC_IMPL(__imp__sub_83CA1C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1C48"))) PPC_WEAK_FUNC(sub_83CA1C48);
PPC_FUNC_IMPL(__imp__sub_83CA1C48) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10376
	ctx.r3.s64 = ctx.r11.s64 + 10376;
	// bl 0x83523120
	ctx.lr = 0x83CA1C60;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22704
	ctx.r3.s64 = ctx.r10.s64 + -22704;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1C6C;
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

__attribute__((alias("__imp__sub_83CA1C7C"))) PPC_WEAK_FUNC(sub_83CA1C7C);
PPC_FUNC_IMPL(__imp__sub_83CA1C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1C80"))) PPC_WEAK_FUNC(sub_83CA1C80);
PPC_FUNC_IMPL(__imp__sub_83CA1C80) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10384
	ctx.r3.s64 = ctx.r11.s64 + 10384;
	// bl 0x83523120
	ctx.lr = 0x83CA1C98;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22632
	ctx.r3.s64 = ctx.r10.s64 + -22632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1CA4;
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

__attribute__((alias("__imp__sub_83CA1CB4"))) PPC_WEAK_FUNC(sub_83CA1CB4);
PPC_FUNC_IMPL(__imp__sub_83CA1CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1CB8"))) PPC_WEAK_FUNC(sub_83CA1CB8);
PPC_FUNC_IMPL(__imp__sub_83CA1CB8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x83523120
	ctx.lr = 0x83CA1CD0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22600
	ctx.r3.s64 = ctx.r10.s64 + -22600;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1CDC;
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

__attribute__((alias("__imp__sub_83CA1CEC"))) PPC_WEAK_FUNC(sub_83CA1CEC);
PPC_FUNC_IMPL(__imp__sub_83CA1CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1CF0"))) PPC_WEAK_FUNC(sub_83CA1CF0);
PPC_FUNC_IMPL(__imp__sub_83CA1CF0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10448
	ctx.r3.s64 = ctx.r11.s64 + 10448;
	// bl 0x83523120
	ctx.lr = 0x83CA1D08;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22568
	ctx.r3.s64 = ctx.r10.s64 + -22568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1D14;
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

__attribute__((alias("__imp__sub_83CA1D24"))) PPC_WEAK_FUNC(sub_83CA1D24);
PPC_FUNC_IMPL(__imp__sub_83CA1D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1D28"))) PPC_WEAK_FUNC(sub_83CA1D28);
PPC_FUNC_IMPL(__imp__sub_83CA1D28) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10476
	ctx.r3.s64 = ctx.r11.s64 + 10476;
	// bl 0x83523120
	ctx.lr = 0x83CA1D40;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22536
	ctx.r3.s64 = ctx.r10.s64 + -22536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1D4C;
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

__attribute__((alias("__imp__sub_83CA1D5C"))) PPC_WEAK_FUNC(sub_83CA1D5C);
PPC_FUNC_IMPL(__imp__sub_83CA1D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

