#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B9AAC0"))) PPC_WEAK_FUNC(sub_83B9AAC0);
PPC_FUNC_IMPL(__imp__sub_83B9AAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12568
	ctx.r3.s64 = ctx.r11.s64 + 12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AACC"))) PPC_WEAK_FUNC(sub_83B9AACC);
PPC_FUNC_IMPL(__imp__sub_83B9AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AAD0"))) PPC_WEAK_FUNC(sub_83B9AAD0);
PPC_FUNC_IMPL(__imp__sub_83B9AAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3676
	ctx.r7.s64 = ctx.r8.s64 + -3676;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3676(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3676);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3676(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3676, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9AAF8"))) PPC_WEAK_FUNC(sub_83B9AAF8);
PPC_FUNC_IMPL(__imp__sub_83B9AAF8) {
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
	// addi r3,r11,-3680
	ctx.r3.s64 = ctx.r11.s64 + -3680;
	// bl 0x83523120
	ctx.lr = 0x83B9AB10;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12576
	ctx.r3.s64 = ctx.r10.s64 + 12576;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9AB1C;
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

__attribute__((alias("__imp__sub_83B9AB2C"))) PPC_WEAK_FUNC(sub_83B9AB2C);
PPC_FUNC_IMPL(__imp__sub_83B9AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AB30"))) PPC_WEAK_FUNC(sub_83B9AB30);
PPC_FUNC_IMPL(__imp__sub_83B9AB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12592
	ctx.r3.s64 = ctx.r11.s64 + 12592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AB3C"))) PPC_WEAK_FUNC(sub_83B9AB3C);
PPC_FUNC_IMPL(__imp__sub_83B9AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AB40"))) PPC_WEAK_FUNC(sub_83B9AB40);
PPC_FUNC_IMPL(__imp__sub_83B9AB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12600
	ctx.r3.s64 = ctx.r11.s64 + 12600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AB4C"))) PPC_WEAK_FUNC(sub_83B9AB4C);
PPC_FUNC_IMPL(__imp__sub_83B9AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AB50"))) PPC_WEAK_FUNC(sub_83B9AB50);
PPC_FUNC_IMPL(__imp__sub_83B9AB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12608
	ctx.r3.s64 = ctx.r11.s64 + 12608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AB5C"))) PPC_WEAK_FUNC(sub_83B9AB5C);
PPC_FUNC_IMPL(__imp__sub_83B9AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AB60"))) PPC_WEAK_FUNC(sub_83B9AB60);
PPC_FUNC_IMPL(__imp__sub_83B9AB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12616
	ctx.r3.s64 = ctx.r11.s64 + 12616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AB6C"))) PPC_WEAK_FUNC(sub_83B9AB6C);
PPC_FUNC_IMPL(__imp__sub_83B9AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AB70"))) PPC_WEAK_FUNC(sub_83B9AB70);
PPC_FUNC_IMPL(__imp__sub_83B9AB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12624
	ctx.r3.s64 = ctx.r11.s64 + 12624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AB7C"))) PPC_WEAK_FUNC(sub_83B9AB7C);
PPC_FUNC_IMPL(__imp__sub_83B9AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AB80"))) PPC_WEAK_FUNC(sub_83B9AB80);
PPC_FUNC_IMPL(__imp__sub_83B9AB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12632
	ctx.r3.s64 = ctx.r11.s64 + 12632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AB8C"))) PPC_WEAK_FUNC(sub_83B9AB8C);
PPC_FUNC_IMPL(__imp__sub_83B9AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AB90"))) PPC_WEAK_FUNC(sub_83B9AB90);
PPC_FUNC_IMPL(__imp__sub_83B9AB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12640
	ctx.r3.s64 = ctx.r11.s64 + 12640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AB9C"))) PPC_WEAK_FUNC(sub_83B9AB9C);
PPC_FUNC_IMPL(__imp__sub_83B9AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ABA0"))) PPC_WEAK_FUNC(sub_83B9ABA0);
PPC_FUNC_IMPL(__imp__sub_83B9ABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12648
	ctx.r3.s64 = ctx.r11.s64 + 12648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ABAC"))) PPC_WEAK_FUNC(sub_83B9ABAC);
PPC_FUNC_IMPL(__imp__sub_83B9ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ABB0"))) PPC_WEAK_FUNC(sub_83B9ABB0);
PPC_FUNC_IMPL(__imp__sub_83B9ABB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ABBC"))) PPC_WEAK_FUNC(sub_83B9ABBC);
PPC_FUNC_IMPL(__imp__sub_83B9ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ABC0"))) PPC_WEAK_FUNC(sub_83B9ABC0);
PPC_FUNC_IMPL(__imp__sub_83B9ABC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12664
	ctx.r3.s64 = ctx.r11.s64 + 12664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ABCC"))) PPC_WEAK_FUNC(sub_83B9ABCC);
PPC_FUNC_IMPL(__imp__sub_83B9ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ABD0"))) PPC_WEAK_FUNC(sub_83B9ABD0);
PPC_FUNC_IMPL(__imp__sub_83B9ABD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12672
	ctx.r3.s64 = ctx.r11.s64 + 12672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ABDC"))) PPC_WEAK_FUNC(sub_83B9ABDC);
PPC_FUNC_IMPL(__imp__sub_83B9ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ABE0"))) PPC_WEAK_FUNC(sub_83B9ABE0);
PPC_FUNC_IMPL(__imp__sub_83B9ABE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12680
	ctx.r3.s64 = ctx.r11.s64 + 12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ABEC"))) PPC_WEAK_FUNC(sub_83B9ABEC);
PPC_FUNC_IMPL(__imp__sub_83B9ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ABF0"))) PPC_WEAK_FUNC(sub_83B9ABF0);
PPC_FUNC_IMPL(__imp__sub_83B9ABF0) {
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
	// addi r3,r11,-3668
	ctx.r3.s64 = ctx.r11.s64 + -3668;
	// bl 0x83523120
	ctx.lr = 0x83B9AC08;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12688
	ctx.r3.s64 = ctx.r10.s64 + 12688;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9AC14;
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

__attribute__((alias("__imp__sub_83B9AC24"))) PPC_WEAK_FUNC(sub_83B9AC24);
PPC_FUNC_IMPL(__imp__sub_83B9AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AC28"))) PPC_WEAK_FUNC(sub_83B9AC28);
PPC_FUNC_IMPL(__imp__sub_83B9AC28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3664
	ctx.r7.s64 = ctx.r8.s64 + -3664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3664(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9AC50"))) PPC_WEAK_FUNC(sub_83B9AC50);
PPC_FUNC_IMPL(__imp__sub_83B9AC50) {
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
	// addi r4,r11,10272
	ctx.r4.s64 = ctx.r11.s64 + 10272;
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
	// addi r3,r7,-3656
	ctx.r3.s64 = ctx.r7.s64 + -3656;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AC80"))) PPC_WEAK_FUNC(sub_83B9AC80);
PPC_FUNC_IMPL(__imp__sub_83B9AC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-3644
	ctx.r11.s64 = ctx.r11.s64 + -3644;
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

__attribute__((alias("__imp__sub_83B9ACC0"))) PPC_WEAK_FUNC(sub_83B9ACC0);
PPC_FUNC_IMPL(__imp__sub_83B9ACC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ACCC"))) PPC_WEAK_FUNC(sub_83B9ACCC);
PPC_FUNC_IMPL(__imp__sub_83B9ACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ACD0"))) PPC_WEAK_FUNC(sub_83B9ACD0);
PPC_FUNC_IMPL(__imp__sub_83B9ACD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12712
	ctx.r3.s64 = ctx.r11.s64 + 12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ACDC"))) PPC_WEAK_FUNC(sub_83B9ACDC);
PPC_FUNC_IMPL(__imp__sub_83B9ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ACE0"))) PPC_WEAK_FUNC(sub_83B9ACE0);
PPC_FUNC_IMPL(__imp__sub_83B9ACE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12720
	ctx.r3.s64 = ctx.r11.s64 + 12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ACEC"))) PPC_WEAK_FUNC(sub_83B9ACEC);
PPC_FUNC_IMPL(__imp__sub_83B9ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ACF0"))) PPC_WEAK_FUNC(sub_83B9ACF0);
PPC_FUNC_IMPL(__imp__sub_83B9ACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12728
	ctx.r3.s64 = ctx.r11.s64 + 12728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ACFC"))) PPC_WEAK_FUNC(sub_83B9ACFC);
PPC_FUNC_IMPL(__imp__sub_83B9ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD00"))) PPC_WEAK_FUNC(sub_83B9AD00);
PPC_FUNC_IMPL(__imp__sub_83B9AD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12736
	ctx.r3.s64 = ctx.r11.s64 + 12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AD0C"))) PPC_WEAK_FUNC(sub_83B9AD0C);
PPC_FUNC_IMPL(__imp__sub_83B9AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD10"))) PPC_WEAK_FUNC(sub_83B9AD10);
PPC_FUNC_IMPL(__imp__sub_83B9AD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12744
	ctx.r3.s64 = ctx.r11.s64 + 12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AD1C"))) PPC_WEAK_FUNC(sub_83B9AD1C);
PPC_FUNC_IMPL(__imp__sub_83B9AD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD20"))) PPC_WEAK_FUNC(sub_83B9AD20);
PPC_FUNC_IMPL(__imp__sub_83B9AD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12752
	ctx.r3.s64 = ctx.r11.s64 + 12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AD2C"))) PPC_WEAK_FUNC(sub_83B9AD2C);
PPC_FUNC_IMPL(__imp__sub_83B9AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD30"))) PPC_WEAK_FUNC(sub_83B9AD30);
PPC_FUNC_IMPL(__imp__sub_83B9AD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12760
	ctx.r3.s64 = ctx.r11.s64 + 12760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AD3C"))) PPC_WEAK_FUNC(sub_83B9AD3C);
PPC_FUNC_IMPL(__imp__sub_83B9AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD40"))) PPC_WEAK_FUNC(sub_83B9AD40);
PPC_FUNC_IMPL(__imp__sub_83B9AD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12768
	ctx.r3.s64 = ctx.r11.s64 + 12768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AD4C"))) PPC_WEAK_FUNC(sub_83B9AD4C);
PPC_FUNC_IMPL(__imp__sub_83B9AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD50"))) PPC_WEAK_FUNC(sub_83B9AD50);
PPC_FUNC_IMPL(__imp__sub_83B9AD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12776
	ctx.r3.s64 = ctx.r11.s64 + 12776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AD5C"))) PPC_WEAK_FUNC(sub_83B9AD5C);
PPC_FUNC_IMPL(__imp__sub_83B9AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD60"))) PPC_WEAK_FUNC(sub_83B9AD60);
PPC_FUNC_IMPL(__imp__sub_83B9AD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AD6C"))) PPC_WEAK_FUNC(sub_83B9AD6C);
PPC_FUNC_IMPL(__imp__sub_83B9AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD70"))) PPC_WEAK_FUNC(sub_83B9AD70);
PPC_FUNC_IMPL(__imp__sub_83B9AD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12792
	ctx.r3.s64 = ctx.r11.s64 + 12792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AD7C"))) PPC_WEAK_FUNC(sub_83B9AD7C);
PPC_FUNC_IMPL(__imp__sub_83B9AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AD80"))) PPC_WEAK_FUNC(sub_83B9AD80);
PPC_FUNC_IMPL(__imp__sub_83B9AD80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3608
	ctx.r7.s64 = ctx.r8.s64 + -3608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9ADA8"))) PPC_WEAK_FUNC(sub_83B9ADA8);
PPC_FUNC_IMPL(__imp__sub_83B9ADA8) {
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
	// addi r3,r11,-3612
	ctx.r3.s64 = ctx.r11.s64 + -3612;
	// bl 0x83523120
	ctx.lr = 0x83B9ADC0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12800
	ctx.r3.s64 = ctx.r10.s64 + 12800;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9ADCC;
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

__attribute__((alias("__imp__sub_83B9ADDC"))) PPC_WEAK_FUNC(sub_83B9ADDC);
PPC_FUNC_IMPL(__imp__sub_83B9ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ADE0"))) PPC_WEAK_FUNC(sub_83B9ADE0);
PPC_FUNC_IMPL(__imp__sub_83B9ADE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12816
	ctx.r3.s64 = ctx.r11.s64 + 12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ADEC"))) PPC_WEAK_FUNC(sub_83B9ADEC);
PPC_FUNC_IMPL(__imp__sub_83B9ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9ADF0"))) PPC_WEAK_FUNC(sub_83B9ADF0);
PPC_FUNC_IMPL(__imp__sub_83B9ADF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12824
	ctx.r3.s64 = ctx.r11.s64 + 12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9ADFC"))) PPC_WEAK_FUNC(sub_83B9ADFC);
PPC_FUNC_IMPL(__imp__sub_83B9ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE00"))) PPC_WEAK_FUNC(sub_83B9AE00);
PPC_FUNC_IMPL(__imp__sub_83B9AE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12832
	ctx.r3.s64 = ctx.r11.s64 + 12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE0C"))) PPC_WEAK_FUNC(sub_83B9AE0C);
PPC_FUNC_IMPL(__imp__sub_83B9AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE10"))) PPC_WEAK_FUNC(sub_83B9AE10);
PPC_FUNC_IMPL(__imp__sub_83B9AE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12840
	ctx.r3.s64 = ctx.r11.s64 + 12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE1C"))) PPC_WEAK_FUNC(sub_83B9AE1C);
PPC_FUNC_IMPL(__imp__sub_83B9AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE20"))) PPC_WEAK_FUNC(sub_83B9AE20);
PPC_FUNC_IMPL(__imp__sub_83B9AE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12848
	ctx.r3.s64 = ctx.r11.s64 + 12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE2C"))) PPC_WEAK_FUNC(sub_83B9AE2C);
PPC_FUNC_IMPL(__imp__sub_83B9AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE30"))) PPC_WEAK_FUNC(sub_83B9AE30);
PPC_FUNC_IMPL(__imp__sub_83B9AE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12856
	ctx.r3.s64 = ctx.r11.s64 + 12856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE3C"))) PPC_WEAK_FUNC(sub_83B9AE3C);
PPC_FUNC_IMPL(__imp__sub_83B9AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE40"))) PPC_WEAK_FUNC(sub_83B9AE40);
PPC_FUNC_IMPL(__imp__sub_83B9AE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12864
	ctx.r3.s64 = ctx.r11.s64 + 12864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE4C"))) PPC_WEAK_FUNC(sub_83B9AE4C);
PPC_FUNC_IMPL(__imp__sub_83B9AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE50"))) PPC_WEAK_FUNC(sub_83B9AE50);
PPC_FUNC_IMPL(__imp__sub_83B9AE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12872
	ctx.r3.s64 = ctx.r11.s64 + 12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE5C"))) PPC_WEAK_FUNC(sub_83B9AE5C);
PPC_FUNC_IMPL(__imp__sub_83B9AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE60"))) PPC_WEAK_FUNC(sub_83B9AE60);
PPC_FUNC_IMPL(__imp__sub_83B9AE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12880
	ctx.r3.s64 = ctx.r11.s64 + 12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE6C"))) PPC_WEAK_FUNC(sub_83B9AE6C);
PPC_FUNC_IMPL(__imp__sub_83B9AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE70"))) PPC_WEAK_FUNC(sub_83B9AE70);
PPC_FUNC_IMPL(__imp__sub_83B9AE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12888
	ctx.r3.s64 = ctx.r11.s64 + 12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE7C"))) PPC_WEAK_FUNC(sub_83B9AE7C);
PPC_FUNC_IMPL(__imp__sub_83B9AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE80"))) PPC_WEAK_FUNC(sub_83B9AE80);
PPC_FUNC_IMPL(__imp__sub_83B9AE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12896
	ctx.r3.s64 = ctx.r11.s64 + 12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE8C"))) PPC_WEAK_FUNC(sub_83B9AE8C);
PPC_FUNC_IMPL(__imp__sub_83B9AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AE90"))) PPC_WEAK_FUNC(sub_83B9AE90);
PPC_FUNC_IMPL(__imp__sub_83B9AE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12904
	ctx.r3.s64 = ctx.r11.s64 + 12904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AE9C"))) PPC_WEAK_FUNC(sub_83B9AE9C);
PPC_FUNC_IMPL(__imp__sub_83B9AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AEA0"))) PPC_WEAK_FUNC(sub_83B9AEA0);
PPC_FUNC_IMPL(__imp__sub_83B9AEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3596
	ctx.r7.s64 = ctx.r8.s64 + -3596;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3596(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3596);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3596, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9AEC8"))) PPC_WEAK_FUNC(sub_83B9AEC8);
PPC_FUNC_IMPL(__imp__sub_83B9AEC8) {
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
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// bl 0x83523120
	ctx.lr = 0x83B9AEE0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12912
	ctx.r3.s64 = ctx.r10.s64 + 12912;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9AEEC;
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

__attribute__((alias("__imp__sub_83B9AEFC"))) PPC_WEAK_FUNC(sub_83B9AEFC);
PPC_FUNC_IMPL(__imp__sub_83B9AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF00"))) PPC_WEAK_FUNC(sub_83B9AF00);
PPC_FUNC_IMPL(__imp__sub_83B9AF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12928
	ctx.r3.s64 = ctx.r11.s64 + 12928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF0C"))) PPC_WEAK_FUNC(sub_83B9AF0C);
PPC_FUNC_IMPL(__imp__sub_83B9AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF10"))) PPC_WEAK_FUNC(sub_83B9AF10);
PPC_FUNC_IMPL(__imp__sub_83B9AF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12936
	ctx.r3.s64 = ctx.r11.s64 + 12936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF1C"))) PPC_WEAK_FUNC(sub_83B9AF1C);
PPC_FUNC_IMPL(__imp__sub_83B9AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF20"))) PPC_WEAK_FUNC(sub_83B9AF20);
PPC_FUNC_IMPL(__imp__sub_83B9AF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12944
	ctx.r3.s64 = ctx.r11.s64 + 12944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF2C"))) PPC_WEAK_FUNC(sub_83B9AF2C);
PPC_FUNC_IMPL(__imp__sub_83B9AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF30"))) PPC_WEAK_FUNC(sub_83B9AF30);
PPC_FUNC_IMPL(__imp__sub_83B9AF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12952
	ctx.r3.s64 = ctx.r11.s64 + 12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF3C"))) PPC_WEAK_FUNC(sub_83B9AF3C);
PPC_FUNC_IMPL(__imp__sub_83B9AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF40"))) PPC_WEAK_FUNC(sub_83B9AF40);
PPC_FUNC_IMPL(__imp__sub_83B9AF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12960
	ctx.r3.s64 = ctx.r11.s64 + 12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF4C"))) PPC_WEAK_FUNC(sub_83B9AF4C);
PPC_FUNC_IMPL(__imp__sub_83B9AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF50"))) PPC_WEAK_FUNC(sub_83B9AF50);
PPC_FUNC_IMPL(__imp__sub_83B9AF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12968
	ctx.r3.s64 = ctx.r11.s64 + 12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF5C"))) PPC_WEAK_FUNC(sub_83B9AF5C);
PPC_FUNC_IMPL(__imp__sub_83B9AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF60"))) PPC_WEAK_FUNC(sub_83B9AF60);
PPC_FUNC_IMPL(__imp__sub_83B9AF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF6C"))) PPC_WEAK_FUNC(sub_83B9AF6C);
PPC_FUNC_IMPL(__imp__sub_83B9AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF70"))) PPC_WEAK_FUNC(sub_83B9AF70);
PPC_FUNC_IMPL(__imp__sub_83B9AF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12984
	ctx.r3.s64 = ctx.r11.s64 + 12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF7C"))) PPC_WEAK_FUNC(sub_83B9AF7C);
PPC_FUNC_IMPL(__imp__sub_83B9AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF80"))) PPC_WEAK_FUNC(sub_83B9AF80);
PPC_FUNC_IMPL(__imp__sub_83B9AF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12992
	ctx.r3.s64 = ctx.r11.s64 + 12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF8C"))) PPC_WEAK_FUNC(sub_83B9AF8C);
PPC_FUNC_IMPL(__imp__sub_83B9AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AF90"))) PPC_WEAK_FUNC(sub_83B9AF90);
PPC_FUNC_IMPL(__imp__sub_83B9AF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AF9C"))) PPC_WEAK_FUNC(sub_83B9AF9C);
PPC_FUNC_IMPL(__imp__sub_83B9AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AFA0"))) PPC_WEAK_FUNC(sub_83B9AFA0);
PPC_FUNC_IMPL(__imp__sub_83B9AFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13008
	ctx.r3.s64 = ctx.r11.s64 + 13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AFAC"))) PPC_WEAK_FUNC(sub_83B9AFAC);
PPC_FUNC_IMPL(__imp__sub_83B9AFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AFB0"))) PPC_WEAK_FUNC(sub_83B9AFB0);
PPC_FUNC_IMPL(__imp__sub_83B9AFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13016
	ctx.r3.s64 = ctx.r11.s64 + 13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AFBC"))) PPC_WEAK_FUNC(sub_83B9AFBC);
PPC_FUNC_IMPL(__imp__sub_83B9AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AFC0"))) PPC_WEAK_FUNC(sub_83B9AFC0);
PPC_FUNC_IMPL(__imp__sub_83B9AFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3584
	ctx.r7.s64 = ctx.r8.s64 + -3584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3584(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9AFE8"))) PPC_WEAK_FUNC(sub_83B9AFE8);
PPC_FUNC_IMPL(__imp__sub_83B9AFE8) {
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
	// addi r3,r11,-3588
	ctx.r3.s64 = ctx.r11.s64 + -3588;
	// bl 0x83523120
	ctx.lr = 0x83B9B000;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,13024
	ctx.r3.s64 = ctx.r10.s64 + 13024;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9B00C;
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

__attribute__((alias("__imp__sub_83B9B01C"))) PPC_WEAK_FUNC(sub_83B9B01C);
PPC_FUNC_IMPL(__imp__sub_83B9B01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B020"))) PPC_WEAK_FUNC(sub_83B9B020);
PPC_FUNC_IMPL(__imp__sub_83B9B020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13040
	ctx.r3.s64 = ctx.r11.s64 + 13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B02C"))) PPC_WEAK_FUNC(sub_83B9B02C);
PPC_FUNC_IMPL(__imp__sub_83B9B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B030"))) PPC_WEAK_FUNC(sub_83B9B030);
PPC_FUNC_IMPL(__imp__sub_83B9B030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13048
	ctx.r3.s64 = ctx.r11.s64 + 13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B03C"))) PPC_WEAK_FUNC(sub_83B9B03C);
PPC_FUNC_IMPL(__imp__sub_83B9B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B040"))) PPC_WEAK_FUNC(sub_83B9B040);
PPC_FUNC_IMPL(__imp__sub_83B9B040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13056
	ctx.r3.s64 = ctx.r11.s64 + 13056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B04C"))) PPC_WEAK_FUNC(sub_83B9B04C);
PPC_FUNC_IMPL(__imp__sub_83B9B04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B050"))) PPC_WEAK_FUNC(sub_83B9B050);
PPC_FUNC_IMPL(__imp__sub_83B9B050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13064
	ctx.r3.s64 = ctx.r11.s64 + 13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B05C"))) PPC_WEAK_FUNC(sub_83B9B05C);
PPC_FUNC_IMPL(__imp__sub_83B9B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B060"))) PPC_WEAK_FUNC(sub_83B9B060);
PPC_FUNC_IMPL(__imp__sub_83B9B060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13072
	ctx.r3.s64 = ctx.r11.s64 + 13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B06C"))) PPC_WEAK_FUNC(sub_83B9B06C);
PPC_FUNC_IMPL(__imp__sub_83B9B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B070"))) PPC_WEAK_FUNC(sub_83B9B070);
PPC_FUNC_IMPL(__imp__sub_83B9B070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13080
	ctx.r3.s64 = ctx.r11.s64 + 13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B07C"))) PPC_WEAK_FUNC(sub_83B9B07C);
PPC_FUNC_IMPL(__imp__sub_83B9B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B080"))) PPC_WEAK_FUNC(sub_83B9B080);
PPC_FUNC_IMPL(__imp__sub_83B9B080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13088
	ctx.r3.s64 = ctx.r11.s64 + 13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B08C"))) PPC_WEAK_FUNC(sub_83B9B08C);
PPC_FUNC_IMPL(__imp__sub_83B9B08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B090"))) PPC_WEAK_FUNC(sub_83B9B090);
PPC_FUNC_IMPL(__imp__sub_83B9B090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13096
	ctx.r3.s64 = ctx.r11.s64 + 13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B09C"))) PPC_WEAK_FUNC(sub_83B9B09C);
PPC_FUNC_IMPL(__imp__sub_83B9B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B0A0"))) PPC_WEAK_FUNC(sub_83B9B0A0);
PPC_FUNC_IMPL(__imp__sub_83B9B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13104
	ctx.r3.s64 = ctx.r11.s64 + 13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B0AC"))) PPC_WEAK_FUNC(sub_83B9B0AC);
PPC_FUNC_IMPL(__imp__sub_83B9B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B0B0"))) PPC_WEAK_FUNC(sub_83B9B0B0);
PPC_FUNC_IMPL(__imp__sub_83B9B0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13112
	ctx.r3.s64 = ctx.r11.s64 + 13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B0BC"))) PPC_WEAK_FUNC(sub_83B9B0BC);
PPC_FUNC_IMPL(__imp__sub_83B9B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B0C0"))) PPC_WEAK_FUNC(sub_83B9B0C0);
PPC_FUNC_IMPL(__imp__sub_83B9B0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13120
	ctx.r3.s64 = ctx.r11.s64 + 13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B0CC"))) PPC_WEAK_FUNC(sub_83B9B0CC);
PPC_FUNC_IMPL(__imp__sub_83B9B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B0D0"))) PPC_WEAK_FUNC(sub_83B9B0D0);
PPC_FUNC_IMPL(__imp__sub_83B9B0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13128
	ctx.r3.s64 = ctx.r11.s64 + 13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B0DC"))) PPC_WEAK_FUNC(sub_83B9B0DC);
PPC_FUNC_IMPL(__imp__sub_83B9B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B0E0"))) PPC_WEAK_FUNC(sub_83B9B0E0);
PPC_FUNC_IMPL(__imp__sub_83B9B0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3572
	ctx.r7.s64 = ctx.r8.s64 + -3572;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3572(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3572);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3572(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3572, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9B108"))) PPC_WEAK_FUNC(sub_83B9B108);
PPC_FUNC_IMPL(__imp__sub_83B9B108) {
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
	// addi r3,r11,-3576
	ctx.r3.s64 = ctx.r11.s64 + -3576;
	// bl 0x83523120
	ctx.lr = 0x83B9B120;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,13136
	ctx.r3.s64 = ctx.r10.s64 + 13136;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9B12C;
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

__attribute__((alias("__imp__sub_83B9B13C"))) PPC_WEAK_FUNC(sub_83B9B13C);
PPC_FUNC_IMPL(__imp__sub_83B9B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B140"))) PPC_WEAK_FUNC(sub_83B9B140);
PPC_FUNC_IMPL(__imp__sub_83B9B140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13152
	ctx.r3.s64 = ctx.r11.s64 + 13152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B14C"))) PPC_WEAK_FUNC(sub_83B9B14C);
PPC_FUNC_IMPL(__imp__sub_83B9B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B150"))) PPC_WEAK_FUNC(sub_83B9B150);
PPC_FUNC_IMPL(__imp__sub_83B9B150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13160
	ctx.r3.s64 = ctx.r11.s64 + 13160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B15C"))) PPC_WEAK_FUNC(sub_83B9B15C);
PPC_FUNC_IMPL(__imp__sub_83B9B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B160"))) PPC_WEAK_FUNC(sub_83B9B160);
PPC_FUNC_IMPL(__imp__sub_83B9B160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13168
	ctx.r3.s64 = ctx.r11.s64 + 13168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B16C"))) PPC_WEAK_FUNC(sub_83B9B16C);
PPC_FUNC_IMPL(__imp__sub_83B9B16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B170"))) PPC_WEAK_FUNC(sub_83B9B170);
PPC_FUNC_IMPL(__imp__sub_83B9B170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13176
	ctx.r3.s64 = ctx.r11.s64 + 13176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B17C"))) PPC_WEAK_FUNC(sub_83B9B17C);
PPC_FUNC_IMPL(__imp__sub_83B9B17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B180"))) PPC_WEAK_FUNC(sub_83B9B180);
PPC_FUNC_IMPL(__imp__sub_83B9B180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13184
	ctx.r3.s64 = ctx.r11.s64 + 13184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B18C"))) PPC_WEAK_FUNC(sub_83B9B18C);
PPC_FUNC_IMPL(__imp__sub_83B9B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B190"))) PPC_WEAK_FUNC(sub_83B9B190);
PPC_FUNC_IMPL(__imp__sub_83B9B190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13192
	ctx.r3.s64 = ctx.r11.s64 + 13192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B19C"))) PPC_WEAK_FUNC(sub_83B9B19C);
PPC_FUNC_IMPL(__imp__sub_83B9B19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B1A0"))) PPC_WEAK_FUNC(sub_83B9B1A0);
PPC_FUNC_IMPL(__imp__sub_83B9B1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13200
	ctx.r3.s64 = ctx.r11.s64 + 13200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B1AC"))) PPC_WEAK_FUNC(sub_83B9B1AC);
PPC_FUNC_IMPL(__imp__sub_83B9B1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B1B0"))) PPC_WEAK_FUNC(sub_83B9B1B0);
PPC_FUNC_IMPL(__imp__sub_83B9B1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13208
	ctx.r3.s64 = ctx.r11.s64 + 13208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B1BC"))) PPC_WEAK_FUNC(sub_83B9B1BC);
PPC_FUNC_IMPL(__imp__sub_83B9B1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B1C0"))) PPC_WEAK_FUNC(sub_83B9B1C0);
PPC_FUNC_IMPL(__imp__sub_83B9B1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13216
	ctx.r3.s64 = ctx.r11.s64 + 13216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B1CC"))) PPC_WEAK_FUNC(sub_83B9B1CC);
PPC_FUNC_IMPL(__imp__sub_83B9B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B1D0"))) PPC_WEAK_FUNC(sub_83B9B1D0);
PPC_FUNC_IMPL(__imp__sub_83B9B1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13224
	ctx.r3.s64 = ctx.r11.s64 + 13224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B1DC"))) PPC_WEAK_FUNC(sub_83B9B1DC);
PPC_FUNC_IMPL(__imp__sub_83B9B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B1E0"))) PPC_WEAK_FUNC(sub_83B9B1E0);
PPC_FUNC_IMPL(__imp__sub_83B9B1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13232
	ctx.r3.s64 = ctx.r11.s64 + 13232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B1EC"))) PPC_WEAK_FUNC(sub_83B9B1EC);
PPC_FUNC_IMPL(__imp__sub_83B9B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B1F0"))) PPC_WEAK_FUNC(sub_83B9B1F0);
PPC_FUNC_IMPL(__imp__sub_83B9B1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B1FC"))) PPC_WEAK_FUNC(sub_83B9B1FC);
PPC_FUNC_IMPL(__imp__sub_83B9B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B200"))) PPC_WEAK_FUNC(sub_83B9B200);
PPC_FUNC_IMPL(__imp__sub_83B9B200) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3556
	ctx.r7.s64 = ctx.r8.s64 + -3556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3556(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3556);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3556(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3556, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9B228"))) PPC_WEAK_FUNC(sub_83B9B228);
PPC_FUNC_IMPL(__imp__sub_83B9B228) {
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
	// addi r3,r11,-3560
	ctx.r3.s64 = ctx.r11.s64 + -3560;
	// bl 0x83523120
	ctx.lr = 0x83B9B240;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,13248
	ctx.r3.s64 = ctx.r10.s64 + 13248;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9B24C;
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

__attribute__((alias("__imp__sub_83B9B25C"))) PPC_WEAK_FUNC(sub_83B9B25C);
PPC_FUNC_IMPL(__imp__sub_83B9B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B260"))) PPC_WEAK_FUNC(sub_83B9B260);
PPC_FUNC_IMPL(__imp__sub_83B9B260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13264
	ctx.r3.s64 = ctx.r11.s64 + 13264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B26C"))) PPC_WEAK_FUNC(sub_83B9B26C);
PPC_FUNC_IMPL(__imp__sub_83B9B26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B270"))) PPC_WEAK_FUNC(sub_83B9B270);
PPC_FUNC_IMPL(__imp__sub_83B9B270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13272
	ctx.r3.s64 = ctx.r11.s64 + 13272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B27C"))) PPC_WEAK_FUNC(sub_83B9B27C);
PPC_FUNC_IMPL(__imp__sub_83B9B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B280"))) PPC_WEAK_FUNC(sub_83B9B280);
PPC_FUNC_IMPL(__imp__sub_83B9B280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B28C"))) PPC_WEAK_FUNC(sub_83B9B28C);
PPC_FUNC_IMPL(__imp__sub_83B9B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B290"))) PPC_WEAK_FUNC(sub_83B9B290);
PPC_FUNC_IMPL(__imp__sub_83B9B290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13288
	ctx.r3.s64 = ctx.r11.s64 + 13288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B29C"))) PPC_WEAK_FUNC(sub_83B9B29C);
PPC_FUNC_IMPL(__imp__sub_83B9B29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B2A0"))) PPC_WEAK_FUNC(sub_83B9B2A0);
PPC_FUNC_IMPL(__imp__sub_83B9B2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13296
	ctx.r3.s64 = ctx.r11.s64 + 13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B2AC"))) PPC_WEAK_FUNC(sub_83B9B2AC);
PPC_FUNC_IMPL(__imp__sub_83B9B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B2B0"))) PPC_WEAK_FUNC(sub_83B9B2B0);
PPC_FUNC_IMPL(__imp__sub_83B9B2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13304
	ctx.r3.s64 = ctx.r11.s64 + 13304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B2BC"))) PPC_WEAK_FUNC(sub_83B9B2BC);
PPC_FUNC_IMPL(__imp__sub_83B9B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B2C0"))) PPC_WEAK_FUNC(sub_83B9B2C0);
PPC_FUNC_IMPL(__imp__sub_83B9B2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13312
	ctx.r3.s64 = ctx.r11.s64 + 13312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B2CC"))) PPC_WEAK_FUNC(sub_83B9B2CC);
PPC_FUNC_IMPL(__imp__sub_83B9B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B2D0"))) PPC_WEAK_FUNC(sub_83B9B2D0);
PPC_FUNC_IMPL(__imp__sub_83B9B2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13320
	ctx.r3.s64 = ctx.r11.s64 + 13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B2DC"))) PPC_WEAK_FUNC(sub_83B9B2DC);
PPC_FUNC_IMPL(__imp__sub_83B9B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B2E0"))) PPC_WEAK_FUNC(sub_83B9B2E0);
PPC_FUNC_IMPL(__imp__sub_83B9B2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13328
	ctx.r3.s64 = ctx.r11.s64 + 13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B2EC"))) PPC_WEAK_FUNC(sub_83B9B2EC);
PPC_FUNC_IMPL(__imp__sub_83B9B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B2F0"))) PPC_WEAK_FUNC(sub_83B9B2F0);
PPC_FUNC_IMPL(__imp__sub_83B9B2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13336
	ctx.r3.s64 = ctx.r11.s64 + 13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B2FC"))) PPC_WEAK_FUNC(sub_83B9B2FC);
PPC_FUNC_IMPL(__imp__sub_83B9B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B300"))) PPC_WEAK_FUNC(sub_83B9B300);
PPC_FUNC_IMPL(__imp__sub_83B9B300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13344
	ctx.r3.s64 = ctx.r11.s64 + 13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B30C"))) PPC_WEAK_FUNC(sub_83B9B30C);
PPC_FUNC_IMPL(__imp__sub_83B9B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B310"))) PPC_WEAK_FUNC(sub_83B9B310);
PPC_FUNC_IMPL(__imp__sub_83B9B310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13352
	ctx.r3.s64 = ctx.r11.s64 + 13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B31C"))) PPC_WEAK_FUNC(sub_83B9B31C);
PPC_FUNC_IMPL(__imp__sub_83B9B31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B320"))) PPC_WEAK_FUNC(sub_83B9B320);
PPC_FUNC_IMPL(__imp__sub_83B9B320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3544
	ctx.r7.s64 = ctx.r8.s64 + -3544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3544);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3544(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3544, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9B348"))) PPC_WEAK_FUNC(sub_83B9B348);
PPC_FUNC_IMPL(__imp__sub_83B9B348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r8,24
	ctx.r8.s64 = 24;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r11,r11,-3536
	ctx.r11.s64 = ctx.r11.s64 + -3536;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83B9B368:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stwu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83b9b368
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B9B368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9B384"))) PPC_WEAK_FUNC(sub_83B9B384);
PPC_FUNC_IMPL(__imp__sub_83B9B384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B388"))) PPC_WEAK_FUNC(sub_83B9B388);
PPC_FUNC_IMPL(__imp__sub_83B9B388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13360
	ctx.r3.s64 = ctx.r11.s64 + 13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B394"))) PPC_WEAK_FUNC(sub_83B9B394);
PPC_FUNC_IMPL(__imp__sub_83B9B394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B398"))) PPC_WEAK_FUNC(sub_83B9B398);
PPC_FUNC_IMPL(__imp__sub_83B9B398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13384
	ctx.r3.s64 = ctx.r11.s64 + 13384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B3A4"))) PPC_WEAK_FUNC(sub_83B9B3A4);
PPC_FUNC_IMPL(__imp__sub_83B9B3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B3A8"))) PPC_WEAK_FUNC(sub_83B9B3A8);
PPC_FUNC_IMPL(__imp__sub_83B9B3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13392
	ctx.r3.s64 = ctx.r11.s64 + 13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B3B4"))) PPC_WEAK_FUNC(sub_83B9B3B4);
PPC_FUNC_IMPL(__imp__sub_83B9B3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B3B8"))) PPC_WEAK_FUNC(sub_83B9B3B8);
PPC_FUNC_IMPL(__imp__sub_83B9B3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13400
	ctx.r3.s64 = ctx.r11.s64 + 13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B3C4"))) PPC_WEAK_FUNC(sub_83B9B3C4);
PPC_FUNC_IMPL(__imp__sub_83B9B3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B3C8"))) PPC_WEAK_FUNC(sub_83B9B3C8);
PPC_FUNC_IMPL(__imp__sub_83B9B3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13408
	ctx.r3.s64 = ctx.r11.s64 + 13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B3D4"))) PPC_WEAK_FUNC(sub_83B9B3D4);
PPC_FUNC_IMPL(__imp__sub_83B9B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B3D8"))) PPC_WEAK_FUNC(sub_83B9B3D8);
PPC_FUNC_IMPL(__imp__sub_83B9B3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13416
	ctx.r3.s64 = ctx.r11.s64 + 13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B3E4"))) PPC_WEAK_FUNC(sub_83B9B3E4);
PPC_FUNC_IMPL(__imp__sub_83B9B3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B3E8"))) PPC_WEAK_FUNC(sub_83B9B3E8);
PPC_FUNC_IMPL(__imp__sub_83B9B3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B3F4"))) PPC_WEAK_FUNC(sub_83B9B3F4);
PPC_FUNC_IMPL(__imp__sub_83B9B3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B3F8"))) PPC_WEAK_FUNC(sub_83B9B3F8);
PPC_FUNC_IMPL(__imp__sub_83B9B3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B404"))) PPC_WEAK_FUNC(sub_83B9B404);
PPC_FUNC_IMPL(__imp__sub_83B9B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B408"))) PPC_WEAK_FUNC(sub_83B9B408);
PPC_FUNC_IMPL(__imp__sub_83B9B408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13440
	ctx.r3.s64 = ctx.r11.s64 + 13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B414"))) PPC_WEAK_FUNC(sub_83B9B414);
PPC_FUNC_IMPL(__imp__sub_83B9B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B418"))) PPC_WEAK_FUNC(sub_83B9B418);
PPC_FUNC_IMPL(__imp__sub_83B9B418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13448
	ctx.r3.s64 = ctx.r11.s64 + 13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B424"))) PPC_WEAK_FUNC(sub_83B9B424);
PPC_FUNC_IMPL(__imp__sub_83B9B424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B428"))) PPC_WEAK_FUNC(sub_83B9B428);
PPC_FUNC_IMPL(__imp__sub_83B9B428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13456
	ctx.r3.s64 = ctx.r11.s64 + 13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B434"))) PPC_WEAK_FUNC(sub_83B9B434);
PPC_FUNC_IMPL(__imp__sub_83B9B434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B438"))) PPC_WEAK_FUNC(sub_83B9B438);
PPC_FUNC_IMPL(__imp__sub_83B9B438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13464
	ctx.r3.s64 = ctx.r11.s64 + 13464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B444"))) PPC_WEAK_FUNC(sub_83B9B444);
PPC_FUNC_IMPL(__imp__sub_83B9B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B448"))) PPC_WEAK_FUNC(sub_83B9B448);
PPC_FUNC_IMPL(__imp__sub_83B9B448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13472
	ctx.r3.s64 = ctx.r11.s64 + 13472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B454"))) PPC_WEAK_FUNC(sub_83B9B454);
PPC_FUNC_IMPL(__imp__sub_83B9B454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B458"))) PPC_WEAK_FUNC(sub_83B9B458);
PPC_FUNC_IMPL(__imp__sub_83B9B458) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3148
	ctx.r7.s64 = ctx.r8.s64 + -3148;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3148(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3148);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3148, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9B480"))) PPC_WEAK_FUNC(sub_83B9B480);
PPC_FUNC_IMPL(__imp__sub_83B9B480) {
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
	// addi r3,r11,-3152
	ctx.r3.s64 = ctx.r11.s64 + -3152;
	// bl 0x83523120
	ctx.lr = 0x83B9B498;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,13480
	ctx.r3.s64 = ctx.r10.s64 + 13480;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9B4A4;
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

__attribute__((alias("__imp__sub_83B9B4B4"))) PPC_WEAK_FUNC(sub_83B9B4B4);
PPC_FUNC_IMPL(__imp__sub_83B9B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B4B8"))) PPC_WEAK_FUNC(sub_83B9B4B8);
PPC_FUNC_IMPL(__imp__sub_83B9B4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13496
	ctx.r3.s64 = ctx.r11.s64 + 13496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B4C4"))) PPC_WEAK_FUNC(sub_83B9B4C4);
PPC_FUNC_IMPL(__imp__sub_83B9B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B4C8"))) PPC_WEAK_FUNC(sub_83B9B4C8);
PPC_FUNC_IMPL(__imp__sub_83B9B4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13504
	ctx.r3.s64 = ctx.r11.s64 + 13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B4D4"))) PPC_WEAK_FUNC(sub_83B9B4D4);
PPC_FUNC_IMPL(__imp__sub_83B9B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B4D8"))) PPC_WEAK_FUNC(sub_83B9B4D8);
PPC_FUNC_IMPL(__imp__sub_83B9B4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B4E4"))) PPC_WEAK_FUNC(sub_83B9B4E4);
PPC_FUNC_IMPL(__imp__sub_83B9B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B4E8"))) PPC_WEAK_FUNC(sub_83B9B4E8);
PPC_FUNC_IMPL(__imp__sub_83B9B4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13520
	ctx.r3.s64 = ctx.r11.s64 + 13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B4F4"))) PPC_WEAK_FUNC(sub_83B9B4F4);
PPC_FUNC_IMPL(__imp__sub_83B9B4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B4F8"))) PPC_WEAK_FUNC(sub_83B9B4F8);
PPC_FUNC_IMPL(__imp__sub_83B9B4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13528
	ctx.r3.s64 = ctx.r11.s64 + 13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B504"))) PPC_WEAK_FUNC(sub_83B9B504);
PPC_FUNC_IMPL(__imp__sub_83B9B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B508"))) PPC_WEAK_FUNC(sub_83B9B508);
PPC_FUNC_IMPL(__imp__sub_83B9B508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13536
	ctx.r3.s64 = ctx.r11.s64 + 13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B514"))) PPC_WEAK_FUNC(sub_83B9B514);
PPC_FUNC_IMPL(__imp__sub_83B9B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B518"))) PPC_WEAK_FUNC(sub_83B9B518);
PPC_FUNC_IMPL(__imp__sub_83B9B518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13544
	ctx.r3.s64 = ctx.r11.s64 + 13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B524"))) PPC_WEAK_FUNC(sub_83B9B524);
PPC_FUNC_IMPL(__imp__sub_83B9B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B528"))) PPC_WEAK_FUNC(sub_83B9B528);
PPC_FUNC_IMPL(__imp__sub_83B9B528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13552
	ctx.r3.s64 = ctx.r11.s64 + 13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B534"))) PPC_WEAK_FUNC(sub_83B9B534);
PPC_FUNC_IMPL(__imp__sub_83B9B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B538"))) PPC_WEAK_FUNC(sub_83B9B538);
PPC_FUNC_IMPL(__imp__sub_83B9B538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13560
	ctx.r3.s64 = ctx.r11.s64 + 13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B544"))) PPC_WEAK_FUNC(sub_83B9B544);
PPC_FUNC_IMPL(__imp__sub_83B9B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B548"))) PPC_WEAK_FUNC(sub_83B9B548);
PPC_FUNC_IMPL(__imp__sub_83B9B548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13568
	ctx.r3.s64 = ctx.r11.s64 + 13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B554"))) PPC_WEAK_FUNC(sub_83B9B554);
PPC_FUNC_IMPL(__imp__sub_83B9B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B558"))) PPC_WEAK_FUNC(sub_83B9B558);
PPC_FUNC_IMPL(__imp__sub_83B9B558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13576
	ctx.r3.s64 = ctx.r11.s64 + 13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B564"))) PPC_WEAK_FUNC(sub_83B9B564);
PPC_FUNC_IMPL(__imp__sub_83B9B564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B568"))) PPC_WEAK_FUNC(sub_83B9B568);
PPC_FUNC_IMPL(__imp__sub_83B9B568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13584
	ctx.r3.s64 = ctx.r11.s64 + 13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B574"))) PPC_WEAK_FUNC(sub_83B9B574);
PPC_FUNC_IMPL(__imp__sub_83B9B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B578"))) PPC_WEAK_FUNC(sub_83B9B578);
PPC_FUNC_IMPL(__imp__sub_83B9B578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13592
	ctx.r3.s64 = ctx.r11.s64 + 13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B584"))) PPC_WEAK_FUNC(sub_83B9B584);
PPC_FUNC_IMPL(__imp__sub_83B9B584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B588"))) PPC_WEAK_FUNC(sub_83B9B588);
PPC_FUNC_IMPL(__imp__sub_83B9B588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13600
	ctx.r3.s64 = ctx.r11.s64 + 13600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B594"))) PPC_WEAK_FUNC(sub_83B9B594);
PPC_FUNC_IMPL(__imp__sub_83B9B594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B598"))) PPC_WEAK_FUNC(sub_83B9B598);
PPC_FUNC_IMPL(__imp__sub_83B9B598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13608
	ctx.r3.s64 = ctx.r11.s64 + 13608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9B5A4"))) PPC_WEAK_FUNC(sub_83B9B5A4);
PPC_FUNC_IMPL(__imp__sub_83B9B5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9B5A8"))) PPC_WEAK_FUNC(sub_83B9B5A8);
PPC_FUNC_IMPL(__imp__sub_83B9B5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,13616
	ctx.r3.s64 = ctx.r11.s64 + 13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

