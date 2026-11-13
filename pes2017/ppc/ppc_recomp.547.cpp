#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B7FB80"))) PPC_WEAK_FUNC(sub_83B7FB80);
PPC_FUNC_IMPL(__imp__sub_83B7FB80) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13560
	ctx.r3.s64 = ctx.r11.s64 + -13560;
	// bl 0x83523120
	ctx.lr = 0x83B7FB98;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-28224
	ctx.r3.s64 = ctx.r10.s64 + -28224;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7FBA4;
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

__attribute__((alias("__imp__sub_83B7FBB4"))) PPC_WEAK_FUNC(sub_83B7FBB4);
PPC_FUNC_IMPL(__imp__sub_83B7FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FBB8"))) PPC_WEAK_FUNC(sub_83B7FBB8);
PPC_FUNC_IMPL(__imp__sub_83B7FBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28208
	ctx.r3.s64 = ctx.r11.s64 + -28208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FBC4"))) PPC_WEAK_FUNC(sub_83B7FBC4);
PPC_FUNC_IMPL(__imp__sub_83B7FBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FBC8"))) PPC_WEAK_FUNC(sub_83B7FBC8);
PPC_FUNC_IMPL(__imp__sub_83B7FBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28200
	ctx.r3.s64 = ctx.r11.s64 + -28200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FBD4"))) PPC_WEAK_FUNC(sub_83B7FBD4);
PPC_FUNC_IMPL(__imp__sub_83B7FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FBD8"))) PPC_WEAK_FUNC(sub_83B7FBD8);
PPC_FUNC_IMPL(__imp__sub_83B7FBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28192
	ctx.r3.s64 = ctx.r11.s64 + -28192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FBE4"))) PPC_WEAK_FUNC(sub_83B7FBE4);
PPC_FUNC_IMPL(__imp__sub_83B7FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FBE8"))) PPC_WEAK_FUNC(sub_83B7FBE8);
PPC_FUNC_IMPL(__imp__sub_83B7FBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28184
	ctx.r3.s64 = ctx.r11.s64 + -28184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FBF4"))) PPC_WEAK_FUNC(sub_83B7FBF4);
PPC_FUNC_IMPL(__imp__sub_83B7FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FBF8"))) PPC_WEAK_FUNC(sub_83B7FBF8);
PPC_FUNC_IMPL(__imp__sub_83B7FBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28176
	ctx.r3.s64 = ctx.r11.s64 + -28176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC04"))) PPC_WEAK_FUNC(sub_83B7FC04);
PPC_FUNC_IMPL(__imp__sub_83B7FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC08"))) PPC_WEAK_FUNC(sub_83B7FC08);
PPC_FUNC_IMPL(__imp__sub_83B7FC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28168
	ctx.r3.s64 = ctx.r11.s64 + -28168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC14"))) PPC_WEAK_FUNC(sub_83B7FC14);
PPC_FUNC_IMPL(__imp__sub_83B7FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC18"))) PPC_WEAK_FUNC(sub_83B7FC18);
PPC_FUNC_IMPL(__imp__sub_83B7FC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28160
	ctx.r3.s64 = ctx.r11.s64 + -28160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC24"))) PPC_WEAK_FUNC(sub_83B7FC24);
PPC_FUNC_IMPL(__imp__sub_83B7FC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC28"))) PPC_WEAK_FUNC(sub_83B7FC28);
PPC_FUNC_IMPL(__imp__sub_83B7FC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28152
	ctx.r3.s64 = ctx.r11.s64 + -28152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC34"))) PPC_WEAK_FUNC(sub_83B7FC34);
PPC_FUNC_IMPL(__imp__sub_83B7FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC38"))) PPC_WEAK_FUNC(sub_83B7FC38);
PPC_FUNC_IMPL(__imp__sub_83B7FC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28144
	ctx.r3.s64 = ctx.r11.s64 + -28144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC44"))) PPC_WEAK_FUNC(sub_83B7FC44);
PPC_FUNC_IMPL(__imp__sub_83B7FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC48"))) PPC_WEAK_FUNC(sub_83B7FC48);
PPC_FUNC_IMPL(__imp__sub_83B7FC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28136
	ctx.r3.s64 = ctx.r11.s64 + -28136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC54"))) PPC_WEAK_FUNC(sub_83B7FC54);
PPC_FUNC_IMPL(__imp__sub_83B7FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC58"))) PPC_WEAK_FUNC(sub_83B7FC58);
PPC_FUNC_IMPL(__imp__sub_83B7FC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28128
	ctx.r3.s64 = ctx.r11.s64 + -28128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC64"))) PPC_WEAK_FUNC(sub_83B7FC64);
PPC_FUNC_IMPL(__imp__sub_83B7FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC68"))) PPC_WEAK_FUNC(sub_83B7FC68);
PPC_FUNC_IMPL(__imp__sub_83B7FC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28120
	ctx.r3.s64 = ctx.r11.s64 + -28120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC74"))) PPC_WEAK_FUNC(sub_83B7FC74);
PPC_FUNC_IMPL(__imp__sub_83B7FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC78"))) PPC_WEAK_FUNC(sub_83B7FC78);
PPC_FUNC_IMPL(__imp__sub_83B7FC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28112
	ctx.r3.s64 = ctx.r11.s64 + -28112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC84"))) PPC_WEAK_FUNC(sub_83B7FC84);
PPC_FUNC_IMPL(__imp__sub_83B7FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC88"))) PPC_WEAK_FUNC(sub_83B7FC88);
PPC_FUNC_IMPL(__imp__sub_83B7FC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28104
	ctx.r3.s64 = ctx.r11.s64 + -28104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FC94"))) PPC_WEAK_FUNC(sub_83B7FC94);
PPC_FUNC_IMPL(__imp__sub_83B7FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FC98"))) PPC_WEAK_FUNC(sub_83B7FC98);
PPC_FUNC_IMPL(__imp__sub_83B7FC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28096
	ctx.r3.s64 = ctx.r11.s64 + -28096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FCA4"))) PPC_WEAK_FUNC(sub_83B7FCA4);
PPC_FUNC_IMPL(__imp__sub_83B7FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FCA8"))) PPC_WEAK_FUNC(sub_83B7FCA8);
PPC_FUNC_IMPL(__imp__sub_83B7FCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28088
	ctx.r3.s64 = ctx.r11.s64 + -28088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FCB4"))) PPC_WEAK_FUNC(sub_83B7FCB4);
PPC_FUNC_IMPL(__imp__sub_83B7FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FCB8"))) PPC_WEAK_FUNC(sub_83B7FCB8);
PPC_FUNC_IMPL(__imp__sub_83B7FCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28080
	ctx.r3.s64 = ctx.r11.s64 + -28080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FCC4"))) PPC_WEAK_FUNC(sub_83B7FCC4);
PPC_FUNC_IMPL(__imp__sub_83B7FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FCC8"))) PPC_WEAK_FUNC(sub_83B7FCC8);
PPC_FUNC_IMPL(__imp__sub_83B7FCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28072
	ctx.r3.s64 = ctx.r11.s64 + -28072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FCD4"))) PPC_WEAK_FUNC(sub_83B7FCD4);
PPC_FUNC_IMPL(__imp__sub_83B7FCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FCD8"))) PPC_WEAK_FUNC(sub_83B7FCD8);
PPC_FUNC_IMPL(__imp__sub_83B7FCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28064
	ctx.r3.s64 = ctx.r11.s64 + -28064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FCE4"))) PPC_WEAK_FUNC(sub_83B7FCE4);
PPC_FUNC_IMPL(__imp__sub_83B7FCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FCE8"))) PPC_WEAK_FUNC(sub_83B7FCE8);
PPC_FUNC_IMPL(__imp__sub_83B7FCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28056
	ctx.r3.s64 = ctx.r11.s64 + -28056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FCF4"))) PPC_WEAK_FUNC(sub_83B7FCF4);
PPC_FUNC_IMPL(__imp__sub_83B7FCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FCF8"))) PPC_WEAK_FUNC(sub_83B7FCF8);
PPC_FUNC_IMPL(__imp__sub_83B7FCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28048
	ctx.r3.s64 = ctx.r11.s64 + -28048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FD04"))) PPC_WEAK_FUNC(sub_83B7FD04);
PPC_FUNC_IMPL(__imp__sub_83B7FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FD08"))) PPC_WEAK_FUNC(sub_83B7FD08);
PPC_FUNC_IMPL(__imp__sub_83B7FD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28040
	ctx.r3.s64 = ctx.r11.s64 + -28040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FD14"))) PPC_WEAK_FUNC(sub_83B7FD14);
PPC_FUNC_IMPL(__imp__sub_83B7FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FD18"))) PPC_WEAK_FUNC(sub_83B7FD18);
PPC_FUNC_IMPL(__imp__sub_83B7FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28032
	ctx.r3.s64 = ctx.r11.s64 + -28032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FD24"))) PPC_WEAK_FUNC(sub_83B7FD24);
PPC_FUNC_IMPL(__imp__sub_83B7FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FD28"))) PPC_WEAK_FUNC(sub_83B7FD28);
PPC_FUNC_IMPL(__imp__sub_83B7FD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28024
	ctx.r3.s64 = ctx.r11.s64 + -28024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FD34"))) PPC_WEAK_FUNC(sub_83B7FD34);
PPC_FUNC_IMPL(__imp__sub_83B7FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FD38"))) PPC_WEAK_FUNC(sub_83B7FD38);
PPC_FUNC_IMPL(__imp__sub_83B7FD38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13540
	ctx.r7.s64 = ctx.r8.s64 + -13540;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13540);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13540(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13540, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7FD60"))) PPC_WEAK_FUNC(sub_83B7FD60);
PPC_FUNC_IMPL(__imp__sub_83B7FD60) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13544
	ctx.r3.s64 = ctx.r11.s64 + -13544;
	// bl 0x83523120
	ctx.lr = 0x83B7FD78;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-28016
	ctx.r3.s64 = ctx.r10.s64 + -28016;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7FD84;
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

__attribute__((alias("__imp__sub_83B7FD94"))) PPC_WEAK_FUNC(sub_83B7FD94);
PPC_FUNC_IMPL(__imp__sub_83B7FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FD98"))) PPC_WEAK_FUNC(sub_83B7FD98);
PPC_FUNC_IMPL(__imp__sub_83B7FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-28000
	ctx.r3.s64 = ctx.r11.s64 + -28000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FDA4"))) PPC_WEAK_FUNC(sub_83B7FDA4);
PPC_FUNC_IMPL(__imp__sub_83B7FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FDA8"))) PPC_WEAK_FUNC(sub_83B7FDA8);
PPC_FUNC_IMPL(__imp__sub_83B7FDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27992
	ctx.r3.s64 = ctx.r11.s64 + -27992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FDB4"))) PPC_WEAK_FUNC(sub_83B7FDB4);
PPC_FUNC_IMPL(__imp__sub_83B7FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FDB8"))) PPC_WEAK_FUNC(sub_83B7FDB8);
PPC_FUNC_IMPL(__imp__sub_83B7FDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27984
	ctx.r3.s64 = ctx.r11.s64 + -27984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FDC4"))) PPC_WEAK_FUNC(sub_83B7FDC4);
PPC_FUNC_IMPL(__imp__sub_83B7FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FDC8"))) PPC_WEAK_FUNC(sub_83B7FDC8);
PPC_FUNC_IMPL(__imp__sub_83B7FDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27976
	ctx.r3.s64 = ctx.r11.s64 + -27976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FDD4"))) PPC_WEAK_FUNC(sub_83B7FDD4);
PPC_FUNC_IMPL(__imp__sub_83B7FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FDD8"))) PPC_WEAK_FUNC(sub_83B7FDD8);
PPC_FUNC_IMPL(__imp__sub_83B7FDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27968
	ctx.r3.s64 = ctx.r11.s64 + -27968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FDE4"))) PPC_WEAK_FUNC(sub_83B7FDE4);
PPC_FUNC_IMPL(__imp__sub_83B7FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FDE8"))) PPC_WEAK_FUNC(sub_83B7FDE8);
PPC_FUNC_IMPL(__imp__sub_83B7FDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27960
	ctx.r3.s64 = ctx.r11.s64 + -27960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FDF4"))) PPC_WEAK_FUNC(sub_83B7FDF4);
PPC_FUNC_IMPL(__imp__sub_83B7FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FDF8"))) PPC_WEAK_FUNC(sub_83B7FDF8);
PPC_FUNC_IMPL(__imp__sub_83B7FDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27952
	ctx.r3.s64 = ctx.r11.s64 + -27952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FE04"))) PPC_WEAK_FUNC(sub_83B7FE04);
PPC_FUNC_IMPL(__imp__sub_83B7FE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FE08"))) PPC_WEAK_FUNC(sub_83B7FE08);
PPC_FUNC_IMPL(__imp__sub_83B7FE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27944
	ctx.r3.s64 = ctx.r11.s64 + -27944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FE14"))) PPC_WEAK_FUNC(sub_83B7FE14);
PPC_FUNC_IMPL(__imp__sub_83B7FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FE18"))) PPC_WEAK_FUNC(sub_83B7FE18);
PPC_FUNC_IMPL(__imp__sub_83B7FE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27936
	ctx.r3.s64 = ctx.r11.s64 + -27936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FE24"))) PPC_WEAK_FUNC(sub_83B7FE24);
PPC_FUNC_IMPL(__imp__sub_83B7FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FE28"))) PPC_WEAK_FUNC(sub_83B7FE28);
PPC_FUNC_IMPL(__imp__sub_83B7FE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27928
	ctx.r3.s64 = ctx.r11.s64 + -27928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FE34"))) PPC_WEAK_FUNC(sub_83B7FE34);
PPC_FUNC_IMPL(__imp__sub_83B7FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FE38"))) PPC_WEAK_FUNC(sub_83B7FE38);
PPC_FUNC_IMPL(__imp__sub_83B7FE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27920
	ctx.r3.s64 = ctx.r11.s64 + -27920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FE44"))) PPC_WEAK_FUNC(sub_83B7FE44);
PPC_FUNC_IMPL(__imp__sub_83B7FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FE48"))) PPC_WEAK_FUNC(sub_83B7FE48);
PPC_FUNC_IMPL(__imp__sub_83B7FE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27912
	ctx.r3.s64 = ctx.r11.s64 + -27912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FE54"))) PPC_WEAK_FUNC(sub_83B7FE54);
PPC_FUNC_IMPL(__imp__sub_83B7FE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FE58"))) PPC_WEAK_FUNC(sub_83B7FE58);
PPC_FUNC_IMPL(__imp__sub_83B7FE58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13528
	ctx.r7.s64 = ctx.r8.s64 + -13528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13528(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7FE80"))) PPC_WEAK_FUNC(sub_83B7FE80);
PPC_FUNC_IMPL(__imp__sub_83B7FE80) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13532
	ctx.r3.s64 = ctx.r11.s64 + -13532;
	// bl 0x83523120
	ctx.lr = 0x83B7FE98;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27904
	ctx.r3.s64 = ctx.r10.s64 + -27904;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7FEA4;
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

__attribute__((alias("__imp__sub_83B7FEB4"))) PPC_WEAK_FUNC(sub_83B7FEB4);
PPC_FUNC_IMPL(__imp__sub_83B7FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FEB8"))) PPC_WEAK_FUNC(sub_83B7FEB8);
PPC_FUNC_IMPL(__imp__sub_83B7FEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27888
	ctx.r3.s64 = ctx.r11.s64 + -27888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FEC4"))) PPC_WEAK_FUNC(sub_83B7FEC4);
PPC_FUNC_IMPL(__imp__sub_83B7FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FEC8"))) PPC_WEAK_FUNC(sub_83B7FEC8);
PPC_FUNC_IMPL(__imp__sub_83B7FEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27880
	ctx.r3.s64 = ctx.r11.s64 + -27880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FED4"))) PPC_WEAK_FUNC(sub_83B7FED4);
PPC_FUNC_IMPL(__imp__sub_83B7FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FED8"))) PPC_WEAK_FUNC(sub_83B7FED8);
PPC_FUNC_IMPL(__imp__sub_83B7FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27872
	ctx.r3.s64 = ctx.r11.s64 + -27872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FEE4"))) PPC_WEAK_FUNC(sub_83B7FEE4);
PPC_FUNC_IMPL(__imp__sub_83B7FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FEE8"))) PPC_WEAK_FUNC(sub_83B7FEE8);
PPC_FUNC_IMPL(__imp__sub_83B7FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27864
	ctx.r3.s64 = ctx.r11.s64 + -27864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FEF4"))) PPC_WEAK_FUNC(sub_83B7FEF4);
PPC_FUNC_IMPL(__imp__sub_83B7FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FEF8"))) PPC_WEAK_FUNC(sub_83B7FEF8);
PPC_FUNC_IMPL(__imp__sub_83B7FEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27856
	ctx.r3.s64 = ctx.r11.s64 + -27856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FF04"))) PPC_WEAK_FUNC(sub_83B7FF04);
PPC_FUNC_IMPL(__imp__sub_83B7FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FF08"))) PPC_WEAK_FUNC(sub_83B7FF08);
PPC_FUNC_IMPL(__imp__sub_83B7FF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27848
	ctx.r3.s64 = ctx.r11.s64 + -27848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FF14"))) PPC_WEAK_FUNC(sub_83B7FF14);
PPC_FUNC_IMPL(__imp__sub_83B7FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FF18"))) PPC_WEAK_FUNC(sub_83B7FF18);
PPC_FUNC_IMPL(__imp__sub_83B7FF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27840
	ctx.r3.s64 = ctx.r11.s64 + -27840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FF24"))) PPC_WEAK_FUNC(sub_83B7FF24);
PPC_FUNC_IMPL(__imp__sub_83B7FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FF28"))) PPC_WEAK_FUNC(sub_83B7FF28);
PPC_FUNC_IMPL(__imp__sub_83B7FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27832
	ctx.r3.s64 = ctx.r11.s64 + -27832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FF34"))) PPC_WEAK_FUNC(sub_83B7FF34);
PPC_FUNC_IMPL(__imp__sub_83B7FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FF38"))) PPC_WEAK_FUNC(sub_83B7FF38);
PPC_FUNC_IMPL(__imp__sub_83B7FF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27824
	ctx.r3.s64 = ctx.r11.s64 + -27824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FF44"))) PPC_WEAK_FUNC(sub_83B7FF44);
PPC_FUNC_IMPL(__imp__sub_83B7FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FF48"))) PPC_WEAK_FUNC(sub_83B7FF48);
PPC_FUNC_IMPL(__imp__sub_83B7FF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27816
	ctx.r3.s64 = ctx.r11.s64 + -27816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FF54"))) PPC_WEAK_FUNC(sub_83B7FF54);
PPC_FUNC_IMPL(__imp__sub_83B7FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FF58"))) PPC_WEAK_FUNC(sub_83B7FF58);
PPC_FUNC_IMPL(__imp__sub_83B7FF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27808
	ctx.r3.s64 = ctx.r11.s64 + -27808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FF64"))) PPC_WEAK_FUNC(sub_83B7FF64);
PPC_FUNC_IMPL(__imp__sub_83B7FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FF68"))) PPC_WEAK_FUNC(sub_83B7FF68);
PPC_FUNC_IMPL(__imp__sub_83B7FF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27800
	ctx.r3.s64 = ctx.r11.s64 + -27800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FF74"))) PPC_WEAK_FUNC(sub_83B7FF74);
PPC_FUNC_IMPL(__imp__sub_83B7FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FF78"))) PPC_WEAK_FUNC(sub_83B7FF78);
PPC_FUNC_IMPL(__imp__sub_83B7FF78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13516
	ctx.r7.s64 = ctx.r8.s64 + -13516;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13516);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13516, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7FFA0"))) PPC_WEAK_FUNC(sub_83B7FFA0);
PPC_FUNC_IMPL(__imp__sub_83B7FFA0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13520
	ctx.r3.s64 = ctx.r11.s64 + -13520;
	// bl 0x83523120
	ctx.lr = 0x83B7FFB8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27792
	ctx.r3.s64 = ctx.r10.s64 + -27792;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7FFC4;
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

__attribute__((alias("__imp__sub_83B7FFD4"))) PPC_WEAK_FUNC(sub_83B7FFD4);
PPC_FUNC_IMPL(__imp__sub_83B7FFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FFD8"))) PPC_WEAK_FUNC(sub_83B7FFD8);
PPC_FUNC_IMPL(__imp__sub_83B7FFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27776
	ctx.r3.s64 = ctx.r11.s64 + -27776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FFE4"))) PPC_WEAK_FUNC(sub_83B7FFE4);
PPC_FUNC_IMPL(__imp__sub_83B7FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FFE8"))) PPC_WEAK_FUNC(sub_83B7FFE8);
PPC_FUNC_IMPL(__imp__sub_83B7FFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27768
	ctx.r3.s64 = ctx.r11.s64 + -27768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7FFF4"))) PPC_WEAK_FUNC(sub_83B7FFF4);
PPC_FUNC_IMPL(__imp__sub_83B7FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7FFF8"))) PPC_WEAK_FUNC(sub_83B7FFF8);
PPC_FUNC_IMPL(__imp__sub_83B7FFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27760
	ctx.r3.s64 = ctx.r11.s64 + -27760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80004"))) PPC_WEAK_FUNC(sub_83B80004);
PPC_FUNC_IMPL(__imp__sub_83B80004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80008"))) PPC_WEAK_FUNC(sub_83B80008);
PPC_FUNC_IMPL(__imp__sub_83B80008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27752
	ctx.r3.s64 = ctx.r11.s64 + -27752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80014"))) PPC_WEAK_FUNC(sub_83B80014);
PPC_FUNC_IMPL(__imp__sub_83B80014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80018"))) PPC_WEAK_FUNC(sub_83B80018);
PPC_FUNC_IMPL(__imp__sub_83B80018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27744
	ctx.r3.s64 = ctx.r11.s64 + -27744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80024"))) PPC_WEAK_FUNC(sub_83B80024);
PPC_FUNC_IMPL(__imp__sub_83B80024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80028"))) PPC_WEAK_FUNC(sub_83B80028);
PPC_FUNC_IMPL(__imp__sub_83B80028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27736
	ctx.r3.s64 = ctx.r11.s64 + -27736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80034"))) PPC_WEAK_FUNC(sub_83B80034);
PPC_FUNC_IMPL(__imp__sub_83B80034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80038"))) PPC_WEAK_FUNC(sub_83B80038);
PPC_FUNC_IMPL(__imp__sub_83B80038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27728
	ctx.r3.s64 = ctx.r11.s64 + -27728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80044"))) PPC_WEAK_FUNC(sub_83B80044);
PPC_FUNC_IMPL(__imp__sub_83B80044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80048"))) PPC_WEAK_FUNC(sub_83B80048);
PPC_FUNC_IMPL(__imp__sub_83B80048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27720
	ctx.r3.s64 = ctx.r11.s64 + -27720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80054"))) PPC_WEAK_FUNC(sub_83B80054);
PPC_FUNC_IMPL(__imp__sub_83B80054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80058"))) PPC_WEAK_FUNC(sub_83B80058);
PPC_FUNC_IMPL(__imp__sub_83B80058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27712
	ctx.r3.s64 = ctx.r11.s64 + -27712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80064"))) PPC_WEAK_FUNC(sub_83B80064);
PPC_FUNC_IMPL(__imp__sub_83B80064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80068"))) PPC_WEAK_FUNC(sub_83B80068);
PPC_FUNC_IMPL(__imp__sub_83B80068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27704
	ctx.r3.s64 = ctx.r11.s64 + -27704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80074"))) PPC_WEAK_FUNC(sub_83B80074);
PPC_FUNC_IMPL(__imp__sub_83B80074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80078"))) PPC_WEAK_FUNC(sub_83B80078);
PPC_FUNC_IMPL(__imp__sub_83B80078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27696
	ctx.r3.s64 = ctx.r11.s64 + -27696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80084"))) PPC_WEAK_FUNC(sub_83B80084);
PPC_FUNC_IMPL(__imp__sub_83B80084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80088"))) PPC_WEAK_FUNC(sub_83B80088);
PPC_FUNC_IMPL(__imp__sub_83B80088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27688
	ctx.r3.s64 = ctx.r11.s64 + -27688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80094"))) PPC_WEAK_FUNC(sub_83B80094);
PPC_FUNC_IMPL(__imp__sub_83B80094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80098"))) PPC_WEAK_FUNC(sub_83B80098);
PPC_FUNC_IMPL(__imp__sub_83B80098) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13504
	ctx.r7.s64 = ctx.r8.s64 + -13504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B800C0"))) PPC_WEAK_FUNC(sub_83B800C0);
PPC_FUNC_IMPL(__imp__sub_83B800C0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13508
	ctx.r3.s64 = ctx.r11.s64 + -13508;
	// bl 0x83523120
	ctx.lr = 0x83B800D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27680
	ctx.r3.s64 = ctx.r10.s64 + -27680;
	// bl 0x831cdcc8
	ctx.lr = 0x83B800E4;
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

__attribute__((alias("__imp__sub_83B800F4"))) PPC_WEAK_FUNC(sub_83B800F4);
PPC_FUNC_IMPL(__imp__sub_83B800F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B800F8"))) PPC_WEAK_FUNC(sub_83B800F8);
PPC_FUNC_IMPL(__imp__sub_83B800F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27664
	ctx.r3.s64 = ctx.r11.s64 + -27664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80104"))) PPC_WEAK_FUNC(sub_83B80104);
PPC_FUNC_IMPL(__imp__sub_83B80104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80108"))) PPC_WEAK_FUNC(sub_83B80108);
PPC_FUNC_IMPL(__imp__sub_83B80108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27656
	ctx.r3.s64 = ctx.r11.s64 + -27656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80114"))) PPC_WEAK_FUNC(sub_83B80114);
PPC_FUNC_IMPL(__imp__sub_83B80114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80118"))) PPC_WEAK_FUNC(sub_83B80118);
PPC_FUNC_IMPL(__imp__sub_83B80118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80124"))) PPC_WEAK_FUNC(sub_83B80124);
PPC_FUNC_IMPL(__imp__sub_83B80124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80128"))) PPC_WEAK_FUNC(sub_83B80128);
PPC_FUNC_IMPL(__imp__sub_83B80128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27640
	ctx.r3.s64 = ctx.r11.s64 + -27640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80134"))) PPC_WEAK_FUNC(sub_83B80134);
PPC_FUNC_IMPL(__imp__sub_83B80134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80138"))) PPC_WEAK_FUNC(sub_83B80138);
PPC_FUNC_IMPL(__imp__sub_83B80138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27632
	ctx.r3.s64 = ctx.r11.s64 + -27632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80144"))) PPC_WEAK_FUNC(sub_83B80144);
PPC_FUNC_IMPL(__imp__sub_83B80144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80148"))) PPC_WEAK_FUNC(sub_83B80148);
PPC_FUNC_IMPL(__imp__sub_83B80148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27624
	ctx.r3.s64 = ctx.r11.s64 + -27624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80154"))) PPC_WEAK_FUNC(sub_83B80154);
PPC_FUNC_IMPL(__imp__sub_83B80154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80158"))) PPC_WEAK_FUNC(sub_83B80158);
PPC_FUNC_IMPL(__imp__sub_83B80158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27616
	ctx.r3.s64 = ctx.r11.s64 + -27616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80164"))) PPC_WEAK_FUNC(sub_83B80164);
PPC_FUNC_IMPL(__imp__sub_83B80164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80168"))) PPC_WEAK_FUNC(sub_83B80168);
PPC_FUNC_IMPL(__imp__sub_83B80168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27608
	ctx.r3.s64 = ctx.r11.s64 + -27608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80174"))) PPC_WEAK_FUNC(sub_83B80174);
PPC_FUNC_IMPL(__imp__sub_83B80174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80178"))) PPC_WEAK_FUNC(sub_83B80178);
PPC_FUNC_IMPL(__imp__sub_83B80178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27600
	ctx.r3.s64 = ctx.r11.s64 + -27600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80184"))) PPC_WEAK_FUNC(sub_83B80184);
PPC_FUNC_IMPL(__imp__sub_83B80184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80188"))) PPC_WEAK_FUNC(sub_83B80188);
PPC_FUNC_IMPL(__imp__sub_83B80188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27592
	ctx.r3.s64 = ctx.r11.s64 + -27592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80194"))) PPC_WEAK_FUNC(sub_83B80194);
PPC_FUNC_IMPL(__imp__sub_83B80194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80198"))) PPC_WEAK_FUNC(sub_83B80198);
PPC_FUNC_IMPL(__imp__sub_83B80198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B801A4"))) PPC_WEAK_FUNC(sub_83B801A4);
PPC_FUNC_IMPL(__imp__sub_83B801A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B801A8"))) PPC_WEAK_FUNC(sub_83B801A8);
PPC_FUNC_IMPL(__imp__sub_83B801A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27576
	ctx.r3.s64 = ctx.r11.s64 + -27576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B801B4"))) PPC_WEAK_FUNC(sub_83B801B4);
PPC_FUNC_IMPL(__imp__sub_83B801B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B801B8"))) PPC_WEAK_FUNC(sub_83B801B8);
PPC_FUNC_IMPL(__imp__sub_83B801B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13492
	ctx.r7.s64 = ctx.r8.s64 + -13492;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13492(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13492);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13492, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B801E0"))) PPC_WEAK_FUNC(sub_83B801E0);
PPC_FUNC_IMPL(__imp__sub_83B801E0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// bl 0x83523120
	ctx.lr = 0x83B801F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27568
	ctx.r3.s64 = ctx.r10.s64 + -27568;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80204;
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

__attribute__((alias("__imp__sub_83B80214"))) PPC_WEAK_FUNC(sub_83B80214);
PPC_FUNC_IMPL(__imp__sub_83B80214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80218"))) PPC_WEAK_FUNC(sub_83B80218);
PPC_FUNC_IMPL(__imp__sub_83B80218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80224"))) PPC_WEAK_FUNC(sub_83B80224);
PPC_FUNC_IMPL(__imp__sub_83B80224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80228"))) PPC_WEAK_FUNC(sub_83B80228);
PPC_FUNC_IMPL(__imp__sub_83B80228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27544
	ctx.r3.s64 = ctx.r11.s64 + -27544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80234"))) PPC_WEAK_FUNC(sub_83B80234);
PPC_FUNC_IMPL(__imp__sub_83B80234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80238"))) PPC_WEAK_FUNC(sub_83B80238);
PPC_FUNC_IMPL(__imp__sub_83B80238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27536
	ctx.r3.s64 = ctx.r11.s64 + -27536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80244"))) PPC_WEAK_FUNC(sub_83B80244);
PPC_FUNC_IMPL(__imp__sub_83B80244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80248"))) PPC_WEAK_FUNC(sub_83B80248);
PPC_FUNC_IMPL(__imp__sub_83B80248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27528
	ctx.r3.s64 = ctx.r11.s64 + -27528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80254"))) PPC_WEAK_FUNC(sub_83B80254);
PPC_FUNC_IMPL(__imp__sub_83B80254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80258"))) PPC_WEAK_FUNC(sub_83B80258);
PPC_FUNC_IMPL(__imp__sub_83B80258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27520
	ctx.r3.s64 = ctx.r11.s64 + -27520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80264"))) PPC_WEAK_FUNC(sub_83B80264);
PPC_FUNC_IMPL(__imp__sub_83B80264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80268"))) PPC_WEAK_FUNC(sub_83B80268);
PPC_FUNC_IMPL(__imp__sub_83B80268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27512
	ctx.r3.s64 = ctx.r11.s64 + -27512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80274"))) PPC_WEAK_FUNC(sub_83B80274);
PPC_FUNC_IMPL(__imp__sub_83B80274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80278"))) PPC_WEAK_FUNC(sub_83B80278);
PPC_FUNC_IMPL(__imp__sub_83B80278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27504
	ctx.r3.s64 = ctx.r11.s64 + -27504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80284"))) PPC_WEAK_FUNC(sub_83B80284);
PPC_FUNC_IMPL(__imp__sub_83B80284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80288"))) PPC_WEAK_FUNC(sub_83B80288);
PPC_FUNC_IMPL(__imp__sub_83B80288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27496
	ctx.r3.s64 = ctx.r11.s64 + -27496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80294"))) PPC_WEAK_FUNC(sub_83B80294);
PPC_FUNC_IMPL(__imp__sub_83B80294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80298"))) PPC_WEAK_FUNC(sub_83B80298);
PPC_FUNC_IMPL(__imp__sub_83B80298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B802A4"))) PPC_WEAK_FUNC(sub_83B802A4);
PPC_FUNC_IMPL(__imp__sub_83B802A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B802A8"))) PPC_WEAK_FUNC(sub_83B802A8);
PPC_FUNC_IMPL(__imp__sub_83B802A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27480
	ctx.r3.s64 = ctx.r11.s64 + -27480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B802B4"))) PPC_WEAK_FUNC(sub_83B802B4);
PPC_FUNC_IMPL(__imp__sub_83B802B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B802B8"))) PPC_WEAK_FUNC(sub_83B802B8);
PPC_FUNC_IMPL(__imp__sub_83B802B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B802C4"))) PPC_WEAK_FUNC(sub_83B802C4);
PPC_FUNC_IMPL(__imp__sub_83B802C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B802C8"))) PPC_WEAK_FUNC(sub_83B802C8);
PPC_FUNC_IMPL(__imp__sub_83B802C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27464
	ctx.r3.s64 = ctx.r11.s64 + -27464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B802D4"))) PPC_WEAK_FUNC(sub_83B802D4);
PPC_FUNC_IMPL(__imp__sub_83B802D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B802D8"))) PPC_WEAK_FUNC(sub_83B802D8);
PPC_FUNC_IMPL(__imp__sub_83B802D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13480
	ctx.r7.s64 = ctx.r8.s64 + -13480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80300"))) PPC_WEAK_FUNC(sub_83B80300);
PPC_FUNC_IMPL(__imp__sub_83B80300) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13484
	ctx.r3.s64 = ctx.r11.s64 + -13484;
	// bl 0x83523120
	ctx.lr = 0x83B80318;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27456
	ctx.r3.s64 = ctx.r10.s64 + -27456;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80324;
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

__attribute__((alias("__imp__sub_83B80334"))) PPC_WEAK_FUNC(sub_83B80334);
PPC_FUNC_IMPL(__imp__sub_83B80334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80338"))) PPC_WEAK_FUNC(sub_83B80338);
PPC_FUNC_IMPL(__imp__sub_83B80338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27440
	ctx.r3.s64 = ctx.r11.s64 + -27440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80344"))) PPC_WEAK_FUNC(sub_83B80344);
PPC_FUNC_IMPL(__imp__sub_83B80344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80348"))) PPC_WEAK_FUNC(sub_83B80348);
PPC_FUNC_IMPL(__imp__sub_83B80348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80354"))) PPC_WEAK_FUNC(sub_83B80354);
PPC_FUNC_IMPL(__imp__sub_83B80354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80358"))) PPC_WEAK_FUNC(sub_83B80358);
PPC_FUNC_IMPL(__imp__sub_83B80358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27424
	ctx.r3.s64 = ctx.r11.s64 + -27424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80364"))) PPC_WEAK_FUNC(sub_83B80364);
PPC_FUNC_IMPL(__imp__sub_83B80364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80368"))) PPC_WEAK_FUNC(sub_83B80368);
PPC_FUNC_IMPL(__imp__sub_83B80368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27416
	ctx.r3.s64 = ctx.r11.s64 + -27416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80374"))) PPC_WEAK_FUNC(sub_83B80374);
PPC_FUNC_IMPL(__imp__sub_83B80374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80378"))) PPC_WEAK_FUNC(sub_83B80378);
PPC_FUNC_IMPL(__imp__sub_83B80378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27408
	ctx.r3.s64 = ctx.r11.s64 + -27408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80384"))) PPC_WEAK_FUNC(sub_83B80384);
PPC_FUNC_IMPL(__imp__sub_83B80384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80388"))) PPC_WEAK_FUNC(sub_83B80388);
PPC_FUNC_IMPL(__imp__sub_83B80388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27400
	ctx.r3.s64 = ctx.r11.s64 + -27400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80394"))) PPC_WEAK_FUNC(sub_83B80394);
PPC_FUNC_IMPL(__imp__sub_83B80394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80398"))) PPC_WEAK_FUNC(sub_83B80398);
PPC_FUNC_IMPL(__imp__sub_83B80398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B803A4"))) PPC_WEAK_FUNC(sub_83B803A4);
PPC_FUNC_IMPL(__imp__sub_83B803A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B803A8"))) PPC_WEAK_FUNC(sub_83B803A8);
PPC_FUNC_IMPL(__imp__sub_83B803A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27384
	ctx.r3.s64 = ctx.r11.s64 + -27384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B803B4"))) PPC_WEAK_FUNC(sub_83B803B4);
PPC_FUNC_IMPL(__imp__sub_83B803B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B803B8"))) PPC_WEAK_FUNC(sub_83B803B8);
PPC_FUNC_IMPL(__imp__sub_83B803B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B803C4"))) PPC_WEAK_FUNC(sub_83B803C4);
PPC_FUNC_IMPL(__imp__sub_83B803C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B803C8"))) PPC_WEAK_FUNC(sub_83B803C8);
PPC_FUNC_IMPL(__imp__sub_83B803C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27368
	ctx.r3.s64 = ctx.r11.s64 + -27368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B803D4"))) PPC_WEAK_FUNC(sub_83B803D4);
PPC_FUNC_IMPL(__imp__sub_83B803D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B803D8"))) PPC_WEAK_FUNC(sub_83B803D8);
PPC_FUNC_IMPL(__imp__sub_83B803D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27360
	ctx.r3.s64 = ctx.r11.s64 + -27360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B803E4"))) PPC_WEAK_FUNC(sub_83B803E4);
PPC_FUNC_IMPL(__imp__sub_83B803E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B803E8"))) PPC_WEAK_FUNC(sub_83B803E8);
PPC_FUNC_IMPL(__imp__sub_83B803E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27352
	ctx.r3.s64 = ctx.r11.s64 + -27352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B803F4"))) PPC_WEAK_FUNC(sub_83B803F4);
PPC_FUNC_IMPL(__imp__sub_83B803F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B803F8"))) PPC_WEAK_FUNC(sub_83B803F8);
PPC_FUNC_IMPL(__imp__sub_83B803F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13468
	ctx.r7.s64 = ctx.r8.s64 + -13468;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13468(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13468);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13468, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80420"))) PPC_WEAK_FUNC(sub_83B80420);
PPC_FUNC_IMPL(__imp__sub_83B80420) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13472
	ctx.r3.s64 = ctx.r11.s64 + -13472;
	// bl 0x83523120
	ctx.lr = 0x83B80438;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27344
	ctx.r3.s64 = ctx.r10.s64 + -27344;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80444;
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

__attribute__((alias("__imp__sub_83B80454"))) PPC_WEAK_FUNC(sub_83B80454);
PPC_FUNC_IMPL(__imp__sub_83B80454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80458"))) PPC_WEAK_FUNC(sub_83B80458);
PPC_FUNC_IMPL(__imp__sub_83B80458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27328
	ctx.r3.s64 = ctx.r11.s64 + -27328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80464"))) PPC_WEAK_FUNC(sub_83B80464);
PPC_FUNC_IMPL(__imp__sub_83B80464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80468"))) PPC_WEAK_FUNC(sub_83B80468);
PPC_FUNC_IMPL(__imp__sub_83B80468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80474"))) PPC_WEAK_FUNC(sub_83B80474);
PPC_FUNC_IMPL(__imp__sub_83B80474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80478"))) PPC_WEAK_FUNC(sub_83B80478);
PPC_FUNC_IMPL(__imp__sub_83B80478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80484"))) PPC_WEAK_FUNC(sub_83B80484);
PPC_FUNC_IMPL(__imp__sub_83B80484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80488"))) PPC_WEAK_FUNC(sub_83B80488);
PPC_FUNC_IMPL(__imp__sub_83B80488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80494"))) PPC_WEAK_FUNC(sub_83B80494);
PPC_FUNC_IMPL(__imp__sub_83B80494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80498"))) PPC_WEAK_FUNC(sub_83B80498);
PPC_FUNC_IMPL(__imp__sub_83B80498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27296
	ctx.r3.s64 = ctx.r11.s64 + -27296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B804A4"))) PPC_WEAK_FUNC(sub_83B804A4);
PPC_FUNC_IMPL(__imp__sub_83B804A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B804A8"))) PPC_WEAK_FUNC(sub_83B804A8);
PPC_FUNC_IMPL(__imp__sub_83B804A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B804B4"))) PPC_WEAK_FUNC(sub_83B804B4);
PPC_FUNC_IMPL(__imp__sub_83B804B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B804B8"))) PPC_WEAK_FUNC(sub_83B804B8);
PPC_FUNC_IMPL(__imp__sub_83B804B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27280
	ctx.r3.s64 = ctx.r11.s64 + -27280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B804C4"))) PPC_WEAK_FUNC(sub_83B804C4);
PPC_FUNC_IMPL(__imp__sub_83B804C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B804C8"))) PPC_WEAK_FUNC(sub_83B804C8);
PPC_FUNC_IMPL(__imp__sub_83B804C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27272
	ctx.r3.s64 = ctx.r11.s64 + -27272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B804D4"))) PPC_WEAK_FUNC(sub_83B804D4);
PPC_FUNC_IMPL(__imp__sub_83B804D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B804D8"))) PPC_WEAK_FUNC(sub_83B804D8);
PPC_FUNC_IMPL(__imp__sub_83B804D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27264
	ctx.r3.s64 = ctx.r11.s64 + -27264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B804E4"))) PPC_WEAK_FUNC(sub_83B804E4);
PPC_FUNC_IMPL(__imp__sub_83B804E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B804E8"))) PPC_WEAK_FUNC(sub_83B804E8);
PPC_FUNC_IMPL(__imp__sub_83B804E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27256
	ctx.r3.s64 = ctx.r11.s64 + -27256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B804F4"))) PPC_WEAK_FUNC(sub_83B804F4);
PPC_FUNC_IMPL(__imp__sub_83B804F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B804F8"))) PPC_WEAK_FUNC(sub_83B804F8);
PPC_FUNC_IMPL(__imp__sub_83B804F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27248
	ctx.r3.s64 = ctx.r11.s64 + -27248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80504"))) PPC_WEAK_FUNC(sub_83B80504);
PPC_FUNC_IMPL(__imp__sub_83B80504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80508"))) PPC_WEAK_FUNC(sub_83B80508);
PPC_FUNC_IMPL(__imp__sub_83B80508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27240
	ctx.r3.s64 = ctx.r11.s64 + -27240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80514"))) PPC_WEAK_FUNC(sub_83B80514);
PPC_FUNC_IMPL(__imp__sub_83B80514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80518"))) PPC_WEAK_FUNC(sub_83B80518);
PPC_FUNC_IMPL(__imp__sub_83B80518) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13456
	ctx.r7.s64 = ctx.r8.s64 + -13456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80540"))) PPC_WEAK_FUNC(sub_83B80540);
PPC_FUNC_IMPL(__imp__sub_83B80540) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-13460
	ctx.r3.s64 = ctx.r11.s64 + -13460;
	// bl 0x83523120
	ctx.lr = 0x83B80558;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27232
	ctx.r3.s64 = ctx.r10.s64 + -27232;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80564;
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

__attribute__((alias("__imp__sub_83B80574"))) PPC_WEAK_FUNC(sub_83B80574);
PPC_FUNC_IMPL(__imp__sub_83B80574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80578"))) PPC_WEAK_FUNC(sub_83B80578);
PPC_FUNC_IMPL(__imp__sub_83B80578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27216
	ctx.r3.s64 = ctx.r11.s64 + -27216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80584"))) PPC_WEAK_FUNC(sub_83B80584);
PPC_FUNC_IMPL(__imp__sub_83B80584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80588"))) PPC_WEAK_FUNC(sub_83B80588);
PPC_FUNC_IMPL(__imp__sub_83B80588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27208
	ctx.r3.s64 = ctx.r11.s64 + -27208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80594"))) PPC_WEAK_FUNC(sub_83B80594);
PPC_FUNC_IMPL(__imp__sub_83B80594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80598"))) PPC_WEAK_FUNC(sub_83B80598);
PPC_FUNC_IMPL(__imp__sub_83B80598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B805A4"))) PPC_WEAK_FUNC(sub_83B805A4);
PPC_FUNC_IMPL(__imp__sub_83B805A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B805A8"))) PPC_WEAK_FUNC(sub_83B805A8);
PPC_FUNC_IMPL(__imp__sub_83B805A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27192
	ctx.r3.s64 = ctx.r11.s64 + -27192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B805B4"))) PPC_WEAK_FUNC(sub_83B805B4);
PPC_FUNC_IMPL(__imp__sub_83B805B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B805B8"))) PPC_WEAK_FUNC(sub_83B805B8);
PPC_FUNC_IMPL(__imp__sub_83B805B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27184
	ctx.r3.s64 = ctx.r11.s64 + -27184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B805C4"))) PPC_WEAK_FUNC(sub_83B805C4);
PPC_FUNC_IMPL(__imp__sub_83B805C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B805C8"))) PPC_WEAK_FUNC(sub_83B805C8);
PPC_FUNC_IMPL(__imp__sub_83B805C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27176
	ctx.r3.s64 = ctx.r11.s64 + -27176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B805D4"))) PPC_WEAK_FUNC(sub_83B805D4);
PPC_FUNC_IMPL(__imp__sub_83B805D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B805D8"))) PPC_WEAK_FUNC(sub_83B805D8);
PPC_FUNC_IMPL(__imp__sub_83B805D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27168
	ctx.r3.s64 = ctx.r11.s64 + -27168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B805E4"))) PPC_WEAK_FUNC(sub_83B805E4);
PPC_FUNC_IMPL(__imp__sub_83B805E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

