#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BC77C8"))) PPC_WEAK_FUNC(sub_83BC77C8);
PPC_FUNC_IMPL(__imp__sub_83BC77C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3712
	ctx.r3.s64 = ctx.r11.s64 + 3712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC77D4"))) PPC_WEAK_FUNC(sub_83BC77D4);
PPC_FUNC_IMPL(__imp__sub_83BC77D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC77D8"))) PPC_WEAK_FUNC(sub_83BC77D8);
PPC_FUNC_IMPL(__imp__sub_83BC77D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3720
	ctx.r3.s64 = ctx.r11.s64 + 3720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC77E4"))) PPC_WEAK_FUNC(sub_83BC77E4);
PPC_FUNC_IMPL(__imp__sub_83BC77E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC77E8"))) PPC_WEAK_FUNC(sub_83BC77E8);
PPC_FUNC_IMPL(__imp__sub_83BC77E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3728
	ctx.r3.s64 = ctx.r11.s64 + 3728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC77F4"))) PPC_WEAK_FUNC(sub_83BC77F4);
PPC_FUNC_IMPL(__imp__sub_83BC77F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC77F8"))) PPC_WEAK_FUNC(sub_83BC77F8);
PPC_FUNC_IMPL(__imp__sub_83BC77F8) {
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
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// bl 0x83523120
	ctx.lr = 0x83BC7810;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,3736
	ctx.r3.s64 = ctx.r10.s64 + 3736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC781C;
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

__attribute__((alias("__imp__sub_83BC782C"))) PPC_WEAK_FUNC(sub_83BC782C);
PPC_FUNC_IMPL(__imp__sub_83BC782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7830"))) PPC_WEAK_FUNC(sub_83BC7830);
PPC_FUNC_IMPL(__imp__sub_83BC7830) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11672
	ctx.r7.s64 = ctx.r8.s64 + -11672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7858"))) PPC_WEAK_FUNC(sub_83BC7858);
PPC_FUNC_IMPL(__imp__sub_83BC7858) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,8596
	ctx.r6.s64 = ctx.r7.s64 + 8596;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8524(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8524);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11672);
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
	// std r9,8596(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8596, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC78A0"))) PPC_WEAK_FUNC(sub_83BC78A0);
PPC_FUNC_IMPL(__imp__sub_83BC78A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3752
	ctx.r3.s64 = ctx.r11.s64 + 3752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC78AC"))) PPC_WEAK_FUNC(sub_83BC78AC);
PPC_FUNC_IMPL(__imp__sub_83BC78AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC78B0"))) PPC_WEAK_FUNC(sub_83BC78B0);
PPC_FUNC_IMPL(__imp__sub_83BC78B0) {
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
	// addi r3,r11,-11664
	ctx.r3.s64 = ctx.r11.s64 + -11664;
	// bl 0x8259af80
	ctx.lr = 0x83BC78C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,3768
	ctx.r3.s64 = ctx.r10.s64 + 3768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC78D4;
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

__attribute__((alias("__imp__sub_83BC78E4"))) PPC_WEAK_FUNC(sub_83BC78E4);
PPC_FUNC_IMPL(__imp__sub_83BC78E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC78E8"))) PPC_WEAK_FUNC(sub_83BC78E8);
PPC_FUNC_IMPL(__imp__sub_83BC78E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11684
	ctx.r11.s64 = ctx.r8.s64 + -11684;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,8572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8572);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3760
	ctx.r3.s64 = ctx.r6.s64 + 3760;
	// stw r10,-11684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11684, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7918"))) PPC_WEAK_FUNC(sub_83BC7918);
PPC_FUNC_IMPL(__imp__sub_83BC7918) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,28736
	ctx.r4.s64 = ctx.r11.s64 + 28736;
	// addi r3,r10,8620
	ctx.r3.s64 = ctx.r10.s64 + 8620;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC793C;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,3776
	ctx.r3.s64 = ctx.r9.s64 + 3776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7948;
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

__attribute__((alias("__imp__sub_83BC7958"))) PPC_WEAK_FUNC(sub_83BC7958);
PPC_FUNC_IMPL(__imp__sub_83BC7958) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83BC7960;
	__savegprlr_24(ctx, base);
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r9,r10,9080
	ctx.r9.s64 = ctx.r10.s64 + 9080;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lis r8,-32073
	ctx.r8.s64 = -2101936128;
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// lis r7,-32073
	ctx.r7.s64 = -2101936128;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// lis r6,-32073
	ctx.r6.s64 = -2101936128;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// lis r5,-32073
	ctx.r5.s64 = -2101936128;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// lis r4,-32073
	ctx.r4.s64 = -2101936128;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r10,-32073
	ctx.r10.s64 = -2101936128;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// addi r8,r8,7984
	ctx.r8.s64 = ctx.r8.s64 + 7984;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// addi r7,r7,9216
	ctx.r7.s64 = ctx.r7.s64 + 9216;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r6,r6,8096
	ctx.r6.s64 = ctx.r6.s64 + 8096;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// addi r5,r5,7568
	ctx.r5.s64 = ctx.r5.s64 + 7568;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r4,r4,8232
	ctx.r4.s64 = ctx.r4.s64 + 8232;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lis r9,-32073
	ctx.r9.s64 = -2101936128;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// lis r31,-32073
	ctx.r31.s64 = -2101936128;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r30,-32073
	ctx.r30.s64 = -2101936128;
	// lis r29,-32073
	ctx.r29.s64 = -2101936128;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r28,-32073
	ctx.r28.s64 = -2101936128;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// lis r27,-32073
	ctx.r27.s64 = -2101936128;
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// lis r3,-32073
	ctx.r3.s64 = -2101936128;
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// addi r11,r10,10336
	ctx.r11.s64 = ctx.r10.s64 + 10336;
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// lis r26,-32073
	ctx.r26.s64 = -2101936128;
	// stw r5,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r5.u32);
	// lis r25,-32073
	ctx.r25.s64 = -2101936128;
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// addi r10,r9,9448
	ctx.r10.s64 = ctx.r9.s64 + 9448;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r11.u32);
	// addi r9,r31,8304
	ctx.r9.s64 = ctx.r31.s64 + 8304;
	// ld r11,-208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r8,r30,7672
	ctx.r8.s64 = ctx.r30.s64 + 7672;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// addi r7,r29,8416
	ctx.r7.s64 = ctx.r29.s64 + 8416;
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r6,r28,7776
	ctx.r6.s64 = ctx.r28.s64 + 7776;
	// stw r8,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r8.u32);
	// addi r5,r27,8488
	ctx.r5.s64 = ctx.r27.s64 + 8488;
	// stw r7,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r7.u32);
	// addi r3,r3,12200
	ctx.r3.s64 = ctx.r3.s64 + 12200;
	// stw r6,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r6.u32);
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// stw r5,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r5.u32);
	// addi r26,r26,7880
	ctx.r26.s64 = ctx.r26.s64 + 7880;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// addi r25,r25,8560
	ctx.r25.s64 = ctx.r25.s64 + 8560;
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// addi r24,r4,8648
	ctx.r24.s64 = ctx.r4.s64 + 8648;
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// ld r8,-184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// ld r7,-176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// ld r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// ld r5,-160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// ld r4,-152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r3,-144(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r31,-136(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r30,-128(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r29,-120(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r28,-112(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r27,-104(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// stw r26,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r26.u32);
	// stw r25,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r25.u32);
	// ld r26,-96(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r25,-88(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r11,8(r24)
	PPC_STORE_U64(ctx.r24.u32 + 8, ctx.r11.u64);
	// std r10,16(r24)
	PPC_STORE_U64(ctx.r24.u32 + 16, ctx.r10.u64);
	// std r9,32(r24)
	PPC_STORE_U64(ctx.r24.u32 + 32, ctx.r9.u64);
	// std r8,40(r24)
	PPC_STORE_U64(ctx.r24.u32 + 40, ctx.r8.u64);
	// std r7,56(r24)
	PPC_STORE_U64(ctx.r24.u32 + 56, ctx.r7.u64);
	// std r6,64(r24)
	PPC_STORE_U64(ctx.r24.u32 + 64, ctx.r6.u64);
	// std r5,80(r24)
	PPC_STORE_U64(ctx.r24.u32 + 80, ctx.r5.u64);
	// std r4,88(r24)
	PPC_STORE_U64(ctx.r24.u32 + 88, ctx.r4.u64);
	// std r3,104(r24)
	PPC_STORE_U64(ctx.r24.u32 + 104, ctx.r3.u64);
	// std r31,112(r24)
	PPC_STORE_U64(ctx.r24.u32 + 112, ctx.r31.u64);
	// std r30,128(r24)
	PPC_STORE_U64(ctx.r24.u32 + 128, ctx.r30.u64);
	// std r29,136(r24)
	PPC_STORE_U64(ctx.r24.u32 + 136, ctx.r29.u64);
	// std r28,152(r24)
	PPC_STORE_U64(ctx.r24.u32 + 152, ctx.r28.u64);
	// std r27,160(r24)
	PPC_STORE_U64(ctx.r24.u32 + 160, ctx.r27.u64);
	// std r26,176(r24)
	PPC_STORE_U64(ctx.r24.u32 + 176, ctx.r26.u64);
	// std r25,184(r24)
	PPC_STORE_U64(ctx.r24.u32 + 184, ctx.r25.u64);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7AF0"))) PPC_WEAK_FUNC(sub_83BC7AF0);
PPC_FUNC_IMPL(__imp__sub_83BC7AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3880
	ctx.r3.s64 = ctx.r11.s64 + 3880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7AFC"))) PPC_WEAK_FUNC(sub_83BC7AFC);
PPC_FUNC_IMPL(__imp__sub_83BC7AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B00"))) PPC_WEAK_FUNC(sub_83BC7B00);
PPC_FUNC_IMPL(__imp__sub_83BC7B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3888
	ctx.r3.s64 = ctx.r11.s64 + 3888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B0C"))) PPC_WEAK_FUNC(sub_83BC7B0C);
PPC_FUNC_IMPL(__imp__sub_83BC7B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B10"))) PPC_WEAK_FUNC(sub_83BC7B10);
PPC_FUNC_IMPL(__imp__sub_83BC7B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3896
	ctx.r3.s64 = ctx.r11.s64 + 3896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B1C"))) PPC_WEAK_FUNC(sub_83BC7B1C);
PPC_FUNC_IMPL(__imp__sub_83BC7B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B20"))) PPC_WEAK_FUNC(sub_83BC7B20);
PPC_FUNC_IMPL(__imp__sub_83BC7B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3904
	ctx.r3.s64 = ctx.r11.s64 + 3904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B2C"))) PPC_WEAK_FUNC(sub_83BC7B2C);
PPC_FUNC_IMPL(__imp__sub_83BC7B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B30"))) PPC_WEAK_FUNC(sub_83BC7B30);
PPC_FUNC_IMPL(__imp__sub_83BC7B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3912
	ctx.r3.s64 = ctx.r11.s64 + 3912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B3C"))) PPC_WEAK_FUNC(sub_83BC7B3C);
PPC_FUNC_IMPL(__imp__sub_83BC7B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B40"))) PPC_WEAK_FUNC(sub_83BC7B40);
PPC_FUNC_IMPL(__imp__sub_83BC7B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3920
	ctx.r3.s64 = ctx.r11.s64 + 3920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B4C"))) PPC_WEAK_FUNC(sub_83BC7B4C);
PPC_FUNC_IMPL(__imp__sub_83BC7B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B50"))) PPC_WEAK_FUNC(sub_83BC7B50);
PPC_FUNC_IMPL(__imp__sub_83BC7B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3928
	ctx.r3.s64 = ctx.r11.s64 + 3928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B5C"))) PPC_WEAK_FUNC(sub_83BC7B5C);
PPC_FUNC_IMPL(__imp__sub_83BC7B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B60"))) PPC_WEAK_FUNC(sub_83BC7B60);
PPC_FUNC_IMPL(__imp__sub_83BC7B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3936
	ctx.r3.s64 = ctx.r11.s64 + 3936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B6C"))) PPC_WEAK_FUNC(sub_83BC7B6C);
PPC_FUNC_IMPL(__imp__sub_83BC7B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B70"))) PPC_WEAK_FUNC(sub_83BC7B70);
PPC_FUNC_IMPL(__imp__sub_83BC7B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3944
	ctx.r3.s64 = ctx.r11.s64 + 3944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B7C"))) PPC_WEAK_FUNC(sub_83BC7B7C);
PPC_FUNC_IMPL(__imp__sub_83BC7B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B80"))) PPC_WEAK_FUNC(sub_83BC7B80);
PPC_FUNC_IMPL(__imp__sub_83BC7B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3952
	ctx.r3.s64 = ctx.r11.s64 + 3952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B8C"))) PPC_WEAK_FUNC(sub_83BC7B8C);
PPC_FUNC_IMPL(__imp__sub_83BC7B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7B90"))) PPC_WEAK_FUNC(sub_83BC7B90);
PPC_FUNC_IMPL(__imp__sub_83BC7B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3960
	ctx.r3.s64 = ctx.r11.s64 + 3960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7B9C"))) PPC_WEAK_FUNC(sub_83BC7B9C);
PPC_FUNC_IMPL(__imp__sub_83BC7B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7BA0"))) PPC_WEAK_FUNC(sub_83BC7BA0);
PPC_FUNC_IMPL(__imp__sub_83BC7BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3968
	ctx.r3.s64 = ctx.r11.s64 + 3968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7BAC"))) PPC_WEAK_FUNC(sub_83BC7BAC);
PPC_FUNC_IMPL(__imp__sub_83BC7BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7BB0"))) PPC_WEAK_FUNC(sub_83BC7BB0);
PPC_FUNC_IMPL(__imp__sub_83BC7BB0) {
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
	// addi r3,r11,-11320
	ctx.r3.s64 = ctx.r11.s64 + -11320;
	// bl 0x83523120
	ctx.lr = 0x83BC7BC8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,3976
	ctx.r3.s64 = ctx.r10.s64 + 3976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7BD4;
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

__attribute__((alias("__imp__sub_83BC7BE4"))) PPC_WEAK_FUNC(sub_83BC7BE4);
PPC_FUNC_IMPL(__imp__sub_83BC7BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7BE8"))) PPC_WEAK_FUNC(sub_83BC7BE8);
PPC_FUNC_IMPL(__imp__sub_83BC7BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11304
	ctx.r7.s64 = ctx.r8.s64 + -11304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11304(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7C10"))) PPC_WEAK_FUNC(sub_83BC7C10);
PPC_FUNC_IMPL(__imp__sub_83BC7C10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,8944
	ctx.r6.s64 = ctx.r7.s64 + 8944;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11304);
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
	// std r9,8944(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8944, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7C58"))) PPC_WEAK_FUNC(sub_83BC7C58);
PPC_FUNC_IMPL(__imp__sub_83BC7C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,3992
	ctx.r3.s64 = ctx.r11.s64 + 3992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7C64"))) PPC_WEAK_FUNC(sub_83BC7C64);
PPC_FUNC_IMPL(__imp__sub_83BC7C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7C68"))) PPC_WEAK_FUNC(sub_83BC7C68);
PPC_FUNC_IMPL(__imp__sub_83BC7C68) {
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
	// addi r3,r11,-11296
	ctx.r3.s64 = ctx.r11.s64 + -11296;
	// bl 0x8259af80
	ctx.lr = 0x83BC7C80;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4008
	ctx.r3.s64 = ctx.r10.s64 + 4008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7C8C;
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

__attribute__((alias("__imp__sub_83BC7C9C"))) PPC_WEAK_FUNC(sub_83BC7C9C);
PPC_FUNC_IMPL(__imp__sub_83BC7C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7CA0"))) PPC_WEAK_FUNC(sub_83BC7CA0);
PPC_FUNC_IMPL(__imp__sub_83BC7CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11316
	ctx.r11.s64 = ctx.r8.s64 + -11316;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,8920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8920);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4000
	ctx.r3.s64 = ctx.r6.s64 + 4000;
	// stw r10,-11316(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7CD0"))) PPC_WEAK_FUNC(sub_83BC7CD0);
PPC_FUNC_IMPL(__imp__sub_83BC7CD0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,29976
	ctx.r4.s64 = ctx.r11.s64 + 29976;
	// addi r3,r10,8968
	ctx.r3.s64 = ctx.r10.s64 + 8968;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC7CF4;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,4016
	ctx.r3.s64 = ctx.r9.s64 + 4016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7D00;
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

__attribute__((alias("__imp__sub_83BC7D10"))) PPC_WEAK_FUNC(sub_83BC7D10);
PPC_FUNC_IMPL(__imp__sub_83BC7D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4120
	ctx.r3.s64 = ctx.r11.s64 + 4120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D1C"))) PPC_WEAK_FUNC(sub_83BC7D1C);
PPC_FUNC_IMPL(__imp__sub_83BC7D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7D20"))) PPC_WEAK_FUNC(sub_83BC7D20);
PPC_FUNC_IMPL(__imp__sub_83BC7D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4128
	ctx.r3.s64 = ctx.r11.s64 + 4128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D2C"))) PPC_WEAK_FUNC(sub_83BC7D2C);
PPC_FUNC_IMPL(__imp__sub_83BC7D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7D30"))) PPC_WEAK_FUNC(sub_83BC7D30);
PPC_FUNC_IMPL(__imp__sub_83BC7D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4136
	ctx.r3.s64 = ctx.r11.s64 + 4136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D3C"))) PPC_WEAK_FUNC(sub_83BC7D3C);
PPC_FUNC_IMPL(__imp__sub_83BC7D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7D40"))) PPC_WEAK_FUNC(sub_83BC7D40);
PPC_FUNC_IMPL(__imp__sub_83BC7D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4144
	ctx.r3.s64 = ctx.r11.s64 + 4144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D4C"))) PPC_WEAK_FUNC(sub_83BC7D4C);
PPC_FUNC_IMPL(__imp__sub_83BC7D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7D50"))) PPC_WEAK_FUNC(sub_83BC7D50);
PPC_FUNC_IMPL(__imp__sub_83BC7D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4152
	ctx.r3.s64 = ctx.r11.s64 + 4152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D5C"))) PPC_WEAK_FUNC(sub_83BC7D5C);
PPC_FUNC_IMPL(__imp__sub_83BC7D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7D60"))) PPC_WEAK_FUNC(sub_83BC7D60);
PPC_FUNC_IMPL(__imp__sub_83BC7D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D6C"))) PPC_WEAK_FUNC(sub_83BC7D6C);
PPC_FUNC_IMPL(__imp__sub_83BC7D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7D70"))) PPC_WEAK_FUNC(sub_83BC7D70);
PPC_FUNC_IMPL(__imp__sub_83BC7D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4168
	ctx.r3.s64 = ctx.r11.s64 + 4168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D7C"))) PPC_WEAK_FUNC(sub_83BC7D7C);
PPC_FUNC_IMPL(__imp__sub_83BC7D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7D80"))) PPC_WEAK_FUNC(sub_83BC7D80);
PPC_FUNC_IMPL(__imp__sub_83BC7D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4176
	ctx.r3.s64 = ctx.r11.s64 + 4176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D8C"))) PPC_WEAK_FUNC(sub_83BC7D8C);
PPC_FUNC_IMPL(__imp__sub_83BC7D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7D90"))) PPC_WEAK_FUNC(sub_83BC7D90);
PPC_FUNC_IMPL(__imp__sub_83BC7D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4184
	ctx.r3.s64 = ctx.r11.s64 + 4184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7D9C"))) PPC_WEAK_FUNC(sub_83BC7D9C);
PPC_FUNC_IMPL(__imp__sub_83BC7D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7DA0"))) PPC_WEAK_FUNC(sub_83BC7DA0);
PPC_FUNC_IMPL(__imp__sub_83BC7DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4192
	ctx.r3.s64 = ctx.r11.s64 + 4192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7DAC"))) PPC_WEAK_FUNC(sub_83BC7DAC);
PPC_FUNC_IMPL(__imp__sub_83BC7DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7DB0"))) PPC_WEAK_FUNC(sub_83BC7DB0);
PPC_FUNC_IMPL(__imp__sub_83BC7DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4200
	ctx.r3.s64 = ctx.r11.s64 + 4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7DBC"))) PPC_WEAK_FUNC(sub_83BC7DBC);
PPC_FUNC_IMPL(__imp__sub_83BC7DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7DC0"))) PPC_WEAK_FUNC(sub_83BC7DC0);
PPC_FUNC_IMPL(__imp__sub_83BC7DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4208
	ctx.r3.s64 = ctx.r11.s64 + 4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7DCC"))) PPC_WEAK_FUNC(sub_83BC7DCC);
PPC_FUNC_IMPL(__imp__sub_83BC7DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7DD0"))) PPC_WEAK_FUNC(sub_83BC7DD0);
PPC_FUNC_IMPL(__imp__sub_83BC7DD0) {
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
	// addi r3,r11,-10952
	ctx.r3.s64 = ctx.r11.s64 + -10952;
	// bl 0x83523120
	ctx.lr = 0x83BC7DE8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4216
	ctx.r3.s64 = ctx.r10.s64 + 4216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7DF4;
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

__attribute__((alias("__imp__sub_83BC7E04"))) PPC_WEAK_FUNC(sub_83BC7E04);
PPC_FUNC_IMPL(__imp__sub_83BC7E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7E08"))) PPC_WEAK_FUNC(sub_83BC7E08);
PPC_FUNC_IMPL(__imp__sub_83BC7E08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10936
	ctx.r7.s64 = ctx.r8.s64 + -10936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7E30"))) PPC_WEAK_FUNC(sub_83BC7E30);
PPC_FUNC_IMPL(__imp__sub_83BC7E30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,9100
	ctx.r6.s64 = ctx.r7.s64 + 9100;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9028(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9028);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10936);
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
	// std r9,9100(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC7E78"))) PPC_WEAK_FUNC(sub_83BC7E78);
PPC_FUNC_IMPL(__imp__sub_83BC7E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7E84"))) PPC_WEAK_FUNC(sub_83BC7E84);
PPC_FUNC_IMPL(__imp__sub_83BC7E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7E88"))) PPC_WEAK_FUNC(sub_83BC7E88);
PPC_FUNC_IMPL(__imp__sub_83BC7E88) {
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
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
	// bl 0x8259af80
	ctx.lr = 0x83BC7EA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4248
	ctx.r3.s64 = ctx.r10.s64 + 4248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7EAC;
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

__attribute__((alias("__imp__sub_83BC7EBC"))) PPC_WEAK_FUNC(sub_83BC7EBC);
PPC_FUNC_IMPL(__imp__sub_83BC7EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7EC0"))) PPC_WEAK_FUNC(sub_83BC7EC0);
PPC_FUNC_IMPL(__imp__sub_83BC7EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10948
	ctx.r11.s64 = ctx.r8.s64 + -10948;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,9076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9076);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4240
	ctx.r3.s64 = ctx.r6.s64 + 4240;
	// stw r10,-10948(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7EF0"))) PPC_WEAK_FUNC(sub_83BC7EF0);
PPC_FUNC_IMPL(__imp__sub_83BC7EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4256
	ctx.r3.s64 = ctx.r11.s64 + 4256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7EFC"))) PPC_WEAK_FUNC(sub_83BC7EFC);
PPC_FUNC_IMPL(__imp__sub_83BC7EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F00"))) PPC_WEAK_FUNC(sub_83BC7F00);
PPC_FUNC_IMPL(__imp__sub_83BC7F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4264
	ctx.r3.s64 = ctx.r11.s64 + 4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F0C"))) PPC_WEAK_FUNC(sub_83BC7F0C);
PPC_FUNC_IMPL(__imp__sub_83BC7F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F10"))) PPC_WEAK_FUNC(sub_83BC7F10);
PPC_FUNC_IMPL(__imp__sub_83BC7F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4272
	ctx.r3.s64 = ctx.r11.s64 + 4272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F1C"))) PPC_WEAK_FUNC(sub_83BC7F1C);
PPC_FUNC_IMPL(__imp__sub_83BC7F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F20"))) PPC_WEAK_FUNC(sub_83BC7F20);
PPC_FUNC_IMPL(__imp__sub_83BC7F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4280
	ctx.r3.s64 = ctx.r11.s64 + 4280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F2C"))) PPC_WEAK_FUNC(sub_83BC7F2C);
PPC_FUNC_IMPL(__imp__sub_83BC7F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F30"))) PPC_WEAK_FUNC(sub_83BC7F30);
PPC_FUNC_IMPL(__imp__sub_83BC7F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4288
	ctx.r3.s64 = ctx.r11.s64 + 4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F3C"))) PPC_WEAK_FUNC(sub_83BC7F3C);
PPC_FUNC_IMPL(__imp__sub_83BC7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F40"))) PPC_WEAK_FUNC(sub_83BC7F40);
PPC_FUNC_IMPL(__imp__sub_83BC7F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4296
	ctx.r3.s64 = ctx.r11.s64 + 4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F4C"))) PPC_WEAK_FUNC(sub_83BC7F4C);
PPC_FUNC_IMPL(__imp__sub_83BC7F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F50"))) PPC_WEAK_FUNC(sub_83BC7F50);
PPC_FUNC_IMPL(__imp__sub_83BC7F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4304
	ctx.r3.s64 = ctx.r11.s64 + 4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F5C"))) PPC_WEAK_FUNC(sub_83BC7F5C);
PPC_FUNC_IMPL(__imp__sub_83BC7F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F60"))) PPC_WEAK_FUNC(sub_83BC7F60);
PPC_FUNC_IMPL(__imp__sub_83BC7F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4312
	ctx.r3.s64 = ctx.r11.s64 + 4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F6C"))) PPC_WEAK_FUNC(sub_83BC7F6C);
PPC_FUNC_IMPL(__imp__sub_83BC7F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F70"))) PPC_WEAK_FUNC(sub_83BC7F70);
PPC_FUNC_IMPL(__imp__sub_83BC7F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4320
	ctx.r3.s64 = ctx.r11.s64 + 4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F7C"))) PPC_WEAK_FUNC(sub_83BC7F7C);
PPC_FUNC_IMPL(__imp__sub_83BC7F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F80"))) PPC_WEAK_FUNC(sub_83BC7F80);
PPC_FUNC_IMPL(__imp__sub_83BC7F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4328
	ctx.r3.s64 = ctx.r11.s64 + 4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F8C"))) PPC_WEAK_FUNC(sub_83BC7F8C);
PPC_FUNC_IMPL(__imp__sub_83BC7F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7F90"))) PPC_WEAK_FUNC(sub_83BC7F90);
PPC_FUNC_IMPL(__imp__sub_83BC7F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7F9C"))) PPC_WEAK_FUNC(sub_83BC7F9C);
PPC_FUNC_IMPL(__imp__sub_83BC7F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7FA0"))) PPC_WEAK_FUNC(sub_83BC7FA0);
PPC_FUNC_IMPL(__imp__sub_83BC7FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4344
	ctx.r3.s64 = ctx.r11.s64 + 4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC7FAC"))) PPC_WEAK_FUNC(sub_83BC7FAC);
PPC_FUNC_IMPL(__imp__sub_83BC7FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7FB0"))) PPC_WEAK_FUNC(sub_83BC7FB0);
PPC_FUNC_IMPL(__imp__sub_83BC7FB0) {
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
	// addi r3,r11,-10584
	ctx.r3.s64 = ctx.r11.s64 + -10584;
	// bl 0x83523120
	ctx.lr = 0x83BC7FC8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4352
	ctx.r3.s64 = ctx.r10.s64 + 4352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC7FD4;
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

__attribute__((alias("__imp__sub_83BC7FE4"))) PPC_WEAK_FUNC(sub_83BC7FE4);
PPC_FUNC_IMPL(__imp__sub_83BC7FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC7FE8"))) PPC_WEAK_FUNC(sub_83BC7FE8);
PPC_FUNC_IMPL(__imp__sub_83BC7FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10568
	ctx.r7.s64 = ctx.r8.s64 + -10568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC8010"))) PPC_WEAK_FUNC(sub_83BC8010);
PPC_FUNC_IMPL(__imp__sub_83BC8010) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,9228
	ctx.r6.s64 = ctx.r7.s64 + 9228;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9156(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9156);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10568);
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
	// std r9,9228(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9228, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC8058"))) PPC_WEAK_FUNC(sub_83BC8058);
PPC_FUNC_IMPL(__imp__sub_83BC8058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4368
	ctx.r3.s64 = ctx.r11.s64 + 4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC8064"))) PPC_WEAK_FUNC(sub_83BC8064);
PPC_FUNC_IMPL(__imp__sub_83BC8064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8068"))) PPC_WEAK_FUNC(sub_83BC8068);
PPC_FUNC_IMPL(__imp__sub_83BC8068) {
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
	// addi r3,r11,-10560
	ctx.r3.s64 = ctx.r11.s64 + -10560;
	// bl 0x8259af80
	ctx.lr = 0x83BC8080;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4384
	ctx.r3.s64 = ctx.r10.s64 + 4384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC808C;
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

__attribute__((alias("__imp__sub_83BC809C"))) PPC_WEAK_FUNC(sub_83BC809C);
PPC_FUNC_IMPL(__imp__sub_83BC809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC80A0"))) PPC_WEAK_FUNC(sub_83BC80A0);
PPC_FUNC_IMPL(__imp__sub_83BC80A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10580
	ctx.r11.s64 = ctx.r8.s64 + -10580;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,9204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9204);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4376
	ctx.r3.s64 = ctx.r6.s64 + 4376;
	// stw r10,-10580(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC80D0"))) PPC_WEAK_FUNC(sub_83BC80D0);
PPC_FUNC_IMPL(__imp__sub_83BC80D0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,31448
	ctx.r4.s64 = ctx.r11.s64 + 31448;
	// addi r3,r10,9252
	ctx.r3.s64 = ctx.r10.s64 + 9252;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC80F4;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,4392
	ctx.r3.s64 = ctx.r9.s64 + 4392;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC8100;
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

__attribute__((alias("__imp__sub_83BC8110"))) PPC_WEAK_FUNC(sub_83BC8110);
PPC_FUNC_IMPL(__imp__sub_83BC8110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4496
	ctx.r3.s64 = ctx.r11.s64 + 4496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC811C"))) PPC_WEAK_FUNC(sub_83BC811C);
PPC_FUNC_IMPL(__imp__sub_83BC811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8120"))) PPC_WEAK_FUNC(sub_83BC8120);
PPC_FUNC_IMPL(__imp__sub_83BC8120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4504
	ctx.r3.s64 = ctx.r11.s64 + 4504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC812C"))) PPC_WEAK_FUNC(sub_83BC812C);
PPC_FUNC_IMPL(__imp__sub_83BC812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8130"))) PPC_WEAK_FUNC(sub_83BC8130);
PPC_FUNC_IMPL(__imp__sub_83BC8130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4512
	ctx.r3.s64 = ctx.r11.s64 + 4512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC813C"))) PPC_WEAK_FUNC(sub_83BC813C);
PPC_FUNC_IMPL(__imp__sub_83BC813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8140"))) PPC_WEAK_FUNC(sub_83BC8140);
PPC_FUNC_IMPL(__imp__sub_83BC8140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4520
	ctx.r3.s64 = ctx.r11.s64 + 4520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC814C"))) PPC_WEAK_FUNC(sub_83BC814C);
PPC_FUNC_IMPL(__imp__sub_83BC814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8150"))) PPC_WEAK_FUNC(sub_83BC8150);
PPC_FUNC_IMPL(__imp__sub_83BC8150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4528
	ctx.r3.s64 = ctx.r11.s64 + 4528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC815C"))) PPC_WEAK_FUNC(sub_83BC815C);
PPC_FUNC_IMPL(__imp__sub_83BC815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8160"))) PPC_WEAK_FUNC(sub_83BC8160);
PPC_FUNC_IMPL(__imp__sub_83BC8160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC816C"))) PPC_WEAK_FUNC(sub_83BC816C);
PPC_FUNC_IMPL(__imp__sub_83BC816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8170"))) PPC_WEAK_FUNC(sub_83BC8170);
PPC_FUNC_IMPL(__imp__sub_83BC8170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4544
	ctx.r3.s64 = ctx.r11.s64 + 4544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC817C"))) PPC_WEAK_FUNC(sub_83BC817C);
PPC_FUNC_IMPL(__imp__sub_83BC817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8180"))) PPC_WEAK_FUNC(sub_83BC8180);
PPC_FUNC_IMPL(__imp__sub_83BC8180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4552
	ctx.r3.s64 = ctx.r11.s64 + 4552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC818C"))) PPC_WEAK_FUNC(sub_83BC818C);
PPC_FUNC_IMPL(__imp__sub_83BC818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8190"))) PPC_WEAK_FUNC(sub_83BC8190);
PPC_FUNC_IMPL(__imp__sub_83BC8190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4560
	ctx.r3.s64 = ctx.r11.s64 + 4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC819C"))) PPC_WEAK_FUNC(sub_83BC819C);
PPC_FUNC_IMPL(__imp__sub_83BC819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC81A0"))) PPC_WEAK_FUNC(sub_83BC81A0);
PPC_FUNC_IMPL(__imp__sub_83BC81A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4568
	ctx.r3.s64 = ctx.r11.s64 + 4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC81AC"))) PPC_WEAK_FUNC(sub_83BC81AC);
PPC_FUNC_IMPL(__imp__sub_83BC81AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC81B0"))) PPC_WEAK_FUNC(sub_83BC81B0);
PPC_FUNC_IMPL(__imp__sub_83BC81B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4576
	ctx.r3.s64 = ctx.r11.s64 + 4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC81BC"))) PPC_WEAK_FUNC(sub_83BC81BC);
PPC_FUNC_IMPL(__imp__sub_83BC81BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC81C0"))) PPC_WEAK_FUNC(sub_83BC81C0);
PPC_FUNC_IMPL(__imp__sub_83BC81C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4584
	ctx.r3.s64 = ctx.r11.s64 + 4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC81CC"))) PPC_WEAK_FUNC(sub_83BC81CC);
PPC_FUNC_IMPL(__imp__sub_83BC81CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC81D0"))) PPC_WEAK_FUNC(sub_83BC81D0);
PPC_FUNC_IMPL(__imp__sub_83BC81D0) {
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
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// bl 0x83523120
	ctx.lr = 0x83BC81E8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4592
	ctx.r3.s64 = ctx.r10.s64 + 4592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC81F4;
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

__attribute__((alias("__imp__sub_83BC8204"))) PPC_WEAK_FUNC(sub_83BC8204);
PPC_FUNC_IMPL(__imp__sub_83BC8204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8208"))) PPC_WEAK_FUNC(sub_83BC8208);
PPC_FUNC_IMPL(__imp__sub_83BC8208) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10200
	ctx.r7.s64 = ctx.r8.s64 + -10200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10200(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC8230"))) PPC_WEAK_FUNC(sub_83BC8230);
PPC_FUNC_IMPL(__imp__sub_83BC8230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,9384
	ctx.r6.s64 = ctx.r7.s64 + 9384;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10200);
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
	// std r9,9384(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC8278"))) PPC_WEAK_FUNC(sub_83BC8278);
PPC_FUNC_IMPL(__imp__sub_83BC8278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4608
	ctx.r3.s64 = ctx.r11.s64 + 4608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC8284"))) PPC_WEAK_FUNC(sub_83BC8284);
PPC_FUNC_IMPL(__imp__sub_83BC8284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8288"))) PPC_WEAK_FUNC(sub_83BC8288);
PPC_FUNC_IMPL(__imp__sub_83BC8288) {
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
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// bl 0x8259af80
	ctx.lr = 0x83BC82A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4624
	ctx.r3.s64 = ctx.r10.s64 + 4624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC82AC;
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

__attribute__((alias("__imp__sub_83BC82BC"))) PPC_WEAK_FUNC(sub_83BC82BC);
PPC_FUNC_IMPL(__imp__sub_83BC82BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC82C0"))) PPC_WEAK_FUNC(sub_83BC82C0);
PPC_FUNC_IMPL(__imp__sub_83BC82C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10212
	ctx.r11.s64 = ctx.r8.s64 + -10212;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,9360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9360);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4616
	ctx.r3.s64 = ctx.r6.s64 + 4616;
	// stw r10,-10212(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC82F0"))) PPC_WEAK_FUNC(sub_83BC82F0);
PPC_FUNC_IMPL(__imp__sub_83BC82F0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,32360
	ctx.r4.s64 = ctx.r11.s64 + 32360;
	// addi r3,r10,9408
	ctx.r3.s64 = ctx.r10.s64 + 9408;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC8314;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,4632
	ctx.r3.s64 = ctx.r9.s64 + 4632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC8320;
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

__attribute__((alias("__imp__sub_83BC8330"))) PPC_WEAK_FUNC(sub_83BC8330);
PPC_FUNC_IMPL(__imp__sub_83BC8330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC833C"))) PPC_WEAK_FUNC(sub_83BC833C);
PPC_FUNC_IMPL(__imp__sub_83BC833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8340"))) PPC_WEAK_FUNC(sub_83BC8340);
PPC_FUNC_IMPL(__imp__sub_83BC8340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC834C"))) PPC_WEAK_FUNC(sub_83BC834C);
PPC_FUNC_IMPL(__imp__sub_83BC834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8350"))) PPC_WEAK_FUNC(sub_83BC8350);
PPC_FUNC_IMPL(__imp__sub_83BC8350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4752
	ctx.r3.s64 = ctx.r11.s64 + 4752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC835C"))) PPC_WEAK_FUNC(sub_83BC835C);
PPC_FUNC_IMPL(__imp__sub_83BC835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8360"))) PPC_WEAK_FUNC(sub_83BC8360);
PPC_FUNC_IMPL(__imp__sub_83BC8360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4760
	ctx.r3.s64 = ctx.r11.s64 + 4760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC836C"))) PPC_WEAK_FUNC(sub_83BC836C);
PPC_FUNC_IMPL(__imp__sub_83BC836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8370"))) PPC_WEAK_FUNC(sub_83BC8370);
PPC_FUNC_IMPL(__imp__sub_83BC8370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC837C"))) PPC_WEAK_FUNC(sub_83BC837C);
PPC_FUNC_IMPL(__imp__sub_83BC837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8380"))) PPC_WEAK_FUNC(sub_83BC8380);
PPC_FUNC_IMPL(__imp__sub_83BC8380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4776
	ctx.r3.s64 = ctx.r11.s64 + 4776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC838C"))) PPC_WEAK_FUNC(sub_83BC838C);
PPC_FUNC_IMPL(__imp__sub_83BC838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8390"))) PPC_WEAK_FUNC(sub_83BC8390);
PPC_FUNC_IMPL(__imp__sub_83BC8390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4784
	ctx.r3.s64 = ctx.r11.s64 + 4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC839C"))) PPC_WEAK_FUNC(sub_83BC839C);
PPC_FUNC_IMPL(__imp__sub_83BC839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC83A0"))) PPC_WEAK_FUNC(sub_83BC83A0);
PPC_FUNC_IMPL(__imp__sub_83BC83A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4792
	ctx.r3.s64 = ctx.r11.s64 + 4792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC83AC"))) PPC_WEAK_FUNC(sub_83BC83AC);
PPC_FUNC_IMPL(__imp__sub_83BC83AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC83B0"))) PPC_WEAK_FUNC(sub_83BC83B0);
PPC_FUNC_IMPL(__imp__sub_83BC83B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4800
	ctx.r3.s64 = ctx.r11.s64 + 4800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC83BC"))) PPC_WEAK_FUNC(sub_83BC83BC);
PPC_FUNC_IMPL(__imp__sub_83BC83BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC83C0"))) PPC_WEAK_FUNC(sub_83BC83C0);
PPC_FUNC_IMPL(__imp__sub_83BC83C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4808
	ctx.r3.s64 = ctx.r11.s64 + 4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC83CC"))) PPC_WEAK_FUNC(sub_83BC83CC);
PPC_FUNC_IMPL(__imp__sub_83BC83CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC83D0"))) PPC_WEAK_FUNC(sub_83BC83D0);
PPC_FUNC_IMPL(__imp__sub_83BC83D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4816
	ctx.r3.s64 = ctx.r11.s64 + 4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC83DC"))) PPC_WEAK_FUNC(sub_83BC83DC);
PPC_FUNC_IMPL(__imp__sub_83BC83DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC83E0"))) PPC_WEAK_FUNC(sub_83BC83E0);
PPC_FUNC_IMPL(__imp__sub_83BC83E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4824
	ctx.r3.s64 = ctx.r11.s64 + 4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC83EC"))) PPC_WEAK_FUNC(sub_83BC83EC);
PPC_FUNC_IMPL(__imp__sub_83BC83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC83F0"))) PPC_WEAK_FUNC(sub_83BC83F0);
PPC_FUNC_IMPL(__imp__sub_83BC83F0) {
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
	// addi r3,r11,-9848
	ctx.r3.s64 = ctx.r11.s64 + -9848;
	// bl 0x83523120
	ctx.lr = 0x83BC8408;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4832
	ctx.r3.s64 = ctx.r10.s64 + 4832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC8414;
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

__attribute__((alias("__imp__sub_83BC8424"))) PPC_WEAK_FUNC(sub_83BC8424);
PPC_FUNC_IMPL(__imp__sub_83BC8424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8428"))) PPC_WEAK_FUNC(sub_83BC8428);
PPC_FUNC_IMPL(__imp__sub_83BC8428) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9832
	ctx.r7.s64 = ctx.r8.s64 + -9832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC8450"))) PPC_WEAK_FUNC(sub_83BC8450);
PPC_FUNC_IMPL(__imp__sub_83BC8450) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,9540
	ctx.r6.s64 = ctx.r7.s64 + 9540;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9468(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9468);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9832);
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
	// std r9,9540(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9540, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC8498"))) PPC_WEAK_FUNC(sub_83BC8498);
PPC_FUNC_IMPL(__imp__sub_83BC8498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4848
	ctx.r3.s64 = ctx.r11.s64 + 4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC84A4"))) PPC_WEAK_FUNC(sub_83BC84A4);
PPC_FUNC_IMPL(__imp__sub_83BC84A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC84A8"))) PPC_WEAK_FUNC(sub_83BC84A8);
PPC_FUNC_IMPL(__imp__sub_83BC84A8) {
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
	// addi r3,r11,-9824
	ctx.r3.s64 = ctx.r11.s64 + -9824;
	// bl 0x8259af80
	ctx.lr = 0x83BC84C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,4864
	ctx.r3.s64 = ctx.r10.s64 + 4864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC84CC;
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

__attribute__((alias("__imp__sub_83BC84DC"))) PPC_WEAK_FUNC(sub_83BC84DC);
PPC_FUNC_IMPL(__imp__sub_83BC84DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC84E0"))) PPC_WEAK_FUNC(sub_83BC84E0);
PPC_FUNC_IMPL(__imp__sub_83BC84E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9844
	ctx.r11.s64 = ctx.r8.s64 + -9844;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,9516(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9516);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4856
	ctx.r3.s64 = ctx.r6.s64 + 4856;
	// stw r10,-9844(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC8510"))) PPC_WEAK_FUNC(sub_83BC8510);
PPC_FUNC_IMPL(__imp__sub_83BC8510) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-32396
	ctx.r4.s64 = ctx.r11.s64 + -32396;
	// addi r3,r10,9564
	ctx.r3.s64 = ctx.r10.s64 + 9564;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC8534;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,4872
	ctx.r3.s64 = ctx.r9.s64 + 4872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC8540;
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

__attribute__((alias("__imp__sub_83BC8550"))) PPC_WEAK_FUNC(sub_83BC8550);
PPC_FUNC_IMPL(__imp__sub_83BC8550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC855C"))) PPC_WEAK_FUNC(sub_83BC855C);
PPC_FUNC_IMPL(__imp__sub_83BC855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8560"))) PPC_WEAK_FUNC(sub_83BC8560);
PPC_FUNC_IMPL(__imp__sub_83BC8560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4984
	ctx.r3.s64 = ctx.r11.s64 + 4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC856C"))) PPC_WEAK_FUNC(sub_83BC856C);
PPC_FUNC_IMPL(__imp__sub_83BC856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8570"))) PPC_WEAK_FUNC(sub_83BC8570);
PPC_FUNC_IMPL(__imp__sub_83BC8570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,4992
	ctx.r3.s64 = ctx.r11.s64 + 4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC857C"))) PPC_WEAK_FUNC(sub_83BC857C);
PPC_FUNC_IMPL(__imp__sub_83BC857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8580"))) PPC_WEAK_FUNC(sub_83BC8580);
PPC_FUNC_IMPL(__imp__sub_83BC8580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5000
	ctx.r3.s64 = ctx.r11.s64 + 5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC858C"))) PPC_WEAK_FUNC(sub_83BC858C);
PPC_FUNC_IMPL(__imp__sub_83BC858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8590"))) PPC_WEAK_FUNC(sub_83BC8590);
PPC_FUNC_IMPL(__imp__sub_83BC8590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC859C"))) PPC_WEAK_FUNC(sub_83BC859C);
PPC_FUNC_IMPL(__imp__sub_83BC859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC85A0"))) PPC_WEAK_FUNC(sub_83BC85A0);
PPC_FUNC_IMPL(__imp__sub_83BC85A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5016
	ctx.r3.s64 = ctx.r11.s64 + 5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC85AC"))) PPC_WEAK_FUNC(sub_83BC85AC);
PPC_FUNC_IMPL(__imp__sub_83BC85AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC85B0"))) PPC_WEAK_FUNC(sub_83BC85B0);
PPC_FUNC_IMPL(__imp__sub_83BC85B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5024
	ctx.r3.s64 = ctx.r11.s64 + 5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC85BC"))) PPC_WEAK_FUNC(sub_83BC85BC);
PPC_FUNC_IMPL(__imp__sub_83BC85BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC85C0"))) PPC_WEAK_FUNC(sub_83BC85C0);
PPC_FUNC_IMPL(__imp__sub_83BC85C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC85CC"))) PPC_WEAK_FUNC(sub_83BC85CC);
PPC_FUNC_IMPL(__imp__sub_83BC85CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC85D0"))) PPC_WEAK_FUNC(sub_83BC85D0);
PPC_FUNC_IMPL(__imp__sub_83BC85D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC85DC"))) PPC_WEAK_FUNC(sub_83BC85DC);
PPC_FUNC_IMPL(__imp__sub_83BC85DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC85E0"))) PPC_WEAK_FUNC(sub_83BC85E0);
PPC_FUNC_IMPL(__imp__sub_83BC85E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5048
	ctx.r3.s64 = ctx.r11.s64 + 5048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC85EC"))) PPC_WEAK_FUNC(sub_83BC85EC);
PPC_FUNC_IMPL(__imp__sub_83BC85EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC85F0"))) PPC_WEAK_FUNC(sub_83BC85F0);
PPC_FUNC_IMPL(__imp__sub_83BC85F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC85FC"))) PPC_WEAK_FUNC(sub_83BC85FC);
PPC_FUNC_IMPL(__imp__sub_83BC85FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8600"))) PPC_WEAK_FUNC(sub_83BC8600);
PPC_FUNC_IMPL(__imp__sub_83BC8600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5064
	ctx.r3.s64 = ctx.r11.s64 + 5064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC860C"))) PPC_WEAK_FUNC(sub_83BC860C);
PPC_FUNC_IMPL(__imp__sub_83BC860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8610"))) PPC_WEAK_FUNC(sub_83BC8610);
PPC_FUNC_IMPL(__imp__sub_83BC8610) {
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
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// bl 0x83523120
	ctx.lr = 0x83BC8628;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,5072
	ctx.r3.s64 = ctx.r10.s64 + 5072;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC8634;
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

__attribute__((alias("__imp__sub_83BC8644"))) PPC_WEAK_FUNC(sub_83BC8644);
PPC_FUNC_IMPL(__imp__sub_83BC8644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8648"))) PPC_WEAK_FUNC(sub_83BC8648);
PPC_FUNC_IMPL(__imp__sub_83BC8648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9464
	ctx.r7.s64 = ctx.r8.s64 + -9464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9464(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC8670"))) PPC_WEAK_FUNC(sub_83BC8670);
PPC_FUNC_IMPL(__imp__sub_83BC8670) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,9696
	ctx.r6.s64 = ctx.r7.s64 + 9696;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9624(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9624);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9464);
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
	// std r9,9696(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9696, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC86B8"))) PPC_WEAK_FUNC(sub_83BC86B8);
PPC_FUNC_IMPL(__imp__sub_83BC86B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5088
	ctx.r3.s64 = ctx.r11.s64 + 5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC86C4"))) PPC_WEAK_FUNC(sub_83BC86C4);
PPC_FUNC_IMPL(__imp__sub_83BC86C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC86C8"))) PPC_WEAK_FUNC(sub_83BC86C8);
PPC_FUNC_IMPL(__imp__sub_83BC86C8) {
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
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// bl 0x8259af80
	ctx.lr = 0x83BC86E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,5104
	ctx.r3.s64 = ctx.r10.s64 + 5104;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC86EC;
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

__attribute__((alias("__imp__sub_83BC86FC"))) PPC_WEAK_FUNC(sub_83BC86FC);
PPC_FUNC_IMPL(__imp__sub_83BC86FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8700"))) PPC_WEAK_FUNC(sub_83BC8700);
PPC_FUNC_IMPL(__imp__sub_83BC8700) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9476
	ctx.r11.s64 = ctx.r8.s64 + -9476;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,9672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9672);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5096
	ctx.r3.s64 = ctx.r6.s64 + 5096;
	// stw r10,-9476(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9476, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC8730"))) PPC_WEAK_FUNC(sub_83BC8730);
PPC_FUNC_IMPL(__imp__sub_83BC8730) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-31528
	ctx.r4.s64 = ctx.r11.s64 + -31528;
	// addi r3,r10,9720
	ctx.r3.s64 = ctx.r10.s64 + 9720;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC8754;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,5112
	ctx.r3.s64 = ctx.r9.s64 + 5112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC8760;
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

__attribute__((alias("__imp__sub_83BC8770"))) PPC_WEAK_FUNC(sub_83BC8770);
PPC_FUNC_IMPL(__imp__sub_83BC8770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5216
	ctx.r3.s64 = ctx.r11.s64 + 5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC877C"))) PPC_WEAK_FUNC(sub_83BC877C);
PPC_FUNC_IMPL(__imp__sub_83BC877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8780"))) PPC_WEAK_FUNC(sub_83BC8780);
PPC_FUNC_IMPL(__imp__sub_83BC8780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5224
	ctx.r3.s64 = ctx.r11.s64 + 5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC878C"))) PPC_WEAK_FUNC(sub_83BC878C);
PPC_FUNC_IMPL(__imp__sub_83BC878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8790"))) PPC_WEAK_FUNC(sub_83BC8790);
PPC_FUNC_IMPL(__imp__sub_83BC8790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5232
	ctx.r3.s64 = ctx.r11.s64 + 5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC879C"))) PPC_WEAK_FUNC(sub_83BC879C);
PPC_FUNC_IMPL(__imp__sub_83BC879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC87A0"))) PPC_WEAK_FUNC(sub_83BC87A0);
PPC_FUNC_IMPL(__imp__sub_83BC87A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5240
	ctx.r3.s64 = ctx.r11.s64 + 5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC87AC"))) PPC_WEAK_FUNC(sub_83BC87AC);
PPC_FUNC_IMPL(__imp__sub_83BC87AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC87B0"))) PPC_WEAK_FUNC(sub_83BC87B0);
PPC_FUNC_IMPL(__imp__sub_83BC87B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5248
	ctx.r3.s64 = ctx.r11.s64 + 5248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC87BC"))) PPC_WEAK_FUNC(sub_83BC87BC);
PPC_FUNC_IMPL(__imp__sub_83BC87BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC87C0"))) PPC_WEAK_FUNC(sub_83BC87C0);
PPC_FUNC_IMPL(__imp__sub_83BC87C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5256
	ctx.r3.s64 = ctx.r11.s64 + 5256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC87CC"))) PPC_WEAK_FUNC(sub_83BC87CC);
PPC_FUNC_IMPL(__imp__sub_83BC87CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC87D0"))) PPC_WEAK_FUNC(sub_83BC87D0);
PPC_FUNC_IMPL(__imp__sub_83BC87D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5264
	ctx.r3.s64 = ctx.r11.s64 + 5264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC87DC"))) PPC_WEAK_FUNC(sub_83BC87DC);
PPC_FUNC_IMPL(__imp__sub_83BC87DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC87E0"))) PPC_WEAK_FUNC(sub_83BC87E0);
PPC_FUNC_IMPL(__imp__sub_83BC87E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5272
	ctx.r3.s64 = ctx.r11.s64 + 5272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC87EC"))) PPC_WEAK_FUNC(sub_83BC87EC);
PPC_FUNC_IMPL(__imp__sub_83BC87EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC87F0"))) PPC_WEAK_FUNC(sub_83BC87F0);
PPC_FUNC_IMPL(__imp__sub_83BC87F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5280
	ctx.r3.s64 = ctx.r11.s64 + 5280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC87FC"))) PPC_WEAK_FUNC(sub_83BC87FC);
PPC_FUNC_IMPL(__imp__sub_83BC87FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8800"))) PPC_WEAK_FUNC(sub_83BC8800);
PPC_FUNC_IMPL(__imp__sub_83BC8800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5288
	ctx.r3.s64 = ctx.r11.s64 + 5288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC880C"))) PPC_WEAK_FUNC(sub_83BC880C);
PPC_FUNC_IMPL(__imp__sub_83BC880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8810"))) PPC_WEAK_FUNC(sub_83BC8810);
PPC_FUNC_IMPL(__imp__sub_83BC8810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC881C"))) PPC_WEAK_FUNC(sub_83BC881C);
PPC_FUNC_IMPL(__imp__sub_83BC881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8820"))) PPC_WEAK_FUNC(sub_83BC8820);
PPC_FUNC_IMPL(__imp__sub_83BC8820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5304
	ctx.r3.s64 = ctx.r11.s64 + 5304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC882C"))) PPC_WEAK_FUNC(sub_83BC882C);
PPC_FUNC_IMPL(__imp__sub_83BC882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8830"))) PPC_WEAK_FUNC(sub_83BC8830);
PPC_FUNC_IMPL(__imp__sub_83BC8830) {
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
	// addi r3,r11,-9112
	ctx.r3.s64 = ctx.r11.s64 + -9112;
	// bl 0x83523120
	ctx.lr = 0x83BC8848;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,5312
	ctx.r3.s64 = ctx.r10.s64 + 5312;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC8854;
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

__attribute__((alias("__imp__sub_83BC8864"))) PPC_WEAK_FUNC(sub_83BC8864);
PPC_FUNC_IMPL(__imp__sub_83BC8864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8868"))) PPC_WEAK_FUNC(sub_83BC8868);
PPC_FUNC_IMPL(__imp__sub_83BC8868) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9096
	ctx.r7.s64 = ctx.r8.s64 + -9096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9096(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC8890"))) PPC_WEAK_FUNC(sub_83BC8890);
PPC_FUNC_IMPL(__imp__sub_83BC8890) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,9880
	ctx.r6.s64 = ctx.r7.s64 + 9880;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9808(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9808);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9096);
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
	// std r9,9880(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC88D8"))) PPC_WEAK_FUNC(sub_83BC88D8);
PPC_FUNC_IMPL(__imp__sub_83BC88D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5328
	ctx.r3.s64 = ctx.r11.s64 + 5328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC88E4"))) PPC_WEAK_FUNC(sub_83BC88E4);
PPC_FUNC_IMPL(__imp__sub_83BC88E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC88E8"))) PPC_WEAK_FUNC(sub_83BC88E8);
PPC_FUNC_IMPL(__imp__sub_83BC88E8) {
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
	// addi r3,r11,-9088
	ctx.r3.s64 = ctx.r11.s64 + -9088;
	// bl 0x8259af80
	ctx.lr = 0x83BC8900;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,5344
	ctx.r3.s64 = ctx.r10.s64 + 5344;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC890C;
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

__attribute__((alias("__imp__sub_83BC891C"))) PPC_WEAK_FUNC(sub_83BC891C);
PPC_FUNC_IMPL(__imp__sub_83BC891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC8920"))) PPC_WEAK_FUNC(sub_83BC8920);
PPC_FUNC_IMPL(__imp__sub_83BC8920) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9108
	ctx.r11.s64 = ctx.r8.s64 + -9108;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,9856(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9856);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5336
	ctx.r3.s64 = ctx.r6.s64 + 5336;
	// stw r10,-9108(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9108, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC8950"))) PPC_WEAK_FUNC(sub_83BC8950);
PPC_FUNC_IMPL(__imp__sub_83BC8950) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-30092
	ctx.r4.s64 = ctx.r11.s64 + -30092;
	// addi r3,r10,9904
	ctx.r3.s64 = ctx.r10.s64 + 9904;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC8974;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,5352
	ctx.r3.s64 = ctx.r9.s64 + 5352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC8980;
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

__attribute__((alias("__imp__sub_83BC8990"))) PPC_WEAK_FUNC(sub_83BC8990);
PPC_FUNC_IMPL(__imp__sub_83BC8990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC899C"))) PPC_WEAK_FUNC(sub_83BC899C);
PPC_FUNC_IMPL(__imp__sub_83BC899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

