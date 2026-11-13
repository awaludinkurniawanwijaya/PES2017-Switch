#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BB5334"))) PPC_WEAK_FUNC(sub_83BB5334);
PPC_FUNC_IMPL(__imp__sub_83BB5334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5338"))) PPC_WEAK_FUNC(sub_83BB5338);
PPC_FUNC_IMPL(__imp__sub_83BB5338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18168
	ctx.r3.s64 = ctx.r11.s64 + -18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5344"))) PPC_WEAK_FUNC(sub_83BB5344);
PPC_FUNC_IMPL(__imp__sub_83BB5344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5348"))) PPC_WEAK_FUNC(sub_83BB5348);
PPC_FUNC_IMPL(__imp__sub_83BB5348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18160
	ctx.r3.s64 = ctx.r11.s64 + -18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5354"))) PPC_WEAK_FUNC(sub_83BB5354);
PPC_FUNC_IMPL(__imp__sub_83BB5354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5358"))) PPC_WEAK_FUNC(sub_83BB5358);
PPC_FUNC_IMPL(__imp__sub_83BB5358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5364"))) PPC_WEAK_FUNC(sub_83BB5364);
PPC_FUNC_IMPL(__imp__sub_83BB5364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5368"))) PPC_WEAK_FUNC(sub_83BB5368);
PPC_FUNC_IMPL(__imp__sub_83BB5368) {
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
	// addi r3,r11,-2528
	ctx.r3.s64 = ctx.r11.s64 + -2528;
	// bl 0x83523120
	ctx.lr = 0x83BB5380;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18144
	ctx.r3.s64 = ctx.r10.s64 + -18144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB538C;
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

__attribute__((alias("__imp__sub_83BB539C"))) PPC_WEAK_FUNC(sub_83BB539C);
PPC_FUNC_IMPL(__imp__sub_83BB539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB53A0"))) PPC_WEAK_FUNC(sub_83BB53A0);
PPC_FUNC_IMPL(__imp__sub_83BB53A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2512
	ctx.r7.s64 = ctx.r8.s64 + -2512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2512(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB53C8"))) PPC_WEAK_FUNC(sub_83BB53C8);
PPC_FUNC_IMPL(__imp__sub_83BB53C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-17800
	ctx.r6.s64 = ctx.r7.s64 + -17800;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2512);
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
	// std r9,-17800(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17800, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5410"))) PPC_WEAK_FUNC(sub_83BB5410);
PPC_FUNC_IMPL(__imp__sub_83BB5410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB541C"))) PPC_WEAK_FUNC(sub_83BB541C);
PPC_FUNC_IMPL(__imp__sub_83BB541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5420"))) PPC_WEAK_FUNC(sub_83BB5420);
PPC_FUNC_IMPL(__imp__sub_83BB5420) {
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
	// addi r3,r11,-2504
	ctx.r3.s64 = ctx.r11.s64 + -2504;
	// bl 0x8259af80
	ctx.lr = 0x83BB5438;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18112
	ctx.r3.s64 = ctx.r10.s64 + -18112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5444;
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

__attribute__((alias("__imp__sub_83BB5454"))) PPC_WEAK_FUNC(sub_83BB5454);
PPC_FUNC_IMPL(__imp__sub_83BB5454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5458"))) PPC_WEAK_FUNC(sub_83BB5458);
PPC_FUNC_IMPL(__imp__sub_83BB5458) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2524
	ctx.r11.s64 = ctx.r8.s64 + -2524;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-17824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18120
	ctx.r3.s64 = ctx.r6.s64 + -18120;
	// stw r10,-2524(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2524, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5488"))) PPC_WEAK_FUNC(sub_83BB5488);
PPC_FUNC_IMPL(__imp__sub_83BB5488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18104
	ctx.r3.s64 = ctx.r11.s64 + -18104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5494"))) PPC_WEAK_FUNC(sub_83BB5494);
PPC_FUNC_IMPL(__imp__sub_83BB5494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5498"))) PPC_WEAK_FUNC(sub_83BB5498);
PPC_FUNC_IMPL(__imp__sub_83BB5498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18096
	ctx.r3.s64 = ctx.r11.s64 + -18096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB54A4"))) PPC_WEAK_FUNC(sub_83BB54A4);
PPC_FUNC_IMPL(__imp__sub_83BB54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB54A8"))) PPC_WEAK_FUNC(sub_83BB54A8);
PPC_FUNC_IMPL(__imp__sub_83BB54A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18088
	ctx.r3.s64 = ctx.r11.s64 + -18088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB54B4"))) PPC_WEAK_FUNC(sub_83BB54B4);
PPC_FUNC_IMPL(__imp__sub_83BB54B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB54B8"))) PPC_WEAK_FUNC(sub_83BB54B8);
PPC_FUNC_IMPL(__imp__sub_83BB54B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18080
	ctx.r3.s64 = ctx.r11.s64 + -18080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB54C4"))) PPC_WEAK_FUNC(sub_83BB54C4);
PPC_FUNC_IMPL(__imp__sub_83BB54C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB54C8"))) PPC_WEAK_FUNC(sub_83BB54C8);
PPC_FUNC_IMPL(__imp__sub_83BB54C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18072
	ctx.r3.s64 = ctx.r11.s64 + -18072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB54D4"))) PPC_WEAK_FUNC(sub_83BB54D4);
PPC_FUNC_IMPL(__imp__sub_83BB54D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB54D8"))) PPC_WEAK_FUNC(sub_83BB54D8);
PPC_FUNC_IMPL(__imp__sub_83BB54D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18064
	ctx.r3.s64 = ctx.r11.s64 + -18064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB54E4"))) PPC_WEAK_FUNC(sub_83BB54E4);
PPC_FUNC_IMPL(__imp__sub_83BB54E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB54E8"))) PPC_WEAK_FUNC(sub_83BB54E8);
PPC_FUNC_IMPL(__imp__sub_83BB54E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18056
	ctx.r3.s64 = ctx.r11.s64 + -18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB54F4"))) PPC_WEAK_FUNC(sub_83BB54F4);
PPC_FUNC_IMPL(__imp__sub_83BB54F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB54F8"))) PPC_WEAK_FUNC(sub_83BB54F8);
PPC_FUNC_IMPL(__imp__sub_83BB54F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5504"))) PPC_WEAK_FUNC(sub_83BB5504);
PPC_FUNC_IMPL(__imp__sub_83BB5504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5508"))) PPC_WEAK_FUNC(sub_83BB5508);
PPC_FUNC_IMPL(__imp__sub_83BB5508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18040
	ctx.r3.s64 = ctx.r11.s64 + -18040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5514"))) PPC_WEAK_FUNC(sub_83BB5514);
PPC_FUNC_IMPL(__imp__sub_83BB5514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5518"))) PPC_WEAK_FUNC(sub_83BB5518);
PPC_FUNC_IMPL(__imp__sub_83BB5518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18032
	ctx.r3.s64 = ctx.r11.s64 + -18032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5524"))) PPC_WEAK_FUNC(sub_83BB5524);
PPC_FUNC_IMPL(__imp__sub_83BB5524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5528"))) PPC_WEAK_FUNC(sub_83BB5528);
PPC_FUNC_IMPL(__imp__sub_83BB5528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18024
	ctx.r3.s64 = ctx.r11.s64 + -18024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5534"))) PPC_WEAK_FUNC(sub_83BB5534);
PPC_FUNC_IMPL(__imp__sub_83BB5534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5538"))) PPC_WEAK_FUNC(sub_83BB5538);
PPC_FUNC_IMPL(__imp__sub_83BB5538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18016
	ctx.r3.s64 = ctx.r11.s64 + -18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5544"))) PPC_WEAK_FUNC(sub_83BB5544);
PPC_FUNC_IMPL(__imp__sub_83BB5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5548"))) PPC_WEAK_FUNC(sub_83BB5548);
PPC_FUNC_IMPL(__imp__sub_83BB5548) {
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
	// addi r3,r11,-2160
	ctx.r3.s64 = ctx.r11.s64 + -2160;
	// bl 0x83523120
	ctx.lr = 0x83BB5560;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18008
	ctx.r3.s64 = ctx.r10.s64 + -18008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB556C;
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

__attribute__((alias("__imp__sub_83BB557C"))) PPC_WEAK_FUNC(sub_83BB557C);
PPC_FUNC_IMPL(__imp__sub_83BB557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5580"))) PPC_WEAK_FUNC(sub_83BB5580);
PPC_FUNC_IMPL(__imp__sub_83BB5580) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2144
	ctx.r7.s64 = ctx.r8.s64 + -2144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB55A8"))) PPC_WEAK_FUNC(sub_83BB55A8);
PPC_FUNC_IMPL(__imp__sub_83BB55A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-17624
	ctx.r6.s64 = ctx.r7.s64 + -17624;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2144);
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
	// std r9,-17624(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17624, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB55F0"))) PPC_WEAK_FUNC(sub_83BB55F0);
PPC_FUNC_IMPL(__imp__sub_83BB55F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB55FC"))) PPC_WEAK_FUNC(sub_83BB55FC);
PPC_FUNC_IMPL(__imp__sub_83BB55FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5600"))) PPC_WEAK_FUNC(sub_83BB5600);
PPC_FUNC_IMPL(__imp__sub_83BB5600) {
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
	// addi r3,r11,-2136
	ctx.r3.s64 = ctx.r11.s64 + -2136;
	// bl 0x8259af80
	ctx.lr = 0x83BB5618;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17976
	ctx.r3.s64 = ctx.r10.s64 + -17976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5624;
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

__attribute__((alias("__imp__sub_83BB5634"))) PPC_WEAK_FUNC(sub_83BB5634);
PPC_FUNC_IMPL(__imp__sub_83BB5634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5638"))) PPC_WEAK_FUNC(sub_83BB5638);
PPC_FUNC_IMPL(__imp__sub_83BB5638) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2156
	ctx.r11.s64 = ctx.r8.s64 + -2156;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-17648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17648);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17984
	ctx.r3.s64 = ctx.r6.s64 + -17984;
	// stw r10,-2156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2156, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5668"))) PPC_WEAK_FUNC(sub_83BB5668);
PPC_FUNC_IMPL(__imp__sub_83BB5668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17968
	ctx.r3.s64 = ctx.r11.s64 + -17968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5674"))) PPC_WEAK_FUNC(sub_83BB5674);
PPC_FUNC_IMPL(__imp__sub_83BB5674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5678"))) PPC_WEAK_FUNC(sub_83BB5678);
PPC_FUNC_IMPL(__imp__sub_83BB5678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17960
	ctx.r3.s64 = ctx.r11.s64 + -17960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5684"))) PPC_WEAK_FUNC(sub_83BB5684);
PPC_FUNC_IMPL(__imp__sub_83BB5684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5688"))) PPC_WEAK_FUNC(sub_83BB5688);
PPC_FUNC_IMPL(__imp__sub_83BB5688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17952
	ctx.r3.s64 = ctx.r11.s64 + -17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5694"))) PPC_WEAK_FUNC(sub_83BB5694);
PPC_FUNC_IMPL(__imp__sub_83BB5694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5698"))) PPC_WEAK_FUNC(sub_83BB5698);
PPC_FUNC_IMPL(__imp__sub_83BB5698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17944
	ctx.r3.s64 = ctx.r11.s64 + -17944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB56A4"))) PPC_WEAK_FUNC(sub_83BB56A4);
PPC_FUNC_IMPL(__imp__sub_83BB56A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB56A8"))) PPC_WEAK_FUNC(sub_83BB56A8);
PPC_FUNC_IMPL(__imp__sub_83BB56A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17936
	ctx.r3.s64 = ctx.r11.s64 + -17936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB56B4"))) PPC_WEAK_FUNC(sub_83BB56B4);
PPC_FUNC_IMPL(__imp__sub_83BB56B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB56B8"))) PPC_WEAK_FUNC(sub_83BB56B8);
PPC_FUNC_IMPL(__imp__sub_83BB56B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17928
	ctx.r3.s64 = ctx.r11.s64 + -17928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB56C4"))) PPC_WEAK_FUNC(sub_83BB56C4);
PPC_FUNC_IMPL(__imp__sub_83BB56C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB56C8"))) PPC_WEAK_FUNC(sub_83BB56C8);
PPC_FUNC_IMPL(__imp__sub_83BB56C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17920
	ctx.r3.s64 = ctx.r11.s64 + -17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB56D4"))) PPC_WEAK_FUNC(sub_83BB56D4);
PPC_FUNC_IMPL(__imp__sub_83BB56D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB56D8"))) PPC_WEAK_FUNC(sub_83BB56D8);
PPC_FUNC_IMPL(__imp__sub_83BB56D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17912
	ctx.r3.s64 = ctx.r11.s64 + -17912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB56E4"))) PPC_WEAK_FUNC(sub_83BB56E4);
PPC_FUNC_IMPL(__imp__sub_83BB56E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB56E8"))) PPC_WEAK_FUNC(sub_83BB56E8);
PPC_FUNC_IMPL(__imp__sub_83BB56E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17904
	ctx.r3.s64 = ctx.r11.s64 + -17904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB56F4"))) PPC_WEAK_FUNC(sub_83BB56F4);
PPC_FUNC_IMPL(__imp__sub_83BB56F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB56F8"))) PPC_WEAK_FUNC(sub_83BB56F8);
PPC_FUNC_IMPL(__imp__sub_83BB56F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17896
	ctx.r3.s64 = ctx.r11.s64 + -17896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5704"))) PPC_WEAK_FUNC(sub_83BB5704);
PPC_FUNC_IMPL(__imp__sub_83BB5704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5708"))) PPC_WEAK_FUNC(sub_83BB5708);
PPC_FUNC_IMPL(__imp__sub_83BB5708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17888
	ctx.r3.s64 = ctx.r11.s64 + -17888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5714"))) PPC_WEAK_FUNC(sub_83BB5714);
PPC_FUNC_IMPL(__imp__sub_83BB5714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5718"))) PPC_WEAK_FUNC(sub_83BB5718);
PPC_FUNC_IMPL(__imp__sub_83BB5718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17880
	ctx.r3.s64 = ctx.r11.s64 + -17880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5724"))) PPC_WEAK_FUNC(sub_83BB5724);
PPC_FUNC_IMPL(__imp__sub_83BB5724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5728"))) PPC_WEAK_FUNC(sub_83BB5728);
PPC_FUNC_IMPL(__imp__sub_83BB5728) {
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
	// addi r3,r11,-1688
	ctx.r3.s64 = ctx.r11.s64 + -1688;
	// bl 0x83523120
	ctx.lr = 0x83BB5740;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17872
	ctx.r3.s64 = ctx.r10.s64 + -17872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB574C;
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

__attribute__((alias("__imp__sub_83BB575C"))) PPC_WEAK_FUNC(sub_83BB575C);
PPC_FUNC_IMPL(__imp__sub_83BB575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5760"))) PPC_WEAK_FUNC(sub_83BB5760);
PPC_FUNC_IMPL(__imp__sub_83BB5760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1672
	ctx.r7.s64 = ctx.r8.s64 + -1672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5788"))) PPC_WEAK_FUNC(sub_83BB5788);
PPC_FUNC_IMPL(__imp__sub_83BB5788) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-17460
	ctx.r6.s64 = ctx.r7.s64 + -17460;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17532(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17532);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1672);
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
	// std r9,-17460(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17460, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB57D0"))) PPC_WEAK_FUNC(sub_83BB57D0);
PPC_FUNC_IMPL(__imp__sub_83BB57D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17856
	ctx.r3.s64 = ctx.r11.s64 + -17856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB57DC"))) PPC_WEAK_FUNC(sub_83BB57DC);
PPC_FUNC_IMPL(__imp__sub_83BB57DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB57E0"))) PPC_WEAK_FUNC(sub_83BB57E0);
PPC_FUNC_IMPL(__imp__sub_83BB57E0) {
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
	// addi r3,r11,-1664
	ctx.r3.s64 = ctx.r11.s64 + -1664;
	// bl 0x8259af80
	ctx.lr = 0x83BB57F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17824
	ctx.r3.s64 = ctx.r10.s64 + -17824;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5804;
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

__attribute__((alias("__imp__sub_83BB5814"))) PPC_WEAK_FUNC(sub_83BB5814);
PPC_FUNC_IMPL(__imp__sub_83BB5814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5818"))) PPC_WEAK_FUNC(sub_83BB5818);
PPC_FUNC_IMPL(__imp__sub_83BB5818) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1684
	ctx.r11.s64 = ctx.r8.s64 + -1684;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-17484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17484);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17848
	ctx.r3.s64 = ctx.r6.s64 + -17848;
	// stw r10,-1684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1684, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5848"))) PPC_WEAK_FUNC(sub_83BB5848);
PPC_FUNC_IMPL(__imp__sub_83BB5848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17816
	ctx.r3.s64 = ctx.r11.s64 + -17816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5854"))) PPC_WEAK_FUNC(sub_83BB5854);
PPC_FUNC_IMPL(__imp__sub_83BB5854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5858"))) PPC_WEAK_FUNC(sub_83BB5858);
PPC_FUNC_IMPL(__imp__sub_83BB5858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17808
	ctx.r3.s64 = ctx.r11.s64 + -17808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5864"))) PPC_WEAK_FUNC(sub_83BB5864);
PPC_FUNC_IMPL(__imp__sub_83BB5864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5868"))) PPC_WEAK_FUNC(sub_83BB5868);
PPC_FUNC_IMPL(__imp__sub_83BB5868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17800
	ctx.r3.s64 = ctx.r11.s64 + -17800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5874"))) PPC_WEAK_FUNC(sub_83BB5874);
PPC_FUNC_IMPL(__imp__sub_83BB5874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5878"))) PPC_WEAK_FUNC(sub_83BB5878);
PPC_FUNC_IMPL(__imp__sub_83BB5878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17792
	ctx.r3.s64 = ctx.r11.s64 + -17792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5884"))) PPC_WEAK_FUNC(sub_83BB5884);
PPC_FUNC_IMPL(__imp__sub_83BB5884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5888"))) PPC_WEAK_FUNC(sub_83BB5888);
PPC_FUNC_IMPL(__imp__sub_83BB5888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17784
	ctx.r3.s64 = ctx.r11.s64 + -17784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5894"))) PPC_WEAK_FUNC(sub_83BB5894);
PPC_FUNC_IMPL(__imp__sub_83BB5894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5898"))) PPC_WEAK_FUNC(sub_83BB5898);
PPC_FUNC_IMPL(__imp__sub_83BB5898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17776
	ctx.r3.s64 = ctx.r11.s64 + -17776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB58A4"))) PPC_WEAK_FUNC(sub_83BB58A4);
PPC_FUNC_IMPL(__imp__sub_83BB58A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB58A8"))) PPC_WEAK_FUNC(sub_83BB58A8);
PPC_FUNC_IMPL(__imp__sub_83BB58A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17768
	ctx.r3.s64 = ctx.r11.s64 + -17768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB58B4"))) PPC_WEAK_FUNC(sub_83BB58B4);
PPC_FUNC_IMPL(__imp__sub_83BB58B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB58B8"))) PPC_WEAK_FUNC(sub_83BB58B8);
PPC_FUNC_IMPL(__imp__sub_83BB58B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17760
	ctx.r3.s64 = ctx.r11.s64 + -17760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB58C4"))) PPC_WEAK_FUNC(sub_83BB58C4);
PPC_FUNC_IMPL(__imp__sub_83BB58C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB58C8"))) PPC_WEAK_FUNC(sub_83BB58C8);
PPC_FUNC_IMPL(__imp__sub_83BB58C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17752
	ctx.r3.s64 = ctx.r11.s64 + -17752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB58D4"))) PPC_WEAK_FUNC(sub_83BB58D4);
PPC_FUNC_IMPL(__imp__sub_83BB58D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB58D8"))) PPC_WEAK_FUNC(sub_83BB58D8);
PPC_FUNC_IMPL(__imp__sub_83BB58D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17744
	ctx.r3.s64 = ctx.r11.s64 + -17744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB58E4"))) PPC_WEAK_FUNC(sub_83BB58E4);
PPC_FUNC_IMPL(__imp__sub_83BB58E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB58E8"))) PPC_WEAK_FUNC(sub_83BB58E8);
PPC_FUNC_IMPL(__imp__sub_83BB58E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17736
	ctx.r3.s64 = ctx.r11.s64 + -17736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB58F4"))) PPC_WEAK_FUNC(sub_83BB58F4);
PPC_FUNC_IMPL(__imp__sub_83BB58F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB58F8"))) PPC_WEAK_FUNC(sub_83BB58F8);
PPC_FUNC_IMPL(__imp__sub_83BB58F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17728
	ctx.r3.s64 = ctx.r11.s64 + -17728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5904"))) PPC_WEAK_FUNC(sub_83BB5904);
PPC_FUNC_IMPL(__imp__sub_83BB5904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5908"))) PPC_WEAK_FUNC(sub_83BB5908);
PPC_FUNC_IMPL(__imp__sub_83BB5908) {
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
	// addi r3,r11,-1320
	ctx.r3.s64 = ctx.r11.s64 + -1320;
	// bl 0x83523120
	ctx.lr = 0x83BB5920;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17720
	ctx.r3.s64 = ctx.r10.s64 + -17720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB592C;
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

__attribute__((alias("__imp__sub_83BB593C"))) PPC_WEAK_FUNC(sub_83BB593C);
PPC_FUNC_IMPL(__imp__sub_83BB593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5940"))) PPC_WEAK_FUNC(sub_83BB5940);
PPC_FUNC_IMPL(__imp__sub_83BB5940) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1304
	ctx.r7.s64 = ctx.r8.s64 + -1304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1304(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5968"))) PPC_WEAK_FUNC(sub_83BB5968);
PPC_FUNC_IMPL(__imp__sub_83BB5968) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-17296
	ctx.r6.s64 = ctx.r7.s64 + -17296;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17368(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17368);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1304);
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
	// std r9,-17296(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17296, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB59B0"))) PPC_WEAK_FUNC(sub_83BB59B0);
PPC_FUNC_IMPL(__imp__sub_83BB59B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17704
	ctx.r3.s64 = ctx.r11.s64 + -17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB59BC"))) PPC_WEAK_FUNC(sub_83BB59BC);
PPC_FUNC_IMPL(__imp__sub_83BB59BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB59C0"))) PPC_WEAK_FUNC(sub_83BB59C0);
PPC_FUNC_IMPL(__imp__sub_83BB59C0) {
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
	// addi r3,r11,-1296
	ctx.r3.s64 = ctx.r11.s64 + -1296;
	// bl 0x8259af80
	ctx.lr = 0x83BB59D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17688
	ctx.r3.s64 = ctx.r10.s64 + -17688;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB59E4;
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

__attribute__((alias("__imp__sub_83BB59F4"))) PPC_WEAK_FUNC(sub_83BB59F4);
PPC_FUNC_IMPL(__imp__sub_83BB59F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB59F8"))) PPC_WEAK_FUNC(sub_83BB59F8);
PPC_FUNC_IMPL(__imp__sub_83BB59F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1316
	ctx.r11.s64 = ctx.r8.s64 + -1316;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-17320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17320);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17696
	ctx.r3.s64 = ctx.r6.s64 + -17696;
	// stw r10,-1316(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5A28"))) PPC_WEAK_FUNC(sub_83BB5A28);
PPC_FUNC_IMPL(__imp__sub_83BB5A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5A34"))) PPC_WEAK_FUNC(sub_83BB5A34);
PPC_FUNC_IMPL(__imp__sub_83BB5A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5A38"))) PPC_WEAK_FUNC(sub_83BB5A38);
PPC_FUNC_IMPL(__imp__sub_83BB5A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5A44"))) PPC_WEAK_FUNC(sub_83BB5A44);
PPC_FUNC_IMPL(__imp__sub_83BB5A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5A48"))) PPC_WEAK_FUNC(sub_83BB5A48);
PPC_FUNC_IMPL(__imp__sub_83BB5A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17664
	ctx.r3.s64 = ctx.r11.s64 + -17664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5A54"))) PPC_WEAK_FUNC(sub_83BB5A54);
PPC_FUNC_IMPL(__imp__sub_83BB5A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5A58"))) PPC_WEAK_FUNC(sub_83BB5A58);
PPC_FUNC_IMPL(__imp__sub_83BB5A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17656
	ctx.r3.s64 = ctx.r11.s64 + -17656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5A64"))) PPC_WEAK_FUNC(sub_83BB5A64);
PPC_FUNC_IMPL(__imp__sub_83BB5A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5A68"))) PPC_WEAK_FUNC(sub_83BB5A68);
PPC_FUNC_IMPL(__imp__sub_83BB5A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17648
	ctx.r3.s64 = ctx.r11.s64 + -17648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5A74"))) PPC_WEAK_FUNC(sub_83BB5A74);
PPC_FUNC_IMPL(__imp__sub_83BB5A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5A78"))) PPC_WEAK_FUNC(sub_83BB5A78);
PPC_FUNC_IMPL(__imp__sub_83BB5A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17640
	ctx.r3.s64 = ctx.r11.s64 + -17640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5A84"))) PPC_WEAK_FUNC(sub_83BB5A84);
PPC_FUNC_IMPL(__imp__sub_83BB5A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5A88"))) PPC_WEAK_FUNC(sub_83BB5A88);
PPC_FUNC_IMPL(__imp__sub_83BB5A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17632
	ctx.r3.s64 = ctx.r11.s64 + -17632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5A94"))) PPC_WEAK_FUNC(sub_83BB5A94);
PPC_FUNC_IMPL(__imp__sub_83BB5A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5A98"))) PPC_WEAK_FUNC(sub_83BB5A98);
PPC_FUNC_IMPL(__imp__sub_83BB5A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17624
	ctx.r3.s64 = ctx.r11.s64 + -17624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5AA4"))) PPC_WEAK_FUNC(sub_83BB5AA4);
PPC_FUNC_IMPL(__imp__sub_83BB5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5AA8"))) PPC_WEAK_FUNC(sub_83BB5AA8);
PPC_FUNC_IMPL(__imp__sub_83BB5AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17616
	ctx.r3.s64 = ctx.r11.s64 + -17616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5AB4"))) PPC_WEAK_FUNC(sub_83BB5AB4);
PPC_FUNC_IMPL(__imp__sub_83BB5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5AB8"))) PPC_WEAK_FUNC(sub_83BB5AB8);
PPC_FUNC_IMPL(__imp__sub_83BB5AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17608
	ctx.r3.s64 = ctx.r11.s64 + -17608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5AC4"))) PPC_WEAK_FUNC(sub_83BB5AC4);
PPC_FUNC_IMPL(__imp__sub_83BB5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5AC8"))) PPC_WEAK_FUNC(sub_83BB5AC8);
PPC_FUNC_IMPL(__imp__sub_83BB5AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17600
	ctx.r3.s64 = ctx.r11.s64 + -17600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5AD4"))) PPC_WEAK_FUNC(sub_83BB5AD4);
PPC_FUNC_IMPL(__imp__sub_83BB5AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5AD8"))) PPC_WEAK_FUNC(sub_83BB5AD8);
PPC_FUNC_IMPL(__imp__sub_83BB5AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17592
	ctx.r3.s64 = ctx.r11.s64 + -17592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5AE4"))) PPC_WEAK_FUNC(sub_83BB5AE4);
PPC_FUNC_IMPL(__imp__sub_83BB5AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5AE8"))) PPC_WEAK_FUNC(sub_83BB5AE8);
PPC_FUNC_IMPL(__imp__sub_83BB5AE8) {
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
	// addi r3,r11,-952
	ctx.r3.s64 = ctx.r11.s64 + -952;
	// bl 0x83523120
	ctx.lr = 0x83BB5B00;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17584
	ctx.r3.s64 = ctx.r10.s64 + -17584;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5B0C;
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

__attribute__((alias("__imp__sub_83BB5B1C"))) PPC_WEAK_FUNC(sub_83BB5B1C);
PPC_FUNC_IMPL(__imp__sub_83BB5B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5B20"))) PPC_WEAK_FUNC(sub_83BB5B20);
PPC_FUNC_IMPL(__imp__sub_83BB5B20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-936
	ctx.r7.s64 = ctx.r8.s64 + -936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5B48"))) PPC_WEAK_FUNC(sub_83BB5B48);
PPC_FUNC_IMPL(__imp__sub_83BB5B48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-17160
	ctx.r6.s64 = ctx.r7.s64 + -17160;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17232(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17232);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -936);
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
	// std r9,-17160(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17160, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5B90"))) PPC_WEAK_FUNC(sub_83BB5B90);
PPC_FUNC_IMPL(__imp__sub_83BB5B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17568
	ctx.r3.s64 = ctx.r11.s64 + -17568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5B9C"))) PPC_WEAK_FUNC(sub_83BB5B9C);
PPC_FUNC_IMPL(__imp__sub_83BB5B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5BA0"))) PPC_WEAK_FUNC(sub_83BB5BA0);
PPC_FUNC_IMPL(__imp__sub_83BB5BA0) {
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
	// addi r3,r11,-928
	ctx.r3.s64 = ctx.r11.s64 + -928;
	// bl 0x8259af80
	ctx.lr = 0x83BB5BB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17552
	ctx.r3.s64 = ctx.r10.s64 + -17552;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5BC4;
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

__attribute__((alias("__imp__sub_83BB5BD4"))) PPC_WEAK_FUNC(sub_83BB5BD4);
PPC_FUNC_IMPL(__imp__sub_83BB5BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5BD8"))) PPC_WEAK_FUNC(sub_83BB5BD8);
PPC_FUNC_IMPL(__imp__sub_83BB5BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-948
	ctx.r11.s64 = ctx.r8.s64 + -948;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-17184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17184);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17560
	ctx.r3.s64 = ctx.r6.s64 + -17560;
	// stw r10,-948(r8)
	PPC_STORE_U32(ctx.r8.u32 + -948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C08"))) PPC_WEAK_FUNC(sub_83BB5C08);
PPC_FUNC_IMPL(__imp__sub_83BB5C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17544
	ctx.r3.s64 = ctx.r11.s64 + -17544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C14"))) PPC_WEAK_FUNC(sub_83BB5C14);
PPC_FUNC_IMPL(__imp__sub_83BB5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C18"))) PPC_WEAK_FUNC(sub_83BB5C18);
PPC_FUNC_IMPL(__imp__sub_83BB5C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17536
	ctx.r3.s64 = ctx.r11.s64 + -17536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C24"))) PPC_WEAK_FUNC(sub_83BB5C24);
PPC_FUNC_IMPL(__imp__sub_83BB5C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C28"))) PPC_WEAK_FUNC(sub_83BB5C28);
PPC_FUNC_IMPL(__imp__sub_83BB5C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17528
	ctx.r3.s64 = ctx.r11.s64 + -17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C34"))) PPC_WEAK_FUNC(sub_83BB5C34);
PPC_FUNC_IMPL(__imp__sub_83BB5C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C38"))) PPC_WEAK_FUNC(sub_83BB5C38);
PPC_FUNC_IMPL(__imp__sub_83BB5C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C44"))) PPC_WEAK_FUNC(sub_83BB5C44);
PPC_FUNC_IMPL(__imp__sub_83BB5C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C48"))) PPC_WEAK_FUNC(sub_83BB5C48);
PPC_FUNC_IMPL(__imp__sub_83BB5C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17512
	ctx.r3.s64 = ctx.r11.s64 + -17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C54"))) PPC_WEAK_FUNC(sub_83BB5C54);
PPC_FUNC_IMPL(__imp__sub_83BB5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C58"))) PPC_WEAK_FUNC(sub_83BB5C58);
PPC_FUNC_IMPL(__imp__sub_83BB5C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17504
	ctx.r3.s64 = ctx.r11.s64 + -17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C64"))) PPC_WEAK_FUNC(sub_83BB5C64);
PPC_FUNC_IMPL(__imp__sub_83BB5C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C68"))) PPC_WEAK_FUNC(sub_83BB5C68);
PPC_FUNC_IMPL(__imp__sub_83BB5C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C74"))) PPC_WEAK_FUNC(sub_83BB5C74);
PPC_FUNC_IMPL(__imp__sub_83BB5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C78"))) PPC_WEAK_FUNC(sub_83BB5C78);
PPC_FUNC_IMPL(__imp__sub_83BB5C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17488
	ctx.r3.s64 = ctx.r11.s64 + -17488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C84"))) PPC_WEAK_FUNC(sub_83BB5C84);
PPC_FUNC_IMPL(__imp__sub_83BB5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C88"))) PPC_WEAK_FUNC(sub_83BB5C88);
PPC_FUNC_IMPL(__imp__sub_83BB5C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5C94"))) PPC_WEAK_FUNC(sub_83BB5C94);
PPC_FUNC_IMPL(__imp__sub_83BB5C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5C98"))) PPC_WEAK_FUNC(sub_83BB5C98);
PPC_FUNC_IMPL(__imp__sub_83BB5C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17472
	ctx.r3.s64 = ctx.r11.s64 + -17472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5CA4"))) PPC_WEAK_FUNC(sub_83BB5CA4);
PPC_FUNC_IMPL(__imp__sub_83BB5CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5CA8"))) PPC_WEAK_FUNC(sub_83BB5CA8);
PPC_FUNC_IMPL(__imp__sub_83BB5CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5CB4"))) PPC_WEAK_FUNC(sub_83BB5CB4);
PPC_FUNC_IMPL(__imp__sub_83BB5CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5CB8"))) PPC_WEAK_FUNC(sub_83BB5CB8);
PPC_FUNC_IMPL(__imp__sub_83BB5CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17456
	ctx.r3.s64 = ctx.r11.s64 + -17456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5CC4"))) PPC_WEAK_FUNC(sub_83BB5CC4);
PPC_FUNC_IMPL(__imp__sub_83BB5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5CC8"))) PPC_WEAK_FUNC(sub_83BB5CC8);
PPC_FUNC_IMPL(__imp__sub_83BB5CC8) {
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
	// addi r3,r11,-584
	ctx.r3.s64 = ctx.r11.s64 + -584;
	// bl 0x83523120
	ctx.lr = 0x83BB5CE0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17448
	ctx.r3.s64 = ctx.r10.s64 + -17448;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5CEC;
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

__attribute__((alias("__imp__sub_83BB5CFC"))) PPC_WEAK_FUNC(sub_83BB5CFC);
PPC_FUNC_IMPL(__imp__sub_83BB5CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5D00"))) PPC_WEAK_FUNC(sub_83BB5D00);
PPC_FUNC_IMPL(__imp__sub_83BB5D00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-568
	ctx.r7.s64 = ctx.r8.s64 + -568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-568(r8)
	PPC_STORE_U32(ctx.r8.u32 + -568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5D28"))) PPC_WEAK_FUNC(sub_83BB5D28);
PPC_FUNC_IMPL(__imp__sub_83BB5D28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-17028
	ctx.r6.s64 = ctx.r7.s64 + -17028;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -568);
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
	// std r9,-17028(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17028, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5D70"))) PPC_WEAK_FUNC(sub_83BB5D70);
PPC_FUNC_IMPL(__imp__sub_83BB5D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17432
	ctx.r3.s64 = ctx.r11.s64 + -17432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5D7C"))) PPC_WEAK_FUNC(sub_83BB5D7C);
PPC_FUNC_IMPL(__imp__sub_83BB5D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5D80"))) PPC_WEAK_FUNC(sub_83BB5D80);
PPC_FUNC_IMPL(__imp__sub_83BB5D80) {
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
	// addi r3,r11,-560
	ctx.r3.s64 = ctx.r11.s64 + -560;
	// bl 0x8259af80
	ctx.lr = 0x83BB5D98;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17416
	ctx.r3.s64 = ctx.r10.s64 + -17416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5DA4;
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

__attribute__((alias("__imp__sub_83BB5DB4"))) PPC_WEAK_FUNC(sub_83BB5DB4);
PPC_FUNC_IMPL(__imp__sub_83BB5DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5DB8"))) PPC_WEAK_FUNC(sub_83BB5DB8);
PPC_FUNC_IMPL(__imp__sub_83BB5DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-580
	ctx.r11.s64 = ctx.r8.s64 + -580;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-17052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17052);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17424
	ctx.r3.s64 = ctx.r6.s64 + -17424;
	// stw r10,-580(r8)
	PPC_STORE_U32(ctx.r8.u32 + -580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5DE8"))) PPC_WEAK_FUNC(sub_83BB5DE8);
PPC_FUNC_IMPL(__imp__sub_83BB5DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5DF4"))) PPC_WEAK_FUNC(sub_83BB5DF4);
PPC_FUNC_IMPL(__imp__sub_83BB5DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5DF8"))) PPC_WEAK_FUNC(sub_83BB5DF8);
PPC_FUNC_IMPL(__imp__sub_83BB5DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17400
	ctx.r3.s64 = ctx.r11.s64 + -17400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E04"))) PPC_WEAK_FUNC(sub_83BB5E04);
PPC_FUNC_IMPL(__imp__sub_83BB5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E08"))) PPC_WEAK_FUNC(sub_83BB5E08);
PPC_FUNC_IMPL(__imp__sub_83BB5E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17392
	ctx.r3.s64 = ctx.r11.s64 + -17392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E14"))) PPC_WEAK_FUNC(sub_83BB5E14);
PPC_FUNC_IMPL(__imp__sub_83BB5E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E18"))) PPC_WEAK_FUNC(sub_83BB5E18);
PPC_FUNC_IMPL(__imp__sub_83BB5E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17384
	ctx.r3.s64 = ctx.r11.s64 + -17384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E24"))) PPC_WEAK_FUNC(sub_83BB5E24);
PPC_FUNC_IMPL(__imp__sub_83BB5E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E28"))) PPC_WEAK_FUNC(sub_83BB5E28);
PPC_FUNC_IMPL(__imp__sub_83BB5E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17376
	ctx.r3.s64 = ctx.r11.s64 + -17376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E34"))) PPC_WEAK_FUNC(sub_83BB5E34);
PPC_FUNC_IMPL(__imp__sub_83BB5E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E38"))) PPC_WEAK_FUNC(sub_83BB5E38);
PPC_FUNC_IMPL(__imp__sub_83BB5E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17368
	ctx.r3.s64 = ctx.r11.s64 + -17368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E44"))) PPC_WEAK_FUNC(sub_83BB5E44);
PPC_FUNC_IMPL(__imp__sub_83BB5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E48"))) PPC_WEAK_FUNC(sub_83BB5E48);
PPC_FUNC_IMPL(__imp__sub_83BB5E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17360
	ctx.r3.s64 = ctx.r11.s64 + -17360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E54"))) PPC_WEAK_FUNC(sub_83BB5E54);
PPC_FUNC_IMPL(__imp__sub_83BB5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E58"))) PPC_WEAK_FUNC(sub_83BB5E58);
PPC_FUNC_IMPL(__imp__sub_83BB5E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17352
	ctx.r3.s64 = ctx.r11.s64 + -17352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E64"))) PPC_WEAK_FUNC(sub_83BB5E64);
PPC_FUNC_IMPL(__imp__sub_83BB5E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E68"))) PPC_WEAK_FUNC(sub_83BB5E68);
PPC_FUNC_IMPL(__imp__sub_83BB5E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17344
	ctx.r3.s64 = ctx.r11.s64 + -17344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E74"))) PPC_WEAK_FUNC(sub_83BB5E74);
PPC_FUNC_IMPL(__imp__sub_83BB5E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E78"))) PPC_WEAK_FUNC(sub_83BB5E78);
PPC_FUNC_IMPL(__imp__sub_83BB5E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E84"))) PPC_WEAK_FUNC(sub_83BB5E84);
PPC_FUNC_IMPL(__imp__sub_83BB5E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E88"))) PPC_WEAK_FUNC(sub_83BB5E88);
PPC_FUNC_IMPL(__imp__sub_83BB5E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17328
	ctx.r3.s64 = ctx.r11.s64 + -17328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5E94"))) PPC_WEAK_FUNC(sub_83BB5E94);
PPC_FUNC_IMPL(__imp__sub_83BB5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5E98"))) PPC_WEAK_FUNC(sub_83BB5E98);
PPC_FUNC_IMPL(__imp__sub_83BB5E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17320
	ctx.r3.s64 = ctx.r11.s64 + -17320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5EA4"))) PPC_WEAK_FUNC(sub_83BB5EA4);
PPC_FUNC_IMPL(__imp__sub_83BB5EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5EA8"))) PPC_WEAK_FUNC(sub_83BB5EA8);
PPC_FUNC_IMPL(__imp__sub_83BB5EA8) {
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
	// addi r3,r11,-216
	ctx.r3.s64 = ctx.r11.s64 + -216;
	// bl 0x83523120
	ctx.lr = 0x83BB5EC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17312
	ctx.r3.s64 = ctx.r10.s64 + -17312;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5ECC;
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

__attribute__((alias("__imp__sub_83BB5EDC"))) PPC_WEAK_FUNC(sub_83BB5EDC);
PPC_FUNC_IMPL(__imp__sub_83BB5EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5EE0"))) PPC_WEAK_FUNC(sub_83BB5EE0);
PPC_FUNC_IMPL(__imp__sub_83BB5EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-200
	ctx.r7.s64 = ctx.r8.s64 + -200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-200(r8)
	PPC_STORE_U32(ctx.r8.u32 + -200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5F08"))) PPC_WEAK_FUNC(sub_83BB5F08);
PPC_FUNC_IMPL(__imp__sub_83BB5F08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-16880
	ctx.r6.s64 = ctx.r7.s64 + -16880;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16960(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16960);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -200);
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
	// std r9,-16880(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5F50"))) PPC_WEAK_FUNC(sub_83BB5F50);
PPC_FUNC_IMPL(__imp__sub_83BB5F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17296
	ctx.r3.s64 = ctx.r11.s64 + -17296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5F5C"))) PPC_WEAK_FUNC(sub_83BB5F5C);
PPC_FUNC_IMPL(__imp__sub_83BB5F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5F60"))) PPC_WEAK_FUNC(sub_83BB5F60);
PPC_FUNC_IMPL(__imp__sub_83BB5F60) {
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
	// addi r3,r11,-192
	ctx.r3.s64 = ctx.r11.s64 + -192;
	// bl 0x8259af80
	ctx.lr = 0x83BB5F78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17280
	ctx.r3.s64 = ctx.r10.s64 + -17280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5F84;
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

__attribute__((alias("__imp__sub_83BB5F94"))) PPC_WEAK_FUNC(sub_83BB5F94);
PPC_FUNC_IMPL(__imp__sub_83BB5F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5F98"))) PPC_WEAK_FUNC(sub_83BB5F98);
PPC_FUNC_IMPL(__imp__sub_83BB5F98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-212
	ctx.r11.s64 = ctx.r8.s64 + -212;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-16912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16912);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17288
	ctx.r3.s64 = ctx.r6.s64 + -17288;
	// stw r10,-212(r8)
	PPC_STORE_U32(ctx.r8.u32 + -212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5FC8"))) PPC_WEAK_FUNC(sub_83BB5FC8);
PPC_FUNC_IMPL(__imp__sub_83BB5FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17272
	ctx.r3.s64 = ctx.r11.s64 + -17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5FD4"))) PPC_WEAK_FUNC(sub_83BB5FD4);
PPC_FUNC_IMPL(__imp__sub_83BB5FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5FD8"))) PPC_WEAK_FUNC(sub_83BB5FD8);
PPC_FUNC_IMPL(__imp__sub_83BB5FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17264
	ctx.r3.s64 = ctx.r11.s64 + -17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5FE4"))) PPC_WEAK_FUNC(sub_83BB5FE4);
PPC_FUNC_IMPL(__imp__sub_83BB5FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5FE8"))) PPC_WEAK_FUNC(sub_83BB5FE8);
PPC_FUNC_IMPL(__imp__sub_83BB5FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17256
	ctx.r3.s64 = ctx.r11.s64 + -17256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5FF4"))) PPC_WEAK_FUNC(sub_83BB5FF4);
PPC_FUNC_IMPL(__imp__sub_83BB5FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5FF8"))) PPC_WEAK_FUNC(sub_83BB5FF8);
PPC_FUNC_IMPL(__imp__sub_83BB5FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17248
	ctx.r3.s64 = ctx.r11.s64 + -17248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6004"))) PPC_WEAK_FUNC(sub_83BB6004);
PPC_FUNC_IMPL(__imp__sub_83BB6004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6008"))) PPC_WEAK_FUNC(sub_83BB6008);
PPC_FUNC_IMPL(__imp__sub_83BB6008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17240
	ctx.r3.s64 = ctx.r11.s64 + -17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6014"))) PPC_WEAK_FUNC(sub_83BB6014);
PPC_FUNC_IMPL(__imp__sub_83BB6014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6018"))) PPC_WEAK_FUNC(sub_83BB6018);
PPC_FUNC_IMPL(__imp__sub_83BB6018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17232
	ctx.r3.s64 = ctx.r11.s64 + -17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6024"))) PPC_WEAK_FUNC(sub_83BB6024);
PPC_FUNC_IMPL(__imp__sub_83BB6024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6028"))) PPC_WEAK_FUNC(sub_83BB6028);
PPC_FUNC_IMPL(__imp__sub_83BB6028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17224
	ctx.r3.s64 = ctx.r11.s64 + -17224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6034"))) PPC_WEAK_FUNC(sub_83BB6034);
PPC_FUNC_IMPL(__imp__sub_83BB6034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6038"))) PPC_WEAK_FUNC(sub_83BB6038);
PPC_FUNC_IMPL(__imp__sub_83BB6038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17216
	ctx.r3.s64 = ctx.r11.s64 + -17216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6044"))) PPC_WEAK_FUNC(sub_83BB6044);
PPC_FUNC_IMPL(__imp__sub_83BB6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6048"))) PPC_WEAK_FUNC(sub_83BB6048);
PPC_FUNC_IMPL(__imp__sub_83BB6048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17208
	ctx.r3.s64 = ctx.r11.s64 + -17208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6054"))) PPC_WEAK_FUNC(sub_83BB6054);
PPC_FUNC_IMPL(__imp__sub_83BB6054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6058"))) PPC_WEAK_FUNC(sub_83BB6058);
PPC_FUNC_IMPL(__imp__sub_83BB6058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17200
	ctx.r3.s64 = ctx.r11.s64 + -17200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6064"))) PPC_WEAK_FUNC(sub_83BB6064);
PPC_FUNC_IMPL(__imp__sub_83BB6064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6068"))) PPC_WEAK_FUNC(sub_83BB6068);
PPC_FUNC_IMPL(__imp__sub_83BB6068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17192
	ctx.r3.s64 = ctx.r11.s64 + -17192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6074"))) PPC_WEAK_FUNC(sub_83BB6074);
PPC_FUNC_IMPL(__imp__sub_83BB6074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6078"))) PPC_WEAK_FUNC(sub_83BB6078);
PPC_FUNC_IMPL(__imp__sub_83BB6078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17184
	ctx.r3.s64 = ctx.r11.s64 + -17184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6084"))) PPC_WEAK_FUNC(sub_83BB6084);
PPC_FUNC_IMPL(__imp__sub_83BB6084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6088"))) PPC_WEAK_FUNC(sub_83BB6088);
PPC_FUNC_IMPL(__imp__sub_83BB6088) {
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
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// bl 0x83523120
	ctx.lr = 0x83BB60A0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17176
	ctx.r3.s64 = ctx.r10.s64 + -17176;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB60AC;
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

__attribute__((alias("__imp__sub_83BB60BC"))) PPC_WEAK_FUNC(sub_83BB60BC);
PPC_FUNC_IMPL(__imp__sub_83BB60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB60C0"))) PPC_WEAK_FUNC(sub_83BB60C0);
PPC_FUNC_IMPL(__imp__sub_83BB60C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,168
	ctx.r7.s64 = ctx.r8.s64 + 168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 168);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB60E8"))) PPC_WEAK_FUNC(sub_83BB60E8);
PPC_FUNC_IMPL(__imp__sub_83BB60E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-16672
	ctx.r6.s64 = ctx.r7.s64 + -16672;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16744(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16744);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
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
	// std r9,-16672(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16672, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6130"))) PPC_WEAK_FUNC(sub_83BB6130);
PPC_FUNC_IMPL(__imp__sub_83BB6130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17160
	ctx.r3.s64 = ctx.r11.s64 + -17160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB613C"))) PPC_WEAK_FUNC(sub_83BB613C);
PPC_FUNC_IMPL(__imp__sub_83BB613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6140"))) PPC_WEAK_FUNC(sub_83BB6140);
PPC_FUNC_IMPL(__imp__sub_83BB6140) {
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
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// bl 0x8259af80
	ctx.lr = 0x83BB6158;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17144
	ctx.r3.s64 = ctx.r10.s64 + -17144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6164;
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

__attribute__((alias("__imp__sub_83BB6174"))) PPC_WEAK_FUNC(sub_83BB6174);
PPC_FUNC_IMPL(__imp__sub_83BB6174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6178"))) PPC_WEAK_FUNC(sub_83BB6178);
PPC_FUNC_IMPL(__imp__sub_83BB6178) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,156
	ctx.r11.s64 = ctx.r8.s64 + 156;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-16696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16696);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17152
	ctx.r3.s64 = ctx.r6.s64 + -17152;
	// stw r10,156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 156, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB61A8"))) PPC_WEAK_FUNC(sub_83BB61A8);
PPC_FUNC_IMPL(__imp__sub_83BB61A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17136
	ctx.r3.s64 = ctx.r11.s64 + -17136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB61B4"))) PPC_WEAK_FUNC(sub_83BB61B4);
PPC_FUNC_IMPL(__imp__sub_83BB61B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB61B8"))) PPC_WEAK_FUNC(sub_83BB61B8);
PPC_FUNC_IMPL(__imp__sub_83BB61B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17128
	ctx.r3.s64 = ctx.r11.s64 + -17128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB61C4"))) PPC_WEAK_FUNC(sub_83BB61C4);
PPC_FUNC_IMPL(__imp__sub_83BB61C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB61C8"))) PPC_WEAK_FUNC(sub_83BB61C8);
PPC_FUNC_IMPL(__imp__sub_83BB61C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17120
	ctx.r3.s64 = ctx.r11.s64 + -17120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB61D4"))) PPC_WEAK_FUNC(sub_83BB61D4);
PPC_FUNC_IMPL(__imp__sub_83BB61D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB61D8"))) PPC_WEAK_FUNC(sub_83BB61D8);
PPC_FUNC_IMPL(__imp__sub_83BB61D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17112
	ctx.r3.s64 = ctx.r11.s64 + -17112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB61E4"))) PPC_WEAK_FUNC(sub_83BB61E4);
PPC_FUNC_IMPL(__imp__sub_83BB61E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB61E8"))) PPC_WEAK_FUNC(sub_83BB61E8);
PPC_FUNC_IMPL(__imp__sub_83BB61E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17104
	ctx.r3.s64 = ctx.r11.s64 + -17104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

