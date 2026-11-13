#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C8F1C4"))) PPC_WEAK_FUNC(sub_83C8F1C4);
PPC_FUNC_IMPL(__imp__sub_83C8F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F1C8"))) PPC_WEAK_FUNC(sub_83C8F1C8);
PPC_FUNC_IMPL(__imp__sub_83C8F1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17136
	ctx.r3.s64 = ctx.r11.s64 + 17136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F1D4"))) PPC_WEAK_FUNC(sub_83C8F1D4);
PPC_FUNC_IMPL(__imp__sub_83C8F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F1D8"))) PPC_WEAK_FUNC(sub_83C8F1D8);
PPC_FUNC_IMPL(__imp__sub_83C8F1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17144
	ctx.r3.s64 = ctx.r11.s64 + 17144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F1E4"))) PPC_WEAK_FUNC(sub_83C8F1E4);
PPC_FUNC_IMPL(__imp__sub_83C8F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F1E8"))) PPC_WEAK_FUNC(sub_83C8F1E8);
PPC_FUNC_IMPL(__imp__sub_83C8F1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17152
	ctx.r3.s64 = ctx.r11.s64 + 17152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F1F4"))) PPC_WEAK_FUNC(sub_83C8F1F4);
PPC_FUNC_IMPL(__imp__sub_83C8F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F1F8"))) PPC_WEAK_FUNC(sub_83C8F1F8);
PPC_FUNC_IMPL(__imp__sub_83C8F1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17160
	ctx.r3.s64 = ctx.r11.s64 + 17160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F204"))) PPC_WEAK_FUNC(sub_83C8F204);
PPC_FUNC_IMPL(__imp__sub_83C8F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F208"))) PPC_WEAK_FUNC(sub_83C8F208);
PPC_FUNC_IMPL(__imp__sub_83C8F208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17168
	ctx.r3.s64 = ctx.r11.s64 + 17168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F214"))) PPC_WEAK_FUNC(sub_83C8F214);
PPC_FUNC_IMPL(__imp__sub_83C8F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F218"))) PPC_WEAK_FUNC(sub_83C8F218);
PPC_FUNC_IMPL(__imp__sub_83C8F218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17176
	ctx.r3.s64 = ctx.r11.s64 + 17176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F224"))) PPC_WEAK_FUNC(sub_83C8F224);
PPC_FUNC_IMPL(__imp__sub_83C8F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F228"))) PPC_WEAK_FUNC(sub_83C8F228);
PPC_FUNC_IMPL(__imp__sub_83C8F228) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32168
	ctx.r7.s64 = ctx.r8.s64 + 32168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32168);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32168, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8F250"))) PPC_WEAK_FUNC(sub_83C8F250);
PPC_FUNC_IMPL(__imp__sub_83C8F250) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-8108
	ctx.r6.s64 = ctx.r7.s64 + -8108;
	// lis r3,-31751
	ctx.r3.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8180(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8180);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32168);
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
	// std r9,-8108(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8108, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8F298"))) PPC_WEAK_FUNC(sub_83C8F298);
PPC_FUNC_IMPL(__imp__sub_83C8F298) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,32152
	ctx.r3.s64 = ctx.r11.s64 + 32152;
	// bl 0x83523120
	ctx.lr = 0x83C8F2B0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,17184
	ctx.r3.s64 = ctx.r10.s64 + 17184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8F2BC;
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

__attribute__((alias("__imp__sub_83C8F2CC"))) PPC_WEAK_FUNC(sub_83C8F2CC);
PPC_FUNC_IMPL(__imp__sub_83C8F2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F2D0"))) PPC_WEAK_FUNC(sub_83C8F2D0);
PPC_FUNC_IMPL(__imp__sub_83C8F2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17200
	ctx.r3.s64 = ctx.r11.s64 + 17200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F2DC"))) PPC_WEAK_FUNC(sub_83C8F2DC);
PPC_FUNC_IMPL(__imp__sub_83C8F2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F2E0"))) PPC_WEAK_FUNC(sub_83C8F2E0);
PPC_FUNC_IMPL(__imp__sub_83C8F2E0) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// bl 0x8259af80
	ctx.lr = 0x83C8F2F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,17216
	ctx.r3.s64 = ctx.r10.s64 + 17216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8F304;
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

__attribute__((alias("__imp__sub_83C8F314"))) PPC_WEAK_FUNC(sub_83C8F314);
PPC_FUNC_IMPL(__imp__sub_83C8F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F318"))) PPC_WEAK_FUNC(sub_83C8F318);
PPC_FUNC_IMPL(__imp__sub_83C8F318) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32156
	ctx.r11.s64 = ctx.r8.s64 + 32156;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-8132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8132);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17208
	ctx.r3.s64 = ctx.r6.s64 + 17208;
	// stw r10,32156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32156, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F348"))) PPC_WEAK_FUNC(sub_83C8F348);
PPC_FUNC_IMPL(__imp__sub_83C8F348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17224
	ctx.r3.s64 = ctx.r11.s64 + 17224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F354"))) PPC_WEAK_FUNC(sub_83C8F354);
PPC_FUNC_IMPL(__imp__sub_83C8F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F358"))) PPC_WEAK_FUNC(sub_83C8F358);
PPC_FUNC_IMPL(__imp__sub_83C8F358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17232
	ctx.r3.s64 = ctx.r11.s64 + 17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F364"))) PPC_WEAK_FUNC(sub_83C8F364);
PPC_FUNC_IMPL(__imp__sub_83C8F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F368"))) PPC_WEAK_FUNC(sub_83C8F368);
PPC_FUNC_IMPL(__imp__sub_83C8F368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17240
	ctx.r3.s64 = ctx.r11.s64 + 17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F374"))) PPC_WEAK_FUNC(sub_83C8F374);
PPC_FUNC_IMPL(__imp__sub_83C8F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F378"))) PPC_WEAK_FUNC(sub_83C8F378);
PPC_FUNC_IMPL(__imp__sub_83C8F378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17248
	ctx.r3.s64 = ctx.r11.s64 + 17248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F384"))) PPC_WEAK_FUNC(sub_83C8F384);
PPC_FUNC_IMPL(__imp__sub_83C8F384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F388"))) PPC_WEAK_FUNC(sub_83C8F388);
PPC_FUNC_IMPL(__imp__sub_83C8F388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17256
	ctx.r3.s64 = ctx.r11.s64 + 17256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F394"))) PPC_WEAK_FUNC(sub_83C8F394);
PPC_FUNC_IMPL(__imp__sub_83C8F394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F398"))) PPC_WEAK_FUNC(sub_83C8F398);
PPC_FUNC_IMPL(__imp__sub_83C8F398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17264
	ctx.r3.s64 = ctx.r11.s64 + 17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F3A4"))) PPC_WEAK_FUNC(sub_83C8F3A4);
PPC_FUNC_IMPL(__imp__sub_83C8F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F3A8"))) PPC_WEAK_FUNC(sub_83C8F3A8);
PPC_FUNC_IMPL(__imp__sub_83C8F3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17272
	ctx.r3.s64 = ctx.r11.s64 + 17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F3B4"))) PPC_WEAK_FUNC(sub_83C8F3B4);
PPC_FUNC_IMPL(__imp__sub_83C8F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F3B8"))) PPC_WEAK_FUNC(sub_83C8F3B8);
PPC_FUNC_IMPL(__imp__sub_83C8F3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17280
	ctx.r3.s64 = ctx.r11.s64 + 17280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F3C4"))) PPC_WEAK_FUNC(sub_83C8F3C4);
PPC_FUNC_IMPL(__imp__sub_83C8F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F3C8"))) PPC_WEAK_FUNC(sub_83C8F3C8);
PPC_FUNC_IMPL(__imp__sub_83C8F3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17288
	ctx.r3.s64 = ctx.r11.s64 + 17288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F3D4"))) PPC_WEAK_FUNC(sub_83C8F3D4);
PPC_FUNC_IMPL(__imp__sub_83C8F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F3D8"))) PPC_WEAK_FUNC(sub_83C8F3D8);
PPC_FUNC_IMPL(__imp__sub_83C8F3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17296
	ctx.r3.s64 = ctx.r11.s64 + 17296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F3E4"))) PPC_WEAK_FUNC(sub_83C8F3E4);
PPC_FUNC_IMPL(__imp__sub_83C8F3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F3E8"))) PPC_WEAK_FUNC(sub_83C8F3E8);
PPC_FUNC_IMPL(__imp__sub_83C8F3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17304
	ctx.r3.s64 = ctx.r11.s64 + 17304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F3F4"))) PPC_WEAK_FUNC(sub_83C8F3F4);
PPC_FUNC_IMPL(__imp__sub_83C8F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F3F8"))) PPC_WEAK_FUNC(sub_83C8F3F8);
PPC_FUNC_IMPL(__imp__sub_83C8F3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17312
	ctx.r3.s64 = ctx.r11.s64 + 17312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F404"))) PPC_WEAK_FUNC(sub_83C8F404);
PPC_FUNC_IMPL(__imp__sub_83C8F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F408"))) PPC_WEAK_FUNC(sub_83C8F408);
PPC_FUNC_IMPL(__imp__sub_83C8F408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17320
	ctx.r3.s64 = ctx.r11.s64 + 17320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F414"))) PPC_WEAK_FUNC(sub_83C8F414);
PPC_FUNC_IMPL(__imp__sub_83C8F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F418"))) PPC_WEAK_FUNC(sub_83C8F418);
PPC_FUNC_IMPL(__imp__sub_83C8F418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17328
	ctx.r3.s64 = ctx.r11.s64 + 17328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F424"))) PPC_WEAK_FUNC(sub_83C8F424);
PPC_FUNC_IMPL(__imp__sub_83C8F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F428"))) PPC_WEAK_FUNC(sub_83C8F428);
PPC_FUNC_IMPL(__imp__sub_83C8F428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17336
	ctx.r3.s64 = ctx.r11.s64 + 17336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F434"))) PPC_WEAK_FUNC(sub_83C8F434);
PPC_FUNC_IMPL(__imp__sub_83C8F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F438"))) PPC_WEAK_FUNC(sub_83C8F438);
PPC_FUNC_IMPL(__imp__sub_83C8F438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17344
	ctx.r3.s64 = ctx.r11.s64 + 17344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F444"))) PPC_WEAK_FUNC(sub_83C8F444);
PPC_FUNC_IMPL(__imp__sub_83C8F444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F448"))) PPC_WEAK_FUNC(sub_83C8F448);
PPC_FUNC_IMPL(__imp__sub_83C8F448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17352
	ctx.r3.s64 = ctx.r11.s64 + 17352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F454"))) PPC_WEAK_FUNC(sub_83C8F454);
PPC_FUNC_IMPL(__imp__sub_83C8F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F458"))) PPC_WEAK_FUNC(sub_83C8F458);
PPC_FUNC_IMPL(__imp__sub_83C8F458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17360
	ctx.r3.s64 = ctx.r11.s64 + 17360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F464"))) PPC_WEAK_FUNC(sub_83C8F464);
PPC_FUNC_IMPL(__imp__sub_83C8F464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F468"))) PPC_WEAK_FUNC(sub_83C8F468);
PPC_FUNC_IMPL(__imp__sub_83C8F468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17368
	ctx.r3.s64 = ctx.r11.s64 + 17368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F474"))) PPC_WEAK_FUNC(sub_83C8F474);
PPC_FUNC_IMPL(__imp__sub_83C8F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F478"))) PPC_WEAK_FUNC(sub_83C8F478);
PPC_FUNC_IMPL(__imp__sub_83C8F478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17376
	ctx.r3.s64 = ctx.r11.s64 + 17376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F484"))) PPC_WEAK_FUNC(sub_83C8F484);
PPC_FUNC_IMPL(__imp__sub_83C8F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F488"))) PPC_WEAK_FUNC(sub_83C8F488);
PPC_FUNC_IMPL(__imp__sub_83C8F488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17384
	ctx.r3.s64 = ctx.r11.s64 + 17384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F494"))) PPC_WEAK_FUNC(sub_83C8F494);
PPC_FUNC_IMPL(__imp__sub_83C8F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F498"))) PPC_WEAK_FUNC(sub_83C8F498);
PPC_FUNC_IMPL(__imp__sub_83C8F498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17392
	ctx.r3.s64 = ctx.r11.s64 + 17392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F4A4"))) PPC_WEAK_FUNC(sub_83C8F4A4);
PPC_FUNC_IMPL(__imp__sub_83C8F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F4A8"))) PPC_WEAK_FUNC(sub_83C8F4A8);
PPC_FUNC_IMPL(__imp__sub_83C8F4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17400
	ctx.r3.s64 = ctx.r11.s64 + 17400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F4B4"))) PPC_WEAK_FUNC(sub_83C8F4B4);
PPC_FUNC_IMPL(__imp__sub_83C8F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F4B8"))) PPC_WEAK_FUNC(sub_83C8F4B8);
PPC_FUNC_IMPL(__imp__sub_83C8F4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17408
	ctx.r3.s64 = ctx.r11.s64 + 17408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F4C4"))) PPC_WEAK_FUNC(sub_83C8F4C4);
PPC_FUNC_IMPL(__imp__sub_83C8F4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F4C8"))) PPC_WEAK_FUNC(sub_83C8F4C8);
PPC_FUNC_IMPL(__imp__sub_83C8F4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32544
	ctx.r7.s64 = ctx.r8.s64 + 32544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32544);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32544, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8F4F0"))) PPC_WEAK_FUNC(sub_83C8F4F0);
PPC_FUNC_IMPL(__imp__sub_83C8F4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-7552
	ctx.r6.s64 = ctx.r7.s64 + -7552;
	// lis r3,-31751
	ctx.r3.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7624(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7624);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32544(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32544);
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
	// std r9,-7552(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7552, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8F538"))) PPC_WEAK_FUNC(sub_83C8F538);
PPC_FUNC_IMPL(__imp__sub_83C8F538) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,32528
	ctx.r3.s64 = ctx.r11.s64 + 32528;
	// bl 0x83523120
	ctx.lr = 0x83C8F550;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,17416
	ctx.r3.s64 = ctx.r10.s64 + 17416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8F55C;
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

__attribute__((alias("__imp__sub_83C8F56C"))) PPC_WEAK_FUNC(sub_83C8F56C);
PPC_FUNC_IMPL(__imp__sub_83C8F56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F570"))) PPC_WEAK_FUNC(sub_83C8F570);
PPC_FUNC_IMPL(__imp__sub_83C8F570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17432
	ctx.r3.s64 = ctx.r11.s64 + 17432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F57C"))) PPC_WEAK_FUNC(sub_83C8F57C);
PPC_FUNC_IMPL(__imp__sub_83C8F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F580"))) PPC_WEAK_FUNC(sub_83C8F580);
PPC_FUNC_IMPL(__imp__sub_83C8F580) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,32552
	ctx.r3.s64 = ctx.r11.s64 + 32552;
	// bl 0x8259af80
	ctx.lr = 0x83C8F598;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,17448
	ctx.r3.s64 = ctx.r10.s64 + 17448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8F5A4;
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

__attribute__((alias("__imp__sub_83C8F5B4"))) PPC_WEAK_FUNC(sub_83C8F5B4);
PPC_FUNC_IMPL(__imp__sub_83C8F5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F5B8"))) PPC_WEAK_FUNC(sub_83C8F5B8);
PPC_FUNC_IMPL(__imp__sub_83C8F5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32532
	ctx.r11.s64 = ctx.r8.s64 + 32532;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-7576(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7576);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17440
	ctx.r3.s64 = ctx.r6.s64 + 17440;
	// stw r10,32532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32532, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F5E8"))) PPC_WEAK_FUNC(sub_83C8F5E8);
PPC_FUNC_IMPL(__imp__sub_83C8F5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17456
	ctx.r3.s64 = ctx.r11.s64 + 17456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F5F4"))) PPC_WEAK_FUNC(sub_83C8F5F4);
PPC_FUNC_IMPL(__imp__sub_83C8F5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F5F8"))) PPC_WEAK_FUNC(sub_83C8F5F8);
PPC_FUNC_IMPL(__imp__sub_83C8F5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17464
	ctx.r3.s64 = ctx.r11.s64 + 17464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F604"))) PPC_WEAK_FUNC(sub_83C8F604);
PPC_FUNC_IMPL(__imp__sub_83C8F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F608"))) PPC_WEAK_FUNC(sub_83C8F608);
PPC_FUNC_IMPL(__imp__sub_83C8F608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17472
	ctx.r3.s64 = ctx.r11.s64 + 17472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F614"))) PPC_WEAK_FUNC(sub_83C8F614);
PPC_FUNC_IMPL(__imp__sub_83C8F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F618"))) PPC_WEAK_FUNC(sub_83C8F618);
PPC_FUNC_IMPL(__imp__sub_83C8F618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17480
	ctx.r3.s64 = ctx.r11.s64 + 17480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F624"))) PPC_WEAK_FUNC(sub_83C8F624);
PPC_FUNC_IMPL(__imp__sub_83C8F624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F628"))) PPC_WEAK_FUNC(sub_83C8F628);
PPC_FUNC_IMPL(__imp__sub_83C8F628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17488
	ctx.r3.s64 = ctx.r11.s64 + 17488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F634"))) PPC_WEAK_FUNC(sub_83C8F634);
PPC_FUNC_IMPL(__imp__sub_83C8F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F638"))) PPC_WEAK_FUNC(sub_83C8F638);
PPC_FUNC_IMPL(__imp__sub_83C8F638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17496
	ctx.r3.s64 = ctx.r11.s64 + 17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F644"))) PPC_WEAK_FUNC(sub_83C8F644);
PPC_FUNC_IMPL(__imp__sub_83C8F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F648"))) PPC_WEAK_FUNC(sub_83C8F648);
PPC_FUNC_IMPL(__imp__sub_83C8F648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F654"))) PPC_WEAK_FUNC(sub_83C8F654);
PPC_FUNC_IMPL(__imp__sub_83C8F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F658"))) PPC_WEAK_FUNC(sub_83C8F658);
PPC_FUNC_IMPL(__imp__sub_83C8F658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17512
	ctx.r3.s64 = ctx.r11.s64 + 17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F664"))) PPC_WEAK_FUNC(sub_83C8F664);
PPC_FUNC_IMPL(__imp__sub_83C8F664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F668"))) PPC_WEAK_FUNC(sub_83C8F668);
PPC_FUNC_IMPL(__imp__sub_83C8F668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F674"))) PPC_WEAK_FUNC(sub_83C8F674);
PPC_FUNC_IMPL(__imp__sub_83C8F674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F678"))) PPC_WEAK_FUNC(sub_83C8F678);
PPC_FUNC_IMPL(__imp__sub_83C8F678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F684"))) PPC_WEAK_FUNC(sub_83C8F684);
PPC_FUNC_IMPL(__imp__sub_83C8F684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F688"))) PPC_WEAK_FUNC(sub_83C8F688);
PPC_FUNC_IMPL(__imp__sub_83C8F688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17536
	ctx.r3.s64 = ctx.r11.s64 + 17536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F694"))) PPC_WEAK_FUNC(sub_83C8F694);
PPC_FUNC_IMPL(__imp__sub_83C8F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F698"))) PPC_WEAK_FUNC(sub_83C8F698);
PPC_FUNC_IMPL(__imp__sub_83C8F698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17544
	ctx.r3.s64 = ctx.r11.s64 + 17544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F6A4"))) PPC_WEAK_FUNC(sub_83C8F6A4);
PPC_FUNC_IMPL(__imp__sub_83C8F6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F6A8"))) PPC_WEAK_FUNC(sub_83C8F6A8);
PPC_FUNC_IMPL(__imp__sub_83C8F6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32640
	ctx.r7.s64 = ctx.r8.s64 + -32640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32640(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8F6D0"))) PPC_WEAK_FUNC(sub_83C8F6D0);
PPC_FUNC_IMPL(__imp__sub_83C8F6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17552
	ctx.r3.s64 = ctx.r11.s64 + 17552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F6DC"))) PPC_WEAK_FUNC(sub_83C8F6DC);
PPC_FUNC_IMPL(__imp__sub_83C8F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F6E0"))) PPC_WEAK_FUNC(sub_83C8F6E0);
PPC_FUNC_IMPL(__imp__sub_83C8F6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17560
	ctx.r3.s64 = ctx.r11.s64 + 17560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F6EC"))) PPC_WEAK_FUNC(sub_83C8F6EC);
PPC_FUNC_IMPL(__imp__sub_83C8F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F6F0"))) PPC_WEAK_FUNC(sub_83C8F6F0);
PPC_FUNC_IMPL(__imp__sub_83C8F6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17568
	ctx.r3.s64 = ctx.r11.s64 + 17568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F6FC"))) PPC_WEAK_FUNC(sub_83C8F6FC);
PPC_FUNC_IMPL(__imp__sub_83C8F6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F700"))) PPC_WEAK_FUNC(sub_83C8F700);
PPC_FUNC_IMPL(__imp__sub_83C8F700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17576
	ctx.r3.s64 = ctx.r11.s64 + 17576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F70C"))) PPC_WEAK_FUNC(sub_83C8F70C);
PPC_FUNC_IMPL(__imp__sub_83C8F70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F710"))) PPC_WEAK_FUNC(sub_83C8F710);
PPC_FUNC_IMPL(__imp__sub_83C8F710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17584
	ctx.r3.s64 = ctx.r11.s64 + 17584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F71C"))) PPC_WEAK_FUNC(sub_83C8F71C);
PPC_FUNC_IMPL(__imp__sub_83C8F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F720"))) PPC_WEAK_FUNC(sub_83C8F720);
PPC_FUNC_IMPL(__imp__sub_83C8F720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17592
	ctx.r3.s64 = ctx.r11.s64 + 17592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F72C"))) PPC_WEAK_FUNC(sub_83C8F72C);
PPC_FUNC_IMPL(__imp__sub_83C8F72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F730"))) PPC_WEAK_FUNC(sub_83C8F730);
PPC_FUNC_IMPL(__imp__sub_83C8F730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17600
	ctx.r3.s64 = ctx.r11.s64 + 17600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F73C"))) PPC_WEAK_FUNC(sub_83C8F73C);
PPC_FUNC_IMPL(__imp__sub_83C8F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F740"))) PPC_WEAK_FUNC(sub_83C8F740);
PPC_FUNC_IMPL(__imp__sub_83C8F740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17608
	ctx.r3.s64 = ctx.r11.s64 + 17608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F74C"))) PPC_WEAK_FUNC(sub_83C8F74C);
PPC_FUNC_IMPL(__imp__sub_83C8F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F750"))) PPC_WEAK_FUNC(sub_83C8F750);
PPC_FUNC_IMPL(__imp__sub_83C8F750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17616
	ctx.r3.s64 = ctx.r11.s64 + 17616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F75C"))) PPC_WEAK_FUNC(sub_83C8F75C);
PPC_FUNC_IMPL(__imp__sub_83C8F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F760"))) PPC_WEAK_FUNC(sub_83C8F760);
PPC_FUNC_IMPL(__imp__sub_83C8F760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17624
	ctx.r3.s64 = ctx.r11.s64 + 17624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F76C"))) PPC_WEAK_FUNC(sub_83C8F76C);
PPC_FUNC_IMPL(__imp__sub_83C8F76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F770"))) PPC_WEAK_FUNC(sub_83C8F770);
PPC_FUNC_IMPL(__imp__sub_83C8F770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17632
	ctx.r3.s64 = ctx.r11.s64 + 17632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F77C"))) PPC_WEAK_FUNC(sub_83C8F77C);
PPC_FUNC_IMPL(__imp__sub_83C8F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F780"))) PPC_WEAK_FUNC(sub_83C8F780);
PPC_FUNC_IMPL(__imp__sub_83C8F780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17640
	ctx.r3.s64 = ctx.r11.s64 + 17640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F78C"))) PPC_WEAK_FUNC(sub_83C8F78C);
PPC_FUNC_IMPL(__imp__sub_83C8F78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F790"))) PPC_WEAK_FUNC(sub_83C8F790);
PPC_FUNC_IMPL(__imp__sub_83C8F790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17648
	ctx.r3.s64 = ctx.r11.s64 + 17648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F79C"))) PPC_WEAK_FUNC(sub_83C8F79C);
PPC_FUNC_IMPL(__imp__sub_83C8F79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F7A0"))) PPC_WEAK_FUNC(sub_83C8F7A0);
PPC_FUNC_IMPL(__imp__sub_83C8F7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17656
	ctx.r3.s64 = ctx.r11.s64 + 17656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F7AC"))) PPC_WEAK_FUNC(sub_83C8F7AC);
PPC_FUNC_IMPL(__imp__sub_83C8F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F7B0"))) PPC_WEAK_FUNC(sub_83C8F7B0);
PPC_FUNC_IMPL(__imp__sub_83C8F7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17664
	ctx.r3.s64 = ctx.r11.s64 + 17664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F7BC"))) PPC_WEAK_FUNC(sub_83C8F7BC);
PPC_FUNC_IMPL(__imp__sub_83C8F7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F7C0"))) PPC_WEAK_FUNC(sub_83C8F7C0);
PPC_FUNC_IMPL(__imp__sub_83C8F7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17672
	ctx.r3.s64 = ctx.r11.s64 + 17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F7CC"))) PPC_WEAK_FUNC(sub_83C8F7CC);
PPC_FUNC_IMPL(__imp__sub_83C8F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F7D0"))) PPC_WEAK_FUNC(sub_83C8F7D0);
PPC_FUNC_IMPL(__imp__sub_83C8F7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17680
	ctx.r3.s64 = ctx.r11.s64 + 17680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F7DC"))) PPC_WEAK_FUNC(sub_83C8F7DC);
PPC_FUNC_IMPL(__imp__sub_83C8F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F7E0"))) PPC_WEAK_FUNC(sub_83C8F7E0);
PPC_FUNC_IMPL(__imp__sub_83C8F7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17688
	ctx.r3.s64 = ctx.r11.s64 + 17688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F7EC"))) PPC_WEAK_FUNC(sub_83C8F7EC);
PPC_FUNC_IMPL(__imp__sub_83C8F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F7F0"))) PPC_WEAK_FUNC(sub_83C8F7F0);
PPC_FUNC_IMPL(__imp__sub_83C8F7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17696
	ctx.r3.s64 = ctx.r11.s64 + 17696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F7FC"))) PPC_WEAK_FUNC(sub_83C8F7FC);
PPC_FUNC_IMPL(__imp__sub_83C8F7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F800"))) PPC_WEAK_FUNC(sub_83C8F800);
PPC_FUNC_IMPL(__imp__sub_83C8F800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17704
	ctx.r3.s64 = ctx.r11.s64 + 17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F80C"))) PPC_WEAK_FUNC(sub_83C8F80C);
PPC_FUNC_IMPL(__imp__sub_83C8F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F810"))) PPC_WEAK_FUNC(sub_83C8F810);
PPC_FUNC_IMPL(__imp__sub_83C8F810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17712
	ctx.r3.s64 = ctx.r11.s64 + 17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F81C"))) PPC_WEAK_FUNC(sub_83C8F81C);
PPC_FUNC_IMPL(__imp__sub_83C8F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F820"))) PPC_WEAK_FUNC(sub_83C8F820);
PPC_FUNC_IMPL(__imp__sub_83C8F820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17720
	ctx.r3.s64 = ctx.r11.s64 + 17720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F82C"))) PPC_WEAK_FUNC(sub_83C8F82C);
PPC_FUNC_IMPL(__imp__sub_83C8F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F830"))) PPC_WEAK_FUNC(sub_83C8F830);
PPC_FUNC_IMPL(__imp__sub_83C8F830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17728
	ctx.r3.s64 = ctx.r11.s64 + 17728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F83C"))) PPC_WEAK_FUNC(sub_83C8F83C);
PPC_FUNC_IMPL(__imp__sub_83C8F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F840"))) PPC_WEAK_FUNC(sub_83C8F840);
PPC_FUNC_IMPL(__imp__sub_83C8F840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17736
	ctx.r3.s64 = ctx.r11.s64 + 17736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F84C"))) PPC_WEAK_FUNC(sub_83C8F84C);
PPC_FUNC_IMPL(__imp__sub_83C8F84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F850"))) PPC_WEAK_FUNC(sub_83C8F850);
PPC_FUNC_IMPL(__imp__sub_83C8F850) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32624
	ctx.r7.s64 = ctx.r8.s64 + -32624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32624(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8F878"))) PPC_WEAK_FUNC(sub_83C8F878);
PPC_FUNC_IMPL(__imp__sub_83C8F878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17744
	ctx.r3.s64 = ctx.r11.s64 + 17744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F884"))) PPC_WEAK_FUNC(sub_83C8F884);
PPC_FUNC_IMPL(__imp__sub_83C8F884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F888"))) PPC_WEAK_FUNC(sub_83C8F888);
PPC_FUNC_IMPL(__imp__sub_83C8F888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17752
	ctx.r3.s64 = ctx.r11.s64 + 17752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F894"))) PPC_WEAK_FUNC(sub_83C8F894);
PPC_FUNC_IMPL(__imp__sub_83C8F894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F898"))) PPC_WEAK_FUNC(sub_83C8F898);
PPC_FUNC_IMPL(__imp__sub_83C8F898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17760
	ctx.r3.s64 = ctx.r11.s64 + 17760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F8A4"))) PPC_WEAK_FUNC(sub_83C8F8A4);
PPC_FUNC_IMPL(__imp__sub_83C8F8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F8A8"))) PPC_WEAK_FUNC(sub_83C8F8A8);
PPC_FUNC_IMPL(__imp__sub_83C8F8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17768
	ctx.r3.s64 = ctx.r11.s64 + 17768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F8B4"))) PPC_WEAK_FUNC(sub_83C8F8B4);
PPC_FUNC_IMPL(__imp__sub_83C8F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F8B8"))) PPC_WEAK_FUNC(sub_83C8F8B8);
PPC_FUNC_IMPL(__imp__sub_83C8F8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17776
	ctx.r3.s64 = ctx.r11.s64 + 17776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F8C4"))) PPC_WEAK_FUNC(sub_83C8F8C4);
PPC_FUNC_IMPL(__imp__sub_83C8F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F8C8"))) PPC_WEAK_FUNC(sub_83C8F8C8);
PPC_FUNC_IMPL(__imp__sub_83C8F8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17784
	ctx.r3.s64 = ctx.r11.s64 + 17784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F8D4"))) PPC_WEAK_FUNC(sub_83C8F8D4);
PPC_FUNC_IMPL(__imp__sub_83C8F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F8D8"))) PPC_WEAK_FUNC(sub_83C8F8D8);
PPC_FUNC_IMPL(__imp__sub_83C8F8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17792
	ctx.r3.s64 = ctx.r11.s64 + 17792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F8E4"))) PPC_WEAK_FUNC(sub_83C8F8E4);
PPC_FUNC_IMPL(__imp__sub_83C8F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F8E8"))) PPC_WEAK_FUNC(sub_83C8F8E8);
PPC_FUNC_IMPL(__imp__sub_83C8F8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17800
	ctx.r3.s64 = ctx.r11.s64 + 17800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F8F4"))) PPC_WEAK_FUNC(sub_83C8F8F4);
PPC_FUNC_IMPL(__imp__sub_83C8F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F8F8"))) PPC_WEAK_FUNC(sub_83C8F8F8);
PPC_FUNC_IMPL(__imp__sub_83C8F8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17808
	ctx.r3.s64 = ctx.r11.s64 + 17808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F904"))) PPC_WEAK_FUNC(sub_83C8F904);
PPC_FUNC_IMPL(__imp__sub_83C8F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F908"))) PPC_WEAK_FUNC(sub_83C8F908);
PPC_FUNC_IMPL(__imp__sub_83C8F908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17816
	ctx.r3.s64 = ctx.r11.s64 + 17816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F914"))) PPC_WEAK_FUNC(sub_83C8F914);
PPC_FUNC_IMPL(__imp__sub_83C8F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F918"))) PPC_WEAK_FUNC(sub_83C8F918);
PPC_FUNC_IMPL(__imp__sub_83C8F918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17824
	ctx.r3.s64 = ctx.r11.s64 + 17824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F924"))) PPC_WEAK_FUNC(sub_83C8F924);
PPC_FUNC_IMPL(__imp__sub_83C8F924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F928"))) PPC_WEAK_FUNC(sub_83C8F928);
PPC_FUNC_IMPL(__imp__sub_83C8F928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17832
	ctx.r3.s64 = ctx.r11.s64 + 17832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F934"))) PPC_WEAK_FUNC(sub_83C8F934);
PPC_FUNC_IMPL(__imp__sub_83C8F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F938"))) PPC_WEAK_FUNC(sub_83C8F938);
PPC_FUNC_IMPL(__imp__sub_83C8F938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F944"))) PPC_WEAK_FUNC(sub_83C8F944);
PPC_FUNC_IMPL(__imp__sub_83C8F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F948"))) PPC_WEAK_FUNC(sub_83C8F948);
PPC_FUNC_IMPL(__imp__sub_83C8F948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17848
	ctx.r3.s64 = ctx.r11.s64 + 17848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F954"))) PPC_WEAK_FUNC(sub_83C8F954);
PPC_FUNC_IMPL(__imp__sub_83C8F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F958"))) PPC_WEAK_FUNC(sub_83C8F958);
PPC_FUNC_IMPL(__imp__sub_83C8F958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17856
	ctx.r3.s64 = ctx.r11.s64 + 17856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F964"))) PPC_WEAK_FUNC(sub_83C8F964);
PPC_FUNC_IMPL(__imp__sub_83C8F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F968"))) PPC_WEAK_FUNC(sub_83C8F968);
PPC_FUNC_IMPL(__imp__sub_83C8F968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17864
	ctx.r3.s64 = ctx.r11.s64 + 17864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F974"))) PPC_WEAK_FUNC(sub_83C8F974);
PPC_FUNC_IMPL(__imp__sub_83C8F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F978"))) PPC_WEAK_FUNC(sub_83C8F978);
PPC_FUNC_IMPL(__imp__sub_83C8F978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17872
	ctx.r3.s64 = ctx.r11.s64 + 17872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F984"))) PPC_WEAK_FUNC(sub_83C8F984);
PPC_FUNC_IMPL(__imp__sub_83C8F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F988"))) PPC_WEAK_FUNC(sub_83C8F988);
PPC_FUNC_IMPL(__imp__sub_83C8F988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17880
	ctx.r3.s64 = ctx.r11.s64 + 17880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F994"))) PPC_WEAK_FUNC(sub_83C8F994);
PPC_FUNC_IMPL(__imp__sub_83C8F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F998"))) PPC_WEAK_FUNC(sub_83C8F998);
PPC_FUNC_IMPL(__imp__sub_83C8F998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17888
	ctx.r3.s64 = ctx.r11.s64 + 17888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F9A4"))) PPC_WEAK_FUNC(sub_83C8F9A4);
PPC_FUNC_IMPL(__imp__sub_83C8F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F9A8"))) PPC_WEAK_FUNC(sub_83C8F9A8);
PPC_FUNC_IMPL(__imp__sub_83C8F9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17896
	ctx.r3.s64 = ctx.r11.s64 + 17896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F9B4"))) PPC_WEAK_FUNC(sub_83C8F9B4);
PPC_FUNC_IMPL(__imp__sub_83C8F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F9B8"))) PPC_WEAK_FUNC(sub_83C8F9B8);
PPC_FUNC_IMPL(__imp__sub_83C8F9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17904
	ctx.r3.s64 = ctx.r11.s64 + 17904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F9C4"))) PPC_WEAK_FUNC(sub_83C8F9C4);
PPC_FUNC_IMPL(__imp__sub_83C8F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F9C8"))) PPC_WEAK_FUNC(sub_83C8F9C8);
PPC_FUNC_IMPL(__imp__sub_83C8F9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F9D4"))) PPC_WEAK_FUNC(sub_83C8F9D4);
PPC_FUNC_IMPL(__imp__sub_83C8F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F9D8"))) PPC_WEAK_FUNC(sub_83C8F9D8);
PPC_FUNC_IMPL(__imp__sub_83C8F9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17920
	ctx.r3.s64 = ctx.r11.s64 + 17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F9E4"))) PPC_WEAK_FUNC(sub_83C8F9E4);
PPC_FUNC_IMPL(__imp__sub_83C8F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F9E8"))) PPC_WEAK_FUNC(sub_83C8F9E8);
PPC_FUNC_IMPL(__imp__sub_83C8F9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17928
	ctx.r3.s64 = ctx.r11.s64 + 17928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8F9F4"))) PPC_WEAK_FUNC(sub_83C8F9F4);
PPC_FUNC_IMPL(__imp__sub_83C8F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8F9F8"))) PPC_WEAK_FUNC(sub_83C8F9F8);
PPC_FUNC_IMPL(__imp__sub_83C8F9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32592
	ctx.r7.s64 = ctx.r8.s64 + -32592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32592(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8FA20"))) PPC_WEAK_FUNC(sub_83C8FA20);
PPC_FUNC_IMPL(__imp__sub_83C8FA20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-7008
	ctx.r6.s64 = ctx.r7.s64 + -7008;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7080(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7080);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32592);
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
	// std r9,-7008(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7008, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8FA68"))) PPC_WEAK_FUNC(sub_83C8FA68);
PPC_FUNC_IMPL(__imp__sub_83C8FA68) {
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
	// addi r3,r11,-32608
	ctx.r3.s64 = ctx.r11.s64 + -32608;
	// bl 0x83523120
	ctx.lr = 0x83C8FA80;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,17936
	ctx.r3.s64 = ctx.r10.s64 + 17936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8FA8C;
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

__attribute__((alias("__imp__sub_83C8FA9C"))) PPC_WEAK_FUNC(sub_83C8FA9C);
PPC_FUNC_IMPL(__imp__sub_83C8FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FAA0"))) PPC_WEAK_FUNC(sub_83C8FAA0);
PPC_FUNC_IMPL(__imp__sub_83C8FAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17952
	ctx.r3.s64 = ctx.r11.s64 + 17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FAAC"))) PPC_WEAK_FUNC(sub_83C8FAAC);
PPC_FUNC_IMPL(__imp__sub_83C8FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FAB0"))) PPC_WEAK_FUNC(sub_83C8FAB0);
PPC_FUNC_IMPL(__imp__sub_83C8FAB0) {
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
	// addi r3,r11,-32584
	ctx.r3.s64 = ctx.r11.s64 + -32584;
	// bl 0x8259af80
	ctx.lr = 0x83C8FAC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,17968
	ctx.r3.s64 = ctx.r10.s64 + 17968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8FAD4;
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

__attribute__((alias("__imp__sub_83C8FAE4"))) PPC_WEAK_FUNC(sub_83C8FAE4);
PPC_FUNC_IMPL(__imp__sub_83C8FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FAE8"))) PPC_WEAK_FUNC(sub_83C8FAE8);
PPC_FUNC_IMPL(__imp__sub_83C8FAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32604
	ctx.r11.s64 = ctx.r8.s64 + -32604;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-7032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7032);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17960
	ctx.r3.s64 = ctx.r6.s64 + 17960;
	// stw r10,-32604(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32604, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB18"))) PPC_WEAK_FUNC(sub_83C8FB18);
PPC_FUNC_IMPL(__imp__sub_83C8FB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17976
	ctx.r3.s64 = ctx.r11.s64 + 17976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB24"))) PPC_WEAK_FUNC(sub_83C8FB24);
PPC_FUNC_IMPL(__imp__sub_83C8FB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FB28"))) PPC_WEAK_FUNC(sub_83C8FB28);
PPC_FUNC_IMPL(__imp__sub_83C8FB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17984
	ctx.r3.s64 = ctx.r11.s64 + 17984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB34"))) PPC_WEAK_FUNC(sub_83C8FB34);
PPC_FUNC_IMPL(__imp__sub_83C8FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FB38"))) PPC_WEAK_FUNC(sub_83C8FB38);
PPC_FUNC_IMPL(__imp__sub_83C8FB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,17992
	ctx.r3.s64 = ctx.r11.s64 + 17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB44"))) PPC_WEAK_FUNC(sub_83C8FB44);
PPC_FUNC_IMPL(__imp__sub_83C8FB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FB48"))) PPC_WEAK_FUNC(sub_83C8FB48);
PPC_FUNC_IMPL(__imp__sub_83C8FB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18000
	ctx.r3.s64 = ctx.r11.s64 + 18000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB54"))) PPC_WEAK_FUNC(sub_83C8FB54);
PPC_FUNC_IMPL(__imp__sub_83C8FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FB58"))) PPC_WEAK_FUNC(sub_83C8FB58);
PPC_FUNC_IMPL(__imp__sub_83C8FB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18008
	ctx.r3.s64 = ctx.r11.s64 + 18008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB64"))) PPC_WEAK_FUNC(sub_83C8FB64);
PPC_FUNC_IMPL(__imp__sub_83C8FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FB68"))) PPC_WEAK_FUNC(sub_83C8FB68);
PPC_FUNC_IMPL(__imp__sub_83C8FB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18016
	ctx.r3.s64 = ctx.r11.s64 + 18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB74"))) PPC_WEAK_FUNC(sub_83C8FB74);
PPC_FUNC_IMPL(__imp__sub_83C8FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FB78"))) PPC_WEAK_FUNC(sub_83C8FB78);
PPC_FUNC_IMPL(__imp__sub_83C8FB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18024
	ctx.r3.s64 = ctx.r11.s64 + 18024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB84"))) PPC_WEAK_FUNC(sub_83C8FB84);
PPC_FUNC_IMPL(__imp__sub_83C8FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FB88"))) PPC_WEAK_FUNC(sub_83C8FB88);
PPC_FUNC_IMPL(__imp__sub_83C8FB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18032
	ctx.r3.s64 = ctx.r11.s64 + 18032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FB94"))) PPC_WEAK_FUNC(sub_83C8FB94);
PPC_FUNC_IMPL(__imp__sub_83C8FB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FB98"))) PPC_WEAK_FUNC(sub_83C8FB98);
PPC_FUNC_IMPL(__imp__sub_83C8FB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18040
	ctx.r3.s64 = ctx.r11.s64 + 18040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FBA4"))) PPC_WEAK_FUNC(sub_83C8FBA4);
PPC_FUNC_IMPL(__imp__sub_83C8FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FBA8"))) PPC_WEAK_FUNC(sub_83C8FBA8);
PPC_FUNC_IMPL(__imp__sub_83C8FBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18048
	ctx.r3.s64 = ctx.r11.s64 + 18048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FBB4"))) PPC_WEAK_FUNC(sub_83C8FBB4);
PPC_FUNC_IMPL(__imp__sub_83C8FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FBB8"))) PPC_WEAK_FUNC(sub_83C8FBB8);
PPC_FUNC_IMPL(__imp__sub_83C8FBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18056
	ctx.r3.s64 = ctx.r11.s64 + 18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FBC4"))) PPC_WEAK_FUNC(sub_83C8FBC4);
PPC_FUNC_IMPL(__imp__sub_83C8FBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FBC8"))) PPC_WEAK_FUNC(sub_83C8FBC8);
PPC_FUNC_IMPL(__imp__sub_83C8FBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18064
	ctx.r3.s64 = ctx.r11.s64 + 18064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FBD4"))) PPC_WEAK_FUNC(sub_83C8FBD4);
PPC_FUNC_IMPL(__imp__sub_83C8FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FBD8"))) PPC_WEAK_FUNC(sub_83C8FBD8);
PPC_FUNC_IMPL(__imp__sub_83C8FBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32224
	ctx.r7.s64 = ctx.r8.s64 + -32224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32224(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8FC00"))) PPC_WEAK_FUNC(sub_83C8FC00);
PPC_FUNC_IMPL(__imp__sub_83C8FC00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-6880
	ctx.r6.s64 = ctx.r7.s64 + -6880;
	// lis r3,-31750
	ctx.r3.s64 = -2080768000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-6952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -6952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32224);
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
	// std r9,-6880(r7)
	PPC_STORE_U64(ctx.r7.u32 + -6880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C8FC48"))) PPC_WEAK_FUNC(sub_83C8FC48);
PPC_FUNC_IMPL(__imp__sub_83C8FC48) {
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
	// addi r3,r11,-32240
	ctx.r3.s64 = ctx.r11.s64 + -32240;
	// bl 0x83523120
	ctx.lr = 0x83C8FC60;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,18072
	ctx.r3.s64 = ctx.r10.s64 + 18072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8FC6C;
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

__attribute__((alias("__imp__sub_83C8FC7C"))) PPC_WEAK_FUNC(sub_83C8FC7C);
PPC_FUNC_IMPL(__imp__sub_83C8FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FC80"))) PPC_WEAK_FUNC(sub_83C8FC80);
PPC_FUNC_IMPL(__imp__sub_83C8FC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18088
	ctx.r3.s64 = ctx.r11.s64 + 18088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FC8C"))) PPC_WEAK_FUNC(sub_83C8FC8C);
PPC_FUNC_IMPL(__imp__sub_83C8FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FC90"))) PPC_WEAK_FUNC(sub_83C8FC90);
PPC_FUNC_IMPL(__imp__sub_83C8FC90) {
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
	// addi r3,r11,-32216
	ctx.r3.s64 = ctx.r11.s64 + -32216;
	// bl 0x8259af80
	ctx.lr = 0x83C8FCA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,18104
	ctx.r3.s64 = ctx.r10.s64 + 18104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8FCB4;
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

__attribute__((alias("__imp__sub_83C8FCC4"))) PPC_WEAK_FUNC(sub_83C8FCC4);
PPC_FUNC_IMPL(__imp__sub_83C8FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FCC8"))) PPC_WEAK_FUNC(sub_83C8FCC8);
PPC_FUNC_IMPL(__imp__sub_83C8FCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32236
	ctx.r11.s64 = ctx.r8.s64 + -32236;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-6904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6904);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18096
	ctx.r3.s64 = ctx.r6.s64 + 18096;
	// stw r10,-32236(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FCF8"))) PPC_WEAK_FUNC(sub_83C8FCF8);
PPC_FUNC_IMPL(__imp__sub_83C8FCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18112
	ctx.r3.s64 = ctx.r11.s64 + 18112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FD04"))) PPC_WEAK_FUNC(sub_83C8FD04);
PPC_FUNC_IMPL(__imp__sub_83C8FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FD08"))) PPC_WEAK_FUNC(sub_83C8FD08);
PPC_FUNC_IMPL(__imp__sub_83C8FD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18120
	ctx.r3.s64 = ctx.r11.s64 + 18120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FD14"))) PPC_WEAK_FUNC(sub_83C8FD14);
PPC_FUNC_IMPL(__imp__sub_83C8FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FD18"))) PPC_WEAK_FUNC(sub_83C8FD18);
PPC_FUNC_IMPL(__imp__sub_83C8FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18128
	ctx.r3.s64 = ctx.r11.s64 + 18128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FD24"))) PPC_WEAK_FUNC(sub_83C8FD24);
PPC_FUNC_IMPL(__imp__sub_83C8FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FD28"))) PPC_WEAK_FUNC(sub_83C8FD28);
PPC_FUNC_IMPL(__imp__sub_83C8FD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18136
	ctx.r3.s64 = ctx.r11.s64 + 18136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FD34"))) PPC_WEAK_FUNC(sub_83C8FD34);
PPC_FUNC_IMPL(__imp__sub_83C8FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FD38"))) PPC_WEAK_FUNC(sub_83C8FD38);
PPC_FUNC_IMPL(__imp__sub_83C8FD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18144
	ctx.r3.s64 = ctx.r11.s64 + 18144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FD44"))) PPC_WEAK_FUNC(sub_83C8FD44);
PPC_FUNC_IMPL(__imp__sub_83C8FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FD48"))) PPC_WEAK_FUNC(sub_83C8FD48);
PPC_FUNC_IMPL(__imp__sub_83C8FD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18152
	ctx.r3.s64 = ctx.r11.s64 + 18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8FD54"))) PPC_WEAK_FUNC(sub_83C8FD54);
PPC_FUNC_IMPL(__imp__sub_83C8FD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C8FD58"))) PPC_WEAK_FUNC(sub_83C8FD58);
PPC_FUNC_IMPL(__imp__sub_83C8FD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,18160
	ctx.r3.s64 = ctx.r11.s64 + 18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

