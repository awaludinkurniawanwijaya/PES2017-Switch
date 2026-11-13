#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B8667C"))) PPC_WEAK_FUNC(sub_83B8667C);
PPC_FUNC_IMPL(__imp__sub_83B8667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86680"))) PPC_WEAK_FUNC(sub_83B86680);
PPC_FUNC_IMPL(__imp__sub_83B86680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17872
	ctx.r3.s64 = ctx.r11.s64 + -17872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8668C"))) PPC_WEAK_FUNC(sub_83B8668C);
PPC_FUNC_IMPL(__imp__sub_83B8668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86690"))) PPC_WEAK_FUNC(sub_83B86690);
PPC_FUNC_IMPL(__imp__sub_83B86690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17864
	ctx.r3.s64 = ctx.r11.s64 + -17864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8669C"))) PPC_WEAK_FUNC(sub_83B8669C);
PPC_FUNC_IMPL(__imp__sub_83B8669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B866A0"))) PPC_WEAK_FUNC(sub_83B866A0);
PPC_FUNC_IMPL(__imp__sub_83B866A0) {
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
	// addi r4,r11,-20052
	ctx.r4.s64 = ctx.r11.s64 + -20052;
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
	// addi r3,r7,-11628
	ctx.r3.s64 = ctx.r7.s64 + -11628;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B866D0"))) PPC_WEAK_FUNC(sub_83B866D0);
PPC_FUNC_IMPL(__imp__sub_83B866D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11636
	ctx.r7.s64 = ctx.r8.s64 + -11636;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11636(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11636);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11636, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B866F8"))) PPC_WEAK_FUNC(sub_83B866F8);
PPC_FUNC_IMPL(__imp__sub_83B866F8) {
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
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// bl 0x83523120
	ctx.lr = 0x83B86710;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-17856
	ctx.r3.s64 = ctx.r10.s64 + -17856;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8671C;
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

__attribute__((alias("__imp__sub_83B8672C"))) PPC_WEAK_FUNC(sub_83B8672C);
PPC_FUNC_IMPL(__imp__sub_83B8672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86730"))) PPC_WEAK_FUNC(sub_83B86730);
PPC_FUNC_IMPL(__imp__sub_83B86730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8673C"))) PPC_WEAK_FUNC(sub_83B8673C);
PPC_FUNC_IMPL(__imp__sub_83B8673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86740"))) PPC_WEAK_FUNC(sub_83B86740);
PPC_FUNC_IMPL(__imp__sub_83B86740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17832
	ctx.r3.s64 = ctx.r11.s64 + -17832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8674C"))) PPC_WEAK_FUNC(sub_83B8674C);
PPC_FUNC_IMPL(__imp__sub_83B8674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86750"))) PPC_WEAK_FUNC(sub_83B86750);
PPC_FUNC_IMPL(__imp__sub_83B86750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17824
	ctx.r3.s64 = ctx.r11.s64 + -17824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8675C"))) PPC_WEAK_FUNC(sub_83B8675C);
PPC_FUNC_IMPL(__imp__sub_83B8675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86760"))) PPC_WEAK_FUNC(sub_83B86760);
PPC_FUNC_IMPL(__imp__sub_83B86760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17816
	ctx.r3.s64 = ctx.r11.s64 + -17816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8676C"))) PPC_WEAK_FUNC(sub_83B8676C);
PPC_FUNC_IMPL(__imp__sub_83B8676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86770"))) PPC_WEAK_FUNC(sub_83B86770);
PPC_FUNC_IMPL(__imp__sub_83B86770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17808
	ctx.r3.s64 = ctx.r11.s64 + -17808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8677C"))) PPC_WEAK_FUNC(sub_83B8677C);
PPC_FUNC_IMPL(__imp__sub_83B8677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86780"))) PPC_WEAK_FUNC(sub_83B86780);
PPC_FUNC_IMPL(__imp__sub_83B86780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17800
	ctx.r3.s64 = ctx.r11.s64 + -17800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8678C"))) PPC_WEAK_FUNC(sub_83B8678C);
PPC_FUNC_IMPL(__imp__sub_83B8678C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86790"))) PPC_WEAK_FUNC(sub_83B86790);
PPC_FUNC_IMPL(__imp__sub_83B86790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17792
	ctx.r3.s64 = ctx.r11.s64 + -17792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8679C"))) PPC_WEAK_FUNC(sub_83B8679C);
PPC_FUNC_IMPL(__imp__sub_83B8679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B867A0"))) PPC_WEAK_FUNC(sub_83B867A0);
PPC_FUNC_IMPL(__imp__sub_83B867A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17784
	ctx.r3.s64 = ctx.r11.s64 + -17784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B867AC"))) PPC_WEAK_FUNC(sub_83B867AC);
PPC_FUNC_IMPL(__imp__sub_83B867AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B867B0"))) PPC_WEAK_FUNC(sub_83B867B0);
PPC_FUNC_IMPL(__imp__sub_83B867B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17776
	ctx.r3.s64 = ctx.r11.s64 + -17776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B867BC"))) PPC_WEAK_FUNC(sub_83B867BC);
PPC_FUNC_IMPL(__imp__sub_83B867BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B867C0"))) PPC_WEAK_FUNC(sub_83B867C0);
PPC_FUNC_IMPL(__imp__sub_83B867C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17768
	ctx.r3.s64 = ctx.r11.s64 + -17768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B867CC"))) PPC_WEAK_FUNC(sub_83B867CC);
PPC_FUNC_IMPL(__imp__sub_83B867CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B867D0"))) PPC_WEAK_FUNC(sub_83B867D0);
PPC_FUNC_IMPL(__imp__sub_83B867D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17760
	ctx.r3.s64 = ctx.r11.s64 + -17760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B867DC"))) PPC_WEAK_FUNC(sub_83B867DC);
PPC_FUNC_IMPL(__imp__sub_83B867DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B867E0"))) PPC_WEAK_FUNC(sub_83B867E0);
PPC_FUNC_IMPL(__imp__sub_83B867E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17752
	ctx.r3.s64 = ctx.r11.s64 + -17752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B867EC"))) PPC_WEAK_FUNC(sub_83B867EC);
PPC_FUNC_IMPL(__imp__sub_83B867EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B867F0"))) PPC_WEAK_FUNC(sub_83B867F0);
PPC_FUNC_IMPL(__imp__sub_83B867F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17744
	ctx.r3.s64 = ctx.r11.s64 + -17744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B867FC"))) PPC_WEAK_FUNC(sub_83B867FC);
PPC_FUNC_IMPL(__imp__sub_83B867FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86800"))) PPC_WEAK_FUNC(sub_83B86800);
PPC_FUNC_IMPL(__imp__sub_83B86800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17736
	ctx.r3.s64 = ctx.r11.s64 + -17736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8680C"))) PPC_WEAK_FUNC(sub_83B8680C);
PPC_FUNC_IMPL(__imp__sub_83B8680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86810"))) PPC_WEAK_FUNC(sub_83B86810);
PPC_FUNC_IMPL(__imp__sub_83B86810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17728
	ctx.r3.s64 = ctx.r11.s64 + -17728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8681C"))) PPC_WEAK_FUNC(sub_83B8681C);
PPC_FUNC_IMPL(__imp__sub_83B8681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86820"))) PPC_WEAK_FUNC(sub_83B86820);
PPC_FUNC_IMPL(__imp__sub_83B86820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17720
	ctx.r3.s64 = ctx.r11.s64 + -17720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8682C"))) PPC_WEAK_FUNC(sub_83B8682C);
PPC_FUNC_IMPL(__imp__sub_83B8682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86830"))) PPC_WEAK_FUNC(sub_83B86830);
PPC_FUNC_IMPL(__imp__sub_83B86830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17712
	ctx.r3.s64 = ctx.r11.s64 + -17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8683C"))) PPC_WEAK_FUNC(sub_83B8683C);
PPC_FUNC_IMPL(__imp__sub_83B8683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86840"))) PPC_WEAK_FUNC(sub_83B86840);
PPC_FUNC_IMPL(__imp__sub_83B86840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17704
	ctx.r3.s64 = ctx.r11.s64 + -17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8684C"))) PPC_WEAK_FUNC(sub_83B8684C);
PPC_FUNC_IMPL(__imp__sub_83B8684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86850"))) PPC_WEAK_FUNC(sub_83B86850);
PPC_FUNC_IMPL(__imp__sub_83B86850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17696
	ctx.r3.s64 = ctx.r11.s64 + -17696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8685C"))) PPC_WEAK_FUNC(sub_83B8685C);
PPC_FUNC_IMPL(__imp__sub_83B8685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86860"))) PPC_WEAK_FUNC(sub_83B86860);
PPC_FUNC_IMPL(__imp__sub_83B86860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17688
	ctx.r3.s64 = ctx.r11.s64 + -17688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8686C"))) PPC_WEAK_FUNC(sub_83B8686C);
PPC_FUNC_IMPL(__imp__sub_83B8686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86870"))) PPC_WEAK_FUNC(sub_83B86870);
PPC_FUNC_IMPL(__imp__sub_83B86870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8687C"))) PPC_WEAK_FUNC(sub_83B8687C);
PPC_FUNC_IMPL(__imp__sub_83B8687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86880"))) PPC_WEAK_FUNC(sub_83B86880);
PPC_FUNC_IMPL(__imp__sub_83B86880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8688C"))) PPC_WEAK_FUNC(sub_83B8688C);
PPC_FUNC_IMPL(__imp__sub_83B8688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86890"))) PPC_WEAK_FUNC(sub_83B86890);
PPC_FUNC_IMPL(__imp__sub_83B86890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17664
	ctx.r3.s64 = ctx.r11.s64 + -17664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8689C"))) PPC_WEAK_FUNC(sub_83B8689C);
PPC_FUNC_IMPL(__imp__sub_83B8689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B868A0"))) PPC_WEAK_FUNC(sub_83B868A0);
PPC_FUNC_IMPL(__imp__sub_83B868A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17656
	ctx.r3.s64 = ctx.r11.s64 + -17656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B868AC"))) PPC_WEAK_FUNC(sub_83B868AC);
PPC_FUNC_IMPL(__imp__sub_83B868AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B868B0"))) PPC_WEAK_FUNC(sub_83B868B0);
PPC_FUNC_IMPL(__imp__sub_83B868B0) {
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
	// addi r4,r11,-19620
	ctx.r4.s64 = ctx.r11.s64 + -19620;
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
	// addi r3,r7,-11600
	ctx.r3.s64 = ctx.r7.s64 + -11600;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B868E0"))) PPC_WEAK_FUNC(sub_83B868E0);
PPC_FUNC_IMPL(__imp__sub_83B868E0) {
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
	// addi r3,r11,-11612
	ctx.r3.s64 = ctx.r11.s64 + -11612;
	// bl 0x83523120
	ctx.lr = 0x83B868F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-17648
	ctx.r3.s64 = ctx.r10.s64 + -17648;
	// bl 0x831cdcc8
	ctx.lr = 0x83B86904;
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

__attribute__((alias("__imp__sub_83B86914"))) PPC_WEAK_FUNC(sub_83B86914);
PPC_FUNC_IMPL(__imp__sub_83B86914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86918"))) PPC_WEAK_FUNC(sub_83B86918);
PPC_FUNC_IMPL(__imp__sub_83B86918) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11608
	ctx.r7.s64 = ctx.r8.s64 + -11608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B86940"))) PPC_WEAK_FUNC(sub_83B86940);
PPC_FUNC_IMPL(__imp__sub_83B86940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17632
	ctx.r3.s64 = ctx.r11.s64 + -17632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8694C"))) PPC_WEAK_FUNC(sub_83B8694C);
PPC_FUNC_IMPL(__imp__sub_83B8694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86950"))) PPC_WEAK_FUNC(sub_83B86950);
PPC_FUNC_IMPL(__imp__sub_83B86950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17624
	ctx.r3.s64 = ctx.r11.s64 + -17624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8695C"))) PPC_WEAK_FUNC(sub_83B8695C);
PPC_FUNC_IMPL(__imp__sub_83B8695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86960"))) PPC_WEAK_FUNC(sub_83B86960);
PPC_FUNC_IMPL(__imp__sub_83B86960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17616
	ctx.r3.s64 = ctx.r11.s64 + -17616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8696C"))) PPC_WEAK_FUNC(sub_83B8696C);
PPC_FUNC_IMPL(__imp__sub_83B8696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86970"))) PPC_WEAK_FUNC(sub_83B86970);
PPC_FUNC_IMPL(__imp__sub_83B86970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17608
	ctx.r3.s64 = ctx.r11.s64 + -17608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8697C"))) PPC_WEAK_FUNC(sub_83B8697C);
PPC_FUNC_IMPL(__imp__sub_83B8697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86980"))) PPC_WEAK_FUNC(sub_83B86980);
PPC_FUNC_IMPL(__imp__sub_83B86980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17600
	ctx.r3.s64 = ctx.r11.s64 + -17600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8698C"))) PPC_WEAK_FUNC(sub_83B8698C);
PPC_FUNC_IMPL(__imp__sub_83B8698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86990"))) PPC_WEAK_FUNC(sub_83B86990);
PPC_FUNC_IMPL(__imp__sub_83B86990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17592
	ctx.r3.s64 = ctx.r11.s64 + -17592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8699C"))) PPC_WEAK_FUNC(sub_83B8699C);
PPC_FUNC_IMPL(__imp__sub_83B8699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B869A0"))) PPC_WEAK_FUNC(sub_83B869A0);
PPC_FUNC_IMPL(__imp__sub_83B869A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17584
	ctx.r3.s64 = ctx.r11.s64 + -17584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B869AC"))) PPC_WEAK_FUNC(sub_83B869AC);
PPC_FUNC_IMPL(__imp__sub_83B869AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B869B0"))) PPC_WEAK_FUNC(sub_83B869B0);
PPC_FUNC_IMPL(__imp__sub_83B869B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B869BC"))) PPC_WEAK_FUNC(sub_83B869BC);
PPC_FUNC_IMPL(__imp__sub_83B869BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B869C0"))) PPC_WEAK_FUNC(sub_83B869C0);
PPC_FUNC_IMPL(__imp__sub_83B869C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17568
	ctx.r3.s64 = ctx.r11.s64 + -17568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B869CC"))) PPC_WEAK_FUNC(sub_83B869CC);
PPC_FUNC_IMPL(__imp__sub_83B869CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B869D0"))) PPC_WEAK_FUNC(sub_83B869D0);
PPC_FUNC_IMPL(__imp__sub_83B869D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17560
	ctx.r3.s64 = ctx.r11.s64 + -17560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B869DC"))) PPC_WEAK_FUNC(sub_83B869DC);
PPC_FUNC_IMPL(__imp__sub_83B869DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B869E0"))) PPC_WEAK_FUNC(sub_83B869E0);
PPC_FUNC_IMPL(__imp__sub_83B869E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17552
	ctx.r3.s64 = ctx.r11.s64 + -17552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B869EC"))) PPC_WEAK_FUNC(sub_83B869EC);
PPC_FUNC_IMPL(__imp__sub_83B869EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B869F0"))) PPC_WEAK_FUNC(sub_83B869F0);
PPC_FUNC_IMPL(__imp__sub_83B869F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17544
	ctx.r3.s64 = ctx.r11.s64 + -17544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B869FC"))) PPC_WEAK_FUNC(sub_83B869FC);
PPC_FUNC_IMPL(__imp__sub_83B869FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86A00"))) PPC_WEAK_FUNC(sub_83B86A00);
PPC_FUNC_IMPL(__imp__sub_83B86A00) {
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
	// addi r4,r11,-19300
	ctx.r4.s64 = ctx.r11.s64 + -19300;
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
	// addi r3,r7,-11576
	ctx.r3.s64 = ctx.r7.s64 + -11576;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86A30"))) PPC_WEAK_FUNC(sub_83B86A30);
PPC_FUNC_IMPL(__imp__sub_83B86A30) {
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
	// addi r3,r11,-11588
	ctx.r3.s64 = ctx.r11.s64 + -11588;
	// bl 0x83523120
	ctx.lr = 0x83B86A48;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-17536
	ctx.r3.s64 = ctx.r10.s64 + -17536;
	// bl 0x831cdcc8
	ctx.lr = 0x83B86A54;
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

__attribute__((alias("__imp__sub_83B86A64"))) PPC_WEAK_FUNC(sub_83B86A64);
PPC_FUNC_IMPL(__imp__sub_83B86A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86A68"))) PPC_WEAK_FUNC(sub_83B86A68);
PPC_FUNC_IMPL(__imp__sub_83B86A68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11584
	ctx.r7.s64 = ctx.r8.s64 + -11584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11584(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B86A90"))) PPC_WEAK_FUNC(sub_83B86A90);
PPC_FUNC_IMPL(__imp__sub_83B86A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86A9C"))) PPC_WEAK_FUNC(sub_83B86A9C);
PPC_FUNC_IMPL(__imp__sub_83B86A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86AA0"))) PPC_WEAK_FUNC(sub_83B86AA0);
PPC_FUNC_IMPL(__imp__sub_83B86AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17512
	ctx.r3.s64 = ctx.r11.s64 + -17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86AAC"))) PPC_WEAK_FUNC(sub_83B86AAC);
PPC_FUNC_IMPL(__imp__sub_83B86AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86AB0"))) PPC_WEAK_FUNC(sub_83B86AB0);
PPC_FUNC_IMPL(__imp__sub_83B86AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17504
	ctx.r3.s64 = ctx.r11.s64 + -17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86ABC"))) PPC_WEAK_FUNC(sub_83B86ABC);
PPC_FUNC_IMPL(__imp__sub_83B86ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86AC0"))) PPC_WEAK_FUNC(sub_83B86AC0);
PPC_FUNC_IMPL(__imp__sub_83B86AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86ACC"))) PPC_WEAK_FUNC(sub_83B86ACC);
PPC_FUNC_IMPL(__imp__sub_83B86ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86AD0"))) PPC_WEAK_FUNC(sub_83B86AD0);
PPC_FUNC_IMPL(__imp__sub_83B86AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17488
	ctx.r3.s64 = ctx.r11.s64 + -17488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86ADC"))) PPC_WEAK_FUNC(sub_83B86ADC);
PPC_FUNC_IMPL(__imp__sub_83B86ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86AE0"))) PPC_WEAK_FUNC(sub_83B86AE0);
PPC_FUNC_IMPL(__imp__sub_83B86AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86AEC"))) PPC_WEAK_FUNC(sub_83B86AEC);
PPC_FUNC_IMPL(__imp__sub_83B86AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86AF0"))) PPC_WEAK_FUNC(sub_83B86AF0);
PPC_FUNC_IMPL(__imp__sub_83B86AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17472
	ctx.r3.s64 = ctx.r11.s64 + -17472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86AFC"))) PPC_WEAK_FUNC(sub_83B86AFC);
PPC_FUNC_IMPL(__imp__sub_83B86AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86B00"))) PPC_WEAK_FUNC(sub_83B86B00);
PPC_FUNC_IMPL(__imp__sub_83B86B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86B0C"))) PPC_WEAK_FUNC(sub_83B86B0C);
PPC_FUNC_IMPL(__imp__sub_83B86B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86B10"))) PPC_WEAK_FUNC(sub_83B86B10);
PPC_FUNC_IMPL(__imp__sub_83B86B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17456
	ctx.r3.s64 = ctx.r11.s64 + -17456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86B1C"))) PPC_WEAK_FUNC(sub_83B86B1C);
PPC_FUNC_IMPL(__imp__sub_83B86B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86B20"))) PPC_WEAK_FUNC(sub_83B86B20);
PPC_FUNC_IMPL(__imp__sub_83B86B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86B2C"))) PPC_WEAK_FUNC(sub_83B86B2C);
PPC_FUNC_IMPL(__imp__sub_83B86B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86B30"))) PPC_WEAK_FUNC(sub_83B86B30);
PPC_FUNC_IMPL(__imp__sub_83B86B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17440
	ctx.r3.s64 = ctx.r11.s64 + -17440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86B3C"))) PPC_WEAK_FUNC(sub_83B86B3C);
PPC_FUNC_IMPL(__imp__sub_83B86B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86B40"))) PPC_WEAK_FUNC(sub_83B86B40);
PPC_FUNC_IMPL(__imp__sub_83B86B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17432
	ctx.r3.s64 = ctx.r11.s64 + -17432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86B4C"))) PPC_WEAK_FUNC(sub_83B86B4C);
PPC_FUNC_IMPL(__imp__sub_83B86B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86B50"))) PPC_WEAK_FUNC(sub_83B86B50);
PPC_FUNC_IMPL(__imp__sub_83B86B50) {
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
	// addi r4,r11,-19028
	ctx.r4.s64 = ctx.r11.s64 + -19028;
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
	// addi r3,r7,-11264
	ctx.r3.s64 = ctx.r7.s64 + -11264;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86B80"))) PPC_WEAK_FUNC(sub_83B86B80);
PPC_FUNC_IMPL(__imp__sub_83B86B80) {
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
	// addi r3,r11,-11276
	ctx.r3.s64 = ctx.r11.s64 + -11276;
	// bl 0x83523120
	ctx.lr = 0x83B86B98;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-17424
	ctx.r3.s64 = ctx.r10.s64 + -17424;
	// bl 0x831cdcc8
	ctx.lr = 0x83B86BA4;
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

__attribute__((alias("__imp__sub_83B86BB4"))) PPC_WEAK_FUNC(sub_83B86BB4);
PPC_FUNC_IMPL(__imp__sub_83B86BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86BB8"))) PPC_WEAK_FUNC(sub_83B86BB8);
PPC_FUNC_IMPL(__imp__sub_83B86BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11272
	ctx.r7.s64 = ctx.r8.s64 + -11272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11272(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B86BE0"))) PPC_WEAK_FUNC(sub_83B86BE0);
PPC_FUNC_IMPL(__imp__sub_83B86BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86BEC"))) PPC_WEAK_FUNC(sub_83B86BEC);
PPC_FUNC_IMPL(__imp__sub_83B86BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86BF0"))) PPC_WEAK_FUNC(sub_83B86BF0);
PPC_FUNC_IMPL(__imp__sub_83B86BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17400
	ctx.r3.s64 = ctx.r11.s64 + -17400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86BFC"))) PPC_WEAK_FUNC(sub_83B86BFC);
PPC_FUNC_IMPL(__imp__sub_83B86BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C00"))) PPC_WEAK_FUNC(sub_83B86C00);
PPC_FUNC_IMPL(__imp__sub_83B86C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17392
	ctx.r3.s64 = ctx.r11.s64 + -17392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C0C"))) PPC_WEAK_FUNC(sub_83B86C0C);
PPC_FUNC_IMPL(__imp__sub_83B86C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C10"))) PPC_WEAK_FUNC(sub_83B86C10);
PPC_FUNC_IMPL(__imp__sub_83B86C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17384
	ctx.r3.s64 = ctx.r11.s64 + -17384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C1C"))) PPC_WEAK_FUNC(sub_83B86C1C);
PPC_FUNC_IMPL(__imp__sub_83B86C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C20"))) PPC_WEAK_FUNC(sub_83B86C20);
PPC_FUNC_IMPL(__imp__sub_83B86C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17376
	ctx.r3.s64 = ctx.r11.s64 + -17376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C2C"))) PPC_WEAK_FUNC(sub_83B86C2C);
PPC_FUNC_IMPL(__imp__sub_83B86C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C30"))) PPC_WEAK_FUNC(sub_83B86C30);
PPC_FUNC_IMPL(__imp__sub_83B86C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17368
	ctx.r3.s64 = ctx.r11.s64 + -17368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C3C"))) PPC_WEAK_FUNC(sub_83B86C3C);
PPC_FUNC_IMPL(__imp__sub_83B86C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C40"))) PPC_WEAK_FUNC(sub_83B86C40);
PPC_FUNC_IMPL(__imp__sub_83B86C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17360
	ctx.r3.s64 = ctx.r11.s64 + -17360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C4C"))) PPC_WEAK_FUNC(sub_83B86C4C);
PPC_FUNC_IMPL(__imp__sub_83B86C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C50"))) PPC_WEAK_FUNC(sub_83B86C50);
PPC_FUNC_IMPL(__imp__sub_83B86C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17352
	ctx.r3.s64 = ctx.r11.s64 + -17352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C5C"))) PPC_WEAK_FUNC(sub_83B86C5C);
PPC_FUNC_IMPL(__imp__sub_83B86C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C60"))) PPC_WEAK_FUNC(sub_83B86C60);
PPC_FUNC_IMPL(__imp__sub_83B86C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17344
	ctx.r3.s64 = ctx.r11.s64 + -17344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C6C"))) PPC_WEAK_FUNC(sub_83B86C6C);
PPC_FUNC_IMPL(__imp__sub_83B86C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C70"))) PPC_WEAK_FUNC(sub_83B86C70);
PPC_FUNC_IMPL(__imp__sub_83B86C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C7C"))) PPC_WEAK_FUNC(sub_83B86C7C);
PPC_FUNC_IMPL(__imp__sub_83B86C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C80"))) PPC_WEAK_FUNC(sub_83B86C80);
PPC_FUNC_IMPL(__imp__sub_83B86C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17328
	ctx.r3.s64 = ctx.r11.s64 + -17328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C8C"))) PPC_WEAK_FUNC(sub_83B86C8C);
PPC_FUNC_IMPL(__imp__sub_83B86C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86C90"))) PPC_WEAK_FUNC(sub_83B86C90);
PPC_FUNC_IMPL(__imp__sub_83B86C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17320
	ctx.r3.s64 = ctx.r11.s64 + -17320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86C9C"))) PPC_WEAK_FUNC(sub_83B86C9C);
PPC_FUNC_IMPL(__imp__sub_83B86C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86CA0"))) PPC_WEAK_FUNC(sub_83B86CA0);
PPC_FUNC_IMPL(__imp__sub_83B86CA0) {
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
	// addi r4,r11,-17988
	ctx.r4.s64 = ctx.r11.s64 + -17988;
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
	// addi r3,r7,-11240
	ctx.r3.s64 = ctx.r7.s64 + -11240;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86CD0"))) PPC_WEAK_FUNC(sub_83B86CD0);
PPC_FUNC_IMPL(__imp__sub_83B86CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11248
	ctx.r7.s64 = ctx.r8.s64 + -11248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11248(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B86CF8"))) PPC_WEAK_FUNC(sub_83B86CF8);
PPC_FUNC_IMPL(__imp__sub_83B86CF8) {
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
	// addi r3,r11,-11252
	ctx.r3.s64 = ctx.r11.s64 + -11252;
	// bl 0x83523120
	ctx.lr = 0x83B86D10;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-17312
	ctx.r3.s64 = ctx.r10.s64 + -17312;
	// bl 0x831cdcc8
	ctx.lr = 0x83B86D1C;
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

__attribute__((alias("__imp__sub_83B86D2C"))) PPC_WEAK_FUNC(sub_83B86D2C);
PPC_FUNC_IMPL(__imp__sub_83B86D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86D30"))) PPC_WEAK_FUNC(sub_83B86D30);
PPC_FUNC_IMPL(__imp__sub_83B86D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17296
	ctx.r3.s64 = ctx.r11.s64 + -17296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86D3C"))) PPC_WEAK_FUNC(sub_83B86D3C);
PPC_FUNC_IMPL(__imp__sub_83B86D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86D40"))) PPC_WEAK_FUNC(sub_83B86D40);
PPC_FUNC_IMPL(__imp__sub_83B86D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17288
	ctx.r3.s64 = ctx.r11.s64 + -17288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86D4C"))) PPC_WEAK_FUNC(sub_83B86D4C);
PPC_FUNC_IMPL(__imp__sub_83B86D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86D50"))) PPC_WEAK_FUNC(sub_83B86D50);
PPC_FUNC_IMPL(__imp__sub_83B86D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17280
	ctx.r3.s64 = ctx.r11.s64 + -17280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86D5C"))) PPC_WEAK_FUNC(sub_83B86D5C);
PPC_FUNC_IMPL(__imp__sub_83B86D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86D60"))) PPC_WEAK_FUNC(sub_83B86D60);
PPC_FUNC_IMPL(__imp__sub_83B86D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17272
	ctx.r3.s64 = ctx.r11.s64 + -17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86D6C"))) PPC_WEAK_FUNC(sub_83B86D6C);
PPC_FUNC_IMPL(__imp__sub_83B86D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86D70"))) PPC_WEAK_FUNC(sub_83B86D70);
PPC_FUNC_IMPL(__imp__sub_83B86D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17264
	ctx.r3.s64 = ctx.r11.s64 + -17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86D7C"))) PPC_WEAK_FUNC(sub_83B86D7C);
PPC_FUNC_IMPL(__imp__sub_83B86D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86D80"))) PPC_WEAK_FUNC(sub_83B86D80);
PPC_FUNC_IMPL(__imp__sub_83B86D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17256
	ctx.r3.s64 = ctx.r11.s64 + -17256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86D8C"))) PPC_WEAK_FUNC(sub_83B86D8C);
PPC_FUNC_IMPL(__imp__sub_83B86D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86D90"))) PPC_WEAK_FUNC(sub_83B86D90);
PPC_FUNC_IMPL(__imp__sub_83B86D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17248
	ctx.r3.s64 = ctx.r11.s64 + -17248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86D9C"))) PPC_WEAK_FUNC(sub_83B86D9C);
PPC_FUNC_IMPL(__imp__sub_83B86D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86DA0"))) PPC_WEAK_FUNC(sub_83B86DA0);
PPC_FUNC_IMPL(__imp__sub_83B86DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17240
	ctx.r3.s64 = ctx.r11.s64 + -17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86DAC"))) PPC_WEAK_FUNC(sub_83B86DAC);
PPC_FUNC_IMPL(__imp__sub_83B86DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86DB0"))) PPC_WEAK_FUNC(sub_83B86DB0);
PPC_FUNC_IMPL(__imp__sub_83B86DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17232
	ctx.r3.s64 = ctx.r11.s64 + -17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86DBC"))) PPC_WEAK_FUNC(sub_83B86DBC);
PPC_FUNC_IMPL(__imp__sub_83B86DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86DC0"))) PPC_WEAK_FUNC(sub_83B86DC0);
PPC_FUNC_IMPL(__imp__sub_83B86DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17224
	ctx.r3.s64 = ctx.r11.s64 + -17224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86DCC"))) PPC_WEAK_FUNC(sub_83B86DCC);
PPC_FUNC_IMPL(__imp__sub_83B86DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86DD0"))) PPC_WEAK_FUNC(sub_83B86DD0);
PPC_FUNC_IMPL(__imp__sub_83B86DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17216
	ctx.r3.s64 = ctx.r11.s64 + -17216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86DDC"))) PPC_WEAK_FUNC(sub_83B86DDC);
PPC_FUNC_IMPL(__imp__sub_83B86DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86DE0"))) PPC_WEAK_FUNC(sub_83B86DE0);
PPC_FUNC_IMPL(__imp__sub_83B86DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17208
	ctx.r3.s64 = ctx.r11.s64 + -17208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86DEC"))) PPC_WEAK_FUNC(sub_83B86DEC);
PPC_FUNC_IMPL(__imp__sub_83B86DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86DF0"))) PPC_WEAK_FUNC(sub_83B86DF0);
PPC_FUNC_IMPL(__imp__sub_83B86DF0) {
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
	// addi r4,r11,-17316
	ctx.r4.s64 = ctx.r11.s64 + -17316;
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
	// addi r3,r7,-11216
	ctx.r3.s64 = ctx.r7.s64 + -11216;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86E20"))) PPC_WEAK_FUNC(sub_83B86E20);
PPC_FUNC_IMPL(__imp__sub_83B86E20) {
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
	// addi r3,r11,-11228
	ctx.r3.s64 = ctx.r11.s64 + -11228;
	// bl 0x83523120
	ctx.lr = 0x83B86E38;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-17200
	ctx.r3.s64 = ctx.r10.s64 + -17200;
	// bl 0x831cdcc8
	ctx.lr = 0x83B86E44;
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

__attribute__((alias("__imp__sub_83B86E54"))) PPC_WEAK_FUNC(sub_83B86E54);
PPC_FUNC_IMPL(__imp__sub_83B86E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86E58"))) PPC_WEAK_FUNC(sub_83B86E58);
PPC_FUNC_IMPL(__imp__sub_83B86E58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11224
	ctx.r7.s64 = ctx.r8.s64 + -11224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11224(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B86E80"))) PPC_WEAK_FUNC(sub_83B86E80);
PPC_FUNC_IMPL(__imp__sub_83B86E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17184
	ctx.r3.s64 = ctx.r11.s64 + -17184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86E8C"))) PPC_WEAK_FUNC(sub_83B86E8C);
PPC_FUNC_IMPL(__imp__sub_83B86E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86E90"))) PPC_WEAK_FUNC(sub_83B86E90);
PPC_FUNC_IMPL(__imp__sub_83B86E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17176
	ctx.r3.s64 = ctx.r11.s64 + -17176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86E9C"))) PPC_WEAK_FUNC(sub_83B86E9C);
PPC_FUNC_IMPL(__imp__sub_83B86E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86EA0"))) PPC_WEAK_FUNC(sub_83B86EA0);
PPC_FUNC_IMPL(__imp__sub_83B86EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17168
	ctx.r3.s64 = ctx.r11.s64 + -17168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86EAC"))) PPC_WEAK_FUNC(sub_83B86EAC);
PPC_FUNC_IMPL(__imp__sub_83B86EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86EB0"))) PPC_WEAK_FUNC(sub_83B86EB0);
PPC_FUNC_IMPL(__imp__sub_83B86EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17160
	ctx.r3.s64 = ctx.r11.s64 + -17160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86EBC"))) PPC_WEAK_FUNC(sub_83B86EBC);
PPC_FUNC_IMPL(__imp__sub_83B86EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86EC0"))) PPC_WEAK_FUNC(sub_83B86EC0);
PPC_FUNC_IMPL(__imp__sub_83B86EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17152
	ctx.r3.s64 = ctx.r11.s64 + -17152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86ECC"))) PPC_WEAK_FUNC(sub_83B86ECC);
PPC_FUNC_IMPL(__imp__sub_83B86ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86ED0"))) PPC_WEAK_FUNC(sub_83B86ED0);
PPC_FUNC_IMPL(__imp__sub_83B86ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17144
	ctx.r3.s64 = ctx.r11.s64 + -17144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86EDC"))) PPC_WEAK_FUNC(sub_83B86EDC);
PPC_FUNC_IMPL(__imp__sub_83B86EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86EE0"))) PPC_WEAK_FUNC(sub_83B86EE0);
PPC_FUNC_IMPL(__imp__sub_83B86EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17136
	ctx.r3.s64 = ctx.r11.s64 + -17136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86EEC"))) PPC_WEAK_FUNC(sub_83B86EEC);
PPC_FUNC_IMPL(__imp__sub_83B86EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86EF0"))) PPC_WEAK_FUNC(sub_83B86EF0);
PPC_FUNC_IMPL(__imp__sub_83B86EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17128
	ctx.r3.s64 = ctx.r11.s64 + -17128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86EFC"))) PPC_WEAK_FUNC(sub_83B86EFC);
PPC_FUNC_IMPL(__imp__sub_83B86EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86F00"))) PPC_WEAK_FUNC(sub_83B86F00);
PPC_FUNC_IMPL(__imp__sub_83B86F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17120
	ctx.r3.s64 = ctx.r11.s64 + -17120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86F0C"))) PPC_WEAK_FUNC(sub_83B86F0C);
PPC_FUNC_IMPL(__imp__sub_83B86F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86F10"))) PPC_WEAK_FUNC(sub_83B86F10);
PPC_FUNC_IMPL(__imp__sub_83B86F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17112
	ctx.r3.s64 = ctx.r11.s64 + -17112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86F1C"))) PPC_WEAK_FUNC(sub_83B86F1C);
PPC_FUNC_IMPL(__imp__sub_83B86F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86F20"))) PPC_WEAK_FUNC(sub_83B86F20);
PPC_FUNC_IMPL(__imp__sub_83B86F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17104
	ctx.r3.s64 = ctx.r11.s64 + -17104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86F2C"))) PPC_WEAK_FUNC(sub_83B86F2C);
PPC_FUNC_IMPL(__imp__sub_83B86F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86F30"))) PPC_WEAK_FUNC(sub_83B86F30);
PPC_FUNC_IMPL(__imp__sub_83B86F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17096
	ctx.r3.s64 = ctx.r11.s64 + -17096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86F3C"))) PPC_WEAK_FUNC(sub_83B86F3C);
PPC_FUNC_IMPL(__imp__sub_83B86F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86F40"))) PPC_WEAK_FUNC(sub_83B86F40);
PPC_FUNC_IMPL(__imp__sub_83B86F40) {
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
	// addi r4,r11,-17044
	ctx.r4.s64 = ctx.r11.s64 + -17044;
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
	// addi r3,r7,-11192
	ctx.r3.s64 = ctx.r7.s64 + -11192;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86F70"))) PPC_WEAK_FUNC(sub_83B86F70);
PPC_FUNC_IMPL(__imp__sub_83B86F70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11200
	ctx.r7.s64 = ctx.r8.s64 + -11200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11200(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B86F98"))) PPC_WEAK_FUNC(sub_83B86F98);
PPC_FUNC_IMPL(__imp__sub_83B86F98) {
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
	// addi r3,r11,-11204
	ctx.r3.s64 = ctx.r11.s64 + -11204;
	// bl 0x83523120
	ctx.lr = 0x83B86FB0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-17088
	ctx.r3.s64 = ctx.r10.s64 + -17088;
	// bl 0x831cdcc8
	ctx.lr = 0x83B86FBC;
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

__attribute__((alias("__imp__sub_83B86FCC"))) PPC_WEAK_FUNC(sub_83B86FCC);
PPC_FUNC_IMPL(__imp__sub_83B86FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86FD0"))) PPC_WEAK_FUNC(sub_83B86FD0);
PPC_FUNC_IMPL(__imp__sub_83B86FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17072
	ctx.r3.s64 = ctx.r11.s64 + -17072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86FDC"))) PPC_WEAK_FUNC(sub_83B86FDC);
PPC_FUNC_IMPL(__imp__sub_83B86FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86FE0"))) PPC_WEAK_FUNC(sub_83B86FE0);
PPC_FUNC_IMPL(__imp__sub_83B86FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17064
	ctx.r3.s64 = ctx.r11.s64 + -17064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86FEC"))) PPC_WEAK_FUNC(sub_83B86FEC);
PPC_FUNC_IMPL(__imp__sub_83B86FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B86FF0"))) PPC_WEAK_FUNC(sub_83B86FF0);
PPC_FUNC_IMPL(__imp__sub_83B86FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17056
	ctx.r3.s64 = ctx.r11.s64 + -17056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B86FFC"))) PPC_WEAK_FUNC(sub_83B86FFC);
PPC_FUNC_IMPL(__imp__sub_83B86FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87000"))) PPC_WEAK_FUNC(sub_83B87000);
PPC_FUNC_IMPL(__imp__sub_83B87000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17048
	ctx.r3.s64 = ctx.r11.s64 + -17048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8700C"))) PPC_WEAK_FUNC(sub_83B8700C);
PPC_FUNC_IMPL(__imp__sub_83B8700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87010"))) PPC_WEAK_FUNC(sub_83B87010);
PPC_FUNC_IMPL(__imp__sub_83B87010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17040
	ctx.r3.s64 = ctx.r11.s64 + -17040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8701C"))) PPC_WEAK_FUNC(sub_83B8701C);
PPC_FUNC_IMPL(__imp__sub_83B8701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87020"))) PPC_WEAK_FUNC(sub_83B87020);
PPC_FUNC_IMPL(__imp__sub_83B87020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17032
	ctx.r3.s64 = ctx.r11.s64 + -17032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8702C"))) PPC_WEAK_FUNC(sub_83B8702C);
PPC_FUNC_IMPL(__imp__sub_83B8702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87030"))) PPC_WEAK_FUNC(sub_83B87030);
PPC_FUNC_IMPL(__imp__sub_83B87030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17024
	ctx.r3.s64 = ctx.r11.s64 + -17024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8703C"))) PPC_WEAK_FUNC(sub_83B8703C);
PPC_FUNC_IMPL(__imp__sub_83B8703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87040"))) PPC_WEAK_FUNC(sub_83B87040);
PPC_FUNC_IMPL(__imp__sub_83B87040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17016
	ctx.r3.s64 = ctx.r11.s64 + -17016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8704C"))) PPC_WEAK_FUNC(sub_83B8704C);
PPC_FUNC_IMPL(__imp__sub_83B8704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87050"))) PPC_WEAK_FUNC(sub_83B87050);
PPC_FUNC_IMPL(__imp__sub_83B87050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17008
	ctx.r3.s64 = ctx.r11.s64 + -17008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8705C"))) PPC_WEAK_FUNC(sub_83B8705C);
PPC_FUNC_IMPL(__imp__sub_83B8705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87060"))) PPC_WEAK_FUNC(sub_83B87060);
PPC_FUNC_IMPL(__imp__sub_83B87060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-17000
	ctx.r3.s64 = ctx.r11.s64 + -17000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8706C"))) PPC_WEAK_FUNC(sub_83B8706C);
PPC_FUNC_IMPL(__imp__sub_83B8706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87070"))) PPC_WEAK_FUNC(sub_83B87070);
PPC_FUNC_IMPL(__imp__sub_83B87070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8707C"))) PPC_WEAK_FUNC(sub_83B8707C);
PPC_FUNC_IMPL(__imp__sub_83B8707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87080"))) PPC_WEAK_FUNC(sub_83B87080);
PPC_FUNC_IMPL(__imp__sub_83B87080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16984
	ctx.r3.s64 = ctx.r11.s64 + -16984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8708C"))) PPC_WEAK_FUNC(sub_83B8708C);
PPC_FUNC_IMPL(__imp__sub_83B8708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87090"))) PPC_WEAK_FUNC(sub_83B87090);
PPC_FUNC_IMPL(__imp__sub_83B87090) {
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
	// addi r4,r11,-16740
	ctx.r4.s64 = ctx.r11.s64 + -16740;
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
	// addi r3,r7,-11168
	ctx.r3.s64 = ctx.r7.s64 + -11168;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B870C0"))) PPC_WEAK_FUNC(sub_83B870C0);
PPC_FUNC_IMPL(__imp__sub_83B870C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11176
	ctx.r7.s64 = ctx.r8.s64 + -11176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11176(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11176);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11176(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11176, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B870E8"))) PPC_WEAK_FUNC(sub_83B870E8);
PPC_FUNC_IMPL(__imp__sub_83B870E8) {
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
	// addi r3,r11,-11180
	ctx.r3.s64 = ctx.r11.s64 + -11180;
	// bl 0x83523120
	ctx.lr = 0x83B87100;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-16976
	ctx.r3.s64 = ctx.r10.s64 + -16976;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8710C;
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

__attribute__((alias("__imp__sub_83B8711C"))) PPC_WEAK_FUNC(sub_83B8711C);
PPC_FUNC_IMPL(__imp__sub_83B8711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87120"))) PPC_WEAK_FUNC(sub_83B87120);
PPC_FUNC_IMPL(__imp__sub_83B87120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16960
	ctx.r3.s64 = ctx.r11.s64 + -16960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8712C"))) PPC_WEAK_FUNC(sub_83B8712C);
PPC_FUNC_IMPL(__imp__sub_83B8712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87130"))) PPC_WEAK_FUNC(sub_83B87130);
PPC_FUNC_IMPL(__imp__sub_83B87130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16952
	ctx.r3.s64 = ctx.r11.s64 + -16952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8713C"))) PPC_WEAK_FUNC(sub_83B8713C);
PPC_FUNC_IMPL(__imp__sub_83B8713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87140"))) PPC_WEAK_FUNC(sub_83B87140);
PPC_FUNC_IMPL(__imp__sub_83B87140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16944
	ctx.r3.s64 = ctx.r11.s64 + -16944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8714C"))) PPC_WEAK_FUNC(sub_83B8714C);
PPC_FUNC_IMPL(__imp__sub_83B8714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87150"))) PPC_WEAK_FUNC(sub_83B87150);
PPC_FUNC_IMPL(__imp__sub_83B87150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16936
	ctx.r3.s64 = ctx.r11.s64 + -16936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8715C"))) PPC_WEAK_FUNC(sub_83B8715C);
PPC_FUNC_IMPL(__imp__sub_83B8715C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87160"))) PPC_WEAK_FUNC(sub_83B87160);
PPC_FUNC_IMPL(__imp__sub_83B87160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16928
	ctx.r3.s64 = ctx.r11.s64 + -16928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8716C"))) PPC_WEAK_FUNC(sub_83B8716C);
PPC_FUNC_IMPL(__imp__sub_83B8716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87170"))) PPC_WEAK_FUNC(sub_83B87170);
PPC_FUNC_IMPL(__imp__sub_83B87170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16920
	ctx.r3.s64 = ctx.r11.s64 + -16920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8717C"))) PPC_WEAK_FUNC(sub_83B8717C);
PPC_FUNC_IMPL(__imp__sub_83B8717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87180"))) PPC_WEAK_FUNC(sub_83B87180);
PPC_FUNC_IMPL(__imp__sub_83B87180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16912
	ctx.r3.s64 = ctx.r11.s64 + -16912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8718C"))) PPC_WEAK_FUNC(sub_83B8718C);
PPC_FUNC_IMPL(__imp__sub_83B8718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B87190"))) PPC_WEAK_FUNC(sub_83B87190);
PPC_FUNC_IMPL(__imp__sub_83B87190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16904
	ctx.r3.s64 = ctx.r11.s64 + -16904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8719C"))) PPC_WEAK_FUNC(sub_83B8719C);
PPC_FUNC_IMPL(__imp__sub_83B8719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B871A0"))) PPC_WEAK_FUNC(sub_83B871A0);
PPC_FUNC_IMPL(__imp__sub_83B871A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16896
	ctx.r3.s64 = ctx.r11.s64 + -16896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B871AC"))) PPC_WEAK_FUNC(sub_83B871AC);
PPC_FUNC_IMPL(__imp__sub_83B871AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B871B0"))) PPC_WEAK_FUNC(sub_83B871B0);
PPC_FUNC_IMPL(__imp__sub_83B871B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B871BC"))) PPC_WEAK_FUNC(sub_83B871BC);
PPC_FUNC_IMPL(__imp__sub_83B871BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B871C0"))) PPC_WEAK_FUNC(sub_83B871C0);
PPC_FUNC_IMPL(__imp__sub_83B871C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16880
	ctx.r3.s64 = ctx.r11.s64 + -16880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B871CC"))) PPC_WEAK_FUNC(sub_83B871CC);
PPC_FUNC_IMPL(__imp__sub_83B871CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B871D0"))) PPC_WEAK_FUNC(sub_83B871D0);
PPC_FUNC_IMPL(__imp__sub_83B871D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16872
	ctx.r3.s64 = ctx.r11.s64 + -16872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B871DC"))) PPC_WEAK_FUNC(sub_83B871DC);
PPC_FUNC_IMPL(__imp__sub_83B871DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B871E0"))) PPC_WEAK_FUNC(sub_83B871E0);
PPC_FUNC_IMPL(__imp__sub_83B871E0) {
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
	// addi r4,r11,-16100
	ctx.r4.s64 = ctx.r11.s64 + -16100;
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
	// addi r3,r7,-11144
	ctx.r3.s64 = ctx.r7.s64 + -11144;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B87210"))) PPC_WEAK_FUNC(sub_83B87210);
PPC_FUNC_IMPL(__imp__sub_83B87210) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11152
	ctx.r7.s64 = ctx.r8.s64 + -11152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11152(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B87238"))) PPC_WEAK_FUNC(sub_83B87238);
PPC_FUNC_IMPL(__imp__sub_83B87238) {
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
	// addi r3,r11,-11156
	ctx.r3.s64 = ctx.r11.s64 + -11156;
	// bl 0x83523120
	ctx.lr = 0x83B87250;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-16864
	ctx.r3.s64 = ctx.r10.s64 + -16864;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8725C;
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

