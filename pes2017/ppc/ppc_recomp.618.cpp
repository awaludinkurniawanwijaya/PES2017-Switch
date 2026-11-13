#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BB449C"))) PPC_WEAK_FUNC(sub_83BB449C);
PPC_FUNC_IMPL(__imp__sub_83BB449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB44A0"))) PPC_WEAK_FUNC(sub_83BB44A0);
PPC_FUNC_IMPL(__imp__sub_83BB44A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5456
	ctx.r7.s64 = ctx.r8.s64 + -5456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB44C8"))) PPC_WEAK_FUNC(sub_83BB44C8);
PPC_FUNC_IMPL(__imp__sub_83BB44C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-18936
	ctx.r6.s64 = ctx.r7.s64 + -18936;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19008(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19008);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5456);
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
	// std r9,-18936(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18936, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB4510"))) PPC_WEAK_FUNC(sub_83BB4510);
PPC_FUNC_IMPL(__imp__sub_83BB4510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19216
	ctx.r3.s64 = ctx.r11.s64 + -19216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB451C"))) PPC_WEAK_FUNC(sub_83BB451C);
PPC_FUNC_IMPL(__imp__sub_83BB451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4520"))) PPC_WEAK_FUNC(sub_83BB4520);
PPC_FUNC_IMPL(__imp__sub_83BB4520) {
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
	// addi r3,r11,-5448
	ctx.r3.s64 = ctx.r11.s64 + -5448;
	// bl 0x8259af80
	ctx.lr = 0x83BB4538;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-19200
	ctx.r3.s64 = ctx.r10.s64 + -19200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4544;
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

__attribute__((alias("__imp__sub_83BB4554"))) PPC_WEAK_FUNC(sub_83BB4554);
PPC_FUNC_IMPL(__imp__sub_83BB4554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4558"))) PPC_WEAK_FUNC(sub_83BB4558);
PPC_FUNC_IMPL(__imp__sub_83BB4558) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5468
	ctx.r11.s64 = ctx.r8.s64 + -5468;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-18960(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18960);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19208
	ctx.r3.s64 = ctx.r6.s64 + -19208;
	// stw r10,-5468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4588"))) PPC_WEAK_FUNC(sub_83BB4588);
PPC_FUNC_IMPL(__imp__sub_83BB4588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19192
	ctx.r3.s64 = ctx.r11.s64 + -19192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4594"))) PPC_WEAK_FUNC(sub_83BB4594);
PPC_FUNC_IMPL(__imp__sub_83BB4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4598"))) PPC_WEAK_FUNC(sub_83BB4598);
PPC_FUNC_IMPL(__imp__sub_83BB4598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19184
	ctx.r3.s64 = ctx.r11.s64 + -19184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB45A4"))) PPC_WEAK_FUNC(sub_83BB45A4);
PPC_FUNC_IMPL(__imp__sub_83BB45A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB45A8"))) PPC_WEAK_FUNC(sub_83BB45A8);
PPC_FUNC_IMPL(__imp__sub_83BB45A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB45B4"))) PPC_WEAK_FUNC(sub_83BB45B4);
PPC_FUNC_IMPL(__imp__sub_83BB45B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB45B8"))) PPC_WEAK_FUNC(sub_83BB45B8);
PPC_FUNC_IMPL(__imp__sub_83BB45B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19168
	ctx.r3.s64 = ctx.r11.s64 + -19168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB45C4"))) PPC_WEAK_FUNC(sub_83BB45C4);
PPC_FUNC_IMPL(__imp__sub_83BB45C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB45C8"))) PPC_WEAK_FUNC(sub_83BB45C8);
PPC_FUNC_IMPL(__imp__sub_83BB45C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19160
	ctx.r3.s64 = ctx.r11.s64 + -19160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB45D4"))) PPC_WEAK_FUNC(sub_83BB45D4);
PPC_FUNC_IMPL(__imp__sub_83BB45D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB45D8"))) PPC_WEAK_FUNC(sub_83BB45D8);
PPC_FUNC_IMPL(__imp__sub_83BB45D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19152
	ctx.r3.s64 = ctx.r11.s64 + -19152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB45E4"))) PPC_WEAK_FUNC(sub_83BB45E4);
PPC_FUNC_IMPL(__imp__sub_83BB45E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB45E8"))) PPC_WEAK_FUNC(sub_83BB45E8);
PPC_FUNC_IMPL(__imp__sub_83BB45E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19144
	ctx.r3.s64 = ctx.r11.s64 + -19144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB45F4"))) PPC_WEAK_FUNC(sub_83BB45F4);
PPC_FUNC_IMPL(__imp__sub_83BB45F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB45F8"))) PPC_WEAK_FUNC(sub_83BB45F8);
PPC_FUNC_IMPL(__imp__sub_83BB45F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19136
	ctx.r3.s64 = ctx.r11.s64 + -19136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4604"))) PPC_WEAK_FUNC(sub_83BB4604);
PPC_FUNC_IMPL(__imp__sub_83BB4604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4608"))) PPC_WEAK_FUNC(sub_83BB4608);
PPC_FUNC_IMPL(__imp__sub_83BB4608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19128
	ctx.r3.s64 = ctx.r11.s64 + -19128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4614"))) PPC_WEAK_FUNC(sub_83BB4614);
PPC_FUNC_IMPL(__imp__sub_83BB4614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4618"))) PPC_WEAK_FUNC(sub_83BB4618);
PPC_FUNC_IMPL(__imp__sub_83BB4618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19120
	ctx.r3.s64 = ctx.r11.s64 + -19120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4624"))) PPC_WEAK_FUNC(sub_83BB4624);
PPC_FUNC_IMPL(__imp__sub_83BB4624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4628"))) PPC_WEAK_FUNC(sub_83BB4628);
PPC_FUNC_IMPL(__imp__sub_83BB4628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19112
	ctx.r3.s64 = ctx.r11.s64 + -19112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4634"))) PPC_WEAK_FUNC(sub_83BB4634);
PPC_FUNC_IMPL(__imp__sub_83BB4634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4638"))) PPC_WEAK_FUNC(sub_83BB4638);
PPC_FUNC_IMPL(__imp__sub_83BB4638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19104
	ctx.r3.s64 = ctx.r11.s64 + -19104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4644"))) PPC_WEAK_FUNC(sub_83BB4644);
PPC_FUNC_IMPL(__imp__sub_83BB4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4648"))) PPC_WEAK_FUNC(sub_83BB4648);
PPC_FUNC_IMPL(__imp__sub_83BB4648) {
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
	// addi r3,r11,-5104
	ctx.r3.s64 = ctx.r11.s64 + -5104;
	// bl 0x83523120
	ctx.lr = 0x83BB4660;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-19096
	ctx.r3.s64 = ctx.r10.s64 + -19096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB466C;
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

__attribute__((alias("__imp__sub_83BB467C"))) PPC_WEAK_FUNC(sub_83BB467C);
PPC_FUNC_IMPL(__imp__sub_83BB467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4680"))) PPC_WEAK_FUNC(sub_83BB4680);
PPC_FUNC_IMPL(__imp__sub_83BB4680) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5088
	ctx.r7.s64 = ctx.r8.s64 + -5088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5088(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB46A8"))) PPC_WEAK_FUNC(sub_83BB46A8);
PPC_FUNC_IMPL(__imp__sub_83BB46A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-18776
	ctx.r6.s64 = ctx.r7.s64 + -18776;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18848(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18848);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5088);
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
	// std r9,-18776(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18776, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB46F0"))) PPC_WEAK_FUNC(sub_83BB46F0);
PPC_FUNC_IMPL(__imp__sub_83BB46F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19080
	ctx.r3.s64 = ctx.r11.s64 + -19080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB46FC"))) PPC_WEAK_FUNC(sub_83BB46FC);
PPC_FUNC_IMPL(__imp__sub_83BB46FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4700"))) PPC_WEAK_FUNC(sub_83BB4700);
PPC_FUNC_IMPL(__imp__sub_83BB4700) {
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
	// addi r3,r11,-5080
	ctx.r3.s64 = ctx.r11.s64 + -5080;
	// bl 0x8259af80
	ctx.lr = 0x83BB4718;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-19064
	ctx.r3.s64 = ctx.r10.s64 + -19064;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4724;
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

__attribute__((alias("__imp__sub_83BB4734"))) PPC_WEAK_FUNC(sub_83BB4734);
PPC_FUNC_IMPL(__imp__sub_83BB4734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4738"))) PPC_WEAK_FUNC(sub_83BB4738);
PPC_FUNC_IMPL(__imp__sub_83BB4738) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5100
	ctx.r11.s64 = ctx.r8.s64 + -5100;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-18800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18800);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19072
	ctx.r3.s64 = ctx.r6.s64 + -19072;
	// stw r10,-5100(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4768"))) PPC_WEAK_FUNC(sub_83BB4768);
PPC_FUNC_IMPL(__imp__sub_83BB4768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19056
	ctx.r3.s64 = ctx.r11.s64 + -19056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4774"))) PPC_WEAK_FUNC(sub_83BB4774);
PPC_FUNC_IMPL(__imp__sub_83BB4774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4778"))) PPC_WEAK_FUNC(sub_83BB4778);
PPC_FUNC_IMPL(__imp__sub_83BB4778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4784"))) PPC_WEAK_FUNC(sub_83BB4784);
PPC_FUNC_IMPL(__imp__sub_83BB4784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4788"))) PPC_WEAK_FUNC(sub_83BB4788);
PPC_FUNC_IMPL(__imp__sub_83BB4788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19040
	ctx.r3.s64 = ctx.r11.s64 + -19040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4794"))) PPC_WEAK_FUNC(sub_83BB4794);
PPC_FUNC_IMPL(__imp__sub_83BB4794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4798"))) PPC_WEAK_FUNC(sub_83BB4798);
PPC_FUNC_IMPL(__imp__sub_83BB4798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19032
	ctx.r3.s64 = ctx.r11.s64 + -19032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB47A4"))) PPC_WEAK_FUNC(sub_83BB47A4);
PPC_FUNC_IMPL(__imp__sub_83BB47A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB47A8"))) PPC_WEAK_FUNC(sub_83BB47A8);
PPC_FUNC_IMPL(__imp__sub_83BB47A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19024
	ctx.r3.s64 = ctx.r11.s64 + -19024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB47B4"))) PPC_WEAK_FUNC(sub_83BB47B4);
PPC_FUNC_IMPL(__imp__sub_83BB47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB47B8"))) PPC_WEAK_FUNC(sub_83BB47B8);
PPC_FUNC_IMPL(__imp__sub_83BB47B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB47C4"))) PPC_WEAK_FUNC(sub_83BB47C4);
PPC_FUNC_IMPL(__imp__sub_83BB47C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB47C8"))) PPC_WEAK_FUNC(sub_83BB47C8);
PPC_FUNC_IMPL(__imp__sub_83BB47C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19008
	ctx.r3.s64 = ctx.r11.s64 + -19008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB47D4"))) PPC_WEAK_FUNC(sub_83BB47D4);
PPC_FUNC_IMPL(__imp__sub_83BB47D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB47D8"))) PPC_WEAK_FUNC(sub_83BB47D8);
PPC_FUNC_IMPL(__imp__sub_83BB47D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-19000
	ctx.r3.s64 = ctx.r11.s64 + -19000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB47E4"))) PPC_WEAK_FUNC(sub_83BB47E4);
PPC_FUNC_IMPL(__imp__sub_83BB47E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB47E8"))) PPC_WEAK_FUNC(sub_83BB47E8);
PPC_FUNC_IMPL(__imp__sub_83BB47E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18992
	ctx.r3.s64 = ctx.r11.s64 + -18992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB47F4"))) PPC_WEAK_FUNC(sub_83BB47F4);
PPC_FUNC_IMPL(__imp__sub_83BB47F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB47F8"))) PPC_WEAK_FUNC(sub_83BB47F8);
PPC_FUNC_IMPL(__imp__sub_83BB47F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18984
	ctx.r3.s64 = ctx.r11.s64 + -18984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4804"))) PPC_WEAK_FUNC(sub_83BB4804);
PPC_FUNC_IMPL(__imp__sub_83BB4804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4808"))) PPC_WEAK_FUNC(sub_83BB4808);
PPC_FUNC_IMPL(__imp__sub_83BB4808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18976
	ctx.r3.s64 = ctx.r11.s64 + -18976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4814"))) PPC_WEAK_FUNC(sub_83BB4814);
PPC_FUNC_IMPL(__imp__sub_83BB4814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4818"))) PPC_WEAK_FUNC(sub_83BB4818);
PPC_FUNC_IMPL(__imp__sub_83BB4818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18968
	ctx.r3.s64 = ctx.r11.s64 + -18968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4824"))) PPC_WEAK_FUNC(sub_83BB4824);
PPC_FUNC_IMPL(__imp__sub_83BB4824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4828"))) PPC_WEAK_FUNC(sub_83BB4828);
PPC_FUNC_IMPL(__imp__sub_83BB4828) {
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
	// addi r3,r11,-4736
	ctx.r3.s64 = ctx.r11.s64 + -4736;
	// bl 0x83523120
	ctx.lr = 0x83BB4840;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18960
	ctx.r3.s64 = ctx.r10.s64 + -18960;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB484C;
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

__attribute__((alias("__imp__sub_83BB485C"))) PPC_WEAK_FUNC(sub_83BB485C);
PPC_FUNC_IMPL(__imp__sub_83BB485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4860"))) PPC_WEAK_FUNC(sub_83BB4860);
PPC_FUNC_IMPL(__imp__sub_83BB4860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4720
	ctx.r7.s64 = ctx.r8.s64 + -4720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB4888"))) PPC_WEAK_FUNC(sub_83BB4888);
PPC_FUNC_IMPL(__imp__sub_83BB4888) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-18636
	ctx.r6.s64 = ctx.r7.s64 + -18636;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18708(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18708);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4720);
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
	// std r9,-18636(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18636, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB48D0"))) PPC_WEAK_FUNC(sub_83BB48D0);
PPC_FUNC_IMPL(__imp__sub_83BB48D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB48DC"))) PPC_WEAK_FUNC(sub_83BB48DC);
PPC_FUNC_IMPL(__imp__sub_83BB48DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB48E0"))) PPC_WEAK_FUNC(sub_83BB48E0);
PPC_FUNC_IMPL(__imp__sub_83BB48E0) {
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
	// addi r3,r11,-4712
	ctx.r3.s64 = ctx.r11.s64 + -4712;
	// bl 0x8259af80
	ctx.lr = 0x83BB48F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18928
	ctx.r3.s64 = ctx.r10.s64 + -18928;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4904;
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

__attribute__((alias("__imp__sub_83BB4914"))) PPC_WEAK_FUNC(sub_83BB4914);
PPC_FUNC_IMPL(__imp__sub_83BB4914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4918"))) PPC_WEAK_FUNC(sub_83BB4918);
PPC_FUNC_IMPL(__imp__sub_83BB4918) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4732
	ctx.r11.s64 = ctx.r8.s64 + -4732;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-18660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18660);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18936
	ctx.r3.s64 = ctx.r6.s64 + -18936;
	// stw r10,-4732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4948"))) PPC_WEAK_FUNC(sub_83BB4948);
PPC_FUNC_IMPL(__imp__sub_83BB4948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4954"))) PPC_WEAK_FUNC(sub_83BB4954);
PPC_FUNC_IMPL(__imp__sub_83BB4954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4958"))) PPC_WEAK_FUNC(sub_83BB4958);
PPC_FUNC_IMPL(__imp__sub_83BB4958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18912
	ctx.r3.s64 = ctx.r11.s64 + -18912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4964"))) PPC_WEAK_FUNC(sub_83BB4964);
PPC_FUNC_IMPL(__imp__sub_83BB4964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4968"))) PPC_WEAK_FUNC(sub_83BB4968);
PPC_FUNC_IMPL(__imp__sub_83BB4968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18904
	ctx.r3.s64 = ctx.r11.s64 + -18904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4974"))) PPC_WEAK_FUNC(sub_83BB4974);
PPC_FUNC_IMPL(__imp__sub_83BB4974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4978"))) PPC_WEAK_FUNC(sub_83BB4978);
PPC_FUNC_IMPL(__imp__sub_83BB4978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18896
	ctx.r3.s64 = ctx.r11.s64 + -18896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4984"))) PPC_WEAK_FUNC(sub_83BB4984);
PPC_FUNC_IMPL(__imp__sub_83BB4984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4988"))) PPC_WEAK_FUNC(sub_83BB4988);
PPC_FUNC_IMPL(__imp__sub_83BB4988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18888
	ctx.r3.s64 = ctx.r11.s64 + -18888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4994"))) PPC_WEAK_FUNC(sub_83BB4994);
PPC_FUNC_IMPL(__imp__sub_83BB4994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4998"))) PPC_WEAK_FUNC(sub_83BB4998);
PPC_FUNC_IMPL(__imp__sub_83BB4998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18880
	ctx.r3.s64 = ctx.r11.s64 + -18880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB49A4"))) PPC_WEAK_FUNC(sub_83BB49A4);
PPC_FUNC_IMPL(__imp__sub_83BB49A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB49A8"))) PPC_WEAK_FUNC(sub_83BB49A8);
PPC_FUNC_IMPL(__imp__sub_83BB49A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18872
	ctx.r3.s64 = ctx.r11.s64 + -18872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB49B4"))) PPC_WEAK_FUNC(sub_83BB49B4);
PPC_FUNC_IMPL(__imp__sub_83BB49B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB49B8"))) PPC_WEAK_FUNC(sub_83BB49B8);
PPC_FUNC_IMPL(__imp__sub_83BB49B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18864
	ctx.r3.s64 = ctx.r11.s64 + -18864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB49C4"))) PPC_WEAK_FUNC(sub_83BB49C4);
PPC_FUNC_IMPL(__imp__sub_83BB49C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB49C8"))) PPC_WEAK_FUNC(sub_83BB49C8);
PPC_FUNC_IMPL(__imp__sub_83BB49C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18856
	ctx.r3.s64 = ctx.r11.s64 + -18856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB49D4"))) PPC_WEAK_FUNC(sub_83BB49D4);
PPC_FUNC_IMPL(__imp__sub_83BB49D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB49D8"))) PPC_WEAK_FUNC(sub_83BB49D8);
PPC_FUNC_IMPL(__imp__sub_83BB49D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18848
	ctx.r3.s64 = ctx.r11.s64 + -18848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB49E4"))) PPC_WEAK_FUNC(sub_83BB49E4);
PPC_FUNC_IMPL(__imp__sub_83BB49E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB49E8"))) PPC_WEAK_FUNC(sub_83BB49E8);
PPC_FUNC_IMPL(__imp__sub_83BB49E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18840
	ctx.r3.s64 = ctx.r11.s64 + -18840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB49F4"))) PPC_WEAK_FUNC(sub_83BB49F4);
PPC_FUNC_IMPL(__imp__sub_83BB49F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB49F8"))) PPC_WEAK_FUNC(sub_83BB49F8);
PPC_FUNC_IMPL(__imp__sub_83BB49F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4A04"))) PPC_WEAK_FUNC(sub_83BB4A04);
PPC_FUNC_IMPL(__imp__sub_83BB4A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4A08"))) PPC_WEAK_FUNC(sub_83BB4A08);
PPC_FUNC_IMPL(__imp__sub_83BB4A08) {
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
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
	// bl 0x83523120
	ctx.lr = 0x83BB4A20;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18824
	ctx.r3.s64 = ctx.r10.s64 + -18824;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4A2C;
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

__attribute__((alias("__imp__sub_83BB4A3C"))) PPC_WEAK_FUNC(sub_83BB4A3C);
PPC_FUNC_IMPL(__imp__sub_83BB4A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4A40"))) PPC_WEAK_FUNC(sub_83BB4A40);
PPC_FUNC_IMPL(__imp__sub_83BB4A40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4352
	ctx.r7.s64 = ctx.r8.s64 + -4352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4352(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB4A68"))) PPC_WEAK_FUNC(sub_83BB4A68);
PPC_FUNC_IMPL(__imp__sub_83BB4A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-18504
	ctx.r6.s64 = ctx.r7.s64 + -18504;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18576(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18576);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4352);
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
	// std r9,-18504(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB4AB0"))) PPC_WEAK_FUNC(sub_83BB4AB0);
PPC_FUNC_IMPL(__imp__sub_83BB4AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18808
	ctx.r3.s64 = ctx.r11.s64 + -18808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4ABC"))) PPC_WEAK_FUNC(sub_83BB4ABC);
PPC_FUNC_IMPL(__imp__sub_83BB4ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4AC0"))) PPC_WEAK_FUNC(sub_83BB4AC0);
PPC_FUNC_IMPL(__imp__sub_83BB4AC0) {
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
	// addi r3,r11,-4344
	ctx.r3.s64 = ctx.r11.s64 + -4344;
	// bl 0x8259af80
	ctx.lr = 0x83BB4AD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18792
	ctx.r3.s64 = ctx.r10.s64 + -18792;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4AE4;
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

__attribute__((alias("__imp__sub_83BB4AF4"))) PPC_WEAK_FUNC(sub_83BB4AF4);
PPC_FUNC_IMPL(__imp__sub_83BB4AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4AF8"))) PPC_WEAK_FUNC(sub_83BB4AF8);
PPC_FUNC_IMPL(__imp__sub_83BB4AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4364
	ctx.r11.s64 = ctx.r8.s64 + -4364;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-18528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18528);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18800
	ctx.r3.s64 = ctx.r6.s64 + -18800;
	// stw r10,-4364(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4364, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4B28"))) PPC_WEAK_FUNC(sub_83BB4B28);
PPC_FUNC_IMPL(__imp__sub_83BB4B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18784
	ctx.r3.s64 = ctx.r11.s64 + -18784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4B34"))) PPC_WEAK_FUNC(sub_83BB4B34);
PPC_FUNC_IMPL(__imp__sub_83BB4B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4B38"))) PPC_WEAK_FUNC(sub_83BB4B38);
PPC_FUNC_IMPL(__imp__sub_83BB4B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18776
	ctx.r3.s64 = ctx.r11.s64 + -18776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4B44"))) PPC_WEAK_FUNC(sub_83BB4B44);
PPC_FUNC_IMPL(__imp__sub_83BB4B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4B48"))) PPC_WEAK_FUNC(sub_83BB4B48);
PPC_FUNC_IMPL(__imp__sub_83BB4B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18768
	ctx.r3.s64 = ctx.r11.s64 + -18768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4B54"))) PPC_WEAK_FUNC(sub_83BB4B54);
PPC_FUNC_IMPL(__imp__sub_83BB4B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4B58"))) PPC_WEAK_FUNC(sub_83BB4B58);
PPC_FUNC_IMPL(__imp__sub_83BB4B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18760
	ctx.r3.s64 = ctx.r11.s64 + -18760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4B64"))) PPC_WEAK_FUNC(sub_83BB4B64);
PPC_FUNC_IMPL(__imp__sub_83BB4B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4B68"))) PPC_WEAK_FUNC(sub_83BB4B68);
PPC_FUNC_IMPL(__imp__sub_83BB4B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18752
	ctx.r3.s64 = ctx.r11.s64 + -18752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4B74"))) PPC_WEAK_FUNC(sub_83BB4B74);
PPC_FUNC_IMPL(__imp__sub_83BB4B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4B78"))) PPC_WEAK_FUNC(sub_83BB4B78);
PPC_FUNC_IMPL(__imp__sub_83BB4B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18744
	ctx.r3.s64 = ctx.r11.s64 + -18744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4B84"))) PPC_WEAK_FUNC(sub_83BB4B84);
PPC_FUNC_IMPL(__imp__sub_83BB4B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4B88"))) PPC_WEAK_FUNC(sub_83BB4B88);
PPC_FUNC_IMPL(__imp__sub_83BB4B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18736
	ctx.r3.s64 = ctx.r11.s64 + -18736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4B94"))) PPC_WEAK_FUNC(sub_83BB4B94);
PPC_FUNC_IMPL(__imp__sub_83BB4B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4B98"))) PPC_WEAK_FUNC(sub_83BB4B98);
PPC_FUNC_IMPL(__imp__sub_83BB4B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18728
	ctx.r3.s64 = ctx.r11.s64 + -18728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4BA4"))) PPC_WEAK_FUNC(sub_83BB4BA4);
PPC_FUNC_IMPL(__imp__sub_83BB4BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4BA8"))) PPC_WEAK_FUNC(sub_83BB4BA8);
PPC_FUNC_IMPL(__imp__sub_83BB4BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4BB4"))) PPC_WEAK_FUNC(sub_83BB4BB4);
PPC_FUNC_IMPL(__imp__sub_83BB4BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4BB8"))) PPC_WEAK_FUNC(sub_83BB4BB8);
PPC_FUNC_IMPL(__imp__sub_83BB4BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18712
	ctx.r3.s64 = ctx.r11.s64 + -18712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4BC4"))) PPC_WEAK_FUNC(sub_83BB4BC4);
PPC_FUNC_IMPL(__imp__sub_83BB4BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4BC8"))) PPC_WEAK_FUNC(sub_83BB4BC8);
PPC_FUNC_IMPL(__imp__sub_83BB4BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4BD4"))) PPC_WEAK_FUNC(sub_83BB4BD4);
PPC_FUNC_IMPL(__imp__sub_83BB4BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4BD8"))) PPC_WEAK_FUNC(sub_83BB4BD8);
PPC_FUNC_IMPL(__imp__sub_83BB4BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18696
	ctx.r3.s64 = ctx.r11.s64 + -18696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4BE4"))) PPC_WEAK_FUNC(sub_83BB4BE4);
PPC_FUNC_IMPL(__imp__sub_83BB4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4BE8"))) PPC_WEAK_FUNC(sub_83BB4BE8);
PPC_FUNC_IMPL(__imp__sub_83BB4BE8) {
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
	// addi r3,r11,-4000
	ctx.r3.s64 = ctx.r11.s64 + -4000;
	// bl 0x83523120
	ctx.lr = 0x83BB4C00;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18688
	ctx.r3.s64 = ctx.r10.s64 + -18688;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4C0C;
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

__attribute__((alias("__imp__sub_83BB4C1C"))) PPC_WEAK_FUNC(sub_83BB4C1C);
PPC_FUNC_IMPL(__imp__sub_83BB4C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4C20"))) PPC_WEAK_FUNC(sub_83BB4C20);
PPC_FUNC_IMPL(__imp__sub_83BB4C20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3984
	ctx.r7.s64 = ctx.r8.s64 + -3984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3984(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB4C48"))) PPC_WEAK_FUNC(sub_83BB4C48);
PPC_FUNC_IMPL(__imp__sub_83BB4C48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-18336
	ctx.r6.s64 = ctx.r7.s64 + -18336;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3984(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3984);
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
	// std r9,-18336(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18336, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB4C90"))) PPC_WEAK_FUNC(sub_83BB4C90);
PPC_FUNC_IMPL(__imp__sub_83BB4C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18672
	ctx.r3.s64 = ctx.r11.s64 + -18672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4C9C"))) PPC_WEAK_FUNC(sub_83BB4C9C);
PPC_FUNC_IMPL(__imp__sub_83BB4C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4CA0"))) PPC_WEAK_FUNC(sub_83BB4CA0);
PPC_FUNC_IMPL(__imp__sub_83BB4CA0) {
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
	// addi r3,r11,-3976
	ctx.r3.s64 = ctx.r11.s64 + -3976;
	// bl 0x8259af80
	ctx.lr = 0x83BB4CB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18656
	ctx.r3.s64 = ctx.r10.s64 + -18656;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4CC4;
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

__attribute__((alias("__imp__sub_83BB4CD4"))) PPC_WEAK_FUNC(sub_83BB4CD4);
PPC_FUNC_IMPL(__imp__sub_83BB4CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4CD8"))) PPC_WEAK_FUNC(sub_83BB4CD8);
PPC_FUNC_IMPL(__imp__sub_83BB4CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3996
	ctx.r11.s64 = ctx.r8.s64 + -3996;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-18360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18360);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18664
	ctx.r3.s64 = ctx.r6.s64 + -18664;
	// stw r10,-3996(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3996, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D08"))) PPC_WEAK_FUNC(sub_83BB4D08);
PPC_FUNC_IMPL(__imp__sub_83BB4D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18648
	ctx.r3.s64 = ctx.r11.s64 + -18648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D14"))) PPC_WEAK_FUNC(sub_83BB4D14);
PPC_FUNC_IMPL(__imp__sub_83BB4D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D18"))) PPC_WEAK_FUNC(sub_83BB4D18);
PPC_FUNC_IMPL(__imp__sub_83BB4D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18640
	ctx.r3.s64 = ctx.r11.s64 + -18640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D24"))) PPC_WEAK_FUNC(sub_83BB4D24);
PPC_FUNC_IMPL(__imp__sub_83BB4D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D28"))) PPC_WEAK_FUNC(sub_83BB4D28);
PPC_FUNC_IMPL(__imp__sub_83BB4D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18632
	ctx.r3.s64 = ctx.r11.s64 + -18632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D34"))) PPC_WEAK_FUNC(sub_83BB4D34);
PPC_FUNC_IMPL(__imp__sub_83BB4D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D38"))) PPC_WEAK_FUNC(sub_83BB4D38);
PPC_FUNC_IMPL(__imp__sub_83BB4D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18624
	ctx.r3.s64 = ctx.r11.s64 + -18624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D44"))) PPC_WEAK_FUNC(sub_83BB4D44);
PPC_FUNC_IMPL(__imp__sub_83BB4D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D48"))) PPC_WEAK_FUNC(sub_83BB4D48);
PPC_FUNC_IMPL(__imp__sub_83BB4D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D54"))) PPC_WEAK_FUNC(sub_83BB4D54);
PPC_FUNC_IMPL(__imp__sub_83BB4D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D58"))) PPC_WEAK_FUNC(sub_83BB4D58);
PPC_FUNC_IMPL(__imp__sub_83BB4D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18608
	ctx.r3.s64 = ctx.r11.s64 + -18608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D64"))) PPC_WEAK_FUNC(sub_83BB4D64);
PPC_FUNC_IMPL(__imp__sub_83BB4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D68"))) PPC_WEAK_FUNC(sub_83BB4D68);
PPC_FUNC_IMPL(__imp__sub_83BB4D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18600
	ctx.r3.s64 = ctx.r11.s64 + -18600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D74"))) PPC_WEAK_FUNC(sub_83BB4D74);
PPC_FUNC_IMPL(__imp__sub_83BB4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D78"))) PPC_WEAK_FUNC(sub_83BB4D78);
PPC_FUNC_IMPL(__imp__sub_83BB4D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D84"))) PPC_WEAK_FUNC(sub_83BB4D84);
PPC_FUNC_IMPL(__imp__sub_83BB4D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D88"))) PPC_WEAK_FUNC(sub_83BB4D88);
PPC_FUNC_IMPL(__imp__sub_83BB4D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18584
	ctx.r3.s64 = ctx.r11.s64 + -18584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4D94"))) PPC_WEAK_FUNC(sub_83BB4D94);
PPC_FUNC_IMPL(__imp__sub_83BB4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4D98"))) PPC_WEAK_FUNC(sub_83BB4D98);
PPC_FUNC_IMPL(__imp__sub_83BB4D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4DA4"))) PPC_WEAK_FUNC(sub_83BB4DA4);
PPC_FUNC_IMPL(__imp__sub_83BB4DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4DA8"))) PPC_WEAK_FUNC(sub_83BB4DA8);
PPC_FUNC_IMPL(__imp__sub_83BB4DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18568
	ctx.r3.s64 = ctx.r11.s64 + -18568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4DB4"))) PPC_WEAK_FUNC(sub_83BB4DB4);
PPC_FUNC_IMPL(__imp__sub_83BB4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4DB8"))) PPC_WEAK_FUNC(sub_83BB4DB8);
PPC_FUNC_IMPL(__imp__sub_83BB4DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4DC4"))) PPC_WEAK_FUNC(sub_83BB4DC4);
PPC_FUNC_IMPL(__imp__sub_83BB4DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4DC8"))) PPC_WEAK_FUNC(sub_83BB4DC8);
PPC_FUNC_IMPL(__imp__sub_83BB4DC8) {
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
	// addi r3,r11,-3632
	ctx.r3.s64 = ctx.r11.s64 + -3632;
	// bl 0x83523120
	ctx.lr = 0x83BB4DE0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18552
	ctx.r3.s64 = ctx.r10.s64 + -18552;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4DEC;
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

__attribute__((alias("__imp__sub_83BB4DFC"))) PPC_WEAK_FUNC(sub_83BB4DFC);
PPC_FUNC_IMPL(__imp__sub_83BB4DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4E00"))) PPC_WEAK_FUNC(sub_83BB4E00);
PPC_FUNC_IMPL(__imp__sub_83BB4E00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3616
	ctx.r7.s64 = ctx.r8.s64 + -3616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3616(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB4E28"))) PPC_WEAK_FUNC(sub_83BB4E28);
PPC_FUNC_IMPL(__imp__sub_83BB4E28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-18196
	ctx.r6.s64 = ctx.r7.s64 + -18196;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18268(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18268);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3616);
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
	// std r9,-18196(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18196, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB4E70"))) PPC_WEAK_FUNC(sub_83BB4E70);
PPC_FUNC_IMPL(__imp__sub_83BB4E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18536
	ctx.r3.s64 = ctx.r11.s64 + -18536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4E7C"))) PPC_WEAK_FUNC(sub_83BB4E7C);
PPC_FUNC_IMPL(__imp__sub_83BB4E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4E80"))) PPC_WEAK_FUNC(sub_83BB4E80);
PPC_FUNC_IMPL(__imp__sub_83BB4E80) {
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
	// addi r3,r11,-3608
	ctx.r3.s64 = ctx.r11.s64 + -3608;
	// bl 0x8259af80
	ctx.lr = 0x83BB4E98;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18520
	ctx.r3.s64 = ctx.r10.s64 + -18520;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4EA4;
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

__attribute__((alias("__imp__sub_83BB4EB4"))) PPC_WEAK_FUNC(sub_83BB4EB4);
PPC_FUNC_IMPL(__imp__sub_83BB4EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4EB8"))) PPC_WEAK_FUNC(sub_83BB4EB8);
PPC_FUNC_IMPL(__imp__sub_83BB4EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3628
	ctx.r11.s64 = ctx.r8.s64 + -3628;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-18220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18220);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18528
	ctx.r3.s64 = ctx.r6.s64 + -18528;
	// stw r10,-3628(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4EE8"))) PPC_WEAK_FUNC(sub_83BB4EE8);
PPC_FUNC_IMPL(__imp__sub_83BB4EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4EF4"))) PPC_WEAK_FUNC(sub_83BB4EF4);
PPC_FUNC_IMPL(__imp__sub_83BB4EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4EF8"))) PPC_WEAK_FUNC(sub_83BB4EF8);
PPC_FUNC_IMPL(__imp__sub_83BB4EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18504
	ctx.r3.s64 = ctx.r11.s64 + -18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F04"))) PPC_WEAK_FUNC(sub_83BB4F04);
PPC_FUNC_IMPL(__imp__sub_83BB4F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F08"))) PPC_WEAK_FUNC(sub_83BB4F08);
PPC_FUNC_IMPL(__imp__sub_83BB4F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F14"))) PPC_WEAK_FUNC(sub_83BB4F14);
PPC_FUNC_IMPL(__imp__sub_83BB4F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F18"))) PPC_WEAK_FUNC(sub_83BB4F18);
PPC_FUNC_IMPL(__imp__sub_83BB4F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F24"))) PPC_WEAK_FUNC(sub_83BB4F24);
PPC_FUNC_IMPL(__imp__sub_83BB4F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F28"))) PPC_WEAK_FUNC(sub_83BB4F28);
PPC_FUNC_IMPL(__imp__sub_83BB4F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18480
	ctx.r3.s64 = ctx.r11.s64 + -18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F34"))) PPC_WEAK_FUNC(sub_83BB4F34);
PPC_FUNC_IMPL(__imp__sub_83BB4F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F38"))) PPC_WEAK_FUNC(sub_83BB4F38);
PPC_FUNC_IMPL(__imp__sub_83BB4F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18472
	ctx.r3.s64 = ctx.r11.s64 + -18472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F44"))) PPC_WEAK_FUNC(sub_83BB4F44);
PPC_FUNC_IMPL(__imp__sub_83BB4F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F48"))) PPC_WEAK_FUNC(sub_83BB4F48);
PPC_FUNC_IMPL(__imp__sub_83BB4F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18464
	ctx.r3.s64 = ctx.r11.s64 + -18464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F54"))) PPC_WEAK_FUNC(sub_83BB4F54);
PPC_FUNC_IMPL(__imp__sub_83BB4F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F58"))) PPC_WEAK_FUNC(sub_83BB4F58);
PPC_FUNC_IMPL(__imp__sub_83BB4F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18456
	ctx.r3.s64 = ctx.r11.s64 + -18456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F64"))) PPC_WEAK_FUNC(sub_83BB4F64);
PPC_FUNC_IMPL(__imp__sub_83BB4F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F68"))) PPC_WEAK_FUNC(sub_83BB4F68);
PPC_FUNC_IMPL(__imp__sub_83BB4F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18448
	ctx.r3.s64 = ctx.r11.s64 + -18448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F74"))) PPC_WEAK_FUNC(sub_83BB4F74);
PPC_FUNC_IMPL(__imp__sub_83BB4F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F78"))) PPC_WEAK_FUNC(sub_83BB4F78);
PPC_FUNC_IMPL(__imp__sub_83BB4F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18440
	ctx.r3.s64 = ctx.r11.s64 + -18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F84"))) PPC_WEAK_FUNC(sub_83BB4F84);
PPC_FUNC_IMPL(__imp__sub_83BB4F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F88"))) PPC_WEAK_FUNC(sub_83BB4F88);
PPC_FUNC_IMPL(__imp__sub_83BB4F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4F94"))) PPC_WEAK_FUNC(sub_83BB4F94);
PPC_FUNC_IMPL(__imp__sub_83BB4F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4F98"))) PPC_WEAK_FUNC(sub_83BB4F98);
PPC_FUNC_IMPL(__imp__sub_83BB4F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18424
	ctx.r3.s64 = ctx.r11.s64 + -18424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB4FA4"))) PPC_WEAK_FUNC(sub_83BB4FA4);
PPC_FUNC_IMPL(__imp__sub_83BB4FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4FA8"))) PPC_WEAK_FUNC(sub_83BB4FA8);
PPC_FUNC_IMPL(__imp__sub_83BB4FA8) {
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
	// addi r3,r11,-3264
	ctx.r3.s64 = ctx.r11.s64 + -3264;
	// bl 0x83523120
	ctx.lr = 0x83BB4FC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18416
	ctx.r3.s64 = ctx.r10.s64 + -18416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB4FCC;
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

__attribute__((alias("__imp__sub_83BB4FDC"))) PPC_WEAK_FUNC(sub_83BB4FDC);
PPC_FUNC_IMPL(__imp__sub_83BB4FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB4FE0"))) PPC_WEAK_FUNC(sub_83BB4FE0);
PPC_FUNC_IMPL(__imp__sub_83BB4FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3248
	ctx.r7.s64 = ctx.r8.s64 + -3248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3248(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5008"))) PPC_WEAK_FUNC(sub_83BB5008);
PPC_FUNC_IMPL(__imp__sub_83BB5008) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-18064
	ctx.r6.s64 = ctx.r7.s64 + -18064;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18136(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18136);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3248(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3248);
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
	// std r9,-18064(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18064, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5050"))) PPC_WEAK_FUNC(sub_83BB5050);
PPC_FUNC_IMPL(__imp__sub_83BB5050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18400
	ctx.r3.s64 = ctx.r11.s64 + -18400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB505C"))) PPC_WEAK_FUNC(sub_83BB505C);
PPC_FUNC_IMPL(__imp__sub_83BB505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5060"))) PPC_WEAK_FUNC(sub_83BB5060);
PPC_FUNC_IMPL(__imp__sub_83BB5060) {
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
	// addi r3,r11,-3240
	ctx.r3.s64 = ctx.r11.s64 + -3240;
	// bl 0x8259af80
	ctx.lr = 0x83BB5078;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18384
	ctx.r3.s64 = ctx.r10.s64 + -18384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5084;
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

__attribute__((alias("__imp__sub_83BB5094"))) PPC_WEAK_FUNC(sub_83BB5094);
PPC_FUNC_IMPL(__imp__sub_83BB5094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5098"))) PPC_WEAK_FUNC(sub_83BB5098);
PPC_FUNC_IMPL(__imp__sub_83BB5098) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3260
	ctx.r11.s64 = ctx.r8.s64 + -3260;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-18088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18088);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18392
	ctx.r3.s64 = ctx.r6.s64 + -18392;
	// stw r10,-3260(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3260, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB50C8"))) PPC_WEAK_FUNC(sub_83BB50C8);
PPC_FUNC_IMPL(__imp__sub_83BB50C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18376
	ctx.r3.s64 = ctx.r11.s64 + -18376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB50D4"))) PPC_WEAK_FUNC(sub_83BB50D4);
PPC_FUNC_IMPL(__imp__sub_83BB50D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB50D8"))) PPC_WEAK_FUNC(sub_83BB50D8);
PPC_FUNC_IMPL(__imp__sub_83BB50D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18368
	ctx.r3.s64 = ctx.r11.s64 + -18368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB50E4"))) PPC_WEAK_FUNC(sub_83BB50E4);
PPC_FUNC_IMPL(__imp__sub_83BB50E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB50E8"))) PPC_WEAK_FUNC(sub_83BB50E8);
PPC_FUNC_IMPL(__imp__sub_83BB50E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB50F4"))) PPC_WEAK_FUNC(sub_83BB50F4);
PPC_FUNC_IMPL(__imp__sub_83BB50F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB50F8"))) PPC_WEAK_FUNC(sub_83BB50F8);
PPC_FUNC_IMPL(__imp__sub_83BB50F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5104"))) PPC_WEAK_FUNC(sub_83BB5104);
PPC_FUNC_IMPL(__imp__sub_83BB5104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5108"))) PPC_WEAK_FUNC(sub_83BB5108);
PPC_FUNC_IMPL(__imp__sub_83BB5108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5114"))) PPC_WEAK_FUNC(sub_83BB5114);
PPC_FUNC_IMPL(__imp__sub_83BB5114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5118"))) PPC_WEAK_FUNC(sub_83BB5118);
PPC_FUNC_IMPL(__imp__sub_83BB5118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5124"))) PPC_WEAK_FUNC(sub_83BB5124);
PPC_FUNC_IMPL(__imp__sub_83BB5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5128"))) PPC_WEAK_FUNC(sub_83BB5128);
PPC_FUNC_IMPL(__imp__sub_83BB5128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5134"))) PPC_WEAK_FUNC(sub_83BB5134);
PPC_FUNC_IMPL(__imp__sub_83BB5134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5138"))) PPC_WEAK_FUNC(sub_83BB5138);
PPC_FUNC_IMPL(__imp__sub_83BB5138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18320
	ctx.r3.s64 = ctx.r11.s64 + -18320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5144"))) PPC_WEAK_FUNC(sub_83BB5144);
PPC_FUNC_IMPL(__imp__sub_83BB5144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5148"))) PPC_WEAK_FUNC(sub_83BB5148);
PPC_FUNC_IMPL(__imp__sub_83BB5148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18312
	ctx.r3.s64 = ctx.r11.s64 + -18312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5154"))) PPC_WEAK_FUNC(sub_83BB5154);
PPC_FUNC_IMPL(__imp__sub_83BB5154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5158"))) PPC_WEAK_FUNC(sub_83BB5158);
PPC_FUNC_IMPL(__imp__sub_83BB5158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5164"))) PPC_WEAK_FUNC(sub_83BB5164);
PPC_FUNC_IMPL(__imp__sub_83BB5164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5168"))) PPC_WEAK_FUNC(sub_83BB5168);
PPC_FUNC_IMPL(__imp__sub_83BB5168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18296
	ctx.r3.s64 = ctx.r11.s64 + -18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5174"))) PPC_WEAK_FUNC(sub_83BB5174);
PPC_FUNC_IMPL(__imp__sub_83BB5174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5178"))) PPC_WEAK_FUNC(sub_83BB5178);
PPC_FUNC_IMPL(__imp__sub_83BB5178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5184"))) PPC_WEAK_FUNC(sub_83BB5184);
PPC_FUNC_IMPL(__imp__sub_83BB5184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5188"))) PPC_WEAK_FUNC(sub_83BB5188);
PPC_FUNC_IMPL(__imp__sub_83BB5188) {
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
	// addi r3,r11,-2896
	ctx.r3.s64 = ctx.r11.s64 + -2896;
	// bl 0x83523120
	ctx.lr = 0x83BB51A0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18280
	ctx.r3.s64 = ctx.r10.s64 + -18280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB51AC;
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

__attribute__((alias("__imp__sub_83BB51BC"))) PPC_WEAK_FUNC(sub_83BB51BC);
PPC_FUNC_IMPL(__imp__sub_83BB51BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB51C0"))) PPC_WEAK_FUNC(sub_83BB51C0);
PPC_FUNC_IMPL(__imp__sub_83BB51C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2880
	ctx.r7.s64 = ctx.r8.s64 + -2880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB51E8"))) PPC_WEAK_FUNC(sub_83BB51E8);
PPC_FUNC_IMPL(__imp__sub_83BB51E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-17932
	ctx.r6.s64 = ctx.r7.s64 + -17932;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18004(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18004);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2880);
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
	// std r9,-17932(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17932, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB5230"))) PPC_WEAK_FUNC(sub_83BB5230);
PPC_FUNC_IMPL(__imp__sub_83BB5230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18264
	ctx.r3.s64 = ctx.r11.s64 + -18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB523C"))) PPC_WEAK_FUNC(sub_83BB523C);
PPC_FUNC_IMPL(__imp__sub_83BB523C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5240"))) PPC_WEAK_FUNC(sub_83BB5240);
PPC_FUNC_IMPL(__imp__sub_83BB5240) {
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
	// addi r3,r11,-2872
	ctx.r3.s64 = ctx.r11.s64 + -2872;
	// bl 0x8259af80
	ctx.lr = 0x83BB5258;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-18248
	ctx.r3.s64 = ctx.r10.s64 + -18248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB5264;
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

__attribute__((alias("__imp__sub_83BB5274"))) PPC_WEAK_FUNC(sub_83BB5274);
PPC_FUNC_IMPL(__imp__sub_83BB5274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5278"))) PPC_WEAK_FUNC(sub_83BB5278);
PPC_FUNC_IMPL(__imp__sub_83BB5278) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2892
	ctx.r11.s64 = ctx.r8.s64 + -2892;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-17956(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17956);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18256
	ctx.r3.s64 = ctx.r6.s64 + -18256;
	// stw r10,-2892(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB52A8"))) PPC_WEAK_FUNC(sub_83BB52A8);
PPC_FUNC_IMPL(__imp__sub_83BB52A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18240
	ctx.r3.s64 = ctx.r11.s64 + -18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB52B4"))) PPC_WEAK_FUNC(sub_83BB52B4);
PPC_FUNC_IMPL(__imp__sub_83BB52B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB52B8"))) PPC_WEAK_FUNC(sub_83BB52B8);
PPC_FUNC_IMPL(__imp__sub_83BB52B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18232
	ctx.r3.s64 = ctx.r11.s64 + -18232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB52C4"))) PPC_WEAK_FUNC(sub_83BB52C4);
PPC_FUNC_IMPL(__imp__sub_83BB52C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB52C8"))) PPC_WEAK_FUNC(sub_83BB52C8);
PPC_FUNC_IMPL(__imp__sub_83BB52C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18224
	ctx.r3.s64 = ctx.r11.s64 + -18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB52D4"))) PPC_WEAK_FUNC(sub_83BB52D4);
PPC_FUNC_IMPL(__imp__sub_83BB52D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB52D8"))) PPC_WEAK_FUNC(sub_83BB52D8);
PPC_FUNC_IMPL(__imp__sub_83BB52D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18216
	ctx.r3.s64 = ctx.r11.s64 + -18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB52E4"))) PPC_WEAK_FUNC(sub_83BB52E4);
PPC_FUNC_IMPL(__imp__sub_83BB52E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB52E8"))) PPC_WEAK_FUNC(sub_83BB52E8);
PPC_FUNC_IMPL(__imp__sub_83BB52E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18208
	ctx.r3.s64 = ctx.r11.s64 + -18208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB52F4"))) PPC_WEAK_FUNC(sub_83BB52F4);
PPC_FUNC_IMPL(__imp__sub_83BB52F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB52F8"))) PPC_WEAK_FUNC(sub_83BB52F8);
PPC_FUNC_IMPL(__imp__sub_83BB52F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18200
	ctx.r3.s64 = ctx.r11.s64 + -18200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5304"))) PPC_WEAK_FUNC(sub_83BB5304);
PPC_FUNC_IMPL(__imp__sub_83BB5304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5308"))) PPC_WEAK_FUNC(sub_83BB5308);
PPC_FUNC_IMPL(__imp__sub_83BB5308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18192
	ctx.r3.s64 = ctx.r11.s64 + -18192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5314"))) PPC_WEAK_FUNC(sub_83BB5314);
PPC_FUNC_IMPL(__imp__sub_83BB5314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5318"))) PPC_WEAK_FUNC(sub_83BB5318);
PPC_FUNC_IMPL(__imp__sub_83BB5318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18184
	ctx.r3.s64 = ctx.r11.s64 + -18184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB5324"))) PPC_WEAK_FUNC(sub_83BB5324);
PPC_FUNC_IMPL(__imp__sub_83BB5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB5328"))) PPC_WEAK_FUNC(sub_83BB5328);
PPC_FUNC_IMPL(__imp__sub_83BB5328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-18176
	ctx.r3.s64 = ctx.r11.s64 + -18176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

