#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BCF450"))) PPC_WEAK_FUNC(sub_83BCF450);
PPC_FUNC_IMPL(__imp__sub_83BCF450) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,14856
	ctx.r3.s64 = ctx.r11.s64 + 14856;
	// bl 0x8259af80
	ctx.lr = 0x83BCF468;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,14776
	ctx.r3.s64 = ctx.r10.s64 + 14776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCF474;
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

__attribute__((alias("__imp__sub_83BCF484"))) PPC_WEAK_FUNC(sub_83BCF484);
PPC_FUNC_IMPL(__imp__sub_83BCF484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF488"))) PPC_WEAK_FUNC(sub_83BCF488);
PPC_FUNC_IMPL(__imp__sub_83BCF488) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14836
	ctx.r11.s64 = ctx.r8.s64 + 14836;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,19436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19436);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14768
	ctx.r3.s64 = ctx.r6.s64 + 14768;
	// stw r10,14836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF4B8"))) PPC_WEAK_FUNC(sub_83BCF4B8);
PPC_FUNC_IMPL(__imp__sub_83BCF4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14784
	ctx.r3.s64 = ctx.r11.s64 + 14784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF4C4"))) PPC_WEAK_FUNC(sub_83BCF4C4);
PPC_FUNC_IMPL(__imp__sub_83BCF4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF4C8"))) PPC_WEAK_FUNC(sub_83BCF4C8);
PPC_FUNC_IMPL(__imp__sub_83BCF4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14792
	ctx.r3.s64 = ctx.r11.s64 + 14792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF4D4"))) PPC_WEAK_FUNC(sub_83BCF4D4);
PPC_FUNC_IMPL(__imp__sub_83BCF4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF4D8"))) PPC_WEAK_FUNC(sub_83BCF4D8);
PPC_FUNC_IMPL(__imp__sub_83BCF4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14800
	ctx.r3.s64 = ctx.r11.s64 + 14800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF4E4"))) PPC_WEAK_FUNC(sub_83BCF4E4);
PPC_FUNC_IMPL(__imp__sub_83BCF4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF4E8"))) PPC_WEAK_FUNC(sub_83BCF4E8);
PPC_FUNC_IMPL(__imp__sub_83BCF4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14808
	ctx.r3.s64 = ctx.r11.s64 + 14808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF4F4"))) PPC_WEAK_FUNC(sub_83BCF4F4);
PPC_FUNC_IMPL(__imp__sub_83BCF4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF4F8"))) PPC_WEAK_FUNC(sub_83BCF4F8);
PPC_FUNC_IMPL(__imp__sub_83BCF4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14816
	ctx.r3.s64 = ctx.r11.s64 + 14816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF504"))) PPC_WEAK_FUNC(sub_83BCF504);
PPC_FUNC_IMPL(__imp__sub_83BCF504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF508"))) PPC_WEAK_FUNC(sub_83BCF508);
PPC_FUNC_IMPL(__imp__sub_83BCF508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14824
	ctx.r3.s64 = ctx.r11.s64 + 14824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF514"))) PPC_WEAK_FUNC(sub_83BCF514);
PPC_FUNC_IMPL(__imp__sub_83BCF514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF518"))) PPC_WEAK_FUNC(sub_83BCF518);
PPC_FUNC_IMPL(__imp__sub_83BCF518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14832
	ctx.r3.s64 = ctx.r11.s64 + 14832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF524"))) PPC_WEAK_FUNC(sub_83BCF524);
PPC_FUNC_IMPL(__imp__sub_83BCF524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF528"))) PPC_WEAK_FUNC(sub_83BCF528);
PPC_FUNC_IMPL(__imp__sub_83BCF528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14840
	ctx.r3.s64 = ctx.r11.s64 + 14840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF534"))) PPC_WEAK_FUNC(sub_83BCF534);
PPC_FUNC_IMPL(__imp__sub_83BCF534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF538"))) PPC_WEAK_FUNC(sub_83BCF538);
PPC_FUNC_IMPL(__imp__sub_83BCF538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14848
	ctx.r3.s64 = ctx.r11.s64 + 14848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF544"))) PPC_WEAK_FUNC(sub_83BCF544);
PPC_FUNC_IMPL(__imp__sub_83BCF544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF548"))) PPC_WEAK_FUNC(sub_83BCF548);
PPC_FUNC_IMPL(__imp__sub_83BCF548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14856
	ctx.r3.s64 = ctx.r11.s64 + 14856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF554"))) PPC_WEAK_FUNC(sub_83BCF554);
PPC_FUNC_IMPL(__imp__sub_83BCF554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF558"))) PPC_WEAK_FUNC(sub_83BCF558);
PPC_FUNC_IMPL(__imp__sub_83BCF558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14864
	ctx.r3.s64 = ctx.r11.s64 + 14864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF564"))) PPC_WEAK_FUNC(sub_83BCF564);
PPC_FUNC_IMPL(__imp__sub_83BCF564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF568"))) PPC_WEAK_FUNC(sub_83BCF568);
PPC_FUNC_IMPL(__imp__sub_83BCF568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14872
	ctx.r3.s64 = ctx.r11.s64 + 14872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF574"))) PPC_WEAK_FUNC(sub_83BCF574);
PPC_FUNC_IMPL(__imp__sub_83BCF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF578"))) PPC_WEAK_FUNC(sub_83BCF578);
PPC_FUNC_IMPL(__imp__sub_83BCF578) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,15200
	ctx.r3.s64 = ctx.r11.s64 + 15200;
	// bl 0x83523120
	ctx.lr = 0x83BCF590;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,14880
	ctx.r3.s64 = ctx.r10.s64 + 14880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCF59C;
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

__attribute__((alias("__imp__sub_83BCF5AC"))) PPC_WEAK_FUNC(sub_83BCF5AC);
PPC_FUNC_IMPL(__imp__sub_83BCF5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF5B0"))) PPC_WEAK_FUNC(sub_83BCF5B0);
PPC_FUNC_IMPL(__imp__sub_83BCF5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15216
	ctx.r7.s64 = ctx.r8.s64 + 15216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCF5D8"))) PPC_WEAK_FUNC(sub_83BCF5D8);
PPC_FUNC_IMPL(__imp__sub_83BCF5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,19608
	ctx.r6.s64 = ctx.r7.s64 + 19608;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15216);
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
	// std r9,19608(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCF620"))) PPC_WEAK_FUNC(sub_83BCF620);
PPC_FUNC_IMPL(__imp__sub_83BCF620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14896
	ctx.r3.s64 = ctx.r11.s64 + 14896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF62C"))) PPC_WEAK_FUNC(sub_83BCF62C);
PPC_FUNC_IMPL(__imp__sub_83BCF62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF630"))) PPC_WEAK_FUNC(sub_83BCF630);
PPC_FUNC_IMPL(__imp__sub_83BCF630) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,15224
	ctx.r3.s64 = ctx.r11.s64 + 15224;
	// bl 0x8259af80
	ctx.lr = 0x83BCF648;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,14912
	ctx.r3.s64 = ctx.r10.s64 + 14912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCF654;
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

__attribute__((alias("__imp__sub_83BCF664"))) PPC_WEAK_FUNC(sub_83BCF664);
PPC_FUNC_IMPL(__imp__sub_83BCF664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF668"))) PPC_WEAK_FUNC(sub_83BCF668);
PPC_FUNC_IMPL(__imp__sub_83BCF668) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15204
	ctx.r11.s64 = ctx.r8.s64 + 15204;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,19584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,14904
	ctx.r3.s64 = ctx.r6.s64 + 14904;
	// stw r10,15204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF698"))) PPC_WEAK_FUNC(sub_83BCF698);
PPC_FUNC_IMPL(__imp__sub_83BCF698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14920
	ctx.r3.s64 = ctx.r11.s64 + 14920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF6A4"))) PPC_WEAK_FUNC(sub_83BCF6A4);
PPC_FUNC_IMPL(__imp__sub_83BCF6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF6A8"))) PPC_WEAK_FUNC(sub_83BCF6A8);
PPC_FUNC_IMPL(__imp__sub_83BCF6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14928
	ctx.r3.s64 = ctx.r11.s64 + 14928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF6B4"))) PPC_WEAK_FUNC(sub_83BCF6B4);
PPC_FUNC_IMPL(__imp__sub_83BCF6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF6B8"))) PPC_WEAK_FUNC(sub_83BCF6B8);
PPC_FUNC_IMPL(__imp__sub_83BCF6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14936
	ctx.r3.s64 = ctx.r11.s64 + 14936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF6C4"))) PPC_WEAK_FUNC(sub_83BCF6C4);
PPC_FUNC_IMPL(__imp__sub_83BCF6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF6C8"))) PPC_WEAK_FUNC(sub_83BCF6C8);
PPC_FUNC_IMPL(__imp__sub_83BCF6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14944
	ctx.r3.s64 = ctx.r11.s64 + 14944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF6D4"))) PPC_WEAK_FUNC(sub_83BCF6D4);
PPC_FUNC_IMPL(__imp__sub_83BCF6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF6D8"))) PPC_WEAK_FUNC(sub_83BCF6D8);
PPC_FUNC_IMPL(__imp__sub_83BCF6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14952
	ctx.r3.s64 = ctx.r11.s64 + 14952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF6E4"))) PPC_WEAK_FUNC(sub_83BCF6E4);
PPC_FUNC_IMPL(__imp__sub_83BCF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF6E8"))) PPC_WEAK_FUNC(sub_83BCF6E8);
PPC_FUNC_IMPL(__imp__sub_83BCF6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14960
	ctx.r3.s64 = ctx.r11.s64 + 14960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF6F4"))) PPC_WEAK_FUNC(sub_83BCF6F4);
PPC_FUNC_IMPL(__imp__sub_83BCF6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF6F8"))) PPC_WEAK_FUNC(sub_83BCF6F8);
PPC_FUNC_IMPL(__imp__sub_83BCF6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14968
	ctx.r3.s64 = ctx.r11.s64 + 14968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF704"))) PPC_WEAK_FUNC(sub_83BCF704);
PPC_FUNC_IMPL(__imp__sub_83BCF704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF708"))) PPC_WEAK_FUNC(sub_83BCF708);
PPC_FUNC_IMPL(__imp__sub_83BCF708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14976
	ctx.r3.s64 = ctx.r11.s64 + 14976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF714"))) PPC_WEAK_FUNC(sub_83BCF714);
PPC_FUNC_IMPL(__imp__sub_83BCF714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF718"))) PPC_WEAK_FUNC(sub_83BCF718);
PPC_FUNC_IMPL(__imp__sub_83BCF718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14984
	ctx.r3.s64 = ctx.r11.s64 + 14984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF724"))) PPC_WEAK_FUNC(sub_83BCF724);
PPC_FUNC_IMPL(__imp__sub_83BCF724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF728"))) PPC_WEAK_FUNC(sub_83BCF728);
PPC_FUNC_IMPL(__imp__sub_83BCF728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,14992
	ctx.r3.s64 = ctx.r11.s64 + 14992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF734"))) PPC_WEAK_FUNC(sub_83BCF734);
PPC_FUNC_IMPL(__imp__sub_83BCF734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF738"))) PPC_WEAK_FUNC(sub_83BCF738);
PPC_FUNC_IMPL(__imp__sub_83BCF738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF744"))) PPC_WEAK_FUNC(sub_83BCF744);
PPC_FUNC_IMPL(__imp__sub_83BCF744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF748"))) PPC_WEAK_FUNC(sub_83BCF748);
PPC_FUNC_IMPL(__imp__sub_83BCF748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15008
	ctx.r3.s64 = ctx.r11.s64 + 15008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF754"))) PPC_WEAK_FUNC(sub_83BCF754);
PPC_FUNC_IMPL(__imp__sub_83BCF754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF758"))) PPC_WEAK_FUNC(sub_83BCF758);
PPC_FUNC_IMPL(__imp__sub_83BCF758) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,15568
	ctx.r3.s64 = ctx.r11.s64 + 15568;
	// bl 0x83523120
	ctx.lr = 0x83BCF770;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15016
	ctx.r3.s64 = ctx.r10.s64 + 15016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCF77C;
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

__attribute__((alias("__imp__sub_83BCF78C"))) PPC_WEAK_FUNC(sub_83BCF78C);
PPC_FUNC_IMPL(__imp__sub_83BCF78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF790"))) PPC_WEAK_FUNC(sub_83BCF790);
PPC_FUNC_IMPL(__imp__sub_83BCF790) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15584
	ctx.r7.s64 = ctx.r8.s64 + 15584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCF7B8"))) PPC_WEAK_FUNC(sub_83BCF7B8);
PPC_FUNC_IMPL(__imp__sub_83BCF7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,19752
	ctx.r6.s64 = ctx.r7.s64 + 19752;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19680(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19680);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15584);
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
	// std r9,19752(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCF800"))) PPC_WEAK_FUNC(sub_83BCF800);
PPC_FUNC_IMPL(__imp__sub_83BCF800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15032
	ctx.r3.s64 = ctx.r11.s64 + 15032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF80C"))) PPC_WEAK_FUNC(sub_83BCF80C);
PPC_FUNC_IMPL(__imp__sub_83BCF80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF810"))) PPC_WEAK_FUNC(sub_83BCF810);
PPC_FUNC_IMPL(__imp__sub_83BCF810) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,15592
	ctx.r3.s64 = ctx.r11.s64 + 15592;
	// bl 0x8259af80
	ctx.lr = 0x83BCF828;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15048
	ctx.r3.s64 = ctx.r10.s64 + 15048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCF834;
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

__attribute__((alias("__imp__sub_83BCF844"))) PPC_WEAK_FUNC(sub_83BCF844);
PPC_FUNC_IMPL(__imp__sub_83BCF844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF848"))) PPC_WEAK_FUNC(sub_83BCF848);
PPC_FUNC_IMPL(__imp__sub_83BCF848) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15572
	ctx.r11.s64 = ctx.r8.s64 + 15572;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,19728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19728);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15040
	ctx.r3.s64 = ctx.r6.s64 + 15040;
	// stw r10,15572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF878"))) PPC_WEAK_FUNC(sub_83BCF878);
PPC_FUNC_IMPL(__imp__sub_83BCF878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15056
	ctx.r3.s64 = ctx.r11.s64 + 15056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF884"))) PPC_WEAK_FUNC(sub_83BCF884);
PPC_FUNC_IMPL(__imp__sub_83BCF884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF888"))) PPC_WEAK_FUNC(sub_83BCF888);
PPC_FUNC_IMPL(__imp__sub_83BCF888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15064
	ctx.r3.s64 = ctx.r11.s64 + 15064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF894"))) PPC_WEAK_FUNC(sub_83BCF894);
PPC_FUNC_IMPL(__imp__sub_83BCF894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF898"))) PPC_WEAK_FUNC(sub_83BCF898);
PPC_FUNC_IMPL(__imp__sub_83BCF898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15072
	ctx.r3.s64 = ctx.r11.s64 + 15072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF8A4"))) PPC_WEAK_FUNC(sub_83BCF8A4);
PPC_FUNC_IMPL(__imp__sub_83BCF8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF8A8"))) PPC_WEAK_FUNC(sub_83BCF8A8);
PPC_FUNC_IMPL(__imp__sub_83BCF8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15080
	ctx.r3.s64 = ctx.r11.s64 + 15080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF8B4"))) PPC_WEAK_FUNC(sub_83BCF8B4);
PPC_FUNC_IMPL(__imp__sub_83BCF8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF8B8"))) PPC_WEAK_FUNC(sub_83BCF8B8);
PPC_FUNC_IMPL(__imp__sub_83BCF8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15088
	ctx.r3.s64 = ctx.r11.s64 + 15088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF8C4"))) PPC_WEAK_FUNC(sub_83BCF8C4);
PPC_FUNC_IMPL(__imp__sub_83BCF8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF8C8"))) PPC_WEAK_FUNC(sub_83BCF8C8);
PPC_FUNC_IMPL(__imp__sub_83BCF8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF8D4"))) PPC_WEAK_FUNC(sub_83BCF8D4);
PPC_FUNC_IMPL(__imp__sub_83BCF8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF8D8"))) PPC_WEAK_FUNC(sub_83BCF8D8);
PPC_FUNC_IMPL(__imp__sub_83BCF8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15104
	ctx.r3.s64 = ctx.r11.s64 + 15104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF8E4"))) PPC_WEAK_FUNC(sub_83BCF8E4);
PPC_FUNC_IMPL(__imp__sub_83BCF8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF8E8"))) PPC_WEAK_FUNC(sub_83BCF8E8);
PPC_FUNC_IMPL(__imp__sub_83BCF8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15112
	ctx.r3.s64 = ctx.r11.s64 + 15112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF8F4"))) PPC_WEAK_FUNC(sub_83BCF8F4);
PPC_FUNC_IMPL(__imp__sub_83BCF8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF8F8"))) PPC_WEAK_FUNC(sub_83BCF8F8);
PPC_FUNC_IMPL(__imp__sub_83BCF8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15120
	ctx.r3.s64 = ctx.r11.s64 + 15120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF904"))) PPC_WEAK_FUNC(sub_83BCF904);
PPC_FUNC_IMPL(__imp__sub_83BCF904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF908"))) PPC_WEAK_FUNC(sub_83BCF908);
PPC_FUNC_IMPL(__imp__sub_83BCF908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15128
	ctx.r3.s64 = ctx.r11.s64 + 15128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF914"))) PPC_WEAK_FUNC(sub_83BCF914);
PPC_FUNC_IMPL(__imp__sub_83BCF914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF918"))) PPC_WEAK_FUNC(sub_83BCF918);
PPC_FUNC_IMPL(__imp__sub_83BCF918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15136
	ctx.r3.s64 = ctx.r11.s64 + 15136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF924"))) PPC_WEAK_FUNC(sub_83BCF924);
PPC_FUNC_IMPL(__imp__sub_83BCF924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF928"))) PPC_WEAK_FUNC(sub_83BCF928);
PPC_FUNC_IMPL(__imp__sub_83BCF928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15144
	ctx.r3.s64 = ctx.r11.s64 + 15144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF934"))) PPC_WEAK_FUNC(sub_83BCF934);
PPC_FUNC_IMPL(__imp__sub_83BCF934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF938"))) PPC_WEAK_FUNC(sub_83BCF938);
PPC_FUNC_IMPL(__imp__sub_83BCF938) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// bl 0x83523120
	ctx.lr = 0x83BCF950;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15152
	ctx.r3.s64 = ctx.r10.s64 + 15152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCF95C;
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

__attribute__((alias("__imp__sub_83BCF96C"))) PPC_WEAK_FUNC(sub_83BCF96C);
PPC_FUNC_IMPL(__imp__sub_83BCF96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF970"))) PPC_WEAK_FUNC(sub_83BCF970);
PPC_FUNC_IMPL(__imp__sub_83BCF970) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15952
	ctx.r7.s64 = ctx.r8.s64 + 15952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCF998"))) PPC_WEAK_FUNC(sub_83BCF998);
PPC_FUNC_IMPL(__imp__sub_83BCF998) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,19912
	ctx.r6.s64 = ctx.r7.s64 + 19912;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19840(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19840);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15952);
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
	// std r9,19912(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19912, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCF9E0"))) PPC_WEAK_FUNC(sub_83BCF9E0);
PPC_FUNC_IMPL(__imp__sub_83BCF9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15168
	ctx.r3.s64 = ctx.r11.s64 + 15168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCF9EC"))) PPC_WEAK_FUNC(sub_83BCF9EC);
PPC_FUNC_IMPL(__imp__sub_83BCF9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCF9F0"))) PPC_WEAK_FUNC(sub_83BCF9F0);
PPC_FUNC_IMPL(__imp__sub_83BCF9F0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// bl 0x8259af80
	ctx.lr = 0x83BCFA08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15184
	ctx.r3.s64 = ctx.r10.s64 + 15184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCFA14;
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

__attribute__((alias("__imp__sub_83BCFA24"))) PPC_WEAK_FUNC(sub_83BCFA24);
PPC_FUNC_IMPL(__imp__sub_83BCFA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFA28"))) PPC_WEAK_FUNC(sub_83BCFA28);
PPC_FUNC_IMPL(__imp__sub_83BCFA28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15940
	ctx.r11.s64 = ctx.r8.s64 + 15940;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,19888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19888);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15176
	ctx.r3.s64 = ctx.r6.s64 + 15176;
	// stw r10,15940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFA58"))) PPC_WEAK_FUNC(sub_83BCFA58);
PPC_FUNC_IMPL(__imp__sub_83BCFA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15192
	ctx.r3.s64 = ctx.r11.s64 + 15192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFA64"))) PPC_WEAK_FUNC(sub_83BCFA64);
PPC_FUNC_IMPL(__imp__sub_83BCFA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFA68"))) PPC_WEAK_FUNC(sub_83BCFA68);
PPC_FUNC_IMPL(__imp__sub_83BCFA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15200
	ctx.r3.s64 = ctx.r11.s64 + 15200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFA74"))) PPC_WEAK_FUNC(sub_83BCFA74);
PPC_FUNC_IMPL(__imp__sub_83BCFA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFA78"))) PPC_WEAK_FUNC(sub_83BCFA78);
PPC_FUNC_IMPL(__imp__sub_83BCFA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15208
	ctx.r3.s64 = ctx.r11.s64 + 15208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFA84"))) PPC_WEAK_FUNC(sub_83BCFA84);
PPC_FUNC_IMPL(__imp__sub_83BCFA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFA88"))) PPC_WEAK_FUNC(sub_83BCFA88);
PPC_FUNC_IMPL(__imp__sub_83BCFA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15216
	ctx.r3.s64 = ctx.r11.s64 + 15216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFA94"))) PPC_WEAK_FUNC(sub_83BCFA94);
PPC_FUNC_IMPL(__imp__sub_83BCFA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFA98"))) PPC_WEAK_FUNC(sub_83BCFA98);
PPC_FUNC_IMPL(__imp__sub_83BCFA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15224
	ctx.r3.s64 = ctx.r11.s64 + 15224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFAA4"))) PPC_WEAK_FUNC(sub_83BCFAA4);
PPC_FUNC_IMPL(__imp__sub_83BCFAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFAA8"))) PPC_WEAK_FUNC(sub_83BCFAA8);
PPC_FUNC_IMPL(__imp__sub_83BCFAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15232
	ctx.r3.s64 = ctx.r11.s64 + 15232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFAB4"))) PPC_WEAK_FUNC(sub_83BCFAB4);
PPC_FUNC_IMPL(__imp__sub_83BCFAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFAB8"))) PPC_WEAK_FUNC(sub_83BCFAB8);
PPC_FUNC_IMPL(__imp__sub_83BCFAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15240
	ctx.r3.s64 = ctx.r11.s64 + 15240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFAC4"))) PPC_WEAK_FUNC(sub_83BCFAC4);
PPC_FUNC_IMPL(__imp__sub_83BCFAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFAC8"))) PPC_WEAK_FUNC(sub_83BCFAC8);
PPC_FUNC_IMPL(__imp__sub_83BCFAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15248
	ctx.r3.s64 = ctx.r11.s64 + 15248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFAD4"))) PPC_WEAK_FUNC(sub_83BCFAD4);
PPC_FUNC_IMPL(__imp__sub_83BCFAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFAD8"))) PPC_WEAK_FUNC(sub_83BCFAD8);
PPC_FUNC_IMPL(__imp__sub_83BCFAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15256
	ctx.r3.s64 = ctx.r11.s64 + 15256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFAE4"))) PPC_WEAK_FUNC(sub_83BCFAE4);
PPC_FUNC_IMPL(__imp__sub_83BCFAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFAE8"))) PPC_WEAK_FUNC(sub_83BCFAE8);
PPC_FUNC_IMPL(__imp__sub_83BCFAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15264
	ctx.r3.s64 = ctx.r11.s64 + 15264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFAF4"))) PPC_WEAK_FUNC(sub_83BCFAF4);
PPC_FUNC_IMPL(__imp__sub_83BCFAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFAF8"))) PPC_WEAK_FUNC(sub_83BCFAF8);
PPC_FUNC_IMPL(__imp__sub_83BCFAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15272
	ctx.r3.s64 = ctx.r11.s64 + 15272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFB04"))) PPC_WEAK_FUNC(sub_83BCFB04);
PPC_FUNC_IMPL(__imp__sub_83BCFB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFB08"))) PPC_WEAK_FUNC(sub_83BCFB08);
PPC_FUNC_IMPL(__imp__sub_83BCFB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15280
	ctx.r3.s64 = ctx.r11.s64 + 15280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFB14"))) PPC_WEAK_FUNC(sub_83BCFB14);
PPC_FUNC_IMPL(__imp__sub_83BCFB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFB18"))) PPC_WEAK_FUNC(sub_83BCFB18);
PPC_FUNC_IMPL(__imp__sub_83BCFB18) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,16304
	ctx.r3.s64 = ctx.r11.s64 + 16304;
	// bl 0x83523120
	ctx.lr = 0x83BCFB30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15288
	ctx.r3.s64 = ctx.r10.s64 + 15288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCFB3C;
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

__attribute__((alias("__imp__sub_83BCFB4C"))) PPC_WEAK_FUNC(sub_83BCFB4C);
PPC_FUNC_IMPL(__imp__sub_83BCFB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFB50"))) PPC_WEAK_FUNC(sub_83BCFB50);
PPC_FUNC_IMPL(__imp__sub_83BCFB50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16320
	ctx.r7.s64 = ctx.r8.s64 + 16320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCFB78"))) PPC_WEAK_FUNC(sub_83BCFB78);
PPC_FUNC_IMPL(__imp__sub_83BCFB78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,20052
	ctx.r6.s64 = ctx.r7.s64 + 20052;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19980(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19980);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16320);
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
	// std r9,20052(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20052, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCFBC0"))) PPC_WEAK_FUNC(sub_83BCFBC0);
PPC_FUNC_IMPL(__imp__sub_83BCFBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFBCC"))) PPC_WEAK_FUNC(sub_83BCFBCC);
PPC_FUNC_IMPL(__imp__sub_83BCFBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFBD0"))) PPC_WEAK_FUNC(sub_83BCFBD0);
PPC_FUNC_IMPL(__imp__sub_83BCFBD0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,16328
	ctx.r3.s64 = ctx.r11.s64 + 16328;
	// bl 0x8259af80
	ctx.lr = 0x83BCFBE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15320
	ctx.r3.s64 = ctx.r10.s64 + 15320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCFBF4;
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

__attribute__((alias("__imp__sub_83BCFC04"))) PPC_WEAK_FUNC(sub_83BCFC04);
PPC_FUNC_IMPL(__imp__sub_83BCFC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFC08"))) PPC_WEAK_FUNC(sub_83BCFC08);
PPC_FUNC_IMPL(__imp__sub_83BCFC08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16308
	ctx.r11.s64 = ctx.r8.s64 + 16308;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,20028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20028);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15312
	ctx.r3.s64 = ctx.r6.s64 + 15312;
	// stw r10,16308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFC38"))) PPC_WEAK_FUNC(sub_83BCFC38);
PPC_FUNC_IMPL(__imp__sub_83BCFC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15328
	ctx.r3.s64 = ctx.r11.s64 + 15328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFC44"))) PPC_WEAK_FUNC(sub_83BCFC44);
PPC_FUNC_IMPL(__imp__sub_83BCFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFC48"))) PPC_WEAK_FUNC(sub_83BCFC48);
PPC_FUNC_IMPL(__imp__sub_83BCFC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15336
	ctx.r3.s64 = ctx.r11.s64 + 15336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFC54"))) PPC_WEAK_FUNC(sub_83BCFC54);
PPC_FUNC_IMPL(__imp__sub_83BCFC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFC58"))) PPC_WEAK_FUNC(sub_83BCFC58);
PPC_FUNC_IMPL(__imp__sub_83BCFC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15344
	ctx.r3.s64 = ctx.r11.s64 + 15344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFC64"))) PPC_WEAK_FUNC(sub_83BCFC64);
PPC_FUNC_IMPL(__imp__sub_83BCFC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFC68"))) PPC_WEAK_FUNC(sub_83BCFC68);
PPC_FUNC_IMPL(__imp__sub_83BCFC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15352
	ctx.r3.s64 = ctx.r11.s64 + 15352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFC74"))) PPC_WEAK_FUNC(sub_83BCFC74);
PPC_FUNC_IMPL(__imp__sub_83BCFC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFC78"))) PPC_WEAK_FUNC(sub_83BCFC78);
PPC_FUNC_IMPL(__imp__sub_83BCFC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15360
	ctx.r3.s64 = ctx.r11.s64 + 15360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFC84"))) PPC_WEAK_FUNC(sub_83BCFC84);
PPC_FUNC_IMPL(__imp__sub_83BCFC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFC88"))) PPC_WEAK_FUNC(sub_83BCFC88);
PPC_FUNC_IMPL(__imp__sub_83BCFC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15368
	ctx.r3.s64 = ctx.r11.s64 + 15368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFC94"))) PPC_WEAK_FUNC(sub_83BCFC94);
PPC_FUNC_IMPL(__imp__sub_83BCFC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFC98"))) PPC_WEAK_FUNC(sub_83BCFC98);
PPC_FUNC_IMPL(__imp__sub_83BCFC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15376
	ctx.r3.s64 = ctx.r11.s64 + 15376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFCA4"))) PPC_WEAK_FUNC(sub_83BCFCA4);
PPC_FUNC_IMPL(__imp__sub_83BCFCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFCA8"))) PPC_WEAK_FUNC(sub_83BCFCA8);
PPC_FUNC_IMPL(__imp__sub_83BCFCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15384
	ctx.r3.s64 = ctx.r11.s64 + 15384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFCB4"))) PPC_WEAK_FUNC(sub_83BCFCB4);
PPC_FUNC_IMPL(__imp__sub_83BCFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFCB8"))) PPC_WEAK_FUNC(sub_83BCFCB8);
PPC_FUNC_IMPL(__imp__sub_83BCFCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15392
	ctx.r3.s64 = ctx.r11.s64 + 15392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFCC4"))) PPC_WEAK_FUNC(sub_83BCFCC4);
PPC_FUNC_IMPL(__imp__sub_83BCFCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFCC8"))) PPC_WEAK_FUNC(sub_83BCFCC8);
PPC_FUNC_IMPL(__imp__sub_83BCFCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15400
	ctx.r3.s64 = ctx.r11.s64 + 15400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFCD4"))) PPC_WEAK_FUNC(sub_83BCFCD4);
PPC_FUNC_IMPL(__imp__sub_83BCFCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFCD8"))) PPC_WEAK_FUNC(sub_83BCFCD8);
PPC_FUNC_IMPL(__imp__sub_83BCFCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15408
	ctx.r3.s64 = ctx.r11.s64 + 15408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFCE4"))) PPC_WEAK_FUNC(sub_83BCFCE4);
PPC_FUNC_IMPL(__imp__sub_83BCFCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFCE8"))) PPC_WEAK_FUNC(sub_83BCFCE8);
PPC_FUNC_IMPL(__imp__sub_83BCFCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15416
	ctx.r3.s64 = ctx.r11.s64 + 15416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFCF4"))) PPC_WEAK_FUNC(sub_83BCFCF4);
PPC_FUNC_IMPL(__imp__sub_83BCFCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFCF8"))) PPC_WEAK_FUNC(sub_83BCFCF8);
PPC_FUNC_IMPL(__imp__sub_83BCFCF8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,16672
	ctx.r3.s64 = ctx.r11.s64 + 16672;
	// bl 0x83523120
	ctx.lr = 0x83BCFD10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15424
	ctx.r3.s64 = ctx.r10.s64 + 15424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCFD1C;
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

__attribute__((alias("__imp__sub_83BCFD2C"))) PPC_WEAK_FUNC(sub_83BCFD2C);
PPC_FUNC_IMPL(__imp__sub_83BCFD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFD30"))) PPC_WEAK_FUNC(sub_83BCFD30);
PPC_FUNC_IMPL(__imp__sub_83BCFD30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16688
	ctx.r7.s64 = ctx.r8.s64 + 16688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCFD58"))) PPC_WEAK_FUNC(sub_83BCFD58);
PPC_FUNC_IMPL(__imp__sub_83BCFD58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,20204
	ctx.r6.s64 = ctx.r7.s64 + 20204;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20132(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20132);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16688);
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
	// std r9,20204(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20204, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCFDA0"))) PPC_WEAK_FUNC(sub_83BCFDA0);
PPC_FUNC_IMPL(__imp__sub_83BCFDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15440
	ctx.r3.s64 = ctx.r11.s64 + 15440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFDAC"))) PPC_WEAK_FUNC(sub_83BCFDAC);
PPC_FUNC_IMPL(__imp__sub_83BCFDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFDB0"))) PPC_WEAK_FUNC(sub_83BCFDB0);
PPC_FUNC_IMPL(__imp__sub_83BCFDB0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// bl 0x8259af80
	ctx.lr = 0x83BCFDC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15456
	ctx.r3.s64 = ctx.r10.s64 + 15456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCFDD4;
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

__attribute__((alias("__imp__sub_83BCFDE4"))) PPC_WEAK_FUNC(sub_83BCFDE4);
PPC_FUNC_IMPL(__imp__sub_83BCFDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFDE8"))) PPC_WEAK_FUNC(sub_83BCFDE8);
PPC_FUNC_IMPL(__imp__sub_83BCFDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16676
	ctx.r11.s64 = ctx.r8.s64 + 16676;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,20180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20180);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15448
	ctx.r3.s64 = ctx.r6.s64 + 15448;
	// stw r10,16676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE18"))) PPC_WEAK_FUNC(sub_83BCFE18);
PPC_FUNC_IMPL(__imp__sub_83BCFE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15464
	ctx.r3.s64 = ctx.r11.s64 + 15464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE24"))) PPC_WEAK_FUNC(sub_83BCFE24);
PPC_FUNC_IMPL(__imp__sub_83BCFE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFE28"))) PPC_WEAK_FUNC(sub_83BCFE28);
PPC_FUNC_IMPL(__imp__sub_83BCFE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15472
	ctx.r3.s64 = ctx.r11.s64 + 15472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE34"))) PPC_WEAK_FUNC(sub_83BCFE34);
PPC_FUNC_IMPL(__imp__sub_83BCFE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFE38"))) PPC_WEAK_FUNC(sub_83BCFE38);
PPC_FUNC_IMPL(__imp__sub_83BCFE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15480
	ctx.r3.s64 = ctx.r11.s64 + 15480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE44"))) PPC_WEAK_FUNC(sub_83BCFE44);
PPC_FUNC_IMPL(__imp__sub_83BCFE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFE48"))) PPC_WEAK_FUNC(sub_83BCFE48);
PPC_FUNC_IMPL(__imp__sub_83BCFE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15488
	ctx.r3.s64 = ctx.r11.s64 + 15488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE54"))) PPC_WEAK_FUNC(sub_83BCFE54);
PPC_FUNC_IMPL(__imp__sub_83BCFE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFE58"))) PPC_WEAK_FUNC(sub_83BCFE58);
PPC_FUNC_IMPL(__imp__sub_83BCFE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15496
	ctx.r3.s64 = ctx.r11.s64 + 15496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE64"))) PPC_WEAK_FUNC(sub_83BCFE64);
PPC_FUNC_IMPL(__imp__sub_83BCFE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFE68"))) PPC_WEAK_FUNC(sub_83BCFE68);
PPC_FUNC_IMPL(__imp__sub_83BCFE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15504
	ctx.r3.s64 = ctx.r11.s64 + 15504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE74"))) PPC_WEAK_FUNC(sub_83BCFE74);
PPC_FUNC_IMPL(__imp__sub_83BCFE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFE78"))) PPC_WEAK_FUNC(sub_83BCFE78);
PPC_FUNC_IMPL(__imp__sub_83BCFE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15512
	ctx.r3.s64 = ctx.r11.s64 + 15512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE84"))) PPC_WEAK_FUNC(sub_83BCFE84);
PPC_FUNC_IMPL(__imp__sub_83BCFE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFE88"))) PPC_WEAK_FUNC(sub_83BCFE88);
PPC_FUNC_IMPL(__imp__sub_83BCFE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15520
	ctx.r3.s64 = ctx.r11.s64 + 15520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFE94"))) PPC_WEAK_FUNC(sub_83BCFE94);
PPC_FUNC_IMPL(__imp__sub_83BCFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFE98"))) PPC_WEAK_FUNC(sub_83BCFE98);
PPC_FUNC_IMPL(__imp__sub_83BCFE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15528
	ctx.r3.s64 = ctx.r11.s64 + 15528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFEA4"))) PPC_WEAK_FUNC(sub_83BCFEA4);
PPC_FUNC_IMPL(__imp__sub_83BCFEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFEA8"))) PPC_WEAK_FUNC(sub_83BCFEA8);
PPC_FUNC_IMPL(__imp__sub_83BCFEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15536
	ctx.r3.s64 = ctx.r11.s64 + 15536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFEB4"))) PPC_WEAK_FUNC(sub_83BCFEB4);
PPC_FUNC_IMPL(__imp__sub_83BCFEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFEB8"))) PPC_WEAK_FUNC(sub_83BCFEB8);
PPC_FUNC_IMPL(__imp__sub_83BCFEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15544
	ctx.r3.s64 = ctx.r11.s64 + 15544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFEC4"))) PPC_WEAK_FUNC(sub_83BCFEC4);
PPC_FUNC_IMPL(__imp__sub_83BCFEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFEC8"))) PPC_WEAK_FUNC(sub_83BCFEC8);
PPC_FUNC_IMPL(__imp__sub_83BCFEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15552
	ctx.r3.s64 = ctx.r11.s64 + 15552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFED4"))) PPC_WEAK_FUNC(sub_83BCFED4);
PPC_FUNC_IMPL(__imp__sub_83BCFED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFED8"))) PPC_WEAK_FUNC(sub_83BCFED8);
PPC_FUNC_IMPL(__imp__sub_83BCFED8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,17040
	ctx.r3.s64 = ctx.r11.s64 + 17040;
	// bl 0x83523120
	ctx.lr = 0x83BCFEF0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15560
	ctx.r3.s64 = ctx.r10.s64 + 15560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCFEFC;
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

__attribute__((alias("__imp__sub_83BCFF0C"))) PPC_WEAK_FUNC(sub_83BCFF0C);
PPC_FUNC_IMPL(__imp__sub_83BCFF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFF10"))) PPC_WEAK_FUNC(sub_83BCFF10);
PPC_FUNC_IMPL(__imp__sub_83BCFF10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17056
	ctx.r7.s64 = ctx.r8.s64 + 17056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17056(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17056);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17056(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17056, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCFF38"))) PPC_WEAK_FUNC(sub_83BCFF38);
PPC_FUNC_IMPL(__imp__sub_83BCFF38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,20336
	ctx.r6.s64 = ctx.r7.s64 + 20336;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17056(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17056);
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
	// std r9,20336(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20336, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCFF80"))) PPC_WEAK_FUNC(sub_83BCFF80);
PPC_FUNC_IMPL(__imp__sub_83BCFF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15576
	ctx.r3.s64 = ctx.r11.s64 + 15576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFF8C"))) PPC_WEAK_FUNC(sub_83BCFF8C);
PPC_FUNC_IMPL(__imp__sub_83BCFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFF90"))) PPC_WEAK_FUNC(sub_83BCFF90);
PPC_FUNC_IMPL(__imp__sub_83BCFF90) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,17064
	ctx.r3.s64 = ctx.r11.s64 + 17064;
	// bl 0x8259af80
	ctx.lr = 0x83BCFFA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15592
	ctx.r3.s64 = ctx.r10.s64 + 15592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCFFB4;
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

__attribute__((alias("__imp__sub_83BCFFC4"))) PPC_WEAK_FUNC(sub_83BCFFC4);
PPC_FUNC_IMPL(__imp__sub_83BCFFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCFFC8"))) PPC_WEAK_FUNC(sub_83BCFFC8);
PPC_FUNC_IMPL(__imp__sub_83BCFFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17044
	ctx.r11.s64 = ctx.r8.s64 + 17044;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,20312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15584
	ctx.r3.s64 = ctx.r6.s64 + 15584;
	// stw r10,17044(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCFFF8"))) PPC_WEAK_FUNC(sub_83BCFFF8);
PPC_FUNC_IMPL(__imp__sub_83BCFFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15600
	ctx.r3.s64 = ctx.r11.s64 + 15600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0004"))) PPC_WEAK_FUNC(sub_83BD0004);
PPC_FUNC_IMPL(__imp__sub_83BD0004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0008"))) PPC_WEAK_FUNC(sub_83BD0008);
PPC_FUNC_IMPL(__imp__sub_83BD0008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15608
	ctx.r3.s64 = ctx.r11.s64 + 15608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0014"))) PPC_WEAK_FUNC(sub_83BD0014);
PPC_FUNC_IMPL(__imp__sub_83BD0014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0018"))) PPC_WEAK_FUNC(sub_83BD0018);
PPC_FUNC_IMPL(__imp__sub_83BD0018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0024"))) PPC_WEAK_FUNC(sub_83BD0024);
PPC_FUNC_IMPL(__imp__sub_83BD0024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0028"))) PPC_WEAK_FUNC(sub_83BD0028);
PPC_FUNC_IMPL(__imp__sub_83BD0028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15624
	ctx.r3.s64 = ctx.r11.s64 + 15624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0034"))) PPC_WEAK_FUNC(sub_83BD0034);
PPC_FUNC_IMPL(__imp__sub_83BD0034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0038"))) PPC_WEAK_FUNC(sub_83BD0038);
PPC_FUNC_IMPL(__imp__sub_83BD0038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15632
	ctx.r3.s64 = ctx.r11.s64 + 15632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0044"))) PPC_WEAK_FUNC(sub_83BD0044);
PPC_FUNC_IMPL(__imp__sub_83BD0044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0048"))) PPC_WEAK_FUNC(sub_83BD0048);
PPC_FUNC_IMPL(__imp__sub_83BD0048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15640
	ctx.r3.s64 = ctx.r11.s64 + 15640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0054"))) PPC_WEAK_FUNC(sub_83BD0054);
PPC_FUNC_IMPL(__imp__sub_83BD0054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0058"))) PPC_WEAK_FUNC(sub_83BD0058);
PPC_FUNC_IMPL(__imp__sub_83BD0058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15648
	ctx.r3.s64 = ctx.r11.s64 + 15648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0064"))) PPC_WEAK_FUNC(sub_83BD0064);
PPC_FUNC_IMPL(__imp__sub_83BD0064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0068"))) PPC_WEAK_FUNC(sub_83BD0068);
PPC_FUNC_IMPL(__imp__sub_83BD0068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15656
	ctx.r3.s64 = ctx.r11.s64 + 15656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0074"))) PPC_WEAK_FUNC(sub_83BD0074);
PPC_FUNC_IMPL(__imp__sub_83BD0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0078"))) PPC_WEAK_FUNC(sub_83BD0078);
PPC_FUNC_IMPL(__imp__sub_83BD0078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15664
	ctx.r3.s64 = ctx.r11.s64 + 15664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0084"))) PPC_WEAK_FUNC(sub_83BD0084);
PPC_FUNC_IMPL(__imp__sub_83BD0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0088"))) PPC_WEAK_FUNC(sub_83BD0088);
PPC_FUNC_IMPL(__imp__sub_83BD0088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15672
	ctx.r3.s64 = ctx.r11.s64 + 15672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0094"))) PPC_WEAK_FUNC(sub_83BD0094);
PPC_FUNC_IMPL(__imp__sub_83BD0094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0098"))) PPC_WEAK_FUNC(sub_83BD0098);
PPC_FUNC_IMPL(__imp__sub_83BD0098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15680
	ctx.r3.s64 = ctx.r11.s64 + 15680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD00A4"))) PPC_WEAK_FUNC(sub_83BD00A4);
PPC_FUNC_IMPL(__imp__sub_83BD00A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD00A8"))) PPC_WEAK_FUNC(sub_83BD00A8);
PPC_FUNC_IMPL(__imp__sub_83BD00A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15688
	ctx.r3.s64 = ctx.r11.s64 + 15688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD00B4"))) PPC_WEAK_FUNC(sub_83BD00B4);
PPC_FUNC_IMPL(__imp__sub_83BD00B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD00B8"))) PPC_WEAK_FUNC(sub_83BD00B8);
PPC_FUNC_IMPL(__imp__sub_83BD00B8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,17408
	ctx.r3.s64 = ctx.r11.s64 + 17408;
	// bl 0x83523120
	ctx.lr = 0x83BD00D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15696
	ctx.r3.s64 = ctx.r10.s64 + 15696;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD00DC;
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

__attribute__((alias("__imp__sub_83BD00EC"))) PPC_WEAK_FUNC(sub_83BD00EC);
PPC_FUNC_IMPL(__imp__sub_83BD00EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD00F0"))) PPC_WEAK_FUNC(sub_83BD00F0);
PPC_FUNC_IMPL(__imp__sub_83BD00F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17424
	ctx.r7.s64 = ctx.r8.s64 + 17424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0118"))) PPC_WEAK_FUNC(sub_83BD0118);
PPC_FUNC_IMPL(__imp__sub_83BD0118) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,20464
	ctx.r6.s64 = ctx.r7.s64 + 20464;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20392(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20392);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17424);
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
	// std r9,20464(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20464, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0160"))) PPC_WEAK_FUNC(sub_83BD0160);
PPC_FUNC_IMPL(__imp__sub_83BD0160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15712
	ctx.r3.s64 = ctx.r11.s64 + 15712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD016C"))) PPC_WEAK_FUNC(sub_83BD016C);
PPC_FUNC_IMPL(__imp__sub_83BD016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0170"))) PPC_WEAK_FUNC(sub_83BD0170);
PPC_FUNC_IMPL(__imp__sub_83BD0170) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,17432
	ctx.r3.s64 = ctx.r11.s64 + 17432;
	// bl 0x8259af80
	ctx.lr = 0x83BD0188;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15728
	ctx.r3.s64 = ctx.r10.s64 + 15728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0194;
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

__attribute__((alias("__imp__sub_83BD01A4"))) PPC_WEAK_FUNC(sub_83BD01A4);
PPC_FUNC_IMPL(__imp__sub_83BD01A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD01A8"))) PPC_WEAK_FUNC(sub_83BD01A8);
PPC_FUNC_IMPL(__imp__sub_83BD01A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17412
	ctx.r11.s64 = ctx.r8.s64 + 17412;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,20440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20440);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15720
	ctx.r3.s64 = ctx.r6.s64 + 15720;
	// stw r10,17412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD01D8"))) PPC_WEAK_FUNC(sub_83BD01D8);
PPC_FUNC_IMPL(__imp__sub_83BD01D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15736
	ctx.r3.s64 = ctx.r11.s64 + 15736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD01E4"))) PPC_WEAK_FUNC(sub_83BD01E4);
PPC_FUNC_IMPL(__imp__sub_83BD01E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD01E8"))) PPC_WEAK_FUNC(sub_83BD01E8);
PPC_FUNC_IMPL(__imp__sub_83BD01E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15744
	ctx.r3.s64 = ctx.r11.s64 + 15744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD01F4"))) PPC_WEAK_FUNC(sub_83BD01F4);
PPC_FUNC_IMPL(__imp__sub_83BD01F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD01F8"))) PPC_WEAK_FUNC(sub_83BD01F8);
PPC_FUNC_IMPL(__imp__sub_83BD01F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15752
	ctx.r3.s64 = ctx.r11.s64 + 15752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0204"))) PPC_WEAK_FUNC(sub_83BD0204);
PPC_FUNC_IMPL(__imp__sub_83BD0204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0208"))) PPC_WEAK_FUNC(sub_83BD0208);
PPC_FUNC_IMPL(__imp__sub_83BD0208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15760
	ctx.r3.s64 = ctx.r11.s64 + 15760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0214"))) PPC_WEAK_FUNC(sub_83BD0214);
PPC_FUNC_IMPL(__imp__sub_83BD0214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0218"))) PPC_WEAK_FUNC(sub_83BD0218);
PPC_FUNC_IMPL(__imp__sub_83BD0218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15768
	ctx.r3.s64 = ctx.r11.s64 + 15768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0224"))) PPC_WEAK_FUNC(sub_83BD0224);
PPC_FUNC_IMPL(__imp__sub_83BD0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0228"))) PPC_WEAK_FUNC(sub_83BD0228);
PPC_FUNC_IMPL(__imp__sub_83BD0228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15776
	ctx.r3.s64 = ctx.r11.s64 + 15776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0234"))) PPC_WEAK_FUNC(sub_83BD0234);
PPC_FUNC_IMPL(__imp__sub_83BD0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0238"))) PPC_WEAK_FUNC(sub_83BD0238);
PPC_FUNC_IMPL(__imp__sub_83BD0238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15784
	ctx.r3.s64 = ctx.r11.s64 + 15784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0244"))) PPC_WEAK_FUNC(sub_83BD0244);
PPC_FUNC_IMPL(__imp__sub_83BD0244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0248"))) PPC_WEAK_FUNC(sub_83BD0248);
PPC_FUNC_IMPL(__imp__sub_83BD0248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15792
	ctx.r3.s64 = ctx.r11.s64 + 15792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0254"))) PPC_WEAK_FUNC(sub_83BD0254);
PPC_FUNC_IMPL(__imp__sub_83BD0254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0258"))) PPC_WEAK_FUNC(sub_83BD0258);
PPC_FUNC_IMPL(__imp__sub_83BD0258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15800
	ctx.r3.s64 = ctx.r11.s64 + 15800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0264"))) PPC_WEAK_FUNC(sub_83BD0264);
PPC_FUNC_IMPL(__imp__sub_83BD0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0268"))) PPC_WEAK_FUNC(sub_83BD0268);
PPC_FUNC_IMPL(__imp__sub_83BD0268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15808
	ctx.r3.s64 = ctx.r11.s64 + 15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0274"))) PPC_WEAK_FUNC(sub_83BD0274);
PPC_FUNC_IMPL(__imp__sub_83BD0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0278"))) PPC_WEAK_FUNC(sub_83BD0278);
PPC_FUNC_IMPL(__imp__sub_83BD0278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15816
	ctx.r3.s64 = ctx.r11.s64 + 15816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0284"))) PPC_WEAK_FUNC(sub_83BD0284);
PPC_FUNC_IMPL(__imp__sub_83BD0284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

