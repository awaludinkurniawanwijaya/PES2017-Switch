#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CD8D34"))) PPC_WEAK_FUNC(sub_83CD8D34);
PPC_FUNC_IMPL(__imp__sub_83CD8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8D38"))) PPC_WEAK_FUNC(sub_83CD8D38);
PPC_FUNC_IMPL(__imp__sub_83CD8D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10296
	ctx.r3.s64 = ctx.r11.s64 + -10296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8D44"))) PPC_WEAK_FUNC(sub_83CD8D44);
PPC_FUNC_IMPL(__imp__sub_83CD8D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8D48"))) PPC_WEAK_FUNC(sub_83CD8D48);
PPC_FUNC_IMPL(__imp__sub_83CD8D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8D54"))) PPC_WEAK_FUNC(sub_83CD8D54);
PPC_FUNC_IMPL(__imp__sub_83CD8D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8D58"))) PPC_WEAK_FUNC(sub_83CD8D58);
PPC_FUNC_IMPL(__imp__sub_83CD8D58) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16144
	ctx.r3.s64 = ctx.r11.s64 + 16144;
	// bl 0x83523120
	ctx.lr = 0x83CD8D70;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-10280
	ctx.r3.s64 = ctx.r10.s64 + -10280;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD8D7C;
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

__attribute__((alias("__imp__sub_83CD8D8C"))) PPC_WEAK_FUNC(sub_83CD8D8C);
PPC_FUNC_IMPL(__imp__sub_83CD8D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8D90"))) PPC_WEAK_FUNC(sub_83CD8D90);
PPC_FUNC_IMPL(__imp__sub_83CD8D90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16160
	ctx.r7.s64 = ctx.r8.s64 + 16160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD8DB8"))) PPC_WEAK_FUNC(sub_83CD8DB8);
PPC_FUNC_IMPL(__imp__sub_83CD8DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,30060
	ctx.r6.s64 = ctx.r7.s64 + 30060;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29988(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29988);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16160);
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
	// std r9,30060(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30060, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD8E00"))) PPC_WEAK_FUNC(sub_83CD8E00);
PPC_FUNC_IMPL(__imp__sub_83CD8E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10264
	ctx.r3.s64 = ctx.r11.s64 + -10264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8E0C"))) PPC_WEAK_FUNC(sub_83CD8E0C);
PPC_FUNC_IMPL(__imp__sub_83CD8E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8E10"))) PPC_WEAK_FUNC(sub_83CD8E10);
PPC_FUNC_IMPL(__imp__sub_83CD8E10) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16168
	ctx.r3.s64 = ctx.r11.s64 + 16168;
	// bl 0x8259af80
	ctx.lr = 0x83CD8E28;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-10248
	ctx.r3.s64 = ctx.r10.s64 + -10248;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD8E34;
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

__attribute__((alias("__imp__sub_83CD8E44"))) PPC_WEAK_FUNC(sub_83CD8E44);
PPC_FUNC_IMPL(__imp__sub_83CD8E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8E48"))) PPC_WEAK_FUNC(sub_83CD8E48);
PPC_FUNC_IMPL(__imp__sub_83CD8E48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16148
	ctx.r11.s64 = ctx.r8.s64 + 16148;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,30036(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30036);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10256
	ctx.r3.s64 = ctx.r6.s64 + -10256;
	// stw r10,16148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8E78"))) PPC_WEAK_FUNC(sub_83CD8E78);
PPC_FUNC_IMPL(__imp__sub_83CD8E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8E84"))) PPC_WEAK_FUNC(sub_83CD8E84);
PPC_FUNC_IMPL(__imp__sub_83CD8E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8E88"))) PPC_WEAK_FUNC(sub_83CD8E88);
PPC_FUNC_IMPL(__imp__sub_83CD8E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8E94"))) PPC_WEAK_FUNC(sub_83CD8E94);
PPC_FUNC_IMPL(__imp__sub_83CD8E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8E98"))) PPC_WEAK_FUNC(sub_83CD8E98);
PPC_FUNC_IMPL(__imp__sub_83CD8E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10224
	ctx.r3.s64 = ctx.r11.s64 + -10224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8EA4"))) PPC_WEAK_FUNC(sub_83CD8EA4);
PPC_FUNC_IMPL(__imp__sub_83CD8EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8EA8"))) PPC_WEAK_FUNC(sub_83CD8EA8);
PPC_FUNC_IMPL(__imp__sub_83CD8EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8EB4"))) PPC_WEAK_FUNC(sub_83CD8EB4);
PPC_FUNC_IMPL(__imp__sub_83CD8EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8EB8"))) PPC_WEAK_FUNC(sub_83CD8EB8);
PPC_FUNC_IMPL(__imp__sub_83CD8EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10208
	ctx.r3.s64 = ctx.r11.s64 + -10208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8EC4"))) PPC_WEAK_FUNC(sub_83CD8EC4);
PPC_FUNC_IMPL(__imp__sub_83CD8EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8EC8"))) PPC_WEAK_FUNC(sub_83CD8EC8);
PPC_FUNC_IMPL(__imp__sub_83CD8EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10200
	ctx.r3.s64 = ctx.r11.s64 + -10200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8ED4"))) PPC_WEAK_FUNC(sub_83CD8ED4);
PPC_FUNC_IMPL(__imp__sub_83CD8ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8ED8"))) PPC_WEAK_FUNC(sub_83CD8ED8);
PPC_FUNC_IMPL(__imp__sub_83CD8ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8EE4"))) PPC_WEAK_FUNC(sub_83CD8EE4);
PPC_FUNC_IMPL(__imp__sub_83CD8EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8EE8"))) PPC_WEAK_FUNC(sub_83CD8EE8);
PPC_FUNC_IMPL(__imp__sub_83CD8EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10184
	ctx.r3.s64 = ctx.r11.s64 + -10184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8EF4"))) PPC_WEAK_FUNC(sub_83CD8EF4);
PPC_FUNC_IMPL(__imp__sub_83CD8EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8EF8"))) PPC_WEAK_FUNC(sub_83CD8EF8);
PPC_FUNC_IMPL(__imp__sub_83CD8EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10176
	ctx.r3.s64 = ctx.r11.s64 + -10176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8F04"))) PPC_WEAK_FUNC(sub_83CD8F04);
PPC_FUNC_IMPL(__imp__sub_83CD8F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8F08"))) PPC_WEAK_FUNC(sub_83CD8F08);
PPC_FUNC_IMPL(__imp__sub_83CD8F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8F14"))) PPC_WEAK_FUNC(sub_83CD8F14);
PPC_FUNC_IMPL(__imp__sub_83CD8F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8F18"))) PPC_WEAK_FUNC(sub_83CD8F18);
PPC_FUNC_IMPL(__imp__sub_83CD8F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10160
	ctx.r3.s64 = ctx.r11.s64 + -10160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8F24"))) PPC_WEAK_FUNC(sub_83CD8F24);
PPC_FUNC_IMPL(__imp__sub_83CD8F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8F28"))) PPC_WEAK_FUNC(sub_83CD8F28);
PPC_FUNC_IMPL(__imp__sub_83CD8F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10152
	ctx.r3.s64 = ctx.r11.s64 + -10152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8F34"))) PPC_WEAK_FUNC(sub_83CD8F34);
PPC_FUNC_IMPL(__imp__sub_83CD8F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8F38"))) PPC_WEAK_FUNC(sub_83CD8F38);
PPC_FUNC_IMPL(__imp__sub_83CD8F38) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// bl 0x83523120
	ctx.lr = 0x83CD8F50;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-10144
	ctx.r3.s64 = ctx.r10.s64 + -10144;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD8F5C;
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

__attribute__((alias("__imp__sub_83CD8F6C"))) PPC_WEAK_FUNC(sub_83CD8F6C);
PPC_FUNC_IMPL(__imp__sub_83CD8F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8F70"))) PPC_WEAK_FUNC(sub_83CD8F70);
PPC_FUNC_IMPL(__imp__sub_83CD8F70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16528
	ctx.r7.s64 = ctx.r8.s64 + 16528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD8F98"))) PPC_WEAK_FUNC(sub_83CD8F98);
PPC_FUNC_IMPL(__imp__sub_83CD8F98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,30188
	ctx.r6.s64 = ctx.r7.s64 + 30188;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16528);
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
	// std r9,30188(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30188, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD8FE0"))) PPC_WEAK_FUNC(sub_83CD8FE0);
PPC_FUNC_IMPL(__imp__sub_83CD8FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD8FEC"))) PPC_WEAK_FUNC(sub_83CD8FEC);
PPC_FUNC_IMPL(__imp__sub_83CD8FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD8FF0"))) PPC_WEAK_FUNC(sub_83CD8FF0);
PPC_FUNC_IMPL(__imp__sub_83CD8FF0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16536
	ctx.r3.s64 = ctx.r11.s64 + 16536;
	// bl 0x8259af80
	ctx.lr = 0x83CD9008;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-10112
	ctx.r3.s64 = ctx.r10.s64 + -10112;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9014;
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

__attribute__((alias("__imp__sub_83CD9024"))) PPC_WEAK_FUNC(sub_83CD9024);
PPC_FUNC_IMPL(__imp__sub_83CD9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9028"))) PPC_WEAK_FUNC(sub_83CD9028);
PPC_FUNC_IMPL(__imp__sub_83CD9028) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16516
	ctx.r11.s64 = ctx.r8.s64 + 16516;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,30164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30164);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10120
	ctx.r3.s64 = ctx.r6.s64 + -10120;
	// stw r10,16516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9058"))) PPC_WEAK_FUNC(sub_83CD9058);
PPC_FUNC_IMPL(__imp__sub_83CD9058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10104
	ctx.r3.s64 = ctx.r11.s64 + -10104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9064"))) PPC_WEAK_FUNC(sub_83CD9064);
PPC_FUNC_IMPL(__imp__sub_83CD9064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9068"))) PPC_WEAK_FUNC(sub_83CD9068);
PPC_FUNC_IMPL(__imp__sub_83CD9068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10096
	ctx.r3.s64 = ctx.r11.s64 + -10096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9074"))) PPC_WEAK_FUNC(sub_83CD9074);
PPC_FUNC_IMPL(__imp__sub_83CD9074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9078"))) PPC_WEAK_FUNC(sub_83CD9078);
PPC_FUNC_IMPL(__imp__sub_83CD9078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10088
	ctx.r3.s64 = ctx.r11.s64 + -10088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9084"))) PPC_WEAK_FUNC(sub_83CD9084);
PPC_FUNC_IMPL(__imp__sub_83CD9084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9088"))) PPC_WEAK_FUNC(sub_83CD9088);
PPC_FUNC_IMPL(__imp__sub_83CD9088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10080
	ctx.r3.s64 = ctx.r11.s64 + -10080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9094"))) PPC_WEAK_FUNC(sub_83CD9094);
PPC_FUNC_IMPL(__imp__sub_83CD9094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9098"))) PPC_WEAK_FUNC(sub_83CD9098);
PPC_FUNC_IMPL(__imp__sub_83CD9098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10072
	ctx.r3.s64 = ctx.r11.s64 + -10072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD90A4"))) PPC_WEAK_FUNC(sub_83CD90A4);
PPC_FUNC_IMPL(__imp__sub_83CD90A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD90A8"))) PPC_WEAK_FUNC(sub_83CD90A8);
PPC_FUNC_IMPL(__imp__sub_83CD90A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10064
	ctx.r3.s64 = ctx.r11.s64 + -10064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD90B4"))) PPC_WEAK_FUNC(sub_83CD90B4);
PPC_FUNC_IMPL(__imp__sub_83CD90B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD90B8"))) PPC_WEAK_FUNC(sub_83CD90B8);
PPC_FUNC_IMPL(__imp__sub_83CD90B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10056
	ctx.r3.s64 = ctx.r11.s64 + -10056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD90C4"))) PPC_WEAK_FUNC(sub_83CD90C4);
PPC_FUNC_IMPL(__imp__sub_83CD90C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD90C8"))) PPC_WEAK_FUNC(sub_83CD90C8);
PPC_FUNC_IMPL(__imp__sub_83CD90C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10048
	ctx.r3.s64 = ctx.r11.s64 + -10048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD90D4"))) PPC_WEAK_FUNC(sub_83CD90D4);
PPC_FUNC_IMPL(__imp__sub_83CD90D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD90D8"))) PPC_WEAK_FUNC(sub_83CD90D8);
PPC_FUNC_IMPL(__imp__sub_83CD90D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10040
	ctx.r3.s64 = ctx.r11.s64 + -10040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD90E4"))) PPC_WEAK_FUNC(sub_83CD90E4);
PPC_FUNC_IMPL(__imp__sub_83CD90E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD90E8"))) PPC_WEAK_FUNC(sub_83CD90E8);
PPC_FUNC_IMPL(__imp__sub_83CD90E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10032
	ctx.r3.s64 = ctx.r11.s64 + -10032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD90F4"))) PPC_WEAK_FUNC(sub_83CD90F4);
PPC_FUNC_IMPL(__imp__sub_83CD90F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD90F8"))) PPC_WEAK_FUNC(sub_83CD90F8);
PPC_FUNC_IMPL(__imp__sub_83CD90F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9104"))) PPC_WEAK_FUNC(sub_83CD9104);
PPC_FUNC_IMPL(__imp__sub_83CD9104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9108"))) PPC_WEAK_FUNC(sub_83CD9108);
PPC_FUNC_IMPL(__imp__sub_83CD9108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-10016
	ctx.r3.s64 = ctx.r11.s64 + -10016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9114"))) PPC_WEAK_FUNC(sub_83CD9114);
PPC_FUNC_IMPL(__imp__sub_83CD9114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9118"))) PPC_WEAK_FUNC(sub_83CD9118);
PPC_FUNC_IMPL(__imp__sub_83CD9118) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16880
	ctx.r3.s64 = ctx.r11.s64 + 16880;
	// bl 0x83523120
	ctx.lr = 0x83CD9130;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-10008
	ctx.r3.s64 = ctx.r10.s64 + -10008;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD913C;
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

__attribute__((alias("__imp__sub_83CD914C"))) PPC_WEAK_FUNC(sub_83CD914C);
PPC_FUNC_IMPL(__imp__sub_83CD914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9150"))) PPC_WEAK_FUNC(sub_83CD9150);
PPC_FUNC_IMPL(__imp__sub_83CD9150) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16884
	ctx.r7.s64 = ctx.r8.s64 + 16884;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16884);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16884, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9178"))) PPC_WEAK_FUNC(sub_83CD9178);
PPC_FUNC_IMPL(__imp__sub_83CD9178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9992
	ctx.r3.s64 = ctx.r11.s64 + -9992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9184"))) PPC_WEAK_FUNC(sub_83CD9184);
PPC_FUNC_IMPL(__imp__sub_83CD9184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9188"))) PPC_WEAK_FUNC(sub_83CD9188);
PPC_FUNC_IMPL(__imp__sub_83CD9188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9984
	ctx.r3.s64 = ctx.r11.s64 + -9984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9194"))) PPC_WEAK_FUNC(sub_83CD9194);
PPC_FUNC_IMPL(__imp__sub_83CD9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9198"))) PPC_WEAK_FUNC(sub_83CD9198);
PPC_FUNC_IMPL(__imp__sub_83CD9198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD91A4"))) PPC_WEAK_FUNC(sub_83CD91A4);
PPC_FUNC_IMPL(__imp__sub_83CD91A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD91A8"))) PPC_WEAK_FUNC(sub_83CD91A8);
PPC_FUNC_IMPL(__imp__sub_83CD91A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9968
	ctx.r3.s64 = ctx.r11.s64 + -9968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD91B4"))) PPC_WEAK_FUNC(sub_83CD91B4);
PPC_FUNC_IMPL(__imp__sub_83CD91B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD91B8"))) PPC_WEAK_FUNC(sub_83CD91B8);
PPC_FUNC_IMPL(__imp__sub_83CD91B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9960
	ctx.r3.s64 = ctx.r11.s64 + -9960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD91C4"))) PPC_WEAK_FUNC(sub_83CD91C4);
PPC_FUNC_IMPL(__imp__sub_83CD91C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD91C8"))) PPC_WEAK_FUNC(sub_83CD91C8);
PPC_FUNC_IMPL(__imp__sub_83CD91C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD91D4"))) PPC_WEAK_FUNC(sub_83CD91D4);
PPC_FUNC_IMPL(__imp__sub_83CD91D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD91D8"))) PPC_WEAK_FUNC(sub_83CD91D8);
PPC_FUNC_IMPL(__imp__sub_83CD91D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9944
	ctx.r3.s64 = ctx.r11.s64 + -9944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD91E4"))) PPC_WEAK_FUNC(sub_83CD91E4);
PPC_FUNC_IMPL(__imp__sub_83CD91E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD91E8"))) PPC_WEAK_FUNC(sub_83CD91E8);
PPC_FUNC_IMPL(__imp__sub_83CD91E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9936
	ctx.r3.s64 = ctx.r11.s64 + -9936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD91F4"))) PPC_WEAK_FUNC(sub_83CD91F4);
PPC_FUNC_IMPL(__imp__sub_83CD91F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD91F8"))) PPC_WEAK_FUNC(sub_83CD91F8);
PPC_FUNC_IMPL(__imp__sub_83CD91F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9928
	ctx.r3.s64 = ctx.r11.s64 + -9928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9204"))) PPC_WEAK_FUNC(sub_83CD9204);
PPC_FUNC_IMPL(__imp__sub_83CD9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9208"))) PPC_WEAK_FUNC(sub_83CD9208);
PPC_FUNC_IMPL(__imp__sub_83CD9208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9920
	ctx.r3.s64 = ctx.r11.s64 + -9920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9214"))) PPC_WEAK_FUNC(sub_83CD9214);
PPC_FUNC_IMPL(__imp__sub_83CD9214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9218"))) PPC_WEAK_FUNC(sub_83CD9218);
PPC_FUNC_IMPL(__imp__sub_83CD9218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9912
	ctx.r3.s64 = ctx.r11.s64 + -9912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9224"))) PPC_WEAK_FUNC(sub_83CD9224);
PPC_FUNC_IMPL(__imp__sub_83CD9224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9228"))) PPC_WEAK_FUNC(sub_83CD9228);
PPC_FUNC_IMPL(__imp__sub_83CD9228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9904
	ctx.r3.s64 = ctx.r11.s64 + -9904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9234"))) PPC_WEAK_FUNC(sub_83CD9234);
PPC_FUNC_IMPL(__imp__sub_83CD9234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9238"))) PPC_WEAK_FUNC(sub_83CD9238);
PPC_FUNC_IMPL(__imp__sub_83CD9238) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16892
	ctx.r3.s64 = ctx.r11.s64 + 16892;
	// bl 0x83523120
	ctx.lr = 0x83CD9250;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9896
	ctx.r3.s64 = ctx.r10.s64 + -9896;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD925C;
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

__attribute__((alias("__imp__sub_83CD926C"))) PPC_WEAK_FUNC(sub_83CD926C);
PPC_FUNC_IMPL(__imp__sub_83CD926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9270"))) PPC_WEAK_FUNC(sub_83CD9270);
PPC_FUNC_IMPL(__imp__sub_83CD9270) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16896
	ctx.r7.s64 = ctx.r8.s64 + 16896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9298"))) PPC_WEAK_FUNC(sub_83CD9298);
PPC_FUNC_IMPL(__imp__sub_83CD9298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9880
	ctx.r3.s64 = ctx.r11.s64 + -9880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD92A4"))) PPC_WEAK_FUNC(sub_83CD92A4);
PPC_FUNC_IMPL(__imp__sub_83CD92A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD92A8"))) PPC_WEAK_FUNC(sub_83CD92A8);
PPC_FUNC_IMPL(__imp__sub_83CD92A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9872
	ctx.r3.s64 = ctx.r11.s64 + -9872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD92B4"))) PPC_WEAK_FUNC(sub_83CD92B4);
PPC_FUNC_IMPL(__imp__sub_83CD92B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD92B8"))) PPC_WEAK_FUNC(sub_83CD92B8);
PPC_FUNC_IMPL(__imp__sub_83CD92B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9864
	ctx.r3.s64 = ctx.r11.s64 + -9864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD92C4"))) PPC_WEAK_FUNC(sub_83CD92C4);
PPC_FUNC_IMPL(__imp__sub_83CD92C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD92C8"))) PPC_WEAK_FUNC(sub_83CD92C8);
PPC_FUNC_IMPL(__imp__sub_83CD92C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9856
	ctx.r3.s64 = ctx.r11.s64 + -9856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD92D4"))) PPC_WEAK_FUNC(sub_83CD92D4);
PPC_FUNC_IMPL(__imp__sub_83CD92D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD92D8"))) PPC_WEAK_FUNC(sub_83CD92D8);
PPC_FUNC_IMPL(__imp__sub_83CD92D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9848
	ctx.r3.s64 = ctx.r11.s64 + -9848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD92E4"))) PPC_WEAK_FUNC(sub_83CD92E4);
PPC_FUNC_IMPL(__imp__sub_83CD92E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD92E8"))) PPC_WEAK_FUNC(sub_83CD92E8);
PPC_FUNC_IMPL(__imp__sub_83CD92E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9840
	ctx.r3.s64 = ctx.r11.s64 + -9840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD92F4"))) PPC_WEAK_FUNC(sub_83CD92F4);
PPC_FUNC_IMPL(__imp__sub_83CD92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD92F8"))) PPC_WEAK_FUNC(sub_83CD92F8);
PPC_FUNC_IMPL(__imp__sub_83CD92F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9832
	ctx.r3.s64 = ctx.r11.s64 + -9832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9304"))) PPC_WEAK_FUNC(sub_83CD9304);
PPC_FUNC_IMPL(__imp__sub_83CD9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9308"))) PPC_WEAK_FUNC(sub_83CD9308);
PPC_FUNC_IMPL(__imp__sub_83CD9308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9824
	ctx.r3.s64 = ctx.r11.s64 + -9824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9314"))) PPC_WEAK_FUNC(sub_83CD9314);
PPC_FUNC_IMPL(__imp__sub_83CD9314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9318"))) PPC_WEAK_FUNC(sub_83CD9318);
PPC_FUNC_IMPL(__imp__sub_83CD9318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9816
	ctx.r3.s64 = ctx.r11.s64 + -9816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9324"))) PPC_WEAK_FUNC(sub_83CD9324);
PPC_FUNC_IMPL(__imp__sub_83CD9324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9328"))) PPC_WEAK_FUNC(sub_83CD9328);
PPC_FUNC_IMPL(__imp__sub_83CD9328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9808
	ctx.r3.s64 = ctx.r11.s64 + -9808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9334"))) PPC_WEAK_FUNC(sub_83CD9334);
PPC_FUNC_IMPL(__imp__sub_83CD9334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9338"))) PPC_WEAK_FUNC(sub_83CD9338);
PPC_FUNC_IMPL(__imp__sub_83CD9338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9800
	ctx.r3.s64 = ctx.r11.s64 + -9800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9344"))) PPC_WEAK_FUNC(sub_83CD9344);
PPC_FUNC_IMPL(__imp__sub_83CD9344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9348"))) PPC_WEAK_FUNC(sub_83CD9348);
PPC_FUNC_IMPL(__imp__sub_83CD9348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9354"))) PPC_WEAK_FUNC(sub_83CD9354);
PPC_FUNC_IMPL(__imp__sub_83CD9354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9358"))) PPC_WEAK_FUNC(sub_83CD9358);
PPC_FUNC_IMPL(__imp__sub_83CD9358) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16904
	ctx.r3.s64 = ctx.r11.s64 + 16904;
	// bl 0x83523120
	ctx.lr = 0x83CD9370;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9784
	ctx.r3.s64 = ctx.r10.s64 + -9784;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD937C;
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

__attribute__((alias("__imp__sub_83CD938C"))) PPC_WEAK_FUNC(sub_83CD938C);
PPC_FUNC_IMPL(__imp__sub_83CD938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9390"))) PPC_WEAK_FUNC(sub_83CD9390);
PPC_FUNC_IMPL(__imp__sub_83CD9390) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16908
	ctx.r7.s64 = ctx.r8.s64 + 16908;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16908(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16908);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16908(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16908, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD93B8"))) PPC_WEAK_FUNC(sub_83CD93B8);
PPC_FUNC_IMPL(__imp__sub_83CD93B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9768
	ctx.r3.s64 = ctx.r11.s64 + -9768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD93C4"))) PPC_WEAK_FUNC(sub_83CD93C4);
PPC_FUNC_IMPL(__imp__sub_83CD93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD93C8"))) PPC_WEAK_FUNC(sub_83CD93C8);
PPC_FUNC_IMPL(__imp__sub_83CD93C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD93D4"))) PPC_WEAK_FUNC(sub_83CD93D4);
PPC_FUNC_IMPL(__imp__sub_83CD93D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD93D8"))) PPC_WEAK_FUNC(sub_83CD93D8);
PPC_FUNC_IMPL(__imp__sub_83CD93D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9752
	ctx.r3.s64 = ctx.r11.s64 + -9752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD93E4"))) PPC_WEAK_FUNC(sub_83CD93E4);
PPC_FUNC_IMPL(__imp__sub_83CD93E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD93E8"))) PPC_WEAK_FUNC(sub_83CD93E8);
PPC_FUNC_IMPL(__imp__sub_83CD93E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9744
	ctx.r3.s64 = ctx.r11.s64 + -9744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD93F4"))) PPC_WEAK_FUNC(sub_83CD93F4);
PPC_FUNC_IMPL(__imp__sub_83CD93F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD93F8"))) PPC_WEAK_FUNC(sub_83CD93F8);
PPC_FUNC_IMPL(__imp__sub_83CD93F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9736
	ctx.r3.s64 = ctx.r11.s64 + -9736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9404"))) PPC_WEAK_FUNC(sub_83CD9404);
PPC_FUNC_IMPL(__imp__sub_83CD9404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9408"))) PPC_WEAK_FUNC(sub_83CD9408);
PPC_FUNC_IMPL(__imp__sub_83CD9408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9728
	ctx.r3.s64 = ctx.r11.s64 + -9728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9414"))) PPC_WEAK_FUNC(sub_83CD9414);
PPC_FUNC_IMPL(__imp__sub_83CD9414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9418"))) PPC_WEAK_FUNC(sub_83CD9418);
PPC_FUNC_IMPL(__imp__sub_83CD9418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9720
	ctx.r3.s64 = ctx.r11.s64 + -9720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9424"))) PPC_WEAK_FUNC(sub_83CD9424);
PPC_FUNC_IMPL(__imp__sub_83CD9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9428"))) PPC_WEAK_FUNC(sub_83CD9428);
PPC_FUNC_IMPL(__imp__sub_83CD9428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9712
	ctx.r3.s64 = ctx.r11.s64 + -9712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9434"))) PPC_WEAK_FUNC(sub_83CD9434);
PPC_FUNC_IMPL(__imp__sub_83CD9434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9438"))) PPC_WEAK_FUNC(sub_83CD9438);
PPC_FUNC_IMPL(__imp__sub_83CD9438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9704
	ctx.r3.s64 = ctx.r11.s64 + -9704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9444"))) PPC_WEAK_FUNC(sub_83CD9444);
PPC_FUNC_IMPL(__imp__sub_83CD9444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9448"))) PPC_WEAK_FUNC(sub_83CD9448);
PPC_FUNC_IMPL(__imp__sub_83CD9448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9696
	ctx.r3.s64 = ctx.r11.s64 + -9696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9454"))) PPC_WEAK_FUNC(sub_83CD9454);
PPC_FUNC_IMPL(__imp__sub_83CD9454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9458"))) PPC_WEAK_FUNC(sub_83CD9458);
PPC_FUNC_IMPL(__imp__sub_83CD9458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9688
	ctx.r3.s64 = ctx.r11.s64 + -9688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9464"))) PPC_WEAK_FUNC(sub_83CD9464);
PPC_FUNC_IMPL(__imp__sub_83CD9464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9468"))) PPC_WEAK_FUNC(sub_83CD9468);
PPC_FUNC_IMPL(__imp__sub_83CD9468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9680
	ctx.r3.s64 = ctx.r11.s64 + -9680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9474"))) PPC_WEAK_FUNC(sub_83CD9474);
PPC_FUNC_IMPL(__imp__sub_83CD9474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9478"))) PPC_WEAK_FUNC(sub_83CD9478);
PPC_FUNC_IMPL(__imp__sub_83CD9478) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16920
	ctx.r3.s64 = ctx.r11.s64 + 16920;
	// bl 0x83523120
	ctx.lr = 0x83CD9490;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9672
	ctx.r3.s64 = ctx.r10.s64 + -9672;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD949C;
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

__attribute__((alias("__imp__sub_83CD94AC"))) PPC_WEAK_FUNC(sub_83CD94AC);
PPC_FUNC_IMPL(__imp__sub_83CD94AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD94B0"))) PPC_WEAK_FUNC(sub_83CD94B0);
PPC_FUNC_IMPL(__imp__sub_83CD94B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16936
	ctx.r7.s64 = ctx.r8.s64 + 16936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD94D8"))) PPC_WEAK_FUNC(sub_83CD94D8);
PPC_FUNC_IMPL(__imp__sub_83CD94D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,6436
	ctx.r6.s64 = ctx.r7.s64 + 6436;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6364(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6364);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16936);
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
	// std r9,6436(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6436, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9520"))) PPC_WEAK_FUNC(sub_83CD9520);
PPC_FUNC_IMPL(__imp__sub_83CD9520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9656
	ctx.r3.s64 = ctx.r11.s64 + -9656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD952C"))) PPC_WEAK_FUNC(sub_83CD952C);
PPC_FUNC_IMPL(__imp__sub_83CD952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9530"))) PPC_WEAK_FUNC(sub_83CD9530);
PPC_FUNC_IMPL(__imp__sub_83CD9530) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16944
	ctx.r3.s64 = ctx.r11.s64 + 16944;
	// bl 0x8259af80
	ctx.lr = 0x83CD9548;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9640
	ctx.r3.s64 = ctx.r10.s64 + -9640;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9554;
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

__attribute__((alias("__imp__sub_83CD9564"))) PPC_WEAK_FUNC(sub_83CD9564);
PPC_FUNC_IMPL(__imp__sub_83CD9564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9568"))) PPC_WEAK_FUNC(sub_83CD9568);
PPC_FUNC_IMPL(__imp__sub_83CD9568) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16924
	ctx.r11.s64 = ctx.r8.s64 + 16924;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,6412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6412);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9648
	ctx.r3.s64 = ctx.r6.s64 + -9648;
	// stw r10,16924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9598"))) PPC_WEAK_FUNC(sub_83CD9598);
PPC_FUNC_IMPL(__imp__sub_83CD9598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9632
	ctx.r3.s64 = ctx.r11.s64 + -9632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD95A4"))) PPC_WEAK_FUNC(sub_83CD95A4);
PPC_FUNC_IMPL(__imp__sub_83CD95A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD95A8"))) PPC_WEAK_FUNC(sub_83CD95A8);
PPC_FUNC_IMPL(__imp__sub_83CD95A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD95B4"))) PPC_WEAK_FUNC(sub_83CD95B4);
PPC_FUNC_IMPL(__imp__sub_83CD95B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD95B8"))) PPC_WEAK_FUNC(sub_83CD95B8);
PPC_FUNC_IMPL(__imp__sub_83CD95B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9616
	ctx.r3.s64 = ctx.r11.s64 + -9616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD95C4"))) PPC_WEAK_FUNC(sub_83CD95C4);
PPC_FUNC_IMPL(__imp__sub_83CD95C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD95C8"))) PPC_WEAK_FUNC(sub_83CD95C8);
PPC_FUNC_IMPL(__imp__sub_83CD95C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9608
	ctx.r3.s64 = ctx.r11.s64 + -9608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD95D4"))) PPC_WEAK_FUNC(sub_83CD95D4);
PPC_FUNC_IMPL(__imp__sub_83CD95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD95D8"))) PPC_WEAK_FUNC(sub_83CD95D8);
PPC_FUNC_IMPL(__imp__sub_83CD95D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9600
	ctx.r3.s64 = ctx.r11.s64 + -9600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD95E4"))) PPC_WEAK_FUNC(sub_83CD95E4);
PPC_FUNC_IMPL(__imp__sub_83CD95E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD95E8"))) PPC_WEAK_FUNC(sub_83CD95E8);
PPC_FUNC_IMPL(__imp__sub_83CD95E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9592
	ctx.r3.s64 = ctx.r11.s64 + -9592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD95F4"))) PPC_WEAK_FUNC(sub_83CD95F4);
PPC_FUNC_IMPL(__imp__sub_83CD95F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD95F8"))) PPC_WEAK_FUNC(sub_83CD95F8);
PPC_FUNC_IMPL(__imp__sub_83CD95F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9584
	ctx.r3.s64 = ctx.r11.s64 + -9584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9604"))) PPC_WEAK_FUNC(sub_83CD9604);
PPC_FUNC_IMPL(__imp__sub_83CD9604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9608"))) PPC_WEAK_FUNC(sub_83CD9608);
PPC_FUNC_IMPL(__imp__sub_83CD9608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9576
	ctx.r3.s64 = ctx.r11.s64 + -9576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9614"))) PPC_WEAK_FUNC(sub_83CD9614);
PPC_FUNC_IMPL(__imp__sub_83CD9614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9618"))) PPC_WEAK_FUNC(sub_83CD9618);
PPC_FUNC_IMPL(__imp__sub_83CD9618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9568
	ctx.r3.s64 = ctx.r11.s64 + -9568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9624"))) PPC_WEAK_FUNC(sub_83CD9624);
PPC_FUNC_IMPL(__imp__sub_83CD9624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9628"))) PPC_WEAK_FUNC(sub_83CD9628);
PPC_FUNC_IMPL(__imp__sub_83CD9628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9560
	ctx.r3.s64 = ctx.r11.s64 + -9560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9634"))) PPC_WEAK_FUNC(sub_83CD9634);
PPC_FUNC_IMPL(__imp__sub_83CD9634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9638"))) PPC_WEAK_FUNC(sub_83CD9638);
PPC_FUNC_IMPL(__imp__sub_83CD9638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9644"))) PPC_WEAK_FUNC(sub_83CD9644);
PPC_FUNC_IMPL(__imp__sub_83CD9644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9648"))) PPC_WEAK_FUNC(sub_83CD9648);
PPC_FUNC_IMPL(__imp__sub_83CD9648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9544
	ctx.r3.s64 = ctx.r11.s64 + -9544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9654"))) PPC_WEAK_FUNC(sub_83CD9654);
PPC_FUNC_IMPL(__imp__sub_83CD9654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9658"))) PPC_WEAK_FUNC(sub_83CD9658);
PPC_FUNC_IMPL(__imp__sub_83CD9658) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,17312
	ctx.r3.s64 = ctx.r11.s64 + 17312;
	// bl 0x83523120
	ctx.lr = 0x83CD9670;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9536
	ctx.r3.s64 = ctx.r10.s64 + -9536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD967C;
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

__attribute__((alias("__imp__sub_83CD968C"))) PPC_WEAK_FUNC(sub_83CD968C);
PPC_FUNC_IMPL(__imp__sub_83CD968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9690"))) PPC_WEAK_FUNC(sub_83CD9690);
PPC_FUNC_IMPL(__imp__sub_83CD9690) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17328
	ctx.r7.s64 = ctx.r8.s64 + 17328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17328);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17328, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD96B8"))) PPC_WEAK_FUNC(sub_83CD96B8);
PPC_FUNC_IMPL(__imp__sub_83CD96B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,6568
	ctx.r6.s64 = ctx.r7.s64 + 6568;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6496(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6496);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17328);
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
	// std r9,6568(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6568, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9700"))) PPC_WEAK_FUNC(sub_83CD9700);
PPC_FUNC_IMPL(__imp__sub_83CD9700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9520
	ctx.r3.s64 = ctx.r11.s64 + -9520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD970C"))) PPC_WEAK_FUNC(sub_83CD970C);
PPC_FUNC_IMPL(__imp__sub_83CD970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9710"))) PPC_WEAK_FUNC(sub_83CD9710);
PPC_FUNC_IMPL(__imp__sub_83CD9710) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,17336
	ctx.r3.s64 = ctx.r11.s64 + 17336;
	// bl 0x8259af80
	ctx.lr = 0x83CD9728;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9504
	ctx.r3.s64 = ctx.r10.s64 + -9504;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9734;
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

__attribute__((alias("__imp__sub_83CD9744"))) PPC_WEAK_FUNC(sub_83CD9744);
PPC_FUNC_IMPL(__imp__sub_83CD9744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9748"))) PPC_WEAK_FUNC(sub_83CD9748);
PPC_FUNC_IMPL(__imp__sub_83CD9748) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17316
	ctx.r11.s64 = ctx.r8.s64 + 17316;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,6544(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6544);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9512
	ctx.r3.s64 = ctx.r6.s64 + -9512;
	// stw r10,17316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9778"))) PPC_WEAK_FUNC(sub_83CD9778);
PPC_FUNC_IMPL(__imp__sub_83CD9778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9496
	ctx.r3.s64 = ctx.r11.s64 + -9496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9784"))) PPC_WEAK_FUNC(sub_83CD9784);
PPC_FUNC_IMPL(__imp__sub_83CD9784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9788"))) PPC_WEAK_FUNC(sub_83CD9788);
PPC_FUNC_IMPL(__imp__sub_83CD9788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9488
	ctx.r3.s64 = ctx.r11.s64 + -9488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9794"))) PPC_WEAK_FUNC(sub_83CD9794);
PPC_FUNC_IMPL(__imp__sub_83CD9794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9798"))) PPC_WEAK_FUNC(sub_83CD9798);
PPC_FUNC_IMPL(__imp__sub_83CD9798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD97A4"))) PPC_WEAK_FUNC(sub_83CD97A4);
PPC_FUNC_IMPL(__imp__sub_83CD97A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD97A8"))) PPC_WEAK_FUNC(sub_83CD97A8);
PPC_FUNC_IMPL(__imp__sub_83CD97A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9472
	ctx.r3.s64 = ctx.r11.s64 + -9472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD97B4"))) PPC_WEAK_FUNC(sub_83CD97B4);
PPC_FUNC_IMPL(__imp__sub_83CD97B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD97B8"))) PPC_WEAK_FUNC(sub_83CD97B8);
PPC_FUNC_IMPL(__imp__sub_83CD97B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD97C4"))) PPC_WEAK_FUNC(sub_83CD97C4);
PPC_FUNC_IMPL(__imp__sub_83CD97C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD97C8"))) PPC_WEAK_FUNC(sub_83CD97C8);
PPC_FUNC_IMPL(__imp__sub_83CD97C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9456
	ctx.r3.s64 = ctx.r11.s64 + -9456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD97D4"))) PPC_WEAK_FUNC(sub_83CD97D4);
PPC_FUNC_IMPL(__imp__sub_83CD97D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD97D8"))) PPC_WEAK_FUNC(sub_83CD97D8);
PPC_FUNC_IMPL(__imp__sub_83CD97D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9448
	ctx.r3.s64 = ctx.r11.s64 + -9448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD97E4"))) PPC_WEAK_FUNC(sub_83CD97E4);
PPC_FUNC_IMPL(__imp__sub_83CD97E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD97E8"))) PPC_WEAK_FUNC(sub_83CD97E8);
PPC_FUNC_IMPL(__imp__sub_83CD97E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9440
	ctx.r3.s64 = ctx.r11.s64 + -9440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD97F4"))) PPC_WEAK_FUNC(sub_83CD97F4);
PPC_FUNC_IMPL(__imp__sub_83CD97F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD97F8"))) PPC_WEAK_FUNC(sub_83CD97F8);
PPC_FUNC_IMPL(__imp__sub_83CD97F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9432
	ctx.r3.s64 = ctx.r11.s64 + -9432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9804"))) PPC_WEAK_FUNC(sub_83CD9804);
PPC_FUNC_IMPL(__imp__sub_83CD9804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9808"))) PPC_WEAK_FUNC(sub_83CD9808);
PPC_FUNC_IMPL(__imp__sub_83CD9808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9424
	ctx.r3.s64 = ctx.r11.s64 + -9424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9814"))) PPC_WEAK_FUNC(sub_83CD9814);
PPC_FUNC_IMPL(__imp__sub_83CD9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9818"))) PPC_WEAK_FUNC(sub_83CD9818);
PPC_FUNC_IMPL(__imp__sub_83CD9818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9824"))) PPC_WEAK_FUNC(sub_83CD9824);
PPC_FUNC_IMPL(__imp__sub_83CD9824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9828"))) PPC_WEAK_FUNC(sub_83CD9828);
PPC_FUNC_IMPL(__imp__sub_83CD9828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9408
	ctx.r3.s64 = ctx.r11.s64 + -9408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9834"))) PPC_WEAK_FUNC(sub_83CD9834);
PPC_FUNC_IMPL(__imp__sub_83CD9834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9838"))) PPC_WEAK_FUNC(sub_83CD9838);
PPC_FUNC_IMPL(__imp__sub_83CD9838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18208
	ctx.r7.s64 = ctx.r8.s64 + 18208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9860"))) PPC_WEAK_FUNC(sub_83CD9860);
PPC_FUNC_IMPL(__imp__sub_83CD9860) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,18192
	ctx.r3.s64 = ctx.r11.s64 + 18192;
	// bl 0x83523120
	ctx.lr = 0x83CD9878;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9400
	ctx.r3.s64 = ctx.r10.s64 + -9400;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9884;
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

__attribute__((alias("__imp__sub_83CD9894"))) PPC_WEAK_FUNC(sub_83CD9894);
PPC_FUNC_IMPL(__imp__sub_83CD9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9898"))) PPC_WEAK_FUNC(sub_83CD9898);
PPC_FUNC_IMPL(__imp__sub_83CD9898) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,6748
	ctx.r6.s64 = ctx.r7.s64 + 6748;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18208);
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
	// std r9,6748(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6748, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD98E0"))) PPC_WEAK_FUNC(sub_83CD98E0);
PPC_FUNC_IMPL(__imp__sub_83CD98E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9384
	ctx.r3.s64 = ctx.r11.s64 + -9384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD98EC"))) PPC_WEAK_FUNC(sub_83CD98EC);
PPC_FUNC_IMPL(__imp__sub_83CD98EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD98F0"))) PPC_WEAK_FUNC(sub_83CD98F0);
PPC_FUNC_IMPL(__imp__sub_83CD98F0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,18216
	ctx.r3.s64 = ctx.r11.s64 + 18216;
	// bl 0x8259af80
	ctx.lr = 0x83CD9908;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9368
	ctx.r3.s64 = ctx.r10.s64 + -9368;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9914;
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

__attribute__((alias("__imp__sub_83CD9924"))) PPC_WEAK_FUNC(sub_83CD9924);
PPC_FUNC_IMPL(__imp__sub_83CD9924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9928"))) PPC_WEAK_FUNC(sub_83CD9928);
PPC_FUNC_IMPL(__imp__sub_83CD9928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18196
	ctx.r11.s64 = ctx.r8.s64 + 18196;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,6712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9376
	ctx.r3.s64 = ctx.r6.s64 + -9376;
	// stw r10,18196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9958"))) PPC_WEAK_FUNC(sub_83CD9958);
PPC_FUNC_IMPL(__imp__sub_83CD9958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9360
	ctx.r3.s64 = ctx.r11.s64 + -9360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9964"))) PPC_WEAK_FUNC(sub_83CD9964);
PPC_FUNC_IMPL(__imp__sub_83CD9964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9968"))) PPC_WEAK_FUNC(sub_83CD9968);
PPC_FUNC_IMPL(__imp__sub_83CD9968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9352
	ctx.r3.s64 = ctx.r11.s64 + -9352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9974"))) PPC_WEAK_FUNC(sub_83CD9974);
PPC_FUNC_IMPL(__imp__sub_83CD9974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9978"))) PPC_WEAK_FUNC(sub_83CD9978);
PPC_FUNC_IMPL(__imp__sub_83CD9978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9344
	ctx.r3.s64 = ctx.r11.s64 + -9344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9984"))) PPC_WEAK_FUNC(sub_83CD9984);
PPC_FUNC_IMPL(__imp__sub_83CD9984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9988"))) PPC_WEAK_FUNC(sub_83CD9988);
PPC_FUNC_IMPL(__imp__sub_83CD9988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9336
	ctx.r3.s64 = ctx.r11.s64 + -9336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9994"))) PPC_WEAK_FUNC(sub_83CD9994);
PPC_FUNC_IMPL(__imp__sub_83CD9994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9998"))) PPC_WEAK_FUNC(sub_83CD9998);
PPC_FUNC_IMPL(__imp__sub_83CD9998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD99A4"))) PPC_WEAK_FUNC(sub_83CD99A4);
PPC_FUNC_IMPL(__imp__sub_83CD99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD99A8"))) PPC_WEAK_FUNC(sub_83CD99A8);
PPC_FUNC_IMPL(__imp__sub_83CD99A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9320
	ctx.r3.s64 = ctx.r11.s64 + -9320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD99B4"))) PPC_WEAK_FUNC(sub_83CD99B4);
PPC_FUNC_IMPL(__imp__sub_83CD99B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD99B8"))) PPC_WEAK_FUNC(sub_83CD99B8);
PPC_FUNC_IMPL(__imp__sub_83CD99B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9312
	ctx.r3.s64 = ctx.r11.s64 + -9312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD99C4"))) PPC_WEAK_FUNC(sub_83CD99C4);
PPC_FUNC_IMPL(__imp__sub_83CD99C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD99C8"))) PPC_WEAK_FUNC(sub_83CD99C8);
PPC_FUNC_IMPL(__imp__sub_83CD99C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9304
	ctx.r3.s64 = ctx.r11.s64 + -9304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD99D4"))) PPC_WEAK_FUNC(sub_83CD99D4);
PPC_FUNC_IMPL(__imp__sub_83CD99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD99D8"))) PPC_WEAK_FUNC(sub_83CD99D8);
PPC_FUNC_IMPL(__imp__sub_83CD99D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9296
	ctx.r3.s64 = ctx.r11.s64 + -9296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD99E4"))) PPC_WEAK_FUNC(sub_83CD99E4);
PPC_FUNC_IMPL(__imp__sub_83CD99E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD99E8"))) PPC_WEAK_FUNC(sub_83CD99E8);
PPC_FUNC_IMPL(__imp__sub_83CD99E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9288
	ctx.r3.s64 = ctx.r11.s64 + -9288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD99F4"))) PPC_WEAK_FUNC(sub_83CD99F4);
PPC_FUNC_IMPL(__imp__sub_83CD99F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD99F8"))) PPC_WEAK_FUNC(sub_83CD99F8);
PPC_FUNC_IMPL(__imp__sub_83CD99F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9280
	ctx.r3.s64 = ctx.r11.s64 + -9280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9A04"))) PPC_WEAK_FUNC(sub_83CD9A04);
PPC_FUNC_IMPL(__imp__sub_83CD9A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9A08"))) PPC_WEAK_FUNC(sub_83CD9A08);
PPC_FUNC_IMPL(__imp__sub_83CD9A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9272
	ctx.r3.s64 = ctx.r11.s64 + -9272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD9A14"))) PPC_WEAK_FUNC(sub_83CD9A14);
PPC_FUNC_IMPL(__imp__sub_83CD9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9A18"))) PPC_WEAK_FUNC(sub_83CD9A18);
PPC_FUNC_IMPL(__imp__sub_83CD9A18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18576
	ctx.r7.s64 = ctx.r8.s64 + 18576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9A40"))) PPC_WEAK_FUNC(sub_83CD9A40);
PPC_FUNC_IMPL(__imp__sub_83CD9A40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,7100
	ctx.r6.s64 = ctx.r7.s64 + 7100;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,7028(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 7028);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18576);
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
	// std r9,7100(r7)
	PPC_STORE_U64(ctx.r7.u32 + 7100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD9A88"))) PPC_WEAK_FUNC(sub_83CD9A88);
PPC_FUNC_IMPL(__imp__sub_83CD9A88) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,18560
	ctx.r3.s64 = ctx.r11.s64 + 18560;
	// bl 0x83523120
	ctx.lr = 0x83CD9AA0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-9264
	ctx.r3.s64 = ctx.r10.s64 + -9264;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD9AAC;
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

__attribute__((alias("__imp__sub_83CD9ABC"))) PPC_WEAK_FUNC(sub_83CD9ABC);
PPC_FUNC_IMPL(__imp__sub_83CD9ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD9AC0"))) PPC_WEAK_FUNC(sub_83CD9AC0);
PPC_FUNC_IMPL(__imp__sub_83CD9AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-9248
	ctx.r3.s64 = ctx.r11.s64 + -9248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

