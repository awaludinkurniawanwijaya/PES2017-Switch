#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C92024"))) PPC_WEAK_FUNC(sub_83C92024);
PPC_FUNC_IMPL(__imp__sub_83C92024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92028"))) PPC_WEAK_FUNC(sub_83C92028);
PPC_FUNC_IMPL(__imp__sub_83C92028) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// bl 0x83523120
	ctx.lr = 0x83C92040;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,21520
	ctx.r3.s64 = ctx.r10.s64 + 21520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9204C;
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

__attribute__((alias("__imp__sub_83C9205C"))) PPC_WEAK_FUNC(sub_83C9205C);
PPC_FUNC_IMPL(__imp__sub_83C9205C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92060"))) PPC_WEAK_FUNC(sub_83C92060);
PPC_FUNC_IMPL(__imp__sub_83C92060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8368
	ctx.r7.s64 = ctx.r8.s64 + -8368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8368(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92088"))) PPC_WEAK_FUNC(sub_83C92088);
PPC_FUNC_IMPL(__imp__sub_83C92088) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-3440
	ctx.r6.s64 = ctx.r7.s64 + -3440;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3512(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3512);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8368);
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
	// std r9,-3440(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3440, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C920D0"))) PPC_WEAK_FUNC(sub_83C920D0);
PPC_FUNC_IMPL(__imp__sub_83C920D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21536
	ctx.r3.s64 = ctx.r11.s64 + 21536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C920DC"))) PPC_WEAK_FUNC(sub_83C920DC);
PPC_FUNC_IMPL(__imp__sub_83C920DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C920E0"))) PPC_WEAK_FUNC(sub_83C920E0);
PPC_FUNC_IMPL(__imp__sub_83C920E0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-8360
	ctx.r3.s64 = ctx.r11.s64 + -8360;
	// bl 0x8259af80
	ctx.lr = 0x83C920F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,21552
	ctx.r3.s64 = ctx.r10.s64 + 21552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C92104;
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

__attribute__((alias("__imp__sub_83C92114"))) PPC_WEAK_FUNC(sub_83C92114);
PPC_FUNC_IMPL(__imp__sub_83C92114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92118"))) PPC_WEAK_FUNC(sub_83C92118);
PPC_FUNC_IMPL(__imp__sub_83C92118) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8380
	ctx.r11.s64 = ctx.r8.s64 + -8380;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-3464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3464);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21544
	ctx.r3.s64 = ctx.r6.s64 + 21544;
	// stw r10,-8380(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8380, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92148"))) PPC_WEAK_FUNC(sub_83C92148);
PPC_FUNC_IMPL(__imp__sub_83C92148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21768
	ctx.r3.s64 = ctx.r11.s64 + 21768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92154"))) PPC_WEAK_FUNC(sub_83C92154);
PPC_FUNC_IMPL(__imp__sub_83C92154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92158"))) PPC_WEAK_FUNC(sub_83C92158);
PPC_FUNC_IMPL(__imp__sub_83C92158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92164"))) PPC_WEAK_FUNC(sub_83C92164);
PPC_FUNC_IMPL(__imp__sub_83C92164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92168"))) PPC_WEAK_FUNC(sub_83C92168);
PPC_FUNC_IMPL(__imp__sub_83C92168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21784
	ctx.r3.s64 = ctx.r11.s64 + 21784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92174"))) PPC_WEAK_FUNC(sub_83C92174);
PPC_FUNC_IMPL(__imp__sub_83C92174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92178"))) PPC_WEAK_FUNC(sub_83C92178);
PPC_FUNC_IMPL(__imp__sub_83C92178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21792
	ctx.r3.s64 = ctx.r11.s64 + 21792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92184"))) PPC_WEAK_FUNC(sub_83C92184);
PPC_FUNC_IMPL(__imp__sub_83C92184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92188"))) PPC_WEAK_FUNC(sub_83C92188);
PPC_FUNC_IMPL(__imp__sub_83C92188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21800
	ctx.r3.s64 = ctx.r11.s64 + 21800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92194"))) PPC_WEAK_FUNC(sub_83C92194);
PPC_FUNC_IMPL(__imp__sub_83C92194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92198"))) PPC_WEAK_FUNC(sub_83C92198);
PPC_FUNC_IMPL(__imp__sub_83C92198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C921A4"))) PPC_WEAK_FUNC(sub_83C921A4);
PPC_FUNC_IMPL(__imp__sub_83C921A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C921A8"))) PPC_WEAK_FUNC(sub_83C921A8);
PPC_FUNC_IMPL(__imp__sub_83C921A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C921B4"))) PPC_WEAK_FUNC(sub_83C921B4);
PPC_FUNC_IMPL(__imp__sub_83C921B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C921B8"))) PPC_WEAK_FUNC(sub_83C921B8);
PPC_FUNC_IMPL(__imp__sub_83C921B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C921C4"))) PPC_WEAK_FUNC(sub_83C921C4);
PPC_FUNC_IMPL(__imp__sub_83C921C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C921C8"))) PPC_WEAK_FUNC(sub_83C921C8);
PPC_FUNC_IMPL(__imp__sub_83C921C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21832
	ctx.r3.s64 = ctx.r11.s64 + 21832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C921D4"))) PPC_WEAK_FUNC(sub_83C921D4);
PPC_FUNC_IMPL(__imp__sub_83C921D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C921D8"))) PPC_WEAK_FUNC(sub_83C921D8);
PPC_FUNC_IMPL(__imp__sub_83C921D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21840
	ctx.r3.s64 = ctx.r11.s64 + 21840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C921E4"))) PPC_WEAK_FUNC(sub_83C921E4);
PPC_FUNC_IMPL(__imp__sub_83C921E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C921E8"))) PPC_WEAK_FUNC(sub_83C921E8);
PPC_FUNC_IMPL(__imp__sub_83C921E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21848
	ctx.r3.s64 = ctx.r11.s64 + 21848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C921F4"))) PPC_WEAK_FUNC(sub_83C921F4);
PPC_FUNC_IMPL(__imp__sub_83C921F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C921F8"))) PPC_WEAK_FUNC(sub_83C921F8);
PPC_FUNC_IMPL(__imp__sub_83C921F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21856
	ctx.r3.s64 = ctx.r11.s64 + 21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92204"))) PPC_WEAK_FUNC(sub_83C92204);
PPC_FUNC_IMPL(__imp__sub_83C92204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92208"))) PPC_WEAK_FUNC(sub_83C92208);
PPC_FUNC_IMPL(__imp__sub_83C92208) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8000
	ctx.r7.s64 = ctx.r8.s64 + -8000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8000(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92230"))) PPC_WEAK_FUNC(sub_83C92230);
PPC_FUNC_IMPL(__imp__sub_83C92230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-3308
	ctx.r6.s64 = ctx.r7.s64 + -3308;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3380(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3380);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8000);
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
	// std r9,-3308(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3308, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92278"))) PPC_WEAK_FUNC(sub_83C92278);
PPC_FUNC_IMPL(__imp__sub_83C92278) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// bl 0x83523120
	ctx.lr = 0x83C92290;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,21864
	ctx.r3.s64 = ctx.r10.s64 + 21864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9229C;
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

__attribute__((alias("__imp__sub_83C922AC"))) PPC_WEAK_FUNC(sub_83C922AC);
PPC_FUNC_IMPL(__imp__sub_83C922AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C922B0"))) PPC_WEAK_FUNC(sub_83C922B0);
PPC_FUNC_IMPL(__imp__sub_83C922B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21880
	ctx.r3.s64 = ctx.r11.s64 + 21880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C922BC"))) PPC_WEAK_FUNC(sub_83C922BC);
PPC_FUNC_IMPL(__imp__sub_83C922BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C922C0"))) PPC_WEAK_FUNC(sub_83C922C0);
PPC_FUNC_IMPL(__imp__sub_83C922C0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-7992
	ctx.r3.s64 = ctx.r11.s64 + -7992;
	// bl 0x8259af80
	ctx.lr = 0x83C922D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,21896
	ctx.r3.s64 = ctx.r10.s64 + 21896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C922E4;
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

__attribute__((alias("__imp__sub_83C922F4"))) PPC_WEAK_FUNC(sub_83C922F4);
PPC_FUNC_IMPL(__imp__sub_83C922F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C922F8"))) PPC_WEAK_FUNC(sub_83C922F8);
PPC_FUNC_IMPL(__imp__sub_83C922F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8012
	ctx.r11.s64 = ctx.r8.s64 + -8012;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-3332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3332);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21888
	ctx.r3.s64 = ctx.r6.s64 + 21888;
	// stw r10,-8012(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8012, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92328"))) PPC_WEAK_FUNC(sub_83C92328);
PPC_FUNC_IMPL(__imp__sub_83C92328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21904
	ctx.r3.s64 = ctx.r11.s64 + 21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92334"))) PPC_WEAK_FUNC(sub_83C92334);
PPC_FUNC_IMPL(__imp__sub_83C92334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92338"))) PPC_WEAK_FUNC(sub_83C92338);
PPC_FUNC_IMPL(__imp__sub_83C92338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21912
	ctx.r3.s64 = ctx.r11.s64 + 21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92344"))) PPC_WEAK_FUNC(sub_83C92344);
PPC_FUNC_IMPL(__imp__sub_83C92344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92348"))) PPC_WEAK_FUNC(sub_83C92348);
PPC_FUNC_IMPL(__imp__sub_83C92348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21920
	ctx.r3.s64 = ctx.r11.s64 + 21920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92354"))) PPC_WEAK_FUNC(sub_83C92354);
PPC_FUNC_IMPL(__imp__sub_83C92354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92358"))) PPC_WEAK_FUNC(sub_83C92358);
PPC_FUNC_IMPL(__imp__sub_83C92358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21928
	ctx.r3.s64 = ctx.r11.s64 + 21928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92364"))) PPC_WEAK_FUNC(sub_83C92364);
PPC_FUNC_IMPL(__imp__sub_83C92364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92368"))) PPC_WEAK_FUNC(sub_83C92368);
PPC_FUNC_IMPL(__imp__sub_83C92368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21936
	ctx.r3.s64 = ctx.r11.s64 + 21936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92374"))) PPC_WEAK_FUNC(sub_83C92374);
PPC_FUNC_IMPL(__imp__sub_83C92374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92378"))) PPC_WEAK_FUNC(sub_83C92378);
PPC_FUNC_IMPL(__imp__sub_83C92378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21944
	ctx.r3.s64 = ctx.r11.s64 + 21944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92384"))) PPC_WEAK_FUNC(sub_83C92384);
PPC_FUNC_IMPL(__imp__sub_83C92384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92388"))) PPC_WEAK_FUNC(sub_83C92388);
PPC_FUNC_IMPL(__imp__sub_83C92388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21952
	ctx.r3.s64 = ctx.r11.s64 + 21952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92394"))) PPC_WEAK_FUNC(sub_83C92394);
PPC_FUNC_IMPL(__imp__sub_83C92394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92398"))) PPC_WEAK_FUNC(sub_83C92398);
PPC_FUNC_IMPL(__imp__sub_83C92398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21960
	ctx.r3.s64 = ctx.r11.s64 + 21960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C923A4"))) PPC_WEAK_FUNC(sub_83C923A4);
PPC_FUNC_IMPL(__imp__sub_83C923A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C923A8"))) PPC_WEAK_FUNC(sub_83C923A8);
PPC_FUNC_IMPL(__imp__sub_83C923A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21968
	ctx.r3.s64 = ctx.r11.s64 + 21968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C923B4"))) PPC_WEAK_FUNC(sub_83C923B4);
PPC_FUNC_IMPL(__imp__sub_83C923B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C923B8"))) PPC_WEAK_FUNC(sub_83C923B8);
PPC_FUNC_IMPL(__imp__sub_83C923B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C923C4"))) PPC_WEAK_FUNC(sub_83C923C4);
PPC_FUNC_IMPL(__imp__sub_83C923C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C923C8"))) PPC_WEAK_FUNC(sub_83C923C8);
PPC_FUNC_IMPL(__imp__sub_83C923C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21984
	ctx.r3.s64 = ctx.r11.s64 + 21984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C923D4"))) PPC_WEAK_FUNC(sub_83C923D4);
PPC_FUNC_IMPL(__imp__sub_83C923D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C923D8"))) PPC_WEAK_FUNC(sub_83C923D8);
PPC_FUNC_IMPL(__imp__sub_83C923D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,21992
	ctx.r3.s64 = ctx.r11.s64 + 21992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C923E4"))) PPC_WEAK_FUNC(sub_83C923E4);
PPC_FUNC_IMPL(__imp__sub_83C923E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C923E8"))) PPC_WEAK_FUNC(sub_83C923E8);
PPC_FUNC_IMPL(__imp__sub_83C923E8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-5600
	ctx.r3.s64 = ctx.r11.s64 + -5600;
	// bl 0x83523120
	ctx.lr = 0x83C92400;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22000
	ctx.r3.s64 = ctx.r10.s64 + 22000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9240C;
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

__attribute__((alias("__imp__sub_83C9241C"))) PPC_WEAK_FUNC(sub_83C9241C);
PPC_FUNC_IMPL(__imp__sub_83C9241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92420"))) PPC_WEAK_FUNC(sub_83C92420);
PPC_FUNC_IMPL(__imp__sub_83C92420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5584
	ctx.r7.s64 = ctx.r8.s64 + -5584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5584(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92448"))) PPC_WEAK_FUNC(sub_83C92448);
PPC_FUNC_IMPL(__imp__sub_83C92448) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-3180
	ctx.r6.s64 = ctx.r7.s64 + -3180;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3252(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3252);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5584);
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
	// std r9,-3180(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3180, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92490"))) PPC_WEAK_FUNC(sub_83C92490);
PPC_FUNC_IMPL(__imp__sub_83C92490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9249C"))) PPC_WEAK_FUNC(sub_83C9249C);
PPC_FUNC_IMPL(__imp__sub_83C9249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C924A0"))) PPC_WEAK_FUNC(sub_83C924A0);
PPC_FUNC_IMPL(__imp__sub_83C924A0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-5576
	ctx.r3.s64 = ctx.r11.s64 + -5576;
	// bl 0x8259af80
	ctx.lr = 0x83C924B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22032
	ctx.r3.s64 = ctx.r10.s64 + 22032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C924C4;
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

__attribute__((alias("__imp__sub_83C924D4"))) PPC_WEAK_FUNC(sub_83C924D4);
PPC_FUNC_IMPL(__imp__sub_83C924D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C924D8"))) PPC_WEAK_FUNC(sub_83C924D8);
PPC_FUNC_IMPL(__imp__sub_83C924D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5596
	ctx.r11.s64 = ctx.r8.s64 + -5596;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-3204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3204);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22024
	ctx.r3.s64 = ctx.r6.s64 + 22024;
	// stw r10,-5596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92508"))) PPC_WEAK_FUNC(sub_83C92508);
PPC_FUNC_IMPL(__imp__sub_83C92508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22144
	ctx.r3.s64 = ctx.r11.s64 + 22144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92514"))) PPC_WEAK_FUNC(sub_83C92514);
PPC_FUNC_IMPL(__imp__sub_83C92514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92518"))) PPC_WEAK_FUNC(sub_83C92518);
PPC_FUNC_IMPL(__imp__sub_83C92518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22152
	ctx.r3.s64 = ctx.r11.s64 + 22152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92524"))) PPC_WEAK_FUNC(sub_83C92524);
PPC_FUNC_IMPL(__imp__sub_83C92524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92528"))) PPC_WEAK_FUNC(sub_83C92528);
PPC_FUNC_IMPL(__imp__sub_83C92528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92534"))) PPC_WEAK_FUNC(sub_83C92534);
PPC_FUNC_IMPL(__imp__sub_83C92534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92538"))) PPC_WEAK_FUNC(sub_83C92538);
PPC_FUNC_IMPL(__imp__sub_83C92538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22168
	ctx.r3.s64 = ctx.r11.s64 + 22168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92544"))) PPC_WEAK_FUNC(sub_83C92544);
PPC_FUNC_IMPL(__imp__sub_83C92544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92548"))) PPC_WEAK_FUNC(sub_83C92548);
PPC_FUNC_IMPL(__imp__sub_83C92548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22176
	ctx.r3.s64 = ctx.r11.s64 + 22176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92554"))) PPC_WEAK_FUNC(sub_83C92554);
PPC_FUNC_IMPL(__imp__sub_83C92554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92558"))) PPC_WEAK_FUNC(sub_83C92558);
PPC_FUNC_IMPL(__imp__sub_83C92558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22184
	ctx.r3.s64 = ctx.r11.s64 + 22184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92564"))) PPC_WEAK_FUNC(sub_83C92564);
PPC_FUNC_IMPL(__imp__sub_83C92564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92568"))) PPC_WEAK_FUNC(sub_83C92568);
PPC_FUNC_IMPL(__imp__sub_83C92568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22192
	ctx.r3.s64 = ctx.r11.s64 + 22192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92574"))) PPC_WEAK_FUNC(sub_83C92574);
PPC_FUNC_IMPL(__imp__sub_83C92574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92578"))) PPC_WEAK_FUNC(sub_83C92578);
PPC_FUNC_IMPL(__imp__sub_83C92578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22200
	ctx.r3.s64 = ctx.r11.s64 + 22200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92584"))) PPC_WEAK_FUNC(sub_83C92584);
PPC_FUNC_IMPL(__imp__sub_83C92584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92588"))) PPC_WEAK_FUNC(sub_83C92588);
PPC_FUNC_IMPL(__imp__sub_83C92588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22208
	ctx.r3.s64 = ctx.r11.s64 + 22208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92594"))) PPC_WEAK_FUNC(sub_83C92594);
PPC_FUNC_IMPL(__imp__sub_83C92594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92598"))) PPC_WEAK_FUNC(sub_83C92598);
PPC_FUNC_IMPL(__imp__sub_83C92598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22216
	ctx.r3.s64 = ctx.r11.s64 + 22216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C925A4"))) PPC_WEAK_FUNC(sub_83C925A4);
PPC_FUNC_IMPL(__imp__sub_83C925A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C925A8"))) PPC_WEAK_FUNC(sub_83C925A8);
PPC_FUNC_IMPL(__imp__sub_83C925A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22224
	ctx.r3.s64 = ctx.r11.s64 + 22224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C925B4"))) PPC_WEAK_FUNC(sub_83C925B4);
PPC_FUNC_IMPL(__imp__sub_83C925B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C925B8"))) PPC_WEAK_FUNC(sub_83C925B8);
PPC_FUNC_IMPL(__imp__sub_83C925B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22232
	ctx.r3.s64 = ctx.r11.s64 + 22232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C925C4"))) PPC_WEAK_FUNC(sub_83C925C4);
PPC_FUNC_IMPL(__imp__sub_83C925C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C925C8"))) PPC_WEAK_FUNC(sub_83C925C8);
PPC_FUNC_IMPL(__imp__sub_83C925C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5216
	ctx.r7.s64 = ctx.r8.s64 + -5216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5216(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C925F0"))) PPC_WEAK_FUNC(sub_83C925F0);
PPC_FUNC_IMPL(__imp__sub_83C925F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-3052
	ctx.r6.s64 = ctx.r7.s64 + -3052;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3124(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3124);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5216);
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
	// std r9,-3052(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3052, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92638"))) PPC_WEAK_FUNC(sub_83C92638);
PPC_FUNC_IMPL(__imp__sub_83C92638) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-5232
	ctx.r3.s64 = ctx.r11.s64 + -5232;
	// bl 0x83523120
	ctx.lr = 0x83C92650;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22240
	ctx.r3.s64 = ctx.r10.s64 + 22240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9265C;
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

__attribute__((alias("__imp__sub_83C9266C"))) PPC_WEAK_FUNC(sub_83C9266C);
PPC_FUNC_IMPL(__imp__sub_83C9266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92670"))) PPC_WEAK_FUNC(sub_83C92670);
PPC_FUNC_IMPL(__imp__sub_83C92670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22256
	ctx.r3.s64 = ctx.r11.s64 + 22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9267C"))) PPC_WEAK_FUNC(sub_83C9267C);
PPC_FUNC_IMPL(__imp__sub_83C9267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92680"))) PPC_WEAK_FUNC(sub_83C92680);
PPC_FUNC_IMPL(__imp__sub_83C92680) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-5208
	ctx.r3.s64 = ctx.r11.s64 + -5208;
	// bl 0x8259af80
	ctx.lr = 0x83C92698;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22272
	ctx.r3.s64 = ctx.r10.s64 + 22272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C926A4;
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

__attribute__((alias("__imp__sub_83C926B4"))) PPC_WEAK_FUNC(sub_83C926B4);
PPC_FUNC_IMPL(__imp__sub_83C926B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C926B8"))) PPC_WEAK_FUNC(sub_83C926B8);
PPC_FUNC_IMPL(__imp__sub_83C926B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5228
	ctx.r11.s64 = ctx.r8.s64 + -5228;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-3076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3076);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22264
	ctx.r3.s64 = ctx.r6.s64 + 22264;
	// stw r10,-5228(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C926E8"))) PPC_WEAK_FUNC(sub_83C926E8);
PPC_FUNC_IMPL(__imp__sub_83C926E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C926F4"))) PPC_WEAK_FUNC(sub_83C926F4);
PPC_FUNC_IMPL(__imp__sub_83C926F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C926F8"))) PPC_WEAK_FUNC(sub_83C926F8);
PPC_FUNC_IMPL(__imp__sub_83C926F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22288
	ctx.r3.s64 = ctx.r11.s64 + 22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92704"))) PPC_WEAK_FUNC(sub_83C92704);
PPC_FUNC_IMPL(__imp__sub_83C92704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92708"))) PPC_WEAK_FUNC(sub_83C92708);
PPC_FUNC_IMPL(__imp__sub_83C92708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92714"))) PPC_WEAK_FUNC(sub_83C92714);
PPC_FUNC_IMPL(__imp__sub_83C92714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92718"))) PPC_WEAK_FUNC(sub_83C92718);
PPC_FUNC_IMPL(__imp__sub_83C92718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92724"))) PPC_WEAK_FUNC(sub_83C92724);
PPC_FUNC_IMPL(__imp__sub_83C92724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92728"))) PPC_WEAK_FUNC(sub_83C92728);
PPC_FUNC_IMPL(__imp__sub_83C92728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22312
	ctx.r3.s64 = ctx.r11.s64 + 22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92734"))) PPC_WEAK_FUNC(sub_83C92734);
PPC_FUNC_IMPL(__imp__sub_83C92734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92738"))) PPC_WEAK_FUNC(sub_83C92738);
PPC_FUNC_IMPL(__imp__sub_83C92738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92744"))) PPC_WEAK_FUNC(sub_83C92744);
PPC_FUNC_IMPL(__imp__sub_83C92744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92748"))) PPC_WEAK_FUNC(sub_83C92748);
PPC_FUNC_IMPL(__imp__sub_83C92748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22328
	ctx.r3.s64 = ctx.r11.s64 + 22328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92754"))) PPC_WEAK_FUNC(sub_83C92754);
PPC_FUNC_IMPL(__imp__sub_83C92754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92758"))) PPC_WEAK_FUNC(sub_83C92758);
PPC_FUNC_IMPL(__imp__sub_83C92758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22336
	ctx.r3.s64 = ctx.r11.s64 + 22336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92764"))) PPC_WEAK_FUNC(sub_83C92764);
PPC_FUNC_IMPL(__imp__sub_83C92764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92768"))) PPC_WEAK_FUNC(sub_83C92768);
PPC_FUNC_IMPL(__imp__sub_83C92768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22344
	ctx.r3.s64 = ctx.r11.s64 + 22344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92774"))) PPC_WEAK_FUNC(sub_83C92774);
PPC_FUNC_IMPL(__imp__sub_83C92774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92778"))) PPC_WEAK_FUNC(sub_83C92778);
PPC_FUNC_IMPL(__imp__sub_83C92778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22352
	ctx.r3.s64 = ctx.r11.s64 + 22352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92784"))) PPC_WEAK_FUNC(sub_83C92784);
PPC_FUNC_IMPL(__imp__sub_83C92784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92788"))) PPC_WEAK_FUNC(sub_83C92788);
PPC_FUNC_IMPL(__imp__sub_83C92788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22360
	ctx.r3.s64 = ctx.r11.s64 + 22360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92794"))) PPC_WEAK_FUNC(sub_83C92794);
PPC_FUNC_IMPL(__imp__sub_83C92794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92798"))) PPC_WEAK_FUNC(sub_83C92798);
PPC_FUNC_IMPL(__imp__sub_83C92798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22368
	ctx.r3.s64 = ctx.r11.s64 + 22368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C927A4"))) PPC_WEAK_FUNC(sub_83C927A4);
PPC_FUNC_IMPL(__imp__sub_83C927A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C927A8"))) PPC_WEAK_FUNC(sub_83C927A8);
PPC_FUNC_IMPL(__imp__sub_83C927A8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// bl 0x83523120
	ctx.lr = 0x83C927C0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22376
	ctx.r3.s64 = ctx.r10.s64 + 22376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C927CC;
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

__attribute__((alias("__imp__sub_83C927DC"))) PPC_WEAK_FUNC(sub_83C927DC);
PPC_FUNC_IMPL(__imp__sub_83C927DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C927E0"))) PPC_WEAK_FUNC(sub_83C927E0);
PPC_FUNC_IMPL(__imp__sub_83C927E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4848
	ctx.r7.s64 = ctx.r8.s64 + -4848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4848(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92808"))) PPC_WEAK_FUNC(sub_83C92808);
PPC_FUNC_IMPL(__imp__sub_83C92808) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-2900
	ctx.r6.s64 = ctx.r7.s64 + -2900;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2972(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2972);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4848);
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
	// std r9,-2900(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2900, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92850"))) PPC_WEAK_FUNC(sub_83C92850);
PPC_FUNC_IMPL(__imp__sub_83C92850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22392
	ctx.r3.s64 = ctx.r11.s64 + 22392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9285C"))) PPC_WEAK_FUNC(sub_83C9285C);
PPC_FUNC_IMPL(__imp__sub_83C9285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92860"))) PPC_WEAK_FUNC(sub_83C92860);
PPC_FUNC_IMPL(__imp__sub_83C92860) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-4840
	ctx.r3.s64 = ctx.r11.s64 + -4840;
	// bl 0x8259af80
	ctx.lr = 0x83C92878;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22408
	ctx.r3.s64 = ctx.r10.s64 + 22408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C92884;
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

__attribute__((alias("__imp__sub_83C92894"))) PPC_WEAK_FUNC(sub_83C92894);
PPC_FUNC_IMPL(__imp__sub_83C92894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92898"))) PPC_WEAK_FUNC(sub_83C92898);
PPC_FUNC_IMPL(__imp__sub_83C92898) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4860
	ctx.r11.s64 = ctx.r8.s64 + -4860;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2924);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22400
	ctx.r3.s64 = ctx.r6.s64 + 22400;
	// stw r10,-4860(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C928C8"))) PPC_WEAK_FUNC(sub_83C928C8);
PPC_FUNC_IMPL(__imp__sub_83C928C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C928D4"))) PPC_WEAK_FUNC(sub_83C928D4);
PPC_FUNC_IMPL(__imp__sub_83C928D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C928D8"))) PPC_WEAK_FUNC(sub_83C928D8);
PPC_FUNC_IMPL(__imp__sub_83C928D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22424
	ctx.r3.s64 = ctx.r11.s64 + 22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C928E4"))) PPC_WEAK_FUNC(sub_83C928E4);
PPC_FUNC_IMPL(__imp__sub_83C928E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C928E8"))) PPC_WEAK_FUNC(sub_83C928E8);
PPC_FUNC_IMPL(__imp__sub_83C928E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22432
	ctx.r3.s64 = ctx.r11.s64 + 22432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C928F4"))) PPC_WEAK_FUNC(sub_83C928F4);
PPC_FUNC_IMPL(__imp__sub_83C928F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C928F8"))) PPC_WEAK_FUNC(sub_83C928F8);
PPC_FUNC_IMPL(__imp__sub_83C928F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92904"))) PPC_WEAK_FUNC(sub_83C92904);
PPC_FUNC_IMPL(__imp__sub_83C92904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92908"))) PPC_WEAK_FUNC(sub_83C92908);
PPC_FUNC_IMPL(__imp__sub_83C92908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22448
	ctx.r3.s64 = ctx.r11.s64 + 22448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92914"))) PPC_WEAK_FUNC(sub_83C92914);
PPC_FUNC_IMPL(__imp__sub_83C92914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92918"))) PPC_WEAK_FUNC(sub_83C92918);
PPC_FUNC_IMPL(__imp__sub_83C92918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22456
	ctx.r3.s64 = ctx.r11.s64 + 22456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92924"))) PPC_WEAK_FUNC(sub_83C92924);
PPC_FUNC_IMPL(__imp__sub_83C92924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92928"))) PPC_WEAK_FUNC(sub_83C92928);
PPC_FUNC_IMPL(__imp__sub_83C92928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22464
	ctx.r3.s64 = ctx.r11.s64 + 22464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92934"))) PPC_WEAK_FUNC(sub_83C92934);
PPC_FUNC_IMPL(__imp__sub_83C92934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92938"))) PPC_WEAK_FUNC(sub_83C92938);
PPC_FUNC_IMPL(__imp__sub_83C92938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22472
	ctx.r3.s64 = ctx.r11.s64 + 22472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92944"))) PPC_WEAK_FUNC(sub_83C92944);
PPC_FUNC_IMPL(__imp__sub_83C92944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92948"))) PPC_WEAK_FUNC(sub_83C92948);
PPC_FUNC_IMPL(__imp__sub_83C92948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22480
	ctx.r3.s64 = ctx.r11.s64 + 22480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92954"))) PPC_WEAK_FUNC(sub_83C92954);
PPC_FUNC_IMPL(__imp__sub_83C92954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92958"))) PPC_WEAK_FUNC(sub_83C92958);
PPC_FUNC_IMPL(__imp__sub_83C92958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22488
	ctx.r3.s64 = ctx.r11.s64 + 22488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92964"))) PPC_WEAK_FUNC(sub_83C92964);
PPC_FUNC_IMPL(__imp__sub_83C92964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92968"))) PPC_WEAK_FUNC(sub_83C92968);
PPC_FUNC_IMPL(__imp__sub_83C92968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22496
	ctx.r3.s64 = ctx.r11.s64 + 22496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92974"))) PPC_WEAK_FUNC(sub_83C92974);
PPC_FUNC_IMPL(__imp__sub_83C92974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92978"))) PPC_WEAK_FUNC(sub_83C92978);
PPC_FUNC_IMPL(__imp__sub_83C92978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22504
	ctx.r3.s64 = ctx.r11.s64 + 22504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92984"))) PPC_WEAK_FUNC(sub_83C92984);
PPC_FUNC_IMPL(__imp__sub_83C92984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92988"))) PPC_WEAK_FUNC(sub_83C92988);
PPC_FUNC_IMPL(__imp__sub_83C92988) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4480
	ctx.r7.s64 = ctx.r8.s64 + -4480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C929B0"))) PPC_WEAK_FUNC(sub_83C929B0);
PPC_FUNC_IMPL(__imp__sub_83C929B0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-4496
	ctx.r3.s64 = ctx.r11.s64 + -4496;
	// bl 0x83523120
	ctx.lr = 0x83C929C8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22512
	ctx.r3.s64 = ctx.r10.s64 + 22512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C929D4;
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

__attribute__((alias("__imp__sub_83C929E4"))) PPC_WEAK_FUNC(sub_83C929E4);
PPC_FUNC_IMPL(__imp__sub_83C929E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C929E8"))) PPC_WEAK_FUNC(sub_83C929E8);
PPC_FUNC_IMPL(__imp__sub_83C929E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-2772
	ctx.r6.s64 = ctx.r7.s64 + -2772;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2844(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2844);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4480);
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
	// std r9,-2772(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2772, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92A30"))) PPC_WEAK_FUNC(sub_83C92A30);
PPC_FUNC_IMPL(__imp__sub_83C92A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22528
	ctx.r3.s64 = ctx.r11.s64 + 22528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92A3C"))) PPC_WEAK_FUNC(sub_83C92A3C);
PPC_FUNC_IMPL(__imp__sub_83C92A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92A40"))) PPC_WEAK_FUNC(sub_83C92A40);
PPC_FUNC_IMPL(__imp__sub_83C92A40) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-4472
	ctx.r3.s64 = ctx.r11.s64 + -4472;
	// bl 0x8259af80
	ctx.lr = 0x83C92A58;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22544
	ctx.r3.s64 = ctx.r10.s64 + 22544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C92A64;
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

__attribute__((alias("__imp__sub_83C92A74"))) PPC_WEAK_FUNC(sub_83C92A74);
PPC_FUNC_IMPL(__imp__sub_83C92A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92A78"))) PPC_WEAK_FUNC(sub_83C92A78);
PPC_FUNC_IMPL(__imp__sub_83C92A78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4492
	ctx.r11.s64 = ctx.r8.s64 + -4492;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2796);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22536
	ctx.r3.s64 = ctx.r6.s64 + 22536;
	// stw r10,-4492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92AA8"))) PPC_WEAK_FUNC(sub_83C92AA8);
PPC_FUNC_IMPL(__imp__sub_83C92AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22552
	ctx.r3.s64 = ctx.r11.s64 + 22552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92AB4"))) PPC_WEAK_FUNC(sub_83C92AB4);
PPC_FUNC_IMPL(__imp__sub_83C92AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92AB8"))) PPC_WEAK_FUNC(sub_83C92AB8);
PPC_FUNC_IMPL(__imp__sub_83C92AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22560
	ctx.r3.s64 = ctx.r11.s64 + 22560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92AC4"))) PPC_WEAK_FUNC(sub_83C92AC4);
PPC_FUNC_IMPL(__imp__sub_83C92AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92AC8"))) PPC_WEAK_FUNC(sub_83C92AC8);
PPC_FUNC_IMPL(__imp__sub_83C92AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22568
	ctx.r3.s64 = ctx.r11.s64 + 22568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92AD4"))) PPC_WEAK_FUNC(sub_83C92AD4);
PPC_FUNC_IMPL(__imp__sub_83C92AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92AD8"))) PPC_WEAK_FUNC(sub_83C92AD8);
PPC_FUNC_IMPL(__imp__sub_83C92AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22576
	ctx.r3.s64 = ctx.r11.s64 + 22576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92AE4"))) PPC_WEAK_FUNC(sub_83C92AE4);
PPC_FUNC_IMPL(__imp__sub_83C92AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92AE8"))) PPC_WEAK_FUNC(sub_83C92AE8);
PPC_FUNC_IMPL(__imp__sub_83C92AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22584
	ctx.r3.s64 = ctx.r11.s64 + 22584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92AF4"))) PPC_WEAK_FUNC(sub_83C92AF4);
PPC_FUNC_IMPL(__imp__sub_83C92AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92AF8"))) PPC_WEAK_FUNC(sub_83C92AF8);
PPC_FUNC_IMPL(__imp__sub_83C92AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22592
	ctx.r3.s64 = ctx.r11.s64 + 22592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92B04"))) PPC_WEAK_FUNC(sub_83C92B04);
PPC_FUNC_IMPL(__imp__sub_83C92B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92B08"))) PPC_WEAK_FUNC(sub_83C92B08);
PPC_FUNC_IMPL(__imp__sub_83C92B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22600
	ctx.r3.s64 = ctx.r11.s64 + 22600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92B14"))) PPC_WEAK_FUNC(sub_83C92B14);
PPC_FUNC_IMPL(__imp__sub_83C92B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92B18"))) PPC_WEAK_FUNC(sub_83C92B18);
PPC_FUNC_IMPL(__imp__sub_83C92B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22608
	ctx.r3.s64 = ctx.r11.s64 + 22608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92B24"))) PPC_WEAK_FUNC(sub_83C92B24);
PPC_FUNC_IMPL(__imp__sub_83C92B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92B28"))) PPC_WEAK_FUNC(sub_83C92B28);
PPC_FUNC_IMPL(__imp__sub_83C92B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22616
	ctx.r3.s64 = ctx.r11.s64 + 22616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92B34"))) PPC_WEAK_FUNC(sub_83C92B34);
PPC_FUNC_IMPL(__imp__sub_83C92B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92B38"))) PPC_WEAK_FUNC(sub_83C92B38);
PPC_FUNC_IMPL(__imp__sub_83C92B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22624
	ctx.r3.s64 = ctx.r11.s64 + 22624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92B44"))) PPC_WEAK_FUNC(sub_83C92B44);
PPC_FUNC_IMPL(__imp__sub_83C92B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92B48"))) PPC_WEAK_FUNC(sub_83C92B48);
PPC_FUNC_IMPL(__imp__sub_83C92B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22632
	ctx.r3.s64 = ctx.r11.s64 + 22632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92B54"))) PPC_WEAK_FUNC(sub_83C92B54);
PPC_FUNC_IMPL(__imp__sub_83C92B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92B58"))) PPC_WEAK_FUNC(sub_83C92B58);
PPC_FUNC_IMPL(__imp__sub_83C92B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22640
	ctx.r3.s64 = ctx.r11.s64 + 22640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92B64"))) PPC_WEAK_FUNC(sub_83C92B64);
PPC_FUNC_IMPL(__imp__sub_83C92B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92B68"))) PPC_WEAK_FUNC(sub_83C92B68);
PPC_FUNC_IMPL(__imp__sub_83C92B68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4112
	ctx.r7.s64 = ctx.r8.s64 + -4112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4112(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92B90"))) PPC_WEAK_FUNC(sub_83C92B90);
PPC_FUNC_IMPL(__imp__sub_83C92B90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-2644
	ctx.r6.s64 = ctx.r7.s64 + -2644;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2716(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2716);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4112);
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
	// std r9,-2644(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2644, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92BD8"))) PPC_WEAK_FUNC(sub_83C92BD8);
PPC_FUNC_IMPL(__imp__sub_83C92BD8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-4128
	ctx.r3.s64 = ctx.r11.s64 + -4128;
	// bl 0x83523120
	ctx.lr = 0x83C92BF0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22648
	ctx.r3.s64 = ctx.r10.s64 + 22648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C92BFC;
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

__attribute__((alias("__imp__sub_83C92C0C"))) PPC_WEAK_FUNC(sub_83C92C0C);
PPC_FUNC_IMPL(__imp__sub_83C92C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92C10"))) PPC_WEAK_FUNC(sub_83C92C10);
PPC_FUNC_IMPL(__imp__sub_83C92C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22664
	ctx.r3.s64 = ctx.r11.s64 + 22664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92C1C"))) PPC_WEAK_FUNC(sub_83C92C1C);
PPC_FUNC_IMPL(__imp__sub_83C92C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92C20"))) PPC_WEAK_FUNC(sub_83C92C20);
PPC_FUNC_IMPL(__imp__sub_83C92C20) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-4104
	ctx.r3.s64 = ctx.r11.s64 + -4104;
	// bl 0x8259af80
	ctx.lr = 0x83C92C38;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22680
	ctx.r3.s64 = ctx.r10.s64 + 22680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C92C44;
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

__attribute__((alias("__imp__sub_83C92C54"))) PPC_WEAK_FUNC(sub_83C92C54);
PPC_FUNC_IMPL(__imp__sub_83C92C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92C58"))) PPC_WEAK_FUNC(sub_83C92C58);
PPC_FUNC_IMPL(__imp__sub_83C92C58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4124
	ctx.r11.s64 = ctx.r8.s64 + -4124;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2668);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22672
	ctx.r3.s64 = ctx.r6.s64 + 22672;
	// stw r10,-4124(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92C88"))) PPC_WEAK_FUNC(sub_83C92C88);
PPC_FUNC_IMPL(__imp__sub_83C92C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22688
	ctx.r3.s64 = ctx.r11.s64 + 22688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92C94"))) PPC_WEAK_FUNC(sub_83C92C94);
PPC_FUNC_IMPL(__imp__sub_83C92C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92C98"))) PPC_WEAK_FUNC(sub_83C92C98);
PPC_FUNC_IMPL(__imp__sub_83C92C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92CA4"))) PPC_WEAK_FUNC(sub_83C92CA4);
PPC_FUNC_IMPL(__imp__sub_83C92CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92CA8"))) PPC_WEAK_FUNC(sub_83C92CA8);
PPC_FUNC_IMPL(__imp__sub_83C92CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22704
	ctx.r3.s64 = ctx.r11.s64 + 22704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92CB4"))) PPC_WEAK_FUNC(sub_83C92CB4);
PPC_FUNC_IMPL(__imp__sub_83C92CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92CB8"))) PPC_WEAK_FUNC(sub_83C92CB8);
PPC_FUNC_IMPL(__imp__sub_83C92CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22712
	ctx.r3.s64 = ctx.r11.s64 + 22712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92CC4"))) PPC_WEAK_FUNC(sub_83C92CC4);
PPC_FUNC_IMPL(__imp__sub_83C92CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92CC8"))) PPC_WEAK_FUNC(sub_83C92CC8);
PPC_FUNC_IMPL(__imp__sub_83C92CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92CD4"))) PPC_WEAK_FUNC(sub_83C92CD4);
PPC_FUNC_IMPL(__imp__sub_83C92CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92CD8"))) PPC_WEAK_FUNC(sub_83C92CD8);
PPC_FUNC_IMPL(__imp__sub_83C92CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22728
	ctx.r3.s64 = ctx.r11.s64 + 22728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92CE4"))) PPC_WEAK_FUNC(sub_83C92CE4);
PPC_FUNC_IMPL(__imp__sub_83C92CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92CE8"))) PPC_WEAK_FUNC(sub_83C92CE8);
PPC_FUNC_IMPL(__imp__sub_83C92CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22736
	ctx.r3.s64 = ctx.r11.s64 + 22736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92CF4"))) PPC_WEAK_FUNC(sub_83C92CF4);
PPC_FUNC_IMPL(__imp__sub_83C92CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92CF8"))) PPC_WEAK_FUNC(sub_83C92CF8);
PPC_FUNC_IMPL(__imp__sub_83C92CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22744
	ctx.r3.s64 = ctx.r11.s64 + 22744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92D04"))) PPC_WEAK_FUNC(sub_83C92D04);
PPC_FUNC_IMPL(__imp__sub_83C92D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92D08"))) PPC_WEAK_FUNC(sub_83C92D08);
PPC_FUNC_IMPL(__imp__sub_83C92D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22752
	ctx.r3.s64 = ctx.r11.s64 + 22752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92D14"))) PPC_WEAK_FUNC(sub_83C92D14);
PPC_FUNC_IMPL(__imp__sub_83C92D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92D18"))) PPC_WEAK_FUNC(sub_83C92D18);
PPC_FUNC_IMPL(__imp__sub_83C92D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22760
	ctx.r3.s64 = ctx.r11.s64 + 22760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92D24"))) PPC_WEAK_FUNC(sub_83C92D24);
PPC_FUNC_IMPL(__imp__sub_83C92D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92D28"))) PPC_WEAK_FUNC(sub_83C92D28);
PPC_FUNC_IMPL(__imp__sub_83C92D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22768
	ctx.r3.s64 = ctx.r11.s64 + 22768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92D34"))) PPC_WEAK_FUNC(sub_83C92D34);
PPC_FUNC_IMPL(__imp__sub_83C92D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92D38"))) PPC_WEAK_FUNC(sub_83C92D38);
PPC_FUNC_IMPL(__imp__sub_83C92D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22776
	ctx.r3.s64 = ctx.r11.s64 + 22776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92D44"))) PPC_WEAK_FUNC(sub_83C92D44);
PPC_FUNC_IMPL(__imp__sub_83C92D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92D48"))) PPC_WEAK_FUNC(sub_83C92D48);
PPC_FUNC_IMPL(__imp__sub_83C92D48) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// bl 0x83523120
	ctx.lr = 0x83C92D60;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22784
	ctx.r3.s64 = ctx.r10.s64 + 22784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C92D6C;
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

__attribute__((alias("__imp__sub_83C92D7C"))) PPC_WEAK_FUNC(sub_83C92D7C);
PPC_FUNC_IMPL(__imp__sub_83C92D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92D80"))) PPC_WEAK_FUNC(sub_83C92D80);
PPC_FUNC_IMPL(__imp__sub_83C92D80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3744
	ctx.r7.s64 = ctx.r8.s64 + -3744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92DA8"))) PPC_WEAK_FUNC(sub_83C92DA8);
PPC_FUNC_IMPL(__imp__sub_83C92DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-2516
	ctx.r6.s64 = ctx.r7.s64 + -2516;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2588(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2588);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3744);
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
	// std r9,-2516(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2516, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C92DF0"))) PPC_WEAK_FUNC(sub_83C92DF0);
PPC_FUNC_IMPL(__imp__sub_83C92DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22800
	ctx.r3.s64 = ctx.r11.s64 + 22800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92DFC"))) PPC_WEAK_FUNC(sub_83C92DFC);
PPC_FUNC_IMPL(__imp__sub_83C92DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92E00"))) PPC_WEAK_FUNC(sub_83C92E00);
PPC_FUNC_IMPL(__imp__sub_83C92E00) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-3736
	ctx.r3.s64 = ctx.r11.s64 + -3736;
	// bl 0x8259af80
	ctx.lr = 0x83C92E18;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,22816
	ctx.r3.s64 = ctx.r10.s64 + 22816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C92E24;
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

__attribute__((alias("__imp__sub_83C92E34"))) PPC_WEAK_FUNC(sub_83C92E34);
PPC_FUNC_IMPL(__imp__sub_83C92E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92E38"))) PPC_WEAK_FUNC(sub_83C92E38);
PPC_FUNC_IMPL(__imp__sub_83C92E38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3756
	ctx.r11.s64 = ctx.r8.s64 + -3756;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2540);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22808
	ctx.r3.s64 = ctx.r6.s64 + 22808;
	// stw r10,-3756(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92E68"))) PPC_WEAK_FUNC(sub_83C92E68);
PPC_FUNC_IMPL(__imp__sub_83C92E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22824
	ctx.r3.s64 = ctx.r11.s64 + 22824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92E74"))) PPC_WEAK_FUNC(sub_83C92E74);
PPC_FUNC_IMPL(__imp__sub_83C92E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92E78"))) PPC_WEAK_FUNC(sub_83C92E78);
PPC_FUNC_IMPL(__imp__sub_83C92E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22832
	ctx.r3.s64 = ctx.r11.s64 + 22832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92E84"))) PPC_WEAK_FUNC(sub_83C92E84);
PPC_FUNC_IMPL(__imp__sub_83C92E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92E88"))) PPC_WEAK_FUNC(sub_83C92E88);
PPC_FUNC_IMPL(__imp__sub_83C92E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22840
	ctx.r3.s64 = ctx.r11.s64 + 22840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92E94"))) PPC_WEAK_FUNC(sub_83C92E94);
PPC_FUNC_IMPL(__imp__sub_83C92E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92E98"))) PPC_WEAK_FUNC(sub_83C92E98);
PPC_FUNC_IMPL(__imp__sub_83C92E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22848
	ctx.r3.s64 = ctx.r11.s64 + 22848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92EA4"))) PPC_WEAK_FUNC(sub_83C92EA4);
PPC_FUNC_IMPL(__imp__sub_83C92EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92EA8"))) PPC_WEAK_FUNC(sub_83C92EA8);
PPC_FUNC_IMPL(__imp__sub_83C92EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22856
	ctx.r3.s64 = ctx.r11.s64 + 22856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92EB4"))) PPC_WEAK_FUNC(sub_83C92EB4);
PPC_FUNC_IMPL(__imp__sub_83C92EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92EB8"))) PPC_WEAK_FUNC(sub_83C92EB8);
PPC_FUNC_IMPL(__imp__sub_83C92EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22864
	ctx.r3.s64 = ctx.r11.s64 + 22864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92EC4"))) PPC_WEAK_FUNC(sub_83C92EC4);
PPC_FUNC_IMPL(__imp__sub_83C92EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92EC8"))) PPC_WEAK_FUNC(sub_83C92EC8);
PPC_FUNC_IMPL(__imp__sub_83C92EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22872
	ctx.r3.s64 = ctx.r11.s64 + 22872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C92ED4"))) PPC_WEAK_FUNC(sub_83C92ED4);
PPC_FUNC_IMPL(__imp__sub_83C92ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C92ED8"))) PPC_WEAK_FUNC(sub_83C92ED8);
PPC_FUNC_IMPL(__imp__sub_83C92ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,22880
	ctx.r3.s64 = ctx.r11.s64 + 22880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

