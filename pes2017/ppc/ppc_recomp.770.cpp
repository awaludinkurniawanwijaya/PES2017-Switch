#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C3DFCC"))) PPC_WEAK_FUNC(sub_83C3DFCC);
PPC_FUNC_IMPL(__imp__sub_83C3DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3DFD0"))) PPC_WEAK_FUNC(sub_83C3DFD0);
PPC_FUNC_IMPL(__imp__sub_83C3DFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3DFDC"))) PPC_WEAK_FUNC(sub_83C3DFDC);
PPC_FUNC_IMPL(__imp__sub_83C3DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3DFE0"))) PPC_WEAK_FUNC(sub_83C3DFE0);
PPC_FUNC_IMPL(__imp__sub_83C3DFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3DFEC"))) PPC_WEAK_FUNC(sub_83C3DFEC);
PPC_FUNC_IMPL(__imp__sub_83C3DFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3DFF0"))) PPC_WEAK_FUNC(sub_83C3DFF0);
PPC_FUNC_IMPL(__imp__sub_83C3DFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3DFFC"))) PPC_WEAK_FUNC(sub_83C3DFFC);
PPC_FUNC_IMPL(__imp__sub_83C3DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E000"))) PPC_WEAK_FUNC(sub_83C3E000);
PPC_FUNC_IMPL(__imp__sub_83C3E000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31256
	ctx.r3.s64 = ctx.r11.s64 + -31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E00C"))) PPC_WEAK_FUNC(sub_83C3E00C);
PPC_FUNC_IMPL(__imp__sub_83C3E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E010"))) PPC_WEAK_FUNC(sub_83C3E010);
PPC_FUNC_IMPL(__imp__sub_83C3E010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31248
	ctx.r3.s64 = ctx.r11.s64 + -31248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E01C"))) PPC_WEAK_FUNC(sub_83C3E01C);
PPC_FUNC_IMPL(__imp__sub_83C3E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E020"))) PPC_WEAK_FUNC(sub_83C3E020);
PPC_FUNC_IMPL(__imp__sub_83C3E020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31240
	ctx.r3.s64 = ctx.r11.s64 + -31240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E02C"))) PPC_WEAK_FUNC(sub_83C3E02C);
PPC_FUNC_IMPL(__imp__sub_83C3E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E030"))) PPC_WEAK_FUNC(sub_83C3E030);
PPC_FUNC_IMPL(__imp__sub_83C3E030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31232
	ctx.r3.s64 = ctx.r11.s64 + -31232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E03C"))) PPC_WEAK_FUNC(sub_83C3E03C);
PPC_FUNC_IMPL(__imp__sub_83C3E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E040"))) PPC_WEAK_FUNC(sub_83C3E040);
PPC_FUNC_IMPL(__imp__sub_83C3E040) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-30167
	ctx.r3.s64 = ctx.r11.s64 + -30167;
	// bl 0x83523120
	ctx.lr = 0x83C3E058;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-31224
	ctx.r3.s64 = ctx.r10.s64 + -31224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E064;
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

__attribute__((alias("__imp__sub_83C3E074"))) PPC_WEAK_FUNC(sub_83C3E074);
PPC_FUNC_IMPL(__imp__sub_83C3E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E078"))) PPC_WEAK_FUNC(sub_83C3E078);
PPC_FUNC_IMPL(__imp__sub_83C3E078) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30152
	ctx.r7.s64 = ctx.r8.s64 + -30152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30152(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E0A0"))) PPC_WEAK_FUNC(sub_83C3E0A0);
PPC_FUNC_IMPL(__imp__sub_83C3E0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-15056
	ctx.r6.s64 = ctx.r7.s64 + -15056;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15128(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15128);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30152);
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
	// std r9,-15056(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15056, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E0E8"))) PPC_WEAK_FUNC(sub_83C3E0E8);
PPC_FUNC_IMPL(__imp__sub_83C3E0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31208
	ctx.r3.s64 = ctx.r11.s64 + -31208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E0F4"))) PPC_WEAK_FUNC(sub_83C3E0F4);
PPC_FUNC_IMPL(__imp__sub_83C3E0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E0F8"))) PPC_WEAK_FUNC(sub_83C3E0F8);
PPC_FUNC_IMPL(__imp__sub_83C3E0F8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-30144
	ctx.r3.s64 = ctx.r11.s64 + -30144;
	// bl 0x8259af80
	ctx.lr = 0x83C3E110;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-31192
	ctx.r3.s64 = ctx.r10.s64 + -31192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E11C;
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

__attribute__((alias("__imp__sub_83C3E12C"))) PPC_WEAK_FUNC(sub_83C3E12C);
PPC_FUNC_IMPL(__imp__sub_83C3E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E130"))) PPC_WEAK_FUNC(sub_83C3E130);
PPC_FUNC_IMPL(__imp__sub_83C3E130) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30164
	ctx.r11.s64 = ctx.r8.s64 + -30164;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-15080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15080);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31200
	ctx.r3.s64 = ctx.r6.s64 + -31200;
	// stw r10,-30164(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30164, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E160"))) PPC_WEAK_FUNC(sub_83C3E160);
PPC_FUNC_IMPL(__imp__sub_83C3E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31184
	ctx.r3.s64 = ctx.r11.s64 + -31184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E16C"))) PPC_WEAK_FUNC(sub_83C3E16C);
PPC_FUNC_IMPL(__imp__sub_83C3E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E170"))) PPC_WEAK_FUNC(sub_83C3E170);
PPC_FUNC_IMPL(__imp__sub_83C3E170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31176
	ctx.r3.s64 = ctx.r11.s64 + -31176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E17C"))) PPC_WEAK_FUNC(sub_83C3E17C);
PPC_FUNC_IMPL(__imp__sub_83C3E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E180"))) PPC_WEAK_FUNC(sub_83C3E180);
PPC_FUNC_IMPL(__imp__sub_83C3E180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31168
	ctx.r3.s64 = ctx.r11.s64 + -31168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E18C"))) PPC_WEAK_FUNC(sub_83C3E18C);
PPC_FUNC_IMPL(__imp__sub_83C3E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E190"))) PPC_WEAK_FUNC(sub_83C3E190);
PPC_FUNC_IMPL(__imp__sub_83C3E190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31160
	ctx.r3.s64 = ctx.r11.s64 + -31160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E19C"))) PPC_WEAK_FUNC(sub_83C3E19C);
PPC_FUNC_IMPL(__imp__sub_83C3E19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E1A0"))) PPC_WEAK_FUNC(sub_83C3E1A0);
PPC_FUNC_IMPL(__imp__sub_83C3E1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31152
	ctx.r3.s64 = ctx.r11.s64 + -31152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E1AC"))) PPC_WEAK_FUNC(sub_83C3E1AC);
PPC_FUNC_IMPL(__imp__sub_83C3E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E1B0"))) PPC_WEAK_FUNC(sub_83C3E1B0);
PPC_FUNC_IMPL(__imp__sub_83C3E1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31144
	ctx.r3.s64 = ctx.r11.s64 + -31144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E1BC"))) PPC_WEAK_FUNC(sub_83C3E1BC);
PPC_FUNC_IMPL(__imp__sub_83C3E1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E1C0"))) PPC_WEAK_FUNC(sub_83C3E1C0);
PPC_FUNC_IMPL(__imp__sub_83C3E1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31136
	ctx.r3.s64 = ctx.r11.s64 + -31136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E1CC"))) PPC_WEAK_FUNC(sub_83C3E1CC);
PPC_FUNC_IMPL(__imp__sub_83C3E1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E1D0"))) PPC_WEAK_FUNC(sub_83C3E1D0);
PPC_FUNC_IMPL(__imp__sub_83C3E1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31128
	ctx.r3.s64 = ctx.r11.s64 + -31128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E1DC"))) PPC_WEAK_FUNC(sub_83C3E1DC);
PPC_FUNC_IMPL(__imp__sub_83C3E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E1E0"))) PPC_WEAK_FUNC(sub_83C3E1E0);
PPC_FUNC_IMPL(__imp__sub_83C3E1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31120
	ctx.r3.s64 = ctx.r11.s64 + -31120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E1EC"))) PPC_WEAK_FUNC(sub_83C3E1EC);
PPC_FUNC_IMPL(__imp__sub_83C3E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E1F0"))) PPC_WEAK_FUNC(sub_83C3E1F0);
PPC_FUNC_IMPL(__imp__sub_83C3E1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31112
	ctx.r3.s64 = ctx.r11.s64 + -31112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E1FC"))) PPC_WEAK_FUNC(sub_83C3E1FC);
PPC_FUNC_IMPL(__imp__sub_83C3E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E200"))) PPC_WEAK_FUNC(sub_83C3E200);
PPC_FUNC_IMPL(__imp__sub_83C3E200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31104
	ctx.r3.s64 = ctx.r11.s64 + -31104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E20C"))) PPC_WEAK_FUNC(sub_83C3E20C);
PPC_FUNC_IMPL(__imp__sub_83C3E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E210"))) PPC_WEAK_FUNC(sub_83C3E210);
PPC_FUNC_IMPL(__imp__sub_83C3E210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31096
	ctx.r3.s64 = ctx.r11.s64 + -31096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E21C"))) PPC_WEAK_FUNC(sub_83C3E21C);
PPC_FUNC_IMPL(__imp__sub_83C3E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E220"))) PPC_WEAK_FUNC(sub_83C3E220);
PPC_FUNC_IMPL(__imp__sub_83C3E220) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-29800
	ctx.r3.s64 = ctx.r11.s64 + -29800;
	// bl 0x83523120
	ctx.lr = 0x83C3E238;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-31088
	ctx.r3.s64 = ctx.r10.s64 + -31088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E244;
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

__attribute__((alias("__imp__sub_83C3E254"))) PPC_WEAK_FUNC(sub_83C3E254);
PPC_FUNC_IMPL(__imp__sub_83C3E254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E258"))) PPC_WEAK_FUNC(sub_83C3E258);
PPC_FUNC_IMPL(__imp__sub_83C3E258) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29784
	ctx.r7.s64 = ctx.r8.s64 + -29784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29784(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E280"))) PPC_WEAK_FUNC(sub_83C3E280);
PPC_FUNC_IMPL(__imp__sub_83C3E280) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-14928
	ctx.r6.s64 = ctx.r7.s64 + -14928;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15000(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15000);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29784);
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
	// std r9,-14928(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14928, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E2C8"))) PPC_WEAK_FUNC(sub_83C3E2C8);
PPC_FUNC_IMPL(__imp__sub_83C3E2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31072
	ctx.r3.s64 = ctx.r11.s64 + -31072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E2D4"))) PPC_WEAK_FUNC(sub_83C3E2D4);
PPC_FUNC_IMPL(__imp__sub_83C3E2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E2D8"))) PPC_WEAK_FUNC(sub_83C3E2D8);
PPC_FUNC_IMPL(__imp__sub_83C3E2D8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x8259af80
	ctx.lr = 0x83C3E2F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-31056
	ctx.r3.s64 = ctx.r10.s64 + -31056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E2FC;
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

__attribute__((alias("__imp__sub_83C3E30C"))) PPC_WEAK_FUNC(sub_83C3E30C);
PPC_FUNC_IMPL(__imp__sub_83C3E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E310"))) PPC_WEAK_FUNC(sub_83C3E310);
PPC_FUNC_IMPL(__imp__sub_83C3E310) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29796
	ctx.r11.s64 = ctx.r8.s64 + -29796;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-14952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31064
	ctx.r3.s64 = ctx.r6.s64 + -31064;
	// stw r10,-29796(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29796, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E340"))) PPC_WEAK_FUNC(sub_83C3E340);
PPC_FUNC_IMPL(__imp__sub_83C3E340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31048
	ctx.r3.s64 = ctx.r11.s64 + -31048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E34C"))) PPC_WEAK_FUNC(sub_83C3E34C);
PPC_FUNC_IMPL(__imp__sub_83C3E34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E350"))) PPC_WEAK_FUNC(sub_83C3E350);
PPC_FUNC_IMPL(__imp__sub_83C3E350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31040
	ctx.r3.s64 = ctx.r11.s64 + -31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E35C"))) PPC_WEAK_FUNC(sub_83C3E35C);
PPC_FUNC_IMPL(__imp__sub_83C3E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E360"))) PPC_WEAK_FUNC(sub_83C3E360);
PPC_FUNC_IMPL(__imp__sub_83C3E360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31032
	ctx.r3.s64 = ctx.r11.s64 + -31032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E36C"))) PPC_WEAK_FUNC(sub_83C3E36C);
PPC_FUNC_IMPL(__imp__sub_83C3E36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E370"))) PPC_WEAK_FUNC(sub_83C3E370);
PPC_FUNC_IMPL(__imp__sub_83C3E370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31024
	ctx.r3.s64 = ctx.r11.s64 + -31024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E37C"))) PPC_WEAK_FUNC(sub_83C3E37C);
PPC_FUNC_IMPL(__imp__sub_83C3E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E380"))) PPC_WEAK_FUNC(sub_83C3E380);
PPC_FUNC_IMPL(__imp__sub_83C3E380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31016
	ctx.r3.s64 = ctx.r11.s64 + -31016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E38C"))) PPC_WEAK_FUNC(sub_83C3E38C);
PPC_FUNC_IMPL(__imp__sub_83C3E38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E390"))) PPC_WEAK_FUNC(sub_83C3E390);
PPC_FUNC_IMPL(__imp__sub_83C3E390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31008
	ctx.r3.s64 = ctx.r11.s64 + -31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E39C"))) PPC_WEAK_FUNC(sub_83C3E39C);
PPC_FUNC_IMPL(__imp__sub_83C3E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E3A0"))) PPC_WEAK_FUNC(sub_83C3E3A0);
PPC_FUNC_IMPL(__imp__sub_83C3E3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-31000
	ctx.r3.s64 = ctx.r11.s64 + -31000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E3AC"))) PPC_WEAK_FUNC(sub_83C3E3AC);
PPC_FUNC_IMPL(__imp__sub_83C3E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E3B0"))) PPC_WEAK_FUNC(sub_83C3E3B0);
PPC_FUNC_IMPL(__imp__sub_83C3E3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30992
	ctx.r3.s64 = ctx.r11.s64 + -30992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E3BC"))) PPC_WEAK_FUNC(sub_83C3E3BC);
PPC_FUNC_IMPL(__imp__sub_83C3E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E3C0"))) PPC_WEAK_FUNC(sub_83C3E3C0);
PPC_FUNC_IMPL(__imp__sub_83C3E3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30984
	ctx.r3.s64 = ctx.r11.s64 + -30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E3CC"))) PPC_WEAK_FUNC(sub_83C3E3CC);
PPC_FUNC_IMPL(__imp__sub_83C3E3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E3D0"))) PPC_WEAK_FUNC(sub_83C3E3D0);
PPC_FUNC_IMPL(__imp__sub_83C3E3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30976
	ctx.r3.s64 = ctx.r11.s64 + -30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E3DC"))) PPC_WEAK_FUNC(sub_83C3E3DC);
PPC_FUNC_IMPL(__imp__sub_83C3E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E3E0"))) PPC_WEAK_FUNC(sub_83C3E3E0);
PPC_FUNC_IMPL(__imp__sub_83C3E3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30968
	ctx.r3.s64 = ctx.r11.s64 + -30968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E3EC"))) PPC_WEAK_FUNC(sub_83C3E3EC);
PPC_FUNC_IMPL(__imp__sub_83C3E3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E3F0"))) PPC_WEAK_FUNC(sub_83C3E3F0);
PPC_FUNC_IMPL(__imp__sub_83C3E3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30960
	ctx.r3.s64 = ctx.r11.s64 + -30960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E3FC"))) PPC_WEAK_FUNC(sub_83C3E3FC);
PPC_FUNC_IMPL(__imp__sub_83C3E3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E400"))) PPC_WEAK_FUNC(sub_83C3E400);
PPC_FUNC_IMPL(__imp__sub_83C3E400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30952
	ctx.r3.s64 = ctx.r11.s64 + -30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E40C"))) PPC_WEAK_FUNC(sub_83C3E40C);
PPC_FUNC_IMPL(__imp__sub_83C3E40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E410"))) PPC_WEAK_FUNC(sub_83C3E410);
PPC_FUNC_IMPL(__imp__sub_83C3E410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30944
	ctx.r3.s64 = ctx.r11.s64 + -30944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E41C"))) PPC_WEAK_FUNC(sub_83C3E41C);
PPC_FUNC_IMPL(__imp__sub_83C3E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E420"))) PPC_WEAK_FUNC(sub_83C3E420);
PPC_FUNC_IMPL(__imp__sub_83C3E420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30936
	ctx.r3.s64 = ctx.r11.s64 + -30936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E42C"))) PPC_WEAK_FUNC(sub_83C3E42C);
PPC_FUNC_IMPL(__imp__sub_83C3E42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E430"))) PPC_WEAK_FUNC(sub_83C3E430);
PPC_FUNC_IMPL(__imp__sub_83C3E430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30928
	ctx.r3.s64 = ctx.r11.s64 + -30928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E43C"))) PPC_WEAK_FUNC(sub_83C3E43C);
PPC_FUNC_IMPL(__imp__sub_83C3E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E440"))) PPC_WEAK_FUNC(sub_83C3E440);
PPC_FUNC_IMPL(__imp__sub_83C3E440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30920
	ctx.r3.s64 = ctx.r11.s64 + -30920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E44C"))) PPC_WEAK_FUNC(sub_83C3E44C);
PPC_FUNC_IMPL(__imp__sub_83C3E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E450"))) PPC_WEAK_FUNC(sub_83C3E450);
PPC_FUNC_IMPL(__imp__sub_83C3E450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30912
	ctx.r3.s64 = ctx.r11.s64 + -30912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E45C"))) PPC_WEAK_FUNC(sub_83C3E45C);
PPC_FUNC_IMPL(__imp__sub_83C3E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E460"))) PPC_WEAK_FUNC(sub_83C3E460);
PPC_FUNC_IMPL(__imp__sub_83C3E460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30904
	ctx.r3.s64 = ctx.r11.s64 + -30904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E46C"))) PPC_WEAK_FUNC(sub_83C3E46C);
PPC_FUNC_IMPL(__imp__sub_83C3E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E470"))) PPC_WEAK_FUNC(sub_83C3E470);
PPC_FUNC_IMPL(__imp__sub_83C3E470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30896
	ctx.r3.s64 = ctx.r11.s64 + -30896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E47C"))) PPC_WEAK_FUNC(sub_83C3E47C);
PPC_FUNC_IMPL(__imp__sub_83C3E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E480"))) PPC_WEAK_FUNC(sub_83C3E480);
PPC_FUNC_IMPL(__imp__sub_83C3E480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E48C"))) PPC_WEAK_FUNC(sub_83C3E48C);
PPC_FUNC_IMPL(__imp__sub_83C3E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E490"))) PPC_WEAK_FUNC(sub_83C3E490);
PPC_FUNC_IMPL(__imp__sub_83C3E490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E49C"))) PPC_WEAK_FUNC(sub_83C3E49C);
PPC_FUNC_IMPL(__imp__sub_83C3E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E4A0"))) PPC_WEAK_FUNC(sub_83C3E4A0);
PPC_FUNC_IMPL(__imp__sub_83C3E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E4AC"))) PPC_WEAK_FUNC(sub_83C3E4AC);
PPC_FUNC_IMPL(__imp__sub_83C3E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E4B0"))) PPC_WEAK_FUNC(sub_83C3E4B0);
PPC_FUNC_IMPL(__imp__sub_83C3E4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30864
	ctx.r3.s64 = ctx.r11.s64 + -30864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E4BC"))) PPC_WEAK_FUNC(sub_83C3E4BC);
PPC_FUNC_IMPL(__imp__sub_83C3E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E4C0"))) PPC_WEAK_FUNC(sub_83C3E4C0);
PPC_FUNC_IMPL(__imp__sub_83C3E4C0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-29424
	ctx.r3.s64 = ctx.r11.s64 + -29424;
	// bl 0x83523120
	ctx.lr = 0x83C3E4D8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-30856
	ctx.r3.s64 = ctx.r10.s64 + -30856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E4E4;
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

__attribute__((alias("__imp__sub_83C3E4F4"))) PPC_WEAK_FUNC(sub_83C3E4F4);
PPC_FUNC_IMPL(__imp__sub_83C3E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E4F8"))) PPC_WEAK_FUNC(sub_83C3E4F8);
PPC_FUNC_IMPL(__imp__sub_83C3E4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29408
	ctx.r7.s64 = ctx.r8.s64 + -29408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E520"))) PPC_WEAK_FUNC(sub_83C3E520);
PPC_FUNC_IMPL(__imp__sub_83C3E520) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-14696
	ctx.r6.s64 = ctx.r7.s64 + -14696;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14768(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14768);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29408);
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
	// std r9,-14696(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14696, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E568"))) PPC_WEAK_FUNC(sub_83C3E568);
PPC_FUNC_IMPL(__imp__sub_83C3E568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30840
	ctx.r3.s64 = ctx.r11.s64 + -30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E574"))) PPC_WEAK_FUNC(sub_83C3E574);
PPC_FUNC_IMPL(__imp__sub_83C3E574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E578"))) PPC_WEAK_FUNC(sub_83C3E578);
PPC_FUNC_IMPL(__imp__sub_83C3E578) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-29400
	ctx.r3.s64 = ctx.r11.s64 + -29400;
	// bl 0x8259af80
	ctx.lr = 0x83C3E590;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-30824
	ctx.r3.s64 = ctx.r10.s64 + -30824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E59C;
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

__attribute__((alias("__imp__sub_83C3E5AC"))) PPC_WEAK_FUNC(sub_83C3E5AC);
PPC_FUNC_IMPL(__imp__sub_83C3E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E5B0"))) PPC_WEAK_FUNC(sub_83C3E5B0);
PPC_FUNC_IMPL(__imp__sub_83C3E5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29420
	ctx.r11.s64 = ctx.r8.s64 + -29420;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-14720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14720);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30832
	ctx.r3.s64 = ctx.r6.s64 + -30832;
	// stw r10,-29420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29420, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E5E0"))) PPC_WEAK_FUNC(sub_83C3E5E0);
PPC_FUNC_IMPL(__imp__sub_83C3E5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30816
	ctx.r3.s64 = ctx.r11.s64 + -30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E5EC"))) PPC_WEAK_FUNC(sub_83C3E5EC);
PPC_FUNC_IMPL(__imp__sub_83C3E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E5F0"))) PPC_WEAK_FUNC(sub_83C3E5F0);
PPC_FUNC_IMPL(__imp__sub_83C3E5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30808
	ctx.r3.s64 = ctx.r11.s64 + -30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E5FC"))) PPC_WEAK_FUNC(sub_83C3E5FC);
PPC_FUNC_IMPL(__imp__sub_83C3E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E600"))) PPC_WEAK_FUNC(sub_83C3E600);
PPC_FUNC_IMPL(__imp__sub_83C3E600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30800
	ctx.r3.s64 = ctx.r11.s64 + -30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E60C"))) PPC_WEAK_FUNC(sub_83C3E60C);
PPC_FUNC_IMPL(__imp__sub_83C3E60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E610"))) PPC_WEAK_FUNC(sub_83C3E610);
PPC_FUNC_IMPL(__imp__sub_83C3E610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30792
	ctx.r3.s64 = ctx.r11.s64 + -30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E61C"))) PPC_WEAK_FUNC(sub_83C3E61C);
PPC_FUNC_IMPL(__imp__sub_83C3E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E620"))) PPC_WEAK_FUNC(sub_83C3E620);
PPC_FUNC_IMPL(__imp__sub_83C3E620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30784
	ctx.r3.s64 = ctx.r11.s64 + -30784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E62C"))) PPC_WEAK_FUNC(sub_83C3E62C);
PPC_FUNC_IMPL(__imp__sub_83C3E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E630"))) PPC_WEAK_FUNC(sub_83C3E630);
PPC_FUNC_IMPL(__imp__sub_83C3E630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30776
	ctx.r3.s64 = ctx.r11.s64 + -30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E63C"))) PPC_WEAK_FUNC(sub_83C3E63C);
PPC_FUNC_IMPL(__imp__sub_83C3E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E640"))) PPC_WEAK_FUNC(sub_83C3E640);
PPC_FUNC_IMPL(__imp__sub_83C3E640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30768
	ctx.r3.s64 = ctx.r11.s64 + -30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E64C"))) PPC_WEAK_FUNC(sub_83C3E64C);
PPC_FUNC_IMPL(__imp__sub_83C3E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E650"))) PPC_WEAK_FUNC(sub_83C3E650);
PPC_FUNC_IMPL(__imp__sub_83C3E650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30760
	ctx.r3.s64 = ctx.r11.s64 + -30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E65C"))) PPC_WEAK_FUNC(sub_83C3E65C);
PPC_FUNC_IMPL(__imp__sub_83C3E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E660"))) PPC_WEAK_FUNC(sub_83C3E660);
PPC_FUNC_IMPL(__imp__sub_83C3E660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30752
	ctx.r3.s64 = ctx.r11.s64 + -30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E66C"))) PPC_WEAK_FUNC(sub_83C3E66C);
PPC_FUNC_IMPL(__imp__sub_83C3E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E670"))) PPC_WEAK_FUNC(sub_83C3E670);
PPC_FUNC_IMPL(__imp__sub_83C3E670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E67C"))) PPC_WEAK_FUNC(sub_83C3E67C);
PPC_FUNC_IMPL(__imp__sub_83C3E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E680"))) PPC_WEAK_FUNC(sub_83C3E680);
PPC_FUNC_IMPL(__imp__sub_83C3E680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30736
	ctx.r3.s64 = ctx.r11.s64 + -30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E68C"))) PPC_WEAK_FUNC(sub_83C3E68C);
PPC_FUNC_IMPL(__imp__sub_83C3E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E690"))) PPC_WEAK_FUNC(sub_83C3E690);
PPC_FUNC_IMPL(__imp__sub_83C3E690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30728
	ctx.r3.s64 = ctx.r11.s64 + -30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E69C"))) PPC_WEAK_FUNC(sub_83C3E69C);
PPC_FUNC_IMPL(__imp__sub_83C3E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E6A0"))) PPC_WEAK_FUNC(sub_83C3E6A0);
PPC_FUNC_IMPL(__imp__sub_83C3E6A0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-29056
	ctx.r3.s64 = ctx.r11.s64 + -29056;
	// bl 0x83523120
	ctx.lr = 0x83C3E6B8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-30720
	ctx.r3.s64 = ctx.r10.s64 + -30720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E6C4;
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

__attribute__((alias("__imp__sub_83C3E6D4"))) PPC_WEAK_FUNC(sub_83C3E6D4);
PPC_FUNC_IMPL(__imp__sub_83C3E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E6D8"))) PPC_WEAK_FUNC(sub_83C3E6D8);
PPC_FUNC_IMPL(__imp__sub_83C3E6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29040
	ctx.r7.s64 = ctx.r8.s64 + -29040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29040(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E700"))) PPC_WEAK_FUNC(sub_83C3E700);
PPC_FUNC_IMPL(__imp__sub_83C3E700) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-14568
	ctx.r6.s64 = ctx.r7.s64 + -14568;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14640(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14640);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29040);
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
	// std r9,-14568(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14568, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E748"))) PPC_WEAK_FUNC(sub_83C3E748);
PPC_FUNC_IMPL(__imp__sub_83C3E748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30704
	ctx.r3.s64 = ctx.r11.s64 + -30704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E754"))) PPC_WEAK_FUNC(sub_83C3E754);
PPC_FUNC_IMPL(__imp__sub_83C3E754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E758"))) PPC_WEAK_FUNC(sub_83C3E758);
PPC_FUNC_IMPL(__imp__sub_83C3E758) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-29032
	ctx.r3.s64 = ctx.r11.s64 + -29032;
	// bl 0x8259af80
	ctx.lr = 0x83C3E770;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-30688
	ctx.r3.s64 = ctx.r10.s64 + -30688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E77C;
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

__attribute__((alias("__imp__sub_83C3E78C"))) PPC_WEAK_FUNC(sub_83C3E78C);
PPC_FUNC_IMPL(__imp__sub_83C3E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E790"))) PPC_WEAK_FUNC(sub_83C3E790);
PPC_FUNC_IMPL(__imp__sub_83C3E790) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29052
	ctx.r11.s64 = ctx.r8.s64 + -29052;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14592);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30696
	ctx.r3.s64 = ctx.r6.s64 + -30696;
	// stw r10,-29052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29052, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E7C0"))) PPC_WEAK_FUNC(sub_83C3E7C0);
PPC_FUNC_IMPL(__imp__sub_83C3E7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30680
	ctx.r3.s64 = ctx.r11.s64 + -30680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E7CC"))) PPC_WEAK_FUNC(sub_83C3E7CC);
PPC_FUNC_IMPL(__imp__sub_83C3E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E7D0"))) PPC_WEAK_FUNC(sub_83C3E7D0);
PPC_FUNC_IMPL(__imp__sub_83C3E7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30672
	ctx.r3.s64 = ctx.r11.s64 + -30672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E7DC"))) PPC_WEAK_FUNC(sub_83C3E7DC);
PPC_FUNC_IMPL(__imp__sub_83C3E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E7E0"))) PPC_WEAK_FUNC(sub_83C3E7E0);
PPC_FUNC_IMPL(__imp__sub_83C3E7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30664
	ctx.r3.s64 = ctx.r11.s64 + -30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E7EC"))) PPC_WEAK_FUNC(sub_83C3E7EC);
PPC_FUNC_IMPL(__imp__sub_83C3E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E7F0"))) PPC_WEAK_FUNC(sub_83C3E7F0);
PPC_FUNC_IMPL(__imp__sub_83C3E7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30656
	ctx.r3.s64 = ctx.r11.s64 + -30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E7FC"))) PPC_WEAK_FUNC(sub_83C3E7FC);
PPC_FUNC_IMPL(__imp__sub_83C3E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E800"))) PPC_WEAK_FUNC(sub_83C3E800);
PPC_FUNC_IMPL(__imp__sub_83C3E800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30648
	ctx.r3.s64 = ctx.r11.s64 + -30648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E80C"))) PPC_WEAK_FUNC(sub_83C3E80C);
PPC_FUNC_IMPL(__imp__sub_83C3E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E810"))) PPC_WEAK_FUNC(sub_83C3E810);
PPC_FUNC_IMPL(__imp__sub_83C3E810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30640
	ctx.r3.s64 = ctx.r11.s64 + -30640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E81C"))) PPC_WEAK_FUNC(sub_83C3E81C);
PPC_FUNC_IMPL(__imp__sub_83C3E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E820"))) PPC_WEAK_FUNC(sub_83C3E820);
PPC_FUNC_IMPL(__imp__sub_83C3E820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30632
	ctx.r3.s64 = ctx.r11.s64 + -30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E82C"))) PPC_WEAK_FUNC(sub_83C3E82C);
PPC_FUNC_IMPL(__imp__sub_83C3E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E830"))) PPC_WEAK_FUNC(sub_83C3E830);
PPC_FUNC_IMPL(__imp__sub_83C3E830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E83C"))) PPC_WEAK_FUNC(sub_83C3E83C);
PPC_FUNC_IMPL(__imp__sub_83C3E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E840"))) PPC_WEAK_FUNC(sub_83C3E840);
PPC_FUNC_IMPL(__imp__sub_83C3E840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30616
	ctx.r3.s64 = ctx.r11.s64 + -30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E84C"))) PPC_WEAK_FUNC(sub_83C3E84C);
PPC_FUNC_IMPL(__imp__sub_83C3E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E850"))) PPC_WEAK_FUNC(sub_83C3E850);
PPC_FUNC_IMPL(__imp__sub_83C3E850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E85C"))) PPC_WEAK_FUNC(sub_83C3E85C);
PPC_FUNC_IMPL(__imp__sub_83C3E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E860"))) PPC_WEAK_FUNC(sub_83C3E860);
PPC_FUNC_IMPL(__imp__sub_83C3E860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E86C"))) PPC_WEAK_FUNC(sub_83C3E86C);
PPC_FUNC_IMPL(__imp__sub_83C3E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E870"))) PPC_WEAK_FUNC(sub_83C3E870);
PPC_FUNC_IMPL(__imp__sub_83C3E870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30592
	ctx.r3.s64 = ctx.r11.s64 + -30592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E87C"))) PPC_WEAK_FUNC(sub_83C3E87C);
PPC_FUNC_IMPL(__imp__sub_83C3E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E880"))) PPC_WEAK_FUNC(sub_83C3E880);
PPC_FUNC_IMPL(__imp__sub_83C3E880) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-28686
	ctx.r3.s64 = ctx.r11.s64 + -28686;
	// bl 0x83523120
	ctx.lr = 0x83C3E898;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-30584
	ctx.r3.s64 = ctx.r10.s64 + -30584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E8A4;
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

__attribute__((alias("__imp__sub_83C3E8B4"))) PPC_WEAK_FUNC(sub_83C3E8B4);
PPC_FUNC_IMPL(__imp__sub_83C3E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E8B8"))) PPC_WEAK_FUNC(sub_83C3E8B8);
PPC_FUNC_IMPL(__imp__sub_83C3E8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28544
	ctx.r7.s64 = ctx.r8.s64 + -28544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28544);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28544(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28544, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E8E0"))) PPC_WEAK_FUNC(sub_83C3E8E0);
PPC_FUNC_IMPL(__imp__sub_83C3E8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-14384
	ctx.r6.s64 = ctx.r7.s64 + -14384;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14456(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14456);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28544(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28544);
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
	// std r9,-14384(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3E928"))) PPC_WEAK_FUNC(sub_83C3E928);
PPC_FUNC_IMPL(__imp__sub_83C3E928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30568
	ctx.r3.s64 = ctx.r11.s64 + -30568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E934"))) PPC_WEAK_FUNC(sub_83C3E934);
PPC_FUNC_IMPL(__imp__sub_83C3E934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E938"))) PPC_WEAK_FUNC(sub_83C3E938);
PPC_FUNC_IMPL(__imp__sub_83C3E938) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-28536
	ctx.r3.s64 = ctx.r11.s64 + -28536;
	// bl 0x8259af80
	ctx.lr = 0x83C3E950;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-30536
	ctx.r3.s64 = ctx.r10.s64 + -30536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E95C;
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

__attribute__((alias("__imp__sub_83C3E96C"))) PPC_WEAK_FUNC(sub_83C3E96C);
PPC_FUNC_IMPL(__imp__sub_83C3E96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3E970"))) PPC_WEAK_FUNC(sub_83C3E970);
PPC_FUNC_IMPL(__imp__sub_83C3E970) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28556
	ctx.r11.s64 = ctx.r8.s64 + -28556;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-14408(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14408);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30560
	ctx.r3.s64 = ctx.r6.s64 + -30560;
	// stw r10,-28556(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3E9A0"))) PPC_WEAK_FUNC(sub_83C3E9A0);
PPC_FUNC_IMPL(__imp__sub_83C3E9A0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r4,r11,-30236
	ctx.r4.s64 = ctx.r11.s64 + -30236;
	// addi r3,r10,-14360
	ctx.r3.s64 = ctx.r10.s64 + -14360;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8259cc28
	ctx.lr = 0x83C3E9C4;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,-30528
	ctx.r3.s64 = ctx.r9.s64 + -30528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3E9D0;
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

__attribute__((alias("__imp__sub_83C3E9E0"))) PPC_WEAK_FUNC(sub_83C3E9E0);
PPC_FUNC_IMPL(__imp__sub_83C3E9E0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r4,r11,-30216
	ctx.r4.s64 = ctx.r11.s64 + -30216;
	// addi r3,r10,-14332
	ctx.r3.s64 = ctx.r10.s64 + -14332;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x8259cc28
	ctx.lr = 0x83C3EA04;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,-30424
	ctx.r3.s64 = ctx.r9.s64 + -30424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3EA10;
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

__attribute__((alias("__imp__sub_83C3EA20"))) PPC_WEAK_FUNC(sub_83C3EA20);
PPC_FUNC_IMPL(__imp__sub_83C3EA20) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-28684
	ctx.r3.s64 = ctx.r11.s64 + -28684;
	// bl 0x82ee2218
	ctx.lr = 0x83C3EA38;
	sub_82EE2218(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-30320
	ctx.r3.s64 = ctx.r10.s64 + -30320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3EA44;
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

__attribute__((alias("__imp__sub_83C3EA54"))) PPC_WEAK_FUNC(sub_83C3EA54);
PPC_FUNC_IMPL(__imp__sub_83C3EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EA58"))) PPC_WEAK_FUNC(sub_83C3EA58);
PPC_FUNC_IMPL(__imp__sub_83C3EA58) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-28192
	ctx.r3.s64 = ctx.r11.s64 + -28192;
	// bl 0x82596fa8
	ctx.lr = 0x83C3EA70;
	sub_82596FA8(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-30552
	ctx.r3.s64 = ctx.r10.s64 + -30552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3EA7C;
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

__attribute__((alias("__imp__sub_83C3EA8C"))) PPC_WEAK_FUNC(sub_83C3EA8C);
PPC_FUNC_IMPL(__imp__sub_83C3EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EA90"))) PPC_WEAK_FUNC(sub_83C3EA90);
PPC_FUNC_IMPL(__imp__sub_83C3EA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30304
	ctx.r3.s64 = ctx.r11.s64 + -30304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EA9C"))) PPC_WEAK_FUNC(sub_83C3EA9C);
PPC_FUNC_IMPL(__imp__sub_83C3EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EAA0"))) PPC_WEAK_FUNC(sub_83C3EAA0);
PPC_FUNC_IMPL(__imp__sub_83C3EAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30296
	ctx.r3.s64 = ctx.r11.s64 + -30296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EAAC"))) PPC_WEAK_FUNC(sub_83C3EAAC);
PPC_FUNC_IMPL(__imp__sub_83C3EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EAB0"))) PPC_WEAK_FUNC(sub_83C3EAB0);
PPC_FUNC_IMPL(__imp__sub_83C3EAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30288
	ctx.r3.s64 = ctx.r11.s64 + -30288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EABC"))) PPC_WEAK_FUNC(sub_83C3EABC);
PPC_FUNC_IMPL(__imp__sub_83C3EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EAC0"))) PPC_WEAK_FUNC(sub_83C3EAC0);
PPC_FUNC_IMPL(__imp__sub_83C3EAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30280
	ctx.r3.s64 = ctx.r11.s64 + -30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EACC"))) PPC_WEAK_FUNC(sub_83C3EACC);
PPC_FUNC_IMPL(__imp__sub_83C3EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EAD0"))) PPC_WEAK_FUNC(sub_83C3EAD0);
PPC_FUNC_IMPL(__imp__sub_83C3EAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30272
	ctx.r3.s64 = ctx.r11.s64 + -30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EADC"))) PPC_WEAK_FUNC(sub_83C3EADC);
PPC_FUNC_IMPL(__imp__sub_83C3EADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EAE0"))) PPC_WEAK_FUNC(sub_83C3EAE0);
PPC_FUNC_IMPL(__imp__sub_83C3EAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30264
	ctx.r3.s64 = ctx.r11.s64 + -30264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EAEC"))) PPC_WEAK_FUNC(sub_83C3EAEC);
PPC_FUNC_IMPL(__imp__sub_83C3EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EAF0"))) PPC_WEAK_FUNC(sub_83C3EAF0);
PPC_FUNC_IMPL(__imp__sub_83C3EAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30256
	ctx.r3.s64 = ctx.r11.s64 + -30256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EAFC"))) PPC_WEAK_FUNC(sub_83C3EAFC);
PPC_FUNC_IMPL(__imp__sub_83C3EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB00"))) PPC_WEAK_FUNC(sub_83C3EB00);
PPC_FUNC_IMPL(__imp__sub_83C3EB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30248
	ctx.r3.s64 = ctx.r11.s64 + -30248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB0C"))) PPC_WEAK_FUNC(sub_83C3EB0C);
PPC_FUNC_IMPL(__imp__sub_83C3EB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB10"))) PPC_WEAK_FUNC(sub_83C3EB10);
PPC_FUNC_IMPL(__imp__sub_83C3EB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30240
	ctx.r3.s64 = ctx.r11.s64 + -30240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB1C"))) PPC_WEAK_FUNC(sub_83C3EB1C);
PPC_FUNC_IMPL(__imp__sub_83C3EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB20"))) PPC_WEAK_FUNC(sub_83C3EB20);
PPC_FUNC_IMPL(__imp__sub_83C3EB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30232
	ctx.r3.s64 = ctx.r11.s64 + -30232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB2C"))) PPC_WEAK_FUNC(sub_83C3EB2C);
PPC_FUNC_IMPL(__imp__sub_83C3EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB30"))) PPC_WEAK_FUNC(sub_83C3EB30);
PPC_FUNC_IMPL(__imp__sub_83C3EB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30224
	ctx.r3.s64 = ctx.r11.s64 + -30224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB3C"))) PPC_WEAK_FUNC(sub_83C3EB3C);
PPC_FUNC_IMPL(__imp__sub_83C3EB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB40"))) PPC_WEAK_FUNC(sub_83C3EB40);
PPC_FUNC_IMPL(__imp__sub_83C3EB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30216
	ctx.r3.s64 = ctx.r11.s64 + -30216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB4C"))) PPC_WEAK_FUNC(sub_83C3EB4C);
PPC_FUNC_IMPL(__imp__sub_83C3EB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB50"))) PPC_WEAK_FUNC(sub_83C3EB50);
PPC_FUNC_IMPL(__imp__sub_83C3EB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30208
	ctx.r3.s64 = ctx.r11.s64 + -30208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB5C"))) PPC_WEAK_FUNC(sub_83C3EB5C);
PPC_FUNC_IMPL(__imp__sub_83C3EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB60"))) PPC_WEAK_FUNC(sub_83C3EB60);
PPC_FUNC_IMPL(__imp__sub_83C3EB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30200
	ctx.r3.s64 = ctx.r11.s64 + -30200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB6C"))) PPC_WEAK_FUNC(sub_83C3EB6C);
PPC_FUNC_IMPL(__imp__sub_83C3EB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB70"))) PPC_WEAK_FUNC(sub_83C3EB70);
PPC_FUNC_IMPL(__imp__sub_83C3EB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30192
	ctx.r3.s64 = ctx.r11.s64 + -30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB7C"))) PPC_WEAK_FUNC(sub_83C3EB7C);
PPC_FUNC_IMPL(__imp__sub_83C3EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB80"))) PPC_WEAK_FUNC(sub_83C3EB80);
PPC_FUNC_IMPL(__imp__sub_83C3EB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30184
	ctx.r3.s64 = ctx.r11.s64 + -30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB8C"))) PPC_WEAK_FUNC(sub_83C3EB8C);
PPC_FUNC_IMPL(__imp__sub_83C3EB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EB90"))) PPC_WEAK_FUNC(sub_83C3EB90);
PPC_FUNC_IMPL(__imp__sub_83C3EB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30176
	ctx.r3.s64 = ctx.r11.s64 + -30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EB9C"))) PPC_WEAK_FUNC(sub_83C3EB9C);
PPC_FUNC_IMPL(__imp__sub_83C3EB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EBA0"))) PPC_WEAK_FUNC(sub_83C3EBA0);
PPC_FUNC_IMPL(__imp__sub_83C3EBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30168
	ctx.r3.s64 = ctx.r11.s64 + -30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EBAC"))) PPC_WEAK_FUNC(sub_83C3EBAC);
PPC_FUNC_IMPL(__imp__sub_83C3EBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EBB0"))) PPC_WEAK_FUNC(sub_83C3EBB0);
PPC_FUNC_IMPL(__imp__sub_83C3EBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EBBC"))) PPC_WEAK_FUNC(sub_83C3EBBC);
PPC_FUNC_IMPL(__imp__sub_83C3EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EBC0"))) PPC_WEAK_FUNC(sub_83C3EBC0);
PPC_FUNC_IMPL(__imp__sub_83C3EBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30152
	ctx.r3.s64 = ctx.r11.s64 + -30152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EBCC"))) PPC_WEAK_FUNC(sub_83C3EBCC);
PPC_FUNC_IMPL(__imp__sub_83C3EBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EBD0"))) PPC_WEAK_FUNC(sub_83C3EBD0);
PPC_FUNC_IMPL(__imp__sub_83C3EBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30144
	ctx.r3.s64 = ctx.r11.s64 + -30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EBDC"))) PPC_WEAK_FUNC(sub_83C3EBDC);
PPC_FUNC_IMPL(__imp__sub_83C3EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EBE0"))) PPC_WEAK_FUNC(sub_83C3EBE0);
PPC_FUNC_IMPL(__imp__sub_83C3EBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30136
	ctx.r3.s64 = ctx.r11.s64 + -30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EBEC"))) PPC_WEAK_FUNC(sub_83C3EBEC);
PPC_FUNC_IMPL(__imp__sub_83C3EBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EBF0"))) PPC_WEAK_FUNC(sub_83C3EBF0);
PPC_FUNC_IMPL(__imp__sub_83C3EBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30128
	ctx.r3.s64 = ctx.r11.s64 + -30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EBFC"))) PPC_WEAK_FUNC(sub_83C3EBFC);
PPC_FUNC_IMPL(__imp__sub_83C3EBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC00"))) PPC_WEAK_FUNC(sub_83C3EC00);
PPC_FUNC_IMPL(__imp__sub_83C3EC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30120
	ctx.r3.s64 = ctx.r11.s64 + -30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC0C"))) PPC_WEAK_FUNC(sub_83C3EC0C);
PPC_FUNC_IMPL(__imp__sub_83C3EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC10"))) PPC_WEAK_FUNC(sub_83C3EC10);
PPC_FUNC_IMPL(__imp__sub_83C3EC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30112
	ctx.r3.s64 = ctx.r11.s64 + -30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC1C"))) PPC_WEAK_FUNC(sub_83C3EC1C);
PPC_FUNC_IMPL(__imp__sub_83C3EC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC20"))) PPC_WEAK_FUNC(sub_83C3EC20);
PPC_FUNC_IMPL(__imp__sub_83C3EC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30104
	ctx.r3.s64 = ctx.r11.s64 + -30104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC2C"))) PPC_WEAK_FUNC(sub_83C3EC2C);
PPC_FUNC_IMPL(__imp__sub_83C3EC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC30"))) PPC_WEAK_FUNC(sub_83C3EC30);
PPC_FUNC_IMPL(__imp__sub_83C3EC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30096
	ctx.r3.s64 = ctx.r11.s64 + -30096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC3C"))) PPC_WEAK_FUNC(sub_83C3EC3C);
PPC_FUNC_IMPL(__imp__sub_83C3EC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC40"))) PPC_WEAK_FUNC(sub_83C3EC40);
PPC_FUNC_IMPL(__imp__sub_83C3EC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30088
	ctx.r3.s64 = ctx.r11.s64 + -30088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC4C"))) PPC_WEAK_FUNC(sub_83C3EC4C);
PPC_FUNC_IMPL(__imp__sub_83C3EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC50"))) PPC_WEAK_FUNC(sub_83C3EC50);
PPC_FUNC_IMPL(__imp__sub_83C3EC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30080
	ctx.r3.s64 = ctx.r11.s64 + -30080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC5C"))) PPC_WEAK_FUNC(sub_83C3EC5C);
PPC_FUNC_IMPL(__imp__sub_83C3EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC60"))) PPC_WEAK_FUNC(sub_83C3EC60);
PPC_FUNC_IMPL(__imp__sub_83C3EC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30072
	ctx.r3.s64 = ctx.r11.s64 + -30072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC6C"))) PPC_WEAK_FUNC(sub_83C3EC6C);
PPC_FUNC_IMPL(__imp__sub_83C3EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC70"))) PPC_WEAK_FUNC(sub_83C3EC70);
PPC_FUNC_IMPL(__imp__sub_83C3EC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30064
	ctx.r3.s64 = ctx.r11.s64 + -30064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC7C"))) PPC_WEAK_FUNC(sub_83C3EC7C);
PPC_FUNC_IMPL(__imp__sub_83C3EC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC80"))) PPC_WEAK_FUNC(sub_83C3EC80);
PPC_FUNC_IMPL(__imp__sub_83C3EC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30056
	ctx.r3.s64 = ctx.r11.s64 + -30056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC8C"))) PPC_WEAK_FUNC(sub_83C3EC8C);
PPC_FUNC_IMPL(__imp__sub_83C3EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3EC90"))) PPC_WEAK_FUNC(sub_83C3EC90);
PPC_FUNC_IMPL(__imp__sub_83C3EC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30048
	ctx.r3.s64 = ctx.r11.s64 + -30048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3EC9C"))) PPC_WEAK_FUNC(sub_83C3EC9C);
PPC_FUNC_IMPL(__imp__sub_83C3EC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3ECA0"))) PPC_WEAK_FUNC(sub_83C3ECA0);
PPC_FUNC_IMPL(__imp__sub_83C3ECA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30040
	ctx.r3.s64 = ctx.r11.s64 + -30040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3ECAC"))) PPC_WEAK_FUNC(sub_83C3ECAC);
PPC_FUNC_IMPL(__imp__sub_83C3ECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3ECB0"))) PPC_WEAK_FUNC(sub_83C3ECB0);
PPC_FUNC_IMPL(__imp__sub_83C3ECB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-30032
	ctx.r3.s64 = ctx.r11.s64 + -30032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3ECBC"))) PPC_WEAK_FUNC(sub_83C3ECBC);
PPC_FUNC_IMPL(__imp__sub_83C3ECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

