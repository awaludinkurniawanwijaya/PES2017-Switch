#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BBB9D8"))) PPC_WEAK_FUNC(sub_83BBB9D8);
PPC_FUNC_IMPL(__imp__sub_83BBB9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17512
	ctx.r7.s64 = ctx.r8.s64 + 17512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBBA00"))) PPC_WEAK_FUNC(sub_83BBBA00);
PPC_FUNC_IMPL(__imp__sub_83BBBA00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-9356
	ctx.r6.s64 = ctx.r7.s64 + -9356;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17512);
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
	// std r9,-9356(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBBA48"))) PPC_WEAK_FUNC(sub_83BBBA48);
PPC_FUNC_IMPL(__imp__sub_83BBBA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10648
	ctx.r3.s64 = ctx.r11.s64 + -10648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBA54"))) PPC_WEAK_FUNC(sub_83BBBA54);
PPC_FUNC_IMPL(__imp__sub_83BBBA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBA58"))) PPC_WEAK_FUNC(sub_83BBBA58);
PPC_FUNC_IMPL(__imp__sub_83BBBA58) {
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
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// bl 0x8259af80
	ctx.lr = 0x83BBBA70;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-10632
	ctx.r3.s64 = ctx.r10.s64 + -10632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBBA7C;
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

__attribute__((alias("__imp__sub_83BBBA8C"))) PPC_WEAK_FUNC(sub_83BBBA8C);
PPC_FUNC_IMPL(__imp__sub_83BBBA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBA90"))) PPC_WEAK_FUNC(sub_83BBBA90);
PPC_FUNC_IMPL(__imp__sub_83BBBA90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17500
	ctx.r11.s64 = ctx.r8.s64 + 17500;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-9380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9380);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10640
	ctx.r3.s64 = ctx.r6.s64 + -10640;
	// stw r10,17500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBAC0"))) PPC_WEAK_FUNC(sub_83BBBAC0);
PPC_FUNC_IMPL(__imp__sub_83BBBAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBACC"))) PPC_WEAK_FUNC(sub_83BBBACC);
PPC_FUNC_IMPL(__imp__sub_83BBBACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBAD0"))) PPC_WEAK_FUNC(sub_83BBBAD0);
PPC_FUNC_IMPL(__imp__sub_83BBBAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBADC"))) PPC_WEAK_FUNC(sub_83BBBADC);
PPC_FUNC_IMPL(__imp__sub_83BBBADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBAE0"))) PPC_WEAK_FUNC(sub_83BBBAE0);
PPC_FUNC_IMPL(__imp__sub_83BBBAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10608
	ctx.r3.s64 = ctx.r11.s64 + -10608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBAEC"))) PPC_WEAK_FUNC(sub_83BBBAEC);
PPC_FUNC_IMPL(__imp__sub_83BBBAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBAF0"))) PPC_WEAK_FUNC(sub_83BBBAF0);
PPC_FUNC_IMPL(__imp__sub_83BBBAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10600
	ctx.r3.s64 = ctx.r11.s64 + -10600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBAFC"))) PPC_WEAK_FUNC(sub_83BBBAFC);
PPC_FUNC_IMPL(__imp__sub_83BBBAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB00"))) PPC_WEAK_FUNC(sub_83BBBB00);
PPC_FUNC_IMPL(__imp__sub_83BBBB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10592
	ctx.r3.s64 = ctx.r11.s64 + -10592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBB0C"))) PPC_WEAK_FUNC(sub_83BBBB0C);
PPC_FUNC_IMPL(__imp__sub_83BBBB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB10"))) PPC_WEAK_FUNC(sub_83BBBB10);
PPC_FUNC_IMPL(__imp__sub_83BBBB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10584
	ctx.r3.s64 = ctx.r11.s64 + -10584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBB1C"))) PPC_WEAK_FUNC(sub_83BBBB1C);
PPC_FUNC_IMPL(__imp__sub_83BBBB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB20"))) PPC_WEAK_FUNC(sub_83BBBB20);
PPC_FUNC_IMPL(__imp__sub_83BBBB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBB2C"))) PPC_WEAK_FUNC(sub_83BBBB2C);
PPC_FUNC_IMPL(__imp__sub_83BBBB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB30"))) PPC_WEAK_FUNC(sub_83BBBB30);
PPC_FUNC_IMPL(__imp__sub_83BBBB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10568
	ctx.r3.s64 = ctx.r11.s64 + -10568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBB3C"))) PPC_WEAK_FUNC(sub_83BBBB3C);
PPC_FUNC_IMPL(__imp__sub_83BBBB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB40"))) PPC_WEAK_FUNC(sub_83BBBB40);
PPC_FUNC_IMPL(__imp__sub_83BBBB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10560
	ctx.r3.s64 = ctx.r11.s64 + -10560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBB4C"))) PPC_WEAK_FUNC(sub_83BBBB4C);
PPC_FUNC_IMPL(__imp__sub_83BBBB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB50"))) PPC_WEAK_FUNC(sub_83BBBB50);
PPC_FUNC_IMPL(__imp__sub_83BBBB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10552
	ctx.r3.s64 = ctx.r11.s64 + -10552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBB5C"))) PPC_WEAK_FUNC(sub_83BBBB5C);
PPC_FUNC_IMPL(__imp__sub_83BBBB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB60"))) PPC_WEAK_FUNC(sub_83BBBB60);
PPC_FUNC_IMPL(__imp__sub_83BBBB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10544
	ctx.r3.s64 = ctx.r11.s64 + -10544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBB6C"))) PPC_WEAK_FUNC(sub_83BBBB6C);
PPC_FUNC_IMPL(__imp__sub_83BBBB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB70"))) PPC_WEAK_FUNC(sub_83BBBB70);
PPC_FUNC_IMPL(__imp__sub_83BBBB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10536
	ctx.r3.s64 = ctx.r11.s64 + -10536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBB7C"))) PPC_WEAK_FUNC(sub_83BBBB7C);
PPC_FUNC_IMPL(__imp__sub_83BBBB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBB80"))) PPC_WEAK_FUNC(sub_83BBBB80);
PPC_FUNC_IMPL(__imp__sub_83BBBB80) {
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
	// addi r3,r11,17864
	ctx.r3.s64 = ctx.r11.s64 + 17864;
	// bl 0x83523120
	ctx.lr = 0x83BBBB98;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-10528
	ctx.r3.s64 = ctx.r10.s64 + -10528;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBBBA4;
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

__attribute__((alias("__imp__sub_83BBBBB4"))) PPC_WEAK_FUNC(sub_83BBBBB4);
PPC_FUNC_IMPL(__imp__sub_83BBBBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBBB8"))) PPC_WEAK_FUNC(sub_83BBBBB8);
PPC_FUNC_IMPL(__imp__sub_83BBBBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17880
	ctx.r7.s64 = ctx.r8.s64 + 17880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBBBE0"))) PPC_WEAK_FUNC(sub_83BBBBE0);
PPC_FUNC_IMPL(__imp__sub_83BBBBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-9196
	ctx.r6.s64 = ctx.r7.s64 + -9196;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9268(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9268);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17880);
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
	// std r9,-9196(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9196, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBBC28"))) PPC_WEAK_FUNC(sub_83BBBC28);
PPC_FUNC_IMPL(__imp__sub_83BBBC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10512
	ctx.r3.s64 = ctx.r11.s64 + -10512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBC34"))) PPC_WEAK_FUNC(sub_83BBBC34);
PPC_FUNC_IMPL(__imp__sub_83BBBC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBC38"))) PPC_WEAK_FUNC(sub_83BBBC38);
PPC_FUNC_IMPL(__imp__sub_83BBBC38) {
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
	// addi r3,r11,17888
	ctx.r3.s64 = ctx.r11.s64 + 17888;
	// bl 0x8259af80
	ctx.lr = 0x83BBBC50;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-10496
	ctx.r3.s64 = ctx.r10.s64 + -10496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBBC5C;
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

__attribute__((alias("__imp__sub_83BBBC6C"))) PPC_WEAK_FUNC(sub_83BBBC6C);
PPC_FUNC_IMPL(__imp__sub_83BBBC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBC70"))) PPC_WEAK_FUNC(sub_83BBBC70);
PPC_FUNC_IMPL(__imp__sub_83BBBC70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17868
	ctx.r11.s64 = ctx.r8.s64 + 17868;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-9220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9220);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10504
	ctx.r3.s64 = ctx.r6.s64 + -10504;
	// stw r10,17868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBCA0"))) PPC_WEAK_FUNC(sub_83BBBCA0);
PPC_FUNC_IMPL(__imp__sub_83BBBCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10488
	ctx.r3.s64 = ctx.r11.s64 + -10488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBCAC"))) PPC_WEAK_FUNC(sub_83BBBCAC);
PPC_FUNC_IMPL(__imp__sub_83BBBCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBCB0"))) PPC_WEAK_FUNC(sub_83BBBCB0);
PPC_FUNC_IMPL(__imp__sub_83BBBCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10480
	ctx.r3.s64 = ctx.r11.s64 + -10480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBCBC"))) PPC_WEAK_FUNC(sub_83BBBCBC);
PPC_FUNC_IMPL(__imp__sub_83BBBCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBCC0"))) PPC_WEAK_FUNC(sub_83BBBCC0);
PPC_FUNC_IMPL(__imp__sub_83BBBCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10472
	ctx.r3.s64 = ctx.r11.s64 + -10472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBCCC"))) PPC_WEAK_FUNC(sub_83BBBCCC);
PPC_FUNC_IMPL(__imp__sub_83BBBCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBCD0"))) PPC_WEAK_FUNC(sub_83BBBCD0);
PPC_FUNC_IMPL(__imp__sub_83BBBCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10464
	ctx.r3.s64 = ctx.r11.s64 + -10464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBCDC"))) PPC_WEAK_FUNC(sub_83BBBCDC);
PPC_FUNC_IMPL(__imp__sub_83BBBCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBCE0"))) PPC_WEAK_FUNC(sub_83BBBCE0);
PPC_FUNC_IMPL(__imp__sub_83BBBCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10456
	ctx.r3.s64 = ctx.r11.s64 + -10456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBCEC"))) PPC_WEAK_FUNC(sub_83BBBCEC);
PPC_FUNC_IMPL(__imp__sub_83BBBCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBCF0"))) PPC_WEAK_FUNC(sub_83BBBCF0);
PPC_FUNC_IMPL(__imp__sub_83BBBCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBCFC"))) PPC_WEAK_FUNC(sub_83BBBCFC);
PPC_FUNC_IMPL(__imp__sub_83BBBCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBD00"))) PPC_WEAK_FUNC(sub_83BBBD00);
PPC_FUNC_IMPL(__imp__sub_83BBBD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBD0C"))) PPC_WEAK_FUNC(sub_83BBBD0C);
PPC_FUNC_IMPL(__imp__sub_83BBBD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBD10"))) PPC_WEAK_FUNC(sub_83BBBD10);
PPC_FUNC_IMPL(__imp__sub_83BBBD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10432
	ctx.r3.s64 = ctx.r11.s64 + -10432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBD1C"))) PPC_WEAK_FUNC(sub_83BBBD1C);
PPC_FUNC_IMPL(__imp__sub_83BBBD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBD20"))) PPC_WEAK_FUNC(sub_83BBBD20);
PPC_FUNC_IMPL(__imp__sub_83BBBD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10424
	ctx.r3.s64 = ctx.r11.s64 + -10424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBD2C"))) PPC_WEAK_FUNC(sub_83BBBD2C);
PPC_FUNC_IMPL(__imp__sub_83BBBD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBD30"))) PPC_WEAK_FUNC(sub_83BBBD30);
PPC_FUNC_IMPL(__imp__sub_83BBBD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10416
	ctx.r3.s64 = ctx.r11.s64 + -10416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBD3C"))) PPC_WEAK_FUNC(sub_83BBBD3C);
PPC_FUNC_IMPL(__imp__sub_83BBBD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBD40"))) PPC_WEAK_FUNC(sub_83BBBD40);
PPC_FUNC_IMPL(__imp__sub_83BBBD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10408
	ctx.r3.s64 = ctx.r11.s64 + -10408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBD4C"))) PPC_WEAK_FUNC(sub_83BBBD4C);
PPC_FUNC_IMPL(__imp__sub_83BBBD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBD50"))) PPC_WEAK_FUNC(sub_83BBBD50);
PPC_FUNC_IMPL(__imp__sub_83BBBD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10400
	ctx.r3.s64 = ctx.r11.s64 + -10400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBD5C"))) PPC_WEAK_FUNC(sub_83BBBD5C);
PPC_FUNC_IMPL(__imp__sub_83BBBD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBD60"))) PPC_WEAK_FUNC(sub_83BBBD60);
PPC_FUNC_IMPL(__imp__sub_83BBBD60) {
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
	// addi r3,r11,18232
	ctx.r3.s64 = ctx.r11.s64 + 18232;
	// bl 0x83523120
	ctx.lr = 0x83BBBD78;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-10392
	ctx.r3.s64 = ctx.r10.s64 + -10392;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBBD84;
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

__attribute__((alias("__imp__sub_83BBBD94"))) PPC_WEAK_FUNC(sub_83BBBD94);
PPC_FUNC_IMPL(__imp__sub_83BBBD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBD98"))) PPC_WEAK_FUNC(sub_83BBBD98);
PPC_FUNC_IMPL(__imp__sub_83BBBD98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18248
	ctx.r7.s64 = ctx.r8.s64 + 18248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBBDC0"))) PPC_WEAK_FUNC(sub_83BBBDC0);
PPC_FUNC_IMPL(__imp__sub_83BBBDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-9052
	ctx.r6.s64 = ctx.r7.s64 + -9052;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9124(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9124);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18248(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18248);
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
	// std r9,-9052(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9052, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBBE08"))) PPC_WEAK_FUNC(sub_83BBBE08);
PPC_FUNC_IMPL(__imp__sub_83BBBE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10376
	ctx.r3.s64 = ctx.r11.s64 + -10376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBE14"))) PPC_WEAK_FUNC(sub_83BBBE14);
PPC_FUNC_IMPL(__imp__sub_83BBBE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBE18"))) PPC_WEAK_FUNC(sub_83BBBE18);
PPC_FUNC_IMPL(__imp__sub_83BBBE18) {
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
	// addi r3,r11,18256
	ctx.r3.s64 = ctx.r11.s64 + 18256;
	// bl 0x8259af80
	ctx.lr = 0x83BBBE30;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-10360
	ctx.r3.s64 = ctx.r10.s64 + -10360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBBE3C;
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

__attribute__((alias("__imp__sub_83BBBE4C"))) PPC_WEAK_FUNC(sub_83BBBE4C);
PPC_FUNC_IMPL(__imp__sub_83BBBE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBE50"))) PPC_WEAK_FUNC(sub_83BBBE50);
PPC_FUNC_IMPL(__imp__sub_83BBBE50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18236
	ctx.r11.s64 = ctx.r8.s64 + 18236;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-9076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9076);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10368
	ctx.r3.s64 = ctx.r6.s64 + -10368;
	// stw r10,18236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBE80"))) PPC_WEAK_FUNC(sub_83BBBE80);
PPC_FUNC_IMPL(__imp__sub_83BBBE80) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-20412
	ctx.r4.s64 = ctx.r11.s64 + -20412;
	// addi r3,r10,-9028
	ctx.r3.s64 = ctx.r10.s64 + -9028;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x8259cc28
	ctx.lr = 0x83BBBEA4;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-10352
	ctx.r3.s64 = ctx.r9.s64 + -10352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBBEB0;
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

__attribute__((alias("__imp__sub_83BBBEC0"))) PPC_WEAK_FUNC(sub_83BBBEC0);
PPC_FUNC_IMPL(__imp__sub_83BBBEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10248
	ctx.r3.s64 = ctx.r11.s64 + -10248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBECC"))) PPC_WEAK_FUNC(sub_83BBBECC);
PPC_FUNC_IMPL(__imp__sub_83BBBECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBED0"))) PPC_WEAK_FUNC(sub_83BBBED0);
PPC_FUNC_IMPL(__imp__sub_83BBBED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBEDC"))) PPC_WEAK_FUNC(sub_83BBBEDC);
PPC_FUNC_IMPL(__imp__sub_83BBBEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBEE0"))) PPC_WEAK_FUNC(sub_83BBBEE0);
PPC_FUNC_IMPL(__imp__sub_83BBBEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBEEC"))) PPC_WEAK_FUNC(sub_83BBBEEC);
PPC_FUNC_IMPL(__imp__sub_83BBBEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBEF0"))) PPC_WEAK_FUNC(sub_83BBBEF0);
PPC_FUNC_IMPL(__imp__sub_83BBBEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10224
	ctx.r3.s64 = ctx.r11.s64 + -10224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBEFC"))) PPC_WEAK_FUNC(sub_83BBBEFC);
PPC_FUNC_IMPL(__imp__sub_83BBBEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF00"))) PPC_WEAK_FUNC(sub_83BBBF00);
PPC_FUNC_IMPL(__imp__sub_83BBBF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBF0C"))) PPC_WEAK_FUNC(sub_83BBBF0C);
PPC_FUNC_IMPL(__imp__sub_83BBBF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF10"))) PPC_WEAK_FUNC(sub_83BBBF10);
PPC_FUNC_IMPL(__imp__sub_83BBBF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10208
	ctx.r3.s64 = ctx.r11.s64 + -10208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBF1C"))) PPC_WEAK_FUNC(sub_83BBBF1C);
PPC_FUNC_IMPL(__imp__sub_83BBBF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF20"))) PPC_WEAK_FUNC(sub_83BBBF20);
PPC_FUNC_IMPL(__imp__sub_83BBBF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10200
	ctx.r3.s64 = ctx.r11.s64 + -10200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBF2C"))) PPC_WEAK_FUNC(sub_83BBBF2C);
PPC_FUNC_IMPL(__imp__sub_83BBBF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF30"))) PPC_WEAK_FUNC(sub_83BBBF30);
PPC_FUNC_IMPL(__imp__sub_83BBBF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBF3C"))) PPC_WEAK_FUNC(sub_83BBBF3C);
PPC_FUNC_IMPL(__imp__sub_83BBBF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF40"))) PPC_WEAK_FUNC(sub_83BBBF40);
PPC_FUNC_IMPL(__imp__sub_83BBBF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10184
	ctx.r3.s64 = ctx.r11.s64 + -10184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBF4C"))) PPC_WEAK_FUNC(sub_83BBBF4C);
PPC_FUNC_IMPL(__imp__sub_83BBBF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF50"))) PPC_WEAK_FUNC(sub_83BBBF50);
PPC_FUNC_IMPL(__imp__sub_83BBBF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10176
	ctx.r3.s64 = ctx.r11.s64 + -10176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBF5C"))) PPC_WEAK_FUNC(sub_83BBBF5C);
PPC_FUNC_IMPL(__imp__sub_83BBBF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF60"))) PPC_WEAK_FUNC(sub_83BBBF60);
PPC_FUNC_IMPL(__imp__sub_83BBBF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBF6C"))) PPC_WEAK_FUNC(sub_83BBBF6C);
PPC_FUNC_IMPL(__imp__sub_83BBBF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF70"))) PPC_WEAK_FUNC(sub_83BBBF70);
PPC_FUNC_IMPL(__imp__sub_83BBBF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10160
	ctx.r3.s64 = ctx.r11.s64 + -10160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBBF7C"))) PPC_WEAK_FUNC(sub_83BBBF7C);
PPC_FUNC_IMPL(__imp__sub_83BBBF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBF80"))) PPC_WEAK_FUNC(sub_83BBBF80);
PPC_FUNC_IMPL(__imp__sub_83BBBF80) {
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
	// addi r3,r11,18600
	ctx.r3.s64 = ctx.r11.s64 + 18600;
	// bl 0x83523120
	ctx.lr = 0x83BBBF98;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-10152
	ctx.r3.s64 = ctx.r10.s64 + -10152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBBFA4;
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

__attribute__((alias("__imp__sub_83BBBFB4"))) PPC_WEAK_FUNC(sub_83BBBFB4);
PPC_FUNC_IMPL(__imp__sub_83BBBFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBBFB8"))) PPC_WEAK_FUNC(sub_83BBBFB8);
PPC_FUNC_IMPL(__imp__sub_83BBBFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18616
	ctx.r7.s64 = ctx.r8.s64 + 18616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBBFE0"))) PPC_WEAK_FUNC(sub_83BBBFE0);
PPC_FUNC_IMPL(__imp__sub_83BBBFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-8224
	ctx.r6.s64 = ctx.r7.s64 + -8224;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8296(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8296);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18616);
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
	// std r9,-8224(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8224, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBC028"))) PPC_WEAK_FUNC(sub_83BBC028);
PPC_FUNC_IMPL(__imp__sub_83BBC028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10136
	ctx.r3.s64 = ctx.r11.s64 + -10136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBC034"))) PPC_WEAK_FUNC(sub_83BBC034);
PPC_FUNC_IMPL(__imp__sub_83BBC034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBC038"))) PPC_WEAK_FUNC(sub_83BBC038);
PPC_FUNC_IMPL(__imp__sub_83BBC038) {
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
	// addi r3,r11,18624
	ctx.r3.s64 = ctx.r11.s64 + 18624;
	// bl 0x8259af80
	ctx.lr = 0x83BBC050;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-10120
	ctx.r3.s64 = ctx.r10.s64 + -10120;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBC05C;
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

__attribute__((alias("__imp__sub_83BBC06C"))) PPC_WEAK_FUNC(sub_83BBC06C);
PPC_FUNC_IMPL(__imp__sub_83BBC06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBC070"))) PPC_WEAK_FUNC(sub_83BBC070);
PPC_FUNC_IMPL(__imp__sub_83BBC070) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18604
	ctx.r11.s64 = ctx.r8.s64 + 18604;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-8248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8248);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10128
	ctx.r3.s64 = ctx.r6.s64 + -10128;
	// stw r10,18604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18604, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBC0A0"))) PPC_WEAK_FUNC(sub_83BBC0A0);
PPC_FUNC_IMPL(__imp__sub_83BBC0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83BBC0A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r31,r11,-8192
	ctx.r31.s64 = ctx.r11.s64 + -8192;
	// addi r29,r10,-18720
	ctx.r29.s64 = ctx.r10.s64 + -18720;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,-9
	ctx.r4.s64 = ctx.r29.s64 + -9;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC0CC;
	sub_8259CC28(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r9,-9000
	ctx.r30.s64 = ctx.r9.s64 + -9000;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r9,r30,524
	ctx.r9.s64 = ctx.r30.s64 + 524;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r29,-13
	ctx.r4.s64 = ctx.r29.s64 + -13;
	// stb r10,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC11C;
	sub_8259CC28(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r9,r30,444
	ctx.r9.s64 = ctx.r30.s64 + 444;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// addi r4,r29,-17
	ctx.r4.s64 = ctx.r29.s64 + -17;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC164;
	sub_8259CC28(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r9,r30,444
	ctx.r9.s64 = ctx.r30.s64 + 444;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// addi r4,r29,-18
	ctx.r4.s64 = ctx.r29.s64 + -18;
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC1AC;
	sub_8259CC28(ctx, base);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// addi r9,r30,444
	ctx.r9.s64 = ctx.r30.s64 + 444;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// addi r4,r29,-19
	ctx.r4.s64 = ctx.r29.s64 + -19;
	// stb r11,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC1F4;
	sub_8259CC28(ctx, base);
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r30,444
	ctx.r10.s64 = ctx.r30.s64 + 444;
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// addi r4,r29,-29
	ctx.r4.s64 = ctx.r29.s64 + -29;
	// stb r10,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC23C;
	sub_8259CC28(ctx, base);
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// addi r9,r30,404
	ctx.r9.s64 = ctx.r30.s64 + 404;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// stw r9,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// addi r4,r29,-30
	ctx.r4.s64 = ctx.r29.s64 + -30;
	// stb r11,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC280;
	sub_8259CC28(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r9,r30,444
	ctx.r9.s64 = ctx.r30.s64 + 444;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// stw r9,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// addi r4,r29,-31
	ctx.r4.s64 = ctx.r29.s64 + -31;
	// stb r11,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC2C8;
	sub_8259CC28(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// addi r9,r30,444
	ctx.r9.s64 = ctx.r30.s64 + 444;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// addi r4,r29,-49
	ctx.r4.s64 = ctx.r29.s64 + -49;
	// stb r11,368(r31)
	PPC_STORE_U8(ctx.r31.u32 + 368, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC310;
	sub_8259CC28(ctx, base);
	// addi r10,r30,84
	ctx.r10.s64 = ctx.r30.s64 + 84;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// addi r10,r30,444
	ctx.r10.s64 = ctx.r30.s64 + 444;
	// stw r9,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// addi r4,r29,-50
	ctx.r4.s64 = ctx.r29.s64 + -50;
	// stw r9,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r10.u8);
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC358;
	sub_8259CC28(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r30,124
	ctx.r10.s64 = ctx.r30.s64 + 124;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// addi r11,r30,444
	ctx.r11.s64 = ctx.r30.s64 + 444;
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// stw r9,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// stw r9,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r9.u32);
	// addi r4,r29,-51
	ctx.r4.s64 = ctx.r29.s64 + -51;
	// stb r11,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC3A0;
	sub_8259CC28(ctx, base);
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// addi r9,r30,404
	ctx.r9.s64 = ctx.r30.s64 + 404;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// stw r9,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// stw r9,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r9.u32);
	// addi r4,r29,-61
	ctx.r4.s64 = ctx.r29.s64 + -61;
	// stb r11,500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 500, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC3E8;
	sub_8259CC28(ctx, base);
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// addi r9,r30,524
	ctx.r9.s64 = ctx.r30.s64 + 524;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// stw r9,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stw r9,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r9.u32);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// stb r11,544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 544, ctx.r11.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC430;
	sub_8259CC28(ctx, base);
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// addi r9,r30,524
	ctx.r9.s64 = ctx.r30.s64 + 524;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// stw r9,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r10.u32);
	// stw r9,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r9.u32);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// stb r11,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r11.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC478;
	sub_8259CC28(ctx, base);
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// addi r9,r30,524
	ctx.r9.s64 = ctx.r30.s64 + 524;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// stw r9,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// addi r4,r29,-62
	ctx.r4.s64 = ctx.r29.s64 + -62;
	// stb r11,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,632
	ctx.r3.s64 = ctx.r31.s64 + 632;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC4C0;
	sub_8259CC28(ctx, base);
	// addi r10,r30,268
	ctx.r10.s64 = ctx.r30.s64 + 268;
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// stw r9,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// stw r9,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r9.u32);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r10,676(r31)
	PPC_STORE_U8(ctx.r31.u32 + 676, ctx.r10.u8);
	// addi r3,r31,676
	ctx.r3.s64 = ctx.r31.s64 + 676;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC504;
	sub_8259CC28(ctx, base);
	// addi r10,r30,276
	ctx.r10.s64 = ctx.r30.s64 + 276;
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r10,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r10.u32);
	// stw r9,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r10.u32);
	// stw r9,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r9.u32);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r10,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r10.u8);
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC548;
	sub_8259CC28(ctx, base);
	// addi r10,r30,260
	ctx.r10.s64 = ctx.r30.s64 + 260;
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r10.u32);
	// stw r9,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r9.u32);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r10,764(r31)
	PPC_STORE_U8(ctx.r31.u32 + 764, ctx.r10.u8);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC58C;
	sub_8259CC28(ctx, base);
	// addi r10,r30,136
	ctx.r10.s64 = ctx.r30.s64 + 136;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r10,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r10.u32);
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// addi r10,r30,524
	ctx.r10.s64 = ctx.r30.s64 + 524;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// stw r10,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// stw r9,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r9.u32);
	// addi r4,r29,-63
	ctx.r4.s64 = ctx.r29.s64 + -63;
	// stb r10,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC5D4;
	sub_8259CC28(ctx, base);
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// addi r9,r30,524
	ctx.r9.s64 = ctx.r30.s64 + 524;
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r10,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r10.u32);
	// stw r9,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r10.u32);
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// addi r4,r29,-81
	ctx.r4.s64 = ctx.r29.s64 + -81;
	// stb r11,852(r31)
	PPC_STORE_U8(ctx.r31.u32 + 852, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC618;
	sub_8259CC28(ctx, base);
	// addi r11,r30,136
	ctx.r11.s64 = ctx.r30.s64 + 136;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// addi r9,r30,524
	ctx.r9.s64 = ctx.r30.s64 + 524;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r10.u32);
	// stw r9,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r9.u32);
	// addi r4,r29,-82
	ctx.r4.s64 = ctx.r29.s64 + -82;
	// stb r11,896(r31)
	PPC_STORE_U8(ctx.r31.u32 + 896, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC660;
	sub_8259CC28(ctx, base);
	// addi r10,r30,284
	ctx.r10.s64 = ctx.r30.s64 + 284;
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// stw r9,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r9.u32);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r10,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r10.u8);
	// addi r3,r31,940
	ctx.r3.s64 = ctx.r31.s64 + 940;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC6A4;
	sub_8259CC28(ctx, base);
	// addi r10,r30,284
	ctx.r10.s64 = ctx.r30.s64 + 284;
	// addi r9,r30,292
	ctx.r9.s64 = ctx.r30.s64 + 292;
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// stw r9,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r10.u32);
	// stw r9,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r9.u32);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r10,984(r31)
	PPC_STORE_U8(ctx.r31.u32 + 984, ctx.r10.u8);
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC6E8;
	sub_8259CC28(ctx, base);
	// addi r11,r30,224
	ctx.r11.s64 = ctx.r30.s64 + 224;
	// addi r10,r30,356
	ctx.r10.s64 = ctx.r30.s64 + 356;
	// stw r11,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r11.u32);
	// addi r9,r30,556
	ctx.r9.s64 = ctx.r30.s64 + 556;
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r10,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r10.u32);
	// stw r9,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r10.u32);
	// stw r9,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r9.u32);
	// addi r4,r29,-83
	ctx.r4.s64 = ctx.r29.s64 + -83;
	// stb r11,1028(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1028, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC730;
	sub_8259CC28(ctx, base);
	// addi r11,r30,144
	ctx.r11.s64 = ctx.r30.s64 + 144;
	// addi r10,r30,328
	ctx.r10.s64 = ctx.r30.s64 + 328;
	// stw r11,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r11.u32);
	// addi r9,r30,480
	ctx.r9.s64 = ctx.r30.s64 + 480;
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r10,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r10.u32);
	// stw r9,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r10.u32);
	// stw r9,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r9.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r11,1072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1072, ctx.r11.u8);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r31,1072
	ctx.r3.s64 = ctx.r31.s64 + 1072;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC778;
	sub_8259CC28(ctx, base);
	// addi r11,r30,144
	ctx.r11.s64 = ctx.r30.s64 + 144;
	// addi r10,r30,328
	ctx.r10.s64 = ctx.r30.s64 + 328;
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// addi r9,r30,480
	ctx.r9.s64 = ctx.r30.s64 + 480;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r10,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r10.u32);
	// stw r9,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r10.u32);
	// stw r9,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r9.u32);
	// addi r4,r29,-153
	ctx.r4.s64 = ctx.r29.s64 + -153;
	// stb r11,1116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1116, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1116
	ctx.r3.s64 = ctx.r31.s64 + 1116;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC7C0;
	sub_8259CC28(ctx, base);
	// addi r10,r30,144
	ctx.r10.s64 = ctx.r30.s64 + 144;
	// addi r9,r30,328
	ctx.r9.s64 = ctx.r30.s64 + 328;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// stw r9,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r10.u32);
	// stw r9,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r9.u32);
	// addi r4,r29,-154
	ctx.r4.s64 = ctx.r29.s64 + -154;
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,1160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1160, ctx.r10.u8);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC804;
	sub_8259CC28(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r30,144
	ctx.r10.s64 = ctx.r30.s64 + 144;
	// addi r9,r30,328
	ctx.r9.s64 = ctx.r30.s64 + 328;
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
	// stw r10,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
	// stw r10,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r10.u32);
	// addi r4,r29,-155
	ctx.r4.s64 = ctx.r29.s64 + -155;
	// stw r9,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,1204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1204, ctx.r11.u8);
	// addi r3,r31,1204
	ctx.r3.s64 = ctx.r31.s64 + 1204;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC848;
	sub_8259CC28(ctx, base);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,328
	ctx.r9.s64 = ctx.r30.s64 + 328;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r10,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r10.u32);
	// stw r9,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r10.u32);
	// stw r9,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r9.u32);
	// addi r4,r29,-185
	ctx.r4.s64 = ctx.r29.s64 + -185;
	// stw r11,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r10,1248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1248, ctx.r10.u8);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC88C;
	sub_8259CC28(ctx, base);
	// addi r10,r30,284
	ctx.r10.s64 = ctx.r30.s64 + 284;
	// addi r9,r30,328
	ctx.r9.s64 = ctx.r30.s64 + 328;
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r10,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r10.u32);
	// stw r9,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r10.u32);
	// stw r9,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r9.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r11,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r11.u32);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// stb r10,1292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1292, ctx.r10.u8);
	// addi r3,r31,1292
	ctx.r3.s64 = ctx.r31.s64 + 1292;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC8D0;
	sub_8259CC28(ctx, base);
	// addi r11,r30,252
	ctx.r11.s64 = ctx.r30.s64 + 252;
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// stw r11,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r11.u32);
	// addi r9,r30,556
	ctx.r9.s64 = ctx.r30.s64 + 556;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r10,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r10.u32);
	// stw r9,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r10.u32);
	// stw r9,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r9.u32);
	// addi r4,r29,-186
	ctx.r4.s64 = ctx.r29.s64 + -186;
	// stb r11,1336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1336, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1336
	ctx.r3.s64 = ctx.r31.s64 + 1336;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC918;
	sub_8259CC28(ctx, base);
	// addi r11,r30,252
	ctx.r11.s64 = ctx.r30.s64 + 252;
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// stw r11,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r11.u32);
	// addi r9,r30,556
	ctx.r9.s64 = ctx.r30.s64 + 556;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r10,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r10.u32);
	// stw r9,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r9.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r10.u32);
	// stw r9,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r9.u32);
	// addi r4,r29,-217
	ctx.r4.s64 = ctx.r29.s64 + -217;
	// stb r11,1380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1380, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1380
	ctx.r3.s64 = ctx.r31.s64 + 1380;
	// bl 0x8259cc28
	ctx.lr = 0x83BBC960;
	sub_8259CC28(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r10,r30,292
	ctx.r10.s64 = ctx.r30.s64 + 292;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// addi r9,r30,524
	ctx.r9.s64 = ctx.r30.s64 + 524;
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// stw r9,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// bl 0x837b0c10
	ctx.lr = 0x83BBC98C;
	sub_837B0C10(ctx, base);
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r6,r8,22568
	ctx.r6.s64 = ctx.r8.s64 + 22568;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r31,1452
	ctx.r3.s64 = ctx.r31.s64 + 1452;
	// bl 0x823fca98
	ctx.lr = 0x83BBC9A4;
	sub_823FCA98(ctx, base);
	// lis r7,-31791
	ctx.r7.s64 = -2083454976;
	// addi r3,r7,-10112
	ctx.r3.s64 = ctx.r7.s64 + -10112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBC9B0;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBC9B8"))) PPC_WEAK_FUNC(sub_83BBC9B8);
PPC_FUNC_IMPL(__imp__sub_83BBC9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10008
	ctx.r3.s64 = ctx.r11.s64 + -10008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBC9C4"))) PPC_WEAK_FUNC(sub_83BBC9C4);
PPC_FUNC_IMPL(__imp__sub_83BBC9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBC9C8"))) PPC_WEAK_FUNC(sub_83BBC9C8);
PPC_FUNC_IMPL(__imp__sub_83BBC9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-10000
	ctx.r3.s64 = ctx.r11.s64 + -10000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBC9D4"))) PPC_WEAK_FUNC(sub_83BBC9D4);
PPC_FUNC_IMPL(__imp__sub_83BBC9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBC9D8"))) PPC_WEAK_FUNC(sub_83BBC9D8);
PPC_FUNC_IMPL(__imp__sub_83BBC9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9992
	ctx.r3.s64 = ctx.r11.s64 + -9992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBC9E4"))) PPC_WEAK_FUNC(sub_83BBC9E4);
PPC_FUNC_IMPL(__imp__sub_83BBC9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBC9E8"))) PPC_WEAK_FUNC(sub_83BBC9E8);
PPC_FUNC_IMPL(__imp__sub_83BBC9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9984
	ctx.r3.s64 = ctx.r11.s64 + -9984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBC9F4"))) PPC_WEAK_FUNC(sub_83BBC9F4);
PPC_FUNC_IMPL(__imp__sub_83BBC9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBC9F8"))) PPC_WEAK_FUNC(sub_83BBC9F8);
PPC_FUNC_IMPL(__imp__sub_83BBC9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCA04"))) PPC_WEAK_FUNC(sub_83BBCA04);
PPC_FUNC_IMPL(__imp__sub_83BBCA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCA08"))) PPC_WEAK_FUNC(sub_83BBCA08);
PPC_FUNC_IMPL(__imp__sub_83BBCA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9968
	ctx.r3.s64 = ctx.r11.s64 + -9968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCA14"))) PPC_WEAK_FUNC(sub_83BBCA14);
PPC_FUNC_IMPL(__imp__sub_83BBCA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCA18"))) PPC_WEAK_FUNC(sub_83BBCA18);
PPC_FUNC_IMPL(__imp__sub_83BBCA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9960
	ctx.r3.s64 = ctx.r11.s64 + -9960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCA24"))) PPC_WEAK_FUNC(sub_83BBCA24);
PPC_FUNC_IMPL(__imp__sub_83BBCA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCA28"))) PPC_WEAK_FUNC(sub_83BBCA28);
PPC_FUNC_IMPL(__imp__sub_83BBCA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCA34"))) PPC_WEAK_FUNC(sub_83BBCA34);
PPC_FUNC_IMPL(__imp__sub_83BBCA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCA38"))) PPC_WEAK_FUNC(sub_83BBCA38);
PPC_FUNC_IMPL(__imp__sub_83BBCA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9944
	ctx.r3.s64 = ctx.r11.s64 + -9944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCA44"))) PPC_WEAK_FUNC(sub_83BBCA44);
PPC_FUNC_IMPL(__imp__sub_83BBCA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCA48"))) PPC_WEAK_FUNC(sub_83BBCA48);
PPC_FUNC_IMPL(__imp__sub_83BBCA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9936
	ctx.r3.s64 = ctx.r11.s64 + -9936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCA54"))) PPC_WEAK_FUNC(sub_83BBCA54);
PPC_FUNC_IMPL(__imp__sub_83BBCA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCA58"))) PPC_WEAK_FUNC(sub_83BBCA58);
PPC_FUNC_IMPL(__imp__sub_83BBCA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9928
	ctx.r3.s64 = ctx.r11.s64 + -9928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCA64"))) PPC_WEAK_FUNC(sub_83BBCA64);
PPC_FUNC_IMPL(__imp__sub_83BBCA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCA68"))) PPC_WEAK_FUNC(sub_83BBCA68);
PPC_FUNC_IMPL(__imp__sub_83BBCA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9920
	ctx.r3.s64 = ctx.r11.s64 + -9920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCA74"))) PPC_WEAK_FUNC(sub_83BBCA74);
PPC_FUNC_IMPL(__imp__sub_83BBCA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCA78"))) PPC_WEAK_FUNC(sub_83BBCA78);
PPC_FUNC_IMPL(__imp__sub_83BBCA78) {
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
	// addi r3,r11,19216
	ctx.r3.s64 = ctx.r11.s64 + 19216;
	// bl 0x83523120
	ctx.lr = 0x83BBCA90;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9912
	ctx.r3.s64 = ctx.r10.s64 + -9912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBCA9C;
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

__attribute__((alias("__imp__sub_83BBCAAC"))) PPC_WEAK_FUNC(sub_83BBCAAC);
PPC_FUNC_IMPL(__imp__sub_83BBCAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCAB0"))) PPC_WEAK_FUNC(sub_83BBCAB0);
PPC_FUNC_IMPL(__imp__sub_83BBCAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19232
	ctx.r7.s64 = ctx.r8.s64 + 19232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBCAD8"))) PPC_WEAK_FUNC(sub_83BBCAD8);
PPC_FUNC_IMPL(__imp__sub_83BBCAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-6416
	ctx.r6.s64 = ctx.r7.s64 + -6416;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-6488(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -6488);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19232);
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
	// std r9,-6416(r7)
	PPC_STORE_U64(ctx.r7.u32 + -6416, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBCB20"))) PPC_WEAK_FUNC(sub_83BBCB20);
PPC_FUNC_IMPL(__imp__sub_83BBCB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9896
	ctx.r3.s64 = ctx.r11.s64 + -9896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCB2C"))) PPC_WEAK_FUNC(sub_83BBCB2C);
PPC_FUNC_IMPL(__imp__sub_83BBCB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCB30"))) PPC_WEAK_FUNC(sub_83BBCB30);
PPC_FUNC_IMPL(__imp__sub_83BBCB30) {
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
	// addi r3,r11,19240
	ctx.r3.s64 = ctx.r11.s64 + 19240;
	// bl 0x8259af80
	ctx.lr = 0x83BBCB48;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9880
	ctx.r3.s64 = ctx.r10.s64 + -9880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBCB54;
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

__attribute__((alias("__imp__sub_83BBCB64"))) PPC_WEAK_FUNC(sub_83BBCB64);
PPC_FUNC_IMPL(__imp__sub_83BBCB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCB68"))) PPC_WEAK_FUNC(sub_83BBCB68);
PPC_FUNC_IMPL(__imp__sub_83BBCB68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19220
	ctx.r11.s64 = ctx.r8.s64 + 19220;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-6440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6440);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9888
	ctx.r3.s64 = ctx.r6.s64 + -9888;
	// stw r10,19220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19220, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCB98"))) PPC_WEAK_FUNC(sub_83BBCB98);
PPC_FUNC_IMPL(__imp__sub_83BBCB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9768
	ctx.r3.s64 = ctx.r11.s64 + -9768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCBA4"))) PPC_WEAK_FUNC(sub_83BBCBA4);
PPC_FUNC_IMPL(__imp__sub_83BBCBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCBA8"))) PPC_WEAK_FUNC(sub_83BBCBA8);
PPC_FUNC_IMPL(__imp__sub_83BBCBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCBB4"))) PPC_WEAK_FUNC(sub_83BBCBB4);
PPC_FUNC_IMPL(__imp__sub_83BBCBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCBB8"))) PPC_WEAK_FUNC(sub_83BBCBB8);
PPC_FUNC_IMPL(__imp__sub_83BBCBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9752
	ctx.r3.s64 = ctx.r11.s64 + -9752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCBC4"))) PPC_WEAK_FUNC(sub_83BBCBC4);
PPC_FUNC_IMPL(__imp__sub_83BBCBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCBC8"))) PPC_WEAK_FUNC(sub_83BBCBC8);
PPC_FUNC_IMPL(__imp__sub_83BBCBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9744
	ctx.r3.s64 = ctx.r11.s64 + -9744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCBD4"))) PPC_WEAK_FUNC(sub_83BBCBD4);
PPC_FUNC_IMPL(__imp__sub_83BBCBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCBD8"))) PPC_WEAK_FUNC(sub_83BBCBD8);
PPC_FUNC_IMPL(__imp__sub_83BBCBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9736
	ctx.r3.s64 = ctx.r11.s64 + -9736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCBE4"))) PPC_WEAK_FUNC(sub_83BBCBE4);
PPC_FUNC_IMPL(__imp__sub_83BBCBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCBE8"))) PPC_WEAK_FUNC(sub_83BBCBE8);
PPC_FUNC_IMPL(__imp__sub_83BBCBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9728
	ctx.r3.s64 = ctx.r11.s64 + -9728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCBF4"))) PPC_WEAK_FUNC(sub_83BBCBF4);
PPC_FUNC_IMPL(__imp__sub_83BBCBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCBF8"))) PPC_WEAK_FUNC(sub_83BBCBF8);
PPC_FUNC_IMPL(__imp__sub_83BBCBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9720
	ctx.r3.s64 = ctx.r11.s64 + -9720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCC04"))) PPC_WEAK_FUNC(sub_83BBCC04);
PPC_FUNC_IMPL(__imp__sub_83BBCC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCC08"))) PPC_WEAK_FUNC(sub_83BBCC08);
PPC_FUNC_IMPL(__imp__sub_83BBCC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9712
	ctx.r3.s64 = ctx.r11.s64 + -9712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCC14"))) PPC_WEAK_FUNC(sub_83BBCC14);
PPC_FUNC_IMPL(__imp__sub_83BBCC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCC18"))) PPC_WEAK_FUNC(sub_83BBCC18);
PPC_FUNC_IMPL(__imp__sub_83BBCC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9704
	ctx.r3.s64 = ctx.r11.s64 + -9704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCC24"))) PPC_WEAK_FUNC(sub_83BBCC24);
PPC_FUNC_IMPL(__imp__sub_83BBCC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCC28"))) PPC_WEAK_FUNC(sub_83BBCC28);
PPC_FUNC_IMPL(__imp__sub_83BBCC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9696
	ctx.r3.s64 = ctx.r11.s64 + -9696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCC34"))) PPC_WEAK_FUNC(sub_83BBCC34);
PPC_FUNC_IMPL(__imp__sub_83BBCC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCC38"))) PPC_WEAK_FUNC(sub_83BBCC38);
PPC_FUNC_IMPL(__imp__sub_83BBCC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9688
	ctx.r3.s64 = ctx.r11.s64 + -9688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCC44"))) PPC_WEAK_FUNC(sub_83BBCC44);
PPC_FUNC_IMPL(__imp__sub_83BBCC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCC48"))) PPC_WEAK_FUNC(sub_83BBCC48);
PPC_FUNC_IMPL(__imp__sub_83BBCC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9680
	ctx.r3.s64 = ctx.r11.s64 + -9680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCC54"))) PPC_WEAK_FUNC(sub_83BBCC54);
PPC_FUNC_IMPL(__imp__sub_83BBCC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCC58"))) PPC_WEAK_FUNC(sub_83BBCC58);
PPC_FUNC_IMPL(__imp__sub_83BBCC58) {
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
	// addi r3,r11,20552
	ctx.r3.s64 = ctx.r11.s64 + 20552;
	// bl 0x83523120
	ctx.lr = 0x83BBCC70;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9672
	ctx.r3.s64 = ctx.r10.s64 + -9672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBCC7C;
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

__attribute__((alias("__imp__sub_83BBCC8C"))) PPC_WEAK_FUNC(sub_83BBCC8C);
PPC_FUNC_IMPL(__imp__sub_83BBCC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCC90"))) PPC_WEAK_FUNC(sub_83BBCC90);
PPC_FUNC_IMPL(__imp__sub_83BBCC90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20568
	ctx.r7.s64 = ctx.r8.s64 + 20568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBCCB8"))) PPC_WEAK_FUNC(sub_83BBCCB8);
PPC_FUNC_IMPL(__imp__sub_83BBCCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-6184
	ctx.r6.s64 = ctx.r7.s64 + -6184;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-6256(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -6256);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20568);
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
	// std r9,-6184(r7)
	PPC_STORE_U64(ctx.r7.u32 + -6184, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBCD00"))) PPC_WEAK_FUNC(sub_83BBCD00);
PPC_FUNC_IMPL(__imp__sub_83BBCD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9656
	ctx.r3.s64 = ctx.r11.s64 + -9656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCD0C"))) PPC_WEAK_FUNC(sub_83BBCD0C);
PPC_FUNC_IMPL(__imp__sub_83BBCD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCD10"))) PPC_WEAK_FUNC(sub_83BBCD10);
PPC_FUNC_IMPL(__imp__sub_83BBCD10) {
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
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// bl 0x8259af80
	ctx.lr = 0x83BBCD28;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9640
	ctx.r3.s64 = ctx.r10.s64 + -9640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBCD34;
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

__attribute__((alias("__imp__sub_83BBCD44"))) PPC_WEAK_FUNC(sub_83BBCD44);
PPC_FUNC_IMPL(__imp__sub_83BBCD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCD48"))) PPC_WEAK_FUNC(sub_83BBCD48);
PPC_FUNC_IMPL(__imp__sub_83BBCD48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20556
	ctx.r11.s64 = ctx.r8.s64 + 20556;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-6208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6208);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9648
	ctx.r3.s64 = ctx.r6.s64 + -9648;
	// stw r10,20556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCD78"))) PPC_WEAK_FUNC(sub_83BBCD78);
PPC_FUNC_IMPL(__imp__sub_83BBCD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9528
	ctx.r3.s64 = ctx.r11.s64 + -9528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCD84"))) PPC_WEAK_FUNC(sub_83BBCD84);
PPC_FUNC_IMPL(__imp__sub_83BBCD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCD88"))) PPC_WEAK_FUNC(sub_83BBCD88);
PPC_FUNC_IMPL(__imp__sub_83BBCD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9520
	ctx.r3.s64 = ctx.r11.s64 + -9520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCD94"))) PPC_WEAK_FUNC(sub_83BBCD94);
PPC_FUNC_IMPL(__imp__sub_83BBCD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCD98"))) PPC_WEAK_FUNC(sub_83BBCD98);
PPC_FUNC_IMPL(__imp__sub_83BBCD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9512
	ctx.r3.s64 = ctx.r11.s64 + -9512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCDA4"))) PPC_WEAK_FUNC(sub_83BBCDA4);
PPC_FUNC_IMPL(__imp__sub_83BBCDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCDA8"))) PPC_WEAK_FUNC(sub_83BBCDA8);
PPC_FUNC_IMPL(__imp__sub_83BBCDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9504
	ctx.r3.s64 = ctx.r11.s64 + -9504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCDB4"))) PPC_WEAK_FUNC(sub_83BBCDB4);
PPC_FUNC_IMPL(__imp__sub_83BBCDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCDB8"))) PPC_WEAK_FUNC(sub_83BBCDB8);
PPC_FUNC_IMPL(__imp__sub_83BBCDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9496
	ctx.r3.s64 = ctx.r11.s64 + -9496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCDC4"))) PPC_WEAK_FUNC(sub_83BBCDC4);
PPC_FUNC_IMPL(__imp__sub_83BBCDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCDC8"))) PPC_WEAK_FUNC(sub_83BBCDC8);
PPC_FUNC_IMPL(__imp__sub_83BBCDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9488
	ctx.r3.s64 = ctx.r11.s64 + -9488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCDD4"))) PPC_WEAK_FUNC(sub_83BBCDD4);
PPC_FUNC_IMPL(__imp__sub_83BBCDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCDD8"))) PPC_WEAK_FUNC(sub_83BBCDD8);
PPC_FUNC_IMPL(__imp__sub_83BBCDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCDE4"))) PPC_WEAK_FUNC(sub_83BBCDE4);
PPC_FUNC_IMPL(__imp__sub_83BBCDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCDE8"))) PPC_WEAK_FUNC(sub_83BBCDE8);
PPC_FUNC_IMPL(__imp__sub_83BBCDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9472
	ctx.r3.s64 = ctx.r11.s64 + -9472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCDF4"))) PPC_WEAK_FUNC(sub_83BBCDF4);
PPC_FUNC_IMPL(__imp__sub_83BBCDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCDF8"))) PPC_WEAK_FUNC(sub_83BBCDF8);
PPC_FUNC_IMPL(__imp__sub_83BBCDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCE04"))) PPC_WEAK_FUNC(sub_83BBCE04);
PPC_FUNC_IMPL(__imp__sub_83BBCE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCE08"))) PPC_WEAK_FUNC(sub_83BBCE08);
PPC_FUNC_IMPL(__imp__sub_83BBCE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCE14"))) PPC_WEAK_FUNC(sub_83BBCE14);
PPC_FUNC_IMPL(__imp__sub_83BBCE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCE18"))) PPC_WEAK_FUNC(sub_83BBCE18);
PPC_FUNC_IMPL(__imp__sub_83BBCE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9448
	ctx.r3.s64 = ctx.r11.s64 + -9448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCE24"))) PPC_WEAK_FUNC(sub_83BBCE24);
PPC_FUNC_IMPL(__imp__sub_83BBCE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCE28"))) PPC_WEAK_FUNC(sub_83BBCE28);
PPC_FUNC_IMPL(__imp__sub_83BBCE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9440
	ctx.r3.s64 = ctx.r11.s64 + -9440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCE34"))) PPC_WEAK_FUNC(sub_83BBCE34);
PPC_FUNC_IMPL(__imp__sub_83BBCE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCE38"))) PPC_WEAK_FUNC(sub_83BBCE38);
PPC_FUNC_IMPL(__imp__sub_83BBCE38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20936
	ctx.r7.s64 = ctx.r8.s64 + 20936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBCE60"))) PPC_WEAK_FUNC(sub_83BBCE60);
PPC_FUNC_IMPL(__imp__sub_83BBCE60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-6056
	ctx.r6.s64 = ctx.r7.s64 + -6056;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-6128(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -6128);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20936);
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
	// std r9,-6056(r7)
	PPC_STORE_U64(ctx.r7.u32 + -6056, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBCEA8"))) PPC_WEAK_FUNC(sub_83BBCEA8);
PPC_FUNC_IMPL(__imp__sub_83BBCEA8) {
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
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// bl 0x83523120
	ctx.lr = 0x83BBCEC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9432
	ctx.r3.s64 = ctx.r10.s64 + -9432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBCECC;
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

__attribute__((alias("__imp__sub_83BBCEDC"))) PPC_WEAK_FUNC(sub_83BBCEDC);
PPC_FUNC_IMPL(__imp__sub_83BBCEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCEE0"))) PPC_WEAK_FUNC(sub_83BBCEE0);
PPC_FUNC_IMPL(__imp__sub_83BBCEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCEEC"))) PPC_WEAK_FUNC(sub_83BBCEEC);
PPC_FUNC_IMPL(__imp__sub_83BBCEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCEF0"))) PPC_WEAK_FUNC(sub_83BBCEF0);
PPC_FUNC_IMPL(__imp__sub_83BBCEF0) {
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
	// addi r3,r11,20944
	ctx.r3.s64 = ctx.r11.s64 + 20944;
	// bl 0x8259af80
	ctx.lr = 0x83BBCF08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9400
	ctx.r3.s64 = ctx.r10.s64 + -9400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBCF14;
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

__attribute__((alias("__imp__sub_83BBCF24"))) PPC_WEAK_FUNC(sub_83BBCF24);
PPC_FUNC_IMPL(__imp__sub_83BBCF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCF28"))) PPC_WEAK_FUNC(sub_83BBCF28);
PPC_FUNC_IMPL(__imp__sub_83BBCF28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20924
	ctx.r11.s64 = ctx.r8.s64 + 20924;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-6080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6080);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9408
	ctx.r3.s64 = ctx.r6.s64 + -9408;
	// stw r10,20924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCF58"))) PPC_WEAK_FUNC(sub_83BBCF58);
PPC_FUNC_IMPL(__imp__sub_83BBCF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9392
	ctx.r3.s64 = ctx.r11.s64 + -9392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCF64"))) PPC_WEAK_FUNC(sub_83BBCF64);
PPC_FUNC_IMPL(__imp__sub_83BBCF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCF68"))) PPC_WEAK_FUNC(sub_83BBCF68);
PPC_FUNC_IMPL(__imp__sub_83BBCF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9384
	ctx.r3.s64 = ctx.r11.s64 + -9384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCF74"))) PPC_WEAK_FUNC(sub_83BBCF74);
PPC_FUNC_IMPL(__imp__sub_83BBCF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCF78"))) PPC_WEAK_FUNC(sub_83BBCF78);
PPC_FUNC_IMPL(__imp__sub_83BBCF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9376
	ctx.r3.s64 = ctx.r11.s64 + -9376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCF84"))) PPC_WEAK_FUNC(sub_83BBCF84);
PPC_FUNC_IMPL(__imp__sub_83BBCF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCF88"))) PPC_WEAK_FUNC(sub_83BBCF88);
PPC_FUNC_IMPL(__imp__sub_83BBCF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9368
	ctx.r3.s64 = ctx.r11.s64 + -9368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCF94"))) PPC_WEAK_FUNC(sub_83BBCF94);
PPC_FUNC_IMPL(__imp__sub_83BBCF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCF98"))) PPC_WEAK_FUNC(sub_83BBCF98);
PPC_FUNC_IMPL(__imp__sub_83BBCF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCFA4"))) PPC_WEAK_FUNC(sub_83BBCFA4);
PPC_FUNC_IMPL(__imp__sub_83BBCFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCFA8"))) PPC_WEAK_FUNC(sub_83BBCFA8);
PPC_FUNC_IMPL(__imp__sub_83BBCFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9352
	ctx.r3.s64 = ctx.r11.s64 + -9352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCFB4"))) PPC_WEAK_FUNC(sub_83BBCFB4);
PPC_FUNC_IMPL(__imp__sub_83BBCFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCFB8"))) PPC_WEAK_FUNC(sub_83BBCFB8);
PPC_FUNC_IMPL(__imp__sub_83BBCFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9344
	ctx.r3.s64 = ctx.r11.s64 + -9344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCFC4"))) PPC_WEAK_FUNC(sub_83BBCFC4);
PPC_FUNC_IMPL(__imp__sub_83BBCFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCFC8"))) PPC_WEAK_FUNC(sub_83BBCFC8);
PPC_FUNC_IMPL(__imp__sub_83BBCFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9336
	ctx.r3.s64 = ctx.r11.s64 + -9336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCFD4"))) PPC_WEAK_FUNC(sub_83BBCFD4);
PPC_FUNC_IMPL(__imp__sub_83BBCFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCFD8"))) PPC_WEAK_FUNC(sub_83BBCFD8);
PPC_FUNC_IMPL(__imp__sub_83BBCFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCFE4"))) PPC_WEAK_FUNC(sub_83BBCFE4);
PPC_FUNC_IMPL(__imp__sub_83BBCFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCFE8"))) PPC_WEAK_FUNC(sub_83BBCFE8);
PPC_FUNC_IMPL(__imp__sub_83BBCFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9320
	ctx.r3.s64 = ctx.r11.s64 + -9320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBCFF4"))) PPC_WEAK_FUNC(sub_83BBCFF4);
PPC_FUNC_IMPL(__imp__sub_83BBCFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBCFF8"))) PPC_WEAK_FUNC(sub_83BBCFF8);
PPC_FUNC_IMPL(__imp__sub_83BBCFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9312
	ctx.r3.s64 = ctx.r11.s64 + -9312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD004"))) PPC_WEAK_FUNC(sub_83BBD004);
PPC_FUNC_IMPL(__imp__sub_83BBD004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD008"))) PPC_WEAK_FUNC(sub_83BBD008);
PPC_FUNC_IMPL(__imp__sub_83BBD008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9304
	ctx.r3.s64 = ctx.r11.s64 + -9304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD014"))) PPC_WEAK_FUNC(sub_83BBD014);
PPC_FUNC_IMPL(__imp__sub_83BBD014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD018"))) PPC_WEAK_FUNC(sub_83BBD018);
PPC_FUNC_IMPL(__imp__sub_83BBD018) {
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
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// bl 0x83523120
	ctx.lr = 0x83BBD030;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9296
	ctx.r3.s64 = ctx.r10.s64 + -9296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD03C;
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

__attribute__((alias("__imp__sub_83BBD04C"))) PPC_WEAK_FUNC(sub_83BBD04C);
PPC_FUNC_IMPL(__imp__sub_83BBD04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD050"))) PPC_WEAK_FUNC(sub_83BBD050);
PPC_FUNC_IMPL(__imp__sub_83BBD050) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21304
	ctx.r7.s64 = ctx.r8.s64 + 21304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD078"))) PPC_WEAK_FUNC(sub_83BBD078);
PPC_FUNC_IMPL(__imp__sub_83BBD078) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-5848
	ctx.r6.s64 = ctx.r7.s64 + -5848;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5920(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5920);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21304);
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
	// std r9,-5848(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5848, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD0C0"))) PPC_WEAK_FUNC(sub_83BBD0C0);
PPC_FUNC_IMPL(__imp__sub_83BBD0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9280
	ctx.r3.s64 = ctx.r11.s64 + -9280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD0CC"))) PPC_WEAK_FUNC(sub_83BBD0CC);
PPC_FUNC_IMPL(__imp__sub_83BBD0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD0D0"))) PPC_WEAK_FUNC(sub_83BBD0D0);
PPC_FUNC_IMPL(__imp__sub_83BBD0D0) {
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
	// addi r3,r11,21312
	ctx.r3.s64 = ctx.r11.s64 + 21312;
	// bl 0x8259af80
	ctx.lr = 0x83BBD0E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9264
	ctx.r3.s64 = ctx.r10.s64 + -9264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD0F4;
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

__attribute__((alias("__imp__sub_83BBD104"))) PPC_WEAK_FUNC(sub_83BBD104);
PPC_FUNC_IMPL(__imp__sub_83BBD104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD108"))) PPC_WEAK_FUNC(sub_83BBD108);
PPC_FUNC_IMPL(__imp__sub_83BBD108) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21292
	ctx.r11.s64 = ctx.r8.s64 + 21292;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-5872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5872);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9272
	ctx.r3.s64 = ctx.r6.s64 + -9272;
	// stw r10,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD138"))) PPC_WEAK_FUNC(sub_83BBD138);
PPC_FUNC_IMPL(__imp__sub_83BBD138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9256
	ctx.r3.s64 = ctx.r11.s64 + -9256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD144"))) PPC_WEAK_FUNC(sub_83BBD144);
PPC_FUNC_IMPL(__imp__sub_83BBD144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD148"))) PPC_WEAK_FUNC(sub_83BBD148);
PPC_FUNC_IMPL(__imp__sub_83BBD148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9248
	ctx.r3.s64 = ctx.r11.s64 + -9248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD154"))) PPC_WEAK_FUNC(sub_83BBD154);
PPC_FUNC_IMPL(__imp__sub_83BBD154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD158"))) PPC_WEAK_FUNC(sub_83BBD158);
PPC_FUNC_IMPL(__imp__sub_83BBD158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9240
	ctx.r3.s64 = ctx.r11.s64 + -9240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD164"))) PPC_WEAK_FUNC(sub_83BBD164);
PPC_FUNC_IMPL(__imp__sub_83BBD164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD168"))) PPC_WEAK_FUNC(sub_83BBD168);
PPC_FUNC_IMPL(__imp__sub_83BBD168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9232
	ctx.r3.s64 = ctx.r11.s64 + -9232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD174"))) PPC_WEAK_FUNC(sub_83BBD174);
PPC_FUNC_IMPL(__imp__sub_83BBD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD178"))) PPC_WEAK_FUNC(sub_83BBD178);
PPC_FUNC_IMPL(__imp__sub_83BBD178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9224
	ctx.r3.s64 = ctx.r11.s64 + -9224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD184"))) PPC_WEAK_FUNC(sub_83BBD184);
PPC_FUNC_IMPL(__imp__sub_83BBD184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD188"))) PPC_WEAK_FUNC(sub_83BBD188);
PPC_FUNC_IMPL(__imp__sub_83BBD188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9216
	ctx.r3.s64 = ctx.r11.s64 + -9216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD194"))) PPC_WEAK_FUNC(sub_83BBD194);
PPC_FUNC_IMPL(__imp__sub_83BBD194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD198"))) PPC_WEAK_FUNC(sub_83BBD198);
PPC_FUNC_IMPL(__imp__sub_83BBD198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9208
	ctx.r3.s64 = ctx.r11.s64 + -9208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD1A4"))) PPC_WEAK_FUNC(sub_83BBD1A4);
PPC_FUNC_IMPL(__imp__sub_83BBD1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD1A8"))) PPC_WEAK_FUNC(sub_83BBD1A8);
PPC_FUNC_IMPL(__imp__sub_83BBD1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD1B4"))) PPC_WEAK_FUNC(sub_83BBD1B4);
PPC_FUNC_IMPL(__imp__sub_83BBD1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

