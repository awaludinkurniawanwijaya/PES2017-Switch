#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BA0B04"))) PPC_WEAK_FUNC(sub_83BA0B04);
PPC_FUNC_IMPL(__imp__sub_83BA0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0B08"))) PPC_WEAK_FUNC(sub_83BA0B08);
PPC_FUNC_IMPL(__imp__sub_83BA0B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23032
	ctx.r3.s64 = ctx.r11.s64 + 23032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0B14"))) PPC_WEAK_FUNC(sub_83BA0B14);
PPC_FUNC_IMPL(__imp__sub_83BA0B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0B18"))) PPC_WEAK_FUNC(sub_83BA0B18);
PPC_FUNC_IMPL(__imp__sub_83BA0B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23040
	ctx.r3.s64 = ctx.r11.s64 + 23040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0B24"))) PPC_WEAK_FUNC(sub_83BA0B24);
PPC_FUNC_IMPL(__imp__sub_83BA0B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0B28"))) PPC_WEAK_FUNC(sub_83BA0B28);
PPC_FUNC_IMPL(__imp__sub_83BA0B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23048
	ctx.r3.s64 = ctx.r11.s64 + 23048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0B34"))) PPC_WEAK_FUNC(sub_83BA0B34);
PPC_FUNC_IMPL(__imp__sub_83BA0B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0B38"))) PPC_WEAK_FUNC(sub_83BA0B38);
PPC_FUNC_IMPL(__imp__sub_83BA0B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23056
	ctx.r3.s64 = ctx.r11.s64 + 23056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0B44"))) PPC_WEAK_FUNC(sub_83BA0B44);
PPC_FUNC_IMPL(__imp__sub_83BA0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0B48"))) PPC_WEAK_FUNC(sub_83BA0B48);
PPC_FUNC_IMPL(__imp__sub_83BA0B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23064
	ctx.r3.s64 = ctx.r11.s64 + 23064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0B54"))) PPC_WEAK_FUNC(sub_83BA0B54);
PPC_FUNC_IMPL(__imp__sub_83BA0B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0B58"))) PPC_WEAK_FUNC(sub_83BA0B58);
PPC_FUNC_IMPL(__imp__sub_83BA0B58) {
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
	// addi r3,r11,772
	ctx.r3.s64 = ctx.r11.s64 + 772;
	// bl 0x83523120
	ctx.lr = 0x83BA0B70;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,23072
	ctx.r3.s64 = ctx.r10.s64 + 23072;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA0B7C;
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

__attribute__((alias("__imp__sub_83BA0B8C"))) PPC_WEAK_FUNC(sub_83BA0B8C);
PPC_FUNC_IMPL(__imp__sub_83BA0B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0B90"))) PPC_WEAK_FUNC(sub_83BA0B90);
PPC_FUNC_IMPL(__imp__sub_83BA0B90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,776
	ctx.r7.s64 = ctx.r8.s64 + 776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA0BB8"))) PPC_WEAK_FUNC(sub_83BA0BB8);
PPC_FUNC_IMPL(__imp__sub_83BA0BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23088
	ctx.r3.s64 = ctx.r11.s64 + 23088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0BC4"))) PPC_WEAK_FUNC(sub_83BA0BC4);
PPC_FUNC_IMPL(__imp__sub_83BA0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0BC8"))) PPC_WEAK_FUNC(sub_83BA0BC8);
PPC_FUNC_IMPL(__imp__sub_83BA0BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23096
	ctx.r3.s64 = ctx.r11.s64 + 23096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0BD4"))) PPC_WEAK_FUNC(sub_83BA0BD4);
PPC_FUNC_IMPL(__imp__sub_83BA0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0BD8"))) PPC_WEAK_FUNC(sub_83BA0BD8);
PPC_FUNC_IMPL(__imp__sub_83BA0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0BE4"))) PPC_WEAK_FUNC(sub_83BA0BE4);
PPC_FUNC_IMPL(__imp__sub_83BA0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0BE8"))) PPC_WEAK_FUNC(sub_83BA0BE8);
PPC_FUNC_IMPL(__imp__sub_83BA0BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0BF4"))) PPC_WEAK_FUNC(sub_83BA0BF4);
PPC_FUNC_IMPL(__imp__sub_83BA0BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0BF8"))) PPC_WEAK_FUNC(sub_83BA0BF8);
PPC_FUNC_IMPL(__imp__sub_83BA0BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23120
	ctx.r3.s64 = ctx.r11.s64 + 23120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C04"))) PPC_WEAK_FUNC(sub_83BA0C04);
PPC_FUNC_IMPL(__imp__sub_83BA0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C08"))) PPC_WEAK_FUNC(sub_83BA0C08);
PPC_FUNC_IMPL(__imp__sub_83BA0C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23128
	ctx.r3.s64 = ctx.r11.s64 + 23128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C14"))) PPC_WEAK_FUNC(sub_83BA0C14);
PPC_FUNC_IMPL(__imp__sub_83BA0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C18"))) PPC_WEAK_FUNC(sub_83BA0C18);
PPC_FUNC_IMPL(__imp__sub_83BA0C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23136
	ctx.r3.s64 = ctx.r11.s64 + 23136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C24"))) PPC_WEAK_FUNC(sub_83BA0C24);
PPC_FUNC_IMPL(__imp__sub_83BA0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C28"))) PPC_WEAK_FUNC(sub_83BA0C28);
PPC_FUNC_IMPL(__imp__sub_83BA0C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C34"))) PPC_WEAK_FUNC(sub_83BA0C34);
PPC_FUNC_IMPL(__imp__sub_83BA0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C38"))) PPC_WEAK_FUNC(sub_83BA0C38);
PPC_FUNC_IMPL(__imp__sub_83BA0C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23152
	ctx.r3.s64 = ctx.r11.s64 + 23152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C44"))) PPC_WEAK_FUNC(sub_83BA0C44);
PPC_FUNC_IMPL(__imp__sub_83BA0C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C48"))) PPC_WEAK_FUNC(sub_83BA0C48);
PPC_FUNC_IMPL(__imp__sub_83BA0C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23160
	ctx.r3.s64 = ctx.r11.s64 + 23160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C54"))) PPC_WEAK_FUNC(sub_83BA0C54);
PPC_FUNC_IMPL(__imp__sub_83BA0C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C58"))) PPC_WEAK_FUNC(sub_83BA0C58);
PPC_FUNC_IMPL(__imp__sub_83BA0C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23168
	ctx.r3.s64 = ctx.r11.s64 + 23168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C64"))) PPC_WEAK_FUNC(sub_83BA0C64);
PPC_FUNC_IMPL(__imp__sub_83BA0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C68"))) PPC_WEAK_FUNC(sub_83BA0C68);
PPC_FUNC_IMPL(__imp__sub_83BA0C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23176
	ctx.r3.s64 = ctx.r11.s64 + 23176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C74"))) PPC_WEAK_FUNC(sub_83BA0C74);
PPC_FUNC_IMPL(__imp__sub_83BA0C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C78"))) PPC_WEAK_FUNC(sub_83BA0C78);
PPC_FUNC_IMPL(__imp__sub_83BA0C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23184
	ctx.r3.s64 = ctx.r11.s64 + 23184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C84"))) PPC_WEAK_FUNC(sub_83BA0C84);
PPC_FUNC_IMPL(__imp__sub_83BA0C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C88"))) PPC_WEAK_FUNC(sub_83BA0C88);
PPC_FUNC_IMPL(__imp__sub_83BA0C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23192
	ctx.r3.s64 = ctx.r11.s64 + 23192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0C94"))) PPC_WEAK_FUNC(sub_83BA0C94);
PPC_FUNC_IMPL(__imp__sub_83BA0C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0C98"))) PPC_WEAK_FUNC(sub_83BA0C98);
PPC_FUNC_IMPL(__imp__sub_83BA0C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23200
	ctx.r3.s64 = ctx.r11.s64 + 23200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0CA4"))) PPC_WEAK_FUNC(sub_83BA0CA4);
PPC_FUNC_IMPL(__imp__sub_83BA0CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0CA8"))) PPC_WEAK_FUNC(sub_83BA0CA8);
PPC_FUNC_IMPL(__imp__sub_83BA0CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0CB4"))) PPC_WEAK_FUNC(sub_83BA0CB4);
PPC_FUNC_IMPL(__imp__sub_83BA0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0CB8"))) PPC_WEAK_FUNC(sub_83BA0CB8);
PPC_FUNC_IMPL(__imp__sub_83BA0CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23216
	ctx.r3.s64 = ctx.r11.s64 + 23216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0CC4"))) PPC_WEAK_FUNC(sub_83BA0CC4);
PPC_FUNC_IMPL(__imp__sub_83BA0CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0CC8"))) PPC_WEAK_FUNC(sub_83BA0CC8);
PPC_FUNC_IMPL(__imp__sub_83BA0CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23224
	ctx.r3.s64 = ctx.r11.s64 + 23224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0CD4"))) PPC_WEAK_FUNC(sub_83BA0CD4);
PPC_FUNC_IMPL(__imp__sub_83BA0CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0CD8"))) PPC_WEAK_FUNC(sub_83BA0CD8);
PPC_FUNC_IMPL(__imp__sub_83BA0CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0CE4"))) PPC_WEAK_FUNC(sub_83BA0CE4);
PPC_FUNC_IMPL(__imp__sub_83BA0CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0CE8"))) PPC_WEAK_FUNC(sub_83BA0CE8);
PPC_FUNC_IMPL(__imp__sub_83BA0CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23240
	ctx.r3.s64 = ctx.r11.s64 + 23240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0CF4"))) PPC_WEAK_FUNC(sub_83BA0CF4);
PPC_FUNC_IMPL(__imp__sub_83BA0CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0CF8"))) PPC_WEAK_FUNC(sub_83BA0CF8);
PPC_FUNC_IMPL(__imp__sub_83BA0CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23248
	ctx.r3.s64 = ctx.r11.s64 + 23248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0D04"))) PPC_WEAK_FUNC(sub_83BA0D04);
PPC_FUNC_IMPL(__imp__sub_83BA0D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0D08"))) PPC_WEAK_FUNC(sub_83BA0D08);
PPC_FUNC_IMPL(__imp__sub_83BA0D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23256
	ctx.r3.s64 = ctx.r11.s64 + 23256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0D14"))) PPC_WEAK_FUNC(sub_83BA0D14);
PPC_FUNC_IMPL(__imp__sub_83BA0D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0D18"))) PPC_WEAK_FUNC(sub_83BA0D18);
PPC_FUNC_IMPL(__imp__sub_83BA0D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23264
	ctx.r3.s64 = ctx.r11.s64 + 23264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0D24"))) PPC_WEAK_FUNC(sub_83BA0D24);
PPC_FUNC_IMPL(__imp__sub_83BA0D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0D28"))) PPC_WEAK_FUNC(sub_83BA0D28);
PPC_FUNC_IMPL(__imp__sub_83BA0D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23272
	ctx.r3.s64 = ctx.r11.s64 + 23272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0D34"))) PPC_WEAK_FUNC(sub_83BA0D34);
PPC_FUNC_IMPL(__imp__sub_83BA0D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0D38"))) PPC_WEAK_FUNC(sub_83BA0D38);
PPC_FUNC_IMPL(__imp__sub_83BA0D38) {
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
	// addi r3,r11,796
	ctx.r3.s64 = ctx.r11.s64 + 796;
	// bl 0x83523120
	ctx.lr = 0x83BA0D50;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,23280
	ctx.r3.s64 = ctx.r10.s64 + 23280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA0D5C;
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

__attribute__((alias("__imp__sub_83BA0D6C"))) PPC_WEAK_FUNC(sub_83BA0D6C);
PPC_FUNC_IMPL(__imp__sub_83BA0D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0D70"))) PPC_WEAK_FUNC(sub_83BA0D70);
PPC_FUNC_IMPL(__imp__sub_83BA0D70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,800
	ctx.r7.s64 = ctx.r8.s64 + 800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 800);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,800(r8)
	PPC_STORE_U32(ctx.r8.u32 + 800, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA0D98"))) PPC_WEAK_FUNC(sub_83BA0D98);
PPC_FUNC_IMPL(__imp__sub_83BA0D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23296
	ctx.r3.s64 = ctx.r11.s64 + 23296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0DA4"))) PPC_WEAK_FUNC(sub_83BA0DA4);
PPC_FUNC_IMPL(__imp__sub_83BA0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0DA8"))) PPC_WEAK_FUNC(sub_83BA0DA8);
PPC_FUNC_IMPL(__imp__sub_83BA0DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23304
	ctx.r3.s64 = ctx.r11.s64 + 23304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0DB4"))) PPC_WEAK_FUNC(sub_83BA0DB4);
PPC_FUNC_IMPL(__imp__sub_83BA0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0DB8"))) PPC_WEAK_FUNC(sub_83BA0DB8);
PPC_FUNC_IMPL(__imp__sub_83BA0DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23312
	ctx.r3.s64 = ctx.r11.s64 + 23312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0DC4"))) PPC_WEAK_FUNC(sub_83BA0DC4);
PPC_FUNC_IMPL(__imp__sub_83BA0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0DC8"))) PPC_WEAK_FUNC(sub_83BA0DC8);
PPC_FUNC_IMPL(__imp__sub_83BA0DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23320
	ctx.r3.s64 = ctx.r11.s64 + 23320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0DD4"))) PPC_WEAK_FUNC(sub_83BA0DD4);
PPC_FUNC_IMPL(__imp__sub_83BA0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0DD8"))) PPC_WEAK_FUNC(sub_83BA0DD8);
PPC_FUNC_IMPL(__imp__sub_83BA0DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23328
	ctx.r3.s64 = ctx.r11.s64 + 23328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0DE4"))) PPC_WEAK_FUNC(sub_83BA0DE4);
PPC_FUNC_IMPL(__imp__sub_83BA0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0DE8"))) PPC_WEAK_FUNC(sub_83BA0DE8);
PPC_FUNC_IMPL(__imp__sub_83BA0DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23336
	ctx.r3.s64 = ctx.r11.s64 + 23336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0DF4"))) PPC_WEAK_FUNC(sub_83BA0DF4);
PPC_FUNC_IMPL(__imp__sub_83BA0DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0DF8"))) PPC_WEAK_FUNC(sub_83BA0DF8);
PPC_FUNC_IMPL(__imp__sub_83BA0DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23344
	ctx.r3.s64 = ctx.r11.s64 + 23344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E04"))) PPC_WEAK_FUNC(sub_83BA0E04);
PPC_FUNC_IMPL(__imp__sub_83BA0E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E08"))) PPC_WEAK_FUNC(sub_83BA0E08);
PPC_FUNC_IMPL(__imp__sub_83BA0E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23352
	ctx.r3.s64 = ctx.r11.s64 + 23352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E14"))) PPC_WEAK_FUNC(sub_83BA0E14);
PPC_FUNC_IMPL(__imp__sub_83BA0E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E18"))) PPC_WEAK_FUNC(sub_83BA0E18);
PPC_FUNC_IMPL(__imp__sub_83BA0E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23360
	ctx.r3.s64 = ctx.r11.s64 + 23360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E24"))) PPC_WEAK_FUNC(sub_83BA0E24);
PPC_FUNC_IMPL(__imp__sub_83BA0E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E28"))) PPC_WEAK_FUNC(sub_83BA0E28);
PPC_FUNC_IMPL(__imp__sub_83BA0E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23368
	ctx.r3.s64 = ctx.r11.s64 + 23368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E34"))) PPC_WEAK_FUNC(sub_83BA0E34);
PPC_FUNC_IMPL(__imp__sub_83BA0E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E38"))) PPC_WEAK_FUNC(sub_83BA0E38);
PPC_FUNC_IMPL(__imp__sub_83BA0E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23376
	ctx.r3.s64 = ctx.r11.s64 + 23376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E44"))) PPC_WEAK_FUNC(sub_83BA0E44);
PPC_FUNC_IMPL(__imp__sub_83BA0E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E48"))) PPC_WEAK_FUNC(sub_83BA0E48);
PPC_FUNC_IMPL(__imp__sub_83BA0E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23384
	ctx.r3.s64 = ctx.r11.s64 + 23384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E54"))) PPC_WEAK_FUNC(sub_83BA0E54);
PPC_FUNC_IMPL(__imp__sub_83BA0E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E58"))) PPC_WEAK_FUNC(sub_83BA0E58);
PPC_FUNC_IMPL(__imp__sub_83BA0E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23392
	ctx.r3.s64 = ctx.r11.s64 + 23392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E64"))) PPC_WEAK_FUNC(sub_83BA0E64);
PPC_FUNC_IMPL(__imp__sub_83BA0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E68"))) PPC_WEAK_FUNC(sub_83BA0E68);
PPC_FUNC_IMPL(__imp__sub_83BA0E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23400
	ctx.r3.s64 = ctx.r11.s64 + 23400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E74"))) PPC_WEAK_FUNC(sub_83BA0E74);
PPC_FUNC_IMPL(__imp__sub_83BA0E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E78"))) PPC_WEAK_FUNC(sub_83BA0E78);
PPC_FUNC_IMPL(__imp__sub_83BA0E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23408
	ctx.r3.s64 = ctx.r11.s64 + 23408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E84"))) PPC_WEAK_FUNC(sub_83BA0E84);
PPC_FUNC_IMPL(__imp__sub_83BA0E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E88"))) PPC_WEAK_FUNC(sub_83BA0E88);
PPC_FUNC_IMPL(__imp__sub_83BA0E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23416
	ctx.r3.s64 = ctx.r11.s64 + 23416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0E94"))) PPC_WEAK_FUNC(sub_83BA0E94);
PPC_FUNC_IMPL(__imp__sub_83BA0E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0E98"))) PPC_WEAK_FUNC(sub_83BA0E98);
PPC_FUNC_IMPL(__imp__sub_83BA0E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23424
	ctx.r3.s64 = ctx.r11.s64 + 23424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0EA4"))) PPC_WEAK_FUNC(sub_83BA0EA4);
PPC_FUNC_IMPL(__imp__sub_83BA0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0EA8"))) PPC_WEAK_FUNC(sub_83BA0EA8);
PPC_FUNC_IMPL(__imp__sub_83BA0EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23432
	ctx.r3.s64 = ctx.r11.s64 + 23432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0EB4"))) PPC_WEAK_FUNC(sub_83BA0EB4);
PPC_FUNC_IMPL(__imp__sub_83BA0EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0EB8"))) PPC_WEAK_FUNC(sub_83BA0EB8);
PPC_FUNC_IMPL(__imp__sub_83BA0EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0EC4"))) PPC_WEAK_FUNC(sub_83BA0EC4);
PPC_FUNC_IMPL(__imp__sub_83BA0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0EC8"))) PPC_WEAK_FUNC(sub_83BA0EC8);
PPC_FUNC_IMPL(__imp__sub_83BA0EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0ED4"))) PPC_WEAK_FUNC(sub_83BA0ED4);
PPC_FUNC_IMPL(__imp__sub_83BA0ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0ED8"))) PPC_WEAK_FUNC(sub_83BA0ED8);
PPC_FUNC_IMPL(__imp__sub_83BA0ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23456
	ctx.r3.s64 = ctx.r11.s64 + 23456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0EE4"))) PPC_WEAK_FUNC(sub_83BA0EE4);
PPC_FUNC_IMPL(__imp__sub_83BA0EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0EE8"))) PPC_WEAK_FUNC(sub_83BA0EE8);
PPC_FUNC_IMPL(__imp__sub_83BA0EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23464
	ctx.r3.s64 = ctx.r11.s64 + 23464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0EF4"))) PPC_WEAK_FUNC(sub_83BA0EF4);
PPC_FUNC_IMPL(__imp__sub_83BA0EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0EF8"))) PPC_WEAK_FUNC(sub_83BA0EF8);
PPC_FUNC_IMPL(__imp__sub_83BA0EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23472
	ctx.r3.s64 = ctx.r11.s64 + 23472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F04"))) PPC_WEAK_FUNC(sub_83BA0F04);
PPC_FUNC_IMPL(__imp__sub_83BA0F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F08"))) PPC_WEAK_FUNC(sub_83BA0F08);
PPC_FUNC_IMPL(__imp__sub_83BA0F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23480
	ctx.r3.s64 = ctx.r11.s64 + 23480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F14"))) PPC_WEAK_FUNC(sub_83BA0F14);
PPC_FUNC_IMPL(__imp__sub_83BA0F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F18"))) PPC_WEAK_FUNC(sub_83BA0F18);
PPC_FUNC_IMPL(__imp__sub_83BA0F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23488
	ctx.r3.s64 = ctx.r11.s64 + 23488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F24"))) PPC_WEAK_FUNC(sub_83BA0F24);
PPC_FUNC_IMPL(__imp__sub_83BA0F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F28"))) PPC_WEAK_FUNC(sub_83BA0F28);
PPC_FUNC_IMPL(__imp__sub_83BA0F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23496
	ctx.r3.s64 = ctx.r11.s64 + 23496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F34"))) PPC_WEAK_FUNC(sub_83BA0F34);
PPC_FUNC_IMPL(__imp__sub_83BA0F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F38"))) PPC_WEAK_FUNC(sub_83BA0F38);
PPC_FUNC_IMPL(__imp__sub_83BA0F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F44"))) PPC_WEAK_FUNC(sub_83BA0F44);
PPC_FUNC_IMPL(__imp__sub_83BA0F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F48"))) PPC_WEAK_FUNC(sub_83BA0F48);
PPC_FUNC_IMPL(__imp__sub_83BA0F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23512
	ctx.r3.s64 = ctx.r11.s64 + 23512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F54"))) PPC_WEAK_FUNC(sub_83BA0F54);
PPC_FUNC_IMPL(__imp__sub_83BA0F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F58"))) PPC_WEAK_FUNC(sub_83BA0F58);
PPC_FUNC_IMPL(__imp__sub_83BA0F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23520
	ctx.r3.s64 = ctx.r11.s64 + 23520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F64"))) PPC_WEAK_FUNC(sub_83BA0F64);
PPC_FUNC_IMPL(__imp__sub_83BA0F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F68"))) PPC_WEAK_FUNC(sub_83BA0F68);
PPC_FUNC_IMPL(__imp__sub_83BA0F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23528
	ctx.r3.s64 = ctx.r11.s64 + 23528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F74"))) PPC_WEAK_FUNC(sub_83BA0F74);
PPC_FUNC_IMPL(__imp__sub_83BA0F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F78"))) PPC_WEAK_FUNC(sub_83BA0F78);
PPC_FUNC_IMPL(__imp__sub_83BA0F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23536
	ctx.r3.s64 = ctx.r11.s64 + 23536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F84"))) PPC_WEAK_FUNC(sub_83BA0F84);
PPC_FUNC_IMPL(__imp__sub_83BA0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F88"))) PPC_WEAK_FUNC(sub_83BA0F88);
PPC_FUNC_IMPL(__imp__sub_83BA0F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23544
	ctx.r3.s64 = ctx.r11.s64 + 23544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0F94"))) PPC_WEAK_FUNC(sub_83BA0F94);
PPC_FUNC_IMPL(__imp__sub_83BA0F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0F98"))) PPC_WEAK_FUNC(sub_83BA0F98);
PPC_FUNC_IMPL(__imp__sub_83BA0F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0FA4"))) PPC_WEAK_FUNC(sub_83BA0FA4);
PPC_FUNC_IMPL(__imp__sub_83BA0FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0FA8"))) PPC_WEAK_FUNC(sub_83BA0FA8);
PPC_FUNC_IMPL(__imp__sub_83BA0FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23560
	ctx.r3.s64 = ctx.r11.s64 + 23560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0FB4"))) PPC_WEAK_FUNC(sub_83BA0FB4);
PPC_FUNC_IMPL(__imp__sub_83BA0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0FB8"))) PPC_WEAK_FUNC(sub_83BA0FB8);
PPC_FUNC_IMPL(__imp__sub_83BA0FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23568
	ctx.r3.s64 = ctx.r11.s64 + 23568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0FC4"))) PPC_WEAK_FUNC(sub_83BA0FC4);
PPC_FUNC_IMPL(__imp__sub_83BA0FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0FC8"))) PPC_WEAK_FUNC(sub_83BA0FC8);
PPC_FUNC_IMPL(__imp__sub_83BA0FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23576
	ctx.r3.s64 = ctx.r11.s64 + 23576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0FD4"))) PPC_WEAK_FUNC(sub_83BA0FD4);
PPC_FUNC_IMPL(__imp__sub_83BA0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0FD8"))) PPC_WEAK_FUNC(sub_83BA0FD8);
PPC_FUNC_IMPL(__imp__sub_83BA0FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23584
	ctx.r3.s64 = ctx.r11.s64 + 23584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0FE4"))) PPC_WEAK_FUNC(sub_83BA0FE4);
PPC_FUNC_IMPL(__imp__sub_83BA0FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0FE8"))) PPC_WEAK_FUNC(sub_83BA0FE8);
PPC_FUNC_IMPL(__imp__sub_83BA0FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23592
	ctx.r3.s64 = ctx.r11.s64 + 23592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA0FF4"))) PPC_WEAK_FUNC(sub_83BA0FF4);
PPC_FUNC_IMPL(__imp__sub_83BA0FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA0FF8"))) PPC_WEAK_FUNC(sub_83BA0FF8);
PPC_FUNC_IMPL(__imp__sub_83BA0FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23600
	ctx.r3.s64 = ctx.r11.s64 + 23600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1004"))) PPC_WEAK_FUNC(sub_83BA1004);
PPC_FUNC_IMPL(__imp__sub_83BA1004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1008"))) PPC_WEAK_FUNC(sub_83BA1008);
PPC_FUNC_IMPL(__imp__sub_83BA1008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23608
	ctx.r3.s64 = ctx.r11.s64 + 23608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1014"))) PPC_WEAK_FUNC(sub_83BA1014);
PPC_FUNC_IMPL(__imp__sub_83BA1014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1018"))) PPC_WEAK_FUNC(sub_83BA1018);
PPC_FUNC_IMPL(__imp__sub_83BA1018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23616
	ctx.r3.s64 = ctx.r11.s64 + 23616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1024"))) PPC_WEAK_FUNC(sub_83BA1024);
PPC_FUNC_IMPL(__imp__sub_83BA1024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1028"))) PPC_WEAK_FUNC(sub_83BA1028);
PPC_FUNC_IMPL(__imp__sub_83BA1028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23624
	ctx.r3.s64 = ctx.r11.s64 + 23624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1034"))) PPC_WEAK_FUNC(sub_83BA1034);
PPC_FUNC_IMPL(__imp__sub_83BA1034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1038"))) PPC_WEAK_FUNC(sub_83BA1038);
PPC_FUNC_IMPL(__imp__sub_83BA1038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23632
	ctx.r3.s64 = ctx.r11.s64 + 23632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1044"))) PPC_WEAK_FUNC(sub_83BA1044);
PPC_FUNC_IMPL(__imp__sub_83BA1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1048"))) PPC_WEAK_FUNC(sub_83BA1048);
PPC_FUNC_IMPL(__imp__sub_83BA1048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23640
	ctx.r3.s64 = ctx.r11.s64 + 23640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1054"))) PPC_WEAK_FUNC(sub_83BA1054);
PPC_FUNC_IMPL(__imp__sub_83BA1054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1058"))) PPC_WEAK_FUNC(sub_83BA1058);
PPC_FUNC_IMPL(__imp__sub_83BA1058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23648
	ctx.r3.s64 = ctx.r11.s64 + 23648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1064"))) PPC_WEAK_FUNC(sub_83BA1064);
PPC_FUNC_IMPL(__imp__sub_83BA1064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1068"))) PPC_WEAK_FUNC(sub_83BA1068);
PPC_FUNC_IMPL(__imp__sub_83BA1068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23656
	ctx.r3.s64 = ctx.r11.s64 + 23656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1074"))) PPC_WEAK_FUNC(sub_83BA1074);
PPC_FUNC_IMPL(__imp__sub_83BA1074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1078"))) PPC_WEAK_FUNC(sub_83BA1078);
PPC_FUNC_IMPL(__imp__sub_83BA1078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1084"))) PPC_WEAK_FUNC(sub_83BA1084);
PPC_FUNC_IMPL(__imp__sub_83BA1084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1088"))) PPC_WEAK_FUNC(sub_83BA1088);
PPC_FUNC_IMPL(__imp__sub_83BA1088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23672
	ctx.r3.s64 = ctx.r11.s64 + 23672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1094"))) PPC_WEAK_FUNC(sub_83BA1094);
PPC_FUNC_IMPL(__imp__sub_83BA1094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1098"))) PPC_WEAK_FUNC(sub_83BA1098);
PPC_FUNC_IMPL(__imp__sub_83BA1098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23680
	ctx.r3.s64 = ctx.r11.s64 + 23680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA10A4"))) PPC_WEAK_FUNC(sub_83BA10A4);
PPC_FUNC_IMPL(__imp__sub_83BA10A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA10A8"))) PPC_WEAK_FUNC(sub_83BA10A8);
PPC_FUNC_IMPL(__imp__sub_83BA10A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23688
	ctx.r3.s64 = ctx.r11.s64 + 23688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA10B4"))) PPC_WEAK_FUNC(sub_83BA10B4);
PPC_FUNC_IMPL(__imp__sub_83BA10B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA10B8"))) PPC_WEAK_FUNC(sub_83BA10B8);
PPC_FUNC_IMPL(__imp__sub_83BA10B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23696
	ctx.r3.s64 = ctx.r11.s64 + 23696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA10C4"))) PPC_WEAK_FUNC(sub_83BA10C4);
PPC_FUNC_IMPL(__imp__sub_83BA10C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA10C8"))) PPC_WEAK_FUNC(sub_83BA10C8);
PPC_FUNC_IMPL(__imp__sub_83BA10C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23704
	ctx.r3.s64 = ctx.r11.s64 + 23704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA10D4"))) PPC_WEAK_FUNC(sub_83BA10D4);
PPC_FUNC_IMPL(__imp__sub_83BA10D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA10D8"))) PPC_WEAK_FUNC(sub_83BA10D8);
PPC_FUNC_IMPL(__imp__sub_83BA10D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA10E4"))) PPC_WEAK_FUNC(sub_83BA10E4);
PPC_FUNC_IMPL(__imp__sub_83BA10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA10E8"))) PPC_WEAK_FUNC(sub_83BA10E8);
PPC_FUNC_IMPL(__imp__sub_83BA10E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23720
	ctx.r3.s64 = ctx.r11.s64 + 23720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA10F4"))) PPC_WEAK_FUNC(sub_83BA10F4);
PPC_FUNC_IMPL(__imp__sub_83BA10F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA10F8"))) PPC_WEAK_FUNC(sub_83BA10F8);
PPC_FUNC_IMPL(__imp__sub_83BA10F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23728
	ctx.r3.s64 = ctx.r11.s64 + 23728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1104"))) PPC_WEAK_FUNC(sub_83BA1104);
PPC_FUNC_IMPL(__imp__sub_83BA1104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1108"))) PPC_WEAK_FUNC(sub_83BA1108);
PPC_FUNC_IMPL(__imp__sub_83BA1108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23736
	ctx.r3.s64 = ctx.r11.s64 + 23736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1114"))) PPC_WEAK_FUNC(sub_83BA1114);
PPC_FUNC_IMPL(__imp__sub_83BA1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1118"))) PPC_WEAK_FUNC(sub_83BA1118);
PPC_FUNC_IMPL(__imp__sub_83BA1118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1124"))) PPC_WEAK_FUNC(sub_83BA1124);
PPC_FUNC_IMPL(__imp__sub_83BA1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1128"))) PPC_WEAK_FUNC(sub_83BA1128);
PPC_FUNC_IMPL(__imp__sub_83BA1128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23752
	ctx.r3.s64 = ctx.r11.s64 + 23752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1134"))) PPC_WEAK_FUNC(sub_83BA1134);
PPC_FUNC_IMPL(__imp__sub_83BA1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1138"))) PPC_WEAK_FUNC(sub_83BA1138);
PPC_FUNC_IMPL(__imp__sub_83BA1138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23760
	ctx.r3.s64 = ctx.r11.s64 + 23760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1144"))) PPC_WEAK_FUNC(sub_83BA1144);
PPC_FUNC_IMPL(__imp__sub_83BA1144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1148"))) PPC_WEAK_FUNC(sub_83BA1148);
PPC_FUNC_IMPL(__imp__sub_83BA1148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1154"))) PPC_WEAK_FUNC(sub_83BA1154);
PPC_FUNC_IMPL(__imp__sub_83BA1154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1158"))) PPC_WEAK_FUNC(sub_83BA1158);
PPC_FUNC_IMPL(__imp__sub_83BA1158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23776
	ctx.r3.s64 = ctx.r11.s64 + 23776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1164"))) PPC_WEAK_FUNC(sub_83BA1164);
PPC_FUNC_IMPL(__imp__sub_83BA1164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1168"))) PPC_WEAK_FUNC(sub_83BA1168);
PPC_FUNC_IMPL(__imp__sub_83BA1168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1174"))) PPC_WEAK_FUNC(sub_83BA1174);
PPC_FUNC_IMPL(__imp__sub_83BA1174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1178"))) PPC_WEAK_FUNC(sub_83BA1178);
PPC_FUNC_IMPL(__imp__sub_83BA1178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23792
	ctx.r3.s64 = ctx.r11.s64 + 23792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1184"))) PPC_WEAK_FUNC(sub_83BA1184);
PPC_FUNC_IMPL(__imp__sub_83BA1184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1188"))) PPC_WEAK_FUNC(sub_83BA1188);
PPC_FUNC_IMPL(__imp__sub_83BA1188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23800
	ctx.r3.s64 = ctx.r11.s64 + 23800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1194"))) PPC_WEAK_FUNC(sub_83BA1194);
PPC_FUNC_IMPL(__imp__sub_83BA1194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1198"))) PPC_WEAK_FUNC(sub_83BA1198);
PPC_FUNC_IMPL(__imp__sub_83BA1198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23808
	ctx.r3.s64 = ctx.r11.s64 + 23808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA11A4"))) PPC_WEAK_FUNC(sub_83BA11A4);
PPC_FUNC_IMPL(__imp__sub_83BA11A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA11A8"))) PPC_WEAK_FUNC(sub_83BA11A8);
PPC_FUNC_IMPL(__imp__sub_83BA11A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23816
	ctx.r3.s64 = ctx.r11.s64 + 23816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA11B4"))) PPC_WEAK_FUNC(sub_83BA11B4);
PPC_FUNC_IMPL(__imp__sub_83BA11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA11B8"))) PPC_WEAK_FUNC(sub_83BA11B8);
PPC_FUNC_IMPL(__imp__sub_83BA11B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA11C4"))) PPC_WEAK_FUNC(sub_83BA11C4);
PPC_FUNC_IMPL(__imp__sub_83BA11C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA11C8"))) PPC_WEAK_FUNC(sub_83BA11C8);
PPC_FUNC_IMPL(__imp__sub_83BA11C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23832
	ctx.r3.s64 = ctx.r11.s64 + 23832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA11D4"))) PPC_WEAK_FUNC(sub_83BA11D4);
PPC_FUNC_IMPL(__imp__sub_83BA11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA11D8"))) PPC_WEAK_FUNC(sub_83BA11D8);
PPC_FUNC_IMPL(__imp__sub_83BA11D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23840
	ctx.r3.s64 = ctx.r11.s64 + 23840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA11E4"))) PPC_WEAK_FUNC(sub_83BA11E4);
PPC_FUNC_IMPL(__imp__sub_83BA11E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA11E8"))) PPC_WEAK_FUNC(sub_83BA11E8);
PPC_FUNC_IMPL(__imp__sub_83BA11E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23848
	ctx.r3.s64 = ctx.r11.s64 + 23848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA11F4"))) PPC_WEAK_FUNC(sub_83BA11F4);
PPC_FUNC_IMPL(__imp__sub_83BA11F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA11F8"))) PPC_WEAK_FUNC(sub_83BA11F8);
PPC_FUNC_IMPL(__imp__sub_83BA11F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1204"))) PPC_WEAK_FUNC(sub_83BA1204);
PPC_FUNC_IMPL(__imp__sub_83BA1204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1208"))) PPC_WEAK_FUNC(sub_83BA1208);
PPC_FUNC_IMPL(__imp__sub_83BA1208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23864
	ctx.r3.s64 = ctx.r11.s64 + 23864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1214"))) PPC_WEAK_FUNC(sub_83BA1214);
PPC_FUNC_IMPL(__imp__sub_83BA1214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1218"))) PPC_WEAK_FUNC(sub_83BA1218);
PPC_FUNC_IMPL(__imp__sub_83BA1218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23872
	ctx.r3.s64 = ctx.r11.s64 + 23872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1224"))) PPC_WEAK_FUNC(sub_83BA1224);
PPC_FUNC_IMPL(__imp__sub_83BA1224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1228"))) PPC_WEAK_FUNC(sub_83BA1228);
PPC_FUNC_IMPL(__imp__sub_83BA1228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23880
	ctx.r3.s64 = ctx.r11.s64 + 23880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1234"))) PPC_WEAK_FUNC(sub_83BA1234);
PPC_FUNC_IMPL(__imp__sub_83BA1234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1238"))) PPC_WEAK_FUNC(sub_83BA1238);
PPC_FUNC_IMPL(__imp__sub_83BA1238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23888
	ctx.r3.s64 = ctx.r11.s64 + 23888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1244"))) PPC_WEAK_FUNC(sub_83BA1244);
PPC_FUNC_IMPL(__imp__sub_83BA1244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1248"))) PPC_WEAK_FUNC(sub_83BA1248);
PPC_FUNC_IMPL(__imp__sub_83BA1248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23896
	ctx.r3.s64 = ctx.r11.s64 + 23896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1254"))) PPC_WEAK_FUNC(sub_83BA1254);
PPC_FUNC_IMPL(__imp__sub_83BA1254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1258"))) PPC_WEAK_FUNC(sub_83BA1258);
PPC_FUNC_IMPL(__imp__sub_83BA1258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1264"))) PPC_WEAK_FUNC(sub_83BA1264);
PPC_FUNC_IMPL(__imp__sub_83BA1264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1268"))) PPC_WEAK_FUNC(sub_83BA1268);
PPC_FUNC_IMPL(__imp__sub_83BA1268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1274"))) PPC_WEAK_FUNC(sub_83BA1274);
PPC_FUNC_IMPL(__imp__sub_83BA1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1278"))) PPC_WEAK_FUNC(sub_83BA1278);
PPC_FUNC_IMPL(__imp__sub_83BA1278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23920
	ctx.r3.s64 = ctx.r11.s64 + 23920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1284"))) PPC_WEAK_FUNC(sub_83BA1284);
PPC_FUNC_IMPL(__imp__sub_83BA1284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1288"))) PPC_WEAK_FUNC(sub_83BA1288);
PPC_FUNC_IMPL(__imp__sub_83BA1288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23928
	ctx.r3.s64 = ctx.r11.s64 + 23928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1294"))) PPC_WEAK_FUNC(sub_83BA1294);
PPC_FUNC_IMPL(__imp__sub_83BA1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1298"))) PPC_WEAK_FUNC(sub_83BA1298);
PPC_FUNC_IMPL(__imp__sub_83BA1298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23936
	ctx.r3.s64 = ctx.r11.s64 + 23936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA12A4"))) PPC_WEAK_FUNC(sub_83BA12A4);
PPC_FUNC_IMPL(__imp__sub_83BA12A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA12A8"))) PPC_WEAK_FUNC(sub_83BA12A8);
PPC_FUNC_IMPL(__imp__sub_83BA12A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23944
	ctx.r3.s64 = ctx.r11.s64 + 23944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA12B4"))) PPC_WEAK_FUNC(sub_83BA12B4);
PPC_FUNC_IMPL(__imp__sub_83BA12B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA12B8"))) PPC_WEAK_FUNC(sub_83BA12B8);
PPC_FUNC_IMPL(__imp__sub_83BA12B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23952
	ctx.r3.s64 = ctx.r11.s64 + 23952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA12C4"))) PPC_WEAK_FUNC(sub_83BA12C4);
PPC_FUNC_IMPL(__imp__sub_83BA12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA12C8"))) PPC_WEAK_FUNC(sub_83BA12C8);
PPC_FUNC_IMPL(__imp__sub_83BA12C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA12D4"))) PPC_WEAK_FUNC(sub_83BA12D4);
PPC_FUNC_IMPL(__imp__sub_83BA12D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA12D8"))) PPC_WEAK_FUNC(sub_83BA12D8);
PPC_FUNC_IMPL(__imp__sub_83BA12D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23968
	ctx.r3.s64 = ctx.r11.s64 + 23968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA12E4"))) PPC_WEAK_FUNC(sub_83BA12E4);
PPC_FUNC_IMPL(__imp__sub_83BA12E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA12E8"))) PPC_WEAK_FUNC(sub_83BA12E8);
PPC_FUNC_IMPL(__imp__sub_83BA12E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23976
	ctx.r3.s64 = ctx.r11.s64 + 23976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA12F4"))) PPC_WEAK_FUNC(sub_83BA12F4);
PPC_FUNC_IMPL(__imp__sub_83BA12F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA12F8"))) PPC_WEAK_FUNC(sub_83BA12F8);
PPC_FUNC_IMPL(__imp__sub_83BA12F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1304"))) PPC_WEAK_FUNC(sub_83BA1304);
PPC_FUNC_IMPL(__imp__sub_83BA1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1308"))) PPC_WEAK_FUNC(sub_83BA1308);
PPC_FUNC_IMPL(__imp__sub_83BA1308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,23992
	ctx.r3.s64 = ctx.r11.s64 + 23992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1314"))) PPC_WEAK_FUNC(sub_83BA1314);
PPC_FUNC_IMPL(__imp__sub_83BA1314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1318"))) PPC_WEAK_FUNC(sub_83BA1318);
PPC_FUNC_IMPL(__imp__sub_83BA1318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,24000
	ctx.r3.s64 = ctx.r11.s64 + 24000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1324"))) PPC_WEAK_FUNC(sub_83BA1324);
PPC_FUNC_IMPL(__imp__sub_83BA1324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1328"))) PPC_WEAK_FUNC(sub_83BA1328);
PPC_FUNC_IMPL(__imp__sub_83BA1328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,24008
	ctx.r3.s64 = ctx.r11.s64 + 24008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1334"))) PPC_WEAK_FUNC(sub_83BA1334);
PPC_FUNC_IMPL(__imp__sub_83BA1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1338"))) PPC_WEAK_FUNC(sub_83BA1338);
PPC_FUNC_IMPL(__imp__sub_83BA1338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,24016
	ctx.r3.s64 = ctx.r11.s64 + 24016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1344"))) PPC_WEAK_FUNC(sub_83BA1344);
PPC_FUNC_IMPL(__imp__sub_83BA1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1348"))) PPC_WEAK_FUNC(sub_83BA1348);
PPC_FUNC_IMPL(__imp__sub_83BA1348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,24024
	ctx.r3.s64 = ctx.r11.s64 + 24024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1354"))) PPC_WEAK_FUNC(sub_83BA1354);
PPC_FUNC_IMPL(__imp__sub_83BA1354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1358"))) PPC_WEAK_FUNC(sub_83BA1358);
PPC_FUNC_IMPL(__imp__sub_83BA1358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,24032
	ctx.r3.s64 = ctx.r11.s64 + 24032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1364"))) PPC_WEAK_FUNC(sub_83BA1364);
PPC_FUNC_IMPL(__imp__sub_83BA1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1368"))) PPC_WEAK_FUNC(sub_83BA1368);
PPC_FUNC_IMPL(__imp__sub_83BA1368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,24040
	ctx.r3.s64 = ctx.r11.s64 + 24040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1374"))) PPC_WEAK_FUNC(sub_83BA1374);
PPC_FUNC_IMPL(__imp__sub_83BA1374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1378"))) PPC_WEAK_FUNC(sub_83BA1378);
PPC_FUNC_IMPL(__imp__sub_83BA1378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,24048
	ctx.r3.s64 = ctx.r11.s64 + 24048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA1384"))) PPC_WEAK_FUNC(sub_83BA1384);
PPC_FUNC_IMPL(__imp__sub_83BA1384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA1388"))) PPC_WEAK_FUNC(sub_83BA1388);
PPC_FUNC_IMPL(__imp__sub_83BA1388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,24056
	ctx.r3.s64 = ctx.r11.s64 + 24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

