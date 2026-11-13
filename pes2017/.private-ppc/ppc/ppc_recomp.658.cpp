#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BDD044"))) PPC_WEAK_FUNC(sub_83BDD044);
PPC_FUNC_IMPL(__imp__sub_83BDD044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD048"))) PPC_WEAK_FUNC(sub_83BDD048);
PPC_FUNC_IMPL(__imp__sub_83BDD048) {
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
	// addi r3,r11,-16432
	ctx.r3.s64 = ctx.r11.s64 + -16432;
	// bl 0x8259af80
	ctx.lr = 0x83BDD060;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29096
	ctx.r3.s64 = ctx.r10.s64 + 29096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD06C;
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

__attribute__((alias("__imp__sub_83BDD07C"))) PPC_WEAK_FUNC(sub_83BDD07C);
PPC_FUNC_IMPL(__imp__sub_83BDD07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD080"))) PPC_WEAK_FUNC(sub_83BDD080);
PPC_FUNC_IMPL(__imp__sub_83BDD080) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16452
	ctx.r11.s64 = ctx.r8.s64 + -16452;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24716);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29088
	ctx.r3.s64 = ctx.r6.s64 + 29088;
	// stw r10,-16452(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD0B0"))) PPC_WEAK_FUNC(sub_83BDD0B0);
PPC_FUNC_IMPL(__imp__sub_83BDD0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29104
	ctx.r3.s64 = ctx.r11.s64 + 29104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD0BC"))) PPC_WEAK_FUNC(sub_83BDD0BC);
PPC_FUNC_IMPL(__imp__sub_83BDD0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD0C0"))) PPC_WEAK_FUNC(sub_83BDD0C0);
PPC_FUNC_IMPL(__imp__sub_83BDD0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29112
	ctx.r3.s64 = ctx.r11.s64 + 29112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD0CC"))) PPC_WEAK_FUNC(sub_83BDD0CC);
PPC_FUNC_IMPL(__imp__sub_83BDD0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD0D0"))) PPC_WEAK_FUNC(sub_83BDD0D0);
PPC_FUNC_IMPL(__imp__sub_83BDD0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29120
	ctx.r3.s64 = ctx.r11.s64 + 29120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD0DC"))) PPC_WEAK_FUNC(sub_83BDD0DC);
PPC_FUNC_IMPL(__imp__sub_83BDD0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD0E0"))) PPC_WEAK_FUNC(sub_83BDD0E0);
PPC_FUNC_IMPL(__imp__sub_83BDD0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29128
	ctx.r3.s64 = ctx.r11.s64 + 29128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD0EC"))) PPC_WEAK_FUNC(sub_83BDD0EC);
PPC_FUNC_IMPL(__imp__sub_83BDD0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD0F0"))) PPC_WEAK_FUNC(sub_83BDD0F0);
PPC_FUNC_IMPL(__imp__sub_83BDD0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29136
	ctx.r3.s64 = ctx.r11.s64 + 29136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD0FC"))) PPC_WEAK_FUNC(sub_83BDD0FC);
PPC_FUNC_IMPL(__imp__sub_83BDD0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD100"))) PPC_WEAK_FUNC(sub_83BDD100);
PPC_FUNC_IMPL(__imp__sub_83BDD100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29144
	ctx.r3.s64 = ctx.r11.s64 + 29144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD10C"))) PPC_WEAK_FUNC(sub_83BDD10C);
PPC_FUNC_IMPL(__imp__sub_83BDD10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD110"))) PPC_WEAK_FUNC(sub_83BDD110);
PPC_FUNC_IMPL(__imp__sub_83BDD110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29152
	ctx.r3.s64 = ctx.r11.s64 + 29152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD11C"))) PPC_WEAK_FUNC(sub_83BDD11C);
PPC_FUNC_IMPL(__imp__sub_83BDD11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD120"))) PPC_WEAK_FUNC(sub_83BDD120);
PPC_FUNC_IMPL(__imp__sub_83BDD120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29160
	ctx.r3.s64 = ctx.r11.s64 + 29160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD12C"))) PPC_WEAK_FUNC(sub_83BDD12C);
PPC_FUNC_IMPL(__imp__sub_83BDD12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD130"))) PPC_WEAK_FUNC(sub_83BDD130);
PPC_FUNC_IMPL(__imp__sub_83BDD130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29168
	ctx.r3.s64 = ctx.r11.s64 + 29168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD13C"))) PPC_WEAK_FUNC(sub_83BDD13C);
PPC_FUNC_IMPL(__imp__sub_83BDD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD140"))) PPC_WEAK_FUNC(sub_83BDD140);
PPC_FUNC_IMPL(__imp__sub_83BDD140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29176
	ctx.r3.s64 = ctx.r11.s64 + 29176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD14C"))) PPC_WEAK_FUNC(sub_83BDD14C);
PPC_FUNC_IMPL(__imp__sub_83BDD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD150"))) PPC_WEAK_FUNC(sub_83BDD150);
PPC_FUNC_IMPL(__imp__sub_83BDD150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29184
	ctx.r3.s64 = ctx.r11.s64 + 29184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD15C"))) PPC_WEAK_FUNC(sub_83BDD15C);
PPC_FUNC_IMPL(__imp__sub_83BDD15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD160"))) PPC_WEAK_FUNC(sub_83BDD160);
PPC_FUNC_IMPL(__imp__sub_83BDD160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29192
	ctx.r3.s64 = ctx.r11.s64 + 29192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD16C"))) PPC_WEAK_FUNC(sub_83BDD16C);
PPC_FUNC_IMPL(__imp__sub_83BDD16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD170"))) PPC_WEAK_FUNC(sub_83BDD170);
PPC_FUNC_IMPL(__imp__sub_83BDD170) {
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
	// addi r3,r11,-16088
	ctx.r3.s64 = ctx.r11.s64 + -16088;
	// bl 0x83523120
	ctx.lr = 0x83BDD188;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29200
	ctx.r3.s64 = ctx.r10.s64 + 29200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD194;
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

__attribute__((alias("__imp__sub_83BDD1A4"))) PPC_WEAK_FUNC(sub_83BDD1A4);
PPC_FUNC_IMPL(__imp__sub_83BDD1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD1A8"))) PPC_WEAK_FUNC(sub_83BDD1A8);
PPC_FUNC_IMPL(__imp__sub_83BDD1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16072
	ctx.r7.s64 = ctx.r8.s64 + -16072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16072(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD1D0"))) PPC_WEAK_FUNC(sub_83BDD1D0);
PPC_FUNC_IMPL(__imp__sub_83BDD1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-24556
	ctx.r6.s64 = ctx.r7.s64 + -24556;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24628(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24628);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16072(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16072);
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
	// std r9,-24556(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24556, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD218"))) PPC_WEAK_FUNC(sub_83BDD218);
PPC_FUNC_IMPL(__imp__sub_83BDD218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29216
	ctx.r3.s64 = ctx.r11.s64 + 29216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD224"))) PPC_WEAK_FUNC(sub_83BDD224);
PPC_FUNC_IMPL(__imp__sub_83BDD224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD228"))) PPC_WEAK_FUNC(sub_83BDD228);
PPC_FUNC_IMPL(__imp__sub_83BDD228) {
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
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// bl 0x8259af80
	ctx.lr = 0x83BDD240;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29232
	ctx.r3.s64 = ctx.r10.s64 + 29232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD24C;
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

__attribute__((alias("__imp__sub_83BDD25C"))) PPC_WEAK_FUNC(sub_83BDD25C);
PPC_FUNC_IMPL(__imp__sub_83BDD25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD260"))) PPC_WEAK_FUNC(sub_83BDD260);
PPC_FUNC_IMPL(__imp__sub_83BDD260) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16084
	ctx.r11.s64 = ctx.r8.s64 + -16084;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24580(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24580);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29224
	ctx.r3.s64 = ctx.r6.s64 + 29224;
	// stw r10,-16084(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD290"))) PPC_WEAK_FUNC(sub_83BDD290);
PPC_FUNC_IMPL(__imp__sub_83BDD290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29240
	ctx.r3.s64 = ctx.r11.s64 + 29240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD29C"))) PPC_WEAK_FUNC(sub_83BDD29C);
PPC_FUNC_IMPL(__imp__sub_83BDD29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD2A0"))) PPC_WEAK_FUNC(sub_83BDD2A0);
PPC_FUNC_IMPL(__imp__sub_83BDD2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29248
	ctx.r3.s64 = ctx.r11.s64 + 29248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD2AC"))) PPC_WEAK_FUNC(sub_83BDD2AC);
PPC_FUNC_IMPL(__imp__sub_83BDD2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD2B0"))) PPC_WEAK_FUNC(sub_83BDD2B0);
PPC_FUNC_IMPL(__imp__sub_83BDD2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29256
	ctx.r3.s64 = ctx.r11.s64 + 29256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD2BC"))) PPC_WEAK_FUNC(sub_83BDD2BC);
PPC_FUNC_IMPL(__imp__sub_83BDD2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD2C0"))) PPC_WEAK_FUNC(sub_83BDD2C0);
PPC_FUNC_IMPL(__imp__sub_83BDD2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29264
	ctx.r3.s64 = ctx.r11.s64 + 29264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD2CC"))) PPC_WEAK_FUNC(sub_83BDD2CC);
PPC_FUNC_IMPL(__imp__sub_83BDD2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD2D0"))) PPC_WEAK_FUNC(sub_83BDD2D0);
PPC_FUNC_IMPL(__imp__sub_83BDD2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29272
	ctx.r3.s64 = ctx.r11.s64 + 29272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD2DC"))) PPC_WEAK_FUNC(sub_83BDD2DC);
PPC_FUNC_IMPL(__imp__sub_83BDD2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD2E0"))) PPC_WEAK_FUNC(sub_83BDD2E0);
PPC_FUNC_IMPL(__imp__sub_83BDD2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29280
	ctx.r3.s64 = ctx.r11.s64 + 29280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD2EC"))) PPC_WEAK_FUNC(sub_83BDD2EC);
PPC_FUNC_IMPL(__imp__sub_83BDD2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD2F0"))) PPC_WEAK_FUNC(sub_83BDD2F0);
PPC_FUNC_IMPL(__imp__sub_83BDD2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29288
	ctx.r3.s64 = ctx.r11.s64 + 29288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD2FC"))) PPC_WEAK_FUNC(sub_83BDD2FC);
PPC_FUNC_IMPL(__imp__sub_83BDD2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD300"))) PPC_WEAK_FUNC(sub_83BDD300);
PPC_FUNC_IMPL(__imp__sub_83BDD300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29296
	ctx.r3.s64 = ctx.r11.s64 + 29296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD30C"))) PPC_WEAK_FUNC(sub_83BDD30C);
PPC_FUNC_IMPL(__imp__sub_83BDD30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD310"))) PPC_WEAK_FUNC(sub_83BDD310);
PPC_FUNC_IMPL(__imp__sub_83BDD310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29304
	ctx.r3.s64 = ctx.r11.s64 + 29304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD31C"))) PPC_WEAK_FUNC(sub_83BDD31C);
PPC_FUNC_IMPL(__imp__sub_83BDD31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD320"))) PPC_WEAK_FUNC(sub_83BDD320);
PPC_FUNC_IMPL(__imp__sub_83BDD320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29312
	ctx.r3.s64 = ctx.r11.s64 + 29312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD32C"))) PPC_WEAK_FUNC(sub_83BDD32C);
PPC_FUNC_IMPL(__imp__sub_83BDD32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD330"))) PPC_WEAK_FUNC(sub_83BDD330);
PPC_FUNC_IMPL(__imp__sub_83BDD330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29320
	ctx.r3.s64 = ctx.r11.s64 + 29320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD33C"))) PPC_WEAK_FUNC(sub_83BDD33C);
PPC_FUNC_IMPL(__imp__sub_83BDD33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD340"))) PPC_WEAK_FUNC(sub_83BDD340);
PPC_FUNC_IMPL(__imp__sub_83BDD340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29328
	ctx.r3.s64 = ctx.r11.s64 + 29328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD34C"))) PPC_WEAK_FUNC(sub_83BDD34C);
PPC_FUNC_IMPL(__imp__sub_83BDD34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD350"))) PPC_WEAK_FUNC(sub_83BDD350);
PPC_FUNC_IMPL(__imp__sub_83BDD350) {
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
	// addi r3,r11,-15720
	ctx.r3.s64 = ctx.r11.s64 + -15720;
	// bl 0x83523120
	ctx.lr = 0x83BDD368;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29336
	ctx.r3.s64 = ctx.r10.s64 + 29336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD374;
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

__attribute__((alias("__imp__sub_83BDD384"))) PPC_WEAK_FUNC(sub_83BDD384);
PPC_FUNC_IMPL(__imp__sub_83BDD384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD388"))) PPC_WEAK_FUNC(sub_83BDD388);
PPC_FUNC_IMPL(__imp__sub_83BDD388) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15704
	ctx.r7.s64 = ctx.r8.s64 + -15704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD3B0"))) PPC_WEAK_FUNC(sub_83BDD3B0);
PPC_FUNC_IMPL(__imp__sub_83BDD3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-24368
	ctx.r6.s64 = ctx.r7.s64 + -24368;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24440(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24440);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15704);
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
	// std r9,-24368(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24368, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD3F8"))) PPC_WEAK_FUNC(sub_83BDD3F8);
PPC_FUNC_IMPL(__imp__sub_83BDD3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29352
	ctx.r3.s64 = ctx.r11.s64 + 29352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD404"))) PPC_WEAK_FUNC(sub_83BDD404);
PPC_FUNC_IMPL(__imp__sub_83BDD404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD408"))) PPC_WEAK_FUNC(sub_83BDD408);
PPC_FUNC_IMPL(__imp__sub_83BDD408) {
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
	// addi r3,r11,-15696
	ctx.r3.s64 = ctx.r11.s64 + -15696;
	// bl 0x8259af80
	ctx.lr = 0x83BDD420;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29368
	ctx.r3.s64 = ctx.r10.s64 + 29368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD42C;
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

__attribute__((alias("__imp__sub_83BDD43C"))) PPC_WEAK_FUNC(sub_83BDD43C);
PPC_FUNC_IMPL(__imp__sub_83BDD43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD440"))) PPC_WEAK_FUNC(sub_83BDD440);
PPC_FUNC_IMPL(__imp__sub_83BDD440) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15716
	ctx.r11.s64 = ctx.r8.s64 + -15716;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24392(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24392);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29360
	ctx.r3.s64 = ctx.r6.s64 + 29360;
	// stw r10,-15716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD470"))) PPC_WEAK_FUNC(sub_83BDD470);
PPC_FUNC_IMPL(__imp__sub_83BDD470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29376
	ctx.r3.s64 = ctx.r11.s64 + 29376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD47C"))) PPC_WEAK_FUNC(sub_83BDD47C);
PPC_FUNC_IMPL(__imp__sub_83BDD47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD480"))) PPC_WEAK_FUNC(sub_83BDD480);
PPC_FUNC_IMPL(__imp__sub_83BDD480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29384
	ctx.r3.s64 = ctx.r11.s64 + 29384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD48C"))) PPC_WEAK_FUNC(sub_83BDD48C);
PPC_FUNC_IMPL(__imp__sub_83BDD48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD490"))) PPC_WEAK_FUNC(sub_83BDD490);
PPC_FUNC_IMPL(__imp__sub_83BDD490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29392
	ctx.r3.s64 = ctx.r11.s64 + 29392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD49C"))) PPC_WEAK_FUNC(sub_83BDD49C);
PPC_FUNC_IMPL(__imp__sub_83BDD49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD4A0"))) PPC_WEAK_FUNC(sub_83BDD4A0);
PPC_FUNC_IMPL(__imp__sub_83BDD4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29400
	ctx.r3.s64 = ctx.r11.s64 + 29400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD4AC"))) PPC_WEAK_FUNC(sub_83BDD4AC);
PPC_FUNC_IMPL(__imp__sub_83BDD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD4B0"))) PPC_WEAK_FUNC(sub_83BDD4B0);
PPC_FUNC_IMPL(__imp__sub_83BDD4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29408
	ctx.r3.s64 = ctx.r11.s64 + 29408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD4BC"))) PPC_WEAK_FUNC(sub_83BDD4BC);
PPC_FUNC_IMPL(__imp__sub_83BDD4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD4C0"))) PPC_WEAK_FUNC(sub_83BDD4C0);
PPC_FUNC_IMPL(__imp__sub_83BDD4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29416
	ctx.r3.s64 = ctx.r11.s64 + 29416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD4CC"))) PPC_WEAK_FUNC(sub_83BDD4CC);
PPC_FUNC_IMPL(__imp__sub_83BDD4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD4D0"))) PPC_WEAK_FUNC(sub_83BDD4D0);
PPC_FUNC_IMPL(__imp__sub_83BDD4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29424
	ctx.r3.s64 = ctx.r11.s64 + 29424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD4DC"))) PPC_WEAK_FUNC(sub_83BDD4DC);
PPC_FUNC_IMPL(__imp__sub_83BDD4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD4E0"))) PPC_WEAK_FUNC(sub_83BDD4E0);
PPC_FUNC_IMPL(__imp__sub_83BDD4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29432
	ctx.r3.s64 = ctx.r11.s64 + 29432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD4EC"))) PPC_WEAK_FUNC(sub_83BDD4EC);
PPC_FUNC_IMPL(__imp__sub_83BDD4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD4F0"))) PPC_WEAK_FUNC(sub_83BDD4F0);
PPC_FUNC_IMPL(__imp__sub_83BDD4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29440
	ctx.r3.s64 = ctx.r11.s64 + 29440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD4FC"))) PPC_WEAK_FUNC(sub_83BDD4FC);
PPC_FUNC_IMPL(__imp__sub_83BDD4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD500"))) PPC_WEAK_FUNC(sub_83BDD500);
PPC_FUNC_IMPL(__imp__sub_83BDD500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29448
	ctx.r3.s64 = ctx.r11.s64 + 29448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD50C"))) PPC_WEAK_FUNC(sub_83BDD50C);
PPC_FUNC_IMPL(__imp__sub_83BDD50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD510"))) PPC_WEAK_FUNC(sub_83BDD510);
PPC_FUNC_IMPL(__imp__sub_83BDD510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29456
	ctx.r3.s64 = ctx.r11.s64 + 29456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD51C"))) PPC_WEAK_FUNC(sub_83BDD51C);
PPC_FUNC_IMPL(__imp__sub_83BDD51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD520"))) PPC_WEAK_FUNC(sub_83BDD520);
PPC_FUNC_IMPL(__imp__sub_83BDD520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29464
	ctx.r3.s64 = ctx.r11.s64 + 29464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD52C"))) PPC_WEAK_FUNC(sub_83BDD52C);
PPC_FUNC_IMPL(__imp__sub_83BDD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD530"))) PPC_WEAK_FUNC(sub_83BDD530);
PPC_FUNC_IMPL(__imp__sub_83BDD530) {
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
	// addi r3,r11,-15352
	ctx.r3.s64 = ctx.r11.s64 + -15352;
	// bl 0x83523120
	ctx.lr = 0x83BDD548;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29472
	ctx.r3.s64 = ctx.r10.s64 + 29472;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD554;
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

__attribute__((alias("__imp__sub_83BDD564"))) PPC_WEAK_FUNC(sub_83BDD564);
PPC_FUNC_IMPL(__imp__sub_83BDD564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD568"))) PPC_WEAK_FUNC(sub_83BDD568);
PPC_FUNC_IMPL(__imp__sub_83BDD568) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15336
	ctx.r7.s64 = ctx.r8.s64 + -15336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD590"))) PPC_WEAK_FUNC(sub_83BDD590);
PPC_FUNC_IMPL(__imp__sub_83BDD590) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-24232
	ctx.r6.s64 = ctx.r7.s64 + -24232;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15336);
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
	// std r9,-24232(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24232, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD5D8"))) PPC_WEAK_FUNC(sub_83BDD5D8);
PPC_FUNC_IMPL(__imp__sub_83BDD5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29488
	ctx.r3.s64 = ctx.r11.s64 + 29488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD5E4"))) PPC_WEAK_FUNC(sub_83BDD5E4);
PPC_FUNC_IMPL(__imp__sub_83BDD5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD5E8"))) PPC_WEAK_FUNC(sub_83BDD5E8);
PPC_FUNC_IMPL(__imp__sub_83BDD5E8) {
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
	// addi r3,r11,-15328
	ctx.r3.s64 = ctx.r11.s64 + -15328;
	// bl 0x8259af80
	ctx.lr = 0x83BDD600;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29504
	ctx.r3.s64 = ctx.r10.s64 + 29504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD60C;
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

__attribute__((alias("__imp__sub_83BDD61C"))) PPC_WEAK_FUNC(sub_83BDD61C);
PPC_FUNC_IMPL(__imp__sub_83BDD61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD620"))) PPC_WEAK_FUNC(sub_83BDD620);
PPC_FUNC_IMPL(__imp__sub_83BDD620) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15348
	ctx.r11.s64 = ctx.r8.s64 + -15348;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24256);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29496
	ctx.r3.s64 = ctx.r6.s64 + 29496;
	// stw r10,-15348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD650"))) PPC_WEAK_FUNC(sub_83BDD650);
PPC_FUNC_IMPL(__imp__sub_83BDD650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29512
	ctx.r3.s64 = ctx.r11.s64 + 29512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD65C"))) PPC_WEAK_FUNC(sub_83BDD65C);
PPC_FUNC_IMPL(__imp__sub_83BDD65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD660"))) PPC_WEAK_FUNC(sub_83BDD660);
PPC_FUNC_IMPL(__imp__sub_83BDD660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29520
	ctx.r3.s64 = ctx.r11.s64 + 29520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD66C"))) PPC_WEAK_FUNC(sub_83BDD66C);
PPC_FUNC_IMPL(__imp__sub_83BDD66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD670"))) PPC_WEAK_FUNC(sub_83BDD670);
PPC_FUNC_IMPL(__imp__sub_83BDD670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29528
	ctx.r3.s64 = ctx.r11.s64 + 29528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD67C"))) PPC_WEAK_FUNC(sub_83BDD67C);
PPC_FUNC_IMPL(__imp__sub_83BDD67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD680"))) PPC_WEAK_FUNC(sub_83BDD680);
PPC_FUNC_IMPL(__imp__sub_83BDD680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29536
	ctx.r3.s64 = ctx.r11.s64 + 29536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD68C"))) PPC_WEAK_FUNC(sub_83BDD68C);
PPC_FUNC_IMPL(__imp__sub_83BDD68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD690"))) PPC_WEAK_FUNC(sub_83BDD690);
PPC_FUNC_IMPL(__imp__sub_83BDD690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29544
	ctx.r3.s64 = ctx.r11.s64 + 29544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD69C"))) PPC_WEAK_FUNC(sub_83BDD69C);
PPC_FUNC_IMPL(__imp__sub_83BDD69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD6A0"))) PPC_WEAK_FUNC(sub_83BDD6A0);
PPC_FUNC_IMPL(__imp__sub_83BDD6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29552
	ctx.r3.s64 = ctx.r11.s64 + 29552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD6AC"))) PPC_WEAK_FUNC(sub_83BDD6AC);
PPC_FUNC_IMPL(__imp__sub_83BDD6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD6B0"))) PPC_WEAK_FUNC(sub_83BDD6B0);
PPC_FUNC_IMPL(__imp__sub_83BDD6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29560
	ctx.r3.s64 = ctx.r11.s64 + 29560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD6BC"))) PPC_WEAK_FUNC(sub_83BDD6BC);
PPC_FUNC_IMPL(__imp__sub_83BDD6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD6C0"))) PPC_WEAK_FUNC(sub_83BDD6C0);
PPC_FUNC_IMPL(__imp__sub_83BDD6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29568
	ctx.r3.s64 = ctx.r11.s64 + 29568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD6CC"))) PPC_WEAK_FUNC(sub_83BDD6CC);
PPC_FUNC_IMPL(__imp__sub_83BDD6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD6D0"))) PPC_WEAK_FUNC(sub_83BDD6D0);
PPC_FUNC_IMPL(__imp__sub_83BDD6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29576
	ctx.r3.s64 = ctx.r11.s64 + 29576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD6DC"))) PPC_WEAK_FUNC(sub_83BDD6DC);
PPC_FUNC_IMPL(__imp__sub_83BDD6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD6E0"))) PPC_WEAK_FUNC(sub_83BDD6E0);
PPC_FUNC_IMPL(__imp__sub_83BDD6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29584
	ctx.r3.s64 = ctx.r11.s64 + 29584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD6EC"))) PPC_WEAK_FUNC(sub_83BDD6EC);
PPC_FUNC_IMPL(__imp__sub_83BDD6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD6F0"))) PPC_WEAK_FUNC(sub_83BDD6F0);
PPC_FUNC_IMPL(__imp__sub_83BDD6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29592
	ctx.r3.s64 = ctx.r11.s64 + 29592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD6FC"))) PPC_WEAK_FUNC(sub_83BDD6FC);
PPC_FUNC_IMPL(__imp__sub_83BDD6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD700"))) PPC_WEAK_FUNC(sub_83BDD700);
PPC_FUNC_IMPL(__imp__sub_83BDD700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29600
	ctx.r3.s64 = ctx.r11.s64 + 29600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD70C"))) PPC_WEAK_FUNC(sub_83BDD70C);
PPC_FUNC_IMPL(__imp__sub_83BDD70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD710"))) PPC_WEAK_FUNC(sub_83BDD710);
PPC_FUNC_IMPL(__imp__sub_83BDD710) {
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
	// addi r3,r11,-14984
	ctx.r3.s64 = ctx.r11.s64 + -14984;
	// bl 0x83523120
	ctx.lr = 0x83BDD728;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29608
	ctx.r3.s64 = ctx.r10.s64 + 29608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD734;
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

__attribute__((alias("__imp__sub_83BDD744"))) PPC_WEAK_FUNC(sub_83BDD744);
PPC_FUNC_IMPL(__imp__sub_83BDD744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD748"))) PPC_WEAK_FUNC(sub_83BDD748);
PPC_FUNC_IMPL(__imp__sub_83BDD748) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14968
	ctx.r7.s64 = ctx.r8.s64 + -14968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14968(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD770"))) PPC_WEAK_FUNC(sub_83BDD770);
PPC_FUNC_IMPL(__imp__sub_83BDD770) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-24080
	ctx.r6.s64 = ctx.r7.s64 + -24080;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14968);
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
	// std r9,-24080(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD7B8"))) PPC_WEAK_FUNC(sub_83BDD7B8);
PPC_FUNC_IMPL(__imp__sub_83BDD7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29624
	ctx.r3.s64 = ctx.r11.s64 + 29624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD7C4"))) PPC_WEAK_FUNC(sub_83BDD7C4);
PPC_FUNC_IMPL(__imp__sub_83BDD7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD7C8"))) PPC_WEAK_FUNC(sub_83BDD7C8);
PPC_FUNC_IMPL(__imp__sub_83BDD7C8) {
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
	// addi r3,r11,-14960
	ctx.r3.s64 = ctx.r11.s64 + -14960;
	// bl 0x8259af80
	ctx.lr = 0x83BDD7E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29640
	ctx.r3.s64 = ctx.r10.s64 + 29640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD7EC;
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

__attribute__((alias("__imp__sub_83BDD7FC"))) PPC_WEAK_FUNC(sub_83BDD7FC);
PPC_FUNC_IMPL(__imp__sub_83BDD7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD800"))) PPC_WEAK_FUNC(sub_83BDD800);
PPC_FUNC_IMPL(__imp__sub_83BDD800) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14980
	ctx.r11.s64 = ctx.r8.s64 + -14980;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29632
	ctx.r3.s64 = ctx.r6.s64 + 29632;
	// stw r10,-14980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD830"))) PPC_WEAK_FUNC(sub_83BDD830);
PPC_FUNC_IMPL(__imp__sub_83BDD830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29648
	ctx.r3.s64 = ctx.r11.s64 + 29648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD83C"))) PPC_WEAK_FUNC(sub_83BDD83C);
PPC_FUNC_IMPL(__imp__sub_83BDD83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD840"))) PPC_WEAK_FUNC(sub_83BDD840);
PPC_FUNC_IMPL(__imp__sub_83BDD840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29656
	ctx.r3.s64 = ctx.r11.s64 + 29656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD84C"))) PPC_WEAK_FUNC(sub_83BDD84C);
PPC_FUNC_IMPL(__imp__sub_83BDD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD850"))) PPC_WEAK_FUNC(sub_83BDD850);
PPC_FUNC_IMPL(__imp__sub_83BDD850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29664
	ctx.r3.s64 = ctx.r11.s64 + 29664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD85C"))) PPC_WEAK_FUNC(sub_83BDD85C);
PPC_FUNC_IMPL(__imp__sub_83BDD85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD860"))) PPC_WEAK_FUNC(sub_83BDD860);
PPC_FUNC_IMPL(__imp__sub_83BDD860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29672
	ctx.r3.s64 = ctx.r11.s64 + 29672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD86C"))) PPC_WEAK_FUNC(sub_83BDD86C);
PPC_FUNC_IMPL(__imp__sub_83BDD86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD870"))) PPC_WEAK_FUNC(sub_83BDD870);
PPC_FUNC_IMPL(__imp__sub_83BDD870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29680
	ctx.r3.s64 = ctx.r11.s64 + 29680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD87C"))) PPC_WEAK_FUNC(sub_83BDD87C);
PPC_FUNC_IMPL(__imp__sub_83BDD87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD880"))) PPC_WEAK_FUNC(sub_83BDD880);
PPC_FUNC_IMPL(__imp__sub_83BDD880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29688
	ctx.r3.s64 = ctx.r11.s64 + 29688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD88C"))) PPC_WEAK_FUNC(sub_83BDD88C);
PPC_FUNC_IMPL(__imp__sub_83BDD88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD890"))) PPC_WEAK_FUNC(sub_83BDD890);
PPC_FUNC_IMPL(__imp__sub_83BDD890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29696
	ctx.r3.s64 = ctx.r11.s64 + 29696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD89C"))) PPC_WEAK_FUNC(sub_83BDD89C);
PPC_FUNC_IMPL(__imp__sub_83BDD89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD8A0"))) PPC_WEAK_FUNC(sub_83BDD8A0);
PPC_FUNC_IMPL(__imp__sub_83BDD8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29704
	ctx.r3.s64 = ctx.r11.s64 + 29704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD8AC"))) PPC_WEAK_FUNC(sub_83BDD8AC);
PPC_FUNC_IMPL(__imp__sub_83BDD8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD8B0"))) PPC_WEAK_FUNC(sub_83BDD8B0);
PPC_FUNC_IMPL(__imp__sub_83BDD8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29712
	ctx.r3.s64 = ctx.r11.s64 + 29712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD8BC"))) PPC_WEAK_FUNC(sub_83BDD8BC);
PPC_FUNC_IMPL(__imp__sub_83BDD8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD8C0"))) PPC_WEAK_FUNC(sub_83BDD8C0);
PPC_FUNC_IMPL(__imp__sub_83BDD8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29720
	ctx.r3.s64 = ctx.r11.s64 + 29720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD8CC"))) PPC_WEAK_FUNC(sub_83BDD8CC);
PPC_FUNC_IMPL(__imp__sub_83BDD8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD8D0"))) PPC_WEAK_FUNC(sub_83BDD8D0);
PPC_FUNC_IMPL(__imp__sub_83BDD8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29728
	ctx.r3.s64 = ctx.r11.s64 + 29728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD8DC"))) PPC_WEAK_FUNC(sub_83BDD8DC);
PPC_FUNC_IMPL(__imp__sub_83BDD8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD8E0"))) PPC_WEAK_FUNC(sub_83BDD8E0);
PPC_FUNC_IMPL(__imp__sub_83BDD8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29736
	ctx.r3.s64 = ctx.r11.s64 + 29736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD8EC"))) PPC_WEAK_FUNC(sub_83BDD8EC);
PPC_FUNC_IMPL(__imp__sub_83BDD8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD8F0"))) PPC_WEAK_FUNC(sub_83BDD8F0);
PPC_FUNC_IMPL(__imp__sub_83BDD8F0) {
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
	// addi r3,r11,-14616
	ctx.r3.s64 = ctx.r11.s64 + -14616;
	// bl 0x83523120
	ctx.lr = 0x83BDD908;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29744
	ctx.r3.s64 = ctx.r10.s64 + 29744;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD914;
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

__attribute__((alias("__imp__sub_83BDD924"))) PPC_WEAK_FUNC(sub_83BDD924);
PPC_FUNC_IMPL(__imp__sub_83BDD924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD928"))) PPC_WEAK_FUNC(sub_83BDD928);
PPC_FUNC_IMPL(__imp__sub_83BDD928) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14600
	ctx.r7.s64 = ctx.r8.s64 + -14600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD950"))) PPC_WEAK_FUNC(sub_83BDD950);
PPC_FUNC_IMPL(__imp__sub_83BDD950) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-23832
	ctx.r6.s64 = ctx.r7.s64 + -23832;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23904(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23904);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14600);
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
	// std r9,-23832(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23832, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDD998"))) PPC_WEAK_FUNC(sub_83BDD998);
PPC_FUNC_IMPL(__imp__sub_83BDD998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29760
	ctx.r3.s64 = ctx.r11.s64 + 29760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDD9A4"))) PPC_WEAK_FUNC(sub_83BDD9A4);
PPC_FUNC_IMPL(__imp__sub_83BDD9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD9A8"))) PPC_WEAK_FUNC(sub_83BDD9A8);
PPC_FUNC_IMPL(__imp__sub_83BDD9A8) {
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
	// addi r3,r11,-14592
	ctx.r3.s64 = ctx.r11.s64 + -14592;
	// bl 0x8259af80
	ctx.lr = 0x83BDD9C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29776
	ctx.r3.s64 = ctx.r10.s64 + 29776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDD9CC;
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

__attribute__((alias("__imp__sub_83BDD9DC"))) PPC_WEAK_FUNC(sub_83BDD9DC);
PPC_FUNC_IMPL(__imp__sub_83BDD9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDD9E0"))) PPC_WEAK_FUNC(sub_83BDD9E0);
PPC_FUNC_IMPL(__imp__sub_83BDD9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14612
	ctx.r11.s64 = ctx.r8.s64 + -14612;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23856(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23856);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29768
	ctx.r3.s64 = ctx.r6.s64 + 29768;
	// stw r10,-14612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA10"))) PPC_WEAK_FUNC(sub_83BDDA10);
PPC_FUNC_IMPL(__imp__sub_83BDDA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29784
	ctx.r3.s64 = ctx.r11.s64 + 29784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA1C"))) PPC_WEAK_FUNC(sub_83BDDA1C);
PPC_FUNC_IMPL(__imp__sub_83BDDA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDA20"))) PPC_WEAK_FUNC(sub_83BDDA20);
PPC_FUNC_IMPL(__imp__sub_83BDDA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29792
	ctx.r3.s64 = ctx.r11.s64 + 29792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA2C"))) PPC_WEAK_FUNC(sub_83BDDA2C);
PPC_FUNC_IMPL(__imp__sub_83BDDA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDA30"))) PPC_WEAK_FUNC(sub_83BDDA30);
PPC_FUNC_IMPL(__imp__sub_83BDDA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29800
	ctx.r3.s64 = ctx.r11.s64 + 29800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA3C"))) PPC_WEAK_FUNC(sub_83BDDA3C);
PPC_FUNC_IMPL(__imp__sub_83BDDA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDA40"))) PPC_WEAK_FUNC(sub_83BDDA40);
PPC_FUNC_IMPL(__imp__sub_83BDDA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA4C"))) PPC_WEAK_FUNC(sub_83BDDA4C);
PPC_FUNC_IMPL(__imp__sub_83BDDA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDA50"))) PPC_WEAK_FUNC(sub_83BDDA50);
PPC_FUNC_IMPL(__imp__sub_83BDDA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29816
	ctx.r3.s64 = ctx.r11.s64 + 29816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA5C"))) PPC_WEAK_FUNC(sub_83BDDA5C);
PPC_FUNC_IMPL(__imp__sub_83BDDA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDA60"))) PPC_WEAK_FUNC(sub_83BDDA60);
PPC_FUNC_IMPL(__imp__sub_83BDDA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29824
	ctx.r3.s64 = ctx.r11.s64 + 29824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA6C"))) PPC_WEAK_FUNC(sub_83BDDA6C);
PPC_FUNC_IMPL(__imp__sub_83BDDA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDA70"))) PPC_WEAK_FUNC(sub_83BDDA70);
PPC_FUNC_IMPL(__imp__sub_83BDDA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29832
	ctx.r3.s64 = ctx.r11.s64 + 29832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA7C"))) PPC_WEAK_FUNC(sub_83BDDA7C);
PPC_FUNC_IMPL(__imp__sub_83BDDA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDA80"))) PPC_WEAK_FUNC(sub_83BDDA80);
PPC_FUNC_IMPL(__imp__sub_83BDDA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29840
	ctx.r3.s64 = ctx.r11.s64 + 29840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA8C"))) PPC_WEAK_FUNC(sub_83BDDA8C);
PPC_FUNC_IMPL(__imp__sub_83BDDA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDA90"))) PPC_WEAK_FUNC(sub_83BDDA90);
PPC_FUNC_IMPL(__imp__sub_83BDDA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29848
	ctx.r3.s64 = ctx.r11.s64 + 29848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDA9C"))) PPC_WEAK_FUNC(sub_83BDDA9C);
PPC_FUNC_IMPL(__imp__sub_83BDDA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDAA0"))) PPC_WEAK_FUNC(sub_83BDDAA0);
PPC_FUNC_IMPL(__imp__sub_83BDDAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29856
	ctx.r3.s64 = ctx.r11.s64 + 29856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDAAC"))) PPC_WEAK_FUNC(sub_83BDDAAC);
PPC_FUNC_IMPL(__imp__sub_83BDDAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDAB0"))) PPC_WEAK_FUNC(sub_83BDDAB0);
PPC_FUNC_IMPL(__imp__sub_83BDDAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29864
	ctx.r3.s64 = ctx.r11.s64 + 29864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDABC"))) PPC_WEAK_FUNC(sub_83BDDABC);
PPC_FUNC_IMPL(__imp__sub_83BDDABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDAC0"))) PPC_WEAK_FUNC(sub_83BDDAC0);
PPC_FUNC_IMPL(__imp__sub_83BDDAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29872
	ctx.r3.s64 = ctx.r11.s64 + 29872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDACC"))) PPC_WEAK_FUNC(sub_83BDDACC);
PPC_FUNC_IMPL(__imp__sub_83BDDACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDAD0"))) PPC_WEAK_FUNC(sub_83BDDAD0);
PPC_FUNC_IMPL(__imp__sub_83BDDAD0) {
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
	// addi r3,r11,-14248
	ctx.r3.s64 = ctx.r11.s64 + -14248;
	// bl 0x83523120
	ctx.lr = 0x83BDDAE8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29880
	ctx.r3.s64 = ctx.r10.s64 + 29880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDDAF4;
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

__attribute__((alias("__imp__sub_83BDDB04"))) PPC_WEAK_FUNC(sub_83BDDB04);
PPC_FUNC_IMPL(__imp__sub_83BDDB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDB08"))) PPC_WEAK_FUNC(sub_83BDDB08);
PPC_FUNC_IMPL(__imp__sub_83BDDB08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14232
	ctx.r7.s64 = ctx.r8.s64 + -14232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDDB30"))) PPC_WEAK_FUNC(sub_83BDDB30);
PPC_FUNC_IMPL(__imp__sub_83BDDB30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-23696
	ctx.r6.s64 = ctx.r7.s64 + -23696;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14232);
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
	// std r9,-23696(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23696, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDDB78"))) PPC_WEAK_FUNC(sub_83BDDB78);
PPC_FUNC_IMPL(__imp__sub_83BDDB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29896
	ctx.r3.s64 = ctx.r11.s64 + 29896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDB84"))) PPC_WEAK_FUNC(sub_83BDDB84);
PPC_FUNC_IMPL(__imp__sub_83BDDB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDB88"))) PPC_WEAK_FUNC(sub_83BDDB88);
PPC_FUNC_IMPL(__imp__sub_83BDDB88) {
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
	// addi r3,r11,-14224
	ctx.r3.s64 = ctx.r11.s64 + -14224;
	// bl 0x8259af80
	ctx.lr = 0x83BDDBA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,29912
	ctx.r3.s64 = ctx.r10.s64 + 29912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDDBAC;
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

__attribute__((alias("__imp__sub_83BDDBBC"))) PPC_WEAK_FUNC(sub_83BDDBBC);
PPC_FUNC_IMPL(__imp__sub_83BDDBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDBC0"))) PPC_WEAK_FUNC(sub_83BDDBC0);
PPC_FUNC_IMPL(__imp__sub_83BDDBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14244
	ctx.r11.s64 = ctx.r8.s64 + -14244;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23728);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29904
	ctx.r3.s64 = ctx.r6.s64 + 29904;
	// stw r10,-14244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDBF0"))) PPC_WEAK_FUNC(sub_83BDDBF0);
PPC_FUNC_IMPL(__imp__sub_83BDDBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29920
	ctx.r3.s64 = ctx.r11.s64 + 29920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDBFC"))) PPC_WEAK_FUNC(sub_83BDDBFC);
PPC_FUNC_IMPL(__imp__sub_83BDDBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC00"))) PPC_WEAK_FUNC(sub_83BDDC00);
PPC_FUNC_IMPL(__imp__sub_83BDDC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29928
	ctx.r3.s64 = ctx.r11.s64 + 29928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC0C"))) PPC_WEAK_FUNC(sub_83BDDC0C);
PPC_FUNC_IMPL(__imp__sub_83BDDC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC10"))) PPC_WEAK_FUNC(sub_83BDDC10);
PPC_FUNC_IMPL(__imp__sub_83BDDC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29936
	ctx.r3.s64 = ctx.r11.s64 + 29936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC1C"))) PPC_WEAK_FUNC(sub_83BDDC1C);
PPC_FUNC_IMPL(__imp__sub_83BDDC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC20"))) PPC_WEAK_FUNC(sub_83BDDC20);
PPC_FUNC_IMPL(__imp__sub_83BDDC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29944
	ctx.r3.s64 = ctx.r11.s64 + 29944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC2C"))) PPC_WEAK_FUNC(sub_83BDDC2C);
PPC_FUNC_IMPL(__imp__sub_83BDDC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC30"))) PPC_WEAK_FUNC(sub_83BDDC30);
PPC_FUNC_IMPL(__imp__sub_83BDDC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29952
	ctx.r3.s64 = ctx.r11.s64 + 29952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC3C"))) PPC_WEAK_FUNC(sub_83BDDC3C);
PPC_FUNC_IMPL(__imp__sub_83BDDC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC40"))) PPC_WEAK_FUNC(sub_83BDDC40);
PPC_FUNC_IMPL(__imp__sub_83BDDC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29960
	ctx.r3.s64 = ctx.r11.s64 + 29960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC4C"))) PPC_WEAK_FUNC(sub_83BDDC4C);
PPC_FUNC_IMPL(__imp__sub_83BDDC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC50"))) PPC_WEAK_FUNC(sub_83BDDC50);
PPC_FUNC_IMPL(__imp__sub_83BDDC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29968
	ctx.r3.s64 = ctx.r11.s64 + 29968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC5C"))) PPC_WEAK_FUNC(sub_83BDDC5C);
PPC_FUNC_IMPL(__imp__sub_83BDDC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC60"))) PPC_WEAK_FUNC(sub_83BDDC60);
PPC_FUNC_IMPL(__imp__sub_83BDDC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29976
	ctx.r3.s64 = ctx.r11.s64 + 29976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC6C"))) PPC_WEAK_FUNC(sub_83BDDC6C);
PPC_FUNC_IMPL(__imp__sub_83BDDC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC70"))) PPC_WEAK_FUNC(sub_83BDDC70);
PPC_FUNC_IMPL(__imp__sub_83BDDC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29984
	ctx.r3.s64 = ctx.r11.s64 + 29984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC7C"))) PPC_WEAK_FUNC(sub_83BDDC7C);
PPC_FUNC_IMPL(__imp__sub_83BDDC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC80"))) PPC_WEAK_FUNC(sub_83BDDC80);
PPC_FUNC_IMPL(__imp__sub_83BDDC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,29992
	ctx.r3.s64 = ctx.r11.s64 + 29992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC8C"))) PPC_WEAK_FUNC(sub_83BDDC8C);
PPC_FUNC_IMPL(__imp__sub_83BDDC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDC90"))) PPC_WEAK_FUNC(sub_83BDDC90);
PPC_FUNC_IMPL(__imp__sub_83BDDC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30000
	ctx.r3.s64 = ctx.r11.s64 + 30000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDC9C"))) PPC_WEAK_FUNC(sub_83BDDC9C);
PPC_FUNC_IMPL(__imp__sub_83BDDC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDCA0"))) PPC_WEAK_FUNC(sub_83BDDCA0);
PPC_FUNC_IMPL(__imp__sub_83BDDCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30008
	ctx.r3.s64 = ctx.r11.s64 + 30008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDCAC"))) PPC_WEAK_FUNC(sub_83BDDCAC);
PPC_FUNC_IMPL(__imp__sub_83BDDCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDCB0"))) PPC_WEAK_FUNC(sub_83BDDCB0);
PPC_FUNC_IMPL(__imp__sub_83BDDCB0) {
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
	// addi r3,r11,-13880
	ctx.r3.s64 = ctx.r11.s64 + -13880;
	// bl 0x83523120
	ctx.lr = 0x83BDDCC8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30016
	ctx.r3.s64 = ctx.r10.s64 + 30016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDDCD4;
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

__attribute__((alias("__imp__sub_83BDDCE4"))) PPC_WEAK_FUNC(sub_83BDDCE4);
PPC_FUNC_IMPL(__imp__sub_83BDDCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDCE8"))) PPC_WEAK_FUNC(sub_83BDDCE8);
PPC_FUNC_IMPL(__imp__sub_83BDDCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13864
	ctx.r7.s64 = ctx.r8.s64 + -13864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13864(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDDD10"))) PPC_WEAK_FUNC(sub_83BDDD10);
PPC_FUNC_IMPL(__imp__sub_83BDDD10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-23568
	ctx.r6.s64 = ctx.r7.s64 + -23568;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23640(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23640);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13864);
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
	// std r9,-23568(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23568, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDDD58"))) PPC_WEAK_FUNC(sub_83BDDD58);
PPC_FUNC_IMPL(__imp__sub_83BDDD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30032
	ctx.r3.s64 = ctx.r11.s64 + 30032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDD64"))) PPC_WEAK_FUNC(sub_83BDDD64);
PPC_FUNC_IMPL(__imp__sub_83BDDD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDD68"))) PPC_WEAK_FUNC(sub_83BDDD68);
PPC_FUNC_IMPL(__imp__sub_83BDDD68) {
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
	// addi r3,r11,-13856
	ctx.r3.s64 = ctx.r11.s64 + -13856;
	// bl 0x8259af80
	ctx.lr = 0x83BDDD80;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30048
	ctx.r3.s64 = ctx.r10.s64 + 30048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDDD8C;
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

__attribute__((alias("__imp__sub_83BDDD9C"))) PPC_WEAK_FUNC(sub_83BDDD9C);
PPC_FUNC_IMPL(__imp__sub_83BDDD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDDA0"))) PPC_WEAK_FUNC(sub_83BDDDA0);
PPC_FUNC_IMPL(__imp__sub_83BDDDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13876
	ctx.r11.s64 = ctx.r8.s64 + -13876;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23592);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30040
	ctx.r3.s64 = ctx.r6.s64 + 30040;
	// stw r10,-13876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDDD0"))) PPC_WEAK_FUNC(sub_83BDDDD0);
PPC_FUNC_IMPL(__imp__sub_83BDDDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30056
	ctx.r3.s64 = ctx.r11.s64 + 30056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDDDC"))) PPC_WEAK_FUNC(sub_83BDDDDC);
PPC_FUNC_IMPL(__imp__sub_83BDDDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDDE0"))) PPC_WEAK_FUNC(sub_83BDDDE0);
PPC_FUNC_IMPL(__imp__sub_83BDDDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30064
	ctx.r3.s64 = ctx.r11.s64 + 30064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDDEC"))) PPC_WEAK_FUNC(sub_83BDDDEC);
PPC_FUNC_IMPL(__imp__sub_83BDDDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDDF0"))) PPC_WEAK_FUNC(sub_83BDDDF0);
PPC_FUNC_IMPL(__imp__sub_83BDDDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30072
	ctx.r3.s64 = ctx.r11.s64 + 30072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDDFC"))) PPC_WEAK_FUNC(sub_83BDDDFC);
PPC_FUNC_IMPL(__imp__sub_83BDDDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE00"))) PPC_WEAK_FUNC(sub_83BDDE00);
PPC_FUNC_IMPL(__imp__sub_83BDDE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDE0C"))) PPC_WEAK_FUNC(sub_83BDDE0C);
PPC_FUNC_IMPL(__imp__sub_83BDDE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE10"))) PPC_WEAK_FUNC(sub_83BDDE10);
PPC_FUNC_IMPL(__imp__sub_83BDDE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30088
	ctx.r3.s64 = ctx.r11.s64 + 30088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDE1C"))) PPC_WEAK_FUNC(sub_83BDDE1C);
PPC_FUNC_IMPL(__imp__sub_83BDDE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE20"))) PPC_WEAK_FUNC(sub_83BDDE20);
PPC_FUNC_IMPL(__imp__sub_83BDDE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30096
	ctx.r3.s64 = ctx.r11.s64 + 30096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDE2C"))) PPC_WEAK_FUNC(sub_83BDDE2C);
PPC_FUNC_IMPL(__imp__sub_83BDDE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE30"))) PPC_WEAK_FUNC(sub_83BDDE30);
PPC_FUNC_IMPL(__imp__sub_83BDDE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30104
	ctx.r3.s64 = ctx.r11.s64 + 30104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDE3C"))) PPC_WEAK_FUNC(sub_83BDDE3C);
PPC_FUNC_IMPL(__imp__sub_83BDDE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE40"))) PPC_WEAK_FUNC(sub_83BDDE40);
PPC_FUNC_IMPL(__imp__sub_83BDDE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30112
	ctx.r3.s64 = ctx.r11.s64 + 30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDE4C"))) PPC_WEAK_FUNC(sub_83BDDE4C);
PPC_FUNC_IMPL(__imp__sub_83BDDE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE50"))) PPC_WEAK_FUNC(sub_83BDDE50);
PPC_FUNC_IMPL(__imp__sub_83BDDE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDE5C"))) PPC_WEAK_FUNC(sub_83BDDE5C);
PPC_FUNC_IMPL(__imp__sub_83BDDE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE60"))) PPC_WEAK_FUNC(sub_83BDDE60);
PPC_FUNC_IMPL(__imp__sub_83BDDE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDE6C"))) PPC_WEAK_FUNC(sub_83BDDE6C);
PPC_FUNC_IMPL(__imp__sub_83BDDE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE70"))) PPC_WEAK_FUNC(sub_83BDDE70);
PPC_FUNC_IMPL(__imp__sub_83BDDE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30136
	ctx.r3.s64 = ctx.r11.s64 + 30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

