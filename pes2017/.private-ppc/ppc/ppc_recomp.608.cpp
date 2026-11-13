#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BAB304"))) PPC_WEAK_FUNC(sub_83BAB304);
PPC_FUNC_IMPL(__imp__sub_83BAB304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB308"))) PPC_WEAK_FUNC(sub_83BAB308);
PPC_FUNC_IMPL(__imp__sub_83BAB308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29752
	ctx.r3.s64 = ctx.r11.s64 + -29752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB314"))) PPC_WEAK_FUNC(sub_83BAB314);
PPC_FUNC_IMPL(__imp__sub_83BAB314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB318"))) PPC_WEAK_FUNC(sub_83BAB318);
PPC_FUNC_IMPL(__imp__sub_83BAB318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29744
	ctx.r3.s64 = ctx.r11.s64 + -29744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB324"))) PPC_WEAK_FUNC(sub_83BAB324);
PPC_FUNC_IMPL(__imp__sub_83BAB324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB328"))) PPC_WEAK_FUNC(sub_83BAB328);
PPC_FUNC_IMPL(__imp__sub_83BAB328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29736
	ctx.r3.s64 = ctx.r11.s64 + -29736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB334"))) PPC_WEAK_FUNC(sub_83BAB334);
PPC_FUNC_IMPL(__imp__sub_83BAB334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB338"))) PPC_WEAK_FUNC(sub_83BAB338);
PPC_FUNC_IMPL(__imp__sub_83BAB338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29728
	ctx.r3.s64 = ctx.r11.s64 + -29728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB344"))) PPC_WEAK_FUNC(sub_83BAB344);
PPC_FUNC_IMPL(__imp__sub_83BAB344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB348"))) PPC_WEAK_FUNC(sub_83BAB348);
PPC_FUNC_IMPL(__imp__sub_83BAB348) {
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
	// addi r3,r11,31592
	ctx.r3.s64 = ctx.r11.s64 + 31592;
	// bl 0x83523120
	ctx.lr = 0x83BAB360;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29720
	ctx.r3.s64 = ctx.r10.s64 + -29720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB36C;
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

__attribute__((alias("__imp__sub_83BAB37C"))) PPC_WEAK_FUNC(sub_83BAB37C);
PPC_FUNC_IMPL(__imp__sub_83BAB37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB380"))) PPC_WEAK_FUNC(sub_83BAB380);
PPC_FUNC_IMPL(__imp__sub_83BAB380) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31608
	ctx.r7.s64 = ctx.r8.s64 + 31608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB3A8"))) PPC_WEAK_FUNC(sub_83BAB3A8);
PPC_FUNC_IMPL(__imp__sub_83BAB3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-32628
	ctx.r6.s64 = ctx.r7.s64 + -32628;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32700(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32700);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31608);
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
	// std r9,-32628(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB3F0"))) PPC_WEAK_FUNC(sub_83BAB3F0);
PPC_FUNC_IMPL(__imp__sub_83BAB3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29704
	ctx.r3.s64 = ctx.r11.s64 + -29704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB3FC"))) PPC_WEAK_FUNC(sub_83BAB3FC);
PPC_FUNC_IMPL(__imp__sub_83BAB3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB400"))) PPC_WEAK_FUNC(sub_83BAB400);
PPC_FUNC_IMPL(__imp__sub_83BAB400) {
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
	// addi r3,r11,31616
	ctx.r3.s64 = ctx.r11.s64 + 31616;
	// bl 0x8259af80
	ctx.lr = 0x83BAB418;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29688
	ctx.r3.s64 = ctx.r10.s64 + -29688;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB424;
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

__attribute__((alias("__imp__sub_83BAB434"))) PPC_WEAK_FUNC(sub_83BAB434);
PPC_FUNC_IMPL(__imp__sub_83BAB434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB438"))) PPC_WEAK_FUNC(sub_83BAB438);
PPC_FUNC_IMPL(__imp__sub_83BAB438) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31596
	ctx.r11.s64 = ctx.r8.s64 + 31596;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-32652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32652);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29696
	ctx.r3.s64 = ctx.r6.s64 + -29696;
	// stw r10,31596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB468"))) PPC_WEAK_FUNC(sub_83BAB468);
PPC_FUNC_IMPL(__imp__sub_83BAB468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29680
	ctx.r3.s64 = ctx.r11.s64 + -29680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB474"))) PPC_WEAK_FUNC(sub_83BAB474);
PPC_FUNC_IMPL(__imp__sub_83BAB474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB478"))) PPC_WEAK_FUNC(sub_83BAB478);
PPC_FUNC_IMPL(__imp__sub_83BAB478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29672
	ctx.r3.s64 = ctx.r11.s64 + -29672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB484"))) PPC_WEAK_FUNC(sub_83BAB484);
PPC_FUNC_IMPL(__imp__sub_83BAB484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB488"))) PPC_WEAK_FUNC(sub_83BAB488);
PPC_FUNC_IMPL(__imp__sub_83BAB488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB494"))) PPC_WEAK_FUNC(sub_83BAB494);
PPC_FUNC_IMPL(__imp__sub_83BAB494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB498"))) PPC_WEAK_FUNC(sub_83BAB498);
PPC_FUNC_IMPL(__imp__sub_83BAB498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29656
	ctx.r3.s64 = ctx.r11.s64 + -29656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB4A4"))) PPC_WEAK_FUNC(sub_83BAB4A4);
PPC_FUNC_IMPL(__imp__sub_83BAB4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB4A8"))) PPC_WEAK_FUNC(sub_83BAB4A8);
PPC_FUNC_IMPL(__imp__sub_83BAB4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29648
	ctx.r3.s64 = ctx.r11.s64 + -29648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB4B4"))) PPC_WEAK_FUNC(sub_83BAB4B4);
PPC_FUNC_IMPL(__imp__sub_83BAB4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB4B8"))) PPC_WEAK_FUNC(sub_83BAB4B8);
PPC_FUNC_IMPL(__imp__sub_83BAB4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29640
	ctx.r3.s64 = ctx.r11.s64 + -29640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB4C4"))) PPC_WEAK_FUNC(sub_83BAB4C4);
PPC_FUNC_IMPL(__imp__sub_83BAB4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB4C8"))) PPC_WEAK_FUNC(sub_83BAB4C8);
PPC_FUNC_IMPL(__imp__sub_83BAB4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29632
	ctx.r3.s64 = ctx.r11.s64 + -29632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB4D4"))) PPC_WEAK_FUNC(sub_83BAB4D4);
PPC_FUNC_IMPL(__imp__sub_83BAB4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB4D8"))) PPC_WEAK_FUNC(sub_83BAB4D8);
PPC_FUNC_IMPL(__imp__sub_83BAB4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29624
	ctx.r3.s64 = ctx.r11.s64 + -29624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB4E4"))) PPC_WEAK_FUNC(sub_83BAB4E4);
PPC_FUNC_IMPL(__imp__sub_83BAB4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB4E8"))) PPC_WEAK_FUNC(sub_83BAB4E8);
PPC_FUNC_IMPL(__imp__sub_83BAB4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29616
	ctx.r3.s64 = ctx.r11.s64 + -29616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB4F4"))) PPC_WEAK_FUNC(sub_83BAB4F4);
PPC_FUNC_IMPL(__imp__sub_83BAB4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB4F8"))) PPC_WEAK_FUNC(sub_83BAB4F8);
PPC_FUNC_IMPL(__imp__sub_83BAB4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29608
	ctx.r3.s64 = ctx.r11.s64 + -29608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB504"))) PPC_WEAK_FUNC(sub_83BAB504);
PPC_FUNC_IMPL(__imp__sub_83BAB504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB508"))) PPC_WEAK_FUNC(sub_83BAB508);
PPC_FUNC_IMPL(__imp__sub_83BAB508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29600
	ctx.r3.s64 = ctx.r11.s64 + -29600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB514"))) PPC_WEAK_FUNC(sub_83BAB514);
PPC_FUNC_IMPL(__imp__sub_83BAB514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB518"))) PPC_WEAK_FUNC(sub_83BAB518);
PPC_FUNC_IMPL(__imp__sub_83BAB518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29592
	ctx.r3.s64 = ctx.r11.s64 + -29592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB524"))) PPC_WEAK_FUNC(sub_83BAB524);
PPC_FUNC_IMPL(__imp__sub_83BAB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB528"))) PPC_WEAK_FUNC(sub_83BAB528);
PPC_FUNC_IMPL(__imp__sub_83BAB528) {
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
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// bl 0x83523120
	ctx.lr = 0x83BAB540;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29584
	ctx.r3.s64 = ctx.r10.s64 + -29584;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB54C;
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

__attribute__((alias("__imp__sub_83BAB55C"))) PPC_WEAK_FUNC(sub_83BAB55C);
PPC_FUNC_IMPL(__imp__sub_83BAB55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB560"))) PPC_WEAK_FUNC(sub_83BAB560);
PPC_FUNC_IMPL(__imp__sub_83BAB560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31976
	ctx.r7.s64 = ctx.r8.s64 + 31976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31976(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB588"))) PPC_WEAK_FUNC(sub_83BAB588);
PPC_FUNC_IMPL(__imp__sub_83BAB588) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-32492
	ctx.r6.s64 = ctx.r7.s64 + -32492;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32564(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32564);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31976);
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
	// std r9,-32492(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32492, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB5D0"))) PPC_WEAK_FUNC(sub_83BAB5D0);
PPC_FUNC_IMPL(__imp__sub_83BAB5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29568
	ctx.r3.s64 = ctx.r11.s64 + -29568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB5DC"))) PPC_WEAK_FUNC(sub_83BAB5DC);
PPC_FUNC_IMPL(__imp__sub_83BAB5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB5E0"))) PPC_WEAK_FUNC(sub_83BAB5E0);
PPC_FUNC_IMPL(__imp__sub_83BAB5E0) {
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
	// addi r3,r11,31984
	ctx.r3.s64 = ctx.r11.s64 + 31984;
	// bl 0x8259af80
	ctx.lr = 0x83BAB5F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29552
	ctx.r3.s64 = ctx.r10.s64 + -29552;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB604;
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

__attribute__((alias("__imp__sub_83BAB614"))) PPC_WEAK_FUNC(sub_83BAB614);
PPC_FUNC_IMPL(__imp__sub_83BAB614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB618"))) PPC_WEAK_FUNC(sub_83BAB618);
PPC_FUNC_IMPL(__imp__sub_83BAB618) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31964
	ctx.r11.s64 = ctx.r8.s64 + 31964;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-32516(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29560
	ctx.r3.s64 = ctx.r6.s64 + -29560;
	// stw r10,31964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB648"))) PPC_WEAK_FUNC(sub_83BAB648);
PPC_FUNC_IMPL(__imp__sub_83BAB648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29544
	ctx.r3.s64 = ctx.r11.s64 + -29544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB654"))) PPC_WEAK_FUNC(sub_83BAB654);
PPC_FUNC_IMPL(__imp__sub_83BAB654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB658"))) PPC_WEAK_FUNC(sub_83BAB658);
PPC_FUNC_IMPL(__imp__sub_83BAB658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29536
	ctx.r3.s64 = ctx.r11.s64 + -29536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB664"))) PPC_WEAK_FUNC(sub_83BAB664);
PPC_FUNC_IMPL(__imp__sub_83BAB664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB668"))) PPC_WEAK_FUNC(sub_83BAB668);
PPC_FUNC_IMPL(__imp__sub_83BAB668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29528
	ctx.r3.s64 = ctx.r11.s64 + -29528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB674"))) PPC_WEAK_FUNC(sub_83BAB674);
PPC_FUNC_IMPL(__imp__sub_83BAB674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB678"))) PPC_WEAK_FUNC(sub_83BAB678);
PPC_FUNC_IMPL(__imp__sub_83BAB678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29520
	ctx.r3.s64 = ctx.r11.s64 + -29520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB684"))) PPC_WEAK_FUNC(sub_83BAB684);
PPC_FUNC_IMPL(__imp__sub_83BAB684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB688"))) PPC_WEAK_FUNC(sub_83BAB688);
PPC_FUNC_IMPL(__imp__sub_83BAB688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29512
	ctx.r3.s64 = ctx.r11.s64 + -29512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB694"))) PPC_WEAK_FUNC(sub_83BAB694);
PPC_FUNC_IMPL(__imp__sub_83BAB694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB698"))) PPC_WEAK_FUNC(sub_83BAB698);
PPC_FUNC_IMPL(__imp__sub_83BAB698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29504
	ctx.r3.s64 = ctx.r11.s64 + -29504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB6A4"))) PPC_WEAK_FUNC(sub_83BAB6A4);
PPC_FUNC_IMPL(__imp__sub_83BAB6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB6A8"))) PPC_WEAK_FUNC(sub_83BAB6A8);
PPC_FUNC_IMPL(__imp__sub_83BAB6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB6B4"))) PPC_WEAK_FUNC(sub_83BAB6B4);
PPC_FUNC_IMPL(__imp__sub_83BAB6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB6B8"))) PPC_WEAK_FUNC(sub_83BAB6B8);
PPC_FUNC_IMPL(__imp__sub_83BAB6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29488
	ctx.r3.s64 = ctx.r11.s64 + -29488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB6C4"))) PPC_WEAK_FUNC(sub_83BAB6C4);
PPC_FUNC_IMPL(__imp__sub_83BAB6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB6C8"))) PPC_WEAK_FUNC(sub_83BAB6C8);
PPC_FUNC_IMPL(__imp__sub_83BAB6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29480
	ctx.r3.s64 = ctx.r11.s64 + -29480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB6D4"))) PPC_WEAK_FUNC(sub_83BAB6D4);
PPC_FUNC_IMPL(__imp__sub_83BAB6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB6D8"))) PPC_WEAK_FUNC(sub_83BAB6D8);
PPC_FUNC_IMPL(__imp__sub_83BAB6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29472
	ctx.r3.s64 = ctx.r11.s64 + -29472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB6E4"))) PPC_WEAK_FUNC(sub_83BAB6E4);
PPC_FUNC_IMPL(__imp__sub_83BAB6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB6E8"))) PPC_WEAK_FUNC(sub_83BAB6E8);
PPC_FUNC_IMPL(__imp__sub_83BAB6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29464
	ctx.r3.s64 = ctx.r11.s64 + -29464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB6F4"))) PPC_WEAK_FUNC(sub_83BAB6F4);
PPC_FUNC_IMPL(__imp__sub_83BAB6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB6F8"))) PPC_WEAK_FUNC(sub_83BAB6F8);
PPC_FUNC_IMPL(__imp__sub_83BAB6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29456
	ctx.r3.s64 = ctx.r11.s64 + -29456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB704"))) PPC_WEAK_FUNC(sub_83BAB704);
PPC_FUNC_IMPL(__imp__sub_83BAB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB708"))) PPC_WEAK_FUNC(sub_83BAB708);
PPC_FUNC_IMPL(__imp__sub_83BAB708) {
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
	// addi r3,r11,32328
	ctx.r3.s64 = ctx.r11.s64 + 32328;
	// bl 0x83523120
	ctx.lr = 0x83BAB720;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29448
	ctx.r3.s64 = ctx.r10.s64 + -29448;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB72C;
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

__attribute__((alias("__imp__sub_83BAB73C"))) PPC_WEAK_FUNC(sub_83BAB73C);
PPC_FUNC_IMPL(__imp__sub_83BAB73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB740"))) PPC_WEAK_FUNC(sub_83BAB740);
PPC_FUNC_IMPL(__imp__sub_83BAB740) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32344
	ctx.r7.s64 = ctx.r8.s64 + 32344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB768"))) PPC_WEAK_FUNC(sub_83BAB768);
PPC_FUNC_IMPL(__imp__sub_83BAB768) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-32352
	ctx.r6.s64 = ctx.r7.s64 + -32352;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32424(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32424);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32344);
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
	// std r9,-32352(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB7B0"))) PPC_WEAK_FUNC(sub_83BAB7B0);
PPC_FUNC_IMPL(__imp__sub_83BAB7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29432
	ctx.r3.s64 = ctx.r11.s64 + -29432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB7BC"))) PPC_WEAK_FUNC(sub_83BAB7BC);
PPC_FUNC_IMPL(__imp__sub_83BAB7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB7C0"))) PPC_WEAK_FUNC(sub_83BAB7C0);
PPC_FUNC_IMPL(__imp__sub_83BAB7C0) {
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
	// addi r3,r11,32352
	ctx.r3.s64 = ctx.r11.s64 + 32352;
	// bl 0x8259af80
	ctx.lr = 0x83BAB7D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29416
	ctx.r3.s64 = ctx.r10.s64 + -29416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB7E4;
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

__attribute__((alias("__imp__sub_83BAB7F4"))) PPC_WEAK_FUNC(sub_83BAB7F4);
PPC_FUNC_IMPL(__imp__sub_83BAB7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB7F8"))) PPC_WEAK_FUNC(sub_83BAB7F8);
PPC_FUNC_IMPL(__imp__sub_83BAB7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32332
	ctx.r11.s64 = ctx.r8.s64 + 32332;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-32376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32376);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29424
	ctx.r3.s64 = ctx.r6.s64 + -29424;
	// stw r10,32332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32332, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB828"))) PPC_WEAK_FUNC(sub_83BAB828);
PPC_FUNC_IMPL(__imp__sub_83BAB828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29408
	ctx.r3.s64 = ctx.r11.s64 + -29408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB834"))) PPC_WEAK_FUNC(sub_83BAB834);
PPC_FUNC_IMPL(__imp__sub_83BAB834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB838"))) PPC_WEAK_FUNC(sub_83BAB838);
PPC_FUNC_IMPL(__imp__sub_83BAB838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29400
	ctx.r3.s64 = ctx.r11.s64 + -29400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB844"))) PPC_WEAK_FUNC(sub_83BAB844);
PPC_FUNC_IMPL(__imp__sub_83BAB844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB848"))) PPC_WEAK_FUNC(sub_83BAB848);
PPC_FUNC_IMPL(__imp__sub_83BAB848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29392
	ctx.r3.s64 = ctx.r11.s64 + -29392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB854"))) PPC_WEAK_FUNC(sub_83BAB854);
PPC_FUNC_IMPL(__imp__sub_83BAB854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB858"))) PPC_WEAK_FUNC(sub_83BAB858);
PPC_FUNC_IMPL(__imp__sub_83BAB858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29384
	ctx.r3.s64 = ctx.r11.s64 + -29384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB864"))) PPC_WEAK_FUNC(sub_83BAB864);
PPC_FUNC_IMPL(__imp__sub_83BAB864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB868"))) PPC_WEAK_FUNC(sub_83BAB868);
PPC_FUNC_IMPL(__imp__sub_83BAB868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29376
	ctx.r3.s64 = ctx.r11.s64 + -29376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB874"))) PPC_WEAK_FUNC(sub_83BAB874);
PPC_FUNC_IMPL(__imp__sub_83BAB874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB878"))) PPC_WEAK_FUNC(sub_83BAB878);
PPC_FUNC_IMPL(__imp__sub_83BAB878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29368
	ctx.r3.s64 = ctx.r11.s64 + -29368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB884"))) PPC_WEAK_FUNC(sub_83BAB884);
PPC_FUNC_IMPL(__imp__sub_83BAB884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB888"))) PPC_WEAK_FUNC(sub_83BAB888);
PPC_FUNC_IMPL(__imp__sub_83BAB888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29360
	ctx.r3.s64 = ctx.r11.s64 + -29360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB894"))) PPC_WEAK_FUNC(sub_83BAB894);
PPC_FUNC_IMPL(__imp__sub_83BAB894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB898"))) PPC_WEAK_FUNC(sub_83BAB898);
PPC_FUNC_IMPL(__imp__sub_83BAB898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29352
	ctx.r3.s64 = ctx.r11.s64 + -29352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB8A4"))) PPC_WEAK_FUNC(sub_83BAB8A4);
PPC_FUNC_IMPL(__imp__sub_83BAB8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB8A8"))) PPC_WEAK_FUNC(sub_83BAB8A8);
PPC_FUNC_IMPL(__imp__sub_83BAB8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29344
	ctx.r3.s64 = ctx.r11.s64 + -29344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB8B4"))) PPC_WEAK_FUNC(sub_83BAB8B4);
PPC_FUNC_IMPL(__imp__sub_83BAB8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB8B8"))) PPC_WEAK_FUNC(sub_83BAB8B8);
PPC_FUNC_IMPL(__imp__sub_83BAB8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB8C4"))) PPC_WEAK_FUNC(sub_83BAB8C4);
PPC_FUNC_IMPL(__imp__sub_83BAB8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB8C8"))) PPC_WEAK_FUNC(sub_83BAB8C8);
PPC_FUNC_IMPL(__imp__sub_83BAB8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29328
	ctx.r3.s64 = ctx.r11.s64 + -29328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB8D4"))) PPC_WEAK_FUNC(sub_83BAB8D4);
PPC_FUNC_IMPL(__imp__sub_83BAB8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB8D8"))) PPC_WEAK_FUNC(sub_83BAB8D8);
PPC_FUNC_IMPL(__imp__sub_83BAB8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29320
	ctx.r3.s64 = ctx.r11.s64 + -29320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB8E4"))) PPC_WEAK_FUNC(sub_83BAB8E4);
PPC_FUNC_IMPL(__imp__sub_83BAB8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB8E8"))) PPC_WEAK_FUNC(sub_83BAB8E8);
PPC_FUNC_IMPL(__imp__sub_83BAB8E8) {
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
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// bl 0x83523120
	ctx.lr = 0x83BAB900;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29312
	ctx.r3.s64 = ctx.r10.s64 + -29312;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB90C;
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

__attribute__((alias("__imp__sub_83BAB91C"))) PPC_WEAK_FUNC(sub_83BAB91C);
PPC_FUNC_IMPL(__imp__sub_83BAB91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB920"))) PPC_WEAK_FUNC(sub_83BAB920);
PPC_FUNC_IMPL(__imp__sub_83BAB920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32712
	ctx.r7.s64 = ctx.r8.s64 + 32712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB948"))) PPC_WEAK_FUNC(sub_83BAB948);
PPC_FUNC_IMPL(__imp__sub_83BAB948) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-32216
	ctx.r6.s64 = ctx.r7.s64 + -32216;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32288(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32288);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32712);
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
	// std r9,-32216(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32216, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAB990"))) PPC_WEAK_FUNC(sub_83BAB990);
PPC_FUNC_IMPL(__imp__sub_83BAB990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29296
	ctx.r3.s64 = ctx.r11.s64 + -29296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAB99C"))) PPC_WEAK_FUNC(sub_83BAB99C);
PPC_FUNC_IMPL(__imp__sub_83BAB99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB9A0"))) PPC_WEAK_FUNC(sub_83BAB9A0);
PPC_FUNC_IMPL(__imp__sub_83BAB9A0) {
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
	// addi r3,r11,32720
	ctx.r3.s64 = ctx.r11.s64 + 32720;
	// bl 0x8259af80
	ctx.lr = 0x83BAB9B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29280
	ctx.r3.s64 = ctx.r10.s64 + -29280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAB9C4;
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

__attribute__((alias("__imp__sub_83BAB9D4"))) PPC_WEAK_FUNC(sub_83BAB9D4);
PPC_FUNC_IMPL(__imp__sub_83BAB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAB9D8"))) PPC_WEAK_FUNC(sub_83BAB9D8);
PPC_FUNC_IMPL(__imp__sub_83BAB9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32700
	ctx.r11.s64 = ctx.r8.s64 + 32700;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-32240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32240);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29288
	ctx.r3.s64 = ctx.r6.s64 + -29288;
	// stw r10,32700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32700, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA08"))) PPC_WEAK_FUNC(sub_83BABA08);
PPC_FUNC_IMPL(__imp__sub_83BABA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29272
	ctx.r3.s64 = ctx.r11.s64 + -29272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA14"))) PPC_WEAK_FUNC(sub_83BABA14);
PPC_FUNC_IMPL(__imp__sub_83BABA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA18"))) PPC_WEAK_FUNC(sub_83BABA18);
PPC_FUNC_IMPL(__imp__sub_83BABA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29264
	ctx.r3.s64 = ctx.r11.s64 + -29264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA24"))) PPC_WEAK_FUNC(sub_83BABA24);
PPC_FUNC_IMPL(__imp__sub_83BABA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA28"))) PPC_WEAK_FUNC(sub_83BABA28);
PPC_FUNC_IMPL(__imp__sub_83BABA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29256
	ctx.r3.s64 = ctx.r11.s64 + -29256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA34"))) PPC_WEAK_FUNC(sub_83BABA34);
PPC_FUNC_IMPL(__imp__sub_83BABA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA38"))) PPC_WEAK_FUNC(sub_83BABA38);
PPC_FUNC_IMPL(__imp__sub_83BABA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29248
	ctx.r3.s64 = ctx.r11.s64 + -29248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA44"))) PPC_WEAK_FUNC(sub_83BABA44);
PPC_FUNC_IMPL(__imp__sub_83BABA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA48"))) PPC_WEAK_FUNC(sub_83BABA48);
PPC_FUNC_IMPL(__imp__sub_83BABA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA54"))) PPC_WEAK_FUNC(sub_83BABA54);
PPC_FUNC_IMPL(__imp__sub_83BABA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA58"))) PPC_WEAK_FUNC(sub_83BABA58);
PPC_FUNC_IMPL(__imp__sub_83BABA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29232
	ctx.r3.s64 = ctx.r11.s64 + -29232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA64"))) PPC_WEAK_FUNC(sub_83BABA64);
PPC_FUNC_IMPL(__imp__sub_83BABA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA68"))) PPC_WEAK_FUNC(sub_83BABA68);
PPC_FUNC_IMPL(__imp__sub_83BABA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29224
	ctx.r3.s64 = ctx.r11.s64 + -29224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA74"))) PPC_WEAK_FUNC(sub_83BABA74);
PPC_FUNC_IMPL(__imp__sub_83BABA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA78"))) PPC_WEAK_FUNC(sub_83BABA78);
PPC_FUNC_IMPL(__imp__sub_83BABA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29216
	ctx.r3.s64 = ctx.r11.s64 + -29216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA84"))) PPC_WEAK_FUNC(sub_83BABA84);
PPC_FUNC_IMPL(__imp__sub_83BABA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA88"))) PPC_WEAK_FUNC(sub_83BABA88);
PPC_FUNC_IMPL(__imp__sub_83BABA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABA94"))) PPC_WEAK_FUNC(sub_83BABA94);
PPC_FUNC_IMPL(__imp__sub_83BABA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABA98"))) PPC_WEAK_FUNC(sub_83BABA98);
PPC_FUNC_IMPL(__imp__sub_83BABA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29200
	ctx.r3.s64 = ctx.r11.s64 + -29200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABAA4"))) PPC_WEAK_FUNC(sub_83BABAA4);
PPC_FUNC_IMPL(__imp__sub_83BABAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABAA8"))) PPC_WEAK_FUNC(sub_83BABAA8);
PPC_FUNC_IMPL(__imp__sub_83BABAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29192
	ctx.r3.s64 = ctx.r11.s64 + -29192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABAB4"))) PPC_WEAK_FUNC(sub_83BABAB4);
PPC_FUNC_IMPL(__imp__sub_83BABAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABAB8"))) PPC_WEAK_FUNC(sub_83BABAB8);
PPC_FUNC_IMPL(__imp__sub_83BABAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29184
	ctx.r3.s64 = ctx.r11.s64 + -29184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABAC4"))) PPC_WEAK_FUNC(sub_83BABAC4);
PPC_FUNC_IMPL(__imp__sub_83BABAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABAC8"))) PPC_WEAK_FUNC(sub_83BABAC8);
PPC_FUNC_IMPL(__imp__sub_83BABAC8) {
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
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// bl 0x83523120
	ctx.lr = 0x83BABAE0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29176
	ctx.r3.s64 = ctx.r10.s64 + -29176;
	// bl 0x831cdcc8
	ctx.lr = 0x83BABAEC;
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

__attribute__((alias("__imp__sub_83BABAFC"))) PPC_WEAK_FUNC(sub_83BABAFC);
PPC_FUNC_IMPL(__imp__sub_83BABAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABB00"))) PPC_WEAK_FUNC(sub_83BABB00);
PPC_FUNC_IMPL(__imp__sub_83BABB00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32456
	ctx.r7.s64 = ctx.r8.s64 + -32456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BABB28"))) PPC_WEAK_FUNC(sub_83BABB28);
PPC_FUNC_IMPL(__imp__sub_83BABB28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-32080
	ctx.r6.s64 = ctx.r7.s64 + -32080;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32456);
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
	// std r9,-32080(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BABB70"))) PPC_WEAK_FUNC(sub_83BABB70);
PPC_FUNC_IMPL(__imp__sub_83BABB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29160
	ctx.r3.s64 = ctx.r11.s64 + -29160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABB7C"))) PPC_WEAK_FUNC(sub_83BABB7C);
PPC_FUNC_IMPL(__imp__sub_83BABB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABB80"))) PPC_WEAK_FUNC(sub_83BABB80);
PPC_FUNC_IMPL(__imp__sub_83BABB80) {
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
	// addi r3,r11,-32448
	ctx.r3.s64 = ctx.r11.s64 + -32448;
	// bl 0x8259af80
	ctx.lr = 0x83BABB98;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29144
	ctx.r3.s64 = ctx.r10.s64 + -29144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BABBA4;
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

__attribute__((alias("__imp__sub_83BABBB4"))) PPC_WEAK_FUNC(sub_83BABBB4);
PPC_FUNC_IMPL(__imp__sub_83BABBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABBB8"))) PPC_WEAK_FUNC(sub_83BABBB8);
PPC_FUNC_IMPL(__imp__sub_83BABBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32468
	ctx.r11.s64 = ctx.r8.s64 + -32468;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-32104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29152
	ctx.r3.s64 = ctx.r6.s64 + -29152;
	// stw r10,-32468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABBE8"))) PPC_WEAK_FUNC(sub_83BABBE8);
PPC_FUNC_IMPL(__imp__sub_83BABBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29136
	ctx.r3.s64 = ctx.r11.s64 + -29136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABBF4"))) PPC_WEAK_FUNC(sub_83BABBF4);
PPC_FUNC_IMPL(__imp__sub_83BABBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABBF8"))) PPC_WEAK_FUNC(sub_83BABBF8);
PPC_FUNC_IMPL(__imp__sub_83BABBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29128
	ctx.r3.s64 = ctx.r11.s64 + -29128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC04"))) PPC_WEAK_FUNC(sub_83BABC04);
PPC_FUNC_IMPL(__imp__sub_83BABC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC08"))) PPC_WEAK_FUNC(sub_83BABC08);
PPC_FUNC_IMPL(__imp__sub_83BABC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29120
	ctx.r3.s64 = ctx.r11.s64 + -29120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC14"))) PPC_WEAK_FUNC(sub_83BABC14);
PPC_FUNC_IMPL(__imp__sub_83BABC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC18"))) PPC_WEAK_FUNC(sub_83BABC18);
PPC_FUNC_IMPL(__imp__sub_83BABC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29112
	ctx.r3.s64 = ctx.r11.s64 + -29112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC24"))) PPC_WEAK_FUNC(sub_83BABC24);
PPC_FUNC_IMPL(__imp__sub_83BABC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC28"))) PPC_WEAK_FUNC(sub_83BABC28);
PPC_FUNC_IMPL(__imp__sub_83BABC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC34"))) PPC_WEAK_FUNC(sub_83BABC34);
PPC_FUNC_IMPL(__imp__sub_83BABC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC38"))) PPC_WEAK_FUNC(sub_83BABC38);
PPC_FUNC_IMPL(__imp__sub_83BABC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29096
	ctx.r3.s64 = ctx.r11.s64 + -29096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC44"))) PPC_WEAK_FUNC(sub_83BABC44);
PPC_FUNC_IMPL(__imp__sub_83BABC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC48"))) PPC_WEAK_FUNC(sub_83BABC48);
PPC_FUNC_IMPL(__imp__sub_83BABC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29088
	ctx.r3.s64 = ctx.r11.s64 + -29088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC54"))) PPC_WEAK_FUNC(sub_83BABC54);
PPC_FUNC_IMPL(__imp__sub_83BABC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC58"))) PPC_WEAK_FUNC(sub_83BABC58);
PPC_FUNC_IMPL(__imp__sub_83BABC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29080
	ctx.r3.s64 = ctx.r11.s64 + -29080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC64"))) PPC_WEAK_FUNC(sub_83BABC64);
PPC_FUNC_IMPL(__imp__sub_83BABC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC68"))) PPC_WEAK_FUNC(sub_83BABC68);
PPC_FUNC_IMPL(__imp__sub_83BABC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29072
	ctx.r3.s64 = ctx.r11.s64 + -29072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC74"))) PPC_WEAK_FUNC(sub_83BABC74);
PPC_FUNC_IMPL(__imp__sub_83BABC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC78"))) PPC_WEAK_FUNC(sub_83BABC78);
PPC_FUNC_IMPL(__imp__sub_83BABC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29064
	ctx.r3.s64 = ctx.r11.s64 + -29064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC84"))) PPC_WEAK_FUNC(sub_83BABC84);
PPC_FUNC_IMPL(__imp__sub_83BABC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC88"))) PPC_WEAK_FUNC(sub_83BABC88);
PPC_FUNC_IMPL(__imp__sub_83BABC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29056
	ctx.r3.s64 = ctx.r11.s64 + -29056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABC94"))) PPC_WEAK_FUNC(sub_83BABC94);
PPC_FUNC_IMPL(__imp__sub_83BABC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABC98"))) PPC_WEAK_FUNC(sub_83BABC98);
PPC_FUNC_IMPL(__imp__sub_83BABC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29048
	ctx.r3.s64 = ctx.r11.s64 + -29048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABCA4"))) PPC_WEAK_FUNC(sub_83BABCA4);
PPC_FUNC_IMPL(__imp__sub_83BABCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABCA8"))) PPC_WEAK_FUNC(sub_83BABCA8);
PPC_FUNC_IMPL(__imp__sub_83BABCA8) {
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
	// addi r3,r11,-32104
	ctx.r3.s64 = ctx.r11.s64 + -32104;
	// bl 0x83523120
	ctx.lr = 0x83BABCC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29040
	ctx.r3.s64 = ctx.r10.s64 + -29040;
	// bl 0x831cdcc8
	ctx.lr = 0x83BABCCC;
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

__attribute__((alias("__imp__sub_83BABCDC"))) PPC_WEAK_FUNC(sub_83BABCDC);
PPC_FUNC_IMPL(__imp__sub_83BABCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABCE0"))) PPC_WEAK_FUNC(sub_83BABCE0);
PPC_FUNC_IMPL(__imp__sub_83BABCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32088
	ctx.r7.s64 = ctx.r8.s64 + -32088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32088(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BABD08"))) PPC_WEAK_FUNC(sub_83BABD08);
PPC_FUNC_IMPL(__imp__sub_83BABD08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-31952
	ctx.r6.s64 = ctx.r7.s64 + -31952;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32088);
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
	// std r9,-31952(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31952, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BABD50"))) PPC_WEAK_FUNC(sub_83BABD50);
PPC_FUNC_IMPL(__imp__sub_83BABD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29024
	ctx.r3.s64 = ctx.r11.s64 + -29024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABD5C"))) PPC_WEAK_FUNC(sub_83BABD5C);
PPC_FUNC_IMPL(__imp__sub_83BABD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABD60"))) PPC_WEAK_FUNC(sub_83BABD60);
PPC_FUNC_IMPL(__imp__sub_83BABD60) {
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
	// addi r3,r11,-32080
	ctx.r3.s64 = ctx.r11.s64 + -32080;
	// bl 0x8259af80
	ctx.lr = 0x83BABD78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-29008
	ctx.r3.s64 = ctx.r10.s64 + -29008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BABD84;
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

__attribute__((alias("__imp__sub_83BABD94"))) PPC_WEAK_FUNC(sub_83BABD94);
PPC_FUNC_IMPL(__imp__sub_83BABD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABD98"))) PPC_WEAK_FUNC(sub_83BABD98);
PPC_FUNC_IMPL(__imp__sub_83BABD98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32100
	ctx.r11.s64 = ctx.r8.s64 + -32100;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31976(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31976);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29016
	ctx.r3.s64 = ctx.r6.s64 + -29016;
	// stw r10,-32100(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABDC8"))) PPC_WEAK_FUNC(sub_83BABDC8);
PPC_FUNC_IMPL(__imp__sub_83BABDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-29000
	ctx.r3.s64 = ctx.r11.s64 + -29000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABDD4"))) PPC_WEAK_FUNC(sub_83BABDD4);
PPC_FUNC_IMPL(__imp__sub_83BABDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABDD8"))) PPC_WEAK_FUNC(sub_83BABDD8);
PPC_FUNC_IMPL(__imp__sub_83BABDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28992
	ctx.r3.s64 = ctx.r11.s64 + -28992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABDE4"))) PPC_WEAK_FUNC(sub_83BABDE4);
PPC_FUNC_IMPL(__imp__sub_83BABDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABDE8"))) PPC_WEAK_FUNC(sub_83BABDE8);
PPC_FUNC_IMPL(__imp__sub_83BABDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28984
	ctx.r3.s64 = ctx.r11.s64 + -28984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABDF4"))) PPC_WEAK_FUNC(sub_83BABDF4);
PPC_FUNC_IMPL(__imp__sub_83BABDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABDF8"))) PPC_WEAK_FUNC(sub_83BABDF8);
PPC_FUNC_IMPL(__imp__sub_83BABDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28976
	ctx.r3.s64 = ctx.r11.s64 + -28976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE04"))) PPC_WEAK_FUNC(sub_83BABE04);
PPC_FUNC_IMPL(__imp__sub_83BABE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE08"))) PPC_WEAK_FUNC(sub_83BABE08);
PPC_FUNC_IMPL(__imp__sub_83BABE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28968
	ctx.r3.s64 = ctx.r11.s64 + -28968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE14"))) PPC_WEAK_FUNC(sub_83BABE14);
PPC_FUNC_IMPL(__imp__sub_83BABE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE18"))) PPC_WEAK_FUNC(sub_83BABE18);
PPC_FUNC_IMPL(__imp__sub_83BABE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE24"))) PPC_WEAK_FUNC(sub_83BABE24);
PPC_FUNC_IMPL(__imp__sub_83BABE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE28"))) PPC_WEAK_FUNC(sub_83BABE28);
PPC_FUNC_IMPL(__imp__sub_83BABE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28952
	ctx.r3.s64 = ctx.r11.s64 + -28952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE34"))) PPC_WEAK_FUNC(sub_83BABE34);
PPC_FUNC_IMPL(__imp__sub_83BABE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE38"))) PPC_WEAK_FUNC(sub_83BABE38);
PPC_FUNC_IMPL(__imp__sub_83BABE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28944
	ctx.r3.s64 = ctx.r11.s64 + -28944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE44"))) PPC_WEAK_FUNC(sub_83BABE44);
PPC_FUNC_IMPL(__imp__sub_83BABE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE48"))) PPC_WEAK_FUNC(sub_83BABE48);
PPC_FUNC_IMPL(__imp__sub_83BABE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28936
	ctx.r3.s64 = ctx.r11.s64 + -28936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE54"))) PPC_WEAK_FUNC(sub_83BABE54);
PPC_FUNC_IMPL(__imp__sub_83BABE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE58"))) PPC_WEAK_FUNC(sub_83BABE58);
PPC_FUNC_IMPL(__imp__sub_83BABE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28928
	ctx.r3.s64 = ctx.r11.s64 + -28928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE64"))) PPC_WEAK_FUNC(sub_83BABE64);
PPC_FUNC_IMPL(__imp__sub_83BABE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE68"))) PPC_WEAK_FUNC(sub_83BABE68);
PPC_FUNC_IMPL(__imp__sub_83BABE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28920
	ctx.r3.s64 = ctx.r11.s64 + -28920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE74"))) PPC_WEAK_FUNC(sub_83BABE74);
PPC_FUNC_IMPL(__imp__sub_83BABE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE78"))) PPC_WEAK_FUNC(sub_83BABE78);
PPC_FUNC_IMPL(__imp__sub_83BABE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28912
	ctx.r3.s64 = ctx.r11.s64 + -28912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABE84"))) PPC_WEAK_FUNC(sub_83BABE84);
PPC_FUNC_IMPL(__imp__sub_83BABE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABE88"))) PPC_WEAK_FUNC(sub_83BABE88);
PPC_FUNC_IMPL(__imp__sub_83BABE88) {
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
	// addi r3,r11,-31736
	ctx.r3.s64 = ctx.r11.s64 + -31736;
	// bl 0x83523120
	ctx.lr = 0x83BABEA0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-28904
	ctx.r3.s64 = ctx.r10.s64 + -28904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BABEAC;
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

__attribute__((alias("__imp__sub_83BABEBC"))) PPC_WEAK_FUNC(sub_83BABEBC);
PPC_FUNC_IMPL(__imp__sub_83BABEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABEC0"))) PPC_WEAK_FUNC(sub_83BABEC0);
PPC_FUNC_IMPL(__imp__sub_83BABEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31720
	ctx.r7.s64 = ctx.r8.s64 + -31720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BABEE8"))) PPC_WEAK_FUNC(sub_83BABEE8);
PPC_FUNC_IMPL(__imp__sub_83BABEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-31824
	ctx.r6.s64 = ctx.r7.s64 + -31824;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31896(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31896);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31720);
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
	// std r9,-31824(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31824, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BABF30"))) PPC_WEAK_FUNC(sub_83BABF30);
PPC_FUNC_IMPL(__imp__sub_83BABF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28888
	ctx.r3.s64 = ctx.r11.s64 + -28888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABF3C"))) PPC_WEAK_FUNC(sub_83BABF3C);
PPC_FUNC_IMPL(__imp__sub_83BABF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABF40"))) PPC_WEAK_FUNC(sub_83BABF40);
PPC_FUNC_IMPL(__imp__sub_83BABF40) {
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
	// addi r3,r11,-31712
	ctx.r3.s64 = ctx.r11.s64 + -31712;
	// bl 0x8259af80
	ctx.lr = 0x83BABF58;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-28872
	ctx.r3.s64 = ctx.r10.s64 + -28872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BABF64;
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

__attribute__((alias("__imp__sub_83BABF74"))) PPC_WEAK_FUNC(sub_83BABF74);
PPC_FUNC_IMPL(__imp__sub_83BABF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABF78"))) PPC_WEAK_FUNC(sub_83BABF78);
PPC_FUNC_IMPL(__imp__sub_83BABF78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31732
	ctx.r11.s64 = ctx.r8.s64 + -31732;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31848);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28880
	ctx.r3.s64 = ctx.r6.s64 + -28880;
	// stw r10,-31732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABFA8"))) PPC_WEAK_FUNC(sub_83BABFA8);
PPC_FUNC_IMPL(__imp__sub_83BABFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28864
	ctx.r3.s64 = ctx.r11.s64 + -28864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABFB4"))) PPC_WEAK_FUNC(sub_83BABFB4);
PPC_FUNC_IMPL(__imp__sub_83BABFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABFB8"))) PPC_WEAK_FUNC(sub_83BABFB8);
PPC_FUNC_IMPL(__imp__sub_83BABFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28856
	ctx.r3.s64 = ctx.r11.s64 + -28856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABFC4"))) PPC_WEAK_FUNC(sub_83BABFC4);
PPC_FUNC_IMPL(__imp__sub_83BABFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABFC8"))) PPC_WEAK_FUNC(sub_83BABFC8);
PPC_FUNC_IMPL(__imp__sub_83BABFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28848
	ctx.r3.s64 = ctx.r11.s64 + -28848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABFD4"))) PPC_WEAK_FUNC(sub_83BABFD4);
PPC_FUNC_IMPL(__imp__sub_83BABFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABFD8"))) PPC_WEAK_FUNC(sub_83BABFD8);
PPC_FUNC_IMPL(__imp__sub_83BABFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28840
	ctx.r3.s64 = ctx.r11.s64 + -28840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABFE4"))) PPC_WEAK_FUNC(sub_83BABFE4);
PPC_FUNC_IMPL(__imp__sub_83BABFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABFE8"))) PPC_WEAK_FUNC(sub_83BABFE8);
PPC_FUNC_IMPL(__imp__sub_83BABFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28832
	ctx.r3.s64 = ctx.r11.s64 + -28832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BABFF4"))) PPC_WEAK_FUNC(sub_83BABFF4);
PPC_FUNC_IMPL(__imp__sub_83BABFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BABFF8"))) PPC_WEAK_FUNC(sub_83BABFF8);
PPC_FUNC_IMPL(__imp__sub_83BABFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28824
	ctx.r3.s64 = ctx.r11.s64 + -28824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC004"))) PPC_WEAK_FUNC(sub_83BAC004);
PPC_FUNC_IMPL(__imp__sub_83BAC004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC008"))) PPC_WEAK_FUNC(sub_83BAC008);
PPC_FUNC_IMPL(__imp__sub_83BAC008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28816
	ctx.r3.s64 = ctx.r11.s64 + -28816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC014"))) PPC_WEAK_FUNC(sub_83BAC014);
PPC_FUNC_IMPL(__imp__sub_83BAC014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC018"))) PPC_WEAK_FUNC(sub_83BAC018);
PPC_FUNC_IMPL(__imp__sub_83BAC018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28808
	ctx.r3.s64 = ctx.r11.s64 + -28808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC024"))) PPC_WEAK_FUNC(sub_83BAC024);
PPC_FUNC_IMPL(__imp__sub_83BAC024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC028"))) PPC_WEAK_FUNC(sub_83BAC028);
PPC_FUNC_IMPL(__imp__sub_83BAC028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28800
	ctx.r3.s64 = ctx.r11.s64 + -28800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC034"))) PPC_WEAK_FUNC(sub_83BAC034);
PPC_FUNC_IMPL(__imp__sub_83BAC034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC038"))) PPC_WEAK_FUNC(sub_83BAC038);
PPC_FUNC_IMPL(__imp__sub_83BAC038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28792
	ctx.r3.s64 = ctx.r11.s64 + -28792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC044"))) PPC_WEAK_FUNC(sub_83BAC044);
PPC_FUNC_IMPL(__imp__sub_83BAC044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC048"))) PPC_WEAK_FUNC(sub_83BAC048);
PPC_FUNC_IMPL(__imp__sub_83BAC048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28784
	ctx.r3.s64 = ctx.r11.s64 + -28784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC054"))) PPC_WEAK_FUNC(sub_83BAC054);
PPC_FUNC_IMPL(__imp__sub_83BAC054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC058"))) PPC_WEAK_FUNC(sub_83BAC058);
PPC_FUNC_IMPL(__imp__sub_83BAC058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28776
	ctx.r3.s64 = ctx.r11.s64 + -28776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC064"))) PPC_WEAK_FUNC(sub_83BAC064);
PPC_FUNC_IMPL(__imp__sub_83BAC064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC068"))) PPC_WEAK_FUNC(sub_83BAC068);
PPC_FUNC_IMPL(__imp__sub_83BAC068) {
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
	// addi r3,r11,-31352
	ctx.r3.s64 = ctx.r11.s64 + -31352;
	// bl 0x83523120
	ctx.lr = 0x83BAC080;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-28768
	ctx.r3.s64 = ctx.r10.s64 + -28768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAC08C;
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

__attribute__((alias("__imp__sub_83BAC09C"))) PPC_WEAK_FUNC(sub_83BAC09C);
PPC_FUNC_IMPL(__imp__sub_83BAC09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC0A0"))) PPC_WEAK_FUNC(sub_83BAC0A0);
PPC_FUNC_IMPL(__imp__sub_83BAC0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31336
	ctx.r7.s64 = ctx.r8.s64 + -31336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAC0C8"))) PPC_WEAK_FUNC(sub_83BAC0C8);
PPC_FUNC_IMPL(__imp__sub_83BAC0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-31692
	ctx.r6.s64 = ctx.r7.s64 + -31692;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31764(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31764);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31336);
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
	// std r9,-31692(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31692, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAC110"))) PPC_WEAK_FUNC(sub_83BAC110);
PPC_FUNC_IMPL(__imp__sub_83BAC110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28752
	ctx.r3.s64 = ctx.r11.s64 + -28752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC11C"))) PPC_WEAK_FUNC(sub_83BAC11C);
PPC_FUNC_IMPL(__imp__sub_83BAC11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC120"))) PPC_WEAK_FUNC(sub_83BAC120);
PPC_FUNC_IMPL(__imp__sub_83BAC120) {
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
	// addi r3,r11,-31328
	ctx.r3.s64 = ctx.r11.s64 + -31328;
	// bl 0x8259af80
	ctx.lr = 0x83BAC138;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-28720
	ctx.r3.s64 = ctx.r10.s64 + -28720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAC144;
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

__attribute__((alias("__imp__sub_83BAC154"))) PPC_WEAK_FUNC(sub_83BAC154);
PPC_FUNC_IMPL(__imp__sub_83BAC154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC158"))) PPC_WEAK_FUNC(sub_83BAC158);
PPC_FUNC_IMPL(__imp__sub_83BAC158) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31348
	ctx.r11.s64 = ctx.r8.s64 + -31348;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31716);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28744
	ctx.r3.s64 = ctx.r6.s64 + -28744;
	// stw r10,-31348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC188"))) PPC_WEAK_FUNC(sub_83BAC188);
PPC_FUNC_IMPL(__imp__sub_83BAC188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28712
	ctx.r3.s64 = ctx.r11.s64 + -28712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC194"))) PPC_WEAK_FUNC(sub_83BAC194);
PPC_FUNC_IMPL(__imp__sub_83BAC194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC198"))) PPC_WEAK_FUNC(sub_83BAC198);
PPC_FUNC_IMPL(__imp__sub_83BAC198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28704
	ctx.r3.s64 = ctx.r11.s64 + -28704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC1A4"))) PPC_WEAK_FUNC(sub_83BAC1A4);
PPC_FUNC_IMPL(__imp__sub_83BAC1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC1A8"))) PPC_WEAK_FUNC(sub_83BAC1A8);
PPC_FUNC_IMPL(__imp__sub_83BAC1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28696
	ctx.r3.s64 = ctx.r11.s64 + -28696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAC1B4"))) PPC_WEAK_FUNC(sub_83BAC1B4);
PPC_FUNC_IMPL(__imp__sub_83BAC1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAC1B8"))) PPC_WEAK_FUNC(sub_83BAC1B8);
PPC_FUNC_IMPL(__imp__sub_83BAC1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-28688
	ctx.r3.s64 = ctx.r11.s64 + -28688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

