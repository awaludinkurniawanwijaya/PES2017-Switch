#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BF5E38"))) PPC_WEAK_FUNC(sub_83BF5E38);
PPC_FUNC_IMPL(__imp__sub_83BF5E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5E44"))) PPC_WEAK_FUNC(sub_83BF5E44);
PPC_FUNC_IMPL(__imp__sub_83BF5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5E48"))) PPC_WEAK_FUNC(sub_83BF5E48);
PPC_FUNC_IMPL(__imp__sub_83BF5E48) {
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
	// addi r3,r11,-1840
	ctx.r3.s64 = ctx.r11.s64 + -1840;
	// bl 0x8259af80
	ctx.lr = 0x83BF5E60;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-5280
	ctx.r3.s64 = ctx.r10.s64 + -5280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF5E6C;
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

__attribute__((alias("__imp__sub_83BF5E7C"))) PPC_WEAK_FUNC(sub_83BF5E7C);
PPC_FUNC_IMPL(__imp__sub_83BF5E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5E80"))) PPC_WEAK_FUNC(sub_83BF5E80);
PPC_FUNC_IMPL(__imp__sub_83BF5E80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1860
	ctx.r11.s64 = ctx.r8.s64 + -1860;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,5472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5472);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5288
	ctx.r3.s64 = ctx.r6.s64 + -5288;
	// stw r10,-1860(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5EB0"))) PPC_WEAK_FUNC(sub_83BF5EB0);
PPC_FUNC_IMPL(__imp__sub_83BF5EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5168
	ctx.r3.s64 = ctx.r11.s64 + -5168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5EBC"))) PPC_WEAK_FUNC(sub_83BF5EBC);
PPC_FUNC_IMPL(__imp__sub_83BF5EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5EC0"))) PPC_WEAK_FUNC(sub_83BF5EC0);
PPC_FUNC_IMPL(__imp__sub_83BF5EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5160
	ctx.r3.s64 = ctx.r11.s64 + -5160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5ECC"))) PPC_WEAK_FUNC(sub_83BF5ECC);
PPC_FUNC_IMPL(__imp__sub_83BF5ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5ED0"))) PPC_WEAK_FUNC(sub_83BF5ED0);
PPC_FUNC_IMPL(__imp__sub_83BF5ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5152
	ctx.r3.s64 = ctx.r11.s64 + -5152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5EDC"))) PPC_WEAK_FUNC(sub_83BF5EDC);
PPC_FUNC_IMPL(__imp__sub_83BF5EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5EE0"))) PPC_WEAK_FUNC(sub_83BF5EE0);
PPC_FUNC_IMPL(__imp__sub_83BF5EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5144
	ctx.r3.s64 = ctx.r11.s64 + -5144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5EEC"))) PPC_WEAK_FUNC(sub_83BF5EEC);
PPC_FUNC_IMPL(__imp__sub_83BF5EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5EF0"))) PPC_WEAK_FUNC(sub_83BF5EF0);
PPC_FUNC_IMPL(__imp__sub_83BF5EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5136
	ctx.r3.s64 = ctx.r11.s64 + -5136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5EFC"))) PPC_WEAK_FUNC(sub_83BF5EFC);
PPC_FUNC_IMPL(__imp__sub_83BF5EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5F00"))) PPC_WEAK_FUNC(sub_83BF5F00);
PPC_FUNC_IMPL(__imp__sub_83BF5F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5128
	ctx.r3.s64 = ctx.r11.s64 + -5128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5F0C"))) PPC_WEAK_FUNC(sub_83BF5F0C);
PPC_FUNC_IMPL(__imp__sub_83BF5F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5F10"))) PPC_WEAK_FUNC(sub_83BF5F10);
PPC_FUNC_IMPL(__imp__sub_83BF5F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5120
	ctx.r3.s64 = ctx.r11.s64 + -5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5F1C"))) PPC_WEAK_FUNC(sub_83BF5F1C);
PPC_FUNC_IMPL(__imp__sub_83BF5F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5F20"))) PPC_WEAK_FUNC(sub_83BF5F20);
PPC_FUNC_IMPL(__imp__sub_83BF5F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5112
	ctx.r3.s64 = ctx.r11.s64 + -5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5F2C"))) PPC_WEAK_FUNC(sub_83BF5F2C);
PPC_FUNC_IMPL(__imp__sub_83BF5F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5F30"))) PPC_WEAK_FUNC(sub_83BF5F30);
PPC_FUNC_IMPL(__imp__sub_83BF5F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5104
	ctx.r3.s64 = ctx.r11.s64 + -5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5F3C"))) PPC_WEAK_FUNC(sub_83BF5F3C);
PPC_FUNC_IMPL(__imp__sub_83BF5F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5F40"))) PPC_WEAK_FUNC(sub_83BF5F40);
PPC_FUNC_IMPL(__imp__sub_83BF5F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5096
	ctx.r3.s64 = ctx.r11.s64 + -5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5F4C"))) PPC_WEAK_FUNC(sub_83BF5F4C);
PPC_FUNC_IMPL(__imp__sub_83BF5F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5F50"))) PPC_WEAK_FUNC(sub_83BF5F50);
PPC_FUNC_IMPL(__imp__sub_83BF5F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5088
	ctx.r3.s64 = ctx.r11.s64 + -5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5F5C"))) PPC_WEAK_FUNC(sub_83BF5F5C);
PPC_FUNC_IMPL(__imp__sub_83BF5F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5F60"))) PPC_WEAK_FUNC(sub_83BF5F60);
PPC_FUNC_IMPL(__imp__sub_83BF5F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5080
	ctx.r3.s64 = ctx.r11.s64 + -5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF5F6C"))) PPC_WEAK_FUNC(sub_83BF5F6C);
PPC_FUNC_IMPL(__imp__sub_83BF5F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5F70"))) PPC_WEAK_FUNC(sub_83BF5F70);
PPC_FUNC_IMPL(__imp__sub_83BF5F70) {
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
	// addi r3,r11,-1496
	ctx.r3.s64 = ctx.r11.s64 + -1496;
	// bl 0x83523120
	ctx.lr = 0x83BF5F88;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-5072
	ctx.r3.s64 = ctx.r10.s64 + -5072;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF5F94;
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

__attribute__((alias("__imp__sub_83BF5FA4"))) PPC_WEAK_FUNC(sub_83BF5FA4);
PPC_FUNC_IMPL(__imp__sub_83BF5FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF5FA8"))) PPC_WEAK_FUNC(sub_83BF5FA8);
PPC_FUNC_IMPL(__imp__sub_83BF5FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1480
	ctx.r7.s64 = ctx.r8.s64 + -1480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF5FD0"))) PPC_WEAK_FUNC(sub_83BF5FD0);
PPC_FUNC_IMPL(__imp__sub_83BF5FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,5720
	ctx.r6.s64 = ctx.r7.s64 + 5720;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5648(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5648);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1480);
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
	// std r9,5720(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5720, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6018"))) PPC_WEAK_FUNC(sub_83BF6018);
PPC_FUNC_IMPL(__imp__sub_83BF6018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5056
	ctx.r3.s64 = ctx.r11.s64 + -5056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6024"))) PPC_WEAK_FUNC(sub_83BF6024);
PPC_FUNC_IMPL(__imp__sub_83BF6024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6028"))) PPC_WEAK_FUNC(sub_83BF6028);
PPC_FUNC_IMPL(__imp__sub_83BF6028) {
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
	// addi r3,r11,-1472
	ctx.r3.s64 = ctx.r11.s64 + -1472;
	// bl 0x8259af80
	ctx.lr = 0x83BF6040;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-5040
	ctx.r3.s64 = ctx.r10.s64 + -5040;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF604C;
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

__attribute__((alias("__imp__sub_83BF605C"))) PPC_WEAK_FUNC(sub_83BF605C);
PPC_FUNC_IMPL(__imp__sub_83BF605C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6060"))) PPC_WEAK_FUNC(sub_83BF6060);
PPC_FUNC_IMPL(__imp__sub_83BF6060) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1492
	ctx.r11.s64 = ctx.r8.s64 + -1492;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,5696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5696);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5048
	ctx.r3.s64 = ctx.r6.s64 + -5048;
	// stw r10,-1492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6090"))) PPC_WEAK_FUNC(sub_83BF6090);
PPC_FUNC_IMPL(__imp__sub_83BF6090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF609C"))) PPC_WEAK_FUNC(sub_83BF609C);
PPC_FUNC_IMPL(__imp__sub_83BF609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF60A0"))) PPC_WEAK_FUNC(sub_83BF60A0);
PPC_FUNC_IMPL(__imp__sub_83BF60A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5024
	ctx.r3.s64 = ctx.r11.s64 + -5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF60AC"))) PPC_WEAK_FUNC(sub_83BF60AC);
PPC_FUNC_IMPL(__imp__sub_83BF60AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF60B0"))) PPC_WEAK_FUNC(sub_83BF60B0);
PPC_FUNC_IMPL(__imp__sub_83BF60B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF60BC"))) PPC_WEAK_FUNC(sub_83BF60BC);
PPC_FUNC_IMPL(__imp__sub_83BF60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF60C0"))) PPC_WEAK_FUNC(sub_83BF60C0);
PPC_FUNC_IMPL(__imp__sub_83BF60C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5008
	ctx.r3.s64 = ctx.r11.s64 + -5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF60CC"))) PPC_WEAK_FUNC(sub_83BF60CC);
PPC_FUNC_IMPL(__imp__sub_83BF60CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF60D0"))) PPC_WEAK_FUNC(sub_83BF60D0);
PPC_FUNC_IMPL(__imp__sub_83BF60D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-5000
	ctx.r3.s64 = ctx.r11.s64 + -5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF60DC"))) PPC_WEAK_FUNC(sub_83BF60DC);
PPC_FUNC_IMPL(__imp__sub_83BF60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF60E0"))) PPC_WEAK_FUNC(sub_83BF60E0);
PPC_FUNC_IMPL(__imp__sub_83BF60E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4992
	ctx.r3.s64 = ctx.r11.s64 + -4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF60EC"))) PPC_WEAK_FUNC(sub_83BF60EC);
PPC_FUNC_IMPL(__imp__sub_83BF60EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF60F0"))) PPC_WEAK_FUNC(sub_83BF60F0);
PPC_FUNC_IMPL(__imp__sub_83BF60F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4984
	ctx.r3.s64 = ctx.r11.s64 + -4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF60FC"))) PPC_WEAK_FUNC(sub_83BF60FC);
PPC_FUNC_IMPL(__imp__sub_83BF60FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6100"))) PPC_WEAK_FUNC(sub_83BF6100);
PPC_FUNC_IMPL(__imp__sub_83BF6100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4976
	ctx.r3.s64 = ctx.r11.s64 + -4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF610C"))) PPC_WEAK_FUNC(sub_83BF610C);
PPC_FUNC_IMPL(__imp__sub_83BF610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6110"))) PPC_WEAK_FUNC(sub_83BF6110);
PPC_FUNC_IMPL(__imp__sub_83BF6110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4968
	ctx.r3.s64 = ctx.r11.s64 + -4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF611C"))) PPC_WEAK_FUNC(sub_83BF611C);
PPC_FUNC_IMPL(__imp__sub_83BF611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6120"))) PPC_WEAK_FUNC(sub_83BF6120);
PPC_FUNC_IMPL(__imp__sub_83BF6120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4960
	ctx.r3.s64 = ctx.r11.s64 + -4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF612C"))) PPC_WEAK_FUNC(sub_83BF612C);
PPC_FUNC_IMPL(__imp__sub_83BF612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6130"))) PPC_WEAK_FUNC(sub_83BF6130);
PPC_FUNC_IMPL(__imp__sub_83BF6130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4952
	ctx.r3.s64 = ctx.r11.s64 + -4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF613C"))) PPC_WEAK_FUNC(sub_83BF613C);
PPC_FUNC_IMPL(__imp__sub_83BF613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6140"))) PPC_WEAK_FUNC(sub_83BF6140);
PPC_FUNC_IMPL(__imp__sub_83BF6140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4944
	ctx.r3.s64 = ctx.r11.s64 + -4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF614C"))) PPC_WEAK_FUNC(sub_83BF614C);
PPC_FUNC_IMPL(__imp__sub_83BF614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6150"))) PPC_WEAK_FUNC(sub_83BF6150);
PPC_FUNC_IMPL(__imp__sub_83BF6150) {
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
	// addi r3,r11,-1128
	ctx.r3.s64 = ctx.r11.s64 + -1128;
	// bl 0x83523120
	ctx.lr = 0x83BF6168;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4936
	ctx.r3.s64 = ctx.r10.s64 + -4936;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6174;
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

__attribute__((alias("__imp__sub_83BF6184"))) PPC_WEAK_FUNC(sub_83BF6184);
PPC_FUNC_IMPL(__imp__sub_83BF6184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6188"))) PPC_WEAK_FUNC(sub_83BF6188);
PPC_FUNC_IMPL(__imp__sub_83BF6188) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1112
	ctx.r7.s64 = ctx.r8.s64 + -1112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1112(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF61B0"))) PPC_WEAK_FUNC(sub_83BF61B0);
PPC_FUNC_IMPL(__imp__sub_83BF61B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,5848
	ctx.r6.s64 = ctx.r7.s64 + 5848;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1112);
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
	// std r9,5848(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5848, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF61F8"))) PPC_WEAK_FUNC(sub_83BF61F8);
PPC_FUNC_IMPL(__imp__sub_83BF61F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4920
	ctx.r3.s64 = ctx.r11.s64 + -4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6204"))) PPC_WEAK_FUNC(sub_83BF6204);
PPC_FUNC_IMPL(__imp__sub_83BF6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6208"))) PPC_WEAK_FUNC(sub_83BF6208);
PPC_FUNC_IMPL(__imp__sub_83BF6208) {
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
	// addi r3,r11,-1104
	ctx.r3.s64 = ctx.r11.s64 + -1104;
	// bl 0x8259af80
	ctx.lr = 0x83BF6220;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4904
	ctx.r3.s64 = ctx.r10.s64 + -4904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF622C;
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

__attribute__((alias("__imp__sub_83BF623C"))) PPC_WEAK_FUNC(sub_83BF623C);
PPC_FUNC_IMPL(__imp__sub_83BF623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6240"))) PPC_WEAK_FUNC(sub_83BF6240);
PPC_FUNC_IMPL(__imp__sub_83BF6240) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1124
	ctx.r11.s64 = ctx.r8.s64 + -1124;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,5824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4912
	ctx.r3.s64 = ctx.r6.s64 + -4912;
	// stw r10,-1124(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6270"))) PPC_WEAK_FUNC(sub_83BF6270);
PPC_FUNC_IMPL(__imp__sub_83BF6270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4896
	ctx.r3.s64 = ctx.r11.s64 + -4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF627C"))) PPC_WEAK_FUNC(sub_83BF627C);
PPC_FUNC_IMPL(__imp__sub_83BF627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6280"))) PPC_WEAK_FUNC(sub_83BF6280);
PPC_FUNC_IMPL(__imp__sub_83BF6280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF628C"))) PPC_WEAK_FUNC(sub_83BF628C);
PPC_FUNC_IMPL(__imp__sub_83BF628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6290"))) PPC_WEAK_FUNC(sub_83BF6290);
PPC_FUNC_IMPL(__imp__sub_83BF6290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4880
	ctx.r3.s64 = ctx.r11.s64 + -4880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF629C"))) PPC_WEAK_FUNC(sub_83BF629C);
PPC_FUNC_IMPL(__imp__sub_83BF629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF62A0"))) PPC_WEAK_FUNC(sub_83BF62A0);
PPC_FUNC_IMPL(__imp__sub_83BF62A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4872
	ctx.r3.s64 = ctx.r11.s64 + -4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF62AC"))) PPC_WEAK_FUNC(sub_83BF62AC);
PPC_FUNC_IMPL(__imp__sub_83BF62AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF62B0"))) PPC_WEAK_FUNC(sub_83BF62B0);
PPC_FUNC_IMPL(__imp__sub_83BF62B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF62BC"))) PPC_WEAK_FUNC(sub_83BF62BC);
PPC_FUNC_IMPL(__imp__sub_83BF62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF62C0"))) PPC_WEAK_FUNC(sub_83BF62C0);
PPC_FUNC_IMPL(__imp__sub_83BF62C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4856
	ctx.r3.s64 = ctx.r11.s64 + -4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF62CC"))) PPC_WEAK_FUNC(sub_83BF62CC);
PPC_FUNC_IMPL(__imp__sub_83BF62CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF62D0"))) PPC_WEAK_FUNC(sub_83BF62D0);
PPC_FUNC_IMPL(__imp__sub_83BF62D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4848
	ctx.r3.s64 = ctx.r11.s64 + -4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF62DC"))) PPC_WEAK_FUNC(sub_83BF62DC);
PPC_FUNC_IMPL(__imp__sub_83BF62DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF62E0"))) PPC_WEAK_FUNC(sub_83BF62E0);
PPC_FUNC_IMPL(__imp__sub_83BF62E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4840
	ctx.r3.s64 = ctx.r11.s64 + -4840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF62EC"))) PPC_WEAK_FUNC(sub_83BF62EC);
PPC_FUNC_IMPL(__imp__sub_83BF62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF62F0"))) PPC_WEAK_FUNC(sub_83BF62F0);
PPC_FUNC_IMPL(__imp__sub_83BF62F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4832
	ctx.r3.s64 = ctx.r11.s64 + -4832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF62FC"))) PPC_WEAK_FUNC(sub_83BF62FC);
PPC_FUNC_IMPL(__imp__sub_83BF62FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6300"))) PPC_WEAK_FUNC(sub_83BF6300);
PPC_FUNC_IMPL(__imp__sub_83BF6300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4824
	ctx.r3.s64 = ctx.r11.s64 + -4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF630C"))) PPC_WEAK_FUNC(sub_83BF630C);
PPC_FUNC_IMPL(__imp__sub_83BF630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6310"))) PPC_WEAK_FUNC(sub_83BF6310);
PPC_FUNC_IMPL(__imp__sub_83BF6310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4816
	ctx.r3.s64 = ctx.r11.s64 + -4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF631C"))) PPC_WEAK_FUNC(sub_83BF631C);
PPC_FUNC_IMPL(__imp__sub_83BF631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6320"))) PPC_WEAK_FUNC(sub_83BF6320);
PPC_FUNC_IMPL(__imp__sub_83BF6320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4808
	ctx.r3.s64 = ctx.r11.s64 + -4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF632C"))) PPC_WEAK_FUNC(sub_83BF632C);
PPC_FUNC_IMPL(__imp__sub_83BF632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6330"))) PPC_WEAK_FUNC(sub_83BF6330);
PPC_FUNC_IMPL(__imp__sub_83BF6330) {
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
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// bl 0x83523120
	ctx.lr = 0x83BF6348;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4800
	ctx.r3.s64 = ctx.r10.s64 + -4800;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6354;
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

__attribute__((alias("__imp__sub_83BF6364"))) PPC_WEAK_FUNC(sub_83BF6364);
PPC_FUNC_IMPL(__imp__sub_83BF6364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6368"))) PPC_WEAK_FUNC(sub_83BF6368);
PPC_FUNC_IMPL(__imp__sub_83BF6368) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,272
	ctx.r7.s64 = ctx.r8.s64 + 272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6390"))) PPC_WEAK_FUNC(sub_83BF6390);
PPC_FUNC_IMPL(__imp__sub_83BF6390) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,5988
	ctx.r6.s64 = ctx.r7.s64 + 5988;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5916(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5916);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
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
	// std r9,5988(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5988, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF63D8"))) PPC_WEAK_FUNC(sub_83BF63D8);
PPC_FUNC_IMPL(__imp__sub_83BF63D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4784
	ctx.r3.s64 = ctx.r11.s64 + -4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF63E4"))) PPC_WEAK_FUNC(sub_83BF63E4);
PPC_FUNC_IMPL(__imp__sub_83BF63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF63E8"))) PPC_WEAK_FUNC(sub_83BF63E8);
PPC_FUNC_IMPL(__imp__sub_83BF63E8) {
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
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// bl 0x8259af80
	ctx.lr = 0x83BF6400;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4768
	ctx.r3.s64 = ctx.r10.s64 + -4768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF640C;
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

__attribute__((alias("__imp__sub_83BF641C"))) PPC_WEAK_FUNC(sub_83BF641C);
PPC_FUNC_IMPL(__imp__sub_83BF641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6420"))) PPC_WEAK_FUNC(sub_83BF6420);
PPC_FUNC_IMPL(__imp__sub_83BF6420) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,260
	ctx.r11.s64 = ctx.r8.s64 + 260;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,5964(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5964);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4776
	ctx.r3.s64 = ctx.r6.s64 + -4776;
	// stw r10,260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 260, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6450"))) PPC_WEAK_FUNC(sub_83BF6450);
PPC_FUNC_IMPL(__imp__sub_83BF6450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4512
	ctx.r3.s64 = ctx.r11.s64 + -4512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF645C"))) PPC_WEAK_FUNC(sub_83BF645C);
PPC_FUNC_IMPL(__imp__sub_83BF645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6460"))) PPC_WEAK_FUNC(sub_83BF6460);
PPC_FUNC_IMPL(__imp__sub_83BF6460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4504
	ctx.r3.s64 = ctx.r11.s64 + -4504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF646C"))) PPC_WEAK_FUNC(sub_83BF646C);
PPC_FUNC_IMPL(__imp__sub_83BF646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6470"))) PPC_WEAK_FUNC(sub_83BF6470);
PPC_FUNC_IMPL(__imp__sub_83BF6470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4496
	ctx.r3.s64 = ctx.r11.s64 + -4496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF647C"))) PPC_WEAK_FUNC(sub_83BF647C);
PPC_FUNC_IMPL(__imp__sub_83BF647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6480"))) PPC_WEAK_FUNC(sub_83BF6480);
PPC_FUNC_IMPL(__imp__sub_83BF6480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4488
	ctx.r3.s64 = ctx.r11.s64 + -4488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF648C"))) PPC_WEAK_FUNC(sub_83BF648C);
PPC_FUNC_IMPL(__imp__sub_83BF648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6490"))) PPC_WEAK_FUNC(sub_83BF6490);
PPC_FUNC_IMPL(__imp__sub_83BF6490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF649C"))) PPC_WEAK_FUNC(sub_83BF649C);
PPC_FUNC_IMPL(__imp__sub_83BF649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF64A0"))) PPC_WEAK_FUNC(sub_83BF64A0);
PPC_FUNC_IMPL(__imp__sub_83BF64A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4472
	ctx.r3.s64 = ctx.r11.s64 + -4472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF64AC"))) PPC_WEAK_FUNC(sub_83BF64AC);
PPC_FUNC_IMPL(__imp__sub_83BF64AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF64B0"))) PPC_WEAK_FUNC(sub_83BF64B0);
PPC_FUNC_IMPL(__imp__sub_83BF64B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4464
	ctx.r3.s64 = ctx.r11.s64 + -4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF64BC"))) PPC_WEAK_FUNC(sub_83BF64BC);
PPC_FUNC_IMPL(__imp__sub_83BF64BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF64C0"))) PPC_WEAK_FUNC(sub_83BF64C0);
PPC_FUNC_IMPL(__imp__sub_83BF64C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4456
	ctx.r3.s64 = ctx.r11.s64 + -4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF64CC"))) PPC_WEAK_FUNC(sub_83BF64CC);
PPC_FUNC_IMPL(__imp__sub_83BF64CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF64D0"))) PPC_WEAK_FUNC(sub_83BF64D0);
PPC_FUNC_IMPL(__imp__sub_83BF64D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4448
	ctx.r3.s64 = ctx.r11.s64 + -4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF64DC"))) PPC_WEAK_FUNC(sub_83BF64DC);
PPC_FUNC_IMPL(__imp__sub_83BF64DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF64E0"))) PPC_WEAK_FUNC(sub_83BF64E0);
PPC_FUNC_IMPL(__imp__sub_83BF64E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4440
	ctx.r3.s64 = ctx.r11.s64 + -4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF64EC"))) PPC_WEAK_FUNC(sub_83BF64EC);
PPC_FUNC_IMPL(__imp__sub_83BF64EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF64F0"))) PPC_WEAK_FUNC(sub_83BF64F0);
PPC_FUNC_IMPL(__imp__sub_83BF64F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4432
	ctx.r3.s64 = ctx.r11.s64 + -4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF64FC"))) PPC_WEAK_FUNC(sub_83BF64FC);
PPC_FUNC_IMPL(__imp__sub_83BF64FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6500"))) PPC_WEAK_FUNC(sub_83BF6500);
PPC_FUNC_IMPL(__imp__sub_83BF6500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4424
	ctx.r3.s64 = ctx.r11.s64 + -4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF650C"))) PPC_WEAK_FUNC(sub_83BF650C);
PPC_FUNC_IMPL(__imp__sub_83BF650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6510"))) PPC_WEAK_FUNC(sub_83BF6510);
PPC_FUNC_IMPL(__imp__sub_83BF6510) {
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
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// bl 0x83523120
	ctx.lr = 0x83BF6528;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4416
	ctx.r3.s64 = ctx.r10.s64 + -4416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6534;
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

__attribute__((alias("__imp__sub_83BF6544"))) PPC_WEAK_FUNC(sub_83BF6544);
PPC_FUNC_IMPL(__imp__sub_83BF6544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6548"))) PPC_WEAK_FUNC(sub_83BF6548);
PPC_FUNC_IMPL(__imp__sub_83BF6548) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,640
	ctx.r7.s64 = ctx.r8.s64 + 640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6570"))) PPC_WEAK_FUNC(sub_83BF6570);
PPC_FUNC_IMPL(__imp__sub_83BF6570) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,6128
	ctx.r6.s64 = ctx.r7.s64 + 6128;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6056(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6056);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
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
	// std r9,6128(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6128, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF65B8"))) PPC_WEAK_FUNC(sub_83BF65B8);
PPC_FUNC_IMPL(__imp__sub_83BF65B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF65C4"))) PPC_WEAK_FUNC(sub_83BF65C4);
PPC_FUNC_IMPL(__imp__sub_83BF65C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF65C8"))) PPC_WEAK_FUNC(sub_83BF65C8);
PPC_FUNC_IMPL(__imp__sub_83BF65C8) {
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
	// addi r3,r11,648
	ctx.r3.s64 = ctx.r11.s64 + 648;
	// bl 0x8259af80
	ctx.lr = 0x83BF65E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4384
	ctx.r3.s64 = ctx.r10.s64 + -4384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF65EC;
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

__attribute__((alias("__imp__sub_83BF65FC"))) PPC_WEAK_FUNC(sub_83BF65FC);
PPC_FUNC_IMPL(__imp__sub_83BF65FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6600"))) PPC_WEAK_FUNC(sub_83BF6600);
PPC_FUNC_IMPL(__imp__sub_83BF6600) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,628
	ctx.r11.s64 = ctx.r8.s64 + 628;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,6104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4392
	ctx.r3.s64 = ctx.r6.s64 + -4392;
	// stw r10,628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6630"))) PPC_WEAK_FUNC(sub_83BF6630);
PPC_FUNC_IMPL(__imp__sub_83BF6630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4376
	ctx.r3.s64 = ctx.r11.s64 + -4376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF663C"))) PPC_WEAK_FUNC(sub_83BF663C);
PPC_FUNC_IMPL(__imp__sub_83BF663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6640"))) PPC_WEAK_FUNC(sub_83BF6640);
PPC_FUNC_IMPL(__imp__sub_83BF6640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF664C"))) PPC_WEAK_FUNC(sub_83BF664C);
PPC_FUNC_IMPL(__imp__sub_83BF664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6650"))) PPC_WEAK_FUNC(sub_83BF6650);
PPC_FUNC_IMPL(__imp__sub_83BF6650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4360
	ctx.r3.s64 = ctx.r11.s64 + -4360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF665C"))) PPC_WEAK_FUNC(sub_83BF665C);
PPC_FUNC_IMPL(__imp__sub_83BF665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6660"))) PPC_WEAK_FUNC(sub_83BF6660);
PPC_FUNC_IMPL(__imp__sub_83BF6660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4352
	ctx.r3.s64 = ctx.r11.s64 + -4352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF666C"))) PPC_WEAK_FUNC(sub_83BF666C);
PPC_FUNC_IMPL(__imp__sub_83BF666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6670"))) PPC_WEAK_FUNC(sub_83BF6670);
PPC_FUNC_IMPL(__imp__sub_83BF6670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4344
	ctx.r3.s64 = ctx.r11.s64 + -4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF667C"))) PPC_WEAK_FUNC(sub_83BF667C);
PPC_FUNC_IMPL(__imp__sub_83BF667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6680"))) PPC_WEAK_FUNC(sub_83BF6680);
PPC_FUNC_IMPL(__imp__sub_83BF6680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4336
	ctx.r3.s64 = ctx.r11.s64 + -4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF668C"))) PPC_WEAK_FUNC(sub_83BF668C);
PPC_FUNC_IMPL(__imp__sub_83BF668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6690"))) PPC_WEAK_FUNC(sub_83BF6690);
PPC_FUNC_IMPL(__imp__sub_83BF6690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4328
	ctx.r3.s64 = ctx.r11.s64 + -4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF669C"))) PPC_WEAK_FUNC(sub_83BF669C);
PPC_FUNC_IMPL(__imp__sub_83BF669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF66A0"))) PPC_WEAK_FUNC(sub_83BF66A0);
PPC_FUNC_IMPL(__imp__sub_83BF66A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4320
	ctx.r3.s64 = ctx.r11.s64 + -4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF66AC"))) PPC_WEAK_FUNC(sub_83BF66AC);
PPC_FUNC_IMPL(__imp__sub_83BF66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF66B0"))) PPC_WEAK_FUNC(sub_83BF66B0);
PPC_FUNC_IMPL(__imp__sub_83BF66B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4312
	ctx.r3.s64 = ctx.r11.s64 + -4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF66BC"))) PPC_WEAK_FUNC(sub_83BF66BC);
PPC_FUNC_IMPL(__imp__sub_83BF66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF66C0"))) PPC_WEAK_FUNC(sub_83BF66C0);
PPC_FUNC_IMPL(__imp__sub_83BF66C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4304
	ctx.r3.s64 = ctx.r11.s64 + -4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF66CC"))) PPC_WEAK_FUNC(sub_83BF66CC);
PPC_FUNC_IMPL(__imp__sub_83BF66CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF66D0"))) PPC_WEAK_FUNC(sub_83BF66D0);
PPC_FUNC_IMPL(__imp__sub_83BF66D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4296
	ctx.r3.s64 = ctx.r11.s64 + -4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF66DC"))) PPC_WEAK_FUNC(sub_83BF66DC);
PPC_FUNC_IMPL(__imp__sub_83BF66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF66E0"))) PPC_WEAK_FUNC(sub_83BF66E0);
PPC_FUNC_IMPL(__imp__sub_83BF66E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4288
	ctx.r3.s64 = ctx.r11.s64 + -4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF66EC"))) PPC_WEAK_FUNC(sub_83BF66EC);
PPC_FUNC_IMPL(__imp__sub_83BF66EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF66F0"))) PPC_WEAK_FUNC(sub_83BF66F0);
PPC_FUNC_IMPL(__imp__sub_83BF66F0) {
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
	// addi r3,r11,992
	ctx.r3.s64 = ctx.r11.s64 + 992;
	// bl 0x83523120
	ctx.lr = 0x83BF6708;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4280
	ctx.r3.s64 = ctx.r10.s64 + -4280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6714;
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

__attribute__((alias("__imp__sub_83BF6724"))) PPC_WEAK_FUNC(sub_83BF6724);
PPC_FUNC_IMPL(__imp__sub_83BF6724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6728"))) PPC_WEAK_FUNC(sub_83BF6728);
PPC_FUNC_IMPL(__imp__sub_83BF6728) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1008
	ctx.r7.s64 = ctx.r8.s64 + 1008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1008);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1008, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6750"))) PPC_WEAK_FUNC(sub_83BF6750);
PPC_FUNC_IMPL(__imp__sub_83BF6750) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,6332
	ctx.r6.s64 = ctx.r7.s64 + 6332;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6260(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6260);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
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
	// std r9,6332(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6332, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6798"))) PPC_WEAK_FUNC(sub_83BF6798);
PPC_FUNC_IMPL(__imp__sub_83BF6798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4264
	ctx.r3.s64 = ctx.r11.s64 + -4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF67A4"))) PPC_WEAK_FUNC(sub_83BF67A4);
PPC_FUNC_IMPL(__imp__sub_83BF67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF67A8"))) PPC_WEAK_FUNC(sub_83BF67A8);
PPC_FUNC_IMPL(__imp__sub_83BF67A8) {
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
	// addi r3,r11,1016
	ctx.r3.s64 = ctx.r11.s64 + 1016;
	// bl 0x8259af80
	ctx.lr = 0x83BF67C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4248
	ctx.r3.s64 = ctx.r10.s64 + -4248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF67CC;
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

__attribute__((alias("__imp__sub_83BF67DC"))) PPC_WEAK_FUNC(sub_83BF67DC);
PPC_FUNC_IMPL(__imp__sub_83BF67DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF67E0"))) PPC_WEAK_FUNC(sub_83BF67E0);
PPC_FUNC_IMPL(__imp__sub_83BF67E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,996
	ctx.r11.s64 = ctx.r8.s64 + 996;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,6308(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6308);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4256
	ctx.r3.s64 = ctx.r6.s64 + -4256;
	// stw r10,996(r8)
	PPC_STORE_U32(ctx.r8.u32 + 996, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6810"))) PPC_WEAK_FUNC(sub_83BF6810);
PPC_FUNC_IMPL(__imp__sub_83BF6810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4240
	ctx.r3.s64 = ctx.r11.s64 + -4240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF681C"))) PPC_WEAK_FUNC(sub_83BF681C);
PPC_FUNC_IMPL(__imp__sub_83BF681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6820"))) PPC_WEAK_FUNC(sub_83BF6820);
PPC_FUNC_IMPL(__imp__sub_83BF6820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4232
	ctx.r3.s64 = ctx.r11.s64 + -4232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF682C"))) PPC_WEAK_FUNC(sub_83BF682C);
PPC_FUNC_IMPL(__imp__sub_83BF682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6830"))) PPC_WEAK_FUNC(sub_83BF6830);
PPC_FUNC_IMPL(__imp__sub_83BF6830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF683C"))) PPC_WEAK_FUNC(sub_83BF683C);
PPC_FUNC_IMPL(__imp__sub_83BF683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6840"))) PPC_WEAK_FUNC(sub_83BF6840);
PPC_FUNC_IMPL(__imp__sub_83BF6840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4216
	ctx.r3.s64 = ctx.r11.s64 + -4216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF684C"))) PPC_WEAK_FUNC(sub_83BF684C);
PPC_FUNC_IMPL(__imp__sub_83BF684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6850"))) PPC_WEAK_FUNC(sub_83BF6850);
PPC_FUNC_IMPL(__imp__sub_83BF6850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4208
	ctx.r3.s64 = ctx.r11.s64 + -4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF685C"))) PPC_WEAK_FUNC(sub_83BF685C);
PPC_FUNC_IMPL(__imp__sub_83BF685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6860"))) PPC_WEAK_FUNC(sub_83BF6860);
PPC_FUNC_IMPL(__imp__sub_83BF6860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4200
	ctx.r3.s64 = ctx.r11.s64 + -4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF686C"))) PPC_WEAK_FUNC(sub_83BF686C);
PPC_FUNC_IMPL(__imp__sub_83BF686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6870"))) PPC_WEAK_FUNC(sub_83BF6870);
PPC_FUNC_IMPL(__imp__sub_83BF6870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4192
	ctx.r3.s64 = ctx.r11.s64 + -4192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF687C"))) PPC_WEAK_FUNC(sub_83BF687C);
PPC_FUNC_IMPL(__imp__sub_83BF687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6880"))) PPC_WEAK_FUNC(sub_83BF6880);
PPC_FUNC_IMPL(__imp__sub_83BF6880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4184
	ctx.r3.s64 = ctx.r11.s64 + -4184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF688C"))) PPC_WEAK_FUNC(sub_83BF688C);
PPC_FUNC_IMPL(__imp__sub_83BF688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6890"))) PPC_WEAK_FUNC(sub_83BF6890);
PPC_FUNC_IMPL(__imp__sub_83BF6890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4176
	ctx.r3.s64 = ctx.r11.s64 + -4176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF689C"))) PPC_WEAK_FUNC(sub_83BF689C);
PPC_FUNC_IMPL(__imp__sub_83BF689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF68A0"))) PPC_WEAK_FUNC(sub_83BF68A0);
PPC_FUNC_IMPL(__imp__sub_83BF68A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4168
	ctx.r3.s64 = ctx.r11.s64 + -4168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF68AC"))) PPC_WEAK_FUNC(sub_83BF68AC);
PPC_FUNC_IMPL(__imp__sub_83BF68AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF68B0"))) PPC_WEAK_FUNC(sub_83BF68B0);
PPC_FUNC_IMPL(__imp__sub_83BF68B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4160
	ctx.r3.s64 = ctx.r11.s64 + -4160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF68BC"))) PPC_WEAK_FUNC(sub_83BF68BC);
PPC_FUNC_IMPL(__imp__sub_83BF68BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF68C0"))) PPC_WEAK_FUNC(sub_83BF68C0);
PPC_FUNC_IMPL(__imp__sub_83BF68C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4152
	ctx.r3.s64 = ctx.r11.s64 + -4152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF68CC"))) PPC_WEAK_FUNC(sub_83BF68CC);
PPC_FUNC_IMPL(__imp__sub_83BF68CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF68D0"))) PPC_WEAK_FUNC(sub_83BF68D0);
PPC_FUNC_IMPL(__imp__sub_83BF68D0) {
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
	// addi r3,r11,1360
	ctx.r3.s64 = ctx.r11.s64 + 1360;
	// bl 0x83523120
	ctx.lr = 0x83BF68E8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4144
	ctx.r3.s64 = ctx.r10.s64 + -4144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF68F4;
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

__attribute__((alias("__imp__sub_83BF6904"))) PPC_WEAK_FUNC(sub_83BF6904);
PPC_FUNC_IMPL(__imp__sub_83BF6904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6908"))) PPC_WEAK_FUNC(sub_83BF6908);
PPC_FUNC_IMPL(__imp__sub_83BF6908) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1376
	ctx.r7.s64 = ctx.r8.s64 + 1376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1376);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1376, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6930"))) PPC_WEAK_FUNC(sub_83BF6930);
PPC_FUNC_IMPL(__imp__sub_83BF6930) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,6460
	ctx.r6.s64 = ctx.r7.s64 + 6460;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6388(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6388);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1376(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
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
	// std r9,6460(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6460, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6978"))) PPC_WEAK_FUNC(sub_83BF6978);
PPC_FUNC_IMPL(__imp__sub_83BF6978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4128
	ctx.r3.s64 = ctx.r11.s64 + -4128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6984"))) PPC_WEAK_FUNC(sub_83BF6984);
PPC_FUNC_IMPL(__imp__sub_83BF6984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6988"))) PPC_WEAK_FUNC(sub_83BF6988);
PPC_FUNC_IMPL(__imp__sub_83BF6988) {
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
	// addi r3,r11,1384
	ctx.r3.s64 = ctx.r11.s64 + 1384;
	// bl 0x8259af80
	ctx.lr = 0x83BF69A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4112
	ctx.r3.s64 = ctx.r10.s64 + -4112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF69AC;
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

__attribute__((alias("__imp__sub_83BF69BC"))) PPC_WEAK_FUNC(sub_83BF69BC);
PPC_FUNC_IMPL(__imp__sub_83BF69BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF69C0"))) PPC_WEAK_FUNC(sub_83BF69C0);
PPC_FUNC_IMPL(__imp__sub_83BF69C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1364
	ctx.r11.s64 = ctx.r8.s64 + 1364;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,6436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6436);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4120
	ctx.r3.s64 = ctx.r6.s64 + -4120;
	// stw r10,1364(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1364, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF69F0"))) PPC_WEAK_FUNC(sub_83BF69F0);
PPC_FUNC_IMPL(__imp__sub_83BF69F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4104
	ctx.r3.s64 = ctx.r11.s64 + -4104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF69FC"))) PPC_WEAK_FUNC(sub_83BF69FC);
PPC_FUNC_IMPL(__imp__sub_83BF69FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A00"))) PPC_WEAK_FUNC(sub_83BF6A00);
PPC_FUNC_IMPL(__imp__sub_83BF6A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4096
	ctx.r3.s64 = ctx.r11.s64 + -4096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A0C"))) PPC_WEAK_FUNC(sub_83BF6A0C);
PPC_FUNC_IMPL(__imp__sub_83BF6A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A10"))) PPC_WEAK_FUNC(sub_83BF6A10);
PPC_FUNC_IMPL(__imp__sub_83BF6A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4088
	ctx.r3.s64 = ctx.r11.s64 + -4088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A1C"))) PPC_WEAK_FUNC(sub_83BF6A1C);
PPC_FUNC_IMPL(__imp__sub_83BF6A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A20"))) PPC_WEAK_FUNC(sub_83BF6A20);
PPC_FUNC_IMPL(__imp__sub_83BF6A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4080
	ctx.r3.s64 = ctx.r11.s64 + -4080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A2C"))) PPC_WEAK_FUNC(sub_83BF6A2C);
PPC_FUNC_IMPL(__imp__sub_83BF6A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A30"))) PPC_WEAK_FUNC(sub_83BF6A30);
PPC_FUNC_IMPL(__imp__sub_83BF6A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4072
	ctx.r3.s64 = ctx.r11.s64 + -4072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A3C"))) PPC_WEAK_FUNC(sub_83BF6A3C);
PPC_FUNC_IMPL(__imp__sub_83BF6A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A40"))) PPC_WEAK_FUNC(sub_83BF6A40);
PPC_FUNC_IMPL(__imp__sub_83BF6A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4064
	ctx.r3.s64 = ctx.r11.s64 + -4064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A4C"))) PPC_WEAK_FUNC(sub_83BF6A4C);
PPC_FUNC_IMPL(__imp__sub_83BF6A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A50"))) PPC_WEAK_FUNC(sub_83BF6A50);
PPC_FUNC_IMPL(__imp__sub_83BF6A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4056
	ctx.r3.s64 = ctx.r11.s64 + -4056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A5C"))) PPC_WEAK_FUNC(sub_83BF6A5C);
PPC_FUNC_IMPL(__imp__sub_83BF6A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A60"))) PPC_WEAK_FUNC(sub_83BF6A60);
PPC_FUNC_IMPL(__imp__sub_83BF6A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4048
	ctx.r3.s64 = ctx.r11.s64 + -4048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A6C"))) PPC_WEAK_FUNC(sub_83BF6A6C);
PPC_FUNC_IMPL(__imp__sub_83BF6A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A70"))) PPC_WEAK_FUNC(sub_83BF6A70);
PPC_FUNC_IMPL(__imp__sub_83BF6A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4040
	ctx.r3.s64 = ctx.r11.s64 + -4040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A7C"))) PPC_WEAK_FUNC(sub_83BF6A7C);
PPC_FUNC_IMPL(__imp__sub_83BF6A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A80"))) PPC_WEAK_FUNC(sub_83BF6A80);
PPC_FUNC_IMPL(__imp__sub_83BF6A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4032
	ctx.r3.s64 = ctx.r11.s64 + -4032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A8C"))) PPC_WEAK_FUNC(sub_83BF6A8C);
PPC_FUNC_IMPL(__imp__sub_83BF6A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6A90"))) PPC_WEAK_FUNC(sub_83BF6A90);
PPC_FUNC_IMPL(__imp__sub_83BF6A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4024
	ctx.r3.s64 = ctx.r11.s64 + -4024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6A9C"))) PPC_WEAK_FUNC(sub_83BF6A9C);
PPC_FUNC_IMPL(__imp__sub_83BF6A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6AA0"))) PPC_WEAK_FUNC(sub_83BF6AA0);
PPC_FUNC_IMPL(__imp__sub_83BF6AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-4016
	ctx.r3.s64 = ctx.r11.s64 + -4016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6AAC"))) PPC_WEAK_FUNC(sub_83BF6AAC);
PPC_FUNC_IMPL(__imp__sub_83BF6AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6AB0"))) PPC_WEAK_FUNC(sub_83BF6AB0);
PPC_FUNC_IMPL(__imp__sub_83BF6AB0) {
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
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// bl 0x83523120
	ctx.lr = 0x83BF6AC8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-4008
	ctx.r3.s64 = ctx.r10.s64 + -4008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6AD4;
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

__attribute__((alias("__imp__sub_83BF6AE4"))) PPC_WEAK_FUNC(sub_83BF6AE4);
PPC_FUNC_IMPL(__imp__sub_83BF6AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6AE8"))) PPC_WEAK_FUNC(sub_83BF6AE8);
PPC_FUNC_IMPL(__imp__sub_83BF6AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1744
	ctx.r7.s64 = ctx.r8.s64 + 1744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6B10"))) PPC_WEAK_FUNC(sub_83BF6B10);
PPC_FUNC_IMPL(__imp__sub_83BF6B10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,6604
	ctx.r6.s64 = ctx.r7.s64 + 6604;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6532(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6532);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
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
	// std r9,6604(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6604, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF6B58"))) PPC_WEAK_FUNC(sub_83BF6B58);
PPC_FUNC_IMPL(__imp__sub_83BF6B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3992
	ctx.r3.s64 = ctx.r11.s64 + -3992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6B64"))) PPC_WEAK_FUNC(sub_83BF6B64);
PPC_FUNC_IMPL(__imp__sub_83BF6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6B68"))) PPC_WEAK_FUNC(sub_83BF6B68);
PPC_FUNC_IMPL(__imp__sub_83BF6B68) {
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
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// bl 0x8259af80
	ctx.lr = 0x83BF6B80;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-3976
	ctx.r3.s64 = ctx.r10.s64 + -3976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF6B8C;
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

__attribute__((alias("__imp__sub_83BF6B9C"))) PPC_WEAK_FUNC(sub_83BF6B9C);
PPC_FUNC_IMPL(__imp__sub_83BF6B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6BA0"))) PPC_WEAK_FUNC(sub_83BF6BA0);
PPC_FUNC_IMPL(__imp__sub_83BF6BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1732
	ctx.r11.s64 = ctx.r8.s64 + 1732;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,6580(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6580);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3984
	ctx.r3.s64 = ctx.r6.s64 + -3984;
	// stw r10,1732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6BD0"))) PPC_WEAK_FUNC(sub_83BF6BD0);
PPC_FUNC_IMPL(__imp__sub_83BF6BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6BDC"))) PPC_WEAK_FUNC(sub_83BF6BDC);
PPC_FUNC_IMPL(__imp__sub_83BF6BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6BE0"))) PPC_WEAK_FUNC(sub_83BF6BE0);
PPC_FUNC_IMPL(__imp__sub_83BF6BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3960
	ctx.r3.s64 = ctx.r11.s64 + -3960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6BEC"))) PPC_WEAK_FUNC(sub_83BF6BEC);
PPC_FUNC_IMPL(__imp__sub_83BF6BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6BF0"))) PPC_WEAK_FUNC(sub_83BF6BF0);
PPC_FUNC_IMPL(__imp__sub_83BF6BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3952
	ctx.r3.s64 = ctx.r11.s64 + -3952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6BFC"))) PPC_WEAK_FUNC(sub_83BF6BFC);
PPC_FUNC_IMPL(__imp__sub_83BF6BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C00"))) PPC_WEAK_FUNC(sub_83BF6C00);
PPC_FUNC_IMPL(__imp__sub_83BF6C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3944
	ctx.r3.s64 = ctx.r11.s64 + -3944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C0C"))) PPC_WEAK_FUNC(sub_83BF6C0C);
PPC_FUNC_IMPL(__imp__sub_83BF6C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C10"))) PPC_WEAK_FUNC(sub_83BF6C10);
PPC_FUNC_IMPL(__imp__sub_83BF6C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3936
	ctx.r3.s64 = ctx.r11.s64 + -3936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C1C"))) PPC_WEAK_FUNC(sub_83BF6C1C);
PPC_FUNC_IMPL(__imp__sub_83BF6C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C20"))) PPC_WEAK_FUNC(sub_83BF6C20);
PPC_FUNC_IMPL(__imp__sub_83BF6C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3928
	ctx.r3.s64 = ctx.r11.s64 + -3928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C2C"))) PPC_WEAK_FUNC(sub_83BF6C2C);
PPC_FUNC_IMPL(__imp__sub_83BF6C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C30"))) PPC_WEAK_FUNC(sub_83BF6C30);
PPC_FUNC_IMPL(__imp__sub_83BF6C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3920
	ctx.r3.s64 = ctx.r11.s64 + -3920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C3C"))) PPC_WEAK_FUNC(sub_83BF6C3C);
PPC_FUNC_IMPL(__imp__sub_83BF6C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C40"))) PPC_WEAK_FUNC(sub_83BF6C40);
PPC_FUNC_IMPL(__imp__sub_83BF6C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3912
	ctx.r3.s64 = ctx.r11.s64 + -3912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C4C"))) PPC_WEAK_FUNC(sub_83BF6C4C);
PPC_FUNC_IMPL(__imp__sub_83BF6C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C50"))) PPC_WEAK_FUNC(sub_83BF6C50);
PPC_FUNC_IMPL(__imp__sub_83BF6C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3904
	ctx.r3.s64 = ctx.r11.s64 + -3904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C5C"))) PPC_WEAK_FUNC(sub_83BF6C5C);
PPC_FUNC_IMPL(__imp__sub_83BF6C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF6C60"))) PPC_WEAK_FUNC(sub_83BF6C60);
PPC_FUNC_IMPL(__imp__sub_83BF6C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-3896
	ctx.r3.s64 = ctx.r11.s64 + -3896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF6C6C"))) PPC_WEAK_FUNC(sub_83BF6C6C);
PPC_FUNC_IMPL(__imp__sub_83BF6C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

