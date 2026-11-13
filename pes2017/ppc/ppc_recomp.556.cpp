#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B85A8C"))) PPC_WEAK_FUNC(sub_83B85A8C);
PPC_FUNC_IMPL(__imp__sub_83B85A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85A90"))) PPC_WEAK_FUNC(sub_83B85A90);
PPC_FUNC_IMPL(__imp__sub_83B85A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18896
	ctx.r3.s64 = ctx.r11.s64 + -18896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85A9C"))) PPC_WEAK_FUNC(sub_83B85A9C);
PPC_FUNC_IMPL(__imp__sub_83B85A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85AA0"))) PPC_WEAK_FUNC(sub_83B85AA0);
PPC_FUNC_IMPL(__imp__sub_83B85AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18888
	ctx.r3.s64 = ctx.r11.s64 + -18888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85AAC"))) PPC_WEAK_FUNC(sub_83B85AAC);
PPC_FUNC_IMPL(__imp__sub_83B85AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85AB0"))) PPC_WEAK_FUNC(sub_83B85AB0);
PPC_FUNC_IMPL(__imp__sub_83B85AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18880
	ctx.r3.s64 = ctx.r11.s64 + -18880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85ABC"))) PPC_WEAK_FUNC(sub_83B85ABC);
PPC_FUNC_IMPL(__imp__sub_83B85ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85AC0"))) PPC_WEAK_FUNC(sub_83B85AC0);
PPC_FUNC_IMPL(__imp__sub_83B85AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18872
	ctx.r3.s64 = ctx.r11.s64 + -18872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85ACC"))) PPC_WEAK_FUNC(sub_83B85ACC);
PPC_FUNC_IMPL(__imp__sub_83B85ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85AD0"))) PPC_WEAK_FUNC(sub_83B85AD0);
PPC_FUNC_IMPL(__imp__sub_83B85AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-23700
	ctx.r4.s64 = ctx.r11.s64 + -23700;
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
	// addi r3,r7,-11852
	ctx.r3.s64 = ctx.r7.s64 + -11852;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85B00"))) PPC_WEAK_FUNC(sub_83B85B00);
PPC_FUNC_IMPL(__imp__sub_83B85B00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11860
	ctx.r7.s64 = ctx.r8.s64 + -11860;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11860(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11860);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11860(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11860, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85B28"))) PPC_WEAK_FUNC(sub_83B85B28);
PPC_FUNC_IMPL(__imp__sub_83B85B28) {
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
	// addi r3,r11,-11864
	ctx.r3.s64 = ctx.r11.s64 + -11864;
	// bl 0x83523120
	ctx.lr = 0x83B85B40;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18864
	ctx.r3.s64 = ctx.r10.s64 + -18864;
	// bl 0x831cdcc8
	ctx.lr = 0x83B85B4C;
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

__attribute__((alias("__imp__sub_83B85B5C"))) PPC_WEAK_FUNC(sub_83B85B5C);
PPC_FUNC_IMPL(__imp__sub_83B85B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85B60"))) PPC_WEAK_FUNC(sub_83B85B60);
PPC_FUNC_IMPL(__imp__sub_83B85B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18848
	ctx.r3.s64 = ctx.r11.s64 + -18848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85B6C"))) PPC_WEAK_FUNC(sub_83B85B6C);
PPC_FUNC_IMPL(__imp__sub_83B85B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85B70"))) PPC_WEAK_FUNC(sub_83B85B70);
PPC_FUNC_IMPL(__imp__sub_83B85B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18840
	ctx.r3.s64 = ctx.r11.s64 + -18840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85B7C"))) PPC_WEAK_FUNC(sub_83B85B7C);
PPC_FUNC_IMPL(__imp__sub_83B85B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85B80"))) PPC_WEAK_FUNC(sub_83B85B80);
PPC_FUNC_IMPL(__imp__sub_83B85B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85B8C"))) PPC_WEAK_FUNC(sub_83B85B8C);
PPC_FUNC_IMPL(__imp__sub_83B85B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85B90"))) PPC_WEAK_FUNC(sub_83B85B90);
PPC_FUNC_IMPL(__imp__sub_83B85B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18824
	ctx.r3.s64 = ctx.r11.s64 + -18824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85B9C"))) PPC_WEAK_FUNC(sub_83B85B9C);
PPC_FUNC_IMPL(__imp__sub_83B85B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85BA0"))) PPC_WEAK_FUNC(sub_83B85BA0);
PPC_FUNC_IMPL(__imp__sub_83B85BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18816
	ctx.r3.s64 = ctx.r11.s64 + -18816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85BAC"))) PPC_WEAK_FUNC(sub_83B85BAC);
PPC_FUNC_IMPL(__imp__sub_83B85BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85BB0"))) PPC_WEAK_FUNC(sub_83B85BB0);
PPC_FUNC_IMPL(__imp__sub_83B85BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18808
	ctx.r3.s64 = ctx.r11.s64 + -18808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85BBC"))) PPC_WEAK_FUNC(sub_83B85BBC);
PPC_FUNC_IMPL(__imp__sub_83B85BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85BC0"))) PPC_WEAK_FUNC(sub_83B85BC0);
PPC_FUNC_IMPL(__imp__sub_83B85BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18800
	ctx.r3.s64 = ctx.r11.s64 + -18800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85BCC"))) PPC_WEAK_FUNC(sub_83B85BCC);
PPC_FUNC_IMPL(__imp__sub_83B85BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85BD0"))) PPC_WEAK_FUNC(sub_83B85BD0);
PPC_FUNC_IMPL(__imp__sub_83B85BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18792
	ctx.r3.s64 = ctx.r11.s64 + -18792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85BDC"))) PPC_WEAK_FUNC(sub_83B85BDC);
PPC_FUNC_IMPL(__imp__sub_83B85BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85BE0"))) PPC_WEAK_FUNC(sub_83B85BE0);
PPC_FUNC_IMPL(__imp__sub_83B85BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18784
	ctx.r3.s64 = ctx.r11.s64 + -18784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85BEC"))) PPC_WEAK_FUNC(sub_83B85BEC);
PPC_FUNC_IMPL(__imp__sub_83B85BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85BF0"))) PPC_WEAK_FUNC(sub_83B85BF0);
PPC_FUNC_IMPL(__imp__sub_83B85BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18776
	ctx.r3.s64 = ctx.r11.s64 + -18776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85BFC"))) PPC_WEAK_FUNC(sub_83B85BFC);
PPC_FUNC_IMPL(__imp__sub_83B85BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85C00"))) PPC_WEAK_FUNC(sub_83B85C00);
PPC_FUNC_IMPL(__imp__sub_83B85C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18768
	ctx.r3.s64 = ctx.r11.s64 + -18768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85C0C"))) PPC_WEAK_FUNC(sub_83B85C0C);
PPC_FUNC_IMPL(__imp__sub_83B85C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85C10"))) PPC_WEAK_FUNC(sub_83B85C10);
PPC_FUNC_IMPL(__imp__sub_83B85C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18760
	ctx.r3.s64 = ctx.r11.s64 + -18760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85C1C"))) PPC_WEAK_FUNC(sub_83B85C1C);
PPC_FUNC_IMPL(__imp__sub_83B85C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85C20"))) PPC_WEAK_FUNC(sub_83B85C20);
PPC_FUNC_IMPL(__imp__sub_83B85C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-23412
	ctx.r4.s64 = ctx.r11.s64 + -23412;
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
	// addi r3,r7,-11820
	ctx.r3.s64 = ctx.r7.s64 + -11820;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85C50"))) PPC_WEAK_FUNC(sub_83B85C50);
PPC_FUNC_IMPL(__imp__sub_83B85C50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11828
	ctx.r7.s64 = ctx.r8.s64 + -11828;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11828(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11828);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11828(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11828, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85C78"))) PPC_WEAK_FUNC(sub_83B85C78);
PPC_FUNC_IMPL(__imp__sub_83B85C78) {
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
	// addi r3,r11,-11832
	ctx.r3.s64 = ctx.r11.s64 + -11832;
	// bl 0x83523120
	ctx.lr = 0x83B85C90;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18752
	ctx.r3.s64 = ctx.r10.s64 + -18752;
	// bl 0x831cdcc8
	ctx.lr = 0x83B85C9C;
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

__attribute__((alias("__imp__sub_83B85CAC"))) PPC_WEAK_FUNC(sub_83B85CAC);
PPC_FUNC_IMPL(__imp__sub_83B85CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85CB0"))) PPC_WEAK_FUNC(sub_83B85CB0);
PPC_FUNC_IMPL(__imp__sub_83B85CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18736
	ctx.r3.s64 = ctx.r11.s64 + -18736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85CBC"))) PPC_WEAK_FUNC(sub_83B85CBC);
PPC_FUNC_IMPL(__imp__sub_83B85CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85CC0"))) PPC_WEAK_FUNC(sub_83B85CC0);
PPC_FUNC_IMPL(__imp__sub_83B85CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18728
	ctx.r3.s64 = ctx.r11.s64 + -18728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85CCC"))) PPC_WEAK_FUNC(sub_83B85CCC);
PPC_FUNC_IMPL(__imp__sub_83B85CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85CD0"))) PPC_WEAK_FUNC(sub_83B85CD0);
PPC_FUNC_IMPL(__imp__sub_83B85CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85CDC"))) PPC_WEAK_FUNC(sub_83B85CDC);
PPC_FUNC_IMPL(__imp__sub_83B85CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85CE0"))) PPC_WEAK_FUNC(sub_83B85CE0);
PPC_FUNC_IMPL(__imp__sub_83B85CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18712
	ctx.r3.s64 = ctx.r11.s64 + -18712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85CEC"))) PPC_WEAK_FUNC(sub_83B85CEC);
PPC_FUNC_IMPL(__imp__sub_83B85CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85CF0"))) PPC_WEAK_FUNC(sub_83B85CF0);
PPC_FUNC_IMPL(__imp__sub_83B85CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85CFC"))) PPC_WEAK_FUNC(sub_83B85CFC);
PPC_FUNC_IMPL(__imp__sub_83B85CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85D00"))) PPC_WEAK_FUNC(sub_83B85D00);
PPC_FUNC_IMPL(__imp__sub_83B85D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18696
	ctx.r3.s64 = ctx.r11.s64 + -18696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85D0C"))) PPC_WEAK_FUNC(sub_83B85D0C);
PPC_FUNC_IMPL(__imp__sub_83B85D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85D10"))) PPC_WEAK_FUNC(sub_83B85D10);
PPC_FUNC_IMPL(__imp__sub_83B85D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18688
	ctx.r3.s64 = ctx.r11.s64 + -18688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85D1C"))) PPC_WEAK_FUNC(sub_83B85D1C);
PPC_FUNC_IMPL(__imp__sub_83B85D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85D20"))) PPC_WEAK_FUNC(sub_83B85D20);
PPC_FUNC_IMPL(__imp__sub_83B85D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18680
	ctx.r3.s64 = ctx.r11.s64 + -18680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85D2C"))) PPC_WEAK_FUNC(sub_83B85D2C);
PPC_FUNC_IMPL(__imp__sub_83B85D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85D30"))) PPC_WEAK_FUNC(sub_83B85D30);
PPC_FUNC_IMPL(__imp__sub_83B85D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18672
	ctx.r3.s64 = ctx.r11.s64 + -18672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85D3C"))) PPC_WEAK_FUNC(sub_83B85D3C);
PPC_FUNC_IMPL(__imp__sub_83B85D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85D40"))) PPC_WEAK_FUNC(sub_83B85D40);
PPC_FUNC_IMPL(__imp__sub_83B85D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18664
	ctx.r3.s64 = ctx.r11.s64 + -18664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85D4C"))) PPC_WEAK_FUNC(sub_83B85D4C);
PPC_FUNC_IMPL(__imp__sub_83B85D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85D50"))) PPC_WEAK_FUNC(sub_83B85D50);
PPC_FUNC_IMPL(__imp__sub_83B85D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18656
	ctx.r3.s64 = ctx.r11.s64 + -18656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85D5C"))) PPC_WEAK_FUNC(sub_83B85D5C);
PPC_FUNC_IMPL(__imp__sub_83B85D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85D60"))) PPC_WEAK_FUNC(sub_83B85D60);
PPC_FUNC_IMPL(__imp__sub_83B85D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18648
	ctx.r3.s64 = ctx.r11.s64 + -18648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85D6C"))) PPC_WEAK_FUNC(sub_83B85D6C);
PPC_FUNC_IMPL(__imp__sub_83B85D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85D70"))) PPC_WEAK_FUNC(sub_83B85D70);
PPC_FUNC_IMPL(__imp__sub_83B85D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-22644
	ctx.r4.s64 = ctx.r11.s64 + -22644;
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
	// addi r3,r7,-11796
	ctx.r3.s64 = ctx.r7.s64 + -11796;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85DA0"))) PPC_WEAK_FUNC(sub_83B85DA0);
PPC_FUNC_IMPL(__imp__sub_83B85DA0) {
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
	// addi r3,r11,-11808
	ctx.r3.s64 = ctx.r11.s64 + -11808;
	// bl 0x83523120
	ctx.lr = 0x83B85DB8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18640
	ctx.r3.s64 = ctx.r10.s64 + -18640;
	// bl 0x831cdcc8
	ctx.lr = 0x83B85DC4;
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

__attribute__((alias("__imp__sub_83B85DD4"))) PPC_WEAK_FUNC(sub_83B85DD4);
PPC_FUNC_IMPL(__imp__sub_83B85DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85DD8"))) PPC_WEAK_FUNC(sub_83B85DD8);
PPC_FUNC_IMPL(__imp__sub_83B85DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11804
	ctx.r7.s64 = ctx.r8.s64 + -11804;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11804(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11804);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11804(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11804, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85E00"))) PPC_WEAK_FUNC(sub_83B85E00);
PPC_FUNC_IMPL(__imp__sub_83B85E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18624
	ctx.r3.s64 = ctx.r11.s64 + -18624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E0C"))) PPC_WEAK_FUNC(sub_83B85E0C);
PPC_FUNC_IMPL(__imp__sub_83B85E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E10"))) PPC_WEAK_FUNC(sub_83B85E10);
PPC_FUNC_IMPL(__imp__sub_83B85E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E1C"))) PPC_WEAK_FUNC(sub_83B85E1C);
PPC_FUNC_IMPL(__imp__sub_83B85E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E20"))) PPC_WEAK_FUNC(sub_83B85E20);
PPC_FUNC_IMPL(__imp__sub_83B85E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18608
	ctx.r3.s64 = ctx.r11.s64 + -18608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E2C"))) PPC_WEAK_FUNC(sub_83B85E2C);
PPC_FUNC_IMPL(__imp__sub_83B85E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E30"))) PPC_WEAK_FUNC(sub_83B85E30);
PPC_FUNC_IMPL(__imp__sub_83B85E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18600
	ctx.r3.s64 = ctx.r11.s64 + -18600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E3C"))) PPC_WEAK_FUNC(sub_83B85E3C);
PPC_FUNC_IMPL(__imp__sub_83B85E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E40"))) PPC_WEAK_FUNC(sub_83B85E40);
PPC_FUNC_IMPL(__imp__sub_83B85E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E4C"))) PPC_WEAK_FUNC(sub_83B85E4C);
PPC_FUNC_IMPL(__imp__sub_83B85E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E50"))) PPC_WEAK_FUNC(sub_83B85E50);
PPC_FUNC_IMPL(__imp__sub_83B85E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18584
	ctx.r3.s64 = ctx.r11.s64 + -18584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E5C"))) PPC_WEAK_FUNC(sub_83B85E5C);
PPC_FUNC_IMPL(__imp__sub_83B85E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E60"))) PPC_WEAK_FUNC(sub_83B85E60);
PPC_FUNC_IMPL(__imp__sub_83B85E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E6C"))) PPC_WEAK_FUNC(sub_83B85E6C);
PPC_FUNC_IMPL(__imp__sub_83B85E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E70"))) PPC_WEAK_FUNC(sub_83B85E70);
PPC_FUNC_IMPL(__imp__sub_83B85E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18568
	ctx.r3.s64 = ctx.r11.s64 + -18568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E7C"))) PPC_WEAK_FUNC(sub_83B85E7C);
PPC_FUNC_IMPL(__imp__sub_83B85E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E80"))) PPC_WEAK_FUNC(sub_83B85E80);
PPC_FUNC_IMPL(__imp__sub_83B85E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E8C"))) PPC_WEAK_FUNC(sub_83B85E8C);
PPC_FUNC_IMPL(__imp__sub_83B85E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85E90"))) PPC_WEAK_FUNC(sub_83B85E90);
PPC_FUNC_IMPL(__imp__sub_83B85E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18552
	ctx.r3.s64 = ctx.r11.s64 + -18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85E9C"))) PPC_WEAK_FUNC(sub_83B85E9C);
PPC_FUNC_IMPL(__imp__sub_83B85E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85EA0"))) PPC_WEAK_FUNC(sub_83B85EA0);
PPC_FUNC_IMPL(__imp__sub_83B85EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18544
	ctx.r3.s64 = ctx.r11.s64 + -18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85EAC"))) PPC_WEAK_FUNC(sub_83B85EAC);
PPC_FUNC_IMPL(__imp__sub_83B85EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85EB0"))) PPC_WEAK_FUNC(sub_83B85EB0);
PPC_FUNC_IMPL(__imp__sub_83B85EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18536
	ctx.r3.s64 = ctx.r11.s64 + -18536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85EBC"))) PPC_WEAK_FUNC(sub_83B85EBC);
PPC_FUNC_IMPL(__imp__sub_83B85EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85EC0"))) PPC_WEAK_FUNC(sub_83B85EC0);
PPC_FUNC_IMPL(__imp__sub_83B85EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-22372
	ctx.r4.s64 = ctx.r11.s64 + -22372;
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
	// addi r3,r7,-11772
	ctx.r3.s64 = ctx.r7.s64 + -11772;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85EF0"))) PPC_WEAK_FUNC(sub_83B85EF0);
PPC_FUNC_IMPL(__imp__sub_83B85EF0) {
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
	// addi r3,r11,-11784
	ctx.r3.s64 = ctx.r11.s64 + -11784;
	// bl 0x83523120
	ctx.lr = 0x83B85F08;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18528
	ctx.r3.s64 = ctx.r10.s64 + -18528;
	// bl 0x831cdcc8
	ctx.lr = 0x83B85F14;
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

__attribute__((alias("__imp__sub_83B85F24"))) PPC_WEAK_FUNC(sub_83B85F24);
PPC_FUNC_IMPL(__imp__sub_83B85F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85F28"))) PPC_WEAK_FUNC(sub_83B85F28);
PPC_FUNC_IMPL(__imp__sub_83B85F28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11780
	ctx.r7.s64 = ctx.r8.s64 + -11780;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11780(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11780);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11780, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85F50"))) PPC_WEAK_FUNC(sub_83B85F50);
PPC_FUNC_IMPL(__imp__sub_83B85F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85F5C"))) PPC_WEAK_FUNC(sub_83B85F5C);
PPC_FUNC_IMPL(__imp__sub_83B85F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85F60"))) PPC_WEAK_FUNC(sub_83B85F60);
PPC_FUNC_IMPL(__imp__sub_83B85F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18504
	ctx.r3.s64 = ctx.r11.s64 + -18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85F6C"))) PPC_WEAK_FUNC(sub_83B85F6C);
PPC_FUNC_IMPL(__imp__sub_83B85F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85F70"))) PPC_WEAK_FUNC(sub_83B85F70);
PPC_FUNC_IMPL(__imp__sub_83B85F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85F7C"))) PPC_WEAK_FUNC(sub_83B85F7C);
PPC_FUNC_IMPL(__imp__sub_83B85F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85F80"))) PPC_WEAK_FUNC(sub_83B85F80);
PPC_FUNC_IMPL(__imp__sub_83B85F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85F8C"))) PPC_WEAK_FUNC(sub_83B85F8C);
PPC_FUNC_IMPL(__imp__sub_83B85F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85F90"))) PPC_WEAK_FUNC(sub_83B85F90);
PPC_FUNC_IMPL(__imp__sub_83B85F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18480
	ctx.r3.s64 = ctx.r11.s64 + -18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85F9C"))) PPC_WEAK_FUNC(sub_83B85F9C);
PPC_FUNC_IMPL(__imp__sub_83B85F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85FA0"))) PPC_WEAK_FUNC(sub_83B85FA0);
PPC_FUNC_IMPL(__imp__sub_83B85FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18472
	ctx.r3.s64 = ctx.r11.s64 + -18472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85FAC"))) PPC_WEAK_FUNC(sub_83B85FAC);
PPC_FUNC_IMPL(__imp__sub_83B85FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85FB0"))) PPC_WEAK_FUNC(sub_83B85FB0);
PPC_FUNC_IMPL(__imp__sub_83B85FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18464
	ctx.r3.s64 = ctx.r11.s64 + -18464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85FBC"))) PPC_WEAK_FUNC(sub_83B85FBC);
PPC_FUNC_IMPL(__imp__sub_83B85FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85FC0"))) PPC_WEAK_FUNC(sub_83B85FC0);
PPC_FUNC_IMPL(__imp__sub_83B85FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18456
	ctx.r3.s64 = ctx.r11.s64 + -18456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85FCC"))) PPC_WEAK_FUNC(sub_83B85FCC);
PPC_FUNC_IMPL(__imp__sub_83B85FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85FD0"))) PPC_WEAK_FUNC(sub_83B85FD0);
PPC_FUNC_IMPL(__imp__sub_83B85FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18448
	ctx.r3.s64 = ctx.r11.s64 + -18448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85FDC"))) PPC_WEAK_FUNC(sub_83B85FDC);
PPC_FUNC_IMPL(__imp__sub_83B85FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85FE0"))) PPC_WEAK_FUNC(sub_83B85FE0);
PPC_FUNC_IMPL(__imp__sub_83B85FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18440
	ctx.r3.s64 = ctx.r11.s64 + -18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85FEC"))) PPC_WEAK_FUNC(sub_83B85FEC);
PPC_FUNC_IMPL(__imp__sub_83B85FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85FF0"))) PPC_WEAK_FUNC(sub_83B85FF0);
PPC_FUNC_IMPL(__imp__sub_83B85FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85FFC"))) PPC_WEAK_FUNC(sub_83B85FFC);
PPC_FUNC_IMPL(__imp__sub_83B85FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86000"))) PPC_WEAK_FUNC(sub_83B86000);
PPC_FUNC_IMPL(__imp__sub_83B86000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18424
	ctx.r3.s64 = ctx.r11.s64 + -18424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8600C"))) PPC_WEAK_FUNC(sub_83B8600C);
PPC_FUNC_IMPL(__imp__sub_83B8600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86010"))) PPC_WEAK_FUNC(sub_83B86010);
PPC_FUNC_IMPL(__imp__sub_83B86010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-22052
	ctx.r4.s64 = ctx.r11.s64 + -22052;
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
	// addi r3,r7,-11748
	ctx.r3.s64 = ctx.r7.s64 + -11748;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86040"))) PPC_WEAK_FUNC(sub_83B86040);
PPC_FUNC_IMPL(__imp__sub_83B86040) {
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
	// addi r3,r11,-11760
	ctx.r3.s64 = ctx.r11.s64 + -11760;
	// bl 0x83523120
	ctx.lr = 0x83B86058;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18416
	ctx.r3.s64 = ctx.r10.s64 + -18416;
	// bl 0x831cdcc8
	ctx.lr = 0x83B86064;
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

__attribute__((alias("__imp__sub_83B86074"))) PPC_WEAK_FUNC(sub_83B86074);
PPC_FUNC_IMPL(__imp__sub_83B86074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86078"))) PPC_WEAK_FUNC(sub_83B86078);
PPC_FUNC_IMPL(__imp__sub_83B86078) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11756
	ctx.r7.s64 = ctx.r8.s64 + -11756;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11756(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11756);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11756(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11756, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B860A0"))) PPC_WEAK_FUNC(sub_83B860A0);
PPC_FUNC_IMPL(__imp__sub_83B860A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18400
	ctx.r3.s64 = ctx.r11.s64 + -18400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B860AC"))) PPC_WEAK_FUNC(sub_83B860AC);
PPC_FUNC_IMPL(__imp__sub_83B860AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B860B0"))) PPC_WEAK_FUNC(sub_83B860B0);
PPC_FUNC_IMPL(__imp__sub_83B860B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18392
	ctx.r3.s64 = ctx.r11.s64 + -18392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B860BC"))) PPC_WEAK_FUNC(sub_83B860BC);
PPC_FUNC_IMPL(__imp__sub_83B860BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B860C0"))) PPC_WEAK_FUNC(sub_83B860C0);
PPC_FUNC_IMPL(__imp__sub_83B860C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18384
	ctx.r3.s64 = ctx.r11.s64 + -18384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B860CC"))) PPC_WEAK_FUNC(sub_83B860CC);
PPC_FUNC_IMPL(__imp__sub_83B860CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B860D0"))) PPC_WEAK_FUNC(sub_83B860D0);
PPC_FUNC_IMPL(__imp__sub_83B860D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18376
	ctx.r3.s64 = ctx.r11.s64 + -18376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B860DC"))) PPC_WEAK_FUNC(sub_83B860DC);
PPC_FUNC_IMPL(__imp__sub_83B860DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B860E0"))) PPC_WEAK_FUNC(sub_83B860E0);
PPC_FUNC_IMPL(__imp__sub_83B860E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18368
	ctx.r3.s64 = ctx.r11.s64 + -18368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B860EC"))) PPC_WEAK_FUNC(sub_83B860EC);
PPC_FUNC_IMPL(__imp__sub_83B860EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B860F0"))) PPC_WEAK_FUNC(sub_83B860F0);
PPC_FUNC_IMPL(__imp__sub_83B860F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B860FC"))) PPC_WEAK_FUNC(sub_83B860FC);
PPC_FUNC_IMPL(__imp__sub_83B860FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86100"))) PPC_WEAK_FUNC(sub_83B86100);
PPC_FUNC_IMPL(__imp__sub_83B86100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8610C"))) PPC_WEAK_FUNC(sub_83B8610C);
PPC_FUNC_IMPL(__imp__sub_83B8610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86110"))) PPC_WEAK_FUNC(sub_83B86110);
PPC_FUNC_IMPL(__imp__sub_83B86110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8611C"))) PPC_WEAK_FUNC(sub_83B8611C);
PPC_FUNC_IMPL(__imp__sub_83B8611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86120"))) PPC_WEAK_FUNC(sub_83B86120);
PPC_FUNC_IMPL(__imp__sub_83B86120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8612C"))) PPC_WEAK_FUNC(sub_83B8612C);
PPC_FUNC_IMPL(__imp__sub_83B8612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86130"))) PPC_WEAK_FUNC(sub_83B86130);
PPC_FUNC_IMPL(__imp__sub_83B86130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8613C"))) PPC_WEAK_FUNC(sub_83B8613C);
PPC_FUNC_IMPL(__imp__sub_83B8613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86140"))) PPC_WEAK_FUNC(sub_83B86140);
PPC_FUNC_IMPL(__imp__sub_83B86140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18320
	ctx.r3.s64 = ctx.r11.s64 + -18320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8614C"))) PPC_WEAK_FUNC(sub_83B8614C);
PPC_FUNC_IMPL(__imp__sub_83B8614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86150"))) PPC_WEAK_FUNC(sub_83B86150);
PPC_FUNC_IMPL(__imp__sub_83B86150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18312
	ctx.r3.s64 = ctx.r11.s64 + -18312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8615C"))) PPC_WEAK_FUNC(sub_83B8615C);
PPC_FUNC_IMPL(__imp__sub_83B8615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86160"))) PPC_WEAK_FUNC(sub_83B86160);
PPC_FUNC_IMPL(__imp__sub_83B86160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-21748
	ctx.r4.s64 = ctx.r11.s64 + -21748;
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
	// addi r3,r7,-11724
	ctx.r3.s64 = ctx.r7.s64 + -11724;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86190"))) PPC_WEAK_FUNC(sub_83B86190);
PPC_FUNC_IMPL(__imp__sub_83B86190) {
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
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// bl 0x83523120
	ctx.lr = 0x83B861A8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18304
	ctx.r3.s64 = ctx.r10.s64 + -18304;
	// bl 0x831cdcc8
	ctx.lr = 0x83B861B4;
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

__attribute__((alias("__imp__sub_83B861C4"))) PPC_WEAK_FUNC(sub_83B861C4);
PPC_FUNC_IMPL(__imp__sub_83B861C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B861C8"))) PPC_WEAK_FUNC(sub_83B861C8);
PPC_FUNC_IMPL(__imp__sub_83B861C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11732
	ctx.r7.s64 = ctx.r8.s64 + -11732;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11732(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11732);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11732, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B861F0"))) PPC_WEAK_FUNC(sub_83B861F0);
PPC_FUNC_IMPL(__imp__sub_83B861F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B861FC"))) PPC_WEAK_FUNC(sub_83B861FC);
PPC_FUNC_IMPL(__imp__sub_83B861FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86200"))) PPC_WEAK_FUNC(sub_83B86200);
PPC_FUNC_IMPL(__imp__sub_83B86200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18280
	ctx.r3.s64 = ctx.r11.s64 + -18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8620C"))) PPC_WEAK_FUNC(sub_83B8620C);
PPC_FUNC_IMPL(__imp__sub_83B8620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86210"))) PPC_WEAK_FUNC(sub_83B86210);
PPC_FUNC_IMPL(__imp__sub_83B86210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18272
	ctx.r3.s64 = ctx.r11.s64 + -18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8621C"))) PPC_WEAK_FUNC(sub_83B8621C);
PPC_FUNC_IMPL(__imp__sub_83B8621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86220"))) PPC_WEAK_FUNC(sub_83B86220);
PPC_FUNC_IMPL(__imp__sub_83B86220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18264
	ctx.r3.s64 = ctx.r11.s64 + -18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8622C"))) PPC_WEAK_FUNC(sub_83B8622C);
PPC_FUNC_IMPL(__imp__sub_83B8622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86230"))) PPC_WEAK_FUNC(sub_83B86230);
PPC_FUNC_IMPL(__imp__sub_83B86230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18256
	ctx.r3.s64 = ctx.r11.s64 + -18256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8623C"))) PPC_WEAK_FUNC(sub_83B8623C);
PPC_FUNC_IMPL(__imp__sub_83B8623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86240"))) PPC_WEAK_FUNC(sub_83B86240);
PPC_FUNC_IMPL(__imp__sub_83B86240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18248
	ctx.r3.s64 = ctx.r11.s64 + -18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8624C"))) PPC_WEAK_FUNC(sub_83B8624C);
PPC_FUNC_IMPL(__imp__sub_83B8624C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86250"))) PPC_WEAK_FUNC(sub_83B86250);
PPC_FUNC_IMPL(__imp__sub_83B86250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18240
	ctx.r3.s64 = ctx.r11.s64 + -18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8625C"))) PPC_WEAK_FUNC(sub_83B8625C);
PPC_FUNC_IMPL(__imp__sub_83B8625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86260"))) PPC_WEAK_FUNC(sub_83B86260);
PPC_FUNC_IMPL(__imp__sub_83B86260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18232
	ctx.r3.s64 = ctx.r11.s64 + -18232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8626C"))) PPC_WEAK_FUNC(sub_83B8626C);
PPC_FUNC_IMPL(__imp__sub_83B8626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86270"))) PPC_WEAK_FUNC(sub_83B86270);
PPC_FUNC_IMPL(__imp__sub_83B86270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18224
	ctx.r3.s64 = ctx.r11.s64 + -18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8627C"))) PPC_WEAK_FUNC(sub_83B8627C);
PPC_FUNC_IMPL(__imp__sub_83B8627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86280"))) PPC_WEAK_FUNC(sub_83B86280);
PPC_FUNC_IMPL(__imp__sub_83B86280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18216
	ctx.r3.s64 = ctx.r11.s64 + -18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8628C"))) PPC_WEAK_FUNC(sub_83B8628C);
PPC_FUNC_IMPL(__imp__sub_83B8628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86290"))) PPC_WEAK_FUNC(sub_83B86290);
PPC_FUNC_IMPL(__imp__sub_83B86290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18208
	ctx.r3.s64 = ctx.r11.s64 + -18208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8629C"))) PPC_WEAK_FUNC(sub_83B8629C);
PPC_FUNC_IMPL(__imp__sub_83B8629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B862A0"))) PPC_WEAK_FUNC(sub_83B862A0);
PPC_FUNC_IMPL(__imp__sub_83B862A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18200
	ctx.r3.s64 = ctx.r11.s64 + -18200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B862AC"))) PPC_WEAK_FUNC(sub_83B862AC);
PPC_FUNC_IMPL(__imp__sub_83B862AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B862B0"))) PPC_WEAK_FUNC(sub_83B862B0);
PPC_FUNC_IMPL(__imp__sub_83B862B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-21476
	ctx.r4.s64 = ctx.r11.s64 + -21476;
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
	// addi r3,r7,-11700
	ctx.r3.s64 = ctx.r7.s64 + -11700;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B862E0"))) PPC_WEAK_FUNC(sub_83B862E0);
PPC_FUNC_IMPL(__imp__sub_83B862E0) {
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
	// addi r3,r11,-11712
	ctx.r3.s64 = ctx.r11.s64 + -11712;
	// bl 0x83523120
	ctx.lr = 0x83B862F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18192
	ctx.r3.s64 = ctx.r10.s64 + -18192;
	// bl 0x831cdcc8
	ctx.lr = 0x83B86304;
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

__attribute__((alias("__imp__sub_83B86314"))) PPC_WEAK_FUNC(sub_83B86314);
PPC_FUNC_IMPL(__imp__sub_83B86314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86318"))) PPC_WEAK_FUNC(sub_83B86318);
PPC_FUNC_IMPL(__imp__sub_83B86318) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11708
	ctx.r7.s64 = ctx.r8.s64 + -11708;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11708(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11708);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11708, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B86340"))) PPC_WEAK_FUNC(sub_83B86340);
PPC_FUNC_IMPL(__imp__sub_83B86340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18176
	ctx.r3.s64 = ctx.r11.s64 + -18176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8634C"))) PPC_WEAK_FUNC(sub_83B8634C);
PPC_FUNC_IMPL(__imp__sub_83B8634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86350"))) PPC_WEAK_FUNC(sub_83B86350);
PPC_FUNC_IMPL(__imp__sub_83B86350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18168
	ctx.r3.s64 = ctx.r11.s64 + -18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8635C"))) PPC_WEAK_FUNC(sub_83B8635C);
PPC_FUNC_IMPL(__imp__sub_83B8635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86360"))) PPC_WEAK_FUNC(sub_83B86360);
PPC_FUNC_IMPL(__imp__sub_83B86360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18160
	ctx.r3.s64 = ctx.r11.s64 + -18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8636C"))) PPC_WEAK_FUNC(sub_83B8636C);
PPC_FUNC_IMPL(__imp__sub_83B8636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86370"))) PPC_WEAK_FUNC(sub_83B86370);
PPC_FUNC_IMPL(__imp__sub_83B86370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8637C"))) PPC_WEAK_FUNC(sub_83B8637C);
PPC_FUNC_IMPL(__imp__sub_83B8637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86380"))) PPC_WEAK_FUNC(sub_83B86380);
PPC_FUNC_IMPL(__imp__sub_83B86380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18144
	ctx.r3.s64 = ctx.r11.s64 + -18144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8638C"))) PPC_WEAK_FUNC(sub_83B8638C);
PPC_FUNC_IMPL(__imp__sub_83B8638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86390"))) PPC_WEAK_FUNC(sub_83B86390);
PPC_FUNC_IMPL(__imp__sub_83B86390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18136
	ctx.r3.s64 = ctx.r11.s64 + -18136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8639C"))) PPC_WEAK_FUNC(sub_83B8639C);
PPC_FUNC_IMPL(__imp__sub_83B8639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B863A0"))) PPC_WEAK_FUNC(sub_83B863A0);
PPC_FUNC_IMPL(__imp__sub_83B863A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B863AC"))) PPC_WEAK_FUNC(sub_83B863AC);
PPC_FUNC_IMPL(__imp__sub_83B863AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B863B0"))) PPC_WEAK_FUNC(sub_83B863B0);
PPC_FUNC_IMPL(__imp__sub_83B863B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18120
	ctx.r3.s64 = ctx.r11.s64 + -18120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B863BC"))) PPC_WEAK_FUNC(sub_83B863BC);
PPC_FUNC_IMPL(__imp__sub_83B863BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B863C0"))) PPC_WEAK_FUNC(sub_83B863C0);
PPC_FUNC_IMPL(__imp__sub_83B863C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18112
	ctx.r3.s64 = ctx.r11.s64 + -18112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B863CC"))) PPC_WEAK_FUNC(sub_83B863CC);
PPC_FUNC_IMPL(__imp__sub_83B863CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B863D0"))) PPC_WEAK_FUNC(sub_83B863D0);
PPC_FUNC_IMPL(__imp__sub_83B863D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18104
	ctx.r3.s64 = ctx.r11.s64 + -18104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B863DC"))) PPC_WEAK_FUNC(sub_83B863DC);
PPC_FUNC_IMPL(__imp__sub_83B863DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B863E0"))) PPC_WEAK_FUNC(sub_83B863E0);
PPC_FUNC_IMPL(__imp__sub_83B863E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18096
	ctx.r3.s64 = ctx.r11.s64 + -18096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B863EC"))) PPC_WEAK_FUNC(sub_83B863EC);
PPC_FUNC_IMPL(__imp__sub_83B863EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B863F0"))) PPC_WEAK_FUNC(sub_83B863F0);
PPC_FUNC_IMPL(__imp__sub_83B863F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18088
	ctx.r3.s64 = ctx.r11.s64 + -18088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B863FC"))) PPC_WEAK_FUNC(sub_83B863FC);
PPC_FUNC_IMPL(__imp__sub_83B863FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86400"))) PPC_WEAK_FUNC(sub_83B86400);
PPC_FUNC_IMPL(__imp__sub_83B86400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-21220
	ctx.r4.s64 = ctx.r11.s64 + -21220;
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
	// addi r3,r7,-11676
	ctx.r3.s64 = ctx.r7.s64 + -11676;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86430"))) PPC_WEAK_FUNC(sub_83B86430);
PPC_FUNC_IMPL(__imp__sub_83B86430) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11684
	ctx.r7.s64 = ctx.r8.s64 + -11684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11684(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11684);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11684, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B86458"))) PPC_WEAK_FUNC(sub_83B86458);
PPC_FUNC_IMPL(__imp__sub_83B86458) {
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
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// bl 0x83523120
	ctx.lr = 0x83B86470;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18080
	ctx.r3.s64 = ctx.r10.s64 + -18080;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8647C;
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

__attribute__((alias("__imp__sub_83B8648C"))) PPC_WEAK_FUNC(sub_83B8648C);
PPC_FUNC_IMPL(__imp__sub_83B8648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86490"))) PPC_WEAK_FUNC(sub_83B86490);
PPC_FUNC_IMPL(__imp__sub_83B86490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18064
	ctx.r3.s64 = ctx.r11.s64 + -18064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8649C"))) PPC_WEAK_FUNC(sub_83B8649C);
PPC_FUNC_IMPL(__imp__sub_83B8649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B864A0"))) PPC_WEAK_FUNC(sub_83B864A0);
PPC_FUNC_IMPL(__imp__sub_83B864A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18056
	ctx.r3.s64 = ctx.r11.s64 + -18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B864AC"))) PPC_WEAK_FUNC(sub_83B864AC);
PPC_FUNC_IMPL(__imp__sub_83B864AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B864B0"))) PPC_WEAK_FUNC(sub_83B864B0);
PPC_FUNC_IMPL(__imp__sub_83B864B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B864BC"))) PPC_WEAK_FUNC(sub_83B864BC);
PPC_FUNC_IMPL(__imp__sub_83B864BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B864C0"))) PPC_WEAK_FUNC(sub_83B864C0);
PPC_FUNC_IMPL(__imp__sub_83B864C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18040
	ctx.r3.s64 = ctx.r11.s64 + -18040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B864CC"))) PPC_WEAK_FUNC(sub_83B864CC);
PPC_FUNC_IMPL(__imp__sub_83B864CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B864D0"))) PPC_WEAK_FUNC(sub_83B864D0);
PPC_FUNC_IMPL(__imp__sub_83B864D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18032
	ctx.r3.s64 = ctx.r11.s64 + -18032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B864DC"))) PPC_WEAK_FUNC(sub_83B864DC);
PPC_FUNC_IMPL(__imp__sub_83B864DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B864E0"))) PPC_WEAK_FUNC(sub_83B864E0);
PPC_FUNC_IMPL(__imp__sub_83B864E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18024
	ctx.r3.s64 = ctx.r11.s64 + -18024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B864EC"))) PPC_WEAK_FUNC(sub_83B864EC);
PPC_FUNC_IMPL(__imp__sub_83B864EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B864F0"))) PPC_WEAK_FUNC(sub_83B864F0);
PPC_FUNC_IMPL(__imp__sub_83B864F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18016
	ctx.r3.s64 = ctx.r11.s64 + -18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B864FC"))) PPC_WEAK_FUNC(sub_83B864FC);
PPC_FUNC_IMPL(__imp__sub_83B864FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86500"))) PPC_WEAK_FUNC(sub_83B86500);
PPC_FUNC_IMPL(__imp__sub_83B86500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18008
	ctx.r3.s64 = ctx.r11.s64 + -18008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8650C"))) PPC_WEAK_FUNC(sub_83B8650C);
PPC_FUNC_IMPL(__imp__sub_83B8650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86510"))) PPC_WEAK_FUNC(sub_83B86510);
PPC_FUNC_IMPL(__imp__sub_83B86510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18000
	ctx.r3.s64 = ctx.r11.s64 + -18000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8651C"))) PPC_WEAK_FUNC(sub_83B8651C);
PPC_FUNC_IMPL(__imp__sub_83B8651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86520"))) PPC_WEAK_FUNC(sub_83B86520);
PPC_FUNC_IMPL(__imp__sub_83B86520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8652C"))) PPC_WEAK_FUNC(sub_83B8652C);
PPC_FUNC_IMPL(__imp__sub_83B8652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86530"))) PPC_WEAK_FUNC(sub_83B86530);
PPC_FUNC_IMPL(__imp__sub_83B86530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8653C"))) PPC_WEAK_FUNC(sub_83B8653C);
PPC_FUNC_IMPL(__imp__sub_83B8653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86540"))) PPC_WEAK_FUNC(sub_83B86540);
PPC_FUNC_IMPL(__imp__sub_83B86540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17976
	ctx.r3.s64 = ctx.r11.s64 + -17976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8654C"))) PPC_WEAK_FUNC(sub_83B8654C);
PPC_FUNC_IMPL(__imp__sub_83B8654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86550"))) PPC_WEAK_FUNC(sub_83B86550);
PPC_FUNC_IMPL(__imp__sub_83B86550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-20868
	ctx.r4.s64 = ctx.r11.s64 + -20868;
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
	// addi r3,r7,-11652
	ctx.r3.s64 = ctx.r7.s64 + -11652;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86580"))) PPC_WEAK_FUNC(sub_83B86580);
PPC_FUNC_IMPL(__imp__sub_83B86580) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11660
	ctx.r7.s64 = ctx.r8.s64 + -11660;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11660);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11660, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B865A8"))) PPC_WEAK_FUNC(sub_83B865A8);
PPC_FUNC_IMPL(__imp__sub_83B865A8) {
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
	// addi r3,r11,-11664
	ctx.r3.s64 = ctx.r11.s64 + -11664;
	// bl 0x83523120
	ctx.lr = 0x83B865C0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-17968
	ctx.r3.s64 = ctx.r10.s64 + -17968;
	// bl 0x831cdcc8
	ctx.lr = 0x83B865CC;
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

__attribute__((alias("__imp__sub_83B865DC"))) PPC_WEAK_FUNC(sub_83B865DC);
PPC_FUNC_IMPL(__imp__sub_83B865DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B865E0"))) PPC_WEAK_FUNC(sub_83B865E0);
PPC_FUNC_IMPL(__imp__sub_83B865E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17952
	ctx.r3.s64 = ctx.r11.s64 + -17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B865EC"))) PPC_WEAK_FUNC(sub_83B865EC);
PPC_FUNC_IMPL(__imp__sub_83B865EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B865F0"))) PPC_WEAK_FUNC(sub_83B865F0);
PPC_FUNC_IMPL(__imp__sub_83B865F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17944
	ctx.r3.s64 = ctx.r11.s64 + -17944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B865FC"))) PPC_WEAK_FUNC(sub_83B865FC);
PPC_FUNC_IMPL(__imp__sub_83B865FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86600"))) PPC_WEAK_FUNC(sub_83B86600);
PPC_FUNC_IMPL(__imp__sub_83B86600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17936
	ctx.r3.s64 = ctx.r11.s64 + -17936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8660C"))) PPC_WEAK_FUNC(sub_83B8660C);
PPC_FUNC_IMPL(__imp__sub_83B8660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86610"))) PPC_WEAK_FUNC(sub_83B86610);
PPC_FUNC_IMPL(__imp__sub_83B86610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17928
	ctx.r3.s64 = ctx.r11.s64 + -17928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8661C"))) PPC_WEAK_FUNC(sub_83B8661C);
PPC_FUNC_IMPL(__imp__sub_83B8661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86620"))) PPC_WEAK_FUNC(sub_83B86620);
PPC_FUNC_IMPL(__imp__sub_83B86620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17920
	ctx.r3.s64 = ctx.r11.s64 + -17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8662C"))) PPC_WEAK_FUNC(sub_83B8662C);
PPC_FUNC_IMPL(__imp__sub_83B8662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86630"))) PPC_WEAK_FUNC(sub_83B86630);
PPC_FUNC_IMPL(__imp__sub_83B86630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17912
	ctx.r3.s64 = ctx.r11.s64 + -17912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8663C"))) PPC_WEAK_FUNC(sub_83B8663C);
PPC_FUNC_IMPL(__imp__sub_83B8663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86640"))) PPC_WEAK_FUNC(sub_83B86640);
PPC_FUNC_IMPL(__imp__sub_83B86640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17904
	ctx.r3.s64 = ctx.r11.s64 + -17904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8664C"))) PPC_WEAK_FUNC(sub_83B8664C);
PPC_FUNC_IMPL(__imp__sub_83B8664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86650"))) PPC_WEAK_FUNC(sub_83B86650);
PPC_FUNC_IMPL(__imp__sub_83B86650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17896
	ctx.r3.s64 = ctx.r11.s64 + -17896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8665C"))) PPC_WEAK_FUNC(sub_83B8665C);
PPC_FUNC_IMPL(__imp__sub_83B8665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86660"))) PPC_WEAK_FUNC(sub_83B86660);
PPC_FUNC_IMPL(__imp__sub_83B86660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17888
	ctx.r3.s64 = ctx.r11.s64 + -17888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8666C"))) PPC_WEAK_FUNC(sub_83B8666C);
PPC_FUNC_IMPL(__imp__sub_83B8666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86670"))) PPC_WEAK_FUNC(sub_83B86670);
PPC_FUNC_IMPL(__imp__sub_83B86670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17880
	ctx.r3.s64 = ctx.r11.s64 + -17880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

