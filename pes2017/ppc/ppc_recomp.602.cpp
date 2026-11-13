#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BA5BE0"))) PPC_WEAK_FUNC(sub_83BA5BE0);
PPC_FUNC_IMPL(__imp__sub_83BA5BE0) {
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
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// bl 0x8259af80
	ctx.lr = 0x83BA5BF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29424
	ctx.r3.s64 = ctx.r10.s64 + 29424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA5C04;
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

__attribute__((alias("__imp__sub_83BA5C14"))) PPC_WEAK_FUNC(sub_83BA5C14);
PPC_FUNC_IMPL(__imp__sub_83BA5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5C18"))) PPC_WEAK_FUNC(sub_83BA5C18);
PPC_FUNC_IMPL(__imp__sub_83BA5C18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14188
	ctx.r11.s64 = ctx.r8.s64 + 14188;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,25984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25984);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29416
	ctx.r3.s64 = ctx.r6.s64 + 29416;
	// stw r10,14188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14188, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5C48"))) PPC_WEAK_FUNC(sub_83BA5C48);
PPC_FUNC_IMPL(__imp__sub_83BA5C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29432
	ctx.r3.s64 = ctx.r11.s64 + 29432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5C54"))) PPC_WEAK_FUNC(sub_83BA5C54);
PPC_FUNC_IMPL(__imp__sub_83BA5C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5C58"))) PPC_WEAK_FUNC(sub_83BA5C58);
PPC_FUNC_IMPL(__imp__sub_83BA5C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29440
	ctx.r3.s64 = ctx.r11.s64 + 29440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5C64"))) PPC_WEAK_FUNC(sub_83BA5C64);
PPC_FUNC_IMPL(__imp__sub_83BA5C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5C68"))) PPC_WEAK_FUNC(sub_83BA5C68);
PPC_FUNC_IMPL(__imp__sub_83BA5C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29448
	ctx.r3.s64 = ctx.r11.s64 + 29448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5C74"))) PPC_WEAK_FUNC(sub_83BA5C74);
PPC_FUNC_IMPL(__imp__sub_83BA5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5C78"))) PPC_WEAK_FUNC(sub_83BA5C78);
PPC_FUNC_IMPL(__imp__sub_83BA5C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29456
	ctx.r3.s64 = ctx.r11.s64 + 29456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5C84"))) PPC_WEAK_FUNC(sub_83BA5C84);
PPC_FUNC_IMPL(__imp__sub_83BA5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5C88"))) PPC_WEAK_FUNC(sub_83BA5C88);
PPC_FUNC_IMPL(__imp__sub_83BA5C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29464
	ctx.r3.s64 = ctx.r11.s64 + 29464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5C94"))) PPC_WEAK_FUNC(sub_83BA5C94);
PPC_FUNC_IMPL(__imp__sub_83BA5C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5C98"))) PPC_WEAK_FUNC(sub_83BA5C98);
PPC_FUNC_IMPL(__imp__sub_83BA5C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29472
	ctx.r3.s64 = ctx.r11.s64 + 29472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5CA4"))) PPC_WEAK_FUNC(sub_83BA5CA4);
PPC_FUNC_IMPL(__imp__sub_83BA5CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5CA8"))) PPC_WEAK_FUNC(sub_83BA5CA8);
PPC_FUNC_IMPL(__imp__sub_83BA5CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29480
	ctx.r3.s64 = ctx.r11.s64 + 29480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5CB4"))) PPC_WEAK_FUNC(sub_83BA5CB4);
PPC_FUNC_IMPL(__imp__sub_83BA5CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5CB8"))) PPC_WEAK_FUNC(sub_83BA5CB8);
PPC_FUNC_IMPL(__imp__sub_83BA5CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29488
	ctx.r3.s64 = ctx.r11.s64 + 29488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5CC4"))) PPC_WEAK_FUNC(sub_83BA5CC4);
PPC_FUNC_IMPL(__imp__sub_83BA5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5CC8"))) PPC_WEAK_FUNC(sub_83BA5CC8);
PPC_FUNC_IMPL(__imp__sub_83BA5CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29496
	ctx.r3.s64 = ctx.r11.s64 + 29496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5CD4"))) PPC_WEAK_FUNC(sub_83BA5CD4);
PPC_FUNC_IMPL(__imp__sub_83BA5CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5CD8"))) PPC_WEAK_FUNC(sub_83BA5CD8);
PPC_FUNC_IMPL(__imp__sub_83BA5CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29504
	ctx.r3.s64 = ctx.r11.s64 + 29504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5CE4"))) PPC_WEAK_FUNC(sub_83BA5CE4);
PPC_FUNC_IMPL(__imp__sub_83BA5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5CE8"))) PPC_WEAK_FUNC(sub_83BA5CE8);
PPC_FUNC_IMPL(__imp__sub_83BA5CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29512
	ctx.r3.s64 = ctx.r11.s64 + 29512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5CF4"))) PPC_WEAK_FUNC(sub_83BA5CF4);
PPC_FUNC_IMPL(__imp__sub_83BA5CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5CF8"))) PPC_WEAK_FUNC(sub_83BA5CF8);
PPC_FUNC_IMPL(__imp__sub_83BA5CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29520
	ctx.r3.s64 = ctx.r11.s64 + 29520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5D04"))) PPC_WEAK_FUNC(sub_83BA5D04);
PPC_FUNC_IMPL(__imp__sub_83BA5D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5D08"))) PPC_WEAK_FUNC(sub_83BA5D08);
PPC_FUNC_IMPL(__imp__sub_83BA5D08) {
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
	// addi r3,r11,14552
	ctx.r3.s64 = ctx.r11.s64 + 14552;
	// bl 0x83523120
	ctx.lr = 0x83BA5D20;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29528
	ctx.r3.s64 = ctx.r10.s64 + 29528;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA5D2C;
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

__attribute__((alias("__imp__sub_83BA5D3C"))) PPC_WEAK_FUNC(sub_83BA5D3C);
PPC_FUNC_IMPL(__imp__sub_83BA5D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5D40"))) PPC_WEAK_FUNC(sub_83BA5D40);
PPC_FUNC_IMPL(__imp__sub_83BA5D40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14568
	ctx.r7.s64 = ctx.r8.s64 + 14568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA5D68"))) PPC_WEAK_FUNC(sub_83BA5D68);
PPC_FUNC_IMPL(__imp__sub_83BA5D68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,26144
	ctx.r6.s64 = ctx.r7.s64 + 26144;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26072(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26072);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14568);
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
	// std r9,26144(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26144, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA5DB0"))) PPC_WEAK_FUNC(sub_83BA5DB0);
PPC_FUNC_IMPL(__imp__sub_83BA5DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29544
	ctx.r3.s64 = ctx.r11.s64 + 29544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5DBC"))) PPC_WEAK_FUNC(sub_83BA5DBC);
PPC_FUNC_IMPL(__imp__sub_83BA5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5DC0"))) PPC_WEAK_FUNC(sub_83BA5DC0);
PPC_FUNC_IMPL(__imp__sub_83BA5DC0) {
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
	// addi r3,r11,14576
	ctx.r3.s64 = ctx.r11.s64 + 14576;
	// bl 0x8259af80
	ctx.lr = 0x83BA5DD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29560
	ctx.r3.s64 = ctx.r10.s64 + 29560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA5DE4;
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

__attribute__((alias("__imp__sub_83BA5DF4"))) PPC_WEAK_FUNC(sub_83BA5DF4);
PPC_FUNC_IMPL(__imp__sub_83BA5DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5DF8"))) PPC_WEAK_FUNC(sub_83BA5DF8);
PPC_FUNC_IMPL(__imp__sub_83BA5DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14556
	ctx.r11.s64 = ctx.r8.s64 + 14556;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,26120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26120);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29552
	ctx.r3.s64 = ctx.r6.s64 + 29552;
	// stw r10,14556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5E28"))) PPC_WEAK_FUNC(sub_83BA5E28);
PPC_FUNC_IMPL(__imp__sub_83BA5E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29568
	ctx.r3.s64 = ctx.r11.s64 + 29568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5E34"))) PPC_WEAK_FUNC(sub_83BA5E34);
PPC_FUNC_IMPL(__imp__sub_83BA5E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5E38"))) PPC_WEAK_FUNC(sub_83BA5E38);
PPC_FUNC_IMPL(__imp__sub_83BA5E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29576
	ctx.r3.s64 = ctx.r11.s64 + 29576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5E44"))) PPC_WEAK_FUNC(sub_83BA5E44);
PPC_FUNC_IMPL(__imp__sub_83BA5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5E48"))) PPC_WEAK_FUNC(sub_83BA5E48);
PPC_FUNC_IMPL(__imp__sub_83BA5E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29584
	ctx.r3.s64 = ctx.r11.s64 + 29584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5E54"))) PPC_WEAK_FUNC(sub_83BA5E54);
PPC_FUNC_IMPL(__imp__sub_83BA5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5E58"))) PPC_WEAK_FUNC(sub_83BA5E58);
PPC_FUNC_IMPL(__imp__sub_83BA5E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29592
	ctx.r3.s64 = ctx.r11.s64 + 29592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5E64"))) PPC_WEAK_FUNC(sub_83BA5E64);
PPC_FUNC_IMPL(__imp__sub_83BA5E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5E68"))) PPC_WEAK_FUNC(sub_83BA5E68);
PPC_FUNC_IMPL(__imp__sub_83BA5E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29600
	ctx.r3.s64 = ctx.r11.s64 + 29600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5E74"))) PPC_WEAK_FUNC(sub_83BA5E74);
PPC_FUNC_IMPL(__imp__sub_83BA5E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5E78"))) PPC_WEAK_FUNC(sub_83BA5E78);
PPC_FUNC_IMPL(__imp__sub_83BA5E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29608
	ctx.r3.s64 = ctx.r11.s64 + 29608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5E84"))) PPC_WEAK_FUNC(sub_83BA5E84);
PPC_FUNC_IMPL(__imp__sub_83BA5E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5E88"))) PPC_WEAK_FUNC(sub_83BA5E88);
PPC_FUNC_IMPL(__imp__sub_83BA5E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29616
	ctx.r3.s64 = ctx.r11.s64 + 29616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5E94"))) PPC_WEAK_FUNC(sub_83BA5E94);
PPC_FUNC_IMPL(__imp__sub_83BA5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5E98"))) PPC_WEAK_FUNC(sub_83BA5E98);
PPC_FUNC_IMPL(__imp__sub_83BA5E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29624
	ctx.r3.s64 = ctx.r11.s64 + 29624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5EA4"))) PPC_WEAK_FUNC(sub_83BA5EA4);
PPC_FUNC_IMPL(__imp__sub_83BA5EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5EA8"))) PPC_WEAK_FUNC(sub_83BA5EA8);
PPC_FUNC_IMPL(__imp__sub_83BA5EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29632
	ctx.r3.s64 = ctx.r11.s64 + 29632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5EB4"))) PPC_WEAK_FUNC(sub_83BA5EB4);
PPC_FUNC_IMPL(__imp__sub_83BA5EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5EB8"))) PPC_WEAK_FUNC(sub_83BA5EB8);
PPC_FUNC_IMPL(__imp__sub_83BA5EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29640
	ctx.r3.s64 = ctx.r11.s64 + 29640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5EC4"))) PPC_WEAK_FUNC(sub_83BA5EC4);
PPC_FUNC_IMPL(__imp__sub_83BA5EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5EC8"))) PPC_WEAK_FUNC(sub_83BA5EC8);
PPC_FUNC_IMPL(__imp__sub_83BA5EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29648
	ctx.r3.s64 = ctx.r11.s64 + 29648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5ED4"))) PPC_WEAK_FUNC(sub_83BA5ED4);
PPC_FUNC_IMPL(__imp__sub_83BA5ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5ED8"))) PPC_WEAK_FUNC(sub_83BA5ED8);
PPC_FUNC_IMPL(__imp__sub_83BA5ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29656
	ctx.r3.s64 = ctx.r11.s64 + 29656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5EE4"))) PPC_WEAK_FUNC(sub_83BA5EE4);
PPC_FUNC_IMPL(__imp__sub_83BA5EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5EE8"))) PPC_WEAK_FUNC(sub_83BA5EE8);
PPC_FUNC_IMPL(__imp__sub_83BA5EE8) {
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
	// addi r3,r11,14920
	ctx.r3.s64 = ctx.r11.s64 + 14920;
	// bl 0x83523120
	ctx.lr = 0x83BA5F00;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29664
	ctx.r3.s64 = ctx.r10.s64 + 29664;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA5F0C;
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

__attribute__((alias("__imp__sub_83BA5F1C"))) PPC_WEAK_FUNC(sub_83BA5F1C);
PPC_FUNC_IMPL(__imp__sub_83BA5F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5F20"))) PPC_WEAK_FUNC(sub_83BA5F20);
PPC_FUNC_IMPL(__imp__sub_83BA5F20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14936
	ctx.r7.s64 = ctx.r8.s64 + 14936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA5F48"))) PPC_WEAK_FUNC(sub_83BA5F48);
PPC_FUNC_IMPL(__imp__sub_83BA5F48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,26280
	ctx.r6.s64 = ctx.r7.s64 + 26280;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26208(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26208);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14936);
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
	// std r9,26280(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26280, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA5F90"))) PPC_WEAK_FUNC(sub_83BA5F90);
PPC_FUNC_IMPL(__imp__sub_83BA5F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29680
	ctx.r3.s64 = ctx.r11.s64 + 29680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA5F9C"))) PPC_WEAK_FUNC(sub_83BA5F9C);
PPC_FUNC_IMPL(__imp__sub_83BA5F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5FA0"))) PPC_WEAK_FUNC(sub_83BA5FA0);
PPC_FUNC_IMPL(__imp__sub_83BA5FA0) {
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
	// addi r3,r11,14944
	ctx.r3.s64 = ctx.r11.s64 + 14944;
	// bl 0x8259af80
	ctx.lr = 0x83BA5FB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29696
	ctx.r3.s64 = ctx.r10.s64 + 29696;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA5FC4;
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

__attribute__((alias("__imp__sub_83BA5FD4"))) PPC_WEAK_FUNC(sub_83BA5FD4);
PPC_FUNC_IMPL(__imp__sub_83BA5FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA5FD8"))) PPC_WEAK_FUNC(sub_83BA5FD8);
PPC_FUNC_IMPL(__imp__sub_83BA5FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14924
	ctx.r11.s64 = ctx.r8.s64 + 14924;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,26256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26256);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29688
	ctx.r3.s64 = ctx.r6.s64 + 29688;
	// stw r10,14924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6008"))) PPC_WEAK_FUNC(sub_83BA6008);
PPC_FUNC_IMPL(__imp__sub_83BA6008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29704
	ctx.r3.s64 = ctx.r11.s64 + 29704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6014"))) PPC_WEAK_FUNC(sub_83BA6014);
PPC_FUNC_IMPL(__imp__sub_83BA6014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6018"))) PPC_WEAK_FUNC(sub_83BA6018);
PPC_FUNC_IMPL(__imp__sub_83BA6018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29712
	ctx.r3.s64 = ctx.r11.s64 + 29712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6024"))) PPC_WEAK_FUNC(sub_83BA6024);
PPC_FUNC_IMPL(__imp__sub_83BA6024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6028"))) PPC_WEAK_FUNC(sub_83BA6028);
PPC_FUNC_IMPL(__imp__sub_83BA6028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29720
	ctx.r3.s64 = ctx.r11.s64 + 29720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6034"))) PPC_WEAK_FUNC(sub_83BA6034);
PPC_FUNC_IMPL(__imp__sub_83BA6034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6038"))) PPC_WEAK_FUNC(sub_83BA6038);
PPC_FUNC_IMPL(__imp__sub_83BA6038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29728
	ctx.r3.s64 = ctx.r11.s64 + 29728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6044"))) PPC_WEAK_FUNC(sub_83BA6044);
PPC_FUNC_IMPL(__imp__sub_83BA6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6048"))) PPC_WEAK_FUNC(sub_83BA6048);
PPC_FUNC_IMPL(__imp__sub_83BA6048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6054"))) PPC_WEAK_FUNC(sub_83BA6054);
PPC_FUNC_IMPL(__imp__sub_83BA6054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6058"))) PPC_WEAK_FUNC(sub_83BA6058);
PPC_FUNC_IMPL(__imp__sub_83BA6058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29744
	ctx.r3.s64 = ctx.r11.s64 + 29744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6064"))) PPC_WEAK_FUNC(sub_83BA6064);
PPC_FUNC_IMPL(__imp__sub_83BA6064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6068"))) PPC_WEAK_FUNC(sub_83BA6068);
PPC_FUNC_IMPL(__imp__sub_83BA6068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29752
	ctx.r3.s64 = ctx.r11.s64 + 29752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6074"))) PPC_WEAK_FUNC(sub_83BA6074);
PPC_FUNC_IMPL(__imp__sub_83BA6074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6078"))) PPC_WEAK_FUNC(sub_83BA6078);
PPC_FUNC_IMPL(__imp__sub_83BA6078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29760
	ctx.r3.s64 = ctx.r11.s64 + 29760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6084"))) PPC_WEAK_FUNC(sub_83BA6084);
PPC_FUNC_IMPL(__imp__sub_83BA6084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6088"))) PPC_WEAK_FUNC(sub_83BA6088);
PPC_FUNC_IMPL(__imp__sub_83BA6088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29768
	ctx.r3.s64 = ctx.r11.s64 + 29768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6094"))) PPC_WEAK_FUNC(sub_83BA6094);
PPC_FUNC_IMPL(__imp__sub_83BA6094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6098"))) PPC_WEAK_FUNC(sub_83BA6098);
PPC_FUNC_IMPL(__imp__sub_83BA6098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29776
	ctx.r3.s64 = ctx.r11.s64 + 29776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA60A4"))) PPC_WEAK_FUNC(sub_83BA60A4);
PPC_FUNC_IMPL(__imp__sub_83BA60A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA60A8"))) PPC_WEAK_FUNC(sub_83BA60A8);
PPC_FUNC_IMPL(__imp__sub_83BA60A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29784
	ctx.r3.s64 = ctx.r11.s64 + 29784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA60B4"))) PPC_WEAK_FUNC(sub_83BA60B4);
PPC_FUNC_IMPL(__imp__sub_83BA60B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA60B8"))) PPC_WEAK_FUNC(sub_83BA60B8);
PPC_FUNC_IMPL(__imp__sub_83BA60B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29792
	ctx.r3.s64 = ctx.r11.s64 + 29792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA60C4"))) PPC_WEAK_FUNC(sub_83BA60C4);
PPC_FUNC_IMPL(__imp__sub_83BA60C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA60C8"))) PPC_WEAK_FUNC(sub_83BA60C8);
PPC_FUNC_IMPL(__imp__sub_83BA60C8) {
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
	// addi r3,r11,15288
	ctx.r3.s64 = ctx.r11.s64 + 15288;
	// bl 0x83523120
	ctx.lr = 0x83BA60E0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29800
	ctx.r3.s64 = ctx.r10.s64 + 29800;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA60EC;
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

__attribute__((alias("__imp__sub_83BA60FC"))) PPC_WEAK_FUNC(sub_83BA60FC);
PPC_FUNC_IMPL(__imp__sub_83BA60FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6100"))) PPC_WEAK_FUNC(sub_83BA6100);
PPC_FUNC_IMPL(__imp__sub_83BA6100) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15304
	ctx.r7.s64 = ctx.r8.s64 + 15304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6128"))) PPC_WEAK_FUNC(sub_83BA6128);
PPC_FUNC_IMPL(__imp__sub_83BA6128) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,26420
	ctx.r6.s64 = ctx.r7.s64 + 26420;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26348(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26348);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15304);
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
	// std r9,26420(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6170"))) PPC_WEAK_FUNC(sub_83BA6170);
PPC_FUNC_IMPL(__imp__sub_83BA6170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29816
	ctx.r3.s64 = ctx.r11.s64 + 29816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA617C"))) PPC_WEAK_FUNC(sub_83BA617C);
PPC_FUNC_IMPL(__imp__sub_83BA617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6180"))) PPC_WEAK_FUNC(sub_83BA6180);
PPC_FUNC_IMPL(__imp__sub_83BA6180) {
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
	// addi r3,r11,15312
	ctx.r3.s64 = ctx.r11.s64 + 15312;
	// bl 0x8259af80
	ctx.lr = 0x83BA6198;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29832
	ctx.r3.s64 = ctx.r10.s64 + 29832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA61A4;
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

__attribute__((alias("__imp__sub_83BA61B4"))) PPC_WEAK_FUNC(sub_83BA61B4);
PPC_FUNC_IMPL(__imp__sub_83BA61B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA61B8"))) PPC_WEAK_FUNC(sub_83BA61B8);
PPC_FUNC_IMPL(__imp__sub_83BA61B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15292
	ctx.r11.s64 = ctx.r8.s64 + 15292;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,26396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26396);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29824
	ctx.r3.s64 = ctx.r6.s64 + 29824;
	// stw r10,15292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA61E8"))) PPC_WEAK_FUNC(sub_83BA61E8);
PPC_FUNC_IMPL(__imp__sub_83BA61E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29840
	ctx.r3.s64 = ctx.r11.s64 + 29840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA61F4"))) PPC_WEAK_FUNC(sub_83BA61F4);
PPC_FUNC_IMPL(__imp__sub_83BA61F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA61F8"))) PPC_WEAK_FUNC(sub_83BA61F8);
PPC_FUNC_IMPL(__imp__sub_83BA61F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29848
	ctx.r3.s64 = ctx.r11.s64 + 29848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6204"))) PPC_WEAK_FUNC(sub_83BA6204);
PPC_FUNC_IMPL(__imp__sub_83BA6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6208"))) PPC_WEAK_FUNC(sub_83BA6208);
PPC_FUNC_IMPL(__imp__sub_83BA6208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29856
	ctx.r3.s64 = ctx.r11.s64 + 29856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6214"))) PPC_WEAK_FUNC(sub_83BA6214);
PPC_FUNC_IMPL(__imp__sub_83BA6214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6218"))) PPC_WEAK_FUNC(sub_83BA6218);
PPC_FUNC_IMPL(__imp__sub_83BA6218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29864
	ctx.r3.s64 = ctx.r11.s64 + 29864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6224"))) PPC_WEAK_FUNC(sub_83BA6224);
PPC_FUNC_IMPL(__imp__sub_83BA6224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6228"))) PPC_WEAK_FUNC(sub_83BA6228);
PPC_FUNC_IMPL(__imp__sub_83BA6228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29872
	ctx.r3.s64 = ctx.r11.s64 + 29872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6234"))) PPC_WEAK_FUNC(sub_83BA6234);
PPC_FUNC_IMPL(__imp__sub_83BA6234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6238"))) PPC_WEAK_FUNC(sub_83BA6238);
PPC_FUNC_IMPL(__imp__sub_83BA6238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29880
	ctx.r3.s64 = ctx.r11.s64 + 29880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6244"))) PPC_WEAK_FUNC(sub_83BA6244);
PPC_FUNC_IMPL(__imp__sub_83BA6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6248"))) PPC_WEAK_FUNC(sub_83BA6248);
PPC_FUNC_IMPL(__imp__sub_83BA6248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29888
	ctx.r3.s64 = ctx.r11.s64 + 29888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6254"))) PPC_WEAK_FUNC(sub_83BA6254);
PPC_FUNC_IMPL(__imp__sub_83BA6254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6258"))) PPC_WEAK_FUNC(sub_83BA6258);
PPC_FUNC_IMPL(__imp__sub_83BA6258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29896
	ctx.r3.s64 = ctx.r11.s64 + 29896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6264"))) PPC_WEAK_FUNC(sub_83BA6264);
PPC_FUNC_IMPL(__imp__sub_83BA6264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6268"))) PPC_WEAK_FUNC(sub_83BA6268);
PPC_FUNC_IMPL(__imp__sub_83BA6268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29904
	ctx.r3.s64 = ctx.r11.s64 + 29904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6274"))) PPC_WEAK_FUNC(sub_83BA6274);
PPC_FUNC_IMPL(__imp__sub_83BA6274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6278"))) PPC_WEAK_FUNC(sub_83BA6278);
PPC_FUNC_IMPL(__imp__sub_83BA6278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29912
	ctx.r3.s64 = ctx.r11.s64 + 29912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6284"))) PPC_WEAK_FUNC(sub_83BA6284);
PPC_FUNC_IMPL(__imp__sub_83BA6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6288"))) PPC_WEAK_FUNC(sub_83BA6288);
PPC_FUNC_IMPL(__imp__sub_83BA6288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29920
	ctx.r3.s64 = ctx.r11.s64 + 29920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6294"))) PPC_WEAK_FUNC(sub_83BA6294);
PPC_FUNC_IMPL(__imp__sub_83BA6294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6298"))) PPC_WEAK_FUNC(sub_83BA6298);
PPC_FUNC_IMPL(__imp__sub_83BA6298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29928
	ctx.r3.s64 = ctx.r11.s64 + 29928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA62A4"))) PPC_WEAK_FUNC(sub_83BA62A4);
PPC_FUNC_IMPL(__imp__sub_83BA62A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA62A8"))) PPC_WEAK_FUNC(sub_83BA62A8);
PPC_FUNC_IMPL(__imp__sub_83BA62A8) {
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
	// addi r3,r11,15656
	ctx.r3.s64 = ctx.r11.s64 + 15656;
	// bl 0x83523120
	ctx.lr = 0x83BA62C0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29936
	ctx.r3.s64 = ctx.r10.s64 + 29936;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA62CC;
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

__attribute__((alias("__imp__sub_83BA62DC"))) PPC_WEAK_FUNC(sub_83BA62DC);
PPC_FUNC_IMPL(__imp__sub_83BA62DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA62E0"))) PPC_WEAK_FUNC(sub_83BA62E0);
PPC_FUNC_IMPL(__imp__sub_83BA62E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15672
	ctx.r7.s64 = ctx.r8.s64 + 15672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6308"))) PPC_WEAK_FUNC(sub_83BA6308);
PPC_FUNC_IMPL(__imp__sub_83BA6308) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,26632
	ctx.r6.s64 = ctx.r7.s64 + 26632;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26560(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26560);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15672);
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
	// std r9,26632(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6350"))) PPC_WEAK_FUNC(sub_83BA6350);
PPC_FUNC_IMPL(__imp__sub_83BA6350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29952
	ctx.r3.s64 = ctx.r11.s64 + 29952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA635C"))) PPC_WEAK_FUNC(sub_83BA635C);
PPC_FUNC_IMPL(__imp__sub_83BA635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6360"))) PPC_WEAK_FUNC(sub_83BA6360);
PPC_FUNC_IMPL(__imp__sub_83BA6360) {
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
	// addi r3,r11,15680
	ctx.r3.s64 = ctx.r11.s64 + 15680;
	// bl 0x8259af80
	ctx.lr = 0x83BA6378;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,29968
	ctx.r3.s64 = ctx.r10.s64 + 29968;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6384;
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

__attribute__((alias("__imp__sub_83BA6394"))) PPC_WEAK_FUNC(sub_83BA6394);
PPC_FUNC_IMPL(__imp__sub_83BA6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6398"))) PPC_WEAK_FUNC(sub_83BA6398);
PPC_FUNC_IMPL(__imp__sub_83BA6398) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15660
	ctx.r11.s64 = ctx.r8.s64 + 15660;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,26608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26608);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29960
	ctx.r3.s64 = ctx.r6.s64 + 29960;
	// stw r10,15660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA63C8"))) PPC_WEAK_FUNC(sub_83BA63C8);
PPC_FUNC_IMPL(__imp__sub_83BA63C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29976
	ctx.r3.s64 = ctx.r11.s64 + 29976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA63D4"))) PPC_WEAK_FUNC(sub_83BA63D4);
PPC_FUNC_IMPL(__imp__sub_83BA63D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA63D8"))) PPC_WEAK_FUNC(sub_83BA63D8);
PPC_FUNC_IMPL(__imp__sub_83BA63D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29984
	ctx.r3.s64 = ctx.r11.s64 + 29984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA63E4"))) PPC_WEAK_FUNC(sub_83BA63E4);
PPC_FUNC_IMPL(__imp__sub_83BA63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA63E8"))) PPC_WEAK_FUNC(sub_83BA63E8);
PPC_FUNC_IMPL(__imp__sub_83BA63E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,29992
	ctx.r3.s64 = ctx.r11.s64 + 29992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA63F4"))) PPC_WEAK_FUNC(sub_83BA63F4);
PPC_FUNC_IMPL(__imp__sub_83BA63F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA63F8"))) PPC_WEAK_FUNC(sub_83BA63F8);
PPC_FUNC_IMPL(__imp__sub_83BA63F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30000
	ctx.r3.s64 = ctx.r11.s64 + 30000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6404"))) PPC_WEAK_FUNC(sub_83BA6404);
PPC_FUNC_IMPL(__imp__sub_83BA6404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6408"))) PPC_WEAK_FUNC(sub_83BA6408);
PPC_FUNC_IMPL(__imp__sub_83BA6408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30008
	ctx.r3.s64 = ctx.r11.s64 + 30008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6414"))) PPC_WEAK_FUNC(sub_83BA6414);
PPC_FUNC_IMPL(__imp__sub_83BA6414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6418"))) PPC_WEAK_FUNC(sub_83BA6418);
PPC_FUNC_IMPL(__imp__sub_83BA6418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30016
	ctx.r3.s64 = ctx.r11.s64 + 30016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6424"))) PPC_WEAK_FUNC(sub_83BA6424);
PPC_FUNC_IMPL(__imp__sub_83BA6424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6428"))) PPC_WEAK_FUNC(sub_83BA6428);
PPC_FUNC_IMPL(__imp__sub_83BA6428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30024
	ctx.r3.s64 = ctx.r11.s64 + 30024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6434"))) PPC_WEAK_FUNC(sub_83BA6434);
PPC_FUNC_IMPL(__imp__sub_83BA6434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6438"))) PPC_WEAK_FUNC(sub_83BA6438);
PPC_FUNC_IMPL(__imp__sub_83BA6438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30032
	ctx.r3.s64 = ctx.r11.s64 + 30032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6444"))) PPC_WEAK_FUNC(sub_83BA6444);
PPC_FUNC_IMPL(__imp__sub_83BA6444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6448"))) PPC_WEAK_FUNC(sub_83BA6448);
PPC_FUNC_IMPL(__imp__sub_83BA6448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30040
	ctx.r3.s64 = ctx.r11.s64 + 30040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6454"))) PPC_WEAK_FUNC(sub_83BA6454);
PPC_FUNC_IMPL(__imp__sub_83BA6454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6458"))) PPC_WEAK_FUNC(sub_83BA6458);
PPC_FUNC_IMPL(__imp__sub_83BA6458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30048
	ctx.r3.s64 = ctx.r11.s64 + 30048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6464"))) PPC_WEAK_FUNC(sub_83BA6464);
PPC_FUNC_IMPL(__imp__sub_83BA6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6468"))) PPC_WEAK_FUNC(sub_83BA6468);
PPC_FUNC_IMPL(__imp__sub_83BA6468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30056
	ctx.r3.s64 = ctx.r11.s64 + 30056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6474"))) PPC_WEAK_FUNC(sub_83BA6474);
PPC_FUNC_IMPL(__imp__sub_83BA6474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6478"))) PPC_WEAK_FUNC(sub_83BA6478);
PPC_FUNC_IMPL(__imp__sub_83BA6478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30064
	ctx.r3.s64 = ctx.r11.s64 + 30064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6484"))) PPC_WEAK_FUNC(sub_83BA6484);
PPC_FUNC_IMPL(__imp__sub_83BA6484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6488"))) PPC_WEAK_FUNC(sub_83BA6488);
PPC_FUNC_IMPL(__imp__sub_83BA6488) {
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
	// addi r3,r11,16024
	ctx.r3.s64 = ctx.r11.s64 + 16024;
	// bl 0x83523120
	ctx.lr = 0x83BA64A0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30072
	ctx.r3.s64 = ctx.r10.s64 + 30072;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA64AC;
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

__attribute__((alias("__imp__sub_83BA64BC"))) PPC_WEAK_FUNC(sub_83BA64BC);
PPC_FUNC_IMPL(__imp__sub_83BA64BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA64C0"))) PPC_WEAK_FUNC(sub_83BA64C0);
PPC_FUNC_IMPL(__imp__sub_83BA64C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16040
	ctx.r7.s64 = ctx.r8.s64 + 16040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16040(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA64E8"))) PPC_WEAK_FUNC(sub_83BA64E8);
PPC_FUNC_IMPL(__imp__sub_83BA64E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,26776
	ctx.r6.s64 = ctx.r7.s64 + 26776;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26704(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26704);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16040);
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
	// std r9,26776(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26776, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6530"))) PPC_WEAK_FUNC(sub_83BA6530);
PPC_FUNC_IMPL(__imp__sub_83BA6530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30088
	ctx.r3.s64 = ctx.r11.s64 + 30088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA653C"))) PPC_WEAK_FUNC(sub_83BA653C);
PPC_FUNC_IMPL(__imp__sub_83BA653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6540"))) PPC_WEAK_FUNC(sub_83BA6540);
PPC_FUNC_IMPL(__imp__sub_83BA6540) {
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
	// addi r3,r11,16048
	ctx.r3.s64 = ctx.r11.s64 + 16048;
	// bl 0x8259af80
	ctx.lr = 0x83BA6558;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30104
	ctx.r3.s64 = ctx.r10.s64 + 30104;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6564;
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

__attribute__((alias("__imp__sub_83BA6574"))) PPC_WEAK_FUNC(sub_83BA6574);
PPC_FUNC_IMPL(__imp__sub_83BA6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6578"))) PPC_WEAK_FUNC(sub_83BA6578);
PPC_FUNC_IMPL(__imp__sub_83BA6578) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16028
	ctx.r11.s64 = ctx.r8.s64 + 16028;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,26752(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26752);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30096
	ctx.r3.s64 = ctx.r6.s64 + 30096;
	// stw r10,16028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16028, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA65A8"))) PPC_WEAK_FUNC(sub_83BA65A8);
PPC_FUNC_IMPL(__imp__sub_83BA65A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30112
	ctx.r3.s64 = ctx.r11.s64 + 30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA65B4"))) PPC_WEAK_FUNC(sub_83BA65B4);
PPC_FUNC_IMPL(__imp__sub_83BA65B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA65B8"))) PPC_WEAK_FUNC(sub_83BA65B8);
PPC_FUNC_IMPL(__imp__sub_83BA65B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA65C4"))) PPC_WEAK_FUNC(sub_83BA65C4);
PPC_FUNC_IMPL(__imp__sub_83BA65C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA65C8"))) PPC_WEAK_FUNC(sub_83BA65C8);
PPC_FUNC_IMPL(__imp__sub_83BA65C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA65D4"))) PPC_WEAK_FUNC(sub_83BA65D4);
PPC_FUNC_IMPL(__imp__sub_83BA65D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA65D8"))) PPC_WEAK_FUNC(sub_83BA65D8);
PPC_FUNC_IMPL(__imp__sub_83BA65D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30136
	ctx.r3.s64 = ctx.r11.s64 + 30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA65E4"))) PPC_WEAK_FUNC(sub_83BA65E4);
PPC_FUNC_IMPL(__imp__sub_83BA65E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA65E8"))) PPC_WEAK_FUNC(sub_83BA65E8);
PPC_FUNC_IMPL(__imp__sub_83BA65E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA65F4"))) PPC_WEAK_FUNC(sub_83BA65F4);
PPC_FUNC_IMPL(__imp__sub_83BA65F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA65F8"))) PPC_WEAK_FUNC(sub_83BA65F8);
PPC_FUNC_IMPL(__imp__sub_83BA65F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30152
	ctx.r3.s64 = ctx.r11.s64 + 30152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6604"))) PPC_WEAK_FUNC(sub_83BA6604);
PPC_FUNC_IMPL(__imp__sub_83BA6604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6608"))) PPC_WEAK_FUNC(sub_83BA6608);
PPC_FUNC_IMPL(__imp__sub_83BA6608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30160
	ctx.r3.s64 = ctx.r11.s64 + 30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6614"))) PPC_WEAK_FUNC(sub_83BA6614);
PPC_FUNC_IMPL(__imp__sub_83BA6614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6618"))) PPC_WEAK_FUNC(sub_83BA6618);
PPC_FUNC_IMPL(__imp__sub_83BA6618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6624"))) PPC_WEAK_FUNC(sub_83BA6624);
PPC_FUNC_IMPL(__imp__sub_83BA6624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6628"))) PPC_WEAK_FUNC(sub_83BA6628);
PPC_FUNC_IMPL(__imp__sub_83BA6628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30176
	ctx.r3.s64 = ctx.r11.s64 + 30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6634"))) PPC_WEAK_FUNC(sub_83BA6634);
PPC_FUNC_IMPL(__imp__sub_83BA6634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6638"))) PPC_WEAK_FUNC(sub_83BA6638);
PPC_FUNC_IMPL(__imp__sub_83BA6638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30184
	ctx.r3.s64 = ctx.r11.s64 + 30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6644"))) PPC_WEAK_FUNC(sub_83BA6644);
PPC_FUNC_IMPL(__imp__sub_83BA6644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6648"))) PPC_WEAK_FUNC(sub_83BA6648);
PPC_FUNC_IMPL(__imp__sub_83BA6648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6654"))) PPC_WEAK_FUNC(sub_83BA6654);
PPC_FUNC_IMPL(__imp__sub_83BA6654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6658"))) PPC_WEAK_FUNC(sub_83BA6658);
PPC_FUNC_IMPL(__imp__sub_83BA6658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30200
	ctx.r3.s64 = ctx.r11.s64 + 30200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6664"))) PPC_WEAK_FUNC(sub_83BA6664);
PPC_FUNC_IMPL(__imp__sub_83BA6664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6668"))) PPC_WEAK_FUNC(sub_83BA6668);
PPC_FUNC_IMPL(__imp__sub_83BA6668) {
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
	// addi r3,r11,16392
	ctx.r3.s64 = ctx.r11.s64 + 16392;
	// bl 0x83523120
	ctx.lr = 0x83BA6680;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30208
	ctx.r3.s64 = ctx.r10.s64 + 30208;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA668C;
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

__attribute__((alias("__imp__sub_83BA669C"))) PPC_WEAK_FUNC(sub_83BA669C);
PPC_FUNC_IMPL(__imp__sub_83BA669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA66A0"))) PPC_WEAK_FUNC(sub_83BA66A0);
PPC_FUNC_IMPL(__imp__sub_83BA66A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16408
	ctx.r7.s64 = ctx.r8.s64 + 16408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA66C8"))) PPC_WEAK_FUNC(sub_83BA66C8);
PPC_FUNC_IMPL(__imp__sub_83BA66C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,26912
	ctx.r6.s64 = ctx.r7.s64 + 26912;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26840(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26840);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16408);
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
	// std r9,26912(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26912, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6710"))) PPC_WEAK_FUNC(sub_83BA6710);
PPC_FUNC_IMPL(__imp__sub_83BA6710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30224
	ctx.r3.s64 = ctx.r11.s64 + 30224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA671C"))) PPC_WEAK_FUNC(sub_83BA671C);
PPC_FUNC_IMPL(__imp__sub_83BA671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6720"))) PPC_WEAK_FUNC(sub_83BA6720);
PPC_FUNC_IMPL(__imp__sub_83BA6720) {
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
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// bl 0x8259af80
	ctx.lr = 0x83BA6738;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30240
	ctx.r3.s64 = ctx.r10.s64 + 30240;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6744;
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

__attribute__((alias("__imp__sub_83BA6754"))) PPC_WEAK_FUNC(sub_83BA6754);
PPC_FUNC_IMPL(__imp__sub_83BA6754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6758"))) PPC_WEAK_FUNC(sub_83BA6758);
PPC_FUNC_IMPL(__imp__sub_83BA6758) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16396
	ctx.r11.s64 = ctx.r8.s64 + 16396;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,26888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26888);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30232
	ctx.r3.s64 = ctx.r6.s64 + 30232;
	// stw r10,16396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6788"))) PPC_WEAK_FUNC(sub_83BA6788);
PPC_FUNC_IMPL(__imp__sub_83BA6788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30248
	ctx.r3.s64 = ctx.r11.s64 + 30248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6794"))) PPC_WEAK_FUNC(sub_83BA6794);
PPC_FUNC_IMPL(__imp__sub_83BA6794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6798"))) PPC_WEAK_FUNC(sub_83BA6798);
PPC_FUNC_IMPL(__imp__sub_83BA6798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30256
	ctx.r3.s64 = ctx.r11.s64 + 30256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA67A4"))) PPC_WEAK_FUNC(sub_83BA67A4);
PPC_FUNC_IMPL(__imp__sub_83BA67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA67A8"))) PPC_WEAK_FUNC(sub_83BA67A8);
PPC_FUNC_IMPL(__imp__sub_83BA67A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30264
	ctx.r3.s64 = ctx.r11.s64 + 30264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA67B4"))) PPC_WEAK_FUNC(sub_83BA67B4);
PPC_FUNC_IMPL(__imp__sub_83BA67B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA67B8"))) PPC_WEAK_FUNC(sub_83BA67B8);
PPC_FUNC_IMPL(__imp__sub_83BA67B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30272
	ctx.r3.s64 = ctx.r11.s64 + 30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA67C4"))) PPC_WEAK_FUNC(sub_83BA67C4);
PPC_FUNC_IMPL(__imp__sub_83BA67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA67C8"))) PPC_WEAK_FUNC(sub_83BA67C8);
PPC_FUNC_IMPL(__imp__sub_83BA67C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30280
	ctx.r3.s64 = ctx.r11.s64 + 30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA67D4"))) PPC_WEAK_FUNC(sub_83BA67D4);
PPC_FUNC_IMPL(__imp__sub_83BA67D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA67D8"))) PPC_WEAK_FUNC(sub_83BA67D8);
PPC_FUNC_IMPL(__imp__sub_83BA67D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA67E4"))) PPC_WEAK_FUNC(sub_83BA67E4);
PPC_FUNC_IMPL(__imp__sub_83BA67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA67E8"))) PPC_WEAK_FUNC(sub_83BA67E8);
PPC_FUNC_IMPL(__imp__sub_83BA67E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30296
	ctx.r3.s64 = ctx.r11.s64 + 30296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA67F4"))) PPC_WEAK_FUNC(sub_83BA67F4);
PPC_FUNC_IMPL(__imp__sub_83BA67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA67F8"))) PPC_WEAK_FUNC(sub_83BA67F8);
PPC_FUNC_IMPL(__imp__sub_83BA67F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30304
	ctx.r3.s64 = ctx.r11.s64 + 30304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6804"))) PPC_WEAK_FUNC(sub_83BA6804);
PPC_FUNC_IMPL(__imp__sub_83BA6804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6808"))) PPC_WEAK_FUNC(sub_83BA6808);
PPC_FUNC_IMPL(__imp__sub_83BA6808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6814"))) PPC_WEAK_FUNC(sub_83BA6814);
PPC_FUNC_IMPL(__imp__sub_83BA6814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6818"))) PPC_WEAK_FUNC(sub_83BA6818);
PPC_FUNC_IMPL(__imp__sub_83BA6818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30320
	ctx.r3.s64 = ctx.r11.s64 + 30320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6824"))) PPC_WEAK_FUNC(sub_83BA6824);
PPC_FUNC_IMPL(__imp__sub_83BA6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6828"))) PPC_WEAK_FUNC(sub_83BA6828);
PPC_FUNC_IMPL(__imp__sub_83BA6828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30328
	ctx.r3.s64 = ctx.r11.s64 + 30328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6834"))) PPC_WEAK_FUNC(sub_83BA6834);
PPC_FUNC_IMPL(__imp__sub_83BA6834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6838"))) PPC_WEAK_FUNC(sub_83BA6838);
PPC_FUNC_IMPL(__imp__sub_83BA6838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30336
	ctx.r3.s64 = ctx.r11.s64 + 30336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6844"))) PPC_WEAK_FUNC(sub_83BA6844);
PPC_FUNC_IMPL(__imp__sub_83BA6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6848"))) PPC_WEAK_FUNC(sub_83BA6848);
PPC_FUNC_IMPL(__imp__sub_83BA6848) {
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
	// addi r3,r11,16760
	ctx.r3.s64 = ctx.r11.s64 + 16760;
	// bl 0x83523120
	ctx.lr = 0x83BA6860;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30344
	ctx.r3.s64 = ctx.r10.s64 + 30344;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA686C;
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

__attribute__((alias("__imp__sub_83BA687C"))) PPC_WEAK_FUNC(sub_83BA687C);
PPC_FUNC_IMPL(__imp__sub_83BA687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6880"))) PPC_WEAK_FUNC(sub_83BA6880);
PPC_FUNC_IMPL(__imp__sub_83BA6880) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16776
	ctx.r7.s64 = ctx.r8.s64 + 16776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA68A8"))) PPC_WEAK_FUNC(sub_83BA68A8);
PPC_FUNC_IMPL(__imp__sub_83BA68A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,27048
	ctx.r6.s64 = ctx.r7.s64 + 27048;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16776);
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
	// std r9,27048(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA68F0"))) PPC_WEAK_FUNC(sub_83BA68F0);
PPC_FUNC_IMPL(__imp__sub_83BA68F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA68FC"))) PPC_WEAK_FUNC(sub_83BA68FC);
PPC_FUNC_IMPL(__imp__sub_83BA68FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6900"))) PPC_WEAK_FUNC(sub_83BA6900);
PPC_FUNC_IMPL(__imp__sub_83BA6900) {
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
	// addi r3,r11,16784
	ctx.r3.s64 = ctx.r11.s64 + 16784;
	// bl 0x8259af80
	ctx.lr = 0x83BA6918;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30376
	ctx.r3.s64 = ctx.r10.s64 + 30376;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6924;
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

__attribute__((alias("__imp__sub_83BA6934"))) PPC_WEAK_FUNC(sub_83BA6934);
PPC_FUNC_IMPL(__imp__sub_83BA6934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6938"))) PPC_WEAK_FUNC(sub_83BA6938);
PPC_FUNC_IMPL(__imp__sub_83BA6938) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16764
	ctx.r11.s64 = ctx.r8.s64 + 16764;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,27024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30368
	ctx.r3.s64 = ctx.r6.s64 + 30368;
	// stw r10,16764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6968"))) PPC_WEAK_FUNC(sub_83BA6968);
PPC_FUNC_IMPL(__imp__sub_83BA6968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30384
	ctx.r3.s64 = ctx.r11.s64 + 30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6974"))) PPC_WEAK_FUNC(sub_83BA6974);
PPC_FUNC_IMPL(__imp__sub_83BA6974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6978"))) PPC_WEAK_FUNC(sub_83BA6978);
PPC_FUNC_IMPL(__imp__sub_83BA6978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30392
	ctx.r3.s64 = ctx.r11.s64 + 30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6984"))) PPC_WEAK_FUNC(sub_83BA6984);
PPC_FUNC_IMPL(__imp__sub_83BA6984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6988"))) PPC_WEAK_FUNC(sub_83BA6988);
PPC_FUNC_IMPL(__imp__sub_83BA6988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6994"))) PPC_WEAK_FUNC(sub_83BA6994);
PPC_FUNC_IMPL(__imp__sub_83BA6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6998"))) PPC_WEAK_FUNC(sub_83BA6998);
PPC_FUNC_IMPL(__imp__sub_83BA6998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30408
	ctx.r3.s64 = ctx.r11.s64 + 30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA69A4"))) PPC_WEAK_FUNC(sub_83BA69A4);
PPC_FUNC_IMPL(__imp__sub_83BA69A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA69A8"))) PPC_WEAK_FUNC(sub_83BA69A8);
PPC_FUNC_IMPL(__imp__sub_83BA69A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30416
	ctx.r3.s64 = ctx.r11.s64 + 30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA69B4"))) PPC_WEAK_FUNC(sub_83BA69B4);
PPC_FUNC_IMPL(__imp__sub_83BA69B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA69B8"))) PPC_WEAK_FUNC(sub_83BA69B8);
PPC_FUNC_IMPL(__imp__sub_83BA69B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30424
	ctx.r3.s64 = ctx.r11.s64 + 30424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA69C4"))) PPC_WEAK_FUNC(sub_83BA69C4);
PPC_FUNC_IMPL(__imp__sub_83BA69C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA69C8"))) PPC_WEAK_FUNC(sub_83BA69C8);
PPC_FUNC_IMPL(__imp__sub_83BA69C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30432
	ctx.r3.s64 = ctx.r11.s64 + 30432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA69D4"))) PPC_WEAK_FUNC(sub_83BA69D4);
PPC_FUNC_IMPL(__imp__sub_83BA69D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA69D8"))) PPC_WEAK_FUNC(sub_83BA69D8);
PPC_FUNC_IMPL(__imp__sub_83BA69D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30440
	ctx.r3.s64 = ctx.r11.s64 + 30440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA69E4"))) PPC_WEAK_FUNC(sub_83BA69E4);
PPC_FUNC_IMPL(__imp__sub_83BA69E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA69E8"))) PPC_WEAK_FUNC(sub_83BA69E8);
PPC_FUNC_IMPL(__imp__sub_83BA69E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30448
	ctx.r3.s64 = ctx.r11.s64 + 30448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA69F4"))) PPC_WEAK_FUNC(sub_83BA69F4);
PPC_FUNC_IMPL(__imp__sub_83BA69F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA69F8"))) PPC_WEAK_FUNC(sub_83BA69F8);
PPC_FUNC_IMPL(__imp__sub_83BA69F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6A04"))) PPC_WEAK_FUNC(sub_83BA6A04);
PPC_FUNC_IMPL(__imp__sub_83BA6A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6A08"))) PPC_WEAK_FUNC(sub_83BA6A08);
PPC_FUNC_IMPL(__imp__sub_83BA6A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6A14"))) PPC_WEAK_FUNC(sub_83BA6A14);
PPC_FUNC_IMPL(__imp__sub_83BA6A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

