#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BF9808"))) PPC_WEAK_FUNC(sub_83BF9808);
PPC_FUNC_IMPL(__imp__sub_83BF9808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-672
	ctx.r3.s64 = ctx.r11.s64 + -672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9814"))) PPC_WEAK_FUNC(sub_83BF9814);
PPC_FUNC_IMPL(__imp__sub_83BF9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9818"))) PPC_WEAK_FUNC(sub_83BF9818);
PPC_FUNC_IMPL(__imp__sub_83BF9818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-664
	ctx.r3.s64 = ctx.r11.s64 + -664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9824"))) PPC_WEAK_FUNC(sub_83BF9824);
PPC_FUNC_IMPL(__imp__sub_83BF9824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9828"))) PPC_WEAK_FUNC(sub_83BF9828);
PPC_FUNC_IMPL(__imp__sub_83BF9828) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,10656
	ctx.r3.s64 = ctx.r11.s64 + 10656;
	// bl 0x83523120
	ctx.lr = 0x83BF9840;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-656
	ctx.r3.s64 = ctx.r10.s64 + -656;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF984C;
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

__attribute__((alias("__imp__sub_83BF985C"))) PPC_WEAK_FUNC(sub_83BF985C);
PPC_FUNC_IMPL(__imp__sub_83BF985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9860"))) PPC_WEAK_FUNC(sub_83BF9860);
PPC_FUNC_IMPL(__imp__sub_83BF9860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10672
	ctx.r7.s64 = ctx.r8.s64 + 10672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9888"))) PPC_WEAK_FUNC(sub_83BF9888);
PPC_FUNC_IMPL(__imp__sub_83BF9888) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,11780
	ctx.r6.s64 = ctx.r7.s64 + 11780;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11708(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11708);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10672);
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
	// std r9,11780(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11780, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF98D0"))) PPC_WEAK_FUNC(sub_83BF98D0);
PPC_FUNC_IMPL(__imp__sub_83BF98D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-640
	ctx.r3.s64 = ctx.r11.s64 + -640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF98DC"))) PPC_WEAK_FUNC(sub_83BF98DC);
PPC_FUNC_IMPL(__imp__sub_83BF98DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF98E0"))) PPC_WEAK_FUNC(sub_83BF98E0);
PPC_FUNC_IMPL(__imp__sub_83BF98E0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,10680
	ctx.r3.s64 = ctx.r11.s64 + 10680;
	// bl 0x8259af80
	ctx.lr = 0x83BF98F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-624
	ctx.r3.s64 = ctx.r10.s64 + -624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9904;
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

__attribute__((alias("__imp__sub_83BF9914"))) PPC_WEAK_FUNC(sub_83BF9914);
PPC_FUNC_IMPL(__imp__sub_83BF9914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9918"))) PPC_WEAK_FUNC(sub_83BF9918);
PPC_FUNC_IMPL(__imp__sub_83BF9918) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10660
	ctx.r11.s64 = ctx.r8.s64 + 10660;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,11756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11756);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-632
	ctx.r3.s64 = ctx.r6.s64 + -632;
	// stw r10,10660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9948"))) PPC_WEAK_FUNC(sub_83BF9948);
PPC_FUNC_IMPL(__imp__sub_83BF9948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-616
	ctx.r3.s64 = ctx.r11.s64 + -616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9954"))) PPC_WEAK_FUNC(sub_83BF9954);
PPC_FUNC_IMPL(__imp__sub_83BF9954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9958"))) PPC_WEAK_FUNC(sub_83BF9958);
PPC_FUNC_IMPL(__imp__sub_83BF9958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-608
	ctx.r3.s64 = ctx.r11.s64 + -608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9964"))) PPC_WEAK_FUNC(sub_83BF9964);
PPC_FUNC_IMPL(__imp__sub_83BF9964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9968"))) PPC_WEAK_FUNC(sub_83BF9968);
PPC_FUNC_IMPL(__imp__sub_83BF9968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-600
	ctx.r3.s64 = ctx.r11.s64 + -600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9974"))) PPC_WEAK_FUNC(sub_83BF9974);
PPC_FUNC_IMPL(__imp__sub_83BF9974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9978"))) PPC_WEAK_FUNC(sub_83BF9978);
PPC_FUNC_IMPL(__imp__sub_83BF9978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-592
	ctx.r3.s64 = ctx.r11.s64 + -592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9984"))) PPC_WEAK_FUNC(sub_83BF9984);
PPC_FUNC_IMPL(__imp__sub_83BF9984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9988"))) PPC_WEAK_FUNC(sub_83BF9988);
PPC_FUNC_IMPL(__imp__sub_83BF9988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-584
	ctx.r3.s64 = ctx.r11.s64 + -584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9994"))) PPC_WEAK_FUNC(sub_83BF9994);
PPC_FUNC_IMPL(__imp__sub_83BF9994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9998"))) PPC_WEAK_FUNC(sub_83BF9998);
PPC_FUNC_IMPL(__imp__sub_83BF9998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-576
	ctx.r3.s64 = ctx.r11.s64 + -576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF99A4"))) PPC_WEAK_FUNC(sub_83BF99A4);
PPC_FUNC_IMPL(__imp__sub_83BF99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF99A8"))) PPC_WEAK_FUNC(sub_83BF99A8);
PPC_FUNC_IMPL(__imp__sub_83BF99A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-568
	ctx.r3.s64 = ctx.r11.s64 + -568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF99B4"))) PPC_WEAK_FUNC(sub_83BF99B4);
PPC_FUNC_IMPL(__imp__sub_83BF99B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF99B8"))) PPC_WEAK_FUNC(sub_83BF99B8);
PPC_FUNC_IMPL(__imp__sub_83BF99B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-560
	ctx.r3.s64 = ctx.r11.s64 + -560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF99C4"))) PPC_WEAK_FUNC(sub_83BF99C4);
PPC_FUNC_IMPL(__imp__sub_83BF99C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF99C8"))) PPC_WEAK_FUNC(sub_83BF99C8);
PPC_FUNC_IMPL(__imp__sub_83BF99C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-552
	ctx.r3.s64 = ctx.r11.s64 + -552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF99D4"))) PPC_WEAK_FUNC(sub_83BF99D4);
PPC_FUNC_IMPL(__imp__sub_83BF99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF99D8"))) PPC_WEAK_FUNC(sub_83BF99D8);
PPC_FUNC_IMPL(__imp__sub_83BF99D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-544
	ctx.r3.s64 = ctx.r11.s64 + -544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF99E4"))) PPC_WEAK_FUNC(sub_83BF99E4);
PPC_FUNC_IMPL(__imp__sub_83BF99E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF99E8"))) PPC_WEAK_FUNC(sub_83BF99E8);
PPC_FUNC_IMPL(__imp__sub_83BF99E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-536
	ctx.r3.s64 = ctx.r11.s64 + -536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF99F4"))) PPC_WEAK_FUNC(sub_83BF99F4);
PPC_FUNC_IMPL(__imp__sub_83BF99F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF99F8"))) PPC_WEAK_FUNC(sub_83BF99F8);
PPC_FUNC_IMPL(__imp__sub_83BF99F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-528
	ctx.r3.s64 = ctx.r11.s64 + -528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9A04"))) PPC_WEAK_FUNC(sub_83BF9A04);
PPC_FUNC_IMPL(__imp__sub_83BF9A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9A08"))) PPC_WEAK_FUNC(sub_83BF9A08);
PPC_FUNC_IMPL(__imp__sub_83BF9A08) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,11024
	ctx.r3.s64 = ctx.r11.s64 + 11024;
	// bl 0x83523120
	ctx.lr = 0x83BF9A20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-520
	ctx.r3.s64 = ctx.r10.s64 + -520;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9A2C;
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

__attribute__((alias("__imp__sub_83BF9A3C"))) PPC_WEAK_FUNC(sub_83BF9A3C);
PPC_FUNC_IMPL(__imp__sub_83BF9A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9A40"))) PPC_WEAK_FUNC(sub_83BF9A40);
PPC_FUNC_IMPL(__imp__sub_83BF9A40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11040
	ctx.r7.s64 = ctx.r8.s64 + 11040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11040(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9A68"))) PPC_WEAK_FUNC(sub_83BF9A68);
PPC_FUNC_IMPL(__imp__sub_83BF9A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,11920
	ctx.r6.s64 = ctx.r7.s64 + 11920;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11848(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11848);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11040);
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
	// std r9,11920(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11920, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9AB0"))) PPC_WEAK_FUNC(sub_83BF9AB0);
PPC_FUNC_IMPL(__imp__sub_83BF9AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-504
	ctx.r3.s64 = ctx.r11.s64 + -504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9ABC"))) PPC_WEAK_FUNC(sub_83BF9ABC);
PPC_FUNC_IMPL(__imp__sub_83BF9ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9AC0"))) PPC_WEAK_FUNC(sub_83BF9AC0);
PPC_FUNC_IMPL(__imp__sub_83BF9AC0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,11048
	ctx.r3.s64 = ctx.r11.s64 + 11048;
	// bl 0x8259af80
	ctx.lr = 0x83BF9AD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-488
	ctx.r3.s64 = ctx.r10.s64 + -488;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9AE4;
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

__attribute__((alias("__imp__sub_83BF9AF4"))) PPC_WEAK_FUNC(sub_83BF9AF4);
PPC_FUNC_IMPL(__imp__sub_83BF9AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9AF8"))) PPC_WEAK_FUNC(sub_83BF9AF8);
PPC_FUNC_IMPL(__imp__sub_83BF9AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11028
	ctx.r11.s64 = ctx.r8.s64 + 11028;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,11896(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11896);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-496
	ctx.r3.s64 = ctx.r6.s64 + -496;
	// stw r10,11028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11028, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9B28"))) PPC_WEAK_FUNC(sub_83BF9B28);
PPC_FUNC_IMPL(__imp__sub_83BF9B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-480
	ctx.r3.s64 = ctx.r11.s64 + -480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9B34"))) PPC_WEAK_FUNC(sub_83BF9B34);
PPC_FUNC_IMPL(__imp__sub_83BF9B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9B38"))) PPC_WEAK_FUNC(sub_83BF9B38);
PPC_FUNC_IMPL(__imp__sub_83BF9B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-472
	ctx.r3.s64 = ctx.r11.s64 + -472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9B44"))) PPC_WEAK_FUNC(sub_83BF9B44);
PPC_FUNC_IMPL(__imp__sub_83BF9B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9B48"))) PPC_WEAK_FUNC(sub_83BF9B48);
PPC_FUNC_IMPL(__imp__sub_83BF9B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-464
	ctx.r3.s64 = ctx.r11.s64 + -464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9B54"))) PPC_WEAK_FUNC(sub_83BF9B54);
PPC_FUNC_IMPL(__imp__sub_83BF9B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9B58"))) PPC_WEAK_FUNC(sub_83BF9B58);
PPC_FUNC_IMPL(__imp__sub_83BF9B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-456
	ctx.r3.s64 = ctx.r11.s64 + -456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9B64"))) PPC_WEAK_FUNC(sub_83BF9B64);
PPC_FUNC_IMPL(__imp__sub_83BF9B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9B68"))) PPC_WEAK_FUNC(sub_83BF9B68);
PPC_FUNC_IMPL(__imp__sub_83BF9B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-448
	ctx.r3.s64 = ctx.r11.s64 + -448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9B74"))) PPC_WEAK_FUNC(sub_83BF9B74);
PPC_FUNC_IMPL(__imp__sub_83BF9B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9B78"))) PPC_WEAK_FUNC(sub_83BF9B78);
PPC_FUNC_IMPL(__imp__sub_83BF9B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-440
	ctx.r3.s64 = ctx.r11.s64 + -440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9B84"))) PPC_WEAK_FUNC(sub_83BF9B84);
PPC_FUNC_IMPL(__imp__sub_83BF9B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9B88"))) PPC_WEAK_FUNC(sub_83BF9B88);
PPC_FUNC_IMPL(__imp__sub_83BF9B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-432
	ctx.r3.s64 = ctx.r11.s64 + -432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9B94"))) PPC_WEAK_FUNC(sub_83BF9B94);
PPC_FUNC_IMPL(__imp__sub_83BF9B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9B98"))) PPC_WEAK_FUNC(sub_83BF9B98);
PPC_FUNC_IMPL(__imp__sub_83BF9B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-424
	ctx.r3.s64 = ctx.r11.s64 + -424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9BA4"))) PPC_WEAK_FUNC(sub_83BF9BA4);
PPC_FUNC_IMPL(__imp__sub_83BF9BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9BA8"))) PPC_WEAK_FUNC(sub_83BF9BA8);
PPC_FUNC_IMPL(__imp__sub_83BF9BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-416
	ctx.r3.s64 = ctx.r11.s64 + -416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9BB4"))) PPC_WEAK_FUNC(sub_83BF9BB4);
PPC_FUNC_IMPL(__imp__sub_83BF9BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9BB8"))) PPC_WEAK_FUNC(sub_83BF9BB8);
PPC_FUNC_IMPL(__imp__sub_83BF9BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-408
	ctx.r3.s64 = ctx.r11.s64 + -408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9BC4"))) PPC_WEAK_FUNC(sub_83BF9BC4);
PPC_FUNC_IMPL(__imp__sub_83BF9BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9BC8"))) PPC_WEAK_FUNC(sub_83BF9BC8);
PPC_FUNC_IMPL(__imp__sub_83BF9BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-400
	ctx.r3.s64 = ctx.r11.s64 + -400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9BD4"))) PPC_WEAK_FUNC(sub_83BF9BD4);
PPC_FUNC_IMPL(__imp__sub_83BF9BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9BD8"))) PPC_WEAK_FUNC(sub_83BF9BD8);
PPC_FUNC_IMPL(__imp__sub_83BF9BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-392
	ctx.r3.s64 = ctx.r11.s64 + -392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9BE4"))) PPC_WEAK_FUNC(sub_83BF9BE4);
PPC_FUNC_IMPL(__imp__sub_83BF9BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9BE8"))) PPC_WEAK_FUNC(sub_83BF9BE8);
PPC_FUNC_IMPL(__imp__sub_83BF9BE8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,11392
	ctx.r3.s64 = ctx.r11.s64 + 11392;
	// bl 0x83523120
	ctx.lr = 0x83BF9C00;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-384
	ctx.r3.s64 = ctx.r10.s64 + -384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9C0C;
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

__attribute__((alias("__imp__sub_83BF9C1C"))) PPC_WEAK_FUNC(sub_83BF9C1C);
PPC_FUNC_IMPL(__imp__sub_83BF9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9C20"))) PPC_WEAK_FUNC(sub_83BF9C20);
PPC_FUNC_IMPL(__imp__sub_83BF9C20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11408
	ctx.r7.s64 = ctx.r8.s64 + 11408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9C48"))) PPC_WEAK_FUNC(sub_83BF9C48);
PPC_FUNC_IMPL(__imp__sub_83BF9C48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,12048
	ctx.r6.s64 = ctx.r7.s64 + 12048;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11408);
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
	// std r9,12048(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9C90"))) PPC_WEAK_FUNC(sub_83BF9C90);
PPC_FUNC_IMPL(__imp__sub_83BF9C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-368
	ctx.r3.s64 = ctx.r11.s64 + -368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9C9C"))) PPC_WEAK_FUNC(sub_83BF9C9C);
PPC_FUNC_IMPL(__imp__sub_83BF9C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9CA0"))) PPC_WEAK_FUNC(sub_83BF9CA0);
PPC_FUNC_IMPL(__imp__sub_83BF9CA0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,11416
	ctx.r3.s64 = ctx.r11.s64 + 11416;
	// bl 0x8259af80
	ctx.lr = 0x83BF9CB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-352
	ctx.r3.s64 = ctx.r10.s64 + -352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9CC4;
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

__attribute__((alias("__imp__sub_83BF9CD4"))) PPC_WEAK_FUNC(sub_83BF9CD4);
PPC_FUNC_IMPL(__imp__sub_83BF9CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9CD8"))) PPC_WEAK_FUNC(sub_83BF9CD8);
PPC_FUNC_IMPL(__imp__sub_83BF9CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11396
	ctx.r11.s64 = ctx.r8.s64 + 11396;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,12024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-360
	ctx.r3.s64 = ctx.r6.s64 + -360;
	// stw r10,11396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D08"))) PPC_WEAK_FUNC(sub_83BF9D08);
PPC_FUNC_IMPL(__imp__sub_83BF9D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-344
	ctx.r3.s64 = ctx.r11.s64 + -344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D14"))) PPC_WEAK_FUNC(sub_83BF9D14);
PPC_FUNC_IMPL(__imp__sub_83BF9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D18"))) PPC_WEAK_FUNC(sub_83BF9D18);
PPC_FUNC_IMPL(__imp__sub_83BF9D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-336
	ctx.r3.s64 = ctx.r11.s64 + -336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D24"))) PPC_WEAK_FUNC(sub_83BF9D24);
PPC_FUNC_IMPL(__imp__sub_83BF9D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D28"))) PPC_WEAK_FUNC(sub_83BF9D28);
PPC_FUNC_IMPL(__imp__sub_83BF9D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-328
	ctx.r3.s64 = ctx.r11.s64 + -328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D34"))) PPC_WEAK_FUNC(sub_83BF9D34);
PPC_FUNC_IMPL(__imp__sub_83BF9D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D38"))) PPC_WEAK_FUNC(sub_83BF9D38);
PPC_FUNC_IMPL(__imp__sub_83BF9D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-320
	ctx.r3.s64 = ctx.r11.s64 + -320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D44"))) PPC_WEAK_FUNC(sub_83BF9D44);
PPC_FUNC_IMPL(__imp__sub_83BF9D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D48"))) PPC_WEAK_FUNC(sub_83BF9D48);
PPC_FUNC_IMPL(__imp__sub_83BF9D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-312
	ctx.r3.s64 = ctx.r11.s64 + -312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D54"))) PPC_WEAK_FUNC(sub_83BF9D54);
PPC_FUNC_IMPL(__imp__sub_83BF9D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D58"))) PPC_WEAK_FUNC(sub_83BF9D58);
PPC_FUNC_IMPL(__imp__sub_83BF9D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-304
	ctx.r3.s64 = ctx.r11.s64 + -304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D64"))) PPC_WEAK_FUNC(sub_83BF9D64);
PPC_FUNC_IMPL(__imp__sub_83BF9D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D68"))) PPC_WEAK_FUNC(sub_83BF9D68);
PPC_FUNC_IMPL(__imp__sub_83BF9D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-296
	ctx.r3.s64 = ctx.r11.s64 + -296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D74"))) PPC_WEAK_FUNC(sub_83BF9D74);
PPC_FUNC_IMPL(__imp__sub_83BF9D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D78"))) PPC_WEAK_FUNC(sub_83BF9D78);
PPC_FUNC_IMPL(__imp__sub_83BF9D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-288
	ctx.r3.s64 = ctx.r11.s64 + -288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D84"))) PPC_WEAK_FUNC(sub_83BF9D84);
PPC_FUNC_IMPL(__imp__sub_83BF9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D88"))) PPC_WEAK_FUNC(sub_83BF9D88);
PPC_FUNC_IMPL(__imp__sub_83BF9D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-280
	ctx.r3.s64 = ctx.r11.s64 + -280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9D94"))) PPC_WEAK_FUNC(sub_83BF9D94);
PPC_FUNC_IMPL(__imp__sub_83BF9D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9D98"))) PPC_WEAK_FUNC(sub_83BF9D98);
PPC_FUNC_IMPL(__imp__sub_83BF9D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-272
	ctx.r3.s64 = ctx.r11.s64 + -272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9DA4"))) PPC_WEAK_FUNC(sub_83BF9DA4);
PPC_FUNC_IMPL(__imp__sub_83BF9DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9DA8"))) PPC_WEAK_FUNC(sub_83BF9DA8);
PPC_FUNC_IMPL(__imp__sub_83BF9DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-264
	ctx.r3.s64 = ctx.r11.s64 + -264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9DB4"))) PPC_WEAK_FUNC(sub_83BF9DB4);
PPC_FUNC_IMPL(__imp__sub_83BF9DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9DB8"))) PPC_WEAK_FUNC(sub_83BF9DB8);
PPC_FUNC_IMPL(__imp__sub_83BF9DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9DC4"))) PPC_WEAK_FUNC(sub_83BF9DC4);
PPC_FUNC_IMPL(__imp__sub_83BF9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9DC8"))) PPC_WEAK_FUNC(sub_83BF9DC8);
PPC_FUNC_IMPL(__imp__sub_83BF9DC8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,11760
	ctx.r3.s64 = ctx.r11.s64 + 11760;
	// bl 0x83523120
	ctx.lr = 0x83BF9DE0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-248
	ctx.r3.s64 = ctx.r10.s64 + -248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9DEC;
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

__attribute__((alias("__imp__sub_83BF9DFC"))) PPC_WEAK_FUNC(sub_83BF9DFC);
PPC_FUNC_IMPL(__imp__sub_83BF9DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9E00"))) PPC_WEAK_FUNC(sub_83BF9E00);
PPC_FUNC_IMPL(__imp__sub_83BF9E00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11776
	ctx.r7.s64 = ctx.r8.s64 + 11776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9E28"))) PPC_WEAK_FUNC(sub_83BF9E28);
PPC_FUNC_IMPL(__imp__sub_83BF9E28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,12176
	ctx.r6.s64 = ctx.r7.s64 + 12176;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12104(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12104);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11776);
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
	// std r9,12176(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12176, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9E70"))) PPC_WEAK_FUNC(sub_83BF9E70);
PPC_FUNC_IMPL(__imp__sub_83BF9E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-232
	ctx.r3.s64 = ctx.r11.s64 + -232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9E7C"))) PPC_WEAK_FUNC(sub_83BF9E7C);
PPC_FUNC_IMPL(__imp__sub_83BF9E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9E80"))) PPC_WEAK_FUNC(sub_83BF9E80);
PPC_FUNC_IMPL(__imp__sub_83BF9E80) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,11784
	ctx.r3.s64 = ctx.r11.s64 + 11784;
	// bl 0x8259af80
	ctx.lr = 0x83BF9E98;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-216
	ctx.r3.s64 = ctx.r10.s64 + -216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9EA4;
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

__attribute__((alias("__imp__sub_83BF9EB4"))) PPC_WEAK_FUNC(sub_83BF9EB4);
PPC_FUNC_IMPL(__imp__sub_83BF9EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9EB8"))) PPC_WEAK_FUNC(sub_83BF9EB8);
PPC_FUNC_IMPL(__imp__sub_83BF9EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11764
	ctx.r11.s64 = ctx.r8.s64 + 11764;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,12152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12152);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-224
	ctx.r3.s64 = ctx.r6.s64 + -224;
	// stw r10,11764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9EE8"))) PPC_WEAK_FUNC(sub_83BF9EE8);
PPC_FUNC_IMPL(__imp__sub_83BF9EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-208
	ctx.r3.s64 = ctx.r11.s64 + -208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9EF4"))) PPC_WEAK_FUNC(sub_83BF9EF4);
PPC_FUNC_IMPL(__imp__sub_83BF9EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9EF8"))) PPC_WEAK_FUNC(sub_83BF9EF8);
PPC_FUNC_IMPL(__imp__sub_83BF9EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-200
	ctx.r3.s64 = ctx.r11.s64 + -200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F04"))) PPC_WEAK_FUNC(sub_83BF9F04);
PPC_FUNC_IMPL(__imp__sub_83BF9F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F08"))) PPC_WEAK_FUNC(sub_83BF9F08);
PPC_FUNC_IMPL(__imp__sub_83BF9F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-192
	ctx.r3.s64 = ctx.r11.s64 + -192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F14"))) PPC_WEAK_FUNC(sub_83BF9F14);
PPC_FUNC_IMPL(__imp__sub_83BF9F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F18"))) PPC_WEAK_FUNC(sub_83BF9F18);
PPC_FUNC_IMPL(__imp__sub_83BF9F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-184
	ctx.r3.s64 = ctx.r11.s64 + -184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F24"))) PPC_WEAK_FUNC(sub_83BF9F24);
PPC_FUNC_IMPL(__imp__sub_83BF9F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F28"))) PPC_WEAK_FUNC(sub_83BF9F28);
PPC_FUNC_IMPL(__imp__sub_83BF9F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-176
	ctx.r3.s64 = ctx.r11.s64 + -176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F34"))) PPC_WEAK_FUNC(sub_83BF9F34);
PPC_FUNC_IMPL(__imp__sub_83BF9F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F38"))) PPC_WEAK_FUNC(sub_83BF9F38);
PPC_FUNC_IMPL(__imp__sub_83BF9F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F44"))) PPC_WEAK_FUNC(sub_83BF9F44);
PPC_FUNC_IMPL(__imp__sub_83BF9F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F48"))) PPC_WEAK_FUNC(sub_83BF9F48);
PPC_FUNC_IMPL(__imp__sub_83BF9F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-160
	ctx.r3.s64 = ctx.r11.s64 + -160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F54"))) PPC_WEAK_FUNC(sub_83BF9F54);
PPC_FUNC_IMPL(__imp__sub_83BF9F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F58"))) PPC_WEAK_FUNC(sub_83BF9F58);
PPC_FUNC_IMPL(__imp__sub_83BF9F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-152
	ctx.r3.s64 = ctx.r11.s64 + -152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F64"))) PPC_WEAK_FUNC(sub_83BF9F64);
PPC_FUNC_IMPL(__imp__sub_83BF9F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F68"))) PPC_WEAK_FUNC(sub_83BF9F68);
PPC_FUNC_IMPL(__imp__sub_83BF9F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F74"))) PPC_WEAK_FUNC(sub_83BF9F74);
PPC_FUNC_IMPL(__imp__sub_83BF9F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F78"))) PPC_WEAK_FUNC(sub_83BF9F78);
PPC_FUNC_IMPL(__imp__sub_83BF9F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F84"))) PPC_WEAK_FUNC(sub_83BF9F84);
PPC_FUNC_IMPL(__imp__sub_83BF9F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F88"))) PPC_WEAK_FUNC(sub_83BF9F88);
PPC_FUNC_IMPL(__imp__sub_83BF9F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9F94"))) PPC_WEAK_FUNC(sub_83BF9F94);
PPC_FUNC_IMPL(__imp__sub_83BF9F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9F98"))) PPC_WEAK_FUNC(sub_83BF9F98);
PPC_FUNC_IMPL(__imp__sub_83BF9F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9FA4"))) PPC_WEAK_FUNC(sub_83BF9FA4);
PPC_FUNC_IMPL(__imp__sub_83BF9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9FA8"))) PPC_WEAK_FUNC(sub_83BF9FA8);
PPC_FUNC_IMPL(__imp__sub_83BF9FA8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,12128
	ctx.r3.s64 = ctx.r11.s64 + 12128;
	// bl 0x83523120
	ctx.lr = 0x83BF9FC0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-112
	ctx.r3.s64 = ctx.r10.s64 + -112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9FCC;
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

__attribute__((alias("__imp__sub_83BF9FDC"))) PPC_WEAK_FUNC(sub_83BF9FDC);
PPC_FUNC_IMPL(__imp__sub_83BF9FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9FE0"))) PPC_WEAK_FUNC(sub_83BF9FE0);
PPC_FUNC_IMPL(__imp__sub_83BF9FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12144
	ctx.r7.s64 = ctx.r8.s64 + 12144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA008"))) PPC_WEAK_FUNC(sub_83BFA008);
PPC_FUNC_IMPL(__imp__sub_83BFA008) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,12304
	ctx.r6.s64 = ctx.r7.s64 + 12304;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12232(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12232);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12144);
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
	// std r9,12304(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12304, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA050"))) PPC_WEAK_FUNC(sub_83BFA050);
PPC_FUNC_IMPL(__imp__sub_83BFA050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA05C"))) PPC_WEAK_FUNC(sub_83BFA05C);
PPC_FUNC_IMPL(__imp__sub_83BFA05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA060"))) PPC_WEAK_FUNC(sub_83BFA060);
PPC_FUNC_IMPL(__imp__sub_83BFA060) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,12152
	ctx.r3.s64 = ctx.r11.s64 + 12152;
	// bl 0x8259af80
	ctx.lr = 0x83BFA078;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-80
	ctx.r3.s64 = ctx.r10.s64 + -80;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA084;
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

__attribute__((alias("__imp__sub_83BFA094"))) PPC_WEAK_FUNC(sub_83BFA094);
PPC_FUNC_IMPL(__imp__sub_83BFA094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA098"))) PPC_WEAK_FUNC(sub_83BFA098);
PPC_FUNC_IMPL(__imp__sub_83BFA098) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12132
	ctx.r11.s64 = ctx.r8.s64 + 12132;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,12280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12280);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-88
	ctx.r3.s64 = ctx.r6.s64 + -88;
	// stw r10,12132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12132, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA0C8"))) PPC_WEAK_FUNC(sub_83BFA0C8);
PPC_FUNC_IMPL(__imp__sub_83BFA0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA0D4"))) PPC_WEAK_FUNC(sub_83BFA0D4);
PPC_FUNC_IMPL(__imp__sub_83BFA0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA0D8"))) PPC_WEAK_FUNC(sub_83BFA0D8);
PPC_FUNC_IMPL(__imp__sub_83BFA0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA0E4"))) PPC_WEAK_FUNC(sub_83BFA0E4);
PPC_FUNC_IMPL(__imp__sub_83BFA0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA0E8"))) PPC_WEAK_FUNC(sub_83BFA0E8);
PPC_FUNC_IMPL(__imp__sub_83BFA0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA0F4"))) PPC_WEAK_FUNC(sub_83BFA0F4);
PPC_FUNC_IMPL(__imp__sub_83BFA0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA0F8"))) PPC_WEAK_FUNC(sub_83BFA0F8);
PPC_FUNC_IMPL(__imp__sub_83BFA0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA104"))) PPC_WEAK_FUNC(sub_83BFA104);
PPC_FUNC_IMPL(__imp__sub_83BFA104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA108"))) PPC_WEAK_FUNC(sub_83BFA108);
PPC_FUNC_IMPL(__imp__sub_83BFA108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA114"))) PPC_WEAK_FUNC(sub_83BFA114);
PPC_FUNC_IMPL(__imp__sub_83BFA114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA118"))) PPC_WEAK_FUNC(sub_83BFA118);
PPC_FUNC_IMPL(__imp__sub_83BFA118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA124"))) PPC_WEAK_FUNC(sub_83BFA124);
PPC_FUNC_IMPL(__imp__sub_83BFA124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA128"))) PPC_WEAK_FUNC(sub_83BFA128);
PPC_FUNC_IMPL(__imp__sub_83BFA128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA134"))) PPC_WEAK_FUNC(sub_83BFA134);
PPC_FUNC_IMPL(__imp__sub_83BFA134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA138"))) PPC_WEAK_FUNC(sub_83BFA138);
PPC_FUNC_IMPL(__imp__sub_83BFA138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA144"))) PPC_WEAK_FUNC(sub_83BFA144);
PPC_FUNC_IMPL(__imp__sub_83BFA144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA148"))) PPC_WEAK_FUNC(sub_83BFA148);
PPC_FUNC_IMPL(__imp__sub_83BFA148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA154"))) PPC_WEAK_FUNC(sub_83BFA154);
PPC_FUNC_IMPL(__imp__sub_83BFA154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA158"))) PPC_WEAK_FUNC(sub_83BFA158);
PPC_FUNC_IMPL(__imp__sub_83BFA158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,0
	ctx.r3.s64 = ctx.r11.s64 + 0;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA164"))) PPC_WEAK_FUNC(sub_83BFA164);
PPC_FUNC_IMPL(__imp__sub_83BFA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA168"))) PPC_WEAK_FUNC(sub_83BFA168);
PPC_FUNC_IMPL(__imp__sub_83BFA168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA174"))) PPC_WEAK_FUNC(sub_83BFA174);
PPC_FUNC_IMPL(__imp__sub_83BFA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA178"))) PPC_WEAK_FUNC(sub_83BFA178);
PPC_FUNC_IMPL(__imp__sub_83BFA178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA184"))) PPC_WEAK_FUNC(sub_83BFA184);
PPC_FUNC_IMPL(__imp__sub_83BFA184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA188"))) PPC_WEAK_FUNC(sub_83BFA188);
PPC_FUNC_IMPL(__imp__sub_83BFA188) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,12496
	ctx.r3.s64 = ctx.r11.s64 + 12496;
	// bl 0x83523120
	ctx.lr = 0x83BFA1A0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA1AC;
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

__attribute__((alias("__imp__sub_83BFA1BC"))) PPC_WEAK_FUNC(sub_83BFA1BC);
PPC_FUNC_IMPL(__imp__sub_83BFA1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA1C0"))) PPC_WEAK_FUNC(sub_83BFA1C0);
PPC_FUNC_IMPL(__imp__sub_83BFA1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12512
	ctx.r7.s64 = ctx.r8.s64 + 12512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA1E8"))) PPC_WEAK_FUNC(sub_83BFA1E8);
PPC_FUNC_IMPL(__imp__sub_83BFA1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,12548
	ctx.r6.s64 = ctx.r7.s64 + 12548;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12476(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12476);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12512);
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
	// std r9,12548(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA230"))) PPC_WEAK_FUNC(sub_83BFA230);
PPC_FUNC_IMPL(__imp__sub_83BFA230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA23C"))) PPC_WEAK_FUNC(sub_83BFA23C);
PPC_FUNC_IMPL(__imp__sub_83BFA23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA240"))) PPC_WEAK_FUNC(sub_83BFA240);
PPC_FUNC_IMPL(__imp__sub_83BFA240) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,12520
	ctx.r3.s64 = ctx.r11.s64 + 12520;
	// bl 0x8259af80
	ctx.lr = 0x83BFA258;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,56
	ctx.r3.s64 = ctx.r10.s64 + 56;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA264;
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

__attribute__((alias("__imp__sub_83BFA274"))) PPC_WEAK_FUNC(sub_83BFA274);
PPC_FUNC_IMPL(__imp__sub_83BFA274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA278"))) PPC_WEAK_FUNC(sub_83BFA278);
PPC_FUNC_IMPL(__imp__sub_83BFA278) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12500
	ctx.r11.s64 = ctx.r8.s64 + 12500;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,12524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12524);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,48
	ctx.r3.s64 = ctx.r6.s64 + 48;
	// stw r10,12500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA2A8"))) PPC_WEAK_FUNC(sub_83BFA2A8);
PPC_FUNC_IMPL(__imp__sub_83BFA2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA2B4"))) PPC_WEAK_FUNC(sub_83BFA2B4);
PPC_FUNC_IMPL(__imp__sub_83BFA2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA2B8"))) PPC_WEAK_FUNC(sub_83BFA2B8);
PPC_FUNC_IMPL(__imp__sub_83BFA2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA2C4"))) PPC_WEAK_FUNC(sub_83BFA2C4);
PPC_FUNC_IMPL(__imp__sub_83BFA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA2C8"))) PPC_WEAK_FUNC(sub_83BFA2C8);
PPC_FUNC_IMPL(__imp__sub_83BFA2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA2D4"))) PPC_WEAK_FUNC(sub_83BFA2D4);
PPC_FUNC_IMPL(__imp__sub_83BFA2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA2D8"))) PPC_WEAK_FUNC(sub_83BFA2D8);
PPC_FUNC_IMPL(__imp__sub_83BFA2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA2E4"))) PPC_WEAK_FUNC(sub_83BFA2E4);
PPC_FUNC_IMPL(__imp__sub_83BFA2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA2E8"))) PPC_WEAK_FUNC(sub_83BFA2E8);
PPC_FUNC_IMPL(__imp__sub_83BFA2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA2F4"))) PPC_WEAK_FUNC(sub_83BFA2F4);
PPC_FUNC_IMPL(__imp__sub_83BFA2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA2F8"))) PPC_WEAK_FUNC(sub_83BFA2F8);
PPC_FUNC_IMPL(__imp__sub_83BFA2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA304"))) PPC_WEAK_FUNC(sub_83BFA304);
PPC_FUNC_IMPL(__imp__sub_83BFA304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA308"))) PPC_WEAK_FUNC(sub_83BFA308);
PPC_FUNC_IMPL(__imp__sub_83BFA308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA314"))) PPC_WEAK_FUNC(sub_83BFA314);
PPC_FUNC_IMPL(__imp__sub_83BFA314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA318"))) PPC_WEAK_FUNC(sub_83BFA318);
PPC_FUNC_IMPL(__imp__sub_83BFA318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA324"))) PPC_WEAK_FUNC(sub_83BFA324);
PPC_FUNC_IMPL(__imp__sub_83BFA324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA328"))) PPC_WEAK_FUNC(sub_83BFA328);
PPC_FUNC_IMPL(__imp__sub_83BFA328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA334"))) PPC_WEAK_FUNC(sub_83BFA334);
PPC_FUNC_IMPL(__imp__sub_83BFA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA338"))) PPC_WEAK_FUNC(sub_83BFA338);
PPC_FUNC_IMPL(__imp__sub_83BFA338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA344"))) PPC_WEAK_FUNC(sub_83BFA344);
PPC_FUNC_IMPL(__imp__sub_83BFA344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA348"))) PPC_WEAK_FUNC(sub_83BFA348);
PPC_FUNC_IMPL(__imp__sub_83BFA348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA354"))) PPC_WEAK_FUNC(sub_83BFA354);
PPC_FUNC_IMPL(__imp__sub_83BFA354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA358"))) PPC_WEAK_FUNC(sub_83BFA358);
PPC_FUNC_IMPL(__imp__sub_83BFA358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA364"))) PPC_WEAK_FUNC(sub_83BFA364);
PPC_FUNC_IMPL(__imp__sub_83BFA364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA368"))) PPC_WEAK_FUNC(sub_83BFA368);
PPC_FUNC_IMPL(__imp__sub_83BFA368) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,12864
	ctx.r3.s64 = ctx.r11.s64 + 12864;
	// bl 0x83523120
	ctx.lr = 0x83BFA380;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,160
	ctx.r3.s64 = ctx.r10.s64 + 160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA38C;
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

__attribute__((alias("__imp__sub_83BFA39C"))) PPC_WEAK_FUNC(sub_83BFA39C);
PPC_FUNC_IMPL(__imp__sub_83BFA39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA3A0"))) PPC_WEAK_FUNC(sub_83BFA3A0);
PPC_FUNC_IMPL(__imp__sub_83BFA3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12880
	ctx.r7.s64 = ctx.r8.s64 + 12880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA3C8"))) PPC_WEAK_FUNC(sub_83BFA3C8);
PPC_FUNC_IMPL(__imp__sub_83BFA3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,12692
	ctx.r6.s64 = ctx.r7.s64 + 12692;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12880);
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
	// std r9,12692(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12692, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA410"))) PPC_WEAK_FUNC(sub_83BFA410);
PPC_FUNC_IMPL(__imp__sub_83BFA410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA41C"))) PPC_WEAK_FUNC(sub_83BFA41C);
PPC_FUNC_IMPL(__imp__sub_83BFA41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA420"))) PPC_WEAK_FUNC(sub_83BFA420);
PPC_FUNC_IMPL(__imp__sub_83BFA420) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,12888
	ctx.r3.s64 = ctx.r11.s64 + 12888;
	// bl 0x8259af80
	ctx.lr = 0x83BFA438;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,192
	ctx.r3.s64 = ctx.r10.s64 + 192;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA444;
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

__attribute__((alias("__imp__sub_83BFA454"))) PPC_WEAK_FUNC(sub_83BFA454);
PPC_FUNC_IMPL(__imp__sub_83BFA454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA458"))) PPC_WEAK_FUNC(sub_83BFA458);
PPC_FUNC_IMPL(__imp__sub_83BFA458) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12868
	ctx.r11.s64 = ctx.r8.s64 + 12868;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,12668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12668);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,184
	ctx.r3.s64 = ctx.r6.s64 + 184;
	// stw r10,12868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA488"))) PPC_WEAK_FUNC(sub_83BFA488);
PPC_FUNC_IMPL(__imp__sub_83BFA488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA494"))) PPC_WEAK_FUNC(sub_83BFA494);
PPC_FUNC_IMPL(__imp__sub_83BFA494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA498"))) PPC_WEAK_FUNC(sub_83BFA498);
PPC_FUNC_IMPL(__imp__sub_83BFA498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA4A4"))) PPC_WEAK_FUNC(sub_83BFA4A4);
PPC_FUNC_IMPL(__imp__sub_83BFA4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA4A8"))) PPC_WEAK_FUNC(sub_83BFA4A8);
PPC_FUNC_IMPL(__imp__sub_83BFA4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA4B4"))) PPC_WEAK_FUNC(sub_83BFA4B4);
PPC_FUNC_IMPL(__imp__sub_83BFA4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA4B8"))) PPC_WEAK_FUNC(sub_83BFA4B8);
PPC_FUNC_IMPL(__imp__sub_83BFA4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA4C4"))) PPC_WEAK_FUNC(sub_83BFA4C4);
PPC_FUNC_IMPL(__imp__sub_83BFA4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA4C8"))) PPC_WEAK_FUNC(sub_83BFA4C8);
PPC_FUNC_IMPL(__imp__sub_83BFA4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA4D4"))) PPC_WEAK_FUNC(sub_83BFA4D4);
PPC_FUNC_IMPL(__imp__sub_83BFA4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA4D8"))) PPC_WEAK_FUNC(sub_83BFA4D8);
PPC_FUNC_IMPL(__imp__sub_83BFA4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA4E4"))) PPC_WEAK_FUNC(sub_83BFA4E4);
PPC_FUNC_IMPL(__imp__sub_83BFA4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA4E8"))) PPC_WEAK_FUNC(sub_83BFA4E8);
PPC_FUNC_IMPL(__imp__sub_83BFA4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA4F4"))) PPC_WEAK_FUNC(sub_83BFA4F4);
PPC_FUNC_IMPL(__imp__sub_83BFA4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA4F8"))) PPC_WEAK_FUNC(sub_83BFA4F8);
PPC_FUNC_IMPL(__imp__sub_83BFA4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA504"))) PPC_WEAK_FUNC(sub_83BFA504);
PPC_FUNC_IMPL(__imp__sub_83BFA504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA508"))) PPC_WEAK_FUNC(sub_83BFA508);
PPC_FUNC_IMPL(__imp__sub_83BFA508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA514"))) PPC_WEAK_FUNC(sub_83BFA514);
PPC_FUNC_IMPL(__imp__sub_83BFA514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA518"))) PPC_WEAK_FUNC(sub_83BFA518);
PPC_FUNC_IMPL(__imp__sub_83BFA518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA524"))) PPC_WEAK_FUNC(sub_83BFA524);
PPC_FUNC_IMPL(__imp__sub_83BFA524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA528"))) PPC_WEAK_FUNC(sub_83BFA528);
PPC_FUNC_IMPL(__imp__sub_83BFA528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA534"))) PPC_WEAK_FUNC(sub_83BFA534);
PPC_FUNC_IMPL(__imp__sub_83BFA534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA538"))) PPC_WEAK_FUNC(sub_83BFA538);
PPC_FUNC_IMPL(__imp__sub_83BFA538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,288
	ctx.r3.s64 = ctx.r11.s64 + 288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA544"))) PPC_WEAK_FUNC(sub_83BFA544);
PPC_FUNC_IMPL(__imp__sub_83BFA544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA548"))) PPC_WEAK_FUNC(sub_83BFA548);
PPC_FUNC_IMPL(__imp__sub_83BFA548) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,13232
	ctx.r3.s64 = ctx.r11.s64 + 13232;
	// bl 0x83523120
	ctx.lr = 0x83BFA560;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,296
	ctx.r3.s64 = ctx.r10.s64 + 296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA56C;
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

__attribute__((alias("__imp__sub_83BFA57C"))) PPC_WEAK_FUNC(sub_83BFA57C);
PPC_FUNC_IMPL(__imp__sub_83BFA57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA580"))) PPC_WEAK_FUNC(sub_83BFA580);
PPC_FUNC_IMPL(__imp__sub_83BFA580) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13248
	ctx.r7.s64 = ctx.r8.s64 + 13248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA5A8"))) PPC_WEAK_FUNC(sub_83BFA5A8);
PPC_FUNC_IMPL(__imp__sub_83BFA5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,12944
	ctx.r6.s64 = ctx.r7.s64 + 12944;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13248(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13248);
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
	// std r9,12944(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12944, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA5F0"))) PPC_WEAK_FUNC(sub_83BFA5F0);
PPC_FUNC_IMPL(__imp__sub_83BFA5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA5FC"))) PPC_WEAK_FUNC(sub_83BFA5FC);
PPC_FUNC_IMPL(__imp__sub_83BFA5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA600"))) PPC_WEAK_FUNC(sub_83BFA600);
PPC_FUNC_IMPL(__imp__sub_83BFA600) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,13256
	ctx.r3.s64 = ctx.r11.s64 + 13256;
	// bl 0x8259af80
	ctx.lr = 0x83BFA618;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,328
	ctx.r3.s64 = ctx.r10.s64 + 328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA624;
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

__attribute__((alias("__imp__sub_83BFA634"))) PPC_WEAK_FUNC(sub_83BFA634);
PPC_FUNC_IMPL(__imp__sub_83BFA634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA638"))) PPC_WEAK_FUNC(sub_83BFA638);
PPC_FUNC_IMPL(__imp__sub_83BFA638) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13236
	ctx.r11.s64 = ctx.r8.s64 + 13236;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,12920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12920);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,320
	ctx.r3.s64 = ctx.r6.s64 + 320;
	// stw r10,13236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA668"))) PPC_WEAK_FUNC(sub_83BFA668);
PPC_FUNC_IMPL(__imp__sub_83BFA668) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,5764
	ctx.r4.s64 = ctx.r11.s64 + 5764;
	// addi r3,r10,12968
	ctx.r3.s64 = ctx.r10.s64 + 12968;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BFA68C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,336
	ctx.r3.s64 = ctx.r9.s64 + 336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA698;
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

__attribute__((alias("__imp__sub_83BFA6A8"))) PPC_WEAK_FUNC(sub_83BFA6A8);
PPC_FUNC_IMPL(__imp__sub_83BFA6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,440
	ctx.r3.s64 = ctx.r11.s64 + 440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA6B4"))) PPC_WEAK_FUNC(sub_83BFA6B4);
PPC_FUNC_IMPL(__imp__sub_83BFA6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA6B8"))) PPC_WEAK_FUNC(sub_83BFA6B8);
PPC_FUNC_IMPL(__imp__sub_83BFA6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,448
	ctx.r3.s64 = ctx.r11.s64 + 448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA6C4"))) PPC_WEAK_FUNC(sub_83BFA6C4);
PPC_FUNC_IMPL(__imp__sub_83BFA6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA6C8"))) PPC_WEAK_FUNC(sub_83BFA6C8);
PPC_FUNC_IMPL(__imp__sub_83BFA6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,456
	ctx.r3.s64 = ctx.r11.s64 + 456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA6D4"))) PPC_WEAK_FUNC(sub_83BFA6D4);
PPC_FUNC_IMPL(__imp__sub_83BFA6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA6D8"))) PPC_WEAK_FUNC(sub_83BFA6D8);
PPC_FUNC_IMPL(__imp__sub_83BFA6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,464
	ctx.r3.s64 = ctx.r11.s64 + 464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA6E4"))) PPC_WEAK_FUNC(sub_83BFA6E4);
PPC_FUNC_IMPL(__imp__sub_83BFA6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA6E8"))) PPC_WEAK_FUNC(sub_83BFA6E8);
PPC_FUNC_IMPL(__imp__sub_83BFA6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,472
	ctx.r3.s64 = ctx.r11.s64 + 472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA6F4"))) PPC_WEAK_FUNC(sub_83BFA6F4);
PPC_FUNC_IMPL(__imp__sub_83BFA6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA6F8"))) PPC_WEAK_FUNC(sub_83BFA6F8);
PPC_FUNC_IMPL(__imp__sub_83BFA6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,480
	ctx.r3.s64 = ctx.r11.s64 + 480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

