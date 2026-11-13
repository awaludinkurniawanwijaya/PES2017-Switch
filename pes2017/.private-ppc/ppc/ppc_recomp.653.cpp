#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BD8760"))) PPC_WEAK_FUNC(sub_83BD8760);
PPC_FUNC_IMPL(__imp__sub_83BD8760) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30528
	ctx.r11.s64 = ctx.r8.s64 + -30528;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31400);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23560
	ctx.r3.s64 = ctx.r6.s64 + 23560;
	// stw r10,-30528(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30528, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8790"))) PPC_WEAK_FUNC(sub_83BD8790);
PPC_FUNC_IMPL(__imp__sub_83BD8790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23576
	ctx.r3.s64 = ctx.r11.s64 + 23576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD879C"))) PPC_WEAK_FUNC(sub_83BD879C);
PPC_FUNC_IMPL(__imp__sub_83BD879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD87A0"))) PPC_WEAK_FUNC(sub_83BD87A0);
PPC_FUNC_IMPL(__imp__sub_83BD87A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23584
	ctx.r3.s64 = ctx.r11.s64 + 23584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD87AC"))) PPC_WEAK_FUNC(sub_83BD87AC);
PPC_FUNC_IMPL(__imp__sub_83BD87AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD87B0"))) PPC_WEAK_FUNC(sub_83BD87B0);
PPC_FUNC_IMPL(__imp__sub_83BD87B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23592
	ctx.r3.s64 = ctx.r11.s64 + 23592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD87BC"))) PPC_WEAK_FUNC(sub_83BD87BC);
PPC_FUNC_IMPL(__imp__sub_83BD87BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD87C0"))) PPC_WEAK_FUNC(sub_83BD87C0);
PPC_FUNC_IMPL(__imp__sub_83BD87C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23600
	ctx.r3.s64 = ctx.r11.s64 + 23600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD87CC"))) PPC_WEAK_FUNC(sub_83BD87CC);
PPC_FUNC_IMPL(__imp__sub_83BD87CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD87D0"))) PPC_WEAK_FUNC(sub_83BD87D0);
PPC_FUNC_IMPL(__imp__sub_83BD87D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23608
	ctx.r3.s64 = ctx.r11.s64 + 23608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD87DC"))) PPC_WEAK_FUNC(sub_83BD87DC);
PPC_FUNC_IMPL(__imp__sub_83BD87DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD87E0"))) PPC_WEAK_FUNC(sub_83BD87E0);
PPC_FUNC_IMPL(__imp__sub_83BD87E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23616
	ctx.r3.s64 = ctx.r11.s64 + 23616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD87EC"))) PPC_WEAK_FUNC(sub_83BD87EC);
PPC_FUNC_IMPL(__imp__sub_83BD87EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD87F0"))) PPC_WEAK_FUNC(sub_83BD87F0);
PPC_FUNC_IMPL(__imp__sub_83BD87F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23624
	ctx.r3.s64 = ctx.r11.s64 + 23624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD87FC"))) PPC_WEAK_FUNC(sub_83BD87FC);
PPC_FUNC_IMPL(__imp__sub_83BD87FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8800"))) PPC_WEAK_FUNC(sub_83BD8800);
PPC_FUNC_IMPL(__imp__sub_83BD8800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23632
	ctx.r3.s64 = ctx.r11.s64 + 23632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD880C"))) PPC_WEAK_FUNC(sub_83BD880C);
PPC_FUNC_IMPL(__imp__sub_83BD880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8810"))) PPC_WEAK_FUNC(sub_83BD8810);
PPC_FUNC_IMPL(__imp__sub_83BD8810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23640
	ctx.r3.s64 = ctx.r11.s64 + 23640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD881C"))) PPC_WEAK_FUNC(sub_83BD881C);
PPC_FUNC_IMPL(__imp__sub_83BD881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8820"))) PPC_WEAK_FUNC(sub_83BD8820);
PPC_FUNC_IMPL(__imp__sub_83BD8820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23648
	ctx.r3.s64 = ctx.r11.s64 + 23648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD882C"))) PPC_WEAK_FUNC(sub_83BD882C);
PPC_FUNC_IMPL(__imp__sub_83BD882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8830"))) PPC_WEAK_FUNC(sub_83BD8830);
PPC_FUNC_IMPL(__imp__sub_83BD8830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23656
	ctx.r3.s64 = ctx.r11.s64 + 23656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD883C"))) PPC_WEAK_FUNC(sub_83BD883C);
PPC_FUNC_IMPL(__imp__sub_83BD883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8840"))) PPC_WEAK_FUNC(sub_83BD8840);
PPC_FUNC_IMPL(__imp__sub_83BD8840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD884C"))) PPC_WEAK_FUNC(sub_83BD884C);
PPC_FUNC_IMPL(__imp__sub_83BD884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8850"))) PPC_WEAK_FUNC(sub_83BD8850);
PPC_FUNC_IMPL(__imp__sub_83BD8850) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// bl 0x83523120
	ctx.lr = 0x83BD8868;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23672
	ctx.r3.s64 = ctx.r10.s64 + 23672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8874;
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

__attribute__((alias("__imp__sub_83BD8884"))) PPC_WEAK_FUNC(sub_83BD8884);
PPC_FUNC_IMPL(__imp__sub_83BD8884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8888"))) PPC_WEAK_FUNC(sub_83BD8888);
PPC_FUNC_IMPL(__imp__sub_83BD8888) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30144
	ctx.r7.s64 = ctx.r8.s64 + -30144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD88B0"))) PPC_WEAK_FUNC(sub_83BD88B0);
PPC_FUNC_IMPL(__imp__sub_83BD88B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-31192
	ctx.r6.s64 = ctx.r7.s64 + -31192;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30144);
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
	// std r9,-31192(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31192, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD88F8"))) PPC_WEAK_FUNC(sub_83BD88F8);
PPC_FUNC_IMPL(__imp__sub_83BD88F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23688
	ctx.r3.s64 = ctx.r11.s64 + 23688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8904"))) PPC_WEAK_FUNC(sub_83BD8904);
PPC_FUNC_IMPL(__imp__sub_83BD8904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8908"))) PPC_WEAK_FUNC(sub_83BD8908);
PPC_FUNC_IMPL(__imp__sub_83BD8908) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-30136
	ctx.r3.s64 = ctx.r11.s64 + -30136;
	// bl 0x8259af80
	ctx.lr = 0x83BD8920;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23704
	ctx.r3.s64 = ctx.r10.s64 + 23704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD892C;
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

__attribute__((alias("__imp__sub_83BD893C"))) PPC_WEAK_FUNC(sub_83BD893C);
PPC_FUNC_IMPL(__imp__sub_83BD893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8940"))) PPC_WEAK_FUNC(sub_83BD8940);
PPC_FUNC_IMPL(__imp__sub_83BD8940) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30156
	ctx.r11.s64 = ctx.r8.s64 + -30156;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31216);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23696
	ctx.r3.s64 = ctx.r6.s64 + 23696;
	// stw r10,-30156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30156, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8970"))) PPC_WEAK_FUNC(sub_83BD8970);
PPC_FUNC_IMPL(__imp__sub_83BD8970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD897C"))) PPC_WEAK_FUNC(sub_83BD897C);
PPC_FUNC_IMPL(__imp__sub_83BD897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8980"))) PPC_WEAK_FUNC(sub_83BD8980);
PPC_FUNC_IMPL(__imp__sub_83BD8980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23720
	ctx.r3.s64 = ctx.r11.s64 + 23720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD898C"))) PPC_WEAK_FUNC(sub_83BD898C);
PPC_FUNC_IMPL(__imp__sub_83BD898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8990"))) PPC_WEAK_FUNC(sub_83BD8990);
PPC_FUNC_IMPL(__imp__sub_83BD8990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23728
	ctx.r3.s64 = ctx.r11.s64 + 23728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD899C"))) PPC_WEAK_FUNC(sub_83BD899C);
PPC_FUNC_IMPL(__imp__sub_83BD899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD89A0"))) PPC_WEAK_FUNC(sub_83BD89A0);
PPC_FUNC_IMPL(__imp__sub_83BD89A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23736
	ctx.r3.s64 = ctx.r11.s64 + 23736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD89AC"))) PPC_WEAK_FUNC(sub_83BD89AC);
PPC_FUNC_IMPL(__imp__sub_83BD89AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD89B0"))) PPC_WEAK_FUNC(sub_83BD89B0);
PPC_FUNC_IMPL(__imp__sub_83BD89B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD89BC"))) PPC_WEAK_FUNC(sub_83BD89BC);
PPC_FUNC_IMPL(__imp__sub_83BD89BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD89C0"))) PPC_WEAK_FUNC(sub_83BD89C0);
PPC_FUNC_IMPL(__imp__sub_83BD89C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23752
	ctx.r3.s64 = ctx.r11.s64 + 23752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD89CC"))) PPC_WEAK_FUNC(sub_83BD89CC);
PPC_FUNC_IMPL(__imp__sub_83BD89CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD89D0"))) PPC_WEAK_FUNC(sub_83BD89D0);
PPC_FUNC_IMPL(__imp__sub_83BD89D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23760
	ctx.r3.s64 = ctx.r11.s64 + 23760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD89DC"))) PPC_WEAK_FUNC(sub_83BD89DC);
PPC_FUNC_IMPL(__imp__sub_83BD89DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD89E0"))) PPC_WEAK_FUNC(sub_83BD89E0);
PPC_FUNC_IMPL(__imp__sub_83BD89E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD89EC"))) PPC_WEAK_FUNC(sub_83BD89EC);
PPC_FUNC_IMPL(__imp__sub_83BD89EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD89F0"))) PPC_WEAK_FUNC(sub_83BD89F0);
PPC_FUNC_IMPL(__imp__sub_83BD89F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23776
	ctx.r3.s64 = ctx.r11.s64 + 23776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD89FC"))) PPC_WEAK_FUNC(sub_83BD89FC);
PPC_FUNC_IMPL(__imp__sub_83BD89FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8A00"))) PPC_WEAK_FUNC(sub_83BD8A00);
PPC_FUNC_IMPL(__imp__sub_83BD8A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8A0C"))) PPC_WEAK_FUNC(sub_83BD8A0C);
PPC_FUNC_IMPL(__imp__sub_83BD8A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8A10"))) PPC_WEAK_FUNC(sub_83BD8A10);
PPC_FUNC_IMPL(__imp__sub_83BD8A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23792
	ctx.r3.s64 = ctx.r11.s64 + 23792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8A1C"))) PPC_WEAK_FUNC(sub_83BD8A1C);
PPC_FUNC_IMPL(__imp__sub_83BD8A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8A20"))) PPC_WEAK_FUNC(sub_83BD8A20);
PPC_FUNC_IMPL(__imp__sub_83BD8A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23800
	ctx.r3.s64 = ctx.r11.s64 + 23800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8A2C"))) PPC_WEAK_FUNC(sub_83BD8A2C);
PPC_FUNC_IMPL(__imp__sub_83BD8A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8A30"))) PPC_WEAK_FUNC(sub_83BD8A30);
PPC_FUNC_IMPL(__imp__sub_83BD8A30) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-29792
	ctx.r3.s64 = ctx.r11.s64 + -29792;
	// bl 0x83523120
	ctx.lr = 0x83BD8A48;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23808
	ctx.r3.s64 = ctx.r10.s64 + 23808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8A54;
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

__attribute__((alias("__imp__sub_83BD8A64"))) PPC_WEAK_FUNC(sub_83BD8A64);
PPC_FUNC_IMPL(__imp__sub_83BD8A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8A68"))) PPC_WEAK_FUNC(sub_83BD8A68);
PPC_FUNC_IMPL(__imp__sub_83BD8A68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29776
	ctx.r7.s64 = ctx.r8.s64 + -29776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29776(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8A90"))) PPC_WEAK_FUNC(sub_83BD8A90);
PPC_FUNC_IMPL(__imp__sub_83BD8A90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-30992
	ctx.r6.s64 = ctx.r7.s64 + -30992;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31064(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31064);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29776);
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
	// std r9,-30992(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30992, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8AD8"))) PPC_WEAK_FUNC(sub_83BD8AD8);
PPC_FUNC_IMPL(__imp__sub_83BD8AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8AE4"))) PPC_WEAK_FUNC(sub_83BD8AE4);
PPC_FUNC_IMPL(__imp__sub_83BD8AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8AE8"))) PPC_WEAK_FUNC(sub_83BD8AE8);
PPC_FUNC_IMPL(__imp__sub_83BD8AE8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-29768
	ctx.r3.s64 = ctx.r11.s64 + -29768;
	// bl 0x8259af80
	ctx.lr = 0x83BD8B00;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23840
	ctx.r3.s64 = ctx.r10.s64 + 23840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8B0C;
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

__attribute__((alias("__imp__sub_83BD8B1C"))) PPC_WEAK_FUNC(sub_83BD8B1C);
PPC_FUNC_IMPL(__imp__sub_83BD8B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8B20"))) PPC_WEAK_FUNC(sub_83BD8B20);
PPC_FUNC_IMPL(__imp__sub_83BD8B20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29788
	ctx.r11.s64 = ctx.r8.s64 + -29788;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31016);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23832
	ctx.r3.s64 = ctx.r6.s64 + 23832;
	// stw r10,-29788(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29788, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8B50"))) PPC_WEAK_FUNC(sub_83BD8B50);
PPC_FUNC_IMPL(__imp__sub_83BD8B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23848
	ctx.r3.s64 = ctx.r11.s64 + 23848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8B5C"))) PPC_WEAK_FUNC(sub_83BD8B5C);
PPC_FUNC_IMPL(__imp__sub_83BD8B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8B60"))) PPC_WEAK_FUNC(sub_83BD8B60);
PPC_FUNC_IMPL(__imp__sub_83BD8B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8B6C"))) PPC_WEAK_FUNC(sub_83BD8B6C);
PPC_FUNC_IMPL(__imp__sub_83BD8B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8B70"))) PPC_WEAK_FUNC(sub_83BD8B70);
PPC_FUNC_IMPL(__imp__sub_83BD8B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23864
	ctx.r3.s64 = ctx.r11.s64 + 23864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8B7C"))) PPC_WEAK_FUNC(sub_83BD8B7C);
PPC_FUNC_IMPL(__imp__sub_83BD8B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8B80"))) PPC_WEAK_FUNC(sub_83BD8B80);
PPC_FUNC_IMPL(__imp__sub_83BD8B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23872
	ctx.r3.s64 = ctx.r11.s64 + 23872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8B8C"))) PPC_WEAK_FUNC(sub_83BD8B8C);
PPC_FUNC_IMPL(__imp__sub_83BD8B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8B90"))) PPC_WEAK_FUNC(sub_83BD8B90);
PPC_FUNC_IMPL(__imp__sub_83BD8B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23880
	ctx.r3.s64 = ctx.r11.s64 + 23880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8B9C"))) PPC_WEAK_FUNC(sub_83BD8B9C);
PPC_FUNC_IMPL(__imp__sub_83BD8B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8BA0"))) PPC_WEAK_FUNC(sub_83BD8BA0);
PPC_FUNC_IMPL(__imp__sub_83BD8BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23888
	ctx.r3.s64 = ctx.r11.s64 + 23888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8BAC"))) PPC_WEAK_FUNC(sub_83BD8BAC);
PPC_FUNC_IMPL(__imp__sub_83BD8BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8BB0"))) PPC_WEAK_FUNC(sub_83BD8BB0);
PPC_FUNC_IMPL(__imp__sub_83BD8BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23896
	ctx.r3.s64 = ctx.r11.s64 + 23896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8BBC"))) PPC_WEAK_FUNC(sub_83BD8BBC);
PPC_FUNC_IMPL(__imp__sub_83BD8BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8BC0"))) PPC_WEAK_FUNC(sub_83BD8BC0);
PPC_FUNC_IMPL(__imp__sub_83BD8BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8BCC"))) PPC_WEAK_FUNC(sub_83BD8BCC);
PPC_FUNC_IMPL(__imp__sub_83BD8BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8BD0"))) PPC_WEAK_FUNC(sub_83BD8BD0);
PPC_FUNC_IMPL(__imp__sub_83BD8BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8BDC"))) PPC_WEAK_FUNC(sub_83BD8BDC);
PPC_FUNC_IMPL(__imp__sub_83BD8BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8BE0"))) PPC_WEAK_FUNC(sub_83BD8BE0);
PPC_FUNC_IMPL(__imp__sub_83BD8BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23920
	ctx.r3.s64 = ctx.r11.s64 + 23920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8BEC"))) PPC_WEAK_FUNC(sub_83BD8BEC);
PPC_FUNC_IMPL(__imp__sub_83BD8BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8BF0"))) PPC_WEAK_FUNC(sub_83BD8BF0);
PPC_FUNC_IMPL(__imp__sub_83BD8BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23928
	ctx.r3.s64 = ctx.r11.s64 + 23928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8BFC"))) PPC_WEAK_FUNC(sub_83BD8BFC);
PPC_FUNC_IMPL(__imp__sub_83BD8BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8C00"))) PPC_WEAK_FUNC(sub_83BD8C00);
PPC_FUNC_IMPL(__imp__sub_83BD8C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23936
	ctx.r3.s64 = ctx.r11.s64 + 23936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8C0C"))) PPC_WEAK_FUNC(sub_83BD8C0C);
PPC_FUNC_IMPL(__imp__sub_83BD8C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8C10"))) PPC_WEAK_FUNC(sub_83BD8C10);
PPC_FUNC_IMPL(__imp__sub_83BD8C10) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-29424
	ctx.r3.s64 = ctx.r11.s64 + -29424;
	// bl 0x83523120
	ctx.lr = 0x83BD8C28;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23944
	ctx.r3.s64 = ctx.r10.s64 + 23944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8C34;
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

__attribute__((alias("__imp__sub_83BD8C44"))) PPC_WEAK_FUNC(sub_83BD8C44);
PPC_FUNC_IMPL(__imp__sub_83BD8C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8C48"))) PPC_WEAK_FUNC(sub_83BD8C48);
PPC_FUNC_IMPL(__imp__sub_83BD8C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
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

__attribute__((alias("__imp__sub_83BD8C70"))) PPC_WEAK_FUNC(sub_83BD8C70);
PPC_FUNC_IMPL(__imp__sub_83BD8C70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-30824
	ctx.r6.s64 = ctx.r7.s64 + -30824;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30896(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30896);
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
	// std r9,-30824(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30824, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8CB8"))) PPC_WEAK_FUNC(sub_83BD8CB8);
PPC_FUNC_IMPL(__imp__sub_83BD8CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8CC4"))) PPC_WEAK_FUNC(sub_83BD8CC4);
PPC_FUNC_IMPL(__imp__sub_83BD8CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8CC8"))) PPC_WEAK_FUNC(sub_83BD8CC8);
PPC_FUNC_IMPL(__imp__sub_83BD8CC8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-29400
	ctx.r3.s64 = ctx.r11.s64 + -29400;
	// bl 0x8259af80
	ctx.lr = 0x83BD8CE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23976
	ctx.r3.s64 = ctx.r10.s64 + 23976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8CEC;
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

__attribute__((alias("__imp__sub_83BD8CFC"))) PPC_WEAK_FUNC(sub_83BD8CFC);
PPC_FUNC_IMPL(__imp__sub_83BD8CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8D00"))) PPC_WEAK_FUNC(sub_83BD8D00);
PPC_FUNC_IMPL(__imp__sub_83BD8D00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29420
	ctx.r11.s64 = ctx.r8.s64 + -29420;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-30848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30848);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23968
	ctx.r3.s64 = ctx.r6.s64 + 23968;
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

__attribute__((alias("__imp__sub_83BD8D30"))) PPC_WEAK_FUNC(sub_83BD8D30);
PPC_FUNC_IMPL(__imp__sub_83BD8D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8D3C"))) PPC_WEAK_FUNC(sub_83BD8D3C);
PPC_FUNC_IMPL(__imp__sub_83BD8D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8D40"))) PPC_WEAK_FUNC(sub_83BD8D40);
PPC_FUNC_IMPL(__imp__sub_83BD8D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23992
	ctx.r3.s64 = ctx.r11.s64 + 23992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8D4C"))) PPC_WEAK_FUNC(sub_83BD8D4C);
PPC_FUNC_IMPL(__imp__sub_83BD8D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8D50"))) PPC_WEAK_FUNC(sub_83BD8D50);
PPC_FUNC_IMPL(__imp__sub_83BD8D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24000
	ctx.r3.s64 = ctx.r11.s64 + 24000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8D5C"))) PPC_WEAK_FUNC(sub_83BD8D5C);
PPC_FUNC_IMPL(__imp__sub_83BD8D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8D60"))) PPC_WEAK_FUNC(sub_83BD8D60);
PPC_FUNC_IMPL(__imp__sub_83BD8D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24008
	ctx.r3.s64 = ctx.r11.s64 + 24008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8D6C"))) PPC_WEAK_FUNC(sub_83BD8D6C);
PPC_FUNC_IMPL(__imp__sub_83BD8D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8D70"))) PPC_WEAK_FUNC(sub_83BD8D70);
PPC_FUNC_IMPL(__imp__sub_83BD8D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24016
	ctx.r3.s64 = ctx.r11.s64 + 24016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8D7C"))) PPC_WEAK_FUNC(sub_83BD8D7C);
PPC_FUNC_IMPL(__imp__sub_83BD8D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8D80"))) PPC_WEAK_FUNC(sub_83BD8D80);
PPC_FUNC_IMPL(__imp__sub_83BD8D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24024
	ctx.r3.s64 = ctx.r11.s64 + 24024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8D8C"))) PPC_WEAK_FUNC(sub_83BD8D8C);
PPC_FUNC_IMPL(__imp__sub_83BD8D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8D90"))) PPC_WEAK_FUNC(sub_83BD8D90);
PPC_FUNC_IMPL(__imp__sub_83BD8D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24032
	ctx.r3.s64 = ctx.r11.s64 + 24032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8D9C"))) PPC_WEAK_FUNC(sub_83BD8D9C);
PPC_FUNC_IMPL(__imp__sub_83BD8D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8DA0"))) PPC_WEAK_FUNC(sub_83BD8DA0);
PPC_FUNC_IMPL(__imp__sub_83BD8DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24040
	ctx.r3.s64 = ctx.r11.s64 + 24040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8DAC"))) PPC_WEAK_FUNC(sub_83BD8DAC);
PPC_FUNC_IMPL(__imp__sub_83BD8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8DB0"))) PPC_WEAK_FUNC(sub_83BD8DB0);
PPC_FUNC_IMPL(__imp__sub_83BD8DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24048
	ctx.r3.s64 = ctx.r11.s64 + 24048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8DBC"))) PPC_WEAK_FUNC(sub_83BD8DBC);
PPC_FUNC_IMPL(__imp__sub_83BD8DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8DC0"))) PPC_WEAK_FUNC(sub_83BD8DC0);
PPC_FUNC_IMPL(__imp__sub_83BD8DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24056
	ctx.r3.s64 = ctx.r11.s64 + 24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8DCC"))) PPC_WEAK_FUNC(sub_83BD8DCC);
PPC_FUNC_IMPL(__imp__sub_83BD8DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8DD0"))) PPC_WEAK_FUNC(sub_83BD8DD0);
PPC_FUNC_IMPL(__imp__sub_83BD8DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24064
	ctx.r3.s64 = ctx.r11.s64 + 24064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8DDC"))) PPC_WEAK_FUNC(sub_83BD8DDC);
PPC_FUNC_IMPL(__imp__sub_83BD8DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8DE0"))) PPC_WEAK_FUNC(sub_83BD8DE0);
PPC_FUNC_IMPL(__imp__sub_83BD8DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8DEC"))) PPC_WEAK_FUNC(sub_83BD8DEC);
PPC_FUNC_IMPL(__imp__sub_83BD8DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8DF0"))) PPC_WEAK_FUNC(sub_83BD8DF0);
PPC_FUNC_IMPL(__imp__sub_83BD8DF0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-29056
	ctx.r3.s64 = ctx.r11.s64 + -29056;
	// bl 0x83523120
	ctx.lr = 0x83BD8E08;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24080
	ctx.r3.s64 = ctx.r10.s64 + 24080;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8E14;
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

__attribute__((alias("__imp__sub_83BD8E24"))) PPC_WEAK_FUNC(sub_83BD8E24);
PPC_FUNC_IMPL(__imp__sub_83BD8E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8E28"))) PPC_WEAK_FUNC(sub_83BD8E28);
PPC_FUNC_IMPL(__imp__sub_83BD8E28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
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

__attribute__((alias("__imp__sub_83BD8E50"))) PPC_WEAK_FUNC(sub_83BD8E50);
PPC_FUNC_IMPL(__imp__sub_83BD8E50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-30688
	ctx.r6.s64 = ctx.r7.s64 + -30688;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30768(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30768);
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
	// std r9,-30688(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30688, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8E98"))) PPC_WEAK_FUNC(sub_83BD8E98);
PPC_FUNC_IMPL(__imp__sub_83BD8E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24096
	ctx.r3.s64 = ctx.r11.s64 + 24096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8EA4"))) PPC_WEAK_FUNC(sub_83BD8EA4);
PPC_FUNC_IMPL(__imp__sub_83BD8EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8EA8"))) PPC_WEAK_FUNC(sub_83BD8EA8);
PPC_FUNC_IMPL(__imp__sub_83BD8EA8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-29032
	ctx.r3.s64 = ctx.r11.s64 + -29032;
	// bl 0x8259af80
	ctx.lr = 0x83BD8EC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24112
	ctx.r3.s64 = ctx.r10.s64 + 24112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8ECC;
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

__attribute__((alias("__imp__sub_83BD8EDC"))) PPC_WEAK_FUNC(sub_83BD8EDC);
PPC_FUNC_IMPL(__imp__sub_83BD8EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8EE0"))) PPC_WEAK_FUNC(sub_83BD8EE0);
PPC_FUNC_IMPL(__imp__sub_83BD8EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29052
	ctx.r11.s64 = ctx.r8.s64 + -29052;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-30720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30720);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24104
	ctx.r3.s64 = ctx.r6.s64 + 24104;
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

__attribute__((alias("__imp__sub_83BD8F10"))) PPC_WEAK_FUNC(sub_83BD8F10);
PPC_FUNC_IMPL(__imp__sub_83BD8F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24120
	ctx.r3.s64 = ctx.r11.s64 + 24120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F1C"))) PPC_WEAK_FUNC(sub_83BD8F1C);
PPC_FUNC_IMPL(__imp__sub_83BD8F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8F20"))) PPC_WEAK_FUNC(sub_83BD8F20);
PPC_FUNC_IMPL(__imp__sub_83BD8F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24128
	ctx.r3.s64 = ctx.r11.s64 + 24128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F2C"))) PPC_WEAK_FUNC(sub_83BD8F2C);
PPC_FUNC_IMPL(__imp__sub_83BD8F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8F30"))) PPC_WEAK_FUNC(sub_83BD8F30);
PPC_FUNC_IMPL(__imp__sub_83BD8F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24136
	ctx.r3.s64 = ctx.r11.s64 + 24136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F3C"))) PPC_WEAK_FUNC(sub_83BD8F3C);
PPC_FUNC_IMPL(__imp__sub_83BD8F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8F40"))) PPC_WEAK_FUNC(sub_83BD8F40);
PPC_FUNC_IMPL(__imp__sub_83BD8F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F4C"))) PPC_WEAK_FUNC(sub_83BD8F4C);
PPC_FUNC_IMPL(__imp__sub_83BD8F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8F50"))) PPC_WEAK_FUNC(sub_83BD8F50);
PPC_FUNC_IMPL(__imp__sub_83BD8F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24152
	ctx.r3.s64 = ctx.r11.s64 + 24152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F5C"))) PPC_WEAK_FUNC(sub_83BD8F5C);
PPC_FUNC_IMPL(__imp__sub_83BD8F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8F60"))) PPC_WEAK_FUNC(sub_83BD8F60);
PPC_FUNC_IMPL(__imp__sub_83BD8F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24160
	ctx.r3.s64 = ctx.r11.s64 + 24160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F6C"))) PPC_WEAK_FUNC(sub_83BD8F6C);
PPC_FUNC_IMPL(__imp__sub_83BD8F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8F70"))) PPC_WEAK_FUNC(sub_83BD8F70);
PPC_FUNC_IMPL(__imp__sub_83BD8F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24168
	ctx.r3.s64 = ctx.r11.s64 + 24168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F7C"))) PPC_WEAK_FUNC(sub_83BD8F7C);
PPC_FUNC_IMPL(__imp__sub_83BD8F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8F80"))) PPC_WEAK_FUNC(sub_83BD8F80);
PPC_FUNC_IMPL(__imp__sub_83BD8F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24176
	ctx.r3.s64 = ctx.r11.s64 + 24176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F8C"))) PPC_WEAK_FUNC(sub_83BD8F8C);
PPC_FUNC_IMPL(__imp__sub_83BD8F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8F90"))) PPC_WEAK_FUNC(sub_83BD8F90);
PPC_FUNC_IMPL(__imp__sub_83BD8F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24184
	ctx.r3.s64 = ctx.r11.s64 + 24184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8F9C"))) PPC_WEAK_FUNC(sub_83BD8F9C);
PPC_FUNC_IMPL(__imp__sub_83BD8F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8FA0"))) PPC_WEAK_FUNC(sub_83BD8FA0);
PPC_FUNC_IMPL(__imp__sub_83BD8FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24192
	ctx.r3.s64 = ctx.r11.s64 + 24192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8FAC"))) PPC_WEAK_FUNC(sub_83BD8FAC);
PPC_FUNC_IMPL(__imp__sub_83BD8FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8FB0"))) PPC_WEAK_FUNC(sub_83BD8FB0);
PPC_FUNC_IMPL(__imp__sub_83BD8FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24200
	ctx.r3.s64 = ctx.r11.s64 + 24200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8FBC"))) PPC_WEAK_FUNC(sub_83BD8FBC);
PPC_FUNC_IMPL(__imp__sub_83BD8FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8FC0"))) PPC_WEAK_FUNC(sub_83BD8FC0);
PPC_FUNC_IMPL(__imp__sub_83BD8FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24208
	ctx.r3.s64 = ctx.r11.s64 + 24208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8FCC"))) PPC_WEAK_FUNC(sub_83BD8FCC);
PPC_FUNC_IMPL(__imp__sub_83BD8FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8FD0"))) PPC_WEAK_FUNC(sub_83BD8FD0);
PPC_FUNC_IMPL(__imp__sub_83BD8FD0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-28688
	ctx.r3.s64 = ctx.r11.s64 + -28688;
	// bl 0x83523120
	ctx.lr = 0x83BD8FE8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24216
	ctx.r3.s64 = ctx.r10.s64 + 24216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8FF4;
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

__attribute__((alias("__imp__sub_83BD9004"))) PPC_WEAK_FUNC(sub_83BD9004);
PPC_FUNC_IMPL(__imp__sub_83BD9004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9008"))) PPC_WEAK_FUNC(sub_83BD9008);
PPC_FUNC_IMPL(__imp__sub_83BD9008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28672
	ctx.r7.s64 = ctx.r8.s64 + -28672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9030"))) PPC_WEAK_FUNC(sub_83BD9030);
PPC_FUNC_IMPL(__imp__sub_83BD9030) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-30512
	ctx.r6.s64 = ctx.r7.s64 + -30512;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30584(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30584);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28672);
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
	// std r9,-30512(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30512, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9078"))) PPC_WEAK_FUNC(sub_83BD9078);
PPC_FUNC_IMPL(__imp__sub_83BD9078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24232
	ctx.r3.s64 = ctx.r11.s64 + 24232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9084"))) PPC_WEAK_FUNC(sub_83BD9084);
PPC_FUNC_IMPL(__imp__sub_83BD9084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9088"))) PPC_WEAK_FUNC(sub_83BD9088);
PPC_FUNC_IMPL(__imp__sub_83BD9088) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-28664
	ctx.r3.s64 = ctx.r11.s64 + -28664;
	// bl 0x8259af80
	ctx.lr = 0x83BD90A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24248
	ctx.r3.s64 = ctx.r10.s64 + 24248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD90AC;
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

__attribute__((alias("__imp__sub_83BD90BC"))) PPC_WEAK_FUNC(sub_83BD90BC);
PPC_FUNC_IMPL(__imp__sub_83BD90BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD90C0"))) PPC_WEAK_FUNC(sub_83BD90C0);
PPC_FUNC_IMPL(__imp__sub_83BD90C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28684
	ctx.r11.s64 = ctx.r8.s64 + -28684;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-30536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30536);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24240
	ctx.r3.s64 = ctx.r6.s64 + 24240;
	// stw r10,-28684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28684, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD90F0"))) PPC_WEAK_FUNC(sub_83BD90F0);
PPC_FUNC_IMPL(__imp__sub_83BD90F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24256
	ctx.r3.s64 = ctx.r11.s64 + 24256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD90FC"))) PPC_WEAK_FUNC(sub_83BD90FC);
PPC_FUNC_IMPL(__imp__sub_83BD90FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9100"))) PPC_WEAK_FUNC(sub_83BD9100);
PPC_FUNC_IMPL(__imp__sub_83BD9100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24264
	ctx.r3.s64 = ctx.r11.s64 + 24264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD910C"))) PPC_WEAK_FUNC(sub_83BD910C);
PPC_FUNC_IMPL(__imp__sub_83BD910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9110"))) PPC_WEAK_FUNC(sub_83BD9110);
PPC_FUNC_IMPL(__imp__sub_83BD9110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24272
	ctx.r3.s64 = ctx.r11.s64 + 24272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD911C"))) PPC_WEAK_FUNC(sub_83BD911C);
PPC_FUNC_IMPL(__imp__sub_83BD911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9120"))) PPC_WEAK_FUNC(sub_83BD9120);
PPC_FUNC_IMPL(__imp__sub_83BD9120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24280
	ctx.r3.s64 = ctx.r11.s64 + 24280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD912C"))) PPC_WEAK_FUNC(sub_83BD912C);
PPC_FUNC_IMPL(__imp__sub_83BD912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9130"))) PPC_WEAK_FUNC(sub_83BD9130);
PPC_FUNC_IMPL(__imp__sub_83BD9130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24288
	ctx.r3.s64 = ctx.r11.s64 + 24288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD913C"))) PPC_WEAK_FUNC(sub_83BD913C);
PPC_FUNC_IMPL(__imp__sub_83BD913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9140"))) PPC_WEAK_FUNC(sub_83BD9140);
PPC_FUNC_IMPL(__imp__sub_83BD9140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24296
	ctx.r3.s64 = ctx.r11.s64 + 24296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD914C"))) PPC_WEAK_FUNC(sub_83BD914C);
PPC_FUNC_IMPL(__imp__sub_83BD914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9150"))) PPC_WEAK_FUNC(sub_83BD9150);
PPC_FUNC_IMPL(__imp__sub_83BD9150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24304
	ctx.r3.s64 = ctx.r11.s64 + 24304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD915C"))) PPC_WEAK_FUNC(sub_83BD915C);
PPC_FUNC_IMPL(__imp__sub_83BD915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9160"))) PPC_WEAK_FUNC(sub_83BD9160);
PPC_FUNC_IMPL(__imp__sub_83BD9160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24312
	ctx.r3.s64 = ctx.r11.s64 + 24312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD916C"))) PPC_WEAK_FUNC(sub_83BD916C);
PPC_FUNC_IMPL(__imp__sub_83BD916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9170"))) PPC_WEAK_FUNC(sub_83BD9170);
PPC_FUNC_IMPL(__imp__sub_83BD9170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24320
	ctx.r3.s64 = ctx.r11.s64 + 24320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD917C"))) PPC_WEAK_FUNC(sub_83BD917C);
PPC_FUNC_IMPL(__imp__sub_83BD917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9180"))) PPC_WEAK_FUNC(sub_83BD9180);
PPC_FUNC_IMPL(__imp__sub_83BD9180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24328
	ctx.r3.s64 = ctx.r11.s64 + 24328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD918C"))) PPC_WEAK_FUNC(sub_83BD918C);
PPC_FUNC_IMPL(__imp__sub_83BD918C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9190"))) PPC_WEAK_FUNC(sub_83BD9190);
PPC_FUNC_IMPL(__imp__sub_83BD9190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24336
	ctx.r3.s64 = ctx.r11.s64 + 24336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD919C"))) PPC_WEAK_FUNC(sub_83BD919C);
PPC_FUNC_IMPL(__imp__sub_83BD919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD91A0"))) PPC_WEAK_FUNC(sub_83BD91A0);
PPC_FUNC_IMPL(__imp__sub_83BD91A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24344
	ctx.r3.s64 = ctx.r11.s64 + 24344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD91AC"))) PPC_WEAK_FUNC(sub_83BD91AC);
PPC_FUNC_IMPL(__imp__sub_83BD91AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD91B0"))) PPC_WEAK_FUNC(sub_83BD91B0);
PPC_FUNC_IMPL(__imp__sub_83BD91B0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-28280
	ctx.r3.s64 = ctx.r11.s64 + -28280;
	// bl 0x83523120
	ctx.lr = 0x83BD91C8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24352
	ctx.r3.s64 = ctx.r10.s64 + 24352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD91D4;
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

__attribute__((alias("__imp__sub_83BD91E4"))) PPC_WEAK_FUNC(sub_83BD91E4);
PPC_FUNC_IMPL(__imp__sub_83BD91E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD91E8"))) PPC_WEAK_FUNC(sub_83BD91E8);
PPC_FUNC_IMPL(__imp__sub_83BD91E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28264
	ctx.r7.s64 = ctx.r8.s64 + -28264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28264);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28264(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28264, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9210"))) PPC_WEAK_FUNC(sub_83BD9210);
PPC_FUNC_IMPL(__imp__sub_83BD9210) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-30384
	ctx.r6.s64 = ctx.r7.s64 + -30384;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30456(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30456);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28264);
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
	// std r9,-30384(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9258"))) PPC_WEAK_FUNC(sub_83BD9258);
PPC_FUNC_IMPL(__imp__sub_83BD9258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24368
	ctx.r3.s64 = ctx.r11.s64 + 24368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9264"))) PPC_WEAK_FUNC(sub_83BD9264);
PPC_FUNC_IMPL(__imp__sub_83BD9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9268"))) PPC_WEAK_FUNC(sub_83BD9268);
PPC_FUNC_IMPL(__imp__sub_83BD9268) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-28256
	ctx.r3.s64 = ctx.r11.s64 + -28256;
	// bl 0x8259af80
	ctx.lr = 0x83BD9280;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24384
	ctx.r3.s64 = ctx.r10.s64 + 24384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD928C;
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

__attribute__((alias("__imp__sub_83BD929C"))) PPC_WEAK_FUNC(sub_83BD929C);
PPC_FUNC_IMPL(__imp__sub_83BD929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD92A0"))) PPC_WEAK_FUNC(sub_83BD92A0);
PPC_FUNC_IMPL(__imp__sub_83BD92A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28276
	ctx.r11.s64 = ctx.r8.s64 + -28276;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-30408(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30408);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24376
	ctx.r3.s64 = ctx.r6.s64 + 24376;
	// stw r10,-28276(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28276, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD92D0"))) PPC_WEAK_FUNC(sub_83BD92D0);
PPC_FUNC_IMPL(__imp__sub_83BD92D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24408
	ctx.r3.s64 = ctx.r11.s64 + 24408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD92DC"))) PPC_WEAK_FUNC(sub_83BD92DC);
PPC_FUNC_IMPL(__imp__sub_83BD92DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD92E0"))) PPC_WEAK_FUNC(sub_83BD92E0);
PPC_FUNC_IMPL(__imp__sub_83BD92E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24416
	ctx.r3.s64 = ctx.r11.s64 + 24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD92EC"))) PPC_WEAK_FUNC(sub_83BD92EC);
PPC_FUNC_IMPL(__imp__sub_83BD92EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD92F0"))) PPC_WEAK_FUNC(sub_83BD92F0);
PPC_FUNC_IMPL(__imp__sub_83BD92F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24424
	ctx.r3.s64 = ctx.r11.s64 + 24424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD92FC"))) PPC_WEAK_FUNC(sub_83BD92FC);
PPC_FUNC_IMPL(__imp__sub_83BD92FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9300"))) PPC_WEAK_FUNC(sub_83BD9300);
PPC_FUNC_IMPL(__imp__sub_83BD9300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD930C"))) PPC_WEAK_FUNC(sub_83BD930C);
PPC_FUNC_IMPL(__imp__sub_83BD930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9310"))) PPC_WEAK_FUNC(sub_83BD9310);
PPC_FUNC_IMPL(__imp__sub_83BD9310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24440
	ctx.r3.s64 = ctx.r11.s64 + 24440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD931C"))) PPC_WEAK_FUNC(sub_83BD931C);
PPC_FUNC_IMPL(__imp__sub_83BD931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9320"))) PPC_WEAK_FUNC(sub_83BD9320);
PPC_FUNC_IMPL(__imp__sub_83BD9320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24448
	ctx.r3.s64 = ctx.r11.s64 + 24448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD932C"))) PPC_WEAK_FUNC(sub_83BD932C);
PPC_FUNC_IMPL(__imp__sub_83BD932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9330"))) PPC_WEAK_FUNC(sub_83BD9330);
PPC_FUNC_IMPL(__imp__sub_83BD9330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24456
	ctx.r3.s64 = ctx.r11.s64 + 24456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD933C"))) PPC_WEAK_FUNC(sub_83BD933C);
PPC_FUNC_IMPL(__imp__sub_83BD933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9340"))) PPC_WEAK_FUNC(sub_83BD9340);
PPC_FUNC_IMPL(__imp__sub_83BD9340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24464
	ctx.r3.s64 = ctx.r11.s64 + 24464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD934C"))) PPC_WEAK_FUNC(sub_83BD934C);
PPC_FUNC_IMPL(__imp__sub_83BD934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9350"))) PPC_WEAK_FUNC(sub_83BD9350);
PPC_FUNC_IMPL(__imp__sub_83BD9350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24472
	ctx.r3.s64 = ctx.r11.s64 + 24472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD935C"))) PPC_WEAK_FUNC(sub_83BD935C);
PPC_FUNC_IMPL(__imp__sub_83BD935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9360"))) PPC_WEAK_FUNC(sub_83BD9360);
PPC_FUNC_IMPL(__imp__sub_83BD9360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24480
	ctx.r3.s64 = ctx.r11.s64 + 24480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD936C"))) PPC_WEAK_FUNC(sub_83BD936C);
PPC_FUNC_IMPL(__imp__sub_83BD936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9370"))) PPC_WEAK_FUNC(sub_83BD9370);
PPC_FUNC_IMPL(__imp__sub_83BD9370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24488
	ctx.r3.s64 = ctx.r11.s64 + 24488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD937C"))) PPC_WEAK_FUNC(sub_83BD937C);
PPC_FUNC_IMPL(__imp__sub_83BD937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9380"))) PPC_WEAK_FUNC(sub_83BD9380);
PPC_FUNC_IMPL(__imp__sub_83BD9380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24496
	ctx.r3.s64 = ctx.r11.s64 + 24496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD938C"))) PPC_WEAK_FUNC(sub_83BD938C);
PPC_FUNC_IMPL(__imp__sub_83BD938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9390"))) PPC_WEAK_FUNC(sub_83BD9390);
PPC_FUNC_IMPL(__imp__sub_83BD9390) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-27912
	ctx.r3.s64 = ctx.r11.s64 + -27912;
	// bl 0x83523120
	ctx.lr = 0x83BD93A8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24504
	ctx.r3.s64 = ctx.r10.s64 + 24504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD93B4;
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

__attribute__((alias("__imp__sub_83BD93C4"))) PPC_WEAK_FUNC(sub_83BD93C4);
PPC_FUNC_IMPL(__imp__sub_83BD93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD93C8"))) PPC_WEAK_FUNC(sub_83BD93C8);
PPC_FUNC_IMPL(__imp__sub_83BD93C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27896
	ctx.r7.s64 = ctx.r8.s64 + -27896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27896(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD93F0"))) PPC_WEAK_FUNC(sub_83BD93F0);
PPC_FUNC_IMPL(__imp__sub_83BD93F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-30200
	ctx.r6.s64 = ctx.r7.s64 + -30200;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30272(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30272);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27896(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27896);
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
	// std r9,-30200(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30200, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9438"))) PPC_WEAK_FUNC(sub_83BD9438);
PPC_FUNC_IMPL(__imp__sub_83BD9438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24520
	ctx.r3.s64 = ctx.r11.s64 + 24520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9444"))) PPC_WEAK_FUNC(sub_83BD9444);
PPC_FUNC_IMPL(__imp__sub_83BD9444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9448"))) PPC_WEAK_FUNC(sub_83BD9448);
PPC_FUNC_IMPL(__imp__sub_83BD9448) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-27888
	ctx.r3.s64 = ctx.r11.s64 + -27888;
	// bl 0x8259af80
	ctx.lr = 0x83BD9460;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24536
	ctx.r3.s64 = ctx.r10.s64 + 24536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD946C;
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

__attribute__((alias("__imp__sub_83BD947C"))) PPC_WEAK_FUNC(sub_83BD947C);
PPC_FUNC_IMPL(__imp__sub_83BD947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9480"))) PPC_WEAK_FUNC(sub_83BD9480);
PPC_FUNC_IMPL(__imp__sub_83BD9480) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27908
	ctx.r11.s64 = ctx.r8.s64 + -27908;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-30224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30224);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24528
	ctx.r3.s64 = ctx.r6.s64 + 24528;
	// stw r10,-27908(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27908, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD94B0"))) PPC_WEAK_FUNC(sub_83BD94B0);
PPC_FUNC_IMPL(__imp__sub_83BD94B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24544
	ctx.r3.s64 = ctx.r11.s64 + 24544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD94BC"))) PPC_WEAK_FUNC(sub_83BD94BC);
PPC_FUNC_IMPL(__imp__sub_83BD94BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD94C0"))) PPC_WEAK_FUNC(sub_83BD94C0);
PPC_FUNC_IMPL(__imp__sub_83BD94C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24552
	ctx.r3.s64 = ctx.r11.s64 + 24552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD94CC"))) PPC_WEAK_FUNC(sub_83BD94CC);
PPC_FUNC_IMPL(__imp__sub_83BD94CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD94D0"))) PPC_WEAK_FUNC(sub_83BD94D0);
PPC_FUNC_IMPL(__imp__sub_83BD94D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24560
	ctx.r3.s64 = ctx.r11.s64 + 24560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD94DC"))) PPC_WEAK_FUNC(sub_83BD94DC);
PPC_FUNC_IMPL(__imp__sub_83BD94DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD94E0"))) PPC_WEAK_FUNC(sub_83BD94E0);
PPC_FUNC_IMPL(__imp__sub_83BD94E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24568
	ctx.r3.s64 = ctx.r11.s64 + 24568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD94EC"))) PPC_WEAK_FUNC(sub_83BD94EC);
PPC_FUNC_IMPL(__imp__sub_83BD94EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD94F0"))) PPC_WEAK_FUNC(sub_83BD94F0);
PPC_FUNC_IMPL(__imp__sub_83BD94F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD94FC"))) PPC_WEAK_FUNC(sub_83BD94FC);
PPC_FUNC_IMPL(__imp__sub_83BD94FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9500"))) PPC_WEAK_FUNC(sub_83BD9500);
PPC_FUNC_IMPL(__imp__sub_83BD9500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24584
	ctx.r3.s64 = ctx.r11.s64 + 24584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD950C"))) PPC_WEAK_FUNC(sub_83BD950C);
PPC_FUNC_IMPL(__imp__sub_83BD950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9510"))) PPC_WEAK_FUNC(sub_83BD9510);
PPC_FUNC_IMPL(__imp__sub_83BD9510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24592
	ctx.r3.s64 = ctx.r11.s64 + 24592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD951C"))) PPC_WEAK_FUNC(sub_83BD951C);
PPC_FUNC_IMPL(__imp__sub_83BD951C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9520"))) PPC_WEAK_FUNC(sub_83BD9520);
PPC_FUNC_IMPL(__imp__sub_83BD9520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24600
	ctx.r3.s64 = ctx.r11.s64 + 24600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD952C"))) PPC_WEAK_FUNC(sub_83BD952C);
PPC_FUNC_IMPL(__imp__sub_83BD952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9530"))) PPC_WEAK_FUNC(sub_83BD9530);
PPC_FUNC_IMPL(__imp__sub_83BD9530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24608
	ctx.r3.s64 = ctx.r11.s64 + 24608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD953C"))) PPC_WEAK_FUNC(sub_83BD953C);
PPC_FUNC_IMPL(__imp__sub_83BD953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9540"))) PPC_WEAK_FUNC(sub_83BD9540);
PPC_FUNC_IMPL(__imp__sub_83BD9540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24616
	ctx.r3.s64 = ctx.r11.s64 + 24616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD954C"))) PPC_WEAK_FUNC(sub_83BD954C);
PPC_FUNC_IMPL(__imp__sub_83BD954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9550"))) PPC_WEAK_FUNC(sub_83BD9550);
PPC_FUNC_IMPL(__imp__sub_83BD9550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD955C"))) PPC_WEAK_FUNC(sub_83BD955C);
PPC_FUNC_IMPL(__imp__sub_83BD955C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9560"))) PPC_WEAK_FUNC(sub_83BD9560);
PPC_FUNC_IMPL(__imp__sub_83BD9560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24632
	ctx.r3.s64 = ctx.r11.s64 + 24632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD956C"))) PPC_WEAK_FUNC(sub_83BD956C);
PPC_FUNC_IMPL(__imp__sub_83BD956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

