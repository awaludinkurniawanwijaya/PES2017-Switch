#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CE98B8"))) PPC_WEAK_FUNC(sub_83CE98B8);
PPC_FUNC_IMPL(__imp__sub_83CE98B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10840
	ctx.r3.s64 = ctx.r11.s64 + 10840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE98C4"))) PPC_WEAK_FUNC(sub_83CE98C4);
PPC_FUNC_IMPL(__imp__sub_83CE98C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE98C8"))) PPC_WEAK_FUNC(sub_83CE98C8);
PPC_FUNC_IMPL(__imp__sub_83CE98C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10848
	ctx.r3.s64 = ctx.r11.s64 + 10848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE98D4"))) PPC_WEAK_FUNC(sub_83CE98D4);
PPC_FUNC_IMPL(__imp__sub_83CE98D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE98D8"))) PPC_WEAK_FUNC(sub_83CE98D8);
PPC_FUNC_IMPL(__imp__sub_83CE98D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10856
	ctx.r3.s64 = ctx.r11.s64 + 10856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE98E4"))) PPC_WEAK_FUNC(sub_83CE98E4);
PPC_FUNC_IMPL(__imp__sub_83CE98E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE98E8"))) PPC_WEAK_FUNC(sub_83CE98E8);
PPC_FUNC_IMPL(__imp__sub_83CE98E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10864
	ctx.r3.s64 = ctx.r11.s64 + 10864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE98F4"))) PPC_WEAK_FUNC(sub_83CE98F4);
PPC_FUNC_IMPL(__imp__sub_83CE98F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE98F8"))) PPC_WEAK_FUNC(sub_83CE98F8);
PPC_FUNC_IMPL(__imp__sub_83CE98F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10872
	ctx.r3.s64 = ctx.r11.s64 + 10872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9904"))) PPC_WEAK_FUNC(sub_83CE9904);
PPC_FUNC_IMPL(__imp__sub_83CE9904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9908"))) PPC_WEAK_FUNC(sub_83CE9908);
PPC_FUNC_IMPL(__imp__sub_83CE9908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10880
	ctx.r3.s64 = ctx.r11.s64 + 10880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9914"))) PPC_WEAK_FUNC(sub_83CE9914);
PPC_FUNC_IMPL(__imp__sub_83CE9914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9918"))) PPC_WEAK_FUNC(sub_83CE9918);
PPC_FUNC_IMPL(__imp__sub_83CE9918) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-1176
	ctx.r3.s64 = ctx.r11.s64 + -1176;
	// bl 0x83523120
	ctx.lr = 0x83CE9930;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10888
	ctx.r3.s64 = ctx.r10.s64 + 10888;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE993C;
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

__attribute__((alias("__imp__sub_83CE994C"))) PPC_WEAK_FUNC(sub_83CE994C);
PPC_FUNC_IMPL(__imp__sub_83CE994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9950"))) PPC_WEAK_FUNC(sub_83CE9950);
PPC_FUNC_IMPL(__imp__sub_83CE9950) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1160
	ctx.r7.s64 = ctx.r8.s64 + -1160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1160(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9978"))) PPC_WEAK_FUNC(sub_83CE9978);
PPC_FUNC_IMPL(__imp__sub_83CE9978) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,-32704
	ctx.r6.s64 = ctx.r7.s64 + -32704;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32760(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32760);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1160);
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
	// std r9,-32704(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE99C0"))) PPC_WEAK_FUNC(sub_83CE99C0);
PPC_FUNC_IMPL(__imp__sub_83CE99C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10904
	ctx.r3.s64 = ctx.r11.s64 + 10904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE99CC"))) PPC_WEAK_FUNC(sub_83CE99CC);
PPC_FUNC_IMPL(__imp__sub_83CE99CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE99D0"))) PPC_WEAK_FUNC(sub_83CE99D0);
PPC_FUNC_IMPL(__imp__sub_83CE99D0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-1152
	ctx.r3.s64 = ctx.r11.s64 + -1152;
	// bl 0x8259af80
	ctx.lr = 0x83CE99E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10920
	ctx.r3.s64 = ctx.r10.s64 + 10920;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE99F4;
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

__attribute__((alias("__imp__sub_83CE9A04"))) PPC_WEAK_FUNC(sub_83CE9A04);
PPC_FUNC_IMPL(__imp__sub_83CE9A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9A08"))) PPC_WEAK_FUNC(sub_83CE9A08);
PPC_FUNC_IMPL(__imp__sub_83CE9A08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1172
	ctx.r11.s64 = ctx.r8.s64 + -1172;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-32728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32728);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10912
	ctx.r3.s64 = ctx.r6.s64 + 10912;
	// stw r10,-1172(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1172, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9A38"))) PPC_WEAK_FUNC(sub_83CE9A38);
PPC_FUNC_IMPL(__imp__sub_83CE9A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10928
	ctx.r3.s64 = ctx.r11.s64 + 10928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9A44"))) PPC_WEAK_FUNC(sub_83CE9A44);
PPC_FUNC_IMPL(__imp__sub_83CE9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9A48"))) PPC_WEAK_FUNC(sub_83CE9A48);
PPC_FUNC_IMPL(__imp__sub_83CE9A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10936
	ctx.r3.s64 = ctx.r11.s64 + 10936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9A54"))) PPC_WEAK_FUNC(sub_83CE9A54);
PPC_FUNC_IMPL(__imp__sub_83CE9A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9A58"))) PPC_WEAK_FUNC(sub_83CE9A58);
PPC_FUNC_IMPL(__imp__sub_83CE9A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10944
	ctx.r3.s64 = ctx.r11.s64 + 10944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9A64"))) PPC_WEAK_FUNC(sub_83CE9A64);
PPC_FUNC_IMPL(__imp__sub_83CE9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9A68"))) PPC_WEAK_FUNC(sub_83CE9A68);
PPC_FUNC_IMPL(__imp__sub_83CE9A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10952
	ctx.r3.s64 = ctx.r11.s64 + 10952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9A74"))) PPC_WEAK_FUNC(sub_83CE9A74);
PPC_FUNC_IMPL(__imp__sub_83CE9A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9A78"))) PPC_WEAK_FUNC(sub_83CE9A78);
PPC_FUNC_IMPL(__imp__sub_83CE9A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10960
	ctx.r3.s64 = ctx.r11.s64 + 10960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9A84"))) PPC_WEAK_FUNC(sub_83CE9A84);
PPC_FUNC_IMPL(__imp__sub_83CE9A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9A88"))) PPC_WEAK_FUNC(sub_83CE9A88);
PPC_FUNC_IMPL(__imp__sub_83CE9A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10968
	ctx.r3.s64 = ctx.r11.s64 + 10968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9A94"))) PPC_WEAK_FUNC(sub_83CE9A94);
PPC_FUNC_IMPL(__imp__sub_83CE9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9A98"))) PPC_WEAK_FUNC(sub_83CE9A98);
PPC_FUNC_IMPL(__imp__sub_83CE9A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10976
	ctx.r3.s64 = ctx.r11.s64 + 10976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9AA4"))) PPC_WEAK_FUNC(sub_83CE9AA4);
PPC_FUNC_IMPL(__imp__sub_83CE9AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9AA8"))) PPC_WEAK_FUNC(sub_83CE9AA8);
PPC_FUNC_IMPL(__imp__sub_83CE9AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10984
	ctx.r3.s64 = ctx.r11.s64 + 10984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9AB4"))) PPC_WEAK_FUNC(sub_83CE9AB4);
PPC_FUNC_IMPL(__imp__sub_83CE9AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9AB8"))) PPC_WEAK_FUNC(sub_83CE9AB8);
PPC_FUNC_IMPL(__imp__sub_83CE9AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10992
	ctx.r3.s64 = ctx.r11.s64 + 10992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9AC4"))) PPC_WEAK_FUNC(sub_83CE9AC4);
PPC_FUNC_IMPL(__imp__sub_83CE9AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9AC8"))) PPC_WEAK_FUNC(sub_83CE9AC8);
PPC_FUNC_IMPL(__imp__sub_83CE9AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11000
	ctx.r3.s64 = ctx.r11.s64 + 11000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9AD4"))) PPC_WEAK_FUNC(sub_83CE9AD4);
PPC_FUNC_IMPL(__imp__sub_83CE9AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9AD8"))) PPC_WEAK_FUNC(sub_83CE9AD8);
PPC_FUNC_IMPL(__imp__sub_83CE9AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11008
	ctx.r3.s64 = ctx.r11.s64 + 11008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9AE4"))) PPC_WEAK_FUNC(sub_83CE9AE4);
PPC_FUNC_IMPL(__imp__sub_83CE9AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9AE8"))) PPC_WEAK_FUNC(sub_83CE9AE8);
PPC_FUNC_IMPL(__imp__sub_83CE9AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11016
	ctx.r3.s64 = ctx.r11.s64 + 11016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9AF4"))) PPC_WEAK_FUNC(sub_83CE9AF4);
PPC_FUNC_IMPL(__imp__sub_83CE9AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9AF8"))) PPC_WEAK_FUNC(sub_83CE9AF8);
PPC_FUNC_IMPL(__imp__sub_83CE9AF8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-808
	ctx.r3.s64 = ctx.r11.s64 + -808;
	// bl 0x83523120
	ctx.lr = 0x83CE9B10;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11024
	ctx.r3.s64 = ctx.r10.s64 + 11024;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9B1C;
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

__attribute__((alias("__imp__sub_83CE9B2C"))) PPC_WEAK_FUNC(sub_83CE9B2C);
PPC_FUNC_IMPL(__imp__sub_83CE9B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9B30"))) PPC_WEAK_FUNC(sub_83CE9B30);
PPC_FUNC_IMPL(__imp__sub_83CE9B30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-792
	ctx.r7.s64 = ctx.r8.s64 + -792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -792);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-792(r8)
	PPC_STORE_U32(ctx.r8.u32 + -792, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9B58"))) PPC_WEAK_FUNC(sub_83CE9B58);
PPC_FUNC_IMPL(__imp__sub_83CE9B58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-32436
	ctx.r6.s64 = ctx.r7.s64 + -32436;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32508(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32508);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -792);
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
	// std r9,-32436(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32436, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9BA0"))) PPC_WEAK_FUNC(sub_83CE9BA0);
PPC_FUNC_IMPL(__imp__sub_83CE9BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11040
	ctx.r3.s64 = ctx.r11.s64 + 11040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9BAC"))) PPC_WEAK_FUNC(sub_83CE9BAC);
PPC_FUNC_IMPL(__imp__sub_83CE9BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9BB0"))) PPC_WEAK_FUNC(sub_83CE9BB0);
PPC_FUNC_IMPL(__imp__sub_83CE9BB0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-784
	ctx.r3.s64 = ctx.r11.s64 + -784;
	// bl 0x8259af80
	ctx.lr = 0x83CE9BC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11056
	ctx.r3.s64 = ctx.r10.s64 + 11056;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9BD4;
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

__attribute__((alias("__imp__sub_83CE9BE4"))) PPC_WEAK_FUNC(sub_83CE9BE4);
PPC_FUNC_IMPL(__imp__sub_83CE9BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9BE8"))) PPC_WEAK_FUNC(sub_83CE9BE8);
PPC_FUNC_IMPL(__imp__sub_83CE9BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-804
	ctx.r11.s64 = ctx.r8.s64 + -804;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-32460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32460);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11048
	ctx.r3.s64 = ctx.r6.s64 + 11048;
	// stw r10,-804(r8)
	PPC_STORE_U32(ctx.r8.u32 + -804, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C18"))) PPC_WEAK_FUNC(sub_83CE9C18);
PPC_FUNC_IMPL(__imp__sub_83CE9C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11064
	ctx.r3.s64 = ctx.r11.s64 + 11064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C24"))) PPC_WEAK_FUNC(sub_83CE9C24);
PPC_FUNC_IMPL(__imp__sub_83CE9C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9C28"))) PPC_WEAK_FUNC(sub_83CE9C28);
PPC_FUNC_IMPL(__imp__sub_83CE9C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11072
	ctx.r3.s64 = ctx.r11.s64 + 11072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C34"))) PPC_WEAK_FUNC(sub_83CE9C34);
PPC_FUNC_IMPL(__imp__sub_83CE9C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9C38"))) PPC_WEAK_FUNC(sub_83CE9C38);
PPC_FUNC_IMPL(__imp__sub_83CE9C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11080
	ctx.r3.s64 = ctx.r11.s64 + 11080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C44"))) PPC_WEAK_FUNC(sub_83CE9C44);
PPC_FUNC_IMPL(__imp__sub_83CE9C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9C48"))) PPC_WEAK_FUNC(sub_83CE9C48);
PPC_FUNC_IMPL(__imp__sub_83CE9C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11088
	ctx.r3.s64 = ctx.r11.s64 + 11088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C54"))) PPC_WEAK_FUNC(sub_83CE9C54);
PPC_FUNC_IMPL(__imp__sub_83CE9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9C58"))) PPC_WEAK_FUNC(sub_83CE9C58);
PPC_FUNC_IMPL(__imp__sub_83CE9C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11096
	ctx.r3.s64 = ctx.r11.s64 + 11096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C64"))) PPC_WEAK_FUNC(sub_83CE9C64);
PPC_FUNC_IMPL(__imp__sub_83CE9C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9C68"))) PPC_WEAK_FUNC(sub_83CE9C68);
PPC_FUNC_IMPL(__imp__sub_83CE9C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11104
	ctx.r3.s64 = ctx.r11.s64 + 11104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C74"))) PPC_WEAK_FUNC(sub_83CE9C74);
PPC_FUNC_IMPL(__imp__sub_83CE9C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9C78"))) PPC_WEAK_FUNC(sub_83CE9C78);
PPC_FUNC_IMPL(__imp__sub_83CE9C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11112
	ctx.r3.s64 = ctx.r11.s64 + 11112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C84"))) PPC_WEAK_FUNC(sub_83CE9C84);
PPC_FUNC_IMPL(__imp__sub_83CE9C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9C88"))) PPC_WEAK_FUNC(sub_83CE9C88);
PPC_FUNC_IMPL(__imp__sub_83CE9C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11120
	ctx.r3.s64 = ctx.r11.s64 + 11120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9C94"))) PPC_WEAK_FUNC(sub_83CE9C94);
PPC_FUNC_IMPL(__imp__sub_83CE9C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9C98"))) PPC_WEAK_FUNC(sub_83CE9C98);
PPC_FUNC_IMPL(__imp__sub_83CE9C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11128
	ctx.r3.s64 = ctx.r11.s64 + 11128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9CA4"))) PPC_WEAK_FUNC(sub_83CE9CA4);
PPC_FUNC_IMPL(__imp__sub_83CE9CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9CA8"))) PPC_WEAK_FUNC(sub_83CE9CA8);
PPC_FUNC_IMPL(__imp__sub_83CE9CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11136
	ctx.r3.s64 = ctx.r11.s64 + 11136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9CB4"))) PPC_WEAK_FUNC(sub_83CE9CB4);
PPC_FUNC_IMPL(__imp__sub_83CE9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9CB8"))) PPC_WEAK_FUNC(sub_83CE9CB8);
PPC_FUNC_IMPL(__imp__sub_83CE9CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11144
	ctx.r3.s64 = ctx.r11.s64 + 11144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9CC4"))) PPC_WEAK_FUNC(sub_83CE9CC4);
PPC_FUNC_IMPL(__imp__sub_83CE9CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9CC8"))) PPC_WEAK_FUNC(sub_83CE9CC8);
PPC_FUNC_IMPL(__imp__sub_83CE9CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11152
	ctx.r3.s64 = ctx.r11.s64 + 11152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9CD4"))) PPC_WEAK_FUNC(sub_83CE9CD4);
PPC_FUNC_IMPL(__imp__sub_83CE9CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9CD8"))) PPC_WEAK_FUNC(sub_83CE9CD8);
PPC_FUNC_IMPL(__imp__sub_83CE9CD8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-440
	ctx.r3.s64 = ctx.r11.s64 + -440;
	// bl 0x83523120
	ctx.lr = 0x83CE9CF0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11160
	ctx.r3.s64 = ctx.r10.s64 + 11160;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9CFC;
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

__attribute__((alias("__imp__sub_83CE9D0C"))) PPC_WEAK_FUNC(sub_83CE9D0C);
PPC_FUNC_IMPL(__imp__sub_83CE9D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9D10"))) PPC_WEAK_FUNC(sub_83CE9D10);
PPC_FUNC_IMPL(__imp__sub_83CE9D10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-424
	ctx.r7.s64 = ctx.r8.s64 + -424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-424(r8)
	PPC_STORE_U32(ctx.r8.u32 + -424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9D38"))) PPC_WEAK_FUNC(sub_83CE9D38);
PPC_FUNC_IMPL(__imp__sub_83CE9D38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-32300
	ctx.r6.s64 = ctx.r7.s64 + -32300;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -424);
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
	// std r9,-32300(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9D80"))) PPC_WEAK_FUNC(sub_83CE9D80);
PPC_FUNC_IMPL(__imp__sub_83CE9D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11176
	ctx.r3.s64 = ctx.r11.s64 + 11176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9D8C"))) PPC_WEAK_FUNC(sub_83CE9D8C);
PPC_FUNC_IMPL(__imp__sub_83CE9D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9D90"))) PPC_WEAK_FUNC(sub_83CE9D90);
PPC_FUNC_IMPL(__imp__sub_83CE9D90) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-416
	ctx.r3.s64 = ctx.r11.s64 + -416;
	// bl 0x8259af80
	ctx.lr = 0x83CE9DA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11192
	ctx.r3.s64 = ctx.r10.s64 + 11192;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9DB4;
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

__attribute__((alias("__imp__sub_83CE9DC4"))) PPC_WEAK_FUNC(sub_83CE9DC4);
PPC_FUNC_IMPL(__imp__sub_83CE9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9DC8"))) PPC_WEAK_FUNC(sub_83CE9DC8);
PPC_FUNC_IMPL(__imp__sub_83CE9DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-436
	ctx.r11.s64 = ctx.r8.s64 + -436;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-32324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11184
	ctx.r3.s64 = ctx.r6.s64 + 11184;
	// stw r10,-436(r8)
	PPC_STORE_U32(ctx.r8.u32 + -436, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9DF8"))) PPC_WEAK_FUNC(sub_83CE9DF8);
PPC_FUNC_IMPL(__imp__sub_83CE9DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11200
	ctx.r3.s64 = ctx.r11.s64 + 11200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E04"))) PPC_WEAK_FUNC(sub_83CE9E04);
PPC_FUNC_IMPL(__imp__sub_83CE9E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E08"))) PPC_WEAK_FUNC(sub_83CE9E08);
PPC_FUNC_IMPL(__imp__sub_83CE9E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11208
	ctx.r3.s64 = ctx.r11.s64 + 11208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E14"))) PPC_WEAK_FUNC(sub_83CE9E14);
PPC_FUNC_IMPL(__imp__sub_83CE9E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E18"))) PPC_WEAK_FUNC(sub_83CE9E18);
PPC_FUNC_IMPL(__imp__sub_83CE9E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11216
	ctx.r3.s64 = ctx.r11.s64 + 11216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E24"))) PPC_WEAK_FUNC(sub_83CE9E24);
PPC_FUNC_IMPL(__imp__sub_83CE9E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E28"))) PPC_WEAK_FUNC(sub_83CE9E28);
PPC_FUNC_IMPL(__imp__sub_83CE9E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11224
	ctx.r3.s64 = ctx.r11.s64 + 11224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E34"))) PPC_WEAK_FUNC(sub_83CE9E34);
PPC_FUNC_IMPL(__imp__sub_83CE9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E38"))) PPC_WEAK_FUNC(sub_83CE9E38);
PPC_FUNC_IMPL(__imp__sub_83CE9E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11232
	ctx.r3.s64 = ctx.r11.s64 + 11232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E44"))) PPC_WEAK_FUNC(sub_83CE9E44);
PPC_FUNC_IMPL(__imp__sub_83CE9E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E48"))) PPC_WEAK_FUNC(sub_83CE9E48);
PPC_FUNC_IMPL(__imp__sub_83CE9E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E54"))) PPC_WEAK_FUNC(sub_83CE9E54);
PPC_FUNC_IMPL(__imp__sub_83CE9E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E58"))) PPC_WEAK_FUNC(sub_83CE9E58);
PPC_FUNC_IMPL(__imp__sub_83CE9E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11248
	ctx.r3.s64 = ctx.r11.s64 + 11248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E64"))) PPC_WEAK_FUNC(sub_83CE9E64);
PPC_FUNC_IMPL(__imp__sub_83CE9E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E68"))) PPC_WEAK_FUNC(sub_83CE9E68);
PPC_FUNC_IMPL(__imp__sub_83CE9E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11256
	ctx.r3.s64 = ctx.r11.s64 + 11256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E74"))) PPC_WEAK_FUNC(sub_83CE9E74);
PPC_FUNC_IMPL(__imp__sub_83CE9E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E78"))) PPC_WEAK_FUNC(sub_83CE9E78);
PPC_FUNC_IMPL(__imp__sub_83CE9E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11264
	ctx.r3.s64 = ctx.r11.s64 + 11264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E84"))) PPC_WEAK_FUNC(sub_83CE9E84);
PPC_FUNC_IMPL(__imp__sub_83CE9E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E88"))) PPC_WEAK_FUNC(sub_83CE9E88);
PPC_FUNC_IMPL(__imp__sub_83CE9E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9E94"))) PPC_WEAK_FUNC(sub_83CE9E94);
PPC_FUNC_IMPL(__imp__sub_83CE9E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9E98"))) PPC_WEAK_FUNC(sub_83CE9E98);
PPC_FUNC_IMPL(__imp__sub_83CE9E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11280
	ctx.r3.s64 = ctx.r11.s64 + 11280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9EA4"))) PPC_WEAK_FUNC(sub_83CE9EA4);
PPC_FUNC_IMPL(__imp__sub_83CE9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9EA8"))) PPC_WEAK_FUNC(sub_83CE9EA8);
PPC_FUNC_IMPL(__imp__sub_83CE9EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11288
	ctx.r3.s64 = ctx.r11.s64 + 11288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9EB4"))) PPC_WEAK_FUNC(sub_83CE9EB4);
PPC_FUNC_IMPL(__imp__sub_83CE9EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9EB8"))) PPC_WEAK_FUNC(sub_83CE9EB8);
PPC_FUNC_IMPL(__imp__sub_83CE9EB8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// bl 0x83523120
	ctx.lr = 0x83CE9ED0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11296
	ctx.r3.s64 = ctx.r10.s64 + 11296;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9EDC;
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

__attribute__((alias("__imp__sub_83CE9EEC"))) PPC_WEAK_FUNC(sub_83CE9EEC);
PPC_FUNC_IMPL(__imp__sub_83CE9EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9EF0"))) PPC_WEAK_FUNC(sub_83CE9EF0);
PPC_FUNC_IMPL(__imp__sub_83CE9EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-56
	ctx.r7.s64 = ctx.r8.s64 + -56;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-56(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -56);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-56(r8)
	PPC_STORE_U32(ctx.r8.u32 + -56, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9F18"))) PPC_WEAK_FUNC(sub_83CE9F18);
PPC_FUNC_IMPL(__imp__sub_83CE9F18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-32096
	ctx.r6.s64 = ctx.r7.s64 + -32096;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32168(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32168);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -56);
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
	// std r9,-32096(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9F60"))) PPC_WEAK_FUNC(sub_83CE9F60);
PPC_FUNC_IMPL(__imp__sub_83CE9F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11312
	ctx.r3.s64 = ctx.r11.s64 + 11312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9F6C"))) PPC_WEAK_FUNC(sub_83CE9F6C);
PPC_FUNC_IMPL(__imp__sub_83CE9F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9F70"))) PPC_WEAK_FUNC(sub_83CE9F70);
PPC_FUNC_IMPL(__imp__sub_83CE9F70) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x8259af80
	ctx.lr = 0x83CE9F88;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11328
	ctx.r3.s64 = ctx.r10.s64 + 11328;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9F94;
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

__attribute__((alias("__imp__sub_83CE9FA4"))) PPC_WEAK_FUNC(sub_83CE9FA4);
PPC_FUNC_IMPL(__imp__sub_83CE9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9FA8"))) PPC_WEAK_FUNC(sub_83CE9FA8);
PPC_FUNC_IMPL(__imp__sub_83CE9FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-68
	ctx.r11.s64 = ctx.r8.s64 + -68;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-32120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32120);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11320
	ctx.r3.s64 = ctx.r6.s64 + 11320;
	// stw r10,-68(r8)
	PPC_STORE_U32(ctx.r8.u32 + -68, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9FD8"))) PPC_WEAK_FUNC(sub_83CE9FD8);
PPC_FUNC_IMPL(__imp__sub_83CE9FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9FE4"))) PPC_WEAK_FUNC(sub_83CE9FE4);
PPC_FUNC_IMPL(__imp__sub_83CE9FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9FE8"))) PPC_WEAK_FUNC(sub_83CE9FE8);
PPC_FUNC_IMPL(__imp__sub_83CE9FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11344
	ctx.r3.s64 = ctx.r11.s64 + 11344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9FF4"))) PPC_WEAK_FUNC(sub_83CE9FF4);
PPC_FUNC_IMPL(__imp__sub_83CE9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9FF8"))) PPC_WEAK_FUNC(sub_83CE9FF8);
PPC_FUNC_IMPL(__imp__sub_83CE9FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11352
	ctx.r3.s64 = ctx.r11.s64 + 11352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA004"))) PPC_WEAK_FUNC(sub_83CEA004);
PPC_FUNC_IMPL(__imp__sub_83CEA004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA008"))) PPC_WEAK_FUNC(sub_83CEA008);
PPC_FUNC_IMPL(__imp__sub_83CEA008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11360
	ctx.r3.s64 = ctx.r11.s64 + 11360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA014"))) PPC_WEAK_FUNC(sub_83CEA014);
PPC_FUNC_IMPL(__imp__sub_83CEA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA018"))) PPC_WEAK_FUNC(sub_83CEA018);
PPC_FUNC_IMPL(__imp__sub_83CEA018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11368
	ctx.r3.s64 = ctx.r11.s64 + 11368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA024"))) PPC_WEAK_FUNC(sub_83CEA024);
PPC_FUNC_IMPL(__imp__sub_83CEA024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA028"))) PPC_WEAK_FUNC(sub_83CEA028);
PPC_FUNC_IMPL(__imp__sub_83CEA028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11376
	ctx.r3.s64 = ctx.r11.s64 + 11376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA034"))) PPC_WEAK_FUNC(sub_83CEA034);
PPC_FUNC_IMPL(__imp__sub_83CEA034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA038"))) PPC_WEAK_FUNC(sub_83CEA038);
PPC_FUNC_IMPL(__imp__sub_83CEA038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11384
	ctx.r3.s64 = ctx.r11.s64 + 11384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA044"))) PPC_WEAK_FUNC(sub_83CEA044);
PPC_FUNC_IMPL(__imp__sub_83CEA044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA048"))) PPC_WEAK_FUNC(sub_83CEA048);
PPC_FUNC_IMPL(__imp__sub_83CEA048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11392
	ctx.r3.s64 = ctx.r11.s64 + 11392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA054"))) PPC_WEAK_FUNC(sub_83CEA054);
PPC_FUNC_IMPL(__imp__sub_83CEA054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA058"))) PPC_WEAK_FUNC(sub_83CEA058);
PPC_FUNC_IMPL(__imp__sub_83CEA058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11400
	ctx.r3.s64 = ctx.r11.s64 + 11400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA064"))) PPC_WEAK_FUNC(sub_83CEA064);
PPC_FUNC_IMPL(__imp__sub_83CEA064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA068"))) PPC_WEAK_FUNC(sub_83CEA068);
PPC_FUNC_IMPL(__imp__sub_83CEA068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11408
	ctx.r3.s64 = ctx.r11.s64 + 11408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA074"))) PPC_WEAK_FUNC(sub_83CEA074);
PPC_FUNC_IMPL(__imp__sub_83CEA074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA078"))) PPC_WEAK_FUNC(sub_83CEA078);
PPC_FUNC_IMPL(__imp__sub_83CEA078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11416
	ctx.r3.s64 = ctx.r11.s64 + 11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA084"))) PPC_WEAK_FUNC(sub_83CEA084);
PPC_FUNC_IMPL(__imp__sub_83CEA084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA088"))) PPC_WEAK_FUNC(sub_83CEA088);
PPC_FUNC_IMPL(__imp__sub_83CEA088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11424
	ctx.r3.s64 = ctx.r11.s64 + 11424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA094"))) PPC_WEAK_FUNC(sub_83CEA094);
PPC_FUNC_IMPL(__imp__sub_83CEA094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA098"))) PPC_WEAK_FUNC(sub_83CEA098);
PPC_FUNC_IMPL(__imp__sub_83CEA098) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,296
	ctx.r3.s64 = ctx.r11.s64 + 296;
	// bl 0x83523120
	ctx.lr = 0x83CEA0B0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11432
	ctx.r3.s64 = ctx.r10.s64 + 11432;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEA0BC;
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

__attribute__((alias("__imp__sub_83CEA0CC"))) PPC_WEAK_FUNC(sub_83CEA0CC);
PPC_FUNC_IMPL(__imp__sub_83CEA0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA0D0"))) PPC_WEAK_FUNC(sub_83CEA0D0);
PPC_FUNC_IMPL(__imp__sub_83CEA0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,312
	ctx.r7.s64 = ctx.r8.s64 + 312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 312);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 312, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEA0F8"))) PPC_WEAK_FUNC(sub_83CEA0F8);
PPC_FUNC_IMPL(__imp__sub_83CEA0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-31948
	ctx.r6.s64 = ctx.r7.s64 + -31948;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32020(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32020);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
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
	// std r9,-31948(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31948, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEA140"))) PPC_WEAK_FUNC(sub_83CEA140);
PPC_FUNC_IMPL(__imp__sub_83CEA140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11448
	ctx.r3.s64 = ctx.r11.s64 + 11448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA14C"))) PPC_WEAK_FUNC(sub_83CEA14C);
PPC_FUNC_IMPL(__imp__sub_83CEA14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA150"))) PPC_WEAK_FUNC(sub_83CEA150);
PPC_FUNC_IMPL(__imp__sub_83CEA150) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// bl 0x8259af80
	ctx.lr = 0x83CEA168;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11464
	ctx.r3.s64 = ctx.r10.s64 + 11464;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEA174;
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

__attribute__((alias("__imp__sub_83CEA184"))) PPC_WEAK_FUNC(sub_83CEA184);
PPC_FUNC_IMPL(__imp__sub_83CEA184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA188"))) PPC_WEAK_FUNC(sub_83CEA188);
PPC_FUNC_IMPL(__imp__sub_83CEA188) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,300
	ctx.r11.s64 = ctx.r8.s64 + 300;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-31972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31972);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11456
	ctx.r3.s64 = ctx.r6.s64 + 11456;
	// stw r10,300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 300, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA1B8"))) PPC_WEAK_FUNC(sub_83CEA1B8);
PPC_FUNC_IMPL(__imp__sub_83CEA1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11472
	ctx.r3.s64 = ctx.r11.s64 + 11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA1C4"))) PPC_WEAK_FUNC(sub_83CEA1C4);
PPC_FUNC_IMPL(__imp__sub_83CEA1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA1C8"))) PPC_WEAK_FUNC(sub_83CEA1C8);
PPC_FUNC_IMPL(__imp__sub_83CEA1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA1D4"))) PPC_WEAK_FUNC(sub_83CEA1D4);
PPC_FUNC_IMPL(__imp__sub_83CEA1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA1D8"))) PPC_WEAK_FUNC(sub_83CEA1D8);
PPC_FUNC_IMPL(__imp__sub_83CEA1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA1E4"))) PPC_WEAK_FUNC(sub_83CEA1E4);
PPC_FUNC_IMPL(__imp__sub_83CEA1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA1E8"))) PPC_WEAK_FUNC(sub_83CEA1E8);
PPC_FUNC_IMPL(__imp__sub_83CEA1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11496
	ctx.r3.s64 = ctx.r11.s64 + 11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA1F4"))) PPC_WEAK_FUNC(sub_83CEA1F4);
PPC_FUNC_IMPL(__imp__sub_83CEA1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA1F8"))) PPC_WEAK_FUNC(sub_83CEA1F8);
PPC_FUNC_IMPL(__imp__sub_83CEA1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11504
	ctx.r3.s64 = ctx.r11.s64 + 11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA204"))) PPC_WEAK_FUNC(sub_83CEA204);
PPC_FUNC_IMPL(__imp__sub_83CEA204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA208"))) PPC_WEAK_FUNC(sub_83CEA208);
PPC_FUNC_IMPL(__imp__sub_83CEA208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA214"))) PPC_WEAK_FUNC(sub_83CEA214);
PPC_FUNC_IMPL(__imp__sub_83CEA214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA218"))) PPC_WEAK_FUNC(sub_83CEA218);
PPC_FUNC_IMPL(__imp__sub_83CEA218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11520
	ctx.r3.s64 = ctx.r11.s64 + 11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA224"))) PPC_WEAK_FUNC(sub_83CEA224);
PPC_FUNC_IMPL(__imp__sub_83CEA224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA228"))) PPC_WEAK_FUNC(sub_83CEA228);
PPC_FUNC_IMPL(__imp__sub_83CEA228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11528
	ctx.r3.s64 = ctx.r11.s64 + 11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA234"))) PPC_WEAK_FUNC(sub_83CEA234);
PPC_FUNC_IMPL(__imp__sub_83CEA234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA238"))) PPC_WEAK_FUNC(sub_83CEA238);
PPC_FUNC_IMPL(__imp__sub_83CEA238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11536
	ctx.r3.s64 = ctx.r11.s64 + 11536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA244"))) PPC_WEAK_FUNC(sub_83CEA244);
PPC_FUNC_IMPL(__imp__sub_83CEA244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA248"))) PPC_WEAK_FUNC(sub_83CEA248);
PPC_FUNC_IMPL(__imp__sub_83CEA248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11544
	ctx.r3.s64 = ctx.r11.s64 + 11544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA254"))) PPC_WEAK_FUNC(sub_83CEA254);
PPC_FUNC_IMPL(__imp__sub_83CEA254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA258"))) PPC_WEAK_FUNC(sub_83CEA258);
PPC_FUNC_IMPL(__imp__sub_83CEA258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11552
	ctx.r3.s64 = ctx.r11.s64 + 11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA264"))) PPC_WEAK_FUNC(sub_83CEA264);
PPC_FUNC_IMPL(__imp__sub_83CEA264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA268"))) PPC_WEAK_FUNC(sub_83CEA268);
PPC_FUNC_IMPL(__imp__sub_83CEA268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11560
	ctx.r3.s64 = ctx.r11.s64 + 11560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA274"))) PPC_WEAK_FUNC(sub_83CEA274);
PPC_FUNC_IMPL(__imp__sub_83CEA274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA278"))) PPC_WEAK_FUNC(sub_83CEA278);
PPC_FUNC_IMPL(__imp__sub_83CEA278) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,664
	ctx.r3.s64 = ctx.r11.s64 + 664;
	// bl 0x83523120
	ctx.lr = 0x83CEA290;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11568
	ctx.r3.s64 = ctx.r10.s64 + 11568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEA29C;
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

__attribute__((alias("__imp__sub_83CEA2AC"))) PPC_WEAK_FUNC(sub_83CEA2AC);
PPC_FUNC_IMPL(__imp__sub_83CEA2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA2B0"))) PPC_WEAK_FUNC(sub_83CEA2B0);
PPC_FUNC_IMPL(__imp__sub_83CEA2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,680
	ctx.r7.s64 = ctx.r8.s64 + 680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,680(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 680);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,680(r8)
	PPC_STORE_U32(ctx.r8.u32 + 680, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEA2D8"))) PPC_WEAK_FUNC(sub_83CEA2D8);
PPC_FUNC_IMPL(__imp__sub_83CEA2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-31808
	ctx.r6.s64 = ctx.r7.s64 + -31808;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31880(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31880);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,680(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
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
	// std r9,-31808(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31808, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEA320"))) PPC_WEAK_FUNC(sub_83CEA320);
PPC_FUNC_IMPL(__imp__sub_83CEA320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11584
	ctx.r3.s64 = ctx.r11.s64 + 11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA32C"))) PPC_WEAK_FUNC(sub_83CEA32C);
PPC_FUNC_IMPL(__imp__sub_83CEA32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA330"))) PPC_WEAK_FUNC(sub_83CEA330);
PPC_FUNC_IMPL(__imp__sub_83CEA330) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,688
	ctx.r3.s64 = ctx.r11.s64 + 688;
	// bl 0x8259af80
	ctx.lr = 0x83CEA348;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11600
	ctx.r3.s64 = ctx.r10.s64 + 11600;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEA354;
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

__attribute__((alias("__imp__sub_83CEA364"))) PPC_WEAK_FUNC(sub_83CEA364);
PPC_FUNC_IMPL(__imp__sub_83CEA364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA368"))) PPC_WEAK_FUNC(sub_83CEA368);
PPC_FUNC_IMPL(__imp__sub_83CEA368) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,668
	ctx.r11.s64 = ctx.r8.s64 + 668;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-31832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31832);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11592
	ctx.r3.s64 = ctx.r6.s64 + 11592;
	// stw r10,668(r8)
	PPC_STORE_U32(ctx.r8.u32 + 668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA398"))) PPC_WEAK_FUNC(sub_83CEA398);
PPC_FUNC_IMPL(__imp__sub_83CEA398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11608
	ctx.r3.s64 = ctx.r11.s64 + 11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA3A4"))) PPC_WEAK_FUNC(sub_83CEA3A4);
PPC_FUNC_IMPL(__imp__sub_83CEA3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA3A8"))) PPC_WEAK_FUNC(sub_83CEA3A8);
PPC_FUNC_IMPL(__imp__sub_83CEA3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA3B4"))) PPC_WEAK_FUNC(sub_83CEA3B4);
PPC_FUNC_IMPL(__imp__sub_83CEA3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA3B8"))) PPC_WEAK_FUNC(sub_83CEA3B8);
PPC_FUNC_IMPL(__imp__sub_83CEA3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11624
	ctx.r3.s64 = ctx.r11.s64 + 11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA3C4"))) PPC_WEAK_FUNC(sub_83CEA3C4);
PPC_FUNC_IMPL(__imp__sub_83CEA3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA3C8"))) PPC_WEAK_FUNC(sub_83CEA3C8);
PPC_FUNC_IMPL(__imp__sub_83CEA3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA3D4"))) PPC_WEAK_FUNC(sub_83CEA3D4);
PPC_FUNC_IMPL(__imp__sub_83CEA3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA3D8"))) PPC_WEAK_FUNC(sub_83CEA3D8);
PPC_FUNC_IMPL(__imp__sub_83CEA3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11640
	ctx.r3.s64 = ctx.r11.s64 + 11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA3E4"))) PPC_WEAK_FUNC(sub_83CEA3E4);
PPC_FUNC_IMPL(__imp__sub_83CEA3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA3E8"))) PPC_WEAK_FUNC(sub_83CEA3E8);
PPC_FUNC_IMPL(__imp__sub_83CEA3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11648
	ctx.r3.s64 = ctx.r11.s64 + 11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA3F4"))) PPC_WEAK_FUNC(sub_83CEA3F4);
PPC_FUNC_IMPL(__imp__sub_83CEA3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA3F8"))) PPC_WEAK_FUNC(sub_83CEA3F8);
PPC_FUNC_IMPL(__imp__sub_83CEA3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11656
	ctx.r3.s64 = ctx.r11.s64 + 11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA404"))) PPC_WEAK_FUNC(sub_83CEA404);
PPC_FUNC_IMPL(__imp__sub_83CEA404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA408"))) PPC_WEAK_FUNC(sub_83CEA408);
PPC_FUNC_IMPL(__imp__sub_83CEA408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11664
	ctx.r3.s64 = ctx.r11.s64 + 11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA414"))) PPC_WEAK_FUNC(sub_83CEA414);
PPC_FUNC_IMPL(__imp__sub_83CEA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA418"))) PPC_WEAK_FUNC(sub_83CEA418);
PPC_FUNC_IMPL(__imp__sub_83CEA418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11672
	ctx.r3.s64 = ctx.r11.s64 + 11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA424"))) PPC_WEAK_FUNC(sub_83CEA424);
PPC_FUNC_IMPL(__imp__sub_83CEA424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA428"))) PPC_WEAK_FUNC(sub_83CEA428);
PPC_FUNC_IMPL(__imp__sub_83CEA428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA434"))) PPC_WEAK_FUNC(sub_83CEA434);
PPC_FUNC_IMPL(__imp__sub_83CEA434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA438"))) PPC_WEAK_FUNC(sub_83CEA438);
PPC_FUNC_IMPL(__imp__sub_83CEA438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11688
	ctx.r3.s64 = ctx.r11.s64 + 11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA444"))) PPC_WEAK_FUNC(sub_83CEA444);
PPC_FUNC_IMPL(__imp__sub_83CEA444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA448"))) PPC_WEAK_FUNC(sub_83CEA448);
PPC_FUNC_IMPL(__imp__sub_83CEA448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11696
	ctx.r3.s64 = ctx.r11.s64 + 11696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA454"))) PPC_WEAK_FUNC(sub_83CEA454);
PPC_FUNC_IMPL(__imp__sub_83CEA454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA458"))) PPC_WEAK_FUNC(sub_83CEA458);
PPC_FUNC_IMPL(__imp__sub_83CEA458) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,1032
	ctx.r3.s64 = ctx.r11.s64 + 1032;
	// bl 0x83523120
	ctx.lr = 0x83CEA470;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11704
	ctx.r3.s64 = ctx.r10.s64 + 11704;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEA47C;
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

__attribute__((alias("__imp__sub_83CEA48C"))) PPC_WEAK_FUNC(sub_83CEA48C);
PPC_FUNC_IMPL(__imp__sub_83CEA48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA490"))) PPC_WEAK_FUNC(sub_83CEA490);
PPC_FUNC_IMPL(__imp__sub_83CEA490) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1048
	ctx.r7.s64 = ctx.r8.s64 + 1048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1048);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1048, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEA4B8"))) PPC_WEAK_FUNC(sub_83CEA4B8);
PPC_FUNC_IMPL(__imp__sub_83CEA4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-31608
	ctx.r6.s64 = ctx.r7.s64 + -31608;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31680(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31680);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1048(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
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
	// std r9,-31608(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEA500"))) PPC_WEAK_FUNC(sub_83CEA500);
PPC_FUNC_IMPL(__imp__sub_83CEA500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11720
	ctx.r3.s64 = ctx.r11.s64 + 11720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA50C"))) PPC_WEAK_FUNC(sub_83CEA50C);
PPC_FUNC_IMPL(__imp__sub_83CEA50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA510"))) PPC_WEAK_FUNC(sub_83CEA510);
PPC_FUNC_IMPL(__imp__sub_83CEA510) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,1056
	ctx.r3.s64 = ctx.r11.s64 + 1056;
	// bl 0x8259af80
	ctx.lr = 0x83CEA528;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11736
	ctx.r3.s64 = ctx.r10.s64 + 11736;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEA534;
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

__attribute__((alias("__imp__sub_83CEA544"))) PPC_WEAK_FUNC(sub_83CEA544);
PPC_FUNC_IMPL(__imp__sub_83CEA544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA548"))) PPC_WEAK_FUNC(sub_83CEA548);
PPC_FUNC_IMPL(__imp__sub_83CEA548) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1036
	ctx.r11.s64 = ctx.r8.s64 + 1036;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-31632(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31632);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11728
	ctx.r3.s64 = ctx.r6.s64 + 11728;
	// stw r10,1036(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA578"))) PPC_WEAK_FUNC(sub_83CEA578);
PPC_FUNC_IMPL(__imp__sub_83CEA578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA584"))) PPC_WEAK_FUNC(sub_83CEA584);
PPC_FUNC_IMPL(__imp__sub_83CEA584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA588"))) PPC_WEAK_FUNC(sub_83CEA588);
PPC_FUNC_IMPL(__imp__sub_83CEA588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11752
	ctx.r3.s64 = ctx.r11.s64 + 11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA594"))) PPC_WEAK_FUNC(sub_83CEA594);
PPC_FUNC_IMPL(__imp__sub_83CEA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA598"))) PPC_WEAK_FUNC(sub_83CEA598);
PPC_FUNC_IMPL(__imp__sub_83CEA598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11760
	ctx.r3.s64 = ctx.r11.s64 + 11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA5A4"))) PPC_WEAK_FUNC(sub_83CEA5A4);
PPC_FUNC_IMPL(__imp__sub_83CEA5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA5A8"))) PPC_WEAK_FUNC(sub_83CEA5A8);
PPC_FUNC_IMPL(__imp__sub_83CEA5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11768
	ctx.r3.s64 = ctx.r11.s64 + 11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA5B4"))) PPC_WEAK_FUNC(sub_83CEA5B4);
PPC_FUNC_IMPL(__imp__sub_83CEA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA5B8"))) PPC_WEAK_FUNC(sub_83CEA5B8);
PPC_FUNC_IMPL(__imp__sub_83CEA5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA5C4"))) PPC_WEAK_FUNC(sub_83CEA5C4);
PPC_FUNC_IMPL(__imp__sub_83CEA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA5C8"))) PPC_WEAK_FUNC(sub_83CEA5C8);
PPC_FUNC_IMPL(__imp__sub_83CEA5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11784
	ctx.r3.s64 = ctx.r11.s64 + 11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA5D4"))) PPC_WEAK_FUNC(sub_83CEA5D4);
PPC_FUNC_IMPL(__imp__sub_83CEA5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA5D8"))) PPC_WEAK_FUNC(sub_83CEA5D8);
PPC_FUNC_IMPL(__imp__sub_83CEA5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11792
	ctx.r3.s64 = ctx.r11.s64 + 11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA5E4"))) PPC_WEAK_FUNC(sub_83CEA5E4);
PPC_FUNC_IMPL(__imp__sub_83CEA5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA5E8"))) PPC_WEAK_FUNC(sub_83CEA5E8);
PPC_FUNC_IMPL(__imp__sub_83CEA5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA5F4"))) PPC_WEAK_FUNC(sub_83CEA5F4);
PPC_FUNC_IMPL(__imp__sub_83CEA5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA5F8"))) PPC_WEAK_FUNC(sub_83CEA5F8);
PPC_FUNC_IMPL(__imp__sub_83CEA5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11808
	ctx.r3.s64 = ctx.r11.s64 + 11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA604"))) PPC_WEAK_FUNC(sub_83CEA604);
PPC_FUNC_IMPL(__imp__sub_83CEA604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA608"))) PPC_WEAK_FUNC(sub_83CEA608);
PPC_FUNC_IMPL(__imp__sub_83CEA608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11816
	ctx.r3.s64 = ctx.r11.s64 + 11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA614"))) PPC_WEAK_FUNC(sub_83CEA614);
PPC_FUNC_IMPL(__imp__sub_83CEA614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA618"))) PPC_WEAK_FUNC(sub_83CEA618);
PPC_FUNC_IMPL(__imp__sub_83CEA618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11824
	ctx.r3.s64 = ctx.r11.s64 + 11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA624"))) PPC_WEAK_FUNC(sub_83CEA624);
PPC_FUNC_IMPL(__imp__sub_83CEA624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA628"))) PPC_WEAK_FUNC(sub_83CEA628);
PPC_FUNC_IMPL(__imp__sub_83CEA628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11832
	ctx.r3.s64 = ctx.r11.s64 + 11832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA634"))) PPC_WEAK_FUNC(sub_83CEA634);
PPC_FUNC_IMPL(__imp__sub_83CEA634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA638"))) PPC_WEAK_FUNC(sub_83CEA638);
PPC_FUNC_IMPL(__imp__sub_83CEA638) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,1400
	ctx.r3.s64 = ctx.r11.s64 + 1400;
	// bl 0x83523120
	ctx.lr = 0x83CEA650;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11840
	ctx.r3.s64 = ctx.r10.s64 + 11840;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEA65C;
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

__attribute__((alias("__imp__sub_83CEA66C"))) PPC_WEAK_FUNC(sub_83CEA66C);
PPC_FUNC_IMPL(__imp__sub_83CEA66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA670"))) PPC_WEAK_FUNC(sub_83CEA670);
PPC_FUNC_IMPL(__imp__sub_83CEA670) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1416
	ctx.r7.s64 = ctx.r8.s64 + 1416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEA698"))) PPC_WEAK_FUNC(sub_83CEA698);
PPC_FUNC_IMPL(__imp__sub_83CEA698) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-31320
	ctx.r6.s64 = ctx.r7.s64 + -31320;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31392(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31392);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
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
	// std r9,-31320(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31320, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEA6E0"))) PPC_WEAK_FUNC(sub_83CEA6E0);
PPC_FUNC_IMPL(__imp__sub_83CEA6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA6EC"))) PPC_WEAK_FUNC(sub_83CEA6EC);
PPC_FUNC_IMPL(__imp__sub_83CEA6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA6F0"))) PPC_WEAK_FUNC(sub_83CEA6F0);
PPC_FUNC_IMPL(__imp__sub_83CEA6F0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,1424
	ctx.r3.s64 = ctx.r11.s64 + 1424;
	// bl 0x8259af80
	ctx.lr = 0x83CEA708;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,11872
	ctx.r3.s64 = ctx.r10.s64 + 11872;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEA714;
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

__attribute__((alias("__imp__sub_83CEA724"))) PPC_WEAK_FUNC(sub_83CEA724);
PPC_FUNC_IMPL(__imp__sub_83CEA724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA728"))) PPC_WEAK_FUNC(sub_83CEA728);
PPC_FUNC_IMPL(__imp__sub_83CEA728) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1404
	ctx.r11.s64 = ctx.r8.s64 + 1404;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-31344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31344);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11864
	ctx.r3.s64 = ctx.r6.s64 + 11864;
	// stw r10,1404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA758"))) PPC_WEAK_FUNC(sub_83CEA758);
PPC_FUNC_IMPL(__imp__sub_83CEA758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11880
	ctx.r3.s64 = ctx.r11.s64 + 11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA764"))) PPC_WEAK_FUNC(sub_83CEA764);
PPC_FUNC_IMPL(__imp__sub_83CEA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEA768"))) PPC_WEAK_FUNC(sub_83CEA768);
PPC_FUNC_IMPL(__imp__sub_83CEA768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,11888
	ctx.r3.s64 = ctx.r11.s64 + 11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEA774"))) PPC_WEAK_FUNC(sub_83CEA774);
PPC_FUNC_IMPL(__imp__sub_83CEA774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

