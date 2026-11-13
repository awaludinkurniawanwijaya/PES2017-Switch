#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BCC828"))) PPC_WEAK_FUNC(sub_83BCC828);
PPC_FUNC_IMPL(__imp__sub_83BCC828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11008
	ctx.r3.s64 = ctx.r11.s64 + 11008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC834"))) PPC_WEAK_FUNC(sub_83BCC834);
PPC_FUNC_IMPL(__imp__sub_83BCC834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC838"))) PPC_WEAK_FUNC(sub_83BCC838);
PPC_FUNC_IMPL(__imp__sub_83BCC838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2560
	ctx.r7.s64 = ctx.r8.s64 + 2560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC860"))) PPC_WEAK_FUNC(sub_83BCC860);
PPC_FUNC_IMPL(__imp__sub_83BCC860) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,14936
	ctx.r6.s64 = ctx.r7.s64 + 14936;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14864(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14864);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2560(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2560);
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
	// std r9,14936(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14936, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC8A8"))) PPC_WEAK_FUNC(sub_83BCC8A8);
PPC_FUNC_IMPL(__imp__sub_83BCC8A8) {
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
	// addi r3,r11,2544
	ctx.r3.s64 = ctx.r11.s64 + 2544;
	// bl 0x83523120
	ctx.lr = 0x83BCC8C0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11016
	ctx.r3.s64 = ctx.r10.s64 + 11016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC8CC;
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

__attribute__((alias("__imp__sub_83BCC8DC"))) PPC_WEAK_FUNC(sub_83BCC8DC);
PPC_FUNC_IMPL(__imp__sub_83BCC8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC8E0"))) PPC_WEAK_FUNC(sub_83BCC8E0);
PPC_FUNC_IMPL(__imp__sub_83BCC8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11032
	ctx.r3.s64 = ctx.r11.s64 + 11032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC8EC"))) PPC_WEAK_FUNC(sub_83BCC8EC);
PPC_FUNC_IMPL(__imp__sub_83BCC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC8F0"))) PPC_WEAK_FUNC(sub_83BCC8F0);
PPC_FUNC_IMPL(__imp__sub_83BCC8F0) {
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
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x8259af80
	ctx.lr = 0x83BCC908;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11048
	ctx.r3.s64 = ctx.r10.s64 + 11048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC914;
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

__attribute__((alias("__imp__sub_83BCC924"))) PPC_WEAK_FUNC(sub_83BCC924);
PPC_FUNC_IMPL(__imp__sub_83BCC924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC928"))) PPC_WEAK_FUNC(sub_83BCC928);
PPC_FUNC_IMPL(__imp__sub_83BCC928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2548
	ctx.r11.s64 = ctx.r8.s64 + 2548;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,14912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14912);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11040
	ctx.r3.s64 = ctx.r6.s64 + 11040;
	// stw r10,2548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2548, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC958"))) PPC_WEAK_FUNC(sub_83BCC958);
PPC_FUNC_IMPL(__imp__sub_83BCC958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11056
	ctx.r3.s64 = ctx.r11.s64 + 11056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC964"))) PPC_WEAK_FUNC(sub_83BCC964);
PPC_FUNC_IMPL(__imp__sub_83BCC964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC968"))) PPC_WEAK_FUNC(sub_83BCC968);
PPC_FUNC_IMPL(__imp__sub_83BCC968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11064
	ctx.r3.s64 = ctx.r11.s64 + 11064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC974"))) PPC_WEAK_FUNC(sub_83BCC974);
PPC_FUNC_IMPL(__imp__sub_83BCC974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC978"))) PPC_WEAK_FUNC(sub_83BCC978);
PPC_FUNC_IMPL(__imp__sub_83BCC978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11072
	ctx.r3.s64 = ctx.r11.s64 + 11072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC984"))) PPC_WEAK_FUNC(sub_83BCC984);
PPC_FUNC_IMPL(__imp__sub_83BCC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC988"))) PPC_WEAK_FUNC(sub_83BCC988);
PPC_FUNC_IMPL(__imp__sub_83BCC988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11080
	ctx.r3.s64 = ctx.r11.s64 + 11080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC994"))) PPC_WEAK_FUNC(sub_83BCC994);
PPC_FUNC_IMPL(__imp__sub_83BCC994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC998"))) PPC_WEAK_FUNC(sub_83BCC998);
PPC_FUNC_IMPL(__imp__sub_83BCC998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11088
	ctx.r3.s64 = ctx.r11.s64 + 11088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC9A4"))) PPC_WEAK_FUNC(sub_83BCC9A4);
PPC_FUNC_IMPL(__imp__sub_83BCC9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC9A8"))) PPC_WEAK_FUNC(sub_83BCC9A8);
PPC_FUNC_IMPL(__imp__sub_83BCC9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11096
	ctx.r3.s64 = ctx.r11.s64 + 11096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC9B4"))) PPC_WEAK_FUNC(sub_83BCC9B4);
PPC_FUNC_IMPL(__imp__sub_83BCC9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC9B8"))) PPC_WEAK_FUNC(sub_83BCC9B8);
PPC_FUNC_IMPL(__imp__sub_83BCC9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11104
	ctx.r3.s64 = ctx.r11.s64 + 11104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC9C4"))) PPC_WEAK_FUNC(sub_83BCC9C4);
PPC_FUNC_IMPL(__imp__sub_83BCC9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC9C8"))) PPC_WEAK_FUNC(sub_83BCC9C8);
PPC_FUNC_IMPL(__imp__sub_83BCC9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11112
	ctx.r3.s64 = ctx.r11.s64 + 11112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC9D4"))) PPC_WEAK_FUNC(sub_83BCC9D4);
PPC_FUNC_IMPL(__imp__sub_83BCC9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC9D8"))) PPC_WEAK_FUNC(sub_83BCC9D8);
PPC_FUNC_IMPL(__imp__sub_83BCC9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11120
	ctx.r3.s64 = ctx.r11.s64 + 11120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC9E4"))) PPC_WEAK_FUNC(sub_83BCC9E4);
PPC_FUNC_IMPL(__imp__sub_83BCC9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC9E8"))) PPC_WEAK_FUNC(sub_83BCC9E8);
PPC_FUNC_IMPL(__imp__sub_83BCC9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11128
	ctx.r3.s64 = ctx.r11.s64 + 11128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC9F4"))) PPC_WEAK_FUNC(sub_83BCC9F4);
PPC_FUNC_IMPL(__imp__sub_83BCC9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC9F8"))) PPC_WEAK_FUNC(sub_83BCC9F8);
PPC_FUNC_IMPL(__imp__sub_83BCC9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11136
	ctx.r3.s64 = ctx.r11.s64 + 11136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCA04"))) PPC_WEAK_FUNC(sub_83BCCA04);
PPC_FUNC_IMPL(__imp__sub_83BCCA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCA08"))) PPC_WEAK_FUNC(sub_83BCCA08);
PPC_FUNC_IMPL(__imp__sub_83BCCA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11144
	ctx.r3.s64 = ctx.r11.s64 + 11144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCA14"))) PPC_WEAK_FUNC(sub_83BCCA14);
PPC_FUNC_IMPL(__imp__sub_83BCCA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCA18"))) PPC_WEAK_FUNC(sub_83BCCA18);
PPC_FUNC_IMPL(__imp__sub_83BCCA18) {
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
	// addi r3,r11,2912
	ctx.r3.s64 = ctx.r11.s64 + 2912;
	// bl 0x83523120
	ctx.lr = 0x83BCCA30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11152
	ctx.r3.s64 = ctx.r10.s64 + 11152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCCA3C;
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

__attribute__((alias("__imp__sub_83BCCA4C"))) PPC_WEAK_FUNC(sub_83BCCA4C);
PPC_FUNC_IMPL(__imp__sub_83BCCA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCA50"))) PPC_WEAK_FUNC(sub_83BCCA50);
PPC_FUNC_IMPL(__imp__sub_83BCCA50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2928
	ctx.r7.s64 = ctx.r8.s64 + 2928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCCA78"))) PPC_WEAK_FUNC(sub_83BCCA78);
PPC_FUNC_IMPL(__imp__sub_83BCCA78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,15080
	ctx.r6.s64 = ctx.r7.s64 + 15080;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15008(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15008);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2928);
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
	// std r9,15080(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCCAC0"))) PPC_WEAK_FUNC(sub_83BCCAC0);
PPC_FUNC_IMPL(__imp__sub_83BCCAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11168
	ctx.r3.s64 = ctx.r11.s64 + 11168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCACC"))) PPC_WEAK_FUNC(sub_83BCCACC);
PPC_FUNC_IMPL(__imp__sub_83BCCACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCAD0"))) PPC_WEAK_FUNC(sub_83BCCAD0);
PPC_FUNC_IMPL(__imp__sub_83BCCAD0) {
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
	// addi r3,r11,2936
	ctx.r3.s64 = ctx.r11.s64 + 2936;
	// bl 0x8259af80
	ctx.lr = 0x83BCCAE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11184
	ctx.r3.s64 = ctx.r10.s64 + 11184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCCAF4;
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

__attribute__((alias("__imp__sub_83BCCB04"))) PPC_WEAK_FUNC(sub_83BCCB04);
PPC_FUNC_IMPL(__imp__sub_83BCCB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCB08"))) PPC_WEAK_FUNC(sub_83BCCB08);
PPC_FUNC_IMPL(__imp__sub_83BCCB08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2916
	ctx.r11.s64 = ctx.r8.s64 + 2916;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,15056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15056);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11176
	ctx.r3.s64 = ctx.r6.s64 + 11176;
	// stw r10,2916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCB38"))) PPC_WEAK_FUNC(sub_83BCCB38);
PPC_FUNC_IMPL(__imp__sub_83BCCB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11192
	ctx.r3.s64 = ctx.r11.s64 + 11192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCB44"))) PPC_WEAK_FUNC(sub_83BCCB44);
PPC_FUNC_IMPL(__imp__sub_83BCCB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCB48"))) PPC_WEAK_FUNC(sub_83BCCB48);
PPC_FUNC_IMPL(__imp__sub_83BCCB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11200
	ctx.r3.s64 = ctx.r11.s64 + 11200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCB54"))) PPC_WEAK_FUNC(sub_83BCCB54);
PPC_FUNC_IMPL(__imp__sub_83BCCB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCB58"))) PPC_WEAK_FUNC(sub_83BCCB58);
PPC_FUNC_IMPL(__imp__sub_83BCCB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11208
	ctx.r3.s64 = ctx.r11.s64 + 11208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCB64"))) PPC_WEAK_FUNC(sub_83BCCB64);
PPC_FUNC_IMPL(__imp__sub_83BCCB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCB68"))) PPC_WEAK_FUNC(sub_83BCCB68);
PPC_FUNC_IMPL(__imp__sub_83BCCB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11216
	ctx.r3.s64 = ctx.r11.s64 + 11216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCB74"))) PPC_WEAK_FUNC(sub_83BCCB74);
PPC_FUNC_IMPL(__imp__sub_83BCCB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCB78"))) PPC_WEAK_FUNC(sub_83BCCB78);
PPC_FUNC_IMPL(__imp__sub_83BCCB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11224
	ctx.r3.s64 = ctx.r11.s64 + 11224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCB84"))) PPC_WEAK_FUNC(sub_83BCCB84);
PPC_FUNC_IMPL(__imp__sub_83BCCB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCB88"))) PPC_WEAK_FUNC(sub_83BCCB88);
PPC_FUNC_IMPL(__imp__sub_83BCCB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11232
	ctx.r3.s64 = ctx.r11.s64 + 11232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCB94"))) PPC_WEAK_FUNC(sub_83BCCB94);
PPC_FUNC_IMPL(__imp__sub_83BCCB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCB98"))) PPC_WEAK_FUNC(sub_83BCCB98);
PPC_FUNC_IMPL(__imp__sub_83BCCB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCBA4"))) PPC_WEAK_FUNC(sub_83BCCBA4);
PPC_FUNC_IMPL(__imp__sub_83BCCBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCBA8"))) PPC_WEAK_FUNC(sub_83BCCBA8);
PPC_FUNC_IMPL(__imp__sub_83BCCBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11248
	ctx.r3.s64 = ctx.r11.s64 + 11248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCBB4"))) PPC_WEAK_FUNC(sub_83BCCBB4);
PPC_FUNC_IMPL(__imp__sub_83BCCBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCBB8"))) PPC_WEAK_FUNC(sub_83BCCBB8);
PPC_FUNC_IMPL(__imp__sub_83BCCBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11256
	ctx.r3.s64 = ctx.r11.s64 + 11256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCBC4"))) PPC_WEAK_FUNC(sub_83BCCBC4);
PPC_FUNC_IMPL(__imp__sub_83BCCBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCBC8"))) PPC_WEAK_FUNC(sub_83BCCBC8);
PPC_FUNC_IMPL(__imp__sub_83BCCBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11264
	ctx.r3.s64 = ctx.r11.s64 + 11264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCBD4"))) PPC_WEAK_FUNC(sub_83BCCBD4);
PPC_FUNC_IMPL(__imp__sub_83BCCBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCBD8"))) PPC_WEAK_FUNC(sub_83BCCBD8);
PPC_FUNC_IMPL(__imp__sub_83BCCBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11272
	ctx.r3.s64 = ctx.r11.s64 + 11272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCBE4"))) PPC_WEAK_FUNC(sub_83BCCBE4);
PPC_FUNC_IMPL(__imp__sub_83BCCBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCBE8"))) PPC_WEAK_FUNC(sub_83BCCBE8);
PPC_FUNC_IMPL(__imp__sub_83BCCBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11280
	ctx.r3.s64 = ctx.r11.s64 + 11280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCBF4"))) PPC_WEAK_FUNC(sub_83BCCBF4);
PPC_FUNC_IMPL(__imp__sub_83BCCBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCBF8"))) PPC_WEAK_FUNC(sub_83BCCBF8);
PPC_FUNC_IMPL(__imp__sub_83BCCBF8) {
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
	// addi r3,r11,3280
	ctx.r3.s64 = ctx.r11.s64 + 3280;
	// bl 0x83523120
	ctx.lr = 0x83BCCC10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11288
	ctx.r3.s64 = ctx.r10.s64 + 11288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCCC1C;
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

__attribute__((alias("__imp__sub_83BCCC2C"))) PPC_WEAK_FUNC(sub_83BCCC2C);
PPC_FUNC_IMPL(__imp__sub_83BCCC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCC30"))) PPC_WEAK_FUNC(sub_83BCCC30);
PPC_FUNC_IMPL(__imp__sub_83BCCC30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3296
	ctx.r7.s64 = ctx.r8.s64 + 3296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCCC58"))) PPC_WEAK_FUNC(sub_83BCCC58);
PPC_FUNC_IMPL(__imp__sub_83BCCC58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,15212
	ctx.r6.s64 = ctx.r7.s64 + 15212;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15140(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15140);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3296);
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
	// std r9,15212(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCCCA0"))) PPC_WEAK_FUNC(sub_83BCCCA0);
PPC_FUNC_IMPL(__imp__sub_83BCCCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11304
	ctx.r3.s64 = ctx.r11.s64 + 11304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCCAC"))) PPC_WEAK_FUNC(sub_83BCCCAC);
PPC_FUNC_IMPL(__imp__sub_83BCCCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCCB0"))) PPC_WEAK_FUNC(sub_83BCCCB0);
PPC_FUNC_IMPL(__imp__sub_83BCCCB0) {
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
	// addi r3,r11,3304
	ctx.r3.s64 = ctx.r11.s64 + 3304;
	// bl 0x8259af80
	ctx.lr = 0x83BCCCC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11320
	ctx.r3.s64 = ctx.r10.s64 + 11320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCCCD4;
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

__attribute__((alias("__imp__sub_83BCCCE4"))) PPC_WEAK_FUNC(sub_83BCCCE4);
PPC_FUNC_IMPL(__imp__sub_83BCCCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCCE8"))) PPC_WEAK_FUNC(sub_83BCCCE8);
PPC_FUNC_IMPL(__imp__sub_83BCCCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3284
	ctx.r11.s64 = ctx.r8.s64 + 3284;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,15188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11312
	ctx.r3.s64 = ctx.r6.s64 + 11312;
	// stw r10,3284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD18"))) PPC_WEAK_FUNC(sub_83BCCD18);
PPC_FUNC_IMPL(__imp__sub_83BCCD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11328
	ctx.r3.s64 = ctx.r11.s64 + 11328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD24"))) PPC_WEAK_FUNC(sub_83BCCD24);
PPC_FUNC_IMPL(__imp__sub_83BCCD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCD28"))) PPC_WEAK_FUNC(sub_83BCCD28);
PPC_FUNC_IMPL(__imp__sub_83BCCD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD34"))) PPC_WEAK_FUNC(sub_83BCCD34);
PPC_FUNC_IMPL(__imp__sub_83BCCD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCD38"))) PPC_WEAK_FUNC(sub_83BCCD38);
PPC_FUNC_IMPL(__imp__sub_83BCCD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11344
	ctx.r3.s64 = ctx.r11.s64 + 11344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD44"))) PPC_WEAK_FUNC(sub_83BCCD44);
PPC_FUNC_IMPL(__imp__sub_83BCCD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCD48"))) PPC_WEAK_FUNC(sub_83BCCD48);
PPC_FUNC_IMPL(__imp__sub_83BCCD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11352
	ctx.r3.s64 = ctx.r11.s64 + 11352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD54"))) PPC_WEAK_FUNC(sub_83BCCD54);
PPC_FUNC_IMPL(__imp__sub_83BCCD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCD58"))) PPC_WEAK_FUNC(sub_83BCCD58);
PPC_FUNC_IMPL(__imp__sub_83BCCD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11360
	ctx.r3.s64 = ctx.r11.s64 + 11360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD64"))) PPC_WEAK_FUNC(sub_83BCCD64);
PPC_FUNC_IMPL(__imp__sub_83BCCD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCD68"))) PPC_WEAK_FUNC(sub_83BCCD68);
PPC_FUNC_IMPL(__imp__sub_83BCCD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11368
	ctx.r3.s64 = ctx.r11.s64 + 11368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD74"))) PPC_WEAK_FUNC(sub_83BCCD74);
PPC_FUNC_IMPL(__imp__sub_83BCCD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCD78"))) PPC_WEAK_FUNC(sub_83BCCD78);
PPC_FUNC_IMPL(__imp__sub_83BCCD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11376
	ctx.r3.s64 = ctx.r11.s64 + 11376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD84"))) PPC_WEAK_FUNC(sub_83BCCD84);
PPC_FUNC_IMPL(__imp__sub_83BCCD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCD88"))) PPC_WEAK_FUNC(sub_83BCCD88);
PPC_FUNC_IMPL(__imp__sub_83BCCD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11384
	ctx.r3.s64 = ctx.r11.s64 + 11384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCD94"))) PPC_WEAK_FUNC(sub_83BCCD94);
PPC_FUNC_IMPL(__imp__sub_83BCCD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCD98"))) PPC_WEAK_FUNC(sub_83BCCD98);
PPC_FUNC_IMPL(__imp__sub_83BCCD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11392
	ctx.r3.s64 = ctx.r11.s64 + 11392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCDA4"))) PPC_WEAK_FUNC(sub_83BCCDA4);
PPC_FUNC_IMPL(__imp__sub_83BCCDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCDA8"))) PPC_WEAK_FUNC(sub_83BCCDA8);
PPC_FUNC_IMPL(__imp__sub_83BCCDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11400
	ctx.r3.s64 = ctx.r11.s64 + 11400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCDB4"))) PPC_WEAK_FUNC(sub_83BCCDB4);
PPC_FUNC_IMPL(__imp__sub_83BCCDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCDB8"))) PPC_WEAK_FUNC(sub_83BCCDB8);
PPC_FUNC_IMPL(__imp__sub_83BCCDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11408
	ctx.r3.s64 = ctx.r11.s64 + 11408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCDC4"))) PPC_WEAK_FUNC(sub_83BCCDC4);
PPC_FUNC_IMPL(__imp__sub_83BCCDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCDC8"))) PPC_WEAK_FUNC(sub_83BCCDC8);
PPC_FUNC_IMPL(__imp__sub_83BCCDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11416
	ctx.r3.s64 = ctx.r11.s64 + 11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCDD4"))) PPC_WEAK_FUNC(sub_83BCCDD4);
PPC_FUNC_IMPL(__imp__sub_83BCCDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCDD8"))) PPC_WEAK_FUNC(sub_83BCCDD8);
PPC_FUNC_IMPL(__imp__sub_83BCCDD8) {
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
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
	// bl 0x83523120
	ctx.lr = 0x83BCCDF0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11424
	ctx.r3.s64 = ctx.r10.s64 + 11424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCCDFC;
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

__attribute__((alias("__imp__sub_83BCCE0C"))) PPC_WEAK_FUNC(sub_83BCCE0C);
PPC_FUNC_IMPL(__imp__sub_83BCCE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCE10"))) PPC_WEAK_FUNC(sub_83BCCE10);
PPC_FUNC_IMPL(__imp__sub_83BCCE10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3664
	ctx.r7.s64 = ctx.r8.s64 + 3664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCCE38"))) PPC_WEAK_FUNC(sub_83BCCE38);
PPC_FUNC_IMPL(__imp__sub_83BCCE38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,15344
	ctx.r6.s64 = ctx.r7.s64 + 15344;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15272(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15272);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3664);
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
	// std r9,15344(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15344, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCCE80"))) PPC_WEAK_FUNC(sub_83BCCE80);
PPC_FUNC_IMPL(__imp__sub_83BCCE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11440
	ctx.r3.s64 = ctx.r11.s64 + 11440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCE8C"))) PPC_WEAK_FUNC(sub_83BCCE8C);
PPC_FUNC_IMPL(__imp__sub_83BCCE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCE90"))) PPC_WEAK_FUNC(sub_83BCCE90);
PPC_FUNC_IMPL(__imp__sub_83BCCE90) {
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
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// bl 0x8259af80
	ctx.lr = 0x83BCCEA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11456
	ctx.r3.s64 = ctx.r10.s64 + 11456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCCEB4;
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

__attribute__((alias("__imp__sub_83BCCEC4"))) PPC_WEAK_FUNC(sub_83BCCEC4);
PPC_FUNC_IMPL(__imp__sub_83BCCEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCEC8"))) PPC_WEAK_FUNC(sub_83BCCEC8);
PPC_FUNC_IMPL(__imp__sub_83BCCEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3652
	ctx.r11.s64 = ctx.r8.s64 + 3652;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,15320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15320);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11448
	ctx.r3.s64 = ctx.r6.s64 + 11448;
	// stw r10,3652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCEF8"))) PPC_WEAK_FUNC(sub_83BCCEF8);
PPC_FUNC_IMPL(__imp__sub_83BCCEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11464
	ctx.r3.s64 = ctx.r11.s64 + 11464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF04"))) PPC_WEAK_FUNC(sub_83BCCF04);
PPC_FUNC_IMPL(__imp__sub_83BCCF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF08"))) PPC_WEAK_FUNC(sub_83BCCF08);
PPC_FUNC_IMPL(__imp__sub_83BCCF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11472
	ctx.r3.s64 = ctx.r11.s64 + 11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF14"))) PPC_WEAK_FUNC(sub_83BCCF14);
PPC_FUNC_IMPL(__imp__sub_83BCCF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF18"))) PPC_WEAK_FUNC(sub_83BCCF18);
PPC_FUNC_IMPL(__imp__sub_83BCCF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11480
	ctx.r3.s64 = ctx.r11.s64 + 11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF24"))) PPC_WEAK_FUNC(sub_83BCCF24);
PPC_FUNC_IMPL(__imp__sub_83BCCF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF28"))) PPC_WEAK_FUNC(sub_83BCCF28);
PPC_FUNC_IMPL(__imp__sub_83BCCF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF34"))) PPC_WEAK_FUNC(sub_83BCCF34);
PPC_FUNC_IMPL(__imp__sub_83BCCF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF38"))) PPC_WEAK_FUNC(sub_83BCCF38);
PPC_FUNC_IMPL(__imp__sub_83BCCF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11496
	ctx.r3.s64 = ctx.r11.s64 + 11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF44"))) PPC_WEAK_FUNC(sub_83BCCF44);
PPC_FUNC_IMPL(__imp__sub_83BCCF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF48"))) PPC_WEAK_FUNC(sub_83BCCF48);
PPC_FUNC_IMPL(__imp__sub_83BCCF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11504
	ctx.r3.s64 = ctx.r11.s64 + 11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF54"))) PPC_WEAK_FUNC(sub_83BCCF54);
PPC_FUNC_IMPL(__imp__sub_83BCCF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF58"))) PPC_WEAK_FUNC(sub_83BCCF58);
PPC_FUNC_IMPL(__imp__sub_83BCCF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF64"))) PPC_WEAK_FUNC(sub_83BCCF64);
PPC_FUNC_IMPL(__imp__sub_83BCCF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF68"))) PPC_WEAK_FUNC(sub_83BCCF68);
PPC_FUNC_IMPL(__imp__sub_83BCCF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11520
	ctx.r3.s64 = ctx.r11.s64 + 11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF74"))) PPC_WEAK_FUNC(sub_83BCCF74);
PPC_FUNC_IMPL(__imp__sub_83BCCF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF78"))) PPC_WEAK_FUNC(sub_83BCCF78);
PPC_FUNC_IMPL(__imp__sub_83BCCF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11528
	ctx.r3.s64 = ctx.r11.s64 + 11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF84"))) PPC_WEAK_FUNC(sub_83BCCF84);
PPC_FUNC_IMPL(__imp__sub_83BCCF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF88"))) PPC_WEAK_FUNC(sub_83BCCF88);
PPC_FUNC_IMPL(__imp__sub_83BCCF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11536
	ctx.r3.s64 = ctx.r11.s64 + 11536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCF94"))) PPC_WEAK_FUNC(sub_83BCCF94);
PPC_FUNC_IMPL(__imp__sub_83BCCF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCF98"))) PPC_WEAK_FUNC(sub_83BCCF98);
PPC_FUNC_IMPL(__imp__sub_83BCCF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11544
	ctx.r3.s64 = ctx.r11.s64 + 11544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCFA4"))) PPC_WEAK_FUNC(sub_83BCCFA4);
PPC_FUNC_IMPL(__imp__sub_83BCCFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCFA8"))) PPC_WEAK_FUNC(sub_83BCCFA8);
PPC_FUNC_IMPL(__imp__sub_83BCCFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11552
	ctx.r3.s64 = ctx.r11.s64 + 11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCCFB4"))) PPC_WEAK_FUNC(sub_83BCCFB4);
PPC_FUNC_IMPL(__imp__sub_83BCCFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCFB8"))) PPC_WEAK_FUNC(sub_83BCCFB8);
PPC_FUNC_IMPL(__imp__sub_83BCCFB8) {
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
	// addi r3,r11,4016
	ctx.r3.s64 = ctx.r11.s64 + 4016;
	// bl 0x83523120
	ctx.lr = 0x83BCCFD0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11560
	ctx.r3.s64 = ctx.r10.s64 + 11560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCCFDC;
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

__attribute__((alias("__imp__sub_83BCCFEC"))) PPC_WEAK_FUNC(sub_83BCCFEC);
PPC_FUNC_IMPL(__imp__sub_83BCCFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCCFF0"))) PPC_WEAK_FUNC(sub_83BCCFF0);
PPC_FUNC_IMPL(__imp__sub_83BCCFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4032
	ctx.r7.s64 = ctx.r8.s64 + 4032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD018"))) PPC_WEAK_FUNC(sub_83BCD018);
PPC_FUNC_IMPL(__imp__sub_83BCD018) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,15472
	ctx.r6.s64 = ctx.r7.s64 + 15472;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15400(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15400);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4032);
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
	// std r9,15472(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15472, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD060"))) PPC_WEAK_FUNC(sub_83BCD060);
PPC_FUNC_IMPL(__imp__sub_83BCD060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11576
	ctx.r3.s64 = ctx.r11.s64 + 11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD06C"))) PPC_WEAK_FUNC(sub_83BCD06C);
PPC_FUNC_IMPL(__imp__sub_83BCD06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD070"))) PPC_WEAK_FUNC(sub_83BCD070);
PPC_FUNC_IMPL(__imp__sub_83BCD070) {
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
	// addi r3,r11,4040
	ctx.r3.s64 = ctx.r11.s64 + 4040;
	// bl 0x8259af80
	ctx.lr = 0x83BCD088;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11592
	ctx.r3.s64 = ctx.r10.s64 + 11592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD094;
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

__attribute__((alias("__imp__sub_83BCD0A4"))) PPC_WEAK_FUNC(sub_83BCD0A4);
PPC_FUNC_IMPL(__imp__sub_83BCD0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD0A8"))) PPC_WEAK_FUNC(sub_83BCD0A8);
PPC_FUNC_IMPL(__imp__sub_83BCD0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4020
	ctx.r11.s64 = ctx.r8.s64 + 4020;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,15448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15448);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11584
	ctx.r3.s64 = ctx.r6.s64 + 11584;
	// stw r10,4020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD0D8"))) PPC_WEAK_FUNC(sub_83BCD0D8);
PPC_FUNC_IMPL(__imp__sub_83BCD0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD0E4"))) PPC_WEAK_FUNC(sub_83BCD0E4);
PPC_FUNC_IMPL(__imp__sub_83BCD0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD0E8"))) PPC_WEAK_FUNC(sub_83BCD0E8);
PPC_FUNC_IMPL(__imp__sub_83BCD0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11608
	ctx.r3.s64 = ctx.r11.s64 + 11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD0F4"))) PPC_WEAK_FUNC(sub_83BCD0F4);
PPC_FUNC_IMPL(__imp__sub_83BCD0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD0F8"))) PPC_WEAK_FUNC(sub_83BCD0F8);
PPC_FUNC_IMPL(__imp__sub_83BCD0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD104"))) PPC_WEAK_FUNC(sub_83BCD104);
PPC_FUNC_IMPL(__imp__sub_83BCD104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD108"))) PPC_WEAK_FUNC(sub_83BCD108);
PPC_FUNC_IMPL(__imp__sub_83BCD108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11624
	ctx.r3.s64 = ctx.r11.s64 + 11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD114"))) PPC_WEAK_FUNC(sub_83BCD114);
PPC_FUNC_IMPL(__imp__sub_83BCD114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD118"))) PPC_WEAK_FUNC(sub_83BCD118);
PPC_FUNC_IMPL(__imp__sub_83BCD118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD124"))) PPC_WEAK_FUNC(sub_83BCD124);
PPC_FUNC_IMPL(__imp__sub_83BCD124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD128"))) PPC_WEAK_FUNC(sub_83BCD128);
PPC_FUNC_IMPL(__imp__sub_83BCD128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11640
	ctx.r3.s64 = ctx.r11.s64 + 11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD134"))) PPC_WEAK_FUNC(sub_83BCD134);
PPC_FUNC_IMPL(__imp__sub_83BCD134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD138"))) PPC_WEAK_FUNC(sub_83BCD138);
PPC_FUNC_IMPL(__imp__sub_83BCD138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11648
	ctx.r3.s64 = ctx.r11.s64 + 11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD144"))) PPC_WEAK_FUNC(sub_83BCD144);
PPC_FUNC_IMPL(__imp__sub_83BCD144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD148"))) PPC_WEAK_FUNC(sub_83BCD148);
PPC_FUNC_IMPL(__imp__sub_83BCD148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11656
	ctx.r3.s64 = ctx.r11.s64 + 11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD154"))) PPC_WEAK_FUNC(sub_83BCD154);
PPC_FUNC_IMPL(__imp__sub_83BCD154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD158"))) PPC_WEAK_FUNC(sub_83BCD158);
PPC_FUNC_IMPL(__imp__sub_83BCD158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11664
	ctx.r3.s64 = ctx.r11.s64 + 11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD164"))) PPC_WEAK_FUNC(sub_83BCD164);
PPC_FUNC_IMPL(__imp__sub_83BCD164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD168"))) PPC_WEAK_FUNC(sub_83BCD168);
PPC_FUNC_IMPL(__imp__sub_83BCD168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11672
	ctx.r3.s64 = ctx.r11.s64 + 11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD174"))) PPC_WEAK_FUNC(sub_83BCD174);
PPC_FUNC_IMPL(__imp__sub_83BCD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD178"))) PPC_WEAK_FUNC(sub_83BCD178);
PPC_FUNC_IMPL(__imp__sub_83BCD178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD184"))) PPC_WEAK_FUNC(sub_83BCD184);
PPC_FUNC_IMPL(__imp__sub_83BCD184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD188"))) PPC_WEAK_FUNC(sub_83BCD188);
PPC_FUNC_IMPL(__imp__sub_83BCD188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11688
	ctx.r3.s64 = ctx.r11.s64 + 11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD194"))) PPC_WEAK_FUNC(sub_83BCD194);
PPC_FUNC_IMPL(__imp__sub_83BCD194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD198"))) PPC_WEAK_FUNC(sub_83BCD198);
PPC_FUNC_IMPL(__imp__sub_83BCD198) {
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
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// bl 0x83523120
	ctx.lr = 0x83BCD1B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11696
	ctx.r3.s64 = ctx.r10.s64 + 11696;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD1BC;
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

__attribute__((alias("__imp__sub_83BCD1CC"))) PPC_WEAK_FUNC(sub_83BCD1CC);
PPC_FUNC_IMPL(__imp__sub_83BCD1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD1D0"))) PPC_WEAK_FUNC(sub_83BCD1D0);
PPC_FUNC_IMPL(__imp__sub_83BCD1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4400
	ctx.r7.s64 = ctx.r8.s64 + 4400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD1F8"))) PPC_WEAK_FUNC(sub_83BCD1F8);
PPC_FUNC_IMPL(__imp__sub_83BCD1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,15616
	ctx.r6.s64 = ctx.r7.s64 + 15616;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15544(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15544);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4400);
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
	// std r9,15616(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15616, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD240"))) PPC_WEAK_FUNC(sub_83BCD240);
PPC_FUNC_IMPL(__imp__sub_83BCD240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11712
	ctx.r3.s64 = ctx.r11.s64 + 11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD24C"))) PPC_WEAK_FUNC(sub_83BCD24C);
PPC_FUNC_IMPL(__imp__sub_83BCD24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD250"))) PPC_WEAK_FUNC(sub_83BCD250);
PPC_FUNC_IMPL(__imp__sub_83BCD250) {
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
	// addi r3,r11,4408
	ctx.r3.s64 = ctx.r11.s64 + 4408;
	// bl 0x8259af80
	ctx.lr = 0x83BCD268;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11728
	ctx.r3.s64 = ctx.r10.s64 + 11728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD274;
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

__attribute__((alias("__imp__sub_83BCD284"))) PPC_WEAK_FUNC(sub_83BCD284);
PPC_FUNC_IMPL(__imp__sub_83BCD284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD288"))) PPC_WEAK_FUNC(sub_83BCD288);
PPC_FUNC_IMPL(__imp__sub_83BCD288) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4388
	ctx.r11.s64 = ctx.r8.s64 + 4388;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,15592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15592);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11720
	ctx.r3.s64 = ctx.r6.s64 + 11720;
	// stw r10,4388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD2B8"))) PPC_WEAK_FUNC(sub_83BCD2B8);
PPC_FUNC_IMPL(__imp__sub_83BCD2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11736
	ctx.r3.s64 = ctx.r11.s64 + 11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD2C4"))) PPC_WEAK_FUNC(sub_83BCD2C4);
PPC_FUNC_IMPL(__imp__sub_83BCD2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD2C8"))) PPC_WEAK_FUNC(sub_83BCD2C8);
PPC_FUNC_IMPL(__imp__sub_83BCD2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD2D4"))) PPC_WEAK_FUNC(sub_83BCD2D4);
PPC_FUNC_IMPL(__imp__sub_83BCD2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD2D8"))) PPC_WEAK_FUNC(sub_83BCD2D8);
PPC_FUNC_IMPL(__imp__sub_83BCD2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11752
	ctx.r3.s64 = ctx.r11.s64 + 11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD2E4"))) PPC_WEAK_FUNC(sub_83BCD2E4);
PPC_FUNC_IMPL(__imp__sub_83BCD2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD2E8"))) PPC_WEAK_FUNC(sub_83BCD2E8);
PPC_FUNC_IMPL(__imp__sub_83BCD2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11760
	ctx.r3.s64 = ctx.r11.s64 + 11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD2F4"))) PPC_WEAK_FUNC(sub_83BCD2F4);
PPC_FUNC_IMPL(__imp__sub_83BCD2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD2F8"))) PPC_WEAK_FUNC(sub_83BCD2F8);
PPC_FUNC_IMPL(__imp__sub_83BCD2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11768
	ctx.r3.s64 = ctx.r11.s64 + 11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD304"))) PPC_WEAK_FUNC(sub_83BCD304);
PPC_FUNC_IMPL(__imp__sub_83BCD304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD308"))) PPC_WEAK_FUNC(sub_83BCD308);
PPC_FUNC_IMPL(__imp__sub_83BCD308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD314"))) PPC_WEAK_FUNC(sub_83BCD314);
PPC_FUNC_IMPL(__imp__sub_83BCD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD318"))) PPC_WEAK_FUNC(sub_83BCD318);
PPC_FUNC_IMPL(__imp__sub_83BCD318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11784
	ctx.r3.s64 = ctx.r11.s64 + 11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD324"))) PPC_WEAK_FUNC(sub_83BCD324);
PPC_FUNC_IMPL(__imp__sub_83BCD324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD328"))) PPC_WEAK_FUNC(sub_83BCD328);
PPC_FUNC_IMPL(__imp__sub_83BCD328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11792
	ctx.r3.s64 = ctx.r11.s64 + 11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD334"))) PPC_WEAK_FUNC(sub_83BCD334);
PPC_FUNC_IMPL(__imp__sub_83BCD334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD338"))) PPC_WEAK_FUNC(sub_83BCD338);
PPC_FUNC_IMPL(__imp__sub_83BCD338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD344"))) PPC_WEAK_FUNC(sub_83BCD344);
PPC_FUNC_IMPL(__imp__sub_83BCD344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD348"))) PPC_WEAK_FUNC(sub_83BCD348);
PPC_FUNC_IMPL(__imp__sub_83BCD348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11808
	ctx.r3.s64 = ctx.r11.s64 + 11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD354"))) PPC_WEAK_FUNC(sub_83BCD354);
PPC_FUNC_IMPL(__imp__sub_83BCD354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD358"))) PPC_WEAK_FUNC(sub_83BCD358);
PPC_FUNC_IMPL(__imp__sub_83BCD358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11816
	ctx.r3.s64 = ctx.r11.s64 + 11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD364"))) PPC_WEAK_FUNC(sub_83BCD364);
PPC_FUNC_IMPL(__imp__sub_83BCD364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD368"))) PPC_WEAK_FUNC(sub_83BCD368);
PPC_FUNC_IMPL(__imp__sub_83BCD368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11824
	ctx.r3.s64 = ctx.r11.s64 + 11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD374"))) PPC_WEAK_FUNC(sub_83BCD374);
PPC_FUNC_IMPL(__imp__sub_83BCD374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD378"))) PPC_WEAK_FUNC(sub_83BCD378);
PPC_FUNC_IMPL(__imp__sub_83BCD378) {
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
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// bl 0x83523120
	ctx.lr = 0x83BCD390;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11832
	ctx.r3.s64 = ctx.r10.s64 + 11832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD39C;
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

__attribute__((alias("__imp__sub_83BCD3AC"))) PPC_WEAK_FUNC(sub_83BCD3AC);
PPC_FUNC_IMPL(__imp__sub_83BCD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD3B0"))) PPC_WEAK_FUNC(sub_83BCD3B0);
PPC_FUNC_IMPL(__imp__sub_83BCD3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4944
	ctx.r7.s64 = ctx.r8.s64 + 4944;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4944(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4944);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4944(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4944, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD3D8"))) PPC_WEAK_FUNC(sub_83BCD3D8);
PPC_FUNC_IMPL(__imp__sub_83BCD3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,15864
	ctx.r6.s64 = ctx.r7.s64 + 15864;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15792(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15792);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4944(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4944);
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
	// std r9,15864(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15864, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD420"))) PPC_WEAK_FUNC(sub_83BCD420);
PPC_FUNC_IMPL(__imp__sub_83BCD420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11848
	ctx.r3.s64 = ctx.r11.s64 + 11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD42C"))) PPC_WEAK_FUNC(sub_83BCD42C);
PPC_FUNC_IMPL(__imp__sub_83BCD42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD430"))) PPC_WEAK_FUNC(sub_83BCD430);
PPC_FUNC_IMPL(__imp__sub_83BCD430) {
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
	// addi r3,r11,4952
	ctx.r3.s64 = ctx.r11.s64 + 4952;
	// bl 0x8259af80
	ctx.lr = 0x83BCD448;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,11864
	ctx.r3.s64 = ctx.r10.s64 + 11864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD454;
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

__attribute__((alias("__imp__sub_83BCD464"))) PPC_WEAK_FUNC(sub_83BCD464);
PPC_FUNC_IMPL(__imp__sub_83BCD464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD468"))) PPC_WEAK_FUNC(sub_83BCD468);
PPC_FUNC_IMPL(__imp__sub_83BCD468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4932
	ctx.r11.s64 = ctx.r8.s64 + 4932;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,15840(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15840);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11856
	ctx.r3.s64 = ctx.r6.s64 + 11856;
	// stw r10,4932(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4932, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD498"))) PPC_WEAK_FUNC(sub_83BCD498);
PPC_FUNC_IMPL(__imp__sub_83BCD498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12080
	ctx.r3.s64 = ctx.r11.s64 + 12080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD4A4"))) PPC_WEAK_FUNC(sub_83BCD4A4);
PPC_FUNC_IMPL(__imp__sub_83BCD4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD4A8"))) PPC_WEAK_FUNC(sub_83BCD4A8);
PPC_FUNC_IMPL(__imp__sub_83BCD4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD4B4"))) PPC_WEAK_FUNC(sub_83BCD4B4);
PPC_FUNC_IMPL(__imp__sub_83BCD4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD4B8"))) PPC_WEAK_FUNC(sub_83BCD4B8);
PPC_FUNC_IMPL(__imp__sub_83BCD4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12096
	ctx.r3.s64 = ctx.r11.s64 + 12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD4C4"))) PPC_WEAK_FUNC(sub_83BCD4C4);
PPC_FUNC_IMPL(__imp__sub_83BCD4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD4C8"))) PPC_WEAK_FUNC(sub_83BCD4C8);
PPC_FUNC_IMPL(__imp__sub_83BCD4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12104
	ctx.r3.s64 = ctx.r11.s64 + 12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD4D4"))) PPC_WEAK_FUNC(sub_83BCD4D4);
PPC_FUNC_IMPL(__imp__sub_83BCD4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD4D8"))) PPC_WEAK_FUNC(sub_83BCD4D8);
PPC_FUNC_IMPL(__imp__sub_83BCD4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD4E4"))) PPC_WEAK_FUNC(sub_83BCD4E4);
PPC_FUNC_IMPL(__imp__sub_83BCD4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD4E8"))) PPC_WEAK_FUNC(sub_83BCD4E8);
PPC_FUNC_IMPL(__imp__sub_83BCD4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12120
	ctx.r3.s64 = ctx.r11.s64 + 12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD4F4"))) PPC_WEAK_FUNC(sub_83BCD4F4);
PPC_FUNC_IMPL(__imp__sub_83BCD4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD4F8"))) PPC_WEAK_FUNC(sub_83BCD4F8);
PPC_FUNC_IMPL(__imp__sub_83BCD4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12128
	ctx.r3.s64 = ctx.r11.s64 + 12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD504"))) PPC_WEAK_FUNC(sub_83BCD504);
PPC_FUNC_IMPL(__imp__sub_83BCD504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD508"))) PPC_WEAK_FUNC(sub_83BCD508);
PPC_FUNC_IMPL(__imp__sub_83BCD508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12136
	ctx.r3.s64 = ctx.r11.s64 + 12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD514"))) PPC_WEAK_FUNC(sub_83BCD514);
PPC_FUNC_IMPL(__imp__sub_83BCD514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD518"))) PPC_WEAK_FUNC(sub_83BCD518);
PPC_FUNC_IMPL(__imp__sub_83BCD518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12144
	ctx.r3.s64 = ctx.r11.s64 + 12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD524"))) PPC_WEAK_FUNC(sub_83BCD524);
PPC_FUNC_IMPL(__imp__sub_83BCD524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD528"))) PPC_WEAK_FUNC(sub_83BCD528);
PPC_FUNC_IMPL(__imp__sub_83BCD528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12152
	ctx.r3.s64 = ctx.r11.s64 + 12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD534"))) PPC_WEAK_FUNC(sub_83BCD534);
PPC_FUNC_IMPL(__imp__sub_83BCD534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD538"))) PPC_WEAK_FUNC(sub_83BCD538);
PPC_FUNC_IMPL(__imp__sub_83BCD538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12160
	ctx.r3.s64 = ctx.r11.s64 + 12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD544"))) PPC_WEAK_FUNC(sub_83BCD544);
PPC_FUNC_IMPL(__imp__sub_83BCD544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD548"))) PPC_WEAK_FUNC(sub_83BCD548);
PPC_FUNC_IMPL(__imp__sub_83BCD548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12168
	ctx.r3.s64 = ctx.r11.s64 + 12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD554"))) PPC_WEAK_FUNC(sub_83BCD554);
PPC_FUNC_IMPL(__imp__sub_83BCD554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD558"))) PPC_WEAK_FUNC(sub_83BCD558);
PPC_FUNC_IMPL(__imp__sub_83BCD558) {
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
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// bl 0x83523120
	ctx.lr = 0x83BCD570;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12176
	ctx.r3.s64 = ctx.r10.s64 + 12176;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD57C;
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

__attribute__((alias("__imp__sub_83BCD58C"))) PPC_WEAK_FUNC(sub_83BCD58C);
PPC_FUNC_IMPL(__imp__sub_83BCD58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD590"))) PPC_WEAK_FUNC(sub_83BCD590);
PPC_FUNC_IMPL(__imp__sub_83BCD590) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5312
	ctx.r7.s64 = ctx.r8.s64 + 5312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5312);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5312, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD5B8"))) PPC_WEAK_FUNC(sub_83BCD5B8);
PPC_FUNC_IMPL(__imp__sub_83BCD5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,16012
	ctx.r6.s64 = ctx.r7.s64 + 16012;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15940(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15940);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5312);
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
	// std r9,16012(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16012, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD600"))) PPC_WEAK_FUNC(sub_83BCD600);
PPC_FUNC_IMPL(__imp__sub_83BCD600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12192
	ctx.r3.s64 = ctx.r11.s64 + 12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD60C"))) PPC_WEAK_FUNC(sub_83BCD60C);
PPC_FUNC_IMPL(__imp__sub_83BCD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD610"))) PPC_WEAK_FUNC(sub_83BCD610);
PPC_FUNC_IMPL(__imp__sub_83BCD610) {
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
	// addi r3,r11,5320
	ctx.r3.s64 = ctx.r11.s64 + 5320;
	// bl 0x8259af80
	ctx.lr = 0x83BCD628;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12208
	ctx.r3.s64 = ctx.r10.s64 + 12208;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD634;
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

__attribute__((alias("__imp__sub_83BCD644"))) PPC_WEAK_FUNC(sub_83BCD644);
PPC_FUNC_IMPL(__imp__sub_83BCD644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD648"))) PPC_WEAK_FUNC(sub_83BCD648);
PPC_FUNC_IMPL(__imp__sub_83BCD648) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5300
	ctx.r11.s64 = ctx.r8.s64 + 5300;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,15988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15988);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12200
	ctx.r3.s64 = ctx.r6.s64 + 12200;
	// stw r10,5300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5300, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD678"))) PPC_WEAK_FUNC(sub_83BCD678);
PPC_FUNC_IMPL(__imp__sub_83BCD678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD684"))) PPC_WEAK_FUNC(sub_83BCD684);
PPC_FUNC_IMPL(__imp__sub_83BCD684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD688"))) PPC_WEAK_FUNC(sub_83BCD688);
PPC_FUNC_IMPL(__imp__sub_83BCD688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12224
	ctx.r3.s64 = ctx.r11.s64 + 12224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD694"))) PPC_WEAK_FUNC(sub_83BCD694);
PPC_FUNC_IMPL(__imp__sub_83BCD694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD698"))) PPC_WEAK_FUNC(sub_83BCD698);
PPC_FUNC_IMPL(__imp__sub_83BCD698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12232
	ctx.r3.s64 = ctx.r11.s64 + 12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD6A4"))) PPC_WEAK_FUNC(sub_83BCD6A4);
PPC_FUNC_IMPL(__imp__sub_83BCD6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD6A8"))) PPC_WEAK_FUNC(sub_83BCD6A8);
PPC_FUNC_IMPL(__imp__sub_83BCD6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12240
	ctx.r3.s64 = ctx.r11.s64 + 12240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD6B4"))) PPC_WEAK_FUNC(sub_83BCD6B4);
PPC_FUNC_IMPL(__imp__sub_83BCD6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD6B8"))) PPC_WEAK_FUNC(sub_83BCD6B8);
PPC_FUNC_IMPL(__imp__sub_83BCD6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12248
	ctx.r3.s64 = ctx.r11.s64 + 12248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD6C4"))) PPC_WEAK_FUNC(sub_83BCD6C4);
PPC_FUNC_IMPL(__imp__sub_83BCD6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD6C8"))) PPC_WEAK_FUNC(sub_83BCD6C8);
PPC_FUNC_IMPL(__imp__sub_83BCD6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12256
	ctx.r3.s64 = ctx.r11.s64 + 12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD6D4"))) PPC_WEAK_FUNC(sub_83BCD6D4);
PPC_FUNC_IMPL(__imp__sub_83BCD6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD6D8"))) PPC_WEAK_FUNC(sub_83BCD6D8);
PPC_FUNC_IMPL(__imp__sub_83BCD6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD6E4"))) PPC_WEAK_FUNC(sub_83BCD6E4);
PPC_FUNC_IMPL(__imp__sub_83BCD6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

