#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BF410C"))) PPC_WEAK_FUNC(sub_83BF410C);
PPC_FUNC_IMPL(__imp__sub_83BF410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4110"))) PPC_WEAK_FUNC(sub_83BF4110);
PPC_FUNC_IMPL(__imp__sub_83BF4110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7400
	ctx.r3.s64 = ctx.r11.s64 + -7400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF411C"))) PPC_WEAK_FUNC(sub_83BF411C);
PPC_FUNC_IMPL(__imp__sub_83BF411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4120"))) PPC_WEAK_FUNC(sub_83BF4120);
PPC_FUNC_IMPL(__imp__sub_83BF4120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7392
	ctx.r3.s64 = ctx.r11.s64 + -7392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF412C"))) PPC_WEAK_FUNC(sub_83BF412C);
PPC_FUNC_IMPL(__imp__sub_83BF412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4130"))) PPC_WEAK_FUNC(sub_83BF4130);
PPC_FUNC_IMPL(__imp__sub_83BF4130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF413C"))) PPC_WEAK_FUNC(sub_83BF413C);
PPC_FUNC_IMPL(__imp__sub_83BF413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4140"))) PPC_WEAK_FUNC(sub_83BF4140);
PPC_FUNC_IMPL(__imp__sub_83BF4140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7376
	ctx.r3.s64 = ctx.r11.s64 + -7376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF414C"))) PPC_WEAK_FUNC(sub_83BF414C);
PPC_FUNC_IMPL(__imp__sub_83BF414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4150"))) PPC_WEAK_FUNC(sub_83BF4150);
PPC_FUNC_IMPL(__imp__sub_83BF4150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7368
	ctx.r3.s64 = ctx.r11.s64 + -7368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF415C"))) PPC_WEAK_FUNC(sub_83BF415C);
PPC_FUNC_IMPL(__imp__sub_83BF415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4160"))) PPC_WEAK_FUNC(sub_83BF4160);
PPC_FUNC_IMPL(__imp__sub_83BF4160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7360
	ctx.r3.s64 = ctx.r11.s64 + -7360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF416C"))) PPC_WEAK_FUNC(sub_83BF416C);
PPC_FUNC_IMPL(__imp__sub_83BF416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4170"))) PPC_WEAK_FUNC(sub_83BF4170);
PPC_FUNC_IMPL(__imp__sub_83BF4170) {
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
	// addi r3,r11,-7680
	ctx.r3.s64 = ctx.r11.s64 + -7680;
	// bl 0x83523120
	ctx.lr = 0x83BF4188;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7352
	ctx.r3.s64 = ctx.r10.s64 + -7352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4194;
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

__attribute__((alias("__imp__sub_83BF41A4"))) PPC_WEAK_FUNC(sub_83BF41A4);
PPC_FUNC_IMPL(__imp__sub_83BF41A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF41A8"))) PPC_WEAK_FUNC(sub_83BF41A8);
PPC_FUNC_IMPL(__imp__sub_83BF41A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7664
	ctx.r7.s64 = ctx.r8.s64 + -7664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7664(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF41D0"))) PPC_WEAK_FUNC(sub_83BF41D0);
PPC_FUNC_IMPL(__imp__sub_83BF41D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,2636
	ctx.r6.s64 = ctx.r7.s64 + 2636;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2564(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2564);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7664);
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
	// std r9,2636(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2636, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4218"))) PPC_WEAK_FUNC(sub_83BF4218);
PPC_FUNC_IMPL(__imp__sub_83BF4218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7336
	ctx.r3.s64 = ctx.r11.s64 + -7336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4224"))) PPC_WEAK_FUNC(sub_83BF4224);
PPC_FUNC_IMPL(__imp__sub_83BF4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4228"))) PPC_WEAK_FUNC(sub_83BF4228);
PPC_FUNC_IMPL(__imp__sub_83BF4228) {
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
	// addi r3,r11,-7656
	ctx.r3.s64 = ctx.r11.s64 + -7656;
	// bl 0x8259af80
	ctx.lr = 0x83BF4240;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7320
	ctx.r3.s64 = ctx.r10.s64 + -7320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF424C;
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

__attribute__((alias("__imp__sub_83BF425C"))) PPC_WEAK_FUNC(sub_83BF425C);
PPC_FUNC_IMPL(__imp__sub_83BF425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4260"))) PPC_WEAK_FUNC(sub_83BF4260);
PPC_FUNC_IMPL(__imp__sub_83BF4260) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7676
	ctx.r11.s64 = ctx.r8.s64 + -7676;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,2612(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2612);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7328
	ctx.r3.s64 = ctx.r6.s64 + -7328;
	// stw r10,-7676(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4290"))) PPC_WEAK_FUNC(sub_83BF4290);
PPC_FUNC_IMPL(__imp__sub_83BF4290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7312
	ctx.r3.s64 = ctx.r11.s64 + -7312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF429C"))) PPC_WEAK_FUNC(sub_83BF429C);
PPC_FUNC_IMPL(__imp__sub_83BF429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF42A0"))) PPC_WEAK_FUNC(sub_83BF42A0);
PPC_FUNC_IMPL(__imp__sub_83BF42A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7304
	ctx.r3.s64 = ctx.r11.s64 + -7304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF42AC"))) PPC_WEAK_FUNC(sub_83BF42AC);
PPC_FUNC_IMPL(__imp__sub_83BF42AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF42B0"))) PPC_WEAK_FUNC(sub_83BF42B0);
PPC_FUNC_IMPL(__imp__sub_83BF42B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7296
	ctx.r3.s64 = ctx.r11.s64 + -7296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF42BC"))) PPC_WEAK_FUNC(sub_83BF42BC);
PPC_FUNC_IMPL(__imp__sub_83BF42BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF42C0"))) PPC_WEAK_FUNC(sub_83BF42C0);
PPC_FUNC_IMPL(__imp__sub_83BF42C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7288
	ctx.r3.s64 = ctx.r11.s64 + -7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF42CC"))) PPC_WEAK_FUNC(sub_83BF42CC);
PPC_FUNC_IMPL(__imp__sub_83BF42CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF42D0"))) PPC_WEAK_FUNC(sub_83BF42D0);
PPC_FUNC_IMPL(__imp__sub_83BF42D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7280
	ctx.r3.s64 = ctx.r11.s64 + -7280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF42DC"))) PPC_WEAK_FUNC(sub_83BF42DC);
PPC_FUNC_IMPL(__imp__sub_83BF42DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF42E0"))) PPC_WEAK_FUNC(sub_83BF42E0);
PPC_FUNC_IMPL(__imp__sub_83BF42E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7272
	ctx.r3.s64 = ctx.r11.s64 + -7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF42EC"))) PPC_WEAK_FUNC(sub_83BF42EC);
PPC_FUNC_IMPL(__imp__sub_83BF42EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF42F0"))) PPC_WEAK_FUNC(sub_83BF42F0);
PPC_FUNC_IMPL(__imp__sub_83BF42F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF42FC"))) PPC_WEAK_FUNC(sub_83BF42FC);
PPC_FUNC_IMPL(__imp__sub_83BF42FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4300"))) PPC_WEAK_FUNC(sub_83BF4300);
PPC_FUNC_IMPL(__imp__sub_83BF4300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF430C"))) PPC_WEAK_FUNC(sub_83BF430C);
PPC_FUNC_IMPL(__imp__sub_83BF430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4310"))) PPC_WEAK_FUNC(sub_83BF4310);
PPC_FUNC_IMPL(__imp__sub_83BF4310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7248
	ctx.r3.s64 = ctx.r11.s64 + -7248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF431C"))) PPC_WEAK_FUNC(sub_83BF431C);
PPC_FUNC_IMPL(__imp__sub_83BF431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4320"))) PPC_WEAK_FUNC(sub_83BF4320);
PPC_FUNC_IMPL(__imp__sub_83BF4320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7240
	ctx.r3.s64 = ctx.r11.s64 + -7240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF432C"))) PPC_WEAK_FUNC(sub_83BF432C);
PPC_FUNC_IMPL(__imp__sub_83BF432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4330"))) PPC_WEAK_FUNC(sub_83BF4330);
PPC_FUNC_IMPL(__imp__sub_83BF4330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7232
	ctx.r3.s64 = ctx.r11.s64 + -7232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF433C"))) PPC_WEAK_FUNC(sub_83BF433C);
PPC_FUNC_IMPL(__imp__sub_83BF433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4340"))) PPC_WEAK_FUNC(sub_83BF4340);
PPC_FUNC_IMPL(__imp__sub_83BF4340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF434C"))) PPC_WEAK_FUNC(sub_83BF434C);
PPC_FUNC_IMPL(__imp__sub_83BF434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4350"))) PPC_WEAK_FUNC(sub_83BF4350);
PPC_FUNC_IMPL(__imp__sub_83BF4350) {
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
	// addi r3,r11,-7312
	ctx.r3.s64 = ctx.r11.s64 + -7312;
	// bl 0x83523120
	ctx.lr = 0x83BF4368;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7216
	ctx.r3.s64 = ctx.r10.s64 + -7216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4374;
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

__attribute__((alias("__imp__sub_83BF4384"))) PPC_WEAK_FUNC(sub_83BF4384);
PPC_FUNC_IMPL(__imp__sub_83BF4384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4388"))) PPC_WEAK_FUNC(sub_83BF4388);
PPC_FUNC_IMPL(__imp__sub_83BF4388) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7296
	ctx.r7.s64 = ctx.r8.s64 + -7296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7296(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF43B0"))) PPC_WEAK_FUNC(sub_83BF43B0);
PPC_FUNC_IMPL(__imp__sub_83BF43B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,2764
	ctx.r6.s64 = ctx.r7.s64 + 2764;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2692(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2692);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7296);
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
	// std r9,2764(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2764, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF43F8"))) PPC_WEAK_FUNC(sub_83BF43F8);
PPC_FUNC_IMPL(__imp__sub_83BF43F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7200
	ctx.r3.s64 = ctx.r11.s64 + -7200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4404"))) PPC_WEAK_FUNC(sub_83BF4404);
PPC_FUNC_IMPL(__imp__sub_83BF4404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4408"))) PPC_WEAK_FUNC(sub_83BF4408);
PPC_FUNC_IMPL(__imp__sub_83BF4408) {
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
	// addi r3,r11,-7288
	ctx.r3.s64 = ctx.r11.s64 + -7288;
	// bl 0x8259af80
	ctx.lr = 0x83BF4420;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7184
	ctx.r3.s64 = ctx.r10.s64 + -7184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF442C;
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

__attribute__((alias("__imp__sub_83BF443C"))) PPC_WEAK_FUNC(sub_83BF443C);
PPC_FUNC_IMPL(__imp__sub_83BF443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4440"))) PPC_WEAK_FUNC(sub_83BF4440);
PPC_FUNC_IMPL(__imp__sub_83BF4440) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7308
	ctx.r11.s64 = ctx.r8.s64 + -7308;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,2740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2740);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7192
	ctx.r3.s64 = ctx.r6.s64 + -7192;
	// stw r10,-7308(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4470"))) PPC_WEAK_FUNC(sub_83BF4470);
PPC_FUNC_IMPL(__imp__sub_83BF4470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7176
	ctx.r3.s64 = ctx.r11.s64 + -7176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF447C"))) PPC_WEAK_FUNC(sub_83BF447C);
PPC_FUNC_IMPL(__imp__sub_83BF447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4480"))) PPC_WEAK_FUNC(sub_83BF4480);
PPC_FUNC_IMPL(__imp__sub_83BF4480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7168
	ctx.r3.s64 = ctx.r11.s64 + -7168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF448C"))) PPC_WEAK_FUNC(sub_83BF448C);
PPC_FUNC_IMPL(__imp__sub_83BF448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4490"))) PPC_WEAK_FUNC(sub_83BF4490);
PPC_FUNC_IMPL(__imp__sub_83BF4490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7160
	ctx.r3.s64 = ctx.r11.s64 + -7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF449C"))) PPC_WEAK_FUNC(sub_83BF449C);
PPC_FUNC_IMPL(__imp__sub_83BF449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF44A0"))) PPC_WEAK_FUNC(sub_83BF44A0);
PPC_FUNC_IMPL(__imp__sub_83BF44A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7152
	ctx.r3.s64 = ctx.r11.s64 + -7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF44AC"))) PPC_WEAK_FUNC(sub_83BF44AC);
PPC_FUNC_IMPL(__imp__sub_83BF44AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF44B0"))) PPC_WEAK_FUNC(sub_83BF44B0);
PPC_FUNC_IMPL(__imp__sub_83BF44B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF44BC"))) PPC_WEAK_FUNC(sub_83BF44BC);
PPC_FUNC_IMPL(__imp__sub_83BF44BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF44C0"))) PPC_WEAK_FUNC(sub_83BF44C0);
PPC_FUNC_IMPL(__imp__sub_83BF44C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7136
	ctx.r3.s64 = ctx.r11.s64 + -7136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF44CC"))) PPC_WEAK_FUNC(sub_83BF44CC);
PPC_FUNC_IMPL(__imp__sub_83BF44CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF44D0"))) PPC_WEAK_FUNC(sub_83BF44D0);
PPC_FUNC_IMPL(__imp__sub_83BF44D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7128
	ctx.r3.s64 = ctx.r11.s64 + -7128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF44DC"))) PPC_WEAK_FUNC(sub_83BF44DC);
PPC_FUNC_IMPL(__imp__sub_83BF44DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF44E0"))) PPC_WEAK_FUNC(sub_83BF44E0);
PPC_FUNC_IMPL(__imp__sub_83BF44E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7120
	ctx.r3.s64 = ctx.r11.s64 + -7120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF44EC"))) PPC_WEAK_FUNC(sub_83BF44EC);
PPC_FUNC_IMPL(__imp__sub_83BF44EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF44F0"))) PPC_WEAK_FUNC(sub_83BF44F0);
PPC_FUNC_IMPL(__imp__sub_83BF44F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7112
	ctx.r3.s64 = ctx.r11.s64 + -7112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF44FC"))) PPC_WEAK_FUNC(sub_83BF44FC);
PPC_FUNC_IMPL(__imp__sub_83BF44FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4500"))) PPC_WEAK_FUNC(sub_83BF4500);
PPC_FUNC_IMPL(__imp__sub_83BF4500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7104
	ctx.r3.s64 = ctx.r11.s64 + -7104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF450C"))) PPC_WEAK_FUNC(sub_83BF450C);
PPC_FUNC_IMPL(__imp__sub_83BF450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4510"))) PPC_WEAK_FUNC(sub_83BF4510);
PPC_FUNC_IMPL(__imp__sub_83BF4510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7096
	ctx.r3.s64 = ctx.r11.s64 + -7096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF451C"))) PPC_WEAK_FUNC(sub_83BF451C);
PPC_FUNC_IMPL(__imp__sub_83BF451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4520"))) PPC_WEAK_FUNC(sub_83BF4520);
PPC_FUNC_IMPL(__imp__sub_83BF4520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7088
	ctx.r3.s64 = ctx.r11.s64 + -7088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF452C"))) PPC_WEAK_FUNC(sub_83BF452C);
PPC_FUNC_IMPL(__imp__sub_83BF452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4530"))) PPC_WEAK_FUNC(sub_83BF4530);
PPC_FUNC_IMPL(__imp__sub_83BF4530) {
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
	// addi r3,r11,-6944
	ctx.r3.s64 = ctx.r11.s64 + -6944;
	// bl 0x83523120
	ctx.lr = 0x83BF4548;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7080
	ctx.r3.s64 = ctx.r10.s64 + -7080;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4554;
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

__attribute__((alias("__imp__sub_83BF4564"))) PPC_WEAK_FUNC(sub_83BF4564);
PPC_FUNC_IMPL(__imp__sub_83BF4564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4568"))) PPC_WEAK_FUNC(sub_83BF4568);
PPC_FUNC_IMPL(__imp__sub_83BF4568) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6928
	ctx.r7.s64 = ctx.r8.s64 + -6928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6928(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4590"))) PPC_WEAK_FUNC(sub_83BF4590);
PPC_FUNC_IMPL(__imp__sub_83BF4590) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,2892
	ctx.r6.s64 = ctx.r7.s64 + 2892;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2820(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2820);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6928);
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
	// std r9,2892(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2892, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF45D8"))) PPC_WEAK_FUNC(sub_83BF45D8);
PPC_FUNC_IMPL(__imp__sub_83BF45D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7064
	ctx.r3.s64 = ctx.r11.s64 + -7064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF45E4"))) PPC_WEAK_FUNC(sub_83BF45E4);
PPC_FUNC_IMPL(__imp__sub_83BF45E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF45E8"))) PPC_WEAK_FUNC(sub_83BF45E8);
PPC_FUNC_IMPL(__imp__sub_83BF45E8) {
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
	// addi r3,r11,-6920
	ctx.r3.s64 = ctx.r11.s64 + -6920;
	// bl 0x8259af80
	ctx.lr = 0x83BF4600;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-7048
	ctx.r3.s64 = ctx.r10.s64 + -7048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF460C;
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

__attribute__((alias("__imp__sub_83BF461C"))) PPC_WEAK_FUNC(sub_83BF461C);
PPC_FUNC_IMPL(__imp__sub_83BF461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4620"))) PPC_WEAK_FUNC(sub_83BF4620);
PPC_FUNC_IMPL(__imp__sub_83BF4620) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6940
	ctx.r11.s64 = ctx.r8.s64 + -6940;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,2868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7056
	ctx.r3.s64 = ctx.r6.s64 + -7056;
	// stw r10,-6940(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4650"))) PPC_WEAK_FUNC(sub_83BF4650);
PPC_FUNC_IMPL(__imp__sub_83BF4650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7040
	ctx.r3.s64 = ctx.r11.s64 + -7040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF465C"))) PPC_WEAK_FUNC(sub_83BF465C);
PPC_FUNC_IMPL(__imp__sub_83BF465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4660"))) PPC_WEAK_FUNC(sub_83BF4660);
PPC_FUNC_IMPL(__imp__sub_83BF4660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7032
	ctx.r3.s64 = ctx.r11.s64 + -7032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF466C"))) PPC_WEAK_FUNC(sub_83BF466C);
PPC_FUNC_IMPL(__imp__sub_83BF466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4670"))) PPC_WEAK_FUNC(sub_83BF4670);
PPC_FUNC_IMPL(__imp__sub_83BF4670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF467C"))) PPC_WEAK_FUNC(sub_83BF467C);
PPC_FUNC_IMPL(__imp__sub_83BF467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4680"))) PPC_WEAK_FUNC(sub_83BF4680);
PPC_FUNC_IMPL(__imp__sub_83BF4680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7016
	ctx.r3.s64 = ctx.r11.s64 + -7016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF468C"))) PPC_WEAK_FUNC(sub_83BF468C);
PPC_FUNC_IMPL(__imp__sub_83BF468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4690"))) PPC_WEAK_FUNC(sub_83BF4690);
PPC_FUNC_IMPL(__imp__sub_83BF4690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7008
	ctx.r3.s64 = ctx.r11.s64 + -7008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF469C"))) PPC_WEAK_FUNC(sub_83BF469C);
PPC_FUNC_IMPL(__imp__sub_83BF469C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF46A0"))) PPC_WEAK_FUNC(sub_83BF46A0);
PPC_FUNC_IMPL(__imp__sub_83BF46A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF46AC"))) PPC_WEAK_FUNC(sub_83BF46AC);
PPC_FUNC_IMPL(__imp__sub_83BF46AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF46B0"))) PPC_WEAK_FUNC(sub_83BF46B0);
PPC_FUNC_IMPL(__imp__sub_83BF46B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6992
	ctx.r3.s64 = ctx.r11.s64 + -6992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF46BC"))) PPC_WEAK_FUNC(sub_83BF46BC);
PPC_FUNC_IMPL(__imp__sub_83BF46BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF46C0"))) PPC_WEAK_FUNC(sub_83BF46C0);
PPC_FUNC_IMPL(__imp__sub_83BF46C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6984
	ctx.r3.s64 = ctx.r11.s64 + -6984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF46CC"))) PPC_WEAK_FUNC(sub_83BF46CC);
PPC_FUNC_IMPL(__imp__sub_83BF46CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF46D0"))) PPC_WEAK_FUNC(sub_83BF46D0);
PPC_FUNC_IMPL(__imp__sub_83BF46D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6976
	ctx.r3.s64 = ctx.r11.s64 + -6976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF46DC"))) PPC_WEAK_FUNC(sub_83BF46DC);
PPC_FUNC_IMPL(__imp__sub_83BF46DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF46E0"))) PPC_WEAK_FUNC(sub_83BF46E0);
PPC_FUNC_IMPL(__imp__sub_83BF46E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6968
	ctx.r3.s64 = ctx.r11.s64 + -6968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF46EC"))) PPC_WEAK_FUNC(sub_83BF46EC);
PPC_FUNC_IMPL(__imp__sub_83BF46EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF46F0"))) PPC_WEAK_FUNC(sub_83BF46F0);
PPC_FUNC_IMPL(__imp__sub_83BF46F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6960
	ctx.r3.s64 = ctx.r11.s64 + -6960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF46FC"))) PPC_WEAK_FUNC(sub_83BF46FC);
PPC_FUNC_IMPL(__imp__sub_83BF46FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4700"))) PPC_WEAK_FUNC(sub_83BF4700);
PPC_FUNC_IMPL(__imp__sub_83BF4700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6952
	ctx.r3.s64 = ctx.r11.s64 + -6952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF470C"))) PPC_WEAK_FUNC(sub_83BF470C);
PPC_FUNC_IMPL(__imp__sub_83BF470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4710"))) PPC_WEAK_FUNC(sub_83BF4710);
PPC_FUNC_IMPL(__imp__sub_83BF4710) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6560
	ctx.r7.s64 = ctx.r8.s64 + -6560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6560(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4738"))) PPC_WEAK_FUNC(sub_83BF4738);
PPC_FUNC_IMPL(__imp__sub_83BF4738) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,3028
	ctx.r6.s64 = ctx.r7.s64 + 3028;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2956(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2956);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6560(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6560);
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
	// std r9,3028(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3028, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4780"))) PPC_WEAK_FUNC(sub_83BF4780);
PPC_FUNC_IMPL(__imp__sub_83BF4780) {
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
	// addi r3,r11,-6576
	ctx.r3.s64 = ctx.r11.s64 + -6576;
	// bl 0x83523120
	ctx.lr = 0x83BF4798;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6944
	ctx.r3.s64 = ctx.r10.s64 + -6944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF47A4;
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

__attribute__((alias("__imp__sub_83BF47B4"))) PPC_WEAK_FUNC(sub_83BF47B4);
PPC_FUNC_IMPL(__imp__sub_83BF47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF47B8"))) PPC_WEAK_FUNC(sub_83BF47B8);
PPC_FUNC_IMPL(__imp__sub_83BF47B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6928
	ctx.r3.s64 = ctx.r11.s64 + -6928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF47C4"))) PPC_WEAK_FUNC(sub_83BF47C4);
PPC_FUNC_IMPL(__imp__sub_83BF47C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF47C8"))) PPC_WEAK_FUNC(sub_83BF47C8);
PPC_FUNC_IMPL(__imp__sub_83BF47C8) {
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
	// addi r3,r11,-6552
	ctx.r3.s64 = ctx.r11.s64 + -6552;
	// bl 0x8259af80
	ctx.lr = 0x83BF47E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6912
	ctx.r3.s64 = ctx.r10.s64 + -6912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF47EC;
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

__attribute__((alias("__imp__sub_83BF47FC"))) PPC_WEAK_FUNC(sub_83BF47FC);
PPC_FUNC_IMPL(__imp__sub_83BF47FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4800"))) PPC_WEAK_FUNC(sub_83BF4800);
PPC_FUNC_IMPL(__imp__sub_83BF4800) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6572
	ctx.r11.s64 = ctx.r8.s64 + -6572;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,3004(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3004);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6920
	ctx.r3.s64 = ctx.r6.s64 + -6920;
	// stw r10,-6572(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4830"))) PPC_WEAK_FUNC(sub_83BF4830);
PPC_FUNC_IMPL(__imp__sub_83BF4830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6904
	ctx.r3.s64 = ctx.r11.s64 + -6904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF483C"))) PPC_WEAK_FUNC(sub_83BF483C);
PPC_FUNC_IMPL(__imp__sub_83BF483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4840"))) PPC_WEAK_FUNC(sub_83BF4840);
PPC_FUNC_IMPL(__imp__sub_83BF4840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6896
	ctx.r3.s64 = ctx.r11.s64 + -6896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF484C"))) PPC_WEAK_FUNC(sub_83BF484C);
PPC_FUNC_IMPL(__imp__sub_83BF484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4850"))) PPC_WEAK_FUNC(sub_83BF4850);
PPC_FUNC_IMPL(__imp__sub_83BF4850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6888
	ctx.r3.s64 = ctx.r11.s64 + -6888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF485C"))) PPC_WEAK_FUNC(sub_83BF485C);
PPC_FUNC_IMPL(__imp__sub_83BF485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4860"))) PPC_WEAK_FUNC(sub_83BF4860);
PPC_FUNC_IMPL(__imp__sub_83BF4860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6880
	ctx.r3.s64 = ctx.r11.s64 + -6880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF486C"))) PPC_WEAK_FUNC(sub_83BF486C);
PPC_FUNC_IMPL(__imp__sub_83BF486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4870"))) PPC_WEAK_FUNC(sub_83BF4870);
PPC_FUNC_IMPL(__imp__sub_83BF4870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6872
	ctx.r3.s64 = ctx.r11.s64 + -6872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF487C"))) PPC_WEAK_FUNC(sub_83BF487C);
PPC_FUNC_IMPL(__imp__sub_83BF487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4880"))) PPC_WEAK_FUNC(sub_83BF4880);
PPC_FUNC_IMPL(__imp__sub_83BF4880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6864
	ctx.r3.s64 = ctx.r11.s64 + -6864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF488C"))) PPC_WEAK_FUNC(sub_83BF488C);
PPC_FUNC_IMPL(__imp__sub_83BF488C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4890"))) PPC_WEAK_FUNC(sub_83BF4890);
PPC_FUNC_IMPL(__imp__sub_83BF4890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6856
	ctx.r3.s64 = ctx.r11.s64 + -6856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF489C"))) PPC_WEAK_FUNC(sub_83BF489C);
PPC_FUNC_IMPL(__imp__sub_83BF489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF48A0"))) PPC_WEAK_FUNC(sub_83BF48A0);
PPC_FUNC_IMPL(__imp__sub_83BF48A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6848
	ctx.r3.s64 = ctx.r11.s64 + -6848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF48AC"))) PPC_WEAK_FUNC(sub_83BF48AC);
PPC_FUNC_IMPL(__imp__sub_83BF48AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF48B0"))) PPC_WEAK_FUNC(sub_83BF48B0);
PPC_FUNC_IMPL(__imp__sub_83BF48B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6840
	ctx.r3.s64 = ctx.r11.s64 + -6840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF48BC"))) PPC_WEAK_FUNC(sub_83BF48BC);
PPC_FUNC_IMPL(__imp__sub_83BF48BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF48C0"))) PPC_WEAK_FUNC(sub_83BF48C0);
PPC_FUNC_IMPL(__imp__sub_83BF48C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6832
	ctx.r3.s64 = ctx.r11.s64 + -6832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF48CC"))) PPC_WEAK_FUNC(sub_83BF48CC);
PPC_FUNC_IMPL(__imp__sub_83BF48CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF48D0"))) PPC_WEAK_FUNC(sub_83BF48D0);
PPC_FUNC_IMPL(__imp__sub_83BF48D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6824
	ctx.r3.s64 = ctx.r11.s64 + -6824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF48DC"))) PPC_WEAK_FUNC(sub_83BF48DC);
PPC_FUNC_IMPL(__imp__sub_83BF48DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF48E0"))) PPC_WEAK_FUNC(sub_83BF48E0);
PPC_FUNC_IMPL(__imp__sub_83BF48E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6816
	ctx.r3.s64 = ctx.r11.s64 + -6816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF48EC"))) PPC_WEAK_FUNC(sub_83BF48EC);
PPC_FUNC_IMPL(__imp__sub_83BF48EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF48F0"))) PPC_WEAK_FUNC(sub_83BF48F0);
PPC_FUNC_IMPL(__imp__sub_83BF48F0) {
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
	// addi r3,r11,-6208
	ctx.r3.s64 = ctx.r11.s64 + -6208;
	// bl 0x83523120
	ctx.lr = 0x83BF4908;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6808
	ctx.r3.s64 = ctx.r10.s64 + -6808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4914;
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

__attribute__((alias("__imp__sub_83BF4924"))) PPC_WEAK_FUNC(sub_83BF4924);
PPC_FUNC_IMPL(__imp__sub_83BF4924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4928"))) PPC_WEAK_FUNC(sub_83BF4928);
PPC_FUNC_IMPL(__imp__sub_83BF4928) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6192
	ctx.r7.s64 = ctx.r8.s64 + -6192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6192(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4950"))) PPC_WEAK_FUNC(sub_83BF4950);
PPC_FUNC_IMPL(__imp__sub_83BF4950) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,3348
	ctx.r6.s64 = ctx.r7.s64 + 3348;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3276(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3276);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6192);
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
	// std r9,3348(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3348, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4998"))) PPC_WEAK_FUNC(sub_83BF4998);
PPC_FUNC_IMPL(__imp__sub_83BF4998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF49A4"))) PPC_WEAK_FUNC(sub_83BF49A4);
PPC_FUNC_IMPL(__imp__sub_83BF49A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF49A8"))) PPC_WEAK_FUNC(sub_83BF49A8);
PPC_FUNC_IMPL(__imp__sub_83BF49A8) {
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
	// addi r3,r11,-6184
	ctx.r3.s64 = ctx.r11.s64 + -6184;
	// bl 0x8259af80
	ctx.lr = 0x83BF49C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6776
	ctx.r3.s64 = ctx.r10.s64 + -6776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF49CC;
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

__attribute__((alias("__imp__sub_83BF49DC"))) PPC_WEAK_FUNC(sub_83BF49DC);
PPC_FUNC_IMPL(__imp__sub_83BF49DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF49E0"))) PPC_WEAK_FUNC(sub_83BF49E0);
PPC_FUNC_IMPL(__imp__sub_83BF49E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6204
	ctx.r11.s64 = ctx.r8.s64 + -6204;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,3324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6784
	ctx.r3.s64 = ctx.r6.s64 + -6784;
	// stw r10,-6204(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A10"))) PPC_WEAK_FUNC(sub_83BF4A10);
PPC_FUNC_IMPL(__imp__sub_83BF4A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6768
	ctx.r3.s64 = ctx.r11.s64 + -6768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A1C"))) PPC_WEAK_FUNC(sub_83BF4A1C);
PPC_FUNC_IMPL(__imp__sub_83BF4A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4A20"))) PPC_WEAK_FUNC(sub_83BF4A20);
PPC_FUNC_IMPL(__imp__sub_83BF4A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A2C"))) PPC_WEAK_FUNC(sub_83BF4A2C);
PPC_FUNC_IMPL(__imp__sub_83BF4A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4A30"))) PPC_WEAK_FUNC(sub_83BF4A30);
PPC_FUNC_IMPL(__imp__sub_83BF4A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A3C"))) PPC_WEAK_FUNC(sub_83BF4A3C);
PPC_FUNC_IMPL(__imp__sub_83BF4A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4A40"))) PPC_WEAK_FUNC(sub_83BF4A40);
PPC_FUNC_IMPL(__imp__sub_83BF4A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A4C"))) PPC_WEAK_FUNC(sub_83BF4A4C);
PPC_FUNC_IMPL(__imp__sub_83BF4A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4A50"))) PPC_WEAK_FUNC(sub_83BF4A50);
PPC_FUNC_IMPL(__imp__sub_83BF4A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A5C"))) PPC_WEAK_FUNC(sub_83BF4A5C);
PPC_FUNC_IMPL(__imp__sub_83BF4A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4A60"))) PPC_WEAK_FUNC(sub_83BF4A60);
PPC_FUNC_IMPL(__imp__sub_83BF4A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A6C"))) PPC_WEAK_FUNC(sub_83BF4A6C);
PPC_FUNC_IMPL(__imp__sub_83BF4A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4A70"))) PPC_WEAK_FUNC(sub_83BF4A70);
PPC_FUNC_IMPL(__imp__sub_83BF4A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A7C"))) PPC_WEAK_FUNC(sub_83BF4A7C);
PPC_FUNC_IMPL(__imp__sub_83BF4A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4A80"))) PPC_WEAK_FUNC(sub_83BF4A80);
PPC_FUNC_IMPL(__imp__sub_83BF4A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6712
	ctx.r3.s64 = ctx.r11.s64 + -6712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A8C"))) PPC_WEAK_FUNC(sub_83BF4A8C);
PPC_FUNC_IMPL(__imp__sub_83BF4A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4A90"))) PPC_WEAK_FUNC(sub_83BF4A90);
PPC_FUNC_IMPL(__imp__sub_83BF4A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4A9C"))) PPC_WEAK_FUNC(sub_83BF4A9C);
PPC_FUNC_IMPL(__imp__sub_83BF4A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4AA0"))) PPC_WEAK_FUNC(sub_83BF4AA0);
PPC_FUNC_IMPL(__imp__sub_83BF4AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6696
	ctx.r3.s64 = ctx.r11.s64 + -6696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4AAC"))) PPC_WEAK_FUNC(sub_83BF4AAC);
PPC_FUNC_IMPL(__imp__sub_83BF4AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4AB0"))) PPC_WEAK_FUNC(sub_83BF4AB0);
PPC_FUNC_IMPL(__imp__sub_83BF4AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6688
	ctx.r3.s64 = ctx.r11.s64 + -6688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4ABC"))) PPC_WEAK_FUNC(sub_83BF4ABC);
PPC_FUNC_IMPL(__imp__sub_83BF4ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4AC0"))) PPC_WEAK_FUNC(sub_83BF4AC0);
PPC_FUNC_IMPL(__imp__sub_83BF4AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6680
	ctx.r3.s64 = ctx.r11.s64 + -6680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4ACC"))) PPC_WEAK_FUNC(sub_83BF4ACC);
PPC_FUNC_IMPL(__imp__sub_83BF4ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4AD0"))) PPC_WEAK_FUNC(sub_83BF4AD0);
PPC_FUNC_IMPL(__imp__sub_83BF4AD0) {
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
	// addi r3,r11,-5840
	ctx.r3.s64 = ctx.r11.s64 + -5840;
	// bl 0x83523120
	ctx.lr = 0x83BF4AE8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6672
	ctx.r3.s64 = ctx.r10.s64 + -6672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4AF4;
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

__attribute__((alias("__imp__sub_83BF4B04"))) PPC_WEAK_FUNC(sub_83BF4B04);
PPC_FUNC_IMPL(__imp__sub_83BF4B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4B08"))) PPC_WEAK_FUNC(sub_83BF4B08);
PPC_FUNC_IMPL(__imp__sub_83BF4B08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5824
	ctx.r7.s64 = ctx.r8.s64 + -5824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5824(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4B30"))) PPC_WEAK_FUNC(sub_83BF4B30);
PPC_FUNC_IMPL(__imp__sub_83BF4B30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,3580
	ctx.r6.s64 = ctx.r7.s64 + 3580;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3508(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3508);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5824);
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
	// std r9,3580(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3580, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4B78"))) PPC_WEAK_FUNC(sub_83BF4B78);
PPC_FUNC_IMPL(__imp__sub_83BF4B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6656
	ctx.r3.s64 = ctx.r11.s64 + -6656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4B84"))) PPC_WEAK_FUNC(sub_83BF4B84);
PPC_FUNC_IMPL(__imp__sub_83BF4B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4B88"))) PPC_WEAK_FUNC(sub_83BF4B88);
PPC_FUNC_IMPL(__imp__sub_83BF4B88) {
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
	// addi r3,r11,-5816
	ctx.r3.s64 = ctx.r11.s64 + -5816;
	// bl 0x8259af80
	ctx.lr = 0x83BF4BA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6640
	ctx.r3.s64 = ctx.r10.s64 + -6640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4BAC;
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

__attribute__((alias("__imp__sub_83BF4BBC"))) PPC_WEAK_FUNC(sub_83BF4BBC);
PPC_FUNC_IMPL(__imp__sub_83BF4BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4BC0"))) PPC_WEAK_FUNC(sub_83BF4BC0);
PPC_FUNC_IMPL(__imp__sub_83BF4BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5836
	ctx.r11.s64 = ctx.r8.s64 + -5836;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,3556(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3556);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6648
	ctx.r3.s64 = ctx.r6.s64 + -6648;
	// stw r10,-5836(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4BF0"))) PPC_WEAK_FUNC(sub_83BF4BF0);
PPC_FUNC_IMPL(__imp__sub_83BF4BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6632
	ctx.r3.s64 = ctx.r11.s64 + -6632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4BFC"))) PPC_WEAK_FUNC(sub_83BF4BFC);
PPC_FUNC_IMPL(__imp__sub_83BF4BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C00"))) PPC_WEAK_FUNC(sub_83BF4C00);
PPC_FUNC_IMPL(__imp__sub_83BF4C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C0C"))) PPC_WEAK_FUNC(sub_83BF4C0C);
PPC_FUNC_IMPL(__imp__sub_83BF4C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C10"))) PPC_WEAK_FUNC(sub_83BF4C10);
PPC_FUNC_IMPL(__imp__sub_83BF4C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6616
	ctx.r3.s64 = ctx.r11.s64 + -6616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C1C"))) PPC_WEAK_FUNC(sub_83BF4C1C);
PPC_FUNC_IMPL(__imp__sub_83BF4C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C20"))) PPC_WEAK_FUNC(sub_83BF4C20);
PPC_FUNC_IMPL(__imp__sub_83BF4C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6608
	ctx.r3.s64 = ctx.r11.s64 + -6608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C2C"))) PPC_WEAK_FUNC(sub_83BF4C2C);
PPC_FUNC_IMPL(__imp__sub_83BF4C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C30"))) PPC_WEAK_FUNC(sub_83BF4C30);
PPC_FUNC_IMPL(__imp__sub_83BF4C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6600
	ctx.r3.s64 = ctx.r11.s64 + -6600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C3C"))) PPC_WEAK_FUNC(sub_83BF4C3C);
PPC_FUNC_IMPL(__imp__sub_83BF4C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C40"))) PPC_WEAK_FUNC(sub_83BF4C40);
PPC_FUNC_IMPL(__imp__sub_83BF4C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6592
	ctx.r3.s64 = ctx.r11.s64 + -6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C4C"))) PPC_WEAK_FUNC(sub_83BF4C4C);
PPC_FUNC_IMPL(__imp__sub_83BF4C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C50"))) PPC_WEAK_FUNC(sub_83BF4C50);
PPC_FUNC_IMPL(__imp__sub_83BF4C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C5C"))) PPC_WEAK_FUNC(sub_83BF4C5C);
PPC_FUNC_IMPL(__imp__sub_83BF4C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C60"))) PPC_WEAK_FUNC(sub_83BF4C60);
PPC_FUNC_IMPL(__imp__sub_83BF4C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6576
	ctx.r3.s64 = ctx.r11.s64 + -6576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C6C"))) PPC_WEAK_FUNC(sub_83BF4C6C);
PPC_FUNC_IMPL(__imp__sub_83BF4C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C70"))) PPC_WEAK_FUNC(sub_83BF4C70);
PPC_FUNC_IMPL(__imp__sub_83BF4C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C7C"))) PPC_WEAK_FUNC(sub_83BF4C7C);
PPC_FUNC_IMPL(__imp__sub_83BF4C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C80"))) PPC_WEAK_FUNC(sub_83BF4C80);
PPC_FUNC_IMPL(__imp__sub_83BF4C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6560
	ctx.r3.s64 = ctx.r11.s64 + -6560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C8C"))) PPC_WEAK_FUNC(sub_83BF4C8C);
PPC_FUNC_IMPL(__imp__sub_83BF4C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4C90"))) PPC_WEAK_FUNC(sub_83BF4C90);
PPC_FUNC_IMPL(__imp__sub_83BF4C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6552
	ctx.r3.s64 = ctx.r11.s64 + -6552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4C9C"))) PPC_WEAK_FUNC(sub_83BF4C9C);
PPC_FUNC_IMPL(__imp__sub_83BF4C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4CA0"))) PPC_WEAK_FUNC(sub_83BF4CA0);
PPC_FUNC_IMPL(__imp__sub_83BF4CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6544
	ctx.r3.s64 = ctx.r11.s64 + -6544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4CAC"))) PPC_WEAK_FUNC(sub_83BF4CAC);
PPC_FUNC_IMPL(__imp__sub_83BF4CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4CB0"))) PPC_WEAK_FUNC(sub_83BF4CB0);
PPC_FUNC_IMPL(__imp__sub_83BF4CB0) {
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
	// addi r3,r11,-5472
	ctx.r3.s64 = ctx.r11.s64 + -5472;
	// bl 0x83523120
	ctx.lr = 0x83BF4CC8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6536
	ctx.r3.s64 = ctx.r10.s64 + -6536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4CD4;
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

__attribute__((alias("__imp__sub_83BF4CE4"))) PPC_WEAK_FUNC(sub_83BF4CE4);
PPC_FUNC_IMPL(__imp__sub_83BF4CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4CE8"))) PPC_WEAK_FUNC(sub_83BF4CE8);
PPC_FUNC_IMPL(__imp__sub_83BF4CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
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

__attribute__((alias("__imp__sub_83BF4D10"))) PPC_WEAK_FUNC(sub_83BF4D10);
PPC_FUNC_IMPL(__imp__sub_83BF4D10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,3752
	ctx.r6.s64 = ctx.r7.s64 + 3752;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3680(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3680);
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
	// std r9,3752(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4D58"))) PPC_WEAK_FUNC(sub_83BF4D58);
PPC_FUNC_IMPL(__imp__sub_83BF4D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4D64"))) PPC_WEAK_FUNC(sub_83BF4D64);
PPC_FUNC_IMPL(__imp__sub_83BF4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4D68"))) PPC_WEAK_FUNC(sub_83BF4D68);
PPC_FUNC_IMPL(__imp__sub_83BF4D68) {
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
	// addi r3,r11,-5448
	ctx.r3.s64 = ctx.r11.s64 + -5448;
	// bl 0x8259af80
	ctx.lr = 0x83BF4D80;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6504
	ctx.r3.s64 = ctx.r10.s64 + -6504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4D8C;
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

__attribute__((alias("__imp__sub_83BF4D9C"))) PPC_WEAK_FUNC(sub_83BF4D9C);
PPC_FUNC_IMPL(__imp__sub_83BF4D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4DA0"))) PPC_WEAK_FUNC(sub_83BF4DA0);
PPC_FUNC_IMPL(__imp__sub_83BF4DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5468
	ctx.r11.s64 = ctx.r8.s64 + -5468;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,3728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3728);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6512
	ctx.r3.s64 = ctx.r6.s64 + -6512;
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

__attribute__((alias("__imp__sub_83BF4DD0"))) PPC_WEAK_FUNC(sub_83BF4DD0);
PPC_FUNC_IMPL(__imp__sub_83BF4DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4DDC"))) PPC_WEAK_FUNC(sub_83BF4DDC);
PPC_FUNC_IMPL(__imp__sub_83BF4DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4DE0"))) PPC_WEAK_FUNC(sub_83BF4DE0);
PPC_FUNC_IMPL(__imp__sub_83BF4DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6488
	ctx.r3.s64 = ctx.r11.s64 + -6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4DEC"))) PPC_WEAK_FUNC(sub_83BF4DEC);
PPC_FUNC_IMPL(__imp__sub_83BF4DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4DF0"))) PPC_WEAK_FUNC(sub_83BF4DF0);
PPC_FUNC_IMPL(__imp__sub_83BF4DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6480
	ctx.r3.s64 = ctx.r11.s64 + -6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4DFC"))) PPC_WEAK_FUNC(sub_83BF4DFC);
PPC_FUNC_IMPL(__imp__sub_83BF4DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E00"))) PPC_WEAK_FUNC(sub_83BF4E00);
PPC_FUNC_IMPL(__imp__sub_83BF4E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E0C"))) PPC_WEAK_FUNC(sub_83BF4E0C);
PPC_FUNC_IMPL(__imp__sub_83BF4E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E10"))) PPC_WEAK_FUNC(sub_83BF4E10);
PPC_FUNC_IMPL(__imp__sub_83BF4E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6464
	ctx.r3.s64 = ctx.r11.s64 + -6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E1C"))) PPC_WEAK_FUNC(sub_83BF4E1C);
PPC_FUNC_IMPL(__imp__sub_83BF4E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E20"))) PPC_WEAK_FUNC(sub_83BF4E20);
PPC_FUNC_IMPL(__imp__sub_83BF4E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6456
	ctx.r3.s64 = ctx.r11.s64 + -6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E2C"))) PPC_WEAK_FUNC(sub_83BF4E2C);
PPC_FUNC_IMPL(__imp__sub_83BF4E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E30"))) PPC_WEAK_FUNC(sub_83BF4E30);
PPC_FUNC_IMPL(__imp__sub_83BF4E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E3C"))) PPC_WEAK_FUNC(sub_83BF4E3C);
PPC_FUNC_IMPL(__imp__sub_83BF4E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E40"))) PPC_WEAK_FUNC(sub_83BF4E40);
PPC_FUNC_IMPL(__imp__sub_83BF4E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E4C"))) PPC_WEAK_FUNC(sub_83BF4E4C);
PPC_FUNC_IMPL(__imp__sub_83BF4E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E50"))) PPC_WEAK_FUNC(sub_83BF4E50);
PPC_FUNC_IMPL(__imp__sub_83BF4E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6432
	ctx.r3.s64 = ctx.r11.s64 + -6432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E5C"))) PPC_WEAK_FUNC(sub_83BF4E5C);
PPC_FUNC_IMPL(__imp__sub_83BF4E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E60"))) PPC_WEAK_FUNC(sub_83BF4E60);
PPC_FUNC_IMPL(__imp__sub_83BF4E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6424
	ctx.r3.s64 = ctx.r11.s64 + -6424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E6C"))) PPC_WEAK_FUNC(sub_83BF4E6C);
PPC_FUNC_IMPL(__imp__sub_83BF4E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E70"))) PPC_WEAK_FUNC(sub_83BF4E70);
PPC_FUNC_IMPL(__imp__sub_83BF4E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6416
	ctx.r3.s64 = ctx.r11.s64 + -6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E7C"))) PPC_WEAK_FUNC(sub_83BF4E7C);
PPC_FUNC_IMPL(__imp__sub_83BF4E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E80"))) PPC_WEAK_FUNC(sub_83BF4E80);
PPC_FUNC_IMPL(__imp__sub_83BF4E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6408
	ctx.r3.s64 = ctx.r11.s64 + -6408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4E8C"))) PPC_WEAK_FUNC(sub_83BF4E8C);
PPC_FUNC_IMPL(__imp__sub_83BF4E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4E90"))) PPC_WEAK_FUNC(sub_83BF4E90);
PPC_FUNC_IMPL(__imp__sub_83BF4E90) {
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
	// addi r3,r11,-5104
	ctx.r3.s64 = ctx.r11.s64 + -5104;
	// bl 0x83523120
	ctx.lr = 0x83BF4EA8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6400
	ctx.r3.s64 = ctx.r10.s64 + -6400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4EB4;
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

__attribute__((alias("__imp__sub_83BF4EC4"))) PPC_WEAK_FUNC(sub_83BF4EC4);
PPC_FUNC_IMPL(__imp__sub_83BF4EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4EC8"))) PPC_WEAK_FUNC(sub_83BF4EC8);
PPC_FUNC_IMPL(__imp__sub_83BF4EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
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

__attribute__((alias("__imp__sub_83BF4EF0"))) PPC_WEAK_FUNC(sub_83BF4EF0);
PPC_FUNC_IMPL(__imp__sub_83BF4EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,4048
	ctx.r6.s64 = ctx.r7.s64 + 4048;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3976);
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
	// std r9,4048(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF4F38"))) PPC_WEAK_FUNC(sub_83BF4F38);
PPC_FUNC_IMPL(__imp__sub_83BF4F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6384
	ctx.r3.s64 = ctx.r11.s64 + -6384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4F44"))) PPC_WEAK_FUNC(sub_83BF4F44);
PPC_FUNC_IMPL(__imp__sub_83BF4F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4F48"))) PPC_WEAK_FUNC(sub_83BF4F48);
PPC_FUNC_IMPL(__imp__sub_83BF4F48) {
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
	// addi r3,r11,-5080
	ctx.r3.s64 = ctx.r11.s64 + -5080;
	// bl 0x8259af80
	ctx.lr = 0x83BF4F60;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-6368
	ctx.r3.s64 = ctx.r10.s64 + -6368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF4F6C;
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

__attribute__((alias("__imp__sub_83BF4F7C"))) PPC_WEAK_FUNC(sub_83BF4F7C);
PPC_FUNC_IMPL(__imp__sub_83BF4F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4F80"))) PPC_WEAK_FUNC(sub_83BF4F80);
PPC_FUNC_IMPL(__imp__sub_83BF4F80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5100
	ctx.r11.s64 = ctx.r8.s64 + -5100;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,4024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6376
	ctx.r3.s64 = ctx.r6.s64 + -6376;
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

__attribute__((alias("__imp__sub_83BF4FB0"))) PPC_WEAK_FUNC(sub_83BF4FB0);
PPC_FUNC_IMPL(__imp__sub_83BF4FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6360
	ctx.r3.s64 = ctx.r11.s64 + -6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF4FBC"))) PPC_WEAK_FUNC(sub_83BF4FBC);
PPC_FUNC_IMPL(__imp__sub_83BF4FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF4FC0"))) PPC_WEAK_FUNC(sub_83BF4FC0);
PPC_FUNC_IMPL(__imp__sub_83BF4FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-6352
	ctx.r3.s64 = ctx.r11.s64 + -6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

