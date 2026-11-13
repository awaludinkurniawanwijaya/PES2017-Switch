#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BA78D8"))) PPC_WEAK_FUNC(sub_83BA78D8);
PPC_FUNC_IMPL(__imp__sub_83BA78D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31528
	ctx.r3.s64 = ctx.r11.s64 + 31528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA78E4"))) PPC_WEAK_FUNC(sub_83BA78E4);
PPC_FUNC_IMPL(__imp__sub_83BA78E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA78E8"))) PPC_WEAK_FUNC(sub_83BA78E8);
PPC_FUNC_IMPL(__imp__sub_83BA78E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31536
	ctx.r3.s64 = ctx.r11.s64 + 31536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA78F4"))) PPC_WEAK_FUNC(sub_83BA78F4);
PPC_FUNC_IMPL(__imp__sub_83BA78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA78F8"))) PPC_WEAK_FUNC(sub_83BA78F8);
PPC_FUNC_IMPL(__imp__sub_83BA78F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31544
	ctx.r3.s64 = ctx.r11.s64 + 31544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7904"))) PPC_WEAK_FUNC(sub_83BA7904);
PPC_FUNC_IMPL(__imp__sub_83BA7904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7908"))) PPC_WEAK_FUNC(sub_83BA7908);
PPC_FUNC_IMPL(__imp__sub_83BA7908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31552
	ctx.r3.s64 = ctx.r11.s64 + 31552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7914"))) PPC_WEAK_FUNC(sub_83BA7914);
PPC_FUNC_IMPL(__imp__sub_83BA7914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7918"))) PPC_WEAK_FUNC(sub_83BA7918);
PPC_FUNC_IMPL(__imp__sub_83BA7918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31560
	ctx.r3.s64 = ctx.r11.s64 + 31560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7924"))) PPC_WEAK_FUNC(sub_83BA7924);
PPC_FUNC_IMPL(__imp__sub_83BA7924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7928"))) PPC_WEAK_FUNC(sub_83BA7928);
PPC_FUNC_IMPL(__imp__sub_83BA7928) {
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
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// bl 0x83523120
	ctx.lr = 0x83BA7940;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31568
	ctx.r3.s64 = ctx.r10.s64 + 31568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA794C;
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

__attribute__((alias("__imp__sub_83BA795C"))) PPC_WEAK_FUNC(sub_83BA795C);
PPC_FUNC_IMPL(__imp__sub_83BA795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7960"))) PPC_WEAK_FUNC(sub_83BA7960);
PPC_FUNC_IMPL(__imp__sub_83BA7960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20088
	ctx.r7.s64 = ctx.r8.s64 + 20088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7988"))) PPC_WEAK_FUNC(sub_83BA7988);
PPC_FUNC_IMPL(__imp__sub_83BA7988) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,28296
	ctx.r6.s64 = ctx.r7.s64 + 28296;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28224(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28224);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20088);
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
	// std r9,28296(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28296, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA79D0"))) PPC_WEAK_FUNC(sub_83BA79D0);
PPC_FUNC_IMPL(__imp__sub_83BA79D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31584
	ctx.r3.s64 = ctx.r11.s64 + 31584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA79DC"))) PPC_WEAK_FUNC(sub_83BA79DC);
PPC_FUNC_IMPL(__imp__sub_83BA79DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA79E0"))) PPC_WEAK_FUNC(sub_83BA79E0);
PPC_FUNC_IMPL(__imp__sub_83BA79E0) {
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
	// addi r3,r11,20096
	ctx.r3.s64 = ctx.r11.s64 + 20096;
	// bl 0x8259af80
	ctx.lr = 0x83BA79F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31600
	ctx.r3.s64 = ctx.r10.s64 + 31600;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7A04;
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

__attribute__((alias("__imp__sub_83BA7A14"))) PPC_WEAK_FUNC(sub_83BA7A14);
PPC_FUNC_IMPL(__imp__sub_83BA7A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7A18"))) PPC_WEAK_FUNC(sub_83BA7A18);
PPC_FUNC_IMPL(__imp__sub_83BA7A18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20076
	ctx.r11.s64 = ctx.r8.s64 + 20076;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,28272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28272);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31592
	ctx.r3.s64 = ctx.r6.s64 + 31592;
	// stw r10,20076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20076, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7A48"))) PPC_WEAK_FUNC(sub_83BA7A48);
PPC_FUNC_IMPL(__imp__sub_83BA7A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31608
	ctx.r3.s64 = ctx.r11.s64 + 31608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7A54"))) PPC_WEAK_FUNC(sub_83BA7A54);
PPC_FUNC_IMPL(__imp__sub_83BA7A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7A58"))) PPC_WEAK_FUNC(sub_83BA7A58);
PPC_FUNC_IMPL(__imp__sub_83BA7A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31616
	ctx.r3.s64 = ctx.r11.s64 + 31616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7A64"))) PPC_WEAK_FUNC(sub_83BA7A64);
PPC_FUNC_IMPL(__imp__sub_83BA7A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7A68"))) PPC_WEAK_FUNC(sub_83BA7A68);
PPC_FUNC_IMPL(__imp__sub_83BA7A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31624
	ctx.r3.s64 = ctx.r11.s64 + 31624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7A74"))) PPC_WEAK_FUNC(sub_83BA7A74);
PPC_FUNC_IMPL(__imp__sub_83BA7A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7A78"))) PPC_WEAK_FUNC(sub_83BA7A78);
PPC_FUNC_IMPL(__imp__sub_83BA7A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31632
	ctx.r3.s64 = ctx.r11.s64 + 31632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7A84"))) PPC_WEAK_FUNC(sub_83BA7A84);
PPC_FUNC_IMPL(__imp__sub_83BA7A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7A88"))) PPC_WEAK_FUNC(sub_83BA7A88);
PPC_FUNC_IMPL(__imp__sub_83BA7A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7A94"))) PPC_WEAK_FUNC(sub_83BA7A94);
PPC_FUNC_IMPL(__imp__sub_83BA7A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7A98"))) PPC_WEAK_FUNC(sub_83BA7A98);
PPC_FUNC_IMPL(__imp__sub_83BA7A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31648
	ctx.r3.s64 = ctx.r11.s64 + 31648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7AA4"))) PPC_WEAK_FUNC(sub_83BA7AA4);
PPC_FUNC_IMPL(__imp__sub_83BA7AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7AA8"))) PPC_WEAK_FUNC(sub_83BA7AA8);
PPC_FUNC_IMPL(__imp__sub_83BA7AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31656
	ctx.r3.s64 = ctx.r11.s64 + 31656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7AB4"))) PPC_WEAK_FUNC(sub_83BA7AB4);
PPC_FUNC_IMPL(__imp__sub_83BA7AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7AB8"))) PPC_WEAK_FUNC(sub_83BA7AB8);
PPC_FUNC_IMPL(__imp__sub_83BA7AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31664
	ctx.r3.s64 = ctx.r11.s64 + 31664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7AC4"))) PPC_WEAK_FUNC(sub_83BA7AC4);
PPC_FUNC_IMPL(__imp__sub_83BA7AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7AC8"))) PPC_WEAK_FUNC(sub_83BA7AC8);
PPC_FUNC_IMPL(__imp__sub_83BA7AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31672
	ctx.r3.s64 = ctx.r11.s64 + 31672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7AD4"))) PPC_WEAK_FUNC(sub_83BA7AD4);
PPC_FUNC_IMPL(__imp__sub_83BA7AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7AD8"))) PPC_WEAK_FUNC(sub_83BA7AD8);
PPC_FUNC_IMPL(__imp__sub_83BA7AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31680
	ctx.r3.s64 = ctx.r11.s64 + 31680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7AE4"))) PPC_WEAK_FUNC(sub_83BA7AE4);
PPC_FUNC_IMPL(__imp__sub_83BA7AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7AE8"))) PPC_WEAK_FUNC(sub_83BA7AE8);
PPC_FUNC_IMPL(__imp__sub_83BA7AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31688
	ctx.r3.s64 = ctx.r11.s64 + 31688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7AF4"))) PPC_WEAK_FUNC(sub_83BA7AF4);
PPC_FUNC_IMPL(__imp__sub_83BA7AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7AF8"))) PPC_WEAK_FUNC(sub_83BA7AF8);
PPC_FUNC_IMPL(__imp__sub_83BA7AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31696
	ctx.r3.s64 = ctx.r11.s64 + 31696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7B04"))) PPC_WEAK_FUNC(sub_83BA7B04);
PPC_FUNC_IMPL(__imp__sub_83BA7B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7B08"))) PPC_WEAK_FUNC(sub_83BA7B08);
PPC_FUNC_IMPL(__imp__sub_83BA7B08) {
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
	// addi r3,r11,20440
	ctx.r3.s64 = ctx.r11.s64 + 20440;
	// bl 0x83523120
	ctx.lr = 0x83BA7B20;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31704
	ctx.r3.s64 = ctx.r10.s64 + 31704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7B2C;
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

__attribute__((alias("__imp__sub_83BA7B3C"))) PPC_WEAK_FUNC(sub_83BA7B3C);
PPC_FUNC_IMPL(__imp__sub_83BA7B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7B40"))) PPC_WEAK_FUNC(sub_83BA7B40);
PPC_FUNC_IMPL(__imp__sub_83BA7B40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20456
	ctx.r7.s64 = ctx.r8.s64 + 20456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7B68"))) PPC_WEAK_FUNC(sub_83BA7B68);
PPC_FUNC_IMPL(__imp__sub_83BA7B68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,28424
	ctx.r6.s64 = ctx.r7.s64 + 28424;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28352(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28352);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20456);
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
	// std r9,28424(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28424, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7BB0"))) PPC_WEAK_FUNC(sub_83BA7BB0);
PPC_FUNC_IMPL(__imp__sub_83BA7BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31720
	ctx.r3.s64 = ctx.r11.s64 + 31720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7BBC"))) PPC_WEAK_FUNC(sub_83BA7BBC);
PPC_FUNC_IMPL(__imp__sub_83BA7BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7BC0"))) PPC_WEAK_FUNC(sub_83BA7BC0);
PPC_FUNC_IMPL(__imp__sub_83BA7BC0) {
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
	// addi r3,r11,20464
	ctx.r3.s64 = ctx.r11.s64 + 20464;
	// bl 0x8259af80
	ctx.lr = 0x83BA7BD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31736
	ctx.r3.s64 = ctx.r10.s64 + 31736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7BE4;
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

__attribute__((alias("__imp__sub_83BA7BF4"))) PPC_WEAK_FUNC(sub_83BA7BF4);
PPC_FUNC_IMPL(__imp__sub_83BA7BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7BF8"))) PPC_WEAK_FUNC(sub_83BA7BF8);
PPC_FUNC_IMPL(__imp__sub_83BA7BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20444
	ctx.r11.s64 = ctx.r8.s64 + 20444;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,28400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28400);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31728
	ctx.r3.s64 = ctx.r6.s64 + 31728;
	// stw r10,20444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20444, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7C28"))) PPC_WEAK_FUNC(sub_83BA7C28);
PPC_FUNC_IMPL(__imp__sub_83BA7C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31744
	ctx.r3.s64 = ctx.r11.s64 + 31744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7C34"))) PPC_WEAK_FUNC(sub_83BA7C34);
PPC_FUNC_IMPL(__imp__sub_83BA7C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7C38"))) PPC_WEAK_FUNC(sub_83BA7C38);
PPC_FUNC_IMPL(__imp__sub_83BA7C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31752
	ctx.r3.s64 = ctx.r11.s64 + 31752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7C44"))) PPC_WEAK_FUNC(sub_83BA7C44);
PPC_FUNC_IMPL(__imp__sub_83BA7C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7C48"))) PPC_WEAK_FUNC(sub_83BA7C48);
PPC_FUNC_IMPL(__imp__sub_83BA7C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31760
	ctx.r3.s64 = ctx.r11.s64 + 31760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7C54"))) PPC_WEAK_FUNC(sub_83BA7C54);
PPC_FUNC_IMPL(__imp__sub_83BA7C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7C58"))) PPC_WEAK_FUNC(sub_83BA7C58);
PPC_FUNC_IMPL(__imp__sub_83BA7C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31768
	ctx.r3.s64 = ctx.r11.s64 + 31768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7C64"))) PPC_WEAK_FUNC(sub_83BA7C64);
PPC_FUNC_IMPL(__imp__sub_83BA7C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7C68"))) PPC_WEAK_FUNC(sub_83BA7C68);
PPC_FUNC_IMPL(__imp__sub_83BA7C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31776
	ctx.r3.s64 = ctx.r11.s64 + 31776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7C74"))) PPC_WEAK_FUNC(sub_83BA7C74);
PPC_FUNC_IMPL(__imp__sub_83BA7C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7C78"))) PPC_WEAK_FUNC(sub_83BA7C78);
PPC_FUNC_IMPL(__imp__sub_83BA7C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31784
	ctx.r3.s64 = ctx.r11.s64 + 31784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7C84"))) PPC_WEAK_FUNC(sub_83BA7C84);
PPC_FUNC_IMPL(__imp__sub_83BA7C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7C88"))) PPC_WEAK_FUNC(sub_83BA7C88);
PPC_FUNC_IMPL(__imp__sub_83BA7C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31792
	ctx.r3.s64 = ctx.r11.s64 + 31792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7C94"))) PPC_WEAK_FUNC(sub_83BA7C94);
PPC_FUNC_IMPL(__imp__sub_83BA7C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7C98"))) PPC_WEAK_FUNC(sub_83BA7C98);
PPC_FUNC_IMPL(__imp__sub_83BA7C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31800
	ctx.r3.s64 = ctx.r11.s64 + 31800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7CA4"))) PPC_WEAK_FUNC(sub_83BA7CA4);
PPC_FUNC_IMPL(__imp__sub_83BA7CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7CA8"))) PPC_WEAK_FUNC(sub_83BA7CA8);
PPC_FUNC_IMPL(__imp__sub_83BA7CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31808
	ctx.r3.s64 = ctx.r11.s64 + 31808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7CB4"))) PPC_WEAK_FUNC(sub_83BA7CB4);
PPC_FUNC_IMPL(__imp__sub_83BA7CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7CB8"))) PPC_WEAK_FUNC(sub_83BA7CB8);
PPC_FUNC_IMPL(__imp__sub_83BA7CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31816
	ctx.r3.s64 = ctx.r11.s64 + 31816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7CC4"))) PPC_WEAK_FUNC(sub_83BA7CC4);
PPC_FUNC_IMPL(__imp__sub_83BA7CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7CC8"))) PPC_WEAK_FUNC(sub_83BA7CC8);
PPC_FUNC_IMPL(__imp__sub_83BA7CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31824
	ctx.r3.s64 = ctx.r11.s64 + 31824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7CD4"))) PPC_WEAK_FUNC(sub_83BA7CD4);
PPC_FUNC_IMPL(__imp__sub_83BA7CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7CD8"))) PPC_WEAK_FUNC(sub_83BA7CD8);
PPC_FUNC_IMPL(__imp__sub_83BA7CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31832
	ctx.r3.s64 = ctx.r11.s64 + 31832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7CE4"))) PPC_WEAK_FUNC(sub_83BA7CE4);
PPC_FUNC_IMPL(__imp__sub_83BA7CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7CE8"))) PPC_WEAK_FUNC(sub_83BA7CE8);
PPC_FUNC_IMPL(__imp__sub_83BA7CE8) {
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
	// addi r3,r11,20808
	ctx.r3.s64 = ctx.r11.s64 + 20808;
	// bl 0x83523120
	ctx.lr = 0x83BA7D00;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31840
	ctx.r3.s64 = ctx.r10.s64 + 31840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7D0C;
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

__attribute__((alias("__imp__sub_83BA7D1C"))) PPC_WEAK_FUNC(sub_83BA7D1C);
PPC_FUNC_IMPL(__imp__sub_83BA7D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7D20"))) PPC_WEAK_FUNC(sub_83BA7D20);
PPC_FUNC_IMPL(__imp__sub_83BA7D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20824
	ctx.r7.s64 = ctx.r8.s64 + 20824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7D48"))) PPC_WEAK_FUNC(sub_83BA7D48);
PPC_FUNC_IMPL(__imp__sub_83BA7D48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,28552
	ctx.r6.s64 = ctx.r7.s64 + 28552;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28480(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28480);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20824);
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
	// std r9,28552(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28552, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7D90"))) PPC_WEAK_FUNC(sub_83BA7D90);
PPC_FUNC_IMPL(__imp__sub_83BA7D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31856
	ctx.r3.s64 = ctx.r11.s64 + 31856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7D9C"))) PPC_WEAK_FUNC(sub_83BA7D9C);
PPC_FUNC_IMPL(__imp__sub_83BA7D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7DA0"))) PPC_WEAK_FUNC(sub_83BA7DA0);
PPC_FUNC_IMPL(__imp__sub_83BA7DA0) {
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
	// addi r3,r11,20832
	ctx.r3.s64 = ctx.r11.s64 + 20832;
	// bl 0x8259af80
	ctx.lr = 0x83BA7DB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31872
	ctx.r3.s64 = ctx.r10.s64 + 31872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7DC4;
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

__attribute__((alias("__imp__sub_83BA7DD4"))) PPC_WEAK_FUNC(sub_83BA7DD4);
PPC_FUNC_IMPL(__imp__sub_83BA7DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7DD8"))) PPC_WEAK_FUNC(sub_83BA7DD8);
PPC_FUNC_IMPL(__imp__sub_83BA7DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20812
	ctx.r11.s64 = ctx.r8.s64 + 20812;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,28528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28528);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31864
	ctx.r3.s64 = ctx.r6.s64 + 31864;
	// stw r10,20812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20812, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E08"))) PPC_WEAK_FUNC(sub_83BA7E08);
PPC_FUNC_IMPL(__imp__sub_83BA7E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31880
	ctx.r3.s64 = ctx.r11.s64 + 31880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E14"))) PPC_WEAK_FUNC(sub_83BA7E14);
PPC_FUNC_IMPL(__imp__sub_83BA7E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E18"))) PPC_WEAK_FUNC(sub_83BA7E18);
PPC_FUNC_IMPL(__imp__sub_83BA7E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31888
	ctx.r3.s64 = ctx.r11.s64 + 31888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E24"))) PPC_WEAK_FUNC(sub_83BA7E24);
PPC_FUNC_IMPL(__imp__sub_83BA7E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E28"))) PPC_WEAK_FUNC(sub_83BA7E28);
PPC_FUNC_IMPL(__imp__sub_83BA7E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31896
	ctx.r3.s64 = ctx.r11.s64 + 31896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E34"))) PPC_WEAK_FUNC(sub_83BA7E34);
PPC_FUNC_IMPL(__imp__sub_83BA7E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E38"))) PPC_WEAK_FUNC(sub_83BA7E38);
PPC_FUNC_IMPL(__imp__sub_83BA7E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31904
	ctx.r3.s64 = ctx.r11.s64 + 31904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E44"))) PPC_WEAK_FUNC(sub_83BA7E44);
PPC_FUNC_IMPL(__imp__sub_83BA7E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E48"))) PPC_WEAK_FUNC(sub_83BA7E48);
PPC_FUNC_IMPL(__imp__sub_83BA7E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31912
	ctx.r3.s64 = ctx.r11.s64 + 31912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E54"))) PPC_WEAK_FUNC(sub_83BA7E54);
PPC_FUNC_IMPL(__imp__sub_83BA7E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E58"))) PPC_WEAK_FUNC(sub_83BA7E58);
PPC_FUNC_IMPL(__imp__sub_83BA7E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E64"))) PPC_WEAK_FUNC(sub_83BA7E64);
PPC_FUNC_IMPL(__imp__sub_83BA7E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E68"))) PPC_WEAK_FUNC(sub_83BA7E68);
PPC_FUNC_IMPL(__imp__sub_83BA7E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31928
	ctx.r3.s64 = ctx.r11.s64 + 31928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E74"))) PPC_WEAK_FUNC(sub_83BA7E74);
PPC_FUNC_IMPL(__imp__sub_83BA7E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E78"))) PPC_WEAK_FUNC(sub_83BA7E78);
PPC_FUNC_IMPL(__imp__sub_83BA7E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E84"))) PPC_WEAK_FUNC(sub_83BA7E84);
PPC_FUNC_IMPL(__imp__sub_83BA7E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E88"))) PPC_WEAK_FUNC(sub_83BA7E88);
PPC_FUNC_IMPL(__imp__sub_83BA7E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31944
	ctx.r3.s64 = ctx.r11.s64 + 31944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7E94"))) PPC_WEAK_FUNC(sub_83BA7E94);
PPC_FUNC_IMPL(__imp__sub_83BA7E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7E98"))) PPC_WEAK_FUNC(sub_83BA7E98);
PPC_FUNC_IMPL(__imp__sub_83BA7E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31952
	ctx.r3.s64 = ctx.r11.s64 + 31952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7EA4"))) PPC_WEAK_FUNC(sub_83BA7EA4);
PPC_FUNC_IMPL(__imp__sub_83BA7EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7EA8"))) PPC_WEAK_FUNC(sub_83BA7EA8);
PPC_FUNC_IMPL(__imp__sub_83BA7EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7EB4"))) PPC_WEAK_FUNC(sub_83BA7EB4);
PPC_FUNC_IMPL(__imp__sub_83BA7EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7EB8"))) PPC_WEAK_FUNC(sub_83BA7EB8);
PPC_FUNC_IMPL(__imp__sub_83BA7EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31968
	ctx.r3.s64 = ctx.r11.s64 + 31968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7EC4"))) PPC_WEAK_FUNC(sub_83BA7EC4);
PPC_FUNC_IMPL(__imp__sub_83BA7EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7EC8"))) PPC_WEAK_FUNC(sub_83BA7EC8);
PPC_FUNC_IMPL(__imp__sub_83BA7EC8) {
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
	// addi r3,r11,21176
	ctx.r3.s64 = ctx.r11.s64 + 21176;
	// bl 0x83523120
	ctx.lr = 0x83BA7EE0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31976
	ctx.r3.s64 = ctx.r10.s64 + 31976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7EEC;
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

__attribute__((alias("__imp__sub_83BA7EFC"))) PPC_WEAK_FUNC(sub_83BA7EFC);
PPC_FUNC_IMPL(__imp__sub_83BA7EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7F00"))) PPC_WEAK_FUNC(sub_83BA7F00);
PPC_FUNC_IMPL(__imp__sub_83BA7F00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21192
	ctx.r7.s64 = ctx.r8.s64 + 21192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7F28"))) PPC_WEAK_FUNC(sub_83BA7F28);
PPC_FUNC_IMPL(__imp__sub_83BA7F28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,28688
	ctx.r6.s64 = ctx.r7.s64 + 28688;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28616(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28616);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21192);
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
	// std r9,28688(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28688, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7F70"))) PPC_WEAK_FUNC(sub_83BA7F70);
PPC_FUNC_IMPL(__imp__sub_83BA7F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31992
	ctx.r3.s64 = ctx.r11.s64 + 31992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7F7C"))) PPC_WEAK_FUNC(sub_83BA7F7C);
PPC_FUNC_IMPL(__imp__sub_83BA7F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7F80"))) PPC_WEAK_FUNC(sub_83BA7F80);
PPC_FUNC_IMPL(__imp__sub_83BA7F80) {
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
	// addi r3,r11,21200
	ctx.r3.s64 = ctx.r11.s64 + 21200;
	// bl 0x8259af80
	ctx.lr = 0x83BA7F98;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32008
	ctx.r3.s64 = ctx.r10.s64 + 32008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7FA4;
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

__attribute__((alias("__imp__sub_83BA7FB4"))) PPC_WEAK_FUNC(sub_83BA7FB4);
PPC_FUNC_IMPL(__imp__sub_83BA7FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7FB8"))) PPC_WEAK_FUNC(sub_83BA7FB8);
PPC_FUNC_IMPL(__imp__sub_83BA7FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21180
	ctx.r11.s64 = ctx.r8.s64 + 21180;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,28664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28664);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32000
	ctx.r3.s64 = ctx.r6.s64 + 32000;
	// stw r10,21180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21180, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7FE8"))) PPC_WEAK_FUNC(sub_83BA7FE8);
PPC_FUNC_IMPL(__imp__sub_83BA7FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32016
	ctx.r3.s64 = ctx.r11.s64 + 32016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7FF4"))) PPC_WEAK_FUNC(sub_83BA7FF4);
PPC_FUNC_IMPL(__imp__sub_83BA7FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7FF8"))) PPC_WEAK_FUNC(sub_83BA7FF8);
PPC_FUNC_IMPL(__imp__sub_83BA7FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32024
	ctx.r3.s64 = ctx.r11.s64 + 32024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8004"))) PPC_WEAK_FUNC(sub_83BA8004);
PPC_FUNC_IMPL(__imp__sub_83BA8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8008"))) PPC_WEAK_FUNC(sub_83BA8008);
PPC_FUNC_IMPL(__imp__sub_83BA8008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32032
	ctx.r3.s64 = ctx.r11.s64 + 32032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8014"))) PPC_WEAK_FUNC(sub_83BA8014);
PPC_FUNC_IMPL(__imp__sub_83BA8014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8018"))) PPC_WEAK_FUNC(sub_83BA8018);
PPC_FUNC_IMPL(__imp__sub_83BA8018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8024"))) PPC_WEAK_FUNC(sub_83BA8024);
PPC_FUNC_IMPL(__imp__sub_83BA8024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8028"))) PPC_WEAK_FUNC(sub_83BA8028);
PPC_FUNC_IMPL(__imp__sub_83BA8028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32048
	ctx.r3.s64 = ctx.r11.s64 + 32048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8034"))) PPC_WEAK_FUNC(sub_83BA8034);
PPC_FUNC_IMPL(__imp__sub_83BA8034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8038"))) PPC_WEAK_FUNC(sub_83BA8038);
PPC_FUNC_IMPL(__imp__sub_83BA8038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32056
	ctx.r3.s64 = ctx.r11.s64 + 32056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8044"))) PPC_WEAK_FUNC(sub_83BA8044);
PPC_FUNC_IMPL(__imp__sub_83BA8044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8048"))) PPC_WEAK_FUNC(sub_83BA8048);
PPC_FUNC_IMPL(__imp__sub_83BA8048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8054"))) PPC_WEAK_FUNC(sub_83BA8054);
PPC_FUNC_IMPL(__imp__sub_83BA8054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8058"))) PPC_WEAK_FUNC(sub_83BA8058);
PPC_FUNC_IMPL(__imp__sub_83BA8058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32072
	ctx.r3.s64 = ctx.r11.s64 + 32072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8064"))) PPC_WEAK_FUNC(sub_83BA8064);
PPC_FUNC_IMPL(__imp__sub_83BA8064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8068"))) PPC_WEAK_FUNC(sub_83BA8068);
PPC_FUNC_IMPL(__imp__sub_83BA8068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32080
	ctx.r3.s64 = ctx.r11.s64 + 32080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8074"))) PPC_WEAK_FUNC(sub_83BA8074);
PPC_FUNC_IMPL(__imp__sub_83BA8074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8078"))) PPC_WEAK_FUNC(sub_83BA8078);
PPC_FUNC_IMPL(__imp__sub_83BA8078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32088
	ctx.r3.s64 = ctx.r11.s64 + 32088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8084"))) PPC_WEAK_FUNC(sub_83BA8084);
PPC_FUNC_IMPL(__imp__sub_83BA8084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8088"))) PPC_WEAK_FUNC(sub_83BA8088);
PPC_FUNC_IMPL(__imp__sub_83BA8088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32096
	ctx.r3.s64 = ctx.r11.s64 + 32096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8094"))) PPC_WEAK_FUNC(sub_83BA8094);
PPC_FUNC_IMPL(__imp__sub_83BA8094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8098"))) PPC_WEAK_FUNC(sub_83BA8098);
PPC_FUNC_IMPL(__imp__sub_83BA8098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32104
	ctx.r3.s64 = ctx.r11.s64 + 32104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA80A4"))) PPC_WEAK_FUNC(sub_83BA80A4);
PPC_FUNC_IMPL(__imp__sub_83BA80A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA80A8"))) PPC_WEAK_FUNC(sub_83BA80A8);
PPC_FUNC_IMPL(__imp__sub_83BA80A8) {
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
	// addi r3,r11,21544
	ctx.r3.s64 = ctx.r11.s64 + 21544;
	// bl 0x83523120
	ctx.lr = 0x83BA80C0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32112
	ctx.r3.s64 = ctx.r10.s64 + 32112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA80CC;
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

__attribute__((alias("__imp__sub_83BA80DC"))) PPC_WEAK_FUNC(sub_83BA80DC);
PPC_FUNC_IMPL(__imp__sub_83BA80DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA80E0"))) PPC_WEAK_FUNC(sub_83BA80E0);
PPC_FUNC_IMPL(__imp__sub_83BA80E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21560
	ctx.r7.s64 = ctx.r8.s64 + 21560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA8108"))) PPC_WEAK_FUNC(sub_83BA8108);
PPC_FUNC_IMPL(__imp__sub_83BA8108) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,28824
	ctx.r6.s64 = ctx.r7.s64 + 28824;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28752(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28752);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21560(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21560);
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
	// std r9,28824(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28824, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA8150"))) PPC_WEAK_FUNC(sub_83BA8150);
PPC_FUNC_IMPL(__imp__sub_83BA8150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA815C"))) PPC_WEAK_FUNC(sub_83BA815C);
PPC_FUNC_IMPL(__imp__sub_83BA815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8160"))) PPC_WEAK_FUNC(sub_83BA8160);
PPC_FUNC_IMPL(__imp__sub_83BA8160) {
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
	// addi r3,r11,21568
	ctx.r3.s64 = ctx.r11.s64 + 21568;
	// bl 0x8259af80
	ctx.lr = 0x83BA8178;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32144
	ctx.r3.s64 = ctx.r10.s64 + 32144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA8184;
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

__attribute__((alias("__imp__sub_83BA8194"))) PPC_WEAK_FUNC(sub_83BA8194);
PPC_FUNC_IMPL(__imp__sub_83BA8194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8198"))) PPC_WEAK_FUNC(sub_83BA8198);
PPC_FUNC_IMPL(__imp__sub_83BA8198) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21548
	ctx.r11.s64 = ctx.r8.s64 + 21548;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,28800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28800);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32136
	ctx.r3.s64 = ctx.r6.s64 + 32136;
	// stw r10,21548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21548, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA81C8"))) PPC_WEAK_FUNC(sub_83BA81C8);
PPC_FUNC_IMPL(__imp__sub_83BA81C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32152
	ctx.r3.s64 = ctx.r11.s64 + 32152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA81D4"))) PPC_WEAK_FUNC(sub_83BA81D4);
PPC_FUNC_IMPL(__imp__sub_83BA81D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA81D8"))) PPC_WEAK_FUNC(sub_83BA81D8);
PPC_FUNC_IMPL(__imp__sub_83BA81D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32160
	ctx.r3.s64 = ctx.r11.s64 + 32160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA81E4"))) PPC_WEAK_FUNC(sub_83BA81E4);
PPC_FUNC_IMPL(__imp__sub_83BA81E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA81E8"))) PPC_WEAK_FUNC(sub_83BA81E8);
PPC_FUNC_IMPL(__imp__sub_83BA81E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32168
	ctx.r3.s64 = ctx.r11.s64 + 32168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA81F4"))) PPC_WEAK_FUNC(sub_83BA81F4);
PPC_FUNC_IMPL(__imp__sub_83BA81F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA81F8"))) PPC_WEAK_FUNC(sub_83BA81F8);
PPC_FUNC_IMPL(__imp__sub_83BA81F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8204"))) PPC_WEAK_FUNC(sub_83BA8204);
PPC_FUNC_IMPL(__imp__sub_83BA8204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8208"))) PPC_WEAK_FUNC(sub_83BA8208);
PPC_FUNC_IMPL(__imp__sub_83BA8208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32184
	ctx.r3.s64 = ctx.r11.s64 + 32184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8214"))) PPC_WEAK_FUNC(sub_83BA8214);
PPC_FUNC_IMPL(__imp__sub_83BA8214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8218"))) PPC_WEAK_FUNC(sub_83BA8218);
PPC_FUNC_IMPL(__imp__sub_83BA8218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8224"))) PPC_WEAK_FUNC(sub_83BA8224);
PPC_FUNC_IMPL(__imp__sub_83BA8224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8228"))) PPC_WEAK_FUNC(sub_83BA8228);
PPC_FUNC_IMPL(__imp__sub_83BA8228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32200
	ctx.r3.s64 = ctx.r11.s64 + 32200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8234"))) PPC_WEAK_FUNC(sub_83BA8234);
PPC_FUNC_IMPL(__imp__sub_83BA8234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8238"))) PPC_WEAK_FUNC(sub_83BA8238);
PPC_FUNC_IMPL(__imp__sub_83BA8238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8244"))) PPC_WEAK_FUNC(sub_83BA8244);
PPC_FUNC_IMPL(__imp__sub_83BA8244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8248"))) PPC_WEAK_FUNC(sub_83BA8248);
PPC_FUNC_IMPL(__imp__sub_83BA8248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8254"))) PPC_WEAK_FUNC(sub_83BA8254);
PPC_FUNC_IMPL(__imp__sub_83BA8254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8258"))) PPC_WEAK_FUNC(sub_83BA8258);
PPC_FUNC_IMPL(__imp__sub_83BA8258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32224
	ctx.r3.s64 = ctx.r11.s64 + 32224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8264"))) PPC_WEAK_FUNC(sub_83BA8264);
PPC_FUNC_IMPL(__imp__sub_83BA8264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8268"))) PPC_WEAK_FUNC(sub_83BA8268);
PPC_FUNC_IMPL(__imp__sub_83BA8268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32232
	ctx.r3.s64 = ctx.r11.s64 + 32232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8274"))) PPC_WEAK_FUNC(sub_83BA8274);
PPC_FUNC_IMPL(__imp__sub_83BA8274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8278"))) PPC_WEAK_FUNC(sub_83BA8278);
PPC_FUNC_IMPL(__imp__sub_83BA8278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8284"))) PPC_WEAK_FUNC(sub_83BA8284);
PPC_FUNC_IMPL(__imp__sub_83BA8284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8288"))) PPC_WEAK_FUNC(sub_83BA8288);
PPC_FUNC_IMPL(__imp__sub_83BA8288) {
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
	// addi r3,r11,21912
	ctx.r3.s64 = ctx.r11.s64 + 21912;
	// bl 0x83523120
	ctx.lr = 0x83BA82A0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32248
	ctx.r3.s64 = ctx.r10.s64 + 32248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA82AC;
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

__attribute__((alias("__imp__sub_83BA82BC"))) PPC_WEAK_FUNC(sub_83BA82BC);
PPC_FUNC_IMPL(__imp__sub_83BA82BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA82C0"))) PPC_WEAK_FUNC(sub_83BA82C0);
PPC_FUNC_IMPL(__imp__sub_83BA82C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21928
	ctx.r7.s64 = ctx.r8.s64 + 21928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA82E8"))) PPC_WEAK_FUNC(sub_83BA82E8);
PPC_FUNC_IMPL(__imp__sub_83BA82E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,28952
	ctx.r6.s64 = ctx.r7.s64 + 28952;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28880(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28880);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21928);
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
	// std r9,28952(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28952, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA8330"))) PPC_WEAK_FUNC(sub_83BA8330);
PPC_FUNC_IMPL(__imp__sub_83BA8330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32264
	ctx.r3.s64 = ctx.r11.s64 + 32264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA833C"))) PPC_WEAK_FUNC(sub_83BA833C);
PPC_FUNC_IMPL(__imp__sub_83BA833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8340"))) PPC_WEAK_FUNC(sub_83BA8340);
PPC_FUNC_IMPL(__imp__sub_83BA8340) {
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
	// addi r3,r11,21936
	ctx.r3.s64 = ctx.r11.s64 + 21936;
	// bl 0x8259af80
	ctx.lr = 0x83BA8358;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32280
	ctx.r3.s64 = ctx.r10.s64 + 32280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA8364;
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

__attribute__((alias("__imp__sub_83BA8374"))) PPC_WEAK_FUNC(sub_83BA8374);
PPC_FUNC_IMPL(__imp__sub_83BA8374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8378"))) PPC_WEAK_FUNC(sub_83BA8378);
PPC_FUNC_IMPL(__imp__sub_83BA8378) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21916
	ctx.r11.s64 = ctx.r8.s64 + 21916;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,28928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28928);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32272
	ctx.r3.s64 = ctx.r6.s64 + 32272;
	// stw r10,21916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA83A8"))) PPC_WEAK_FUNC(sub_83BA83A8);
PPC_FUNC_IMPL(__imp__sub_83BA83A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32288
	ctx.r3.s64 = ctx.r11.s64 + 32288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA83B4"))) PPC_WEAK_FUNC(sub_83BA83B4);
PPC_FUNC_IMPL(__imp__sub_83BA83B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA83B8"))) PPC_WEAK_FUNC(sub_83BA83B8);
PPC_FUNC_IMPL(__imp__sub_83BA83B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA83C4"))) PPC_WEAK_FUNC(sub_83BA83C4);
PPC_FUNC_IMPL(__imp__sub_83BA83C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA83C8"))) PPC_WEAK_FUNC(sub_83BA83C8);
PPC_FUNC_IMPL(__imp__sub_83BA83C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32304
	ctx.r3.s64 = ctx.r11.s64 + 32304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA83D4"))) PPC_WEAK_FUNC(sub_83BA83D4);
PPC_FUNC_IMPL(__imp__sub_83BA83D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA83D8"))) PPC_WEAK_FUNC(sub_83BA83D8);
PPC_FUNC_IMPL(__imp__sub_83BA83D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32312
	ctx.r3.s64 = ctx.r11.s64 + 32312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA83E4"))) PPC_WEAK_FUNC(sub_83BA83E4);
PPC_FUNC_IMPL(__imp__sub_83BA83E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA83E8"))) PPC_WEAK_FUNC(sub_83BA83E8);
PPC_FUNC_IMPL(__imp__sub_83BA83E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32320
	ctx.r3.s64 = ctx.r11.s64 + 32320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA83F4"))) PPC_WEAK_FUNC(sub_83BA83F4);
PPC_FUNC_IMPL(__imp__sub_83BA83F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA83F8"))) PPC_WEAK_FUNC(sub_83BA83F8);
PPC_FUNC_IMPL(__imp__sub_83BA83F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32328
	ctx.r3.s64 = ctx.r11.s64 + 32328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8404"))) PPC_WEAK_FUNC(sub_83BA8404);
PPC_FUNC_IMPL(__imp__sub_83BA8404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8408"))) PPC_WEAK_FUNC(sub_83BA8408);
PPC_FUNC_IMPL(__imp__sub_83BA8408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8414"))) PPC_WEAK_FUNC(sub_83BA8414);
PPC_FUNC_IMPL(__imp__sub_83BA8414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8418"))) PPC_WEAK_FUNC(sub_83BA8418);
PPC_FUNC_IMPL(__imp__sub_83BA8418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32344
	ctx.r3.s64 = ctx.r11.s64 + 32344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8424"))) PPC_WEAK_FUNC(sub_83BA8424);
PPC_FUNC_IMPL(__imp__sub_83BA8424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8428"))) PPC_WEAK_FUNC(sub_83BA8428);
PPC_FUNC_IMPL(__imp__sub_83BA8428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32352
	ctx.r3.s64 = ctx.r11.s64 + 32352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8434"))) PPC_WEAK_FUNC(sub_83BA8434);
PPC_FUNC_IMPL(__imp__sub_83BA8434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8438"))) PPC_WEAK_FUNC(sub_83BA8438);
PPC_FUNC_IMPL(__imp__sub_83BA8438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32360
	ctx.r3.s64 = ctx.r11.s64 + 32360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8444"))) PPC_WEAK_FUNC(sub_83BA8444);
PPC_FUNC_IMPL(__imp__sub_83BA8444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8448"))) PPC_WEAK_FUNC(sub_83BA8448);
PPC_FUNC_IMPL(__imp__sub_83BA8448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32368
	ctx.r3.s64 = ctx.r11.s64 + 32368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8454"))) PPC_WEAK_FUNC(sub_83BA8454);
PPC_FUNC_IMPL(__imp__sub_83BA8454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8458"))) PPC_WEAK_FUNC(sub_83BA8458);
PPC_FUNC_IMPL(__imp__sub_83BA8458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32376
	ctx.r3.s64 = ctx.r11.s64 + 32376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8464"))) PPC_WEAK_FUNC(sub_83BA8464);
PPC_FUNC_IMPL(__imp__sub_83BA8464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8468"))) PPC_WEAK_FUNC(sub_83BA8468);
PPC_FUNC_IMPL(__imp__sub_83BA8468) {
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
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// bl 0x83523120
	ctx.lr = 0x83BA8480;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32384
	ctx.r3.s64 = ctx.r10.s64 + 32384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA848C;
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

__attribute__((alias("__imp__sub_83BA849C"))) PPC_WEAK_FUNC(sub_83BA849C);
PPC_FUNC_IMPL(__imp__sub_83BA849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA84A0"))) PPC_WEAK_FUNC(sub_83BA84A0);
PPC_FUNC_IMPL(__imp__sub_83BA84A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22296
	ctx.r7.s64 = ctx.r8.s64 + 22296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA84C8"))) PPC_WEAK_FUNC(sub_83BA84C8);
PPC_FUNC_IMPL(__imp__sub_83BA84C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,29080
	ctx.r6.s64 = ctx.r7.s64 + 29080;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29008(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29008);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22296);
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
	// std r9,29080(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA8510"))) PPC_WEAK_FUNC(sub_83BA8510);
PPC_FUNC_IMPL(__imp__sub_83BA8510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA851C"))) PPC_WEAK_FUNC(sub_83BA851C);
PPC_FUNC_IMPL(__imp__sub_83BA851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8520"))) PPC_WEAK_FUNC(sub_83BA8520);
PPC_FUNC_IMPL(__imp__sub_83BA8520) {
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
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// bl 0x8259af80
	ctx.lr = 0x83BA8538;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32416
	ctx.r3.s64 = ctx.r10.s64 + 32416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA8544;
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

__attribute__((alias("__imp__sub_83BA8554"))) PPC_WEAK_FUNC(sub_83BA8554);
PPC_FUNC_IMPL(__imp__sub_83BA8554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8558"))) PPC_WEAK_FUNC(sub_83BA8558);
PPC_FUNC_IMPL(__imp__sub_83BA8558) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22284
	ctx.r11.s64 = ctx.r8.s64 + 22284;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,29056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29056);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32408
	ctx.r3.s64 = ctx.r6.s64 + 32408;
	// stw r10,22284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8588"))) PPC_WEAK_FUNC(sub_83BA8588);
PPC_FUNC_IMPL(__imp__sub_83BA8588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32424
	ctx.r3.s64 = ctx.r11.s64 + 32424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8594"))) PPC_WEAK_FUNC(sub_83BA8594);
PPC_FUNC_IMPL(__imp__sub_83BA8594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8598"))) PPC_WEAK_FUNC(sub_83BA8598);
PPC_FUNC_IMPL(__imp__sub_83BA8598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32432
	ctx.r3.s64 = ctx.r11.s64 + 32432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA85A4"))) PPC_WEAK_FUNC(sub_83BA85A4);
PPC_FUNC_IMPL(__imp__sub_83BA85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA85A8"))) PPC_WEAK_FUNC(sub_83BA85A8);
PPC_FUNC_IMPL(__imp__sub_83BA85A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32440
	ctx.r3.s64 = ctx.r11.s64 + 32440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA85B4"))) PPC_WEAK_FUNC(sub_83BA85B4);
PPC_FUNC_IMPL(__imp__sub_83BA85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA85B8"))) PPC_WEAK_FUNC(sub_83BA85B8);
PPC_FUNC_IMPL(__imp__sub_83BA85B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32448
	ctx.r3.s64 = ctx.r11.s64 + 32448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA85C4"))) PPC_WEAK_FUNC(sub_83BA85C4);
PPC_FUNC_IMPL(__imp__sub_83BA85C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA85C8"))) PPC_WEAK_FUNC(sub_83BA85C8);
PPC_FUNC_IMPL(__imp__sub_83BA85C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32456
	ctx.r3.s64 = ctx.r11.s64 + 32456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA85D4"))) PPC_WEAK_FUNC(sub_83BA85D4);
PPC_FUNC_IMPL(__imp__sub_83BA85D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA85D8"))) PPC_WEAK_FUNC(sub_83BA85D8);
PPC_FUNC_IMPL(__imp__sub_83BA85D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32464
	ctx.r3.s64 = ctx.r11.s64 + 32464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA85E4"))) PPC_WEAK_FUNC(sub_83BA85E4);
PPC_FUNC_IMPL(__imp__sub_83BA85E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA85E8"))) PPC_WEAK_FUNC(sub_83BA85E8);
PPC_FUNC_IMPL(__imp__sub_83BA85E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32472
	ctx.r3.s64 = ctx.r11.s64 + 32472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA85F4"))) PPC_WEAK_FUNC(sub_83BA85F4);
PPC_FUNC_IMPL(__imp__sub_83BA85F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA85F8"))) PPC_WEAK_FUNC(sub_83BA85F8);
PPC_FUNC_IMPL(__imp__sub_83BA85F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32480
	ctx.r3.s64 = ctx.r11.s64 + 32480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8604"))) PPC_WEAK_FUNC(sub_83BA8604);
PPC_FUNC_IMPL(__imp__sub_83BA8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8608"))) PPC_WEAK_FUNC(sub_83BA8608);
PPC_FUNC_IMPL(__imp__sub_83BA8608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32488
	ctx.r3.s64 = ctx.r11.s64 + 32488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8614"))) PPC_WEAK_FUNC(sub_83BA8614);
PPC_FUNC_IMPL(__imp__sub_83BA8614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8618"))) PPC_WEAK_FUNC(sub_83BA8618);
PPC_FUNC_IMPL(__imp__sub_83BA8618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32496
	ctx.r3.s64 = ctx.r11.s64 + 32496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8624"))) PPC_WEAK_FUNC(sub_83BA8624);
PPC_FUNC_IMPL(__imp__sub_83BA8624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8628"))) PPC_WEAK_FUNC(sub_83BA8628);
PPC_FUNC_IMPL(__imp__sub_83BA8628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32504
	ctx.r3.s64 = ctx.r11.s64 + 32504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8634"))) PPC_WEAK_FUNC(sub_83BA8634);
PPC_FUNC_IMPL(__imp__sub_83BA8634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8638"))) PPC_WEAK_FUNC(sub_83BA8638);
PPC_FUNC_IMPL(__imp__sub_83BA8638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32512
	ctx.r3.s64 = ctx.r11.s64 + 32512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8644"))) PPC_WEAK_FUNC(sub_83BA8644);
PPC_FUNC_IMPL(__imp__sub_83BA8644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8648"))) PPC_WEAK_FUNC(sub_83BA8648);
PPC_FUNC_IMPL(__imp__sub_83BA8648) {
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
	// addi r3,r11,22648
	ctx.r3.s64 = ctx.r11.s64 + 22648;
	// bl 0x83523120
	ctx.lr = 0x83BA8660;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32520
	ctx.r3.s64 = ctx.r10.s64 + 32520;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA866C;
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

__attribute__((alias("__imp__sub_83BA867C"))) PPC_WEAK_FUNC(sub_83BA867C);
PPC_FUNC_IMPL(__imp__sub_83BA867C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8680"))) PPC_WEAK_FUNC(sub_83BA8680);
PPC_FUNC_IMPL(__imp__sub_83BA8680) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22664
	ctx.r7.s64 = ctx.r8.s64 + 22664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA86A8"))) PPC_WEAK_FUNC(sub_83BA86A8);
PPC_FUNC_IMPL(__imp__sub_83BA86A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,29216
	ctx.r6.s64 = ctx.r7.s64 + 29216;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29144(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29144);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22664);
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
	// std r9,29216(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29216, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA86F0"))) PPC_WEAK_FUNC(sub_83BA86F0);
PPC_FUNC_IMPL(__imp__sub_83BA86F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32536
	ctx.r3.s64 = ctx.r11.s64 + 32536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA86FC"))) PPC_WEAK_FUNC(sub_83BA86FC);
PPC_FUNC_IMPL(__imp__sub_83BA86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8700"))) PPC_WEAK_FUNC(sub_83BA8700);
PPC_FUNC_IMPL(__imp__sub_83BA8700) {
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
	// addi r3,r11,22672
	ctx.r3.s64 = ctx.r11.s64 + 22672;
	// bl 0x8259af80
	ctx.lr = 0x83BA8718;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,32552
	ctx.r3.s64 = ctx.r10.s64 + 32552;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA8724;
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

__attribute__((alias("__imp__sub_83BA8734"))) PPC_WEAK_FUNC(sub_83BA8734);
PPC_FUNC_IMPL(__imp__sub_83BA8734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8738"))) PPC_WEAK_FUNC(sub_83BA8738);
PPC_FUNC_IMPL(__imp__sub_83BA8738) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22652
	ctx.r11.s64 = ctx.r8.s64 + 22652;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,29192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29192);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32544
	ctx.r3.s64 = ctx.r6.s64 + 32544;
	// stw r10,22652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8768"))) PPC_WEAK_FUNC(sub_83BA8768);
PPC_FUNC_IMPL(__imp__sub_83BA8768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8774"))) PPC_WEAK_FUNC(sub_83BA8774);
PPC_FUNC_IMPL(__imp__sub_83BA8774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8778"))) PPC_WEAK_FUNC(sub_83BA8778);
PPC_FUNC_IMPL(__imp__sub_83BA8778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8784"))) PPC_WEAK_FUNC(sub_83BA8784);
PPC_FUNC_IMPL(__imp__sub_83BA8784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA8788"))) PPC_WEAK_FUNC(sub_83BA8788);
PPC_FUNC_IMPL(__imp__sub_83BA8788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA8794"))) PPC_WEAK_FUNC(sub_83BA8794);
PPC_FUNC_IMPL(__imp__sub_83BA8794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

