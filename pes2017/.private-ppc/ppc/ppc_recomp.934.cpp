#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CD2AFC"))) PPC_WEAK_FUNC(sub_83CD2AFC);
PPC_FUNC_IMPL(__imp__sub_83CD2AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2B00"))) PPC_WEAK_FUNC(sub_83CD2B00);
PPC_FUNC_IMPL(__imp__sub_83CD2B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19240
	ctx.r3.s64 = ctx.r11.s64 + -19240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2B0C"))) PPC_WEAK_FUNC(sub_83CD2B0C);
PPC_FUNC_IMPL(__imp__sub_83CD2B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2B10"))) PPC_WEAK_FUNC(sub_83CD2B10);
PPC_FUNC_IMPL(__imp__sub_83CD2B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19232
	ctx.r3.s64 = ctx.r11.s64 + -19232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2B1C"))) PPC_WEAK_FUNC(sub_83CD2B1C);
PPC_FUNC_IMPL(__imp__sub_83CD2B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2B20"))) PPC_WEAK_FUNC(sub_83CD2B20);
PPC_FUNC_IMPL(__imp__sub_83CD2B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19224
	ctx.r3.s64 = ctx.r11.s64 + -19224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2B2C"))) PPC_WEAK_FUNC(sub_83CD2B2C);
PPC_FUNC_IMPL(__imp__sub_83CD2B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2B30"))) PPC_WEAK_FUNC(sub_83CD2B30);
PPC_FUNC_IMPL(__imp__sub_83CD2B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19216
	ctx.r3.s64 = ctx.r11.s64 + -19216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2B3C"))) PPC_WEAK_FUNC(sub_83CD2B3C);
PPC_FUNC_IMPL(__imp__sub_83CD2B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2B40"))) PPC_WEAK_FUNC(sub_83CD2B40);
PPC_FUNC_IMPL(__imp__sub_83CD2B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19208
	ctx.r3.s64 = ctx.r11.s64 + -19208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2B4C"))) PPC_WEAK_FUNC(sub_83CD2B4C);
PPC_FUNC_IMPL(__imp__sub_83CD2B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2B50"))) PPC_WEAK_FUNC(sub_83CD2B50);
PPC_FUNC_IMPL(__imp__sub_83CD2B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19200
	ctx.r3.s64 = ctx.r11.s64 + -19200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2B5C"))) PPC_WEAK_FUNC(sub_83CD2B5C);
PPC_FUNC_IMPL(__imp__sub_83CD2B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2B60"))) PPC_WEAK_FUNC(sub_83CD2B60);
PPC_FUNC_IMPL(__imp__sub_83CD2B60) {
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
	// addi r3,r11,-2387
	ctx.r3.s64 = ctx.r11.s64 + -2387;
	// bl 0x83523120
	ctx.lr = 0x83CD2B78;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-19192
	ctx.r3.s64 = ctx.r10.s64 + -19192;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD2B84;
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

__attribute__((alias("__imp__sub_83CD2B94"))) PPC_WEAK_FUNC(sub_83CD2B94);
PPC_FUNC_IMPL(__imp__sub_83CD2B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2B98"))) PPC_WEAK_FUNC(sub_83CD2B98);
PPC_FUNC_IMPL(__imp__sub_83CD2B98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2384
	ctx.r7.s64 = ctx.r8.s64 + -2384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD2BC0"))) PPC_WEAK_FUNC(sub_83CD2BC0);
PPC_FUNC_IMPL(__imp__sub_83CD2BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,844
	ctx.r6.s64 = ctx.r7.s64 + 844;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,772(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 772);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2384);
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
	// std r9,844(r7)
	PPC_STORE_U64(ctx.r7.u32 + 844, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD2C08"))) PPC_WEAK_FUNC(sub_83CD2C08);
PPC_FUNC_IMPL(__imp__sub_83CD2C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C14"))) PPC_WEAK_FUNC(sub_83CD2C14);
PPC_FUNC_IMPL(__imp__sub_83CD2C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C18"))) PPC_WEAK_FUNC(sub_83CD2C18);
PPC_FUNC_IMPL(__imp__sub_83CD2C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19168
	ctx.r3.s64 = ctx.r11.s64 + -19168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C24"))) PPC_WEAK_FUNC(sub_83CD2C24);
PPC_FUNC_IMPL(__imp__sub_83CD2C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C28"))) PPC_WEAK_FUNC(sub_83CD2C28);
PPC_FUNC_IMPL(__imp__sub_83CD2C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19160
	ctx.r3.s64 = ctx.r11.s64 + -19160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C34"))) PPC_WEAK_FUNC(sub_83CD2C34);
PPC_FUNC_IMPL(__imp__sub_83CD2C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C38"))) PPC_WEAK_FUNC(sub_83CD2C38);
PPC_FUNC_IMPL(__imp__sub_83CD2C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19152
	ctx.r3.s64 = ctx.r11.s64 + -19152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C44"))) PPC_WEAK_FUNC(sub_83CD2C44);
PPC_FUNC_IMPL(__imp__sub_83CD2C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C48"))) PPC_WEAK_FUNC(sub_83CD2C48);
PPC_FUNC_IMPL(__imp__sub_83CD2C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19144
	ctx.r3.s64 = ctx.r11.s64 + -19144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C54"))) PPC_WEAK_FUNC(sub_83CD2C54);
PPC_FUNC_IMPL(__imp__sub_83CD2C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C58"))) PPC_WEAK_FUNC(sub_83CD2C58);
PPC_FUNC_IMPL(__imp__sub_83CD2C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19136
	ctx.r3.s64 = ctx.r11.s64 + -19136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C64"))) PPC_WEAK_FUNC(sub_83CD2C64);
PPC_FUNC_IMPL(__imp__sub_83CD2C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C68"))) PPC_WEAK_FUNC(sub_83CD2C68);
PPC_FUNC_IMPL(__imp__sub_83CD2C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19128
	ctx.r3.s64 = ctx.r11.s64 + -19128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C74"))) PPC_WEAK_FUNC(sub_83CD2C74);
PPC_FUNC_IMPL(__imp__sub_83CD2C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C78"))) PPC_WEAK_FUNC(sub_83CD2C78);
PPC_FUNC_IMPL(__imp__sub_83CD2C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19120
	ctx.r3.s64 = ctx.r11.s64 + -19120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C84"))) PPC_WEAK_FUNC(sub_83CD2C84);
PPC_FUNC_IMPL(__imp__sub_83CD2C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C88"))) PPC_WEAK_FUNC(sub_83CD2C88);
PPC_FUNC_IMPL(__imp__sub_83CD2C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19112
	ctx.r3.s64 = ctx.r11.s64 + -19112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2C94"))) PPC_WEAK_FUNC(sub_83CD2C94);
PPC_FUNC_IMPL(__imp__sub_83CD2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2C98"))) PPC_WEAK_FUNC(sub_83CD2C98);
PPC_FUNC_IMPL(__imp__sub_83CD2C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19104
	ctx.r3.s64 = ctx.r11.s64 + -19104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2CA4"))) PPC_WEAK_FUNC(sub_83CD2CA4);
PPC_FUNC_IMPL(__imp__sub_83CD2CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2CA8"))) PPC_WEAK_FUNC(sub_83CD2CA8);
PPC_FUNC_IMPL(__imp__sub_83CD2CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19096
	ctx.r3.s64 = ctx.r11.s64 + -19096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2CB4"))) PPC_WEAK_FUNC(sub_83CD2CB4);
PPC_FUNC_IMPL(__imp__sub_83CD2CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2CB8"))) PPC_WEAK_FUNC(sub_83CD2CB8);
PPC_FUNC_IMPL(__imp__sub_83CD2CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19088
	ctx.r3.s64 = ctx.r11.s64 + -19088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2CC4"))) PPC_WEAK_FUNC(sub_83CD2CC4);
PPC_FUNC_IMPL(__imp__sub_83CD2CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2CC8"))) PPC_WEAK_FUNC(sub_83CD2CC8);
PPC_FUNC_IMPL(__imp__sub_83CD2CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19080
	ctx.r3.s64 = ctx.r11.s64 + -19080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2CD4"))) PPC_WEAK_FUNC(sub_83CD2CD4);
PPC_FUNC_IMPL(__imp__sub_83CD2CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2CD8"))) PPC_WEAK_FUNC(sub_83CD2CD8);
PPC_FUNC_IMPL(__imp__sub_83CD2CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19072
	ctx.r3.s64 = ctx.r11.s64 + -19072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2CE4"))) PPC_WEAK_FUNC(sub_83CD2CE4);
PPC_FUNC_IMPL(__imp__sub_83CD2CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2CE8"))) PPC_WEAK_FUNC(sub_83CD2CE8);
PPC_FUNC_IMPL(__imp__sub_83CD2CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19064
	ctx.r3.s64 = ctx.r11.s64 + -19064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2CF4"))) PPC_WEAK_FUNC(sub_83CD2CF4);
PPC_FUNC_IMPL(__imp__sub_83CD2CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2CF8"))) PPC_WEAK_FUNC(sub_83CD2CF8);
PPC_FUNC_IMPL(__imp__sub_83CD2CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19056
	ctx.r3.s64 = ctx.r11.s64 + -19056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D04"))) PPC_WEAK_FUNC(sub_83CD2D04);
PPC_FUNC_IMPL(__imp__sub_83CD2D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D08"))) PPC_WEAK_FUNC(sub_83CD2D08);
PPC_FUNC_IMPL(__imp__sub_83CD2D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D14"))) PPC_WEAK_FUNC(sub_83CD2D14);
PPC_FUNC_IMPL(__imp__sub_83CD2D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D18"))) PPC_WEAK_FUNC(sub_83CD2D18);
PPC_FUNC_IMPL(__imp__sub_83CD2D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19040
	ctx.r3.s64 = ctx.r11.s64 + -19040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D24"))) PPC_WEAK_FUNC(sub_83CD2D24);
PPC_FUNC_IMPL(__imp__sub_83CD2D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D28"))) PPC_WEAK_FUNC(sub_83CD2D28);
PPC_FUNC_IMPL(__imp__sub_83CD2D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19032
	ctx.r3.s64 = ctx.r11.s64 + -19032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D34"))) PPC_WEAK_FUNC(sub_83CD2D34);
PPC_FUNC_IMPL(__imp__sub_83CD2D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D38"))) PPC_WEAK_FUNC(sub_83CD2D38);
PPC_FUNC_IMPL(__imp__sub_83CD2D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19024
	ctx.r3.s64 = ctx.r11.s64 + -19024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D44"))) PPC_WEAK_FUNC(sub_83CD2D44);
PPC_FUNC_IMPL(__imp__sub_83CD2D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D48"))) PPC_WEAK_FUNC(sub_83CD2D48);
PPC_FUNC_IMPL(__imp__sub_83CD2D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D54"))) PPC_WEAK_FUNC(sub_83CD2D54);
PPC_FUNC_IMPL(__imp__sub_83CD2D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D58"))) PPC_WEAK_FUNC(sub_83CD2D58);
PPC_FUNC_IMPL(__imp__sub_83CD2D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19008
	ctx.r3.s64 = ctx.r11.s64 + -19008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D64"))) PPC_WEAK_FUNC(sub_83CD2D64);
PPC_FUNC_IMPL(__imp__sub_83CD2D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D68"))) PPC_WEAK_FUNC(sub_83CD2D68);
PPC_FUNC_IMPL(__imp__sub_83CD2D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-19000
	ctx.r3.s64 = ctx.r11.s64 + -19000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D74"))) PPC_WEAK_FUNC(sub_83CD2D74);
PPC_FUNC_IMPL(__imp__sub_83CD2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D78"))) PPC_WEAK_FUNC(sub_83CD2D78);
PPC_FUNC_IMPL(__imp__sub_83CD2D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18992
	ctx.r3.s64 = ctx.r11.s64 + -18992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2D84"))) PPC_WEAK_FUNC(sub_83CD2D84);
PPC_FUNC_IMPL(__imp__sub_83CD2D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2D88"))) PPC_WEAK_FUNC(sub_83CD2D88);
PPC_FUNC_IMPL(__imp__sub_83CD2D88) {
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
	// addi r3,r11,-2372
	ctx.r3.s64 = ctx.r11.s64 + -2372;
	// bl 0x83523120
	ctx.lr = 0x83CD2DA0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18984
	ctx.r3.s64 = ctx.r10.s64 + -18984;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD2DAC;
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

__attribute__((alias("__imp__sub_83CD2DBC"))) PPC_WEAK_FUNC(sub_83CD2DBC);
PPC_FUNC_IMPL(__imp__sub_83CD2DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2DC0"))) PPC_WEAK_FUNC(sub_83CD2DC0);
PPC_FUNC_IMPL(__imp__sub_83CD2DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18968
	ctx.r3.s64 = ctx.r11.s64 + -18968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2DCC"))) PPC_WEAK_FUNC(sub_83CD2DCC);
PPC_FUNC_IMPL(__imp__sub_83CD2DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2DD0"))) PPC_WEAK_FUNC(sub_83CD2DD0);
PPC_FUNC_IMPL(__imp__sub_83CD2DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18960
	ctx.r3.s64 = ctx.r11.s64 + -18960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2DDC"))) PPC_WEAK_FUNC(sub_83CD2DDC);
PPC_FUNC_IMPL(__imp__sub_83CD2DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2DE0"))) PPC_WEAK_FUNC(sub_83CD2DE0);
PPC_FUNC_IMPL(__imp__sub_83CD2DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18952
	ctx.r3.s64 = ctx.r11.s64 + -18952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2DEC"))) PPC_WEAK_FUNC(sub_83CD2DEC);
PPC_FUNC_IMPL(__imp__sub_83CD2DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2DF0"))) PPC_WEAK_FUNC(sub_83CD2DF0);
PPC_FUNC_IMPL(__imp__sub_83CD2DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2DFC"))) PPC_WEAK_FUNC(sub_83CD2DFC);
PPC_FUNC_IMPL(__imp__sub_83CD2DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E00"))) PPC_WEAK_FUNC(sub_83CD2E00);
PPC_FUNC_IMPL(__imp__sub_83CD2E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18936
	ctx.r3.s64 = ctx.r11.s64 + -18936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2E0C"))) PPC_WEAK_FUNC(sub_83CD2E0C);
PPC_FUNC_IMPL(__imp__sub_83CD2E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E10"))) PPC_WEAK_FUNC(sub_83CD2E10);
PPC_FUNC_IMPL(__imp__sub_83CD2E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18928
	ctx.r3.s64 = ctx.r11.s64 + -18928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2E1C"))) PPC_WEAK_FUNC(sub_83CD2E1C);
PPC_FUNC_IMPL(__imp__sub_83CD2E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E20"))) PPC_WEAK_FUNC(sub_83CD2E20);
PPC_FUNC_IMPL(__imp__sub_83CD2E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2E2C"))) PPC_WEAK_FUNC(sub_83CD2E2C);
PPC_FUNC_IMPL(__imp__sub_83CD2E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E30"))) PPC_WEAK_FUNC(sub_83CD2E30);
PPC_FUNC_IMPL(__imp__sub_83CD2E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18912
	ctx.r3.s64 = ctx.r11.s64 + -18912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2E3C"))) PPC_WEAK_FUNC(sub_83CD2E3C);
PPC_FUNC_IMPL(__imp__sub_83CD2E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E40"))) PPC_WEAK_FUNC(sub_83CD2E40);
PPC_FUNC_IMPL(__imp__sub_83CD2E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18904
	ctx.r3.s64 = ctx.r11.s64 + -18904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2E4C"))) PPC_WEAK_FUNC(sub_83CD2E4C);
PPC_FUNC_IMPL(__imp__sub_83CD2E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E50"))) PPC_WEAK_FUNC(sub_83CD2E50);
PPC_FUNC_IMPL(__imp__sub_83CD2E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18896
	ctx.r3.s64 = ctx.r11.s64 + -18896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2E5C"))) PPC_WEAK_FUNC(sub_83CD2E5C);
PPC_FUNC_IMPL(__imp__sub_83CD2E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E60"))) PPC_WEAK_FUNC(sub_83CD2E60);
PPC_FUNC_IMPL(__imp__sub_83CD2E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18888
	ctx.r3.s64 = ctx.r11.s64 + -18888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2E6C"))) PPC_WEAK_FUNC(sub_83CD2E6C);
PPC_FUNC_IMPL(__imp__sub_83CD2E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E70"))) PPC_WEAK_FUNC(sub_83CD2E70);
PPC_FUNC_IMPL(__imp__sub_83CD2E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18880
	ctx.r3.s64 = ctx.r11.s64 + -18880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2E7C"))) PPC_WEAK_FUNC(sub_83CD2E7C);
PPC_FUNC_IMPL(__imp__sub_83CD2E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2E80"))) PPC_WEAK_FUNC(sub_83CD2E80);
PPC_FUNC_IMPL(__imp__sub_83CD2E80) {
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
	// addi r3,r11,-2364
	ctx.r3.s64 = ctx.r11.s64 + -2364;
	// bl 0x83523120
	ctx.lr = 0x83CD2E98;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18872
	ctx.r3.s64 = ctx.r10.s64 + -18872;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD2EA4;
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

__attribute__((alias("__imp__sub_83CD2EB4"))) PPC_WEAK_FUNC(sub_83CD2EB4);
PPC_FUNC_IMPL(__imp__sub_83CD2EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2EB8"))) PPC_WEAK_FUNC(sub_83CD2EB8);
PPC_FUNC_IMPL(__imp__sub_83CD2EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18856
	ctx.r3.s64 = ctx.r11.s64 + -18856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2EC4"))) PPC_WEAK_FUNC(sub_83CD2EC4);
PPC_FUNC_IMPL(__imp__sub_83CD2EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2EC8"))) PPC_WEAK_FUNC(sub_83CD2EC8);
PPC_FUNC_IMPL(__imp__sub_83CD2EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18848
	ctx.r3.s64 = ctx.r11.s64 + -18848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2ED4"))) PPC_WEAK_FUNC(sub_83CD2ED4);
PPC_FUNC_IMPL(__imp__sub_83CD2ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2ED8"))) PPC_WEAK_FUNC(sub_83CD2ED8);
PPC_FUNC_IMPL(__imp__sub_83CD2ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18840
	ctx.r3.s64 = ctx.r11.s64 + -18840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2EE4"))) PPC_WEAK_FUNC(sub_83CD2EE4);
PPC_FUNC_IMPL(__imp__sub_83CD2EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2EE8"))) PPC_WEAK_FUNC(sub_83CD2EE8);
PPC_FUNC_IMPL(__imp__sub_83CD2EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2EF4"))) PPC_WEAK_FUNC(sub_83CD2EF4);
PPC_FUNC_IMPL(__imp__sub_83CD2EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2EF8"))) PPC_WEAK_FUNC(sub_83CD2EF8);
PPC_FUNC_IMPL(__imp__sub_83CD2EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18824
	ctx.r3.s64 = ctx.r11.s64 + -18824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2F04"))) PPC_WEAK_FUNC(sub_83CD2F04);
PPC_FUNC_IMPL(__imp__sub_83CD2F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2F08"))) PPC_WEAK_FUNC(sub_83CD2F08);
PPC_FUNC_IMPL(__imp__sub_83CD2F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18816
	ctx.r3.s64 = ctx.r11.s64 + -18816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2F14"))) PPC_WEAK_FUNC(sub_83CD2F14);
PPC_FUNC_IMPL(__imp__sub_83CD2F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2F18"))) PPC_WEAK_FUNC(sub_83CD2F18);
PPC_FUNC_IMPL(__imp__sub_83CD2F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18808
	ctx.r3.s64 = ctx.r11.s64 + -18808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2F24"))) PPC_WEAK_FUNC(sub_83CD2F24);
PPC_FUNC_IMPL(__imp__sub_83CD2F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2F28"))) PPC_WEAK_FUNC(sub_83CD2F28);
PPC_FUNC_IMPL(__imp__sub_83CD2F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18800
	ctx.r3.s64 = ctx.r11.s64 + -18800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2F34"))) PPC_WEAK_FUNC(sub_83CD2F34);
PPC_FUNC_IMPL(__imp__sub_83CD2F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2F38"))) PPC_WEAK_FUNC(sub_83CD2F38);
PPC_FUNC_IMPL(__imp__sub_83CD2F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18792
	ctx.r3.s64 = ctx.r11.s64 + -18792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2F44"))) PPC_WEAK_FUNC(sub_83CD2F44);
PPC_FUNC_IMPL(__imp__sub_83CD2F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2F48"))) PPC_WEAK_FUNC(sub_83CD2F48);
PPC_FUNC_IMPL(__imp__sub_83CD2F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18784
	ctx.r3.s64 = ctx.r11.s64 + -18784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2F54"))) PPC_WEAK_FUNC(sub_83CD2F54);
PPC_FUNC_IMPL(__imp__sub_83CD2F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2F58"))) PPC_WEAK_FUNC(sub_83CD2F58);
PPC_FUNC_IMPL(__imp__sub_83CD2F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18776
	ctx.r3.s64 = ctx.r11.s64 + -18776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2F64"))) PPC_WEAK_FUNC(sub_83CD2F64);
PPC_FUNC_IMPL(__imp__sub_83CD2F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2F68"))) PPC_WEAK_FUNC(sub_83CD2F68);
PPC_FUNC_IMPL(__imp__sub_83CD2F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18768
	ctx.r3.s64 = ctx.r11.s64 + -18768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2F74"))) PPC_WEAK_FUNC(sub_83CD2F74);
PPC_FUNC_IMPL(__imp__sub_83CD2F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2F78"))) PPC_WEAK_FUNC(sub_83CD2F78);
PPC_FUNC_IMPL(__imp__sub_83CD2F78) {
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
	// addi r3,r11,-2356
	ctx.r3.s64 = ctx.r11.s64 + -2356;
	// bl 0x83523120
	ctx.lr = 0x83CD2F90;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18760
	ctx.r3.s64 = ctx.r10.s64 + -18760;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD2F9C;
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

__attribute__((alias("__imp__sub_83CD2FAC"))) PPC_WEAK_FUNC(sub_83CD2FAC);
PPC_FUNC_IMPL(__imp__sub_83CD2FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2FB0"))) PPC_WEAK_FUNC(sub_83CD2FB0);
PPC_FUNC_IMPL(__imp__sub_83CD2FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18744
	ctx.r3.s64 = ctx.r11.s64 + -18744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2FBC"))) PPC_WEAK_FUNC(sub_83CD2FBC);
PPC_FUNC_IMPL(__imp__sub_83CD2FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2FC0"))) PPC_WEAK_FUNC(sub_83CD2FC0);
PPC_FUNC_IMPL(__imp__sub_83CD2FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18736
	ctx.r3.s64 = ctx.r11.s64 + -18736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2FCC"))) PPC_WEAK_FUNC(sub_83CD2FCC);
PPC_FUNC_IMPL(__imp__sub_83CD2FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2FD0"))) PPC_WEAK_FUNC(sub_83CD2FD0);
PPC_FUNC_IMPL(__imp__sub_83CD2FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18728
	ctx.r3.s64 = ctx.r11.s64 + -18728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2FDC"))) PPC_WEAK_FUNC(sub_83CD2FDC);
PPC_FUNC_IMPL(__imp__sub_83CD2FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2FE0"))) PPC_WEAK_FUNC(sub_83CD2FE0);
PPC_FUNC_IMPL(__imp__sub_83CD2FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2FEC"))) PPC_WEAK_FUNC(sub_83CD2FEC);
PPC_FUNC_IMPL(__imp__sub_83CD2FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD2FF0"))) PPC_WEAK_FUNC(sub_83CD2FF0);
PPC_FUNC_IMPL(__imp__sub_83CD2FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18712
	ctx.r3.s64 = ctx.r11.s64 + -18712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD2FFC"))) PPC_WEAK_FUNC(sub_83CD2FFC);
PPC_FUNC_IMPL(__imp__sub_83CD2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3000"))) PPC_WEAK_FUNC(sub_83CD3000);
PPC_FUNC_IMPL(__imp__sub_83CD3000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD300C"))) PPC_WEAK_FUNC(sub_83CD300C);
PPC_FUNC_IMPL(__imp__sub_83CD300C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3010"))) PPC_WEAK_FUNC(sub_83CD3010);
PPC_FUNC_IMPL(__imp__sub_83CD3010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18696
	ctx.r3.s64 = ctx.r11.s64 + -18696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD301C"))) PPC_WEAK_FUNC(sub_83CD301C);
PPC_FUNC_IMPL(__imp__sub_83CD301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3020"))) PPC_WEAK_FUNC(sub_83CD3020);
PPC_FUNC_IMPL(__imp__sub_83CD3020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18688
	ctx.r3.s64 = ctx.r11.s64 + -18688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD302C"))) PPC_WEAK_FUNC(sub_83CD302C);
PPC_FUNC_IMPL(__imp__sub_83CD302C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3030"))) PPC_WEAK_FUNC(sub_83CD3030);
PPC_FUNC_IMPL(__imp__sub_83CD3030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18680
	ctx.r3.s64 = ctx.r11.s64 + -18680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD303C"))) PPC_WEAK_FUNC(sub_83CD303C);
PPC_FUNC_IMPL(__imp__sub_83CD303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3040"))) PPC_WEAK_FUNC(sub_83CD3040);
PPC_FUNC_IMPL(__imp__sub_83CD3040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18672
	ctx.r3.s64 = ctx.r11.s64 + -18672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD304C"))) PPC_WEAK_FUNC(sub_83CD304C);
PPC_FUNC_IMPL(__imp__sub_83CD304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3050"))) PPC_WEAK_FUNC(sub_83CD3050);
PPC_FUNC_IMPL(__imp__sub_83CD3050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18664
	ctx.r3.s64 = ctx.r11.s64 + -18664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD305C"))) PPC_WEAK_FUNC(sub_83CD305C);
PPC_FUNC_IMPL(__imp__sub_83CD305C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3060"))) PPC_WEAK_FUNC(sub_83CD3060);
PPC_FUNC_IMPL(__imp__sub_83CD3060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18656
	ctx.r3.s64 = ctx.r11.s64 + -18656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD306C"))) PPC_WEAK_FUNC(sub_83CD306C);
PPC_FUNC_IMPL(__imp__sub_83CD306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3070"))) PPC_WEAK_FUNC(sub_83CD3070);
PPC_FUNC_IMPL(__imp__sub_83CD3070) {
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
	// addi r3,r11,-2348
	ctx.r3.s64 = ctx.r11.s64 + -2348;
	// bl 0x83523120
	ctx.lr = 0x83CD3088;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18648
	ctx.r3.s64 = ctx.r10.s64 + -18648;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD3094;
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

__attribute__((alias("__imp__sub_83CD30A4"))) PPC_WEAK_FUNC(sub_83CD30A4);
PPC_FUNC_IMPL(__imp__sub_83CD30A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD30A8"))) PPC_WEAK_FUNC(sub_83CD30A8);
PPC_FUNC_IMPL(__imp__sub_83CD30A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18632
	ctx.r3.s64 = ctx.r11.s64 + -18632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD30B4"))) PPC_WEAK_FUNC(sub_83CD30B4);
PPC_FUNC_IMPL(__imp__sub_83CD30B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD30B8"))) PPC_WEAK_FUNC(sub_83CD30B8);
PPC_FUNC_IMPL(__imp__sub_83CD30B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18624
	ctx.r3.s64 = ctx.r11.s64 + -18624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD30C4"))) PPC_WEAK_FUNC(sub_83CD30C4);
PPC_FUNC_IMPL(__imp__sub_83CD30C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD30C8"))) PPC_WEAK_FUNC(sub_83CD30C8);
PPC_FUNC_IMPL(__imp__sub_83CD30C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD30D4"))) PPC_WEAK_FUNC(sub_83CD30D4);
PPC_FUNC_IMPL(__imp__sub_83CD30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD30D8"))) PPC_WEAK_FUNC(sub_83CD30D8);
PPC_FUNC_IMPL(__imp__sub_83CD30D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18608
	ctx.r3.s64 = ctx.r11.s64 + -18608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD30E4"))) PPC_WEAK_FUNC(sub_83CD30E4);
PPC_FUNC_IMPL(__imp__sub_83CD30E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD30E8"))) PPC_WEAK_FUNC(sub_83CD30E8);
PPC_FUNC_IMPL(__imp__sub_83CD30E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18600
	ctx.r3.s64 = ctx.r11.s64 + -18600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD30F4"))) PPC_WEAK_FUNC(sub_83CD30F4);
PPC_FUNC_IMPL(__imp__sub_83CD30F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD30F8"))) PPC_WEAK_FUNC(sub_83CD30F8);
PPC_FUNC_IMPL(__imp__sub_83CD30F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3104"))) PPC_WEAK_FUNC(sub_83CD3104);
PPC_FUNC_IMPL(__imp__sub_83CD3104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3108"))) PPC_WEAK_FUNC(sub_83CD3108);
PPC_FUNC_IMPL(__imp__sub_83CD3108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18584
	ctx.r3.s64 = ctx.r11.s64 + -18584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3114"))) PPC_WEAK_FUNC(sub_83CD3114);
PPC_FUNC_IMPL(__imp__sub_83CD3114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3118"))) PPC_WEAK_FUNC(sub_83CD3118);
PPC_FUNC_IMPL(__imp__sub_83CD3118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3124"))) PPC_WEAK_FUNC(sub_83CD3124);
PPC_FUNC_IMPL(__imp__sub_83CD3124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3128"))) PPC_WEAK_FUNC(sub_83CD3128);
PPC_FUNC_IMPL(__imp__sub_83CD3128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18568
	ctx.r3.s64 = ctx.r11.s64 + -18568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3134"))) PPC_WEAK_FUNC(sub_83CD3134);
PPC_FUNC_IMPL(__imp__sub_83CD3134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3138"))) PPC_WEAK_FUNC(sub_83CD3138);
PPC_FUNC_IMPL(__imp__sub_83CD3138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3144"))) PPC_WEAK_FUNC(sub_83CD3144);
PPC_FUNC_IMPL(__imp__sub_83CD3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3148"))) PPC_WEAK_FUNC(sub_83CD3148);
PPC_FUNC_IMPL(__imp__sub_83CD3148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18552
	ctx.r3.s64 = ctx.r11.s64 + -18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3154"))) PPC_WEAK_FUNC(sub_83CD3154);
PPC_FUNC_IMPL(__imp__sub_83CD3154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3158"))) PPC_WEAK_FUNC(sub_83CD3158);
PPC_FUNC_IMPL(__imp__sub_83CD3158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18544
	ctx.r3.s64 = ctx.r11.s64 + -18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3164"))) PPC_WEAK_FUNC(sub_83CD3164);
PPC_FUNC_IMPL(__imp__sub_83CD3164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3168"))) PPC_WEAK_FUNC(sub_83CD3168);
PPC_FUNC_IMPL(__imp__sub_83CD3168) {
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
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// bl 0x83523120
	ctx.lr = 0x83CD3180;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18536
	ctx.r3.s64 = ctx.r10.s64 + -18536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD318C;
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

__attribute__((alias("__imp__sub_83CD319C"))) PPC_WEAK_FUNC(sub_83CD319C);
PPC_FUNC_IMPL(__imp__sub_83CD319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD31A0"))) PPC_WEAK_FUNC(sub_83CD31A0);
PPC_FUNC_IMPL(__imp__sub_83CD31A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18520
	ctx.r3.s64 = ctx.r11.s64 + -18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD31AC"))) PPC_WEAK_FUNC(sub_83CD31AC);
PPC_FUNC_IMPL(__imp__sub_83CD31AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD31B0"))) PPC_WEAK_FUNC(sub_83CD31B0);
PPC_FUNC_IMPL(__imp__sub_83CD31B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD31BC"))) PPC_WEAK_FUNC(sub_83CD31BC);
PPC_FUNC_IMPL(__imp__sub_83CD31BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD31C0"))) PPC_WEAK_FUNC(sub_83CD31C0);
PPC_FUNC_IMPL(__imp__sub_83CD31C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18504
	ctx.r3.s64 = ctx.r11.s64 + -18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD31CC"))) PPC_WEAK_FUNC(sub_83CD31CC);
PPC_FUNC_IMPL(__imp__sub_83CD31CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD31D0"))) PPC_WEAK_FUNC(sub_83CD31D0);
PPC_FUNC_IMPL(__imp__sub_83CD31D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD31DC"))) PPC_WEAK_FUNC(sub_83CD31DC);
PPC_FUNC_IMPL(__imp__sub_83CD31DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD31E0"))) PPC_WEAK_FUNC(sub_83CD31E0);
PPC_FUNC_IMPL(__imp__sub_83CD31E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD31EC"))) PPC_WEAK_FUNC(sub_83CD31EC);
PPC_FUNC_IMPL(__imp__sub_83CD31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD31F0"))) PPC_WEAK_FUNC(sub_83CD31F0);
PPC_FUNC_IMPL(__imp__sub_83CD31F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18480
	ctx.r3.s64 = ctx.r11.s64 + -18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD31FC"))) PPC_WEAK_FUNC(sub_83CD31FC);
PPC_FUNC_IMPL(__imp__sub_83CD31FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3200"))) PPC_WEAK_FUNC(sub_83CD3200);
PPC_FUNC_IMPL(__imp__sub_83CD3200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18472
	ctx.r3.s64 = ctx.r11.s64 + -18472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD320C"))) PPC_WEAK_FUNC(sub_83CD320C);
PPC_FUNC_IMPL(__imp__sub_83CD320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3210"))) PPC_WEAK_FUNC(sub_83CD3210);
PPC_FUNC_IMPL(__imp__sub_83CD3210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18464
	ctx.r3.s64 = ctx.r11.s64 + -18464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD321C"))) PPC_WEAK_FUNC(sub_83CD321C);
PPC_FUNC_IMPL(__imp__sub_83CD321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3220"))) PPC_WEAK_FUNC(sub_83CD3220);
PPC_FUNC_IMPL(__imp__sub_83CD3220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18456
	ctx.r3.s64 = ctx.r11.s64 + -18456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD322C"))) PPC_WEAK_FUNC(sub_83CD322C);
PPC_FUNC_IMPL(__imp__sub_83CD322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3230"))) PPC_WEAK_FUNC(sub_83CD3230);
PPC_FUNC_IMPL(__imp__sub_83CD3230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18448
	ctx.r3.s64 = ctx.r11.s64 + -18448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD323C"))) PPC_WEAK_FUNC(sub_83CD323C);
PPC_FUNC_IMPL(__imp__sub_83CD323C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3240"))) PPC_WEAK_FUNC(sub_83CD3240);
PPC_FUNC_IMPL(__imp__sub_83CD3240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18440
	ctx.r3.s64 = ctx.r11.s64 + -18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD324C"))) PPC_WEAK_FUNC(sub_83CD324C);
PPC_FUNC_IMPL(__imp__sub_83CD324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3250"))) PPC_WEAK_FUNC(sub_83CD3250);
PPC_FUNC_IMPL(__imp__sub_83CD3250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD325C"))) PPC_WEAK_FUNC(sub_83CD325C);
PPC_FUNC_IMPL(__imp__sub_83CD325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3260"))) PPC_WEAK_FUNC(sub_83CD3260);
PPC_FUNC_IMPL(__imp__sub_83CD3260) {
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
	// addi r3,r11,-2320
	ctx.r3.s64 = ctx.r11.s64 + -2320;
	// bl 0x83523120
	ctx.lr = 0x83CD3278;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18424
	ctx.r3.s64 = ctx.r10.s64 + -18424;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD3284;
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

__attribute__((alias("__imp__sub_83CD3294"))) PPC_WEAK_FUNC(sub_83CD3294);
PPC_FUNC_IMPL(__imp__sub_83CD3294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3298"))) PPC_WEAK_FUNC(sub_83CD3298);
PPC_FUNC_IMPL(__imp__sub_83CD3298) {
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
	// addi r3,r11,-2304
	ctx.r3.s64 = ctx.r11.s64 + -2304;
	// bl 0x83816a18
	ctx.lr = 0x83CD32B0;
	sub_83816A18(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18408
	ctx.r3.s64 = ctx.r10.s64 + -18408;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD32BC;
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

__attribute__((alias("__imp__sub_83CD32CC"))) PPC_WEAK_FUNC(sub_83CD32CC);
PPC_FUNC_IMPL(__imp__sub_83CD32CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD32D0"))) PPC_WEAK_FUNC(sub_83CD32D0);
PPC_FUNC_IMPL(__imp__sub_83CD32D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18400
	ctx.r3.s64 = ctx.r11.s64 + -18400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD32DC"))) PPC_WEAK_FUNC(sub_83CD32DC);
PPC_FUNC_IMPL(__imp__sub_83CD32DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD32E0"))) PPC_WEAK_FUNC(sub_83CD32E0);
PPC_FUNC_IMPL(__imp__sub_83CD32E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18392
	ctx.r3.s64 = ctx.r11.s64 + -18392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD32EC"))) PPC_WEAK_FUNC(sub_83CD32EC);
PPC_FUNC_IMPL(__imp__sub_83CD32EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD32F0"))) PPC_WEAK_FUNC(sub_83CD32F0);
PPC_FUNC_IMPL(__imp__sub_83CD32F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18384
	ctx.r3.s64 = ctx.r11.s64 + -18384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD32FC"))) PPC_WEAK_FUNC(sub_83CD32FC);
PPC_FUNC_IMPL(__imp__sub_83CD32FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3300"))) PPC_WEAK_FUNC(sub_83CD3300);
PPC_FUNC_IMPL(__imp__sub_83CD3300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18376
	ctx.r3.s64 = ctx.r11.s64 + -18376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD330C"))) PPC_WEAK_FUNC(sub_83CD330C);
PPC_FUNC_IMPL(__imp__sub_83CD330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3310"))) PPC_WEAK_FUNC(sub_83CD3310);
PPC_FUNC_IMPL(__imp__sub_83CD3310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18368
	ctx.r3.s64 = ctx.r11.s64 + -18368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD331C"))) PPC_WEAK_FUNC(sub_83CD331C);
PPC_FUNC_IMPL(__imp__sub_83CD331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3320"))) PPC_WEAK_FUNC(sub_83CD3320);
PPC_FUNC_IMPL(__imp__sub_83CD3320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD332C"))) PPC_WEAK_FUNC(sub_83CD332C);
PPC_FUNC_IMPL(__imp__sub_83CD332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3330"))) PPC_WEAK_FUNC(sub_83CD3330);
PPC_FUNC_IMPL(__imp__sub_83CD3330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD333C"))) PPC_WEAK_FUNC(sub_83CD333C);
PPC_FUNC_IMPL(__imp__sub_83CD333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3340"))) PPC_WEAK_FUNC(sub_83CD3340);
PPC_FUNC_IMPL(__imp__sub_83CD3340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD334C"))) PPC_WEAK_FUNC(sub_83CD334C);
PPC_FUNC_IMPL(__imp__sub_83CD334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3350"))) PPC_WEAK_FUNC(sub_83CD3350);
PPC_FUNC_IMPL(__imp__sub_83CD3350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD335C"))) PPC_WEAK_FUNC(sub_83CD335C);
PPC_FUNC_IMPL(__imp__sub_83CD335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3360"))) PPC_WEAK_FUNC(sub_83CD3360);
PPC_FUNC_IMPL(__imp__sub_83CD3360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD336C"))) PPC_WEAK_FUNC(sub_83CD336C);
PPC_FUNC_IMPL(__imp__sub_83CD336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3370"))) PPC_WEAK_FUNC(sub_83CD3370);
PPC_FUNC_IMPL(__imp__sub_83CD3370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18320
	ctx.r3.s64 = ctx.r11.s64 + -18320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD337C"))) PPC_WEAK_FUNC(sub_83CD337C);
PPC_FUNC_IMPL(__imp__sub_83CD337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3380"))) PPC_WEAK_FUNC(sub_83CD3380);
PPC_FUNC_IMPL(__imp__sub_83CD3380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18312
	ctx.r3.s64 = ctx.r11.s64 + -18312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD338C"))) PPC_WEAK_FUNC(sub_83CD338C);
PPC_FUNC_IMPL(__imp__sub_83CD338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3390"))) PPC_WEAK_FUNC(sub_83CD3390);
PPC_FUNC_IMPL(__imp__sub_83CD3390) {
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
	// addi r3,r11,-2040
	ctx.r3.s64 = ctx.r11.s64 + -2040;
	// bl 0x83523120
	ctx.lr = 0x83CD33A8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18304
	ctx.r3.s64 = ctx.r10.s64 + -18304;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD33B4;
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

__attribute__((alias("__imp__sub_83CD33C4"))) PPC_WEAK_FUNC(sub_83CD33C4);
PPC_FUNC_IMPL(__imp__sub_83CD33C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD33C8"))) PPC_WEAK_FUNC(sub_83CD33C8);
PPC_FUNC_IMPL(__imp__sub_83CD33C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD33D4"))) PPC_WEAK_FUNC(sub_83CD33D4);
PPC_FUNC_IMPL(__imp__sub_83CD33D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD33D8"))) PPC_WEAK_FUNC(sub_83CD33D8);
PPC_FUNC_IMPL(__imp__sub_83CD33D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18280
	ctx.r3.s64 = ctx.r11.s64 + -18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD33E4"))) PPC_WEAK_FUNC(sub_83CD33E4);
PPC_FUNC_IMPL(__imp__sub_83CD33E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD33E8"))) PPC_WEAK_FUNC(sub_83CD33E8);
PPC_FUNC_IMPL(__imp__sub_83CD33E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18272
	ctx.r3.s64 = ctx.r11.s64 + -18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD33F4"))) PPC_WEAK_FUNC(sub_83CD33F4);
PPC_FUNC_IMPL(__imp__sub_83CD33F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD33F8"))) PPC_WEAK_FUNC(sub_83CD33F8);
PPC_FUNC_IMPL(__imp__sub_83CD33F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18264
	ctx.r3.s64 = ctx.r11.s64 + -18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3404"))) PPC_WEAK_FUNC(sub_83CD3404);
PPC_FUNC_IMPL(__imp__sub_83CD3404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3408"))) PPC_WEAK_FUNC(sub_83CD3408);
PPC_FUNC_IMPL(__imp__sub_83CD3408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18256
	ctx.r3.s64 = ctx.r11.s64 + -18256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3414"))) PPC_WEAK_FUNC(sub_83CD3414);
PPC_FUNC_IMPL(__imp__sub_83CD3414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3418"))) PPC_WEAK_FUNC(sub_83CD3418);
PPC_FUNC_IMPL(__imp__sub_83CD3418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18248
	ctx.r3.s64 = ctx.r11.s64 + -18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3424"))) PPC_WEAK_FUNC(sub_83CD3424);
PPC_FUNC_IMPL(__imp__sub_83CD3424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3428"))) PPC_WEAK_FUNC(sub_83CD3428);
PPC_FUNC_IMPL(__imp__sub_83CD3428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18240
	ctx.r3.s64 = ctx.r11.s64 + -18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3434"))) PPC_WEAK_FUNC(sub_83CD3434);
PPC_FUNC_IMPL(__imp__sub_83CD3434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3438"))) PPC_WEAK_FUNC(sub_83CD3438);
PPC_FUNC_IMPL(__imp__sub_83CD3438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18232
	ctx.r3.s64 = ctx.r11.s64 + -18232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3444"))) PPC_WEAK_FUNC(sub_83CD3444);
PPC_FUNC_IMPL(__imp__sub_83CD3444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3448"))) PPC_WEAK_FUNC(sub_83CD3448);
PPC_FUNC_IMPL(__imp__sub_83CD3448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18224
	ctx.r3.s64 = ctx.r11.s64 + -18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3454"))) PPC_WEAK_FUNC(sub_83CD3454);
PPC_FUNC_IMPL(__imp__sub_83CD3454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3458"))) PPC_WEAK_FUNC(sub_83CD3458);
PPC_FUNC_IMPL(__imp__sub_83CD3458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18216
	ctx.r3.s64 = ctx.r11.s64 + -18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3464"))) PPC_WEAK_FUNC(sub_83CD3464);
PPC_FUNC_IMPL(__imp__sub_83CD3464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3468"))) PPC_WEAK_FUNC(sub_83CD3468);
PPC_FUNC_IMPL(__imp__sub_83CD3468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18208
	ctx.r3.s64 = ctx.r11.s64 + -18208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3474"))) PPC_WEAK_FUNC(sub_83CD3474);
PPC_FUNC_IMPL(__imp__sub_83CD3474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3478"))) PPC_WEAK_FUNC(sub_83CD3478);
PPC_FUNC_IMPL(__imp__sub_83CD3478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18200
	ctx.r3.s64 = ctx.r11.s64 + -18200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD3484"))) PPC_WEAK_FUNC(sub_83CD3484);
PPC_FUNC_IMPL(__imp__sub_83CD3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD3488"))) PPC_WEAK_FUNC(sub_83CD3488);
PPC_FUNC_IMPL(__imp__sub_83CD3488) {
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
	// addi r3,r11,-2032
	ctx.r3.s64 = ctx.r11.s64 + -2032;
	// bl 0x83523120
	ctx.lr = 0x83CD34A0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-18192
	ctx.r3.s64 = ctx.r10.s64 + -18192;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD34AC;
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

__attribute__((alias("__imp__sub_83CD34BC"))) PPC_WEAK_FUNC(sub_83CD34BC);
PPC_FUNC_IMPL(__imp__sub_83CD34BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD34C0"))) PPC_WEAK_FUNC(sub_83CD34C0);
PPC_FUNC_IMPL(__imp__sub_83CD34C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18176
	ctx.r3.s64 = ctx.r11.s64 + -18176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD34CC"))) PPC_WEAK_FUNC(sub_83CD34CC);
PPC_FUNC_IMPL(__imp__sub_83CD34CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD34D0"))) PPC_WEAK_FUNC(sub_83CD34D0);
PPC_FUNC_IMPL(__imp__sub_83CD34D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18168
	ctx.r3.s64 = ctx.r11.s64 + -18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD34DC"))) PPC_WEAK_FUNC(sub_83CD34DC);
PPC_FUNC_IMPL(__imp__sub_83CD34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD34E0"))) PPC_WEAK_FUNC(sub_83CD34E0);
PPC_FUNC_IMPL(__imp__sub_83CD34E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-18160
	ctx.r3.s64 = ctx.r11.s64 + -18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

