#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BC4A04"))) PPC_WEAK_FUNC(sub_83BC4A04);
PPC_FUNC_IMPL(__imp__sub_83BC4A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4A08"))) PPC_WEAK_FUNC(sub_83BC4A08);
PPC_FUNC_IMPL(__imp__sub_83BC4A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4A14"))) PPC_WEAK_FUNC(sub_83BC4A14);
PPC_FUNC_IMPL(__imp__sub_83BC4A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4A18"))) PPC_WEAK_FUNC(sub_83BC4A18);
PPC_FUNC_IMPL(__imp__sub_83BC4A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4A24"))) PPC_WEAK_FUNC(sub_83BC4A24);
PPC_FUNC_IMPL(__imp__sub_83BC4A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4A28"))) PPC_WEAK_FUNC(sub_83BC4A28);
PPC_FUNC_IMPL(__imp__sub_83BC4A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4A34"))) PPC_WEAK_FUNC(sub_83BC4A34);
PPC_FUNC_IMPL(__imp__sub_83BC4A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4A38"))) PPC_WEAK_FUNC(sub_83BC4A38);
PPC_FUNC_IMPL(__imp__sub_83BC4A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4A44"))) PPC_WEAK_FUNC(sub_83BC4A44);
PPC_FUNC_IMPL(__imp__sub_83BC4A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4A48"))) PPC_WEAK_FUNC(sub_83BC4A48);
PPC_FUNC_IMPL(__imp__sub_83BC4A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4A54"))) PPC_WEAK_FUNC(sub_83BC4A54);
PPC_FUNC_IMPL(__imp__sub_83BC4A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4A58"))) PPC_WEAK_FUNC(sub_83BC4A58);
PPC_FUNC_IMPL(__imp__sub_83BC4A58) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-20304
	ctx.r3.s64 = ctx.r11.s64 + -20304;
	// bl 0x83523120
	ctx.lr = 0x83BC4A70;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,152
	ctx.r3.s64 = ctx.r10.s64 + 152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4A7C;
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

__attribute__((alias("__imp__sub_83BC4A8C"))) PPC_WEAK_FUNC(sub_83BC4A8C);
PPC_FUNC_IMPL(__imp__sub_83BC4A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4A90"))) PPC_WEAK_FUNC(sub_83BC4A90);
PPC_FUNC_IMPL(__imp__sub_83BC4A90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20288
	ctx.r7.s64 = ctx.r8.s64 + -20288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20288(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4AB8"))) PPC_WEAK_FUNC(sub_83BC4AB8);
PPC_FUNC_IMPL(__imp__sub_83BC4AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,4760
	ctx.r6.s64 = ctx.r7.s64 + 4760;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4688(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4688);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20288);
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
	// std r9,4760(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4760, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4B00"))) PPC_WEAK_FUNC(sub_83BC4B00);
PPC_FUNC_IMPL(__imp__sub_83BC4B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4B0C"))) PPC_WEAK_FUNC(sub_83BC4B0C);
PPC_FUNC_IMPL(__imp__sub_83BC4B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4B10"))) PPC_WEAK_FUNC(sub_83BC4B10);
PPC_FUNC_IMPL(__imp__sub_83BC4B10) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-20280
	ctx.r3.s64 = ctx.r11.s64 + -20280;
	// bl 0x8259af80
	ctx.lr = 0x83BC4B28;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,184
	ctx.r3.s64 = ctx.r10.s64 + 184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4B34;
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

__attribute__((alias("__imp__sub_83BC4B44"))) PPC_WEAK_FUNC(sub_83BC4B44);
PPC_FUNC_IMPL(__imp__sub_83BC4B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4B48"))) PPC_WEAK_FUNC(sub_83BC4B48);
PPC_FUNC_IMPL(__imp__sub_83BC4B48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20300
	ctx.r11.s64 = ctx.r8.s64 + -20300;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,4736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4736);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,176
	ctx.r3.s64 = ctx.r6.s64 + 176;
	// stw r10,-20300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20300, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4B78"))) PPC_WEAK_FUNC(sub_83BC4B78);
PPC_FUNC_IMPL(__imp__sub_83BC4B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4B84"))) PPC_WEAK_FUNC(sub_83BC4B84);
PPC_FUNC_IMPL(__imp__sub_83BC4B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4B88"))) PPC_WEAK_FUNC(sub_83BC4B88);
PPC_FUNC_IMPL(__imp__sub_83BC4B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4B94"))) PPC_WEAK_FUNC(sub_83BC4B94);
PPC_FUNC_IMPL(__imp__sub_83BC4B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4B98"))) PPC_WEAK_FUNC(sub_83BC4B98);
PPC_FUNC_IMPL(__imp__sub_83BC4B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4BA4"))) PPC_WEAK_FUNC(sub_83BC4BA4);
PPC_FUNC_IMPL(__imp__sub_83BC4BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4BA8"))) PPC_WEAK_FUNC(sub_83BC4BA8);
PPC_FUNC_IMPL(__imp__sub_83BC4BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4BB4"))) PPC_WEAK_FUNC(sub_83BC4BB4);
PPC_FUNC_IMPL(__imp__sub_83BC4BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4BB8"))) PPC_WEAK_FUNC(sub_83BC4BB8);
PPC_FUNC_IMPL(__imp__sub_83BC4BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4BC4"))) PPC_WEAK_FUNC(sub_83BC4BC4);
PPC_FUNC_IMPL(__imp__sub_83BC4BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4BC8"))) PPC_WEAK_FUNC(sub_83BC4BC8);
PPC_FUNC_IMPL(__imp__sub_83BC4BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4BD4"))) PPC_WEAK_FUNC(sub_83BC4BD4);
PPC_FUNC_IMPL(__imp__sub_83BC4BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4BD8"))) PPC_WEAK_FUNC(sub_83BC4BD8);
PPC_FUNC_IMPL(__imp__sub_83BC4BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4BE4"))) PPC_WEAK_FUNC(sub_83BC4BE4);
PPC_FUNC_IMPL(__imp__sub_83BC4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4BE8"))) PPC_WEAK_FUNC(sub_83BC4BE8);
PPC_FUNC_IMPL(__imp__sub_83BC4BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,248
	ctx.r3.s64 = ctx.r11.s64 + 248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4BF4"))) PPC_WEAK_FUNC(sub_83BC4BF4);
PPC_FUNC_IMPL(__imp__sub_83BC4BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4BF8"))) PPC_WEAK_FUNC(sub_83BC4BF8);
PPC_FUNC_IMPL(__imp__sub_83BC4BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4C04"))) PPC_WEAK_FUNC(sub_83BC4C04);
PPC_FUNC_IMPL(__imp__sub_83BC4C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4C08"))) PPC_WEAK_FUNC(sub_83BC4C08);
PPC_FUNC_IMPL(__imp__sub_83BC4C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4C14"))) PPC_WEAK_FUNC(sub_83BC4C14);
PPC_FUNC_IMPL(__imp__sub_83BC4C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4C18"))) PPC_WEAK_FUNC(sub_83BC4C18);
PPC_FUNC_IMPL(__imp__sub_83BC4C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4C24"))) PPC_WEAK_FUNC(sub_83BC4C24);
PPC_FUNC_IMPL(__imp__sub_83BC4C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4C28"))) PPC_WEAK_FUNC(sub_83BC4C28);
PPC_FUNC_IMPL(__imp__sub_83BC4C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4C34"))) PPC_WEAK_FUNC(sub_83BC4C34);
PPC_FUNC_IMPL(__imp__sub_83BC4C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4C38"))) PPC_WEAK_FUNC(sub_83BC4C38);
PPC_FUNC_IMPL(__imp__sub_83BC4C38) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-19936
	ctx.r3.s64 = ctx.r11.s64 + -19936;
	// bl 0x83523120
	ctx.lr = 0x83BC4C50;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,288
	ctx.r3.s64 = ctx.r10.s64 + 288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4C5C;
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

__attribute__((alias("__imp__sub_83BC4C6C"))) PPC_WEAK_FUNC(sub_83BC4C6C);
PPC_FUNC_IMPL(__imp__sub_83BC4C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4C70"))) PPC_WEAK_FUNC(sub_83BC4C70);
PPC_FUNC_IMPL(__imp__sub_83BC4C70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19920
	ctx.r7.s64 = ctx.r8.s64 + -19920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19920);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19920, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4C98"))) PPC_WEAK_FUNC(sub_83BC4C98);
PPC_FUNC_IMPL(__imp__sub_83BC4C98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,4888
	ctx.r6.s64 = ctx.r7.s64 + 4888;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4816(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4816);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19920(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19920);
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
	// std r9,4888(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4CE0"))) PPC_WEAK_FUNC(sub_83BC4CE0);
PPC_FUNC_IMPL(__imp__sub_83BC4CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4CEC"))) PPC_WEAK_FUNC(sub_83BC4CEC);
PPC_FUNC_IMPL(__imp__sub_83BC4CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4CF0"))) PPC_WEAK_FUNC(sub_83BC4CF0);
PPC_FUNC_IMPL(__imp__sub_83BC4CF0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// bl 0x8259af80
	ctx.lr = 0x83BC4D08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,320
	ctx.r3.s64 = ctx.r10.s64 + 320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4D14;
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

__attribute__((alias("__imp__sub_83BC4D24"))) PPC_WEAK_FUNC(sub_83BC4D24);
PPC_FUNC_IMPL(__imp__sub_83BC4D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4D28"))) PPC_WEAK_FUNC(sub_83BC4D28);
PPC_FUNC_IMPL(__imp__sub_83BC4D28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19932
	ctx.r11.s64 = ctx.r8.s64 + -19932;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,4864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,312
	ctx.r3.s64 = ctx.r6.s64 + 312;
	// stw r10,-19932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19932, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4D58"))) PPC_WEAK_FUNC(sub_83BC4D58);
PPC_FUNC_IMPL(__imp__sub_83BC4D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,328
	ctx.r3.s64 = ctx.r11.s64 + 328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4D64"))) PPC_WEAK_FUNC(sub_83BC4D64);
PPC_FUNC_IMPL(__imp__sub_83BC4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4D68"))) PPC_WEAK_FUNC(sub_83BC4D68);
PPC_FUNC_IMPL(__imp__sub_83BC4D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4D74"))) PPC_WEAK_FUNC(sub_83BC4D74);
PPC_FUNC_IMPL(__imp__sub_83BC4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4D78"))) PPC_WEAK_FUNC(sub_83BC4D78);
PPC_FUNC_IMPL(__imp__sub_83BC4D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,344
	ctx.r3.s64 = ctx.r11.s64 + 344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4D84"))) PPC_WEAK_FUNC(sub_83BC4D84);
PPC_FUNC_IMPL(__imp__sub_83BC4D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4D88"))) PPC_WEAK_FUNC(sub_83BC4D88);
PPC_FUNC_IMPL(__imp__sub_83BC4D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,352
	ctx.r3.s64 = ctx.r11.s64 + 352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4D94"))) PPC_WEAK_FUNC(sub_83BC4D94);
PPC_FUNC_IMPL(__imp__sub_83BC4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4D98"))) PPC_WEAK_FUNC(sub_83BC4D98);
PPC_FUNC_IMPL(__imp__sub_83BC4D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4DA4"))) PPC_WEAK_FUNC(sub_83BC4DA4);
PPC_FUNC_IMPL(__imp__sub_83BC4DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4DA8"))) PPC_WEAK_FUNC(sub_83BC4DA8);
PPC_FUNC_IMPL(__imp__sub_83BC4DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,368
	ctx.r3.s64 = ctx.r11.s64 + 368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4DB4"))) PPC_WEAK_FUNC(sub_83BC4DB4);
PPC_FUNC_IMPL(__imp__sub_83BC4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4DB8"))) PPC_WEAK_FUNC(sub_83BC4DB8);
PPC_FUNC_IMPL(__imp__sub_83BC4DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4DC4"))) PPC_WEAK_FUNC(sub_83BC4DC4);
PPC_FUNC_IMPL(__imp__sub_83BC4DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4DC8"))) PPC_WEAK_FUNC(sub_83BC4DC8);
PPC_FUNC_IMPL(__imp__sub_83BC4DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4DD4"))) PPC_WEAK_FUNC(sub_83BC4DD4);
PPC_FUNC_IMPL(__imp__sub_83BC4DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4DD8"))) PPC_WEAK_FUNC(sub_83BC4DD8);
PPC_FUNC_IMPL(__imp__sub_83BC4DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,392
	ctx.r3.s64 = ctx.r11.s64 + 392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4DE4"))) PPC_WEAK_FUNC(sub_83BC4DE4);
PPC_FUNC_IMPL(__imp__sub_83BC4DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4DE8"))) PPC_WEAK_FUNC(sub_83BC4DE8);
PPC_FUNC_IMPL(__imp__sub_83BC4DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,400
	ctx.r3.s64 = ctx.r11.s64 + 400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4DF4"))) PPC_WEAK_FUNC(sub_83BC4DF4);
PPC_FUNC_IMPL(__imp__sub_83BC4DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4DF8"))) PPC_WEAK_FUNC(sub_83BC4DF8);
PPC_FUNC_IMPL(__imp__sub_83BC4DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4E04"))) PPC_WEAK_FUNC(sub_83BC4E04);
PPC_FUNC_IMPL(__imp__sub_83BC4E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4E08"))) PPC_WEAK_FUNC(sub_83BC4E08);
PPC_FUNC_IMPL(__imp__sub_83BC4E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,416
	ctx.r3.s64 = ctx.r11.s64 + 416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4E14"))) PPC_WEAK_FUNC(sub_83BC4E14);
PPC_FUNC_IMPL(__imp__sub_83BC4E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4E18"))) PPC_WEAK_FUNC(sub_83BC4E18);
PPC_FUNC_IMPL(__imp__sub_83BC4E18) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// bl 0x83523120
	ctx.lr = 0x83BC4E30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,424
	ctx.r3.s64 = ctx.r10.s64 + 424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4E3C;
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

__attribute__((alias("__imp__sub_83BC4E4C"))) PPC_WEAK_FUNC(sub_83BC4E4C);
PPC_FUNC_IMPL(__imp__sub_83BC4E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4E50"))) PPC_WEAK_FUNC(sub_83BC4E50);
PPC_FUNC_IMPL(__imp__sub_83BC4E50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19552
	ctx.r7.s64 = ctx.r8.s64 + -19552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19552(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19552);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19552(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19552, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4E78"))) PPC_WEAK_FUNC(sub_83BC4E78);
PPC_FUNC_IMPL(__imp__sub_83BC4E78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,5024
	ctx.r6.s64 = ctx.r7.s64 + 5024;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19552(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19552);
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
	// std r9,5024(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5024, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4EC0"))) PPC_WEAK_FUNC(sub_83BC4EC0);
PPC_FUNC_IMPL(__imp__sub_83BC4EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,440
	ctx.r3.s64 = ctx.r11.s64 + 440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4ECC"))) PPC_WEAK_FUNC(sub_83BC4ECC);
PPC_FUNC_IMPL(__imp__sub_83BC4ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4ED0"))) PPC_WEAK_FUNC(sub_83BC4ED0);
PPC_FUNC_IMPL(__imp__sub_83BC4ED0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-19544
	ctx.r3.s64 = ctx.r11.s64 + -19544;
	// bl 0x8259af80
	ctx.lr = 0x83BC4EE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,456
	ctx.r3.s64 = ctx.r10.s64 + 456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4EF4;
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

__attribute__((alias("__imp__sub_83BC4F04"))) PPC_WEAK_FUNC(sub_83BC4F04);
PPC_FUNC_IMPL(__imp__sub_83BC4F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4F08"))) PPC_WEAK_FUNC(sub_83BC4F08);
PPC_FUNC_IMPL(__imp__sub_83BC4F08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19564
	ctx.r11.s64 = ctx.r8.s64 + -19564;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,5000(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5000);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,448
	ctx.r3.s64 = ctx.r6.s64 + 448;
	// stw r10,-19564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4F38"))) PPC_WEAK_FUNC(sub_83BC4F38);
PPC_FUNC_IMPL(__imp__sub_83BC4F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,464
	ctx.r3.s64 = ctx.r11.s64 + 464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4F44"))) PPC_WEAK_FUNC(sub_83BC4F44);
PPC_FUNC_IMPL(__imp__sub_83BC4F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4F48"))) PPC_WEAK_FUNC(sub_83BC4F48);
PPC_FUNC_IMPL(__imp__sub_83BC4F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,472
	ctx.r3.s64 = ctx.r11.s64 + 472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4F54"))) PPC_WEAK_FUNC(sub_83BC4F54);
PPC_FUNC_IMPL(__imp__sub_83BC4F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4F58"))) PPC_WEAK_FUNC(sub_83BC4F58);
PPC_FUNC_IMPL(__imp__sub_83BC4F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,480
	ctx.r3.s64 = ctx.r11.s64 + 480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4F64"))) PPC_WEAK_FUNC(sub_83BC4F64);
PPC_FUNC_IMPL(__imp__sub_83BC4F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4F68"))) PPC_WEAK_FUNC(sub_83BC4F68);
PPC_FUNC_IMPL(__imp__sub_83BC4F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4F74"))) PPC_WEAK_FUNC(sub_83BC4F74);
PPC_FUNC_IMPL(__imp__sub_83BC4F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4F78"))) PPC_WEAK_FUNC(sub_83BC4F78);
PPC_FUNC_IMPL(__imp__sub_83BC4F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4F84"))) PPC_WEAK_FUNC(sub_83BC4F84);
PPC_FUNC_IMPL(__imp__sub_83BC4F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4F88"))) PPC_WEAK_FUNC(sub_83BC4F88);
PPC_FUNC_IMPL(__imp__sub_83BC4F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4F94"))) PPC_WEAK_FUNC(sub_83BC4F94);
PPC_FUNC_IMPL(__imp__sub_83BC4F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4F98"))) PPC_WEAK_FUNC(sub_83BC4F98);
PPC_FUNC_IMPL(__imp__sub_83BC4F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,512
	ctx.r3.s64 = ctx.r11.s64 + 512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4FA4"))) PPC_WEAK_FUNC(sub_83BC4FA4);
PPC_FUNC_IMPL(__imp__sub_83BC4FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4FA8"))) PPC_WEAK_FUNC(sub_83BC4FA8);
PPC_FUNC_IMPL(__imp__sub_83BC4FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4FB4"))) PPC_WEAK_FUNC(sub_83BC4FB4);
PPC_FUNC_IMPL(__imp__sub_83BC4FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4FB8"))) PPC_WEAK_FUNC(sub_83BC4FB8);
PPC_FUNC_IMPL(__imp__sub_83BC4FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,528
	ctx.r3.s64 = ctx.r11.s64 + 528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4FC4"))) PPC_WEAK_FUNC(sub_83BC4FC4);
PPC_FUNC_IMPL(__imp__sub_83BC4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4FC8"))) PPC_WEAK_FUNC(sub_83BC4FC8);
PPC_FUNC_IMPL(__imp__sub_83BC4FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,536
	ctx.r3.s64 = ctx.r11.s64 + 536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4FD4"))) PPC_WEAK_FUNC(sub_83BC4FD4);
PPC_FUNC_IMPL(__imp__sub_83BC4FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4FD8"))) PPC_WEAK_FUNC(sub_83BC4FD8);
PPC_FUNC_IMPL(__imp__sub_83BC4FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,544
	ctx.r3.s64 = ctx.r11.s64 + 544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4FE4"))) PPC_WEAK_FUNC(sub_83BC4FE4);
PPC_FUNC_IMPL(__imp__sub_83BC4FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4FE8"))) PPC_WEAK_FUNC(sub_83BC4FE8);
PPC_FUNC_IMPL(__imp__sub_83BC4FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,552
	ctx.r3.s64 = ctx.r11.s64 + 552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4FF4"))) PPC_WEAK_FUNC(sub_83BC4FF4);
PPC_FUNC_IMPL(__imp__sub_83BC4FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4FF8"))) PPC_WEAK_FUNC(sub_83BC4FF8);
PPC_FUNC_IMPL(__imp__sub_83BC4FF8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-19200
	ctx.r3.s64 = ctx.r11.s64 + -19200;
	// bl 0x83523120
	ctx.lr = 0x83BC5010;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,560
	ctx.r3.s64 = ctx.r10.s64 + 560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC501C;
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

__attribute__((alias("__imp__sub_83BC502C"))) PPC_WEAK_FUNC(sub_83BC502C);
PPC_FUNC_IMPL(__imp__sub_83BC502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5030"))) PPC_WEAK_FUNC(sub_83BC5030);
PPC_FUNC_IMPL(__imp__sub_83BC5030) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19184
	ctx.r7.s64 = ctx.r8.s64 + -19184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19184);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19184(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19184, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC5058"))) PPC_WEAK_FUNC(sub_83BC5058);
PPC_FUNC_IMPL(__imp__sub_83BC5058) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,5172
	ctx.r6.s64 = ctx.r7.s64 + 5172;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19184);
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
	// std r9,5172(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5172, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC50A0"))) PPC_WEAK_FUNC(sub_83BC50A0);
PPC_FUNC_IMPL(__imp__sub_83BC50A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC50AC"))) PPC_WEAK_FUNC(sub_83BC50AC);
PPC_FUNC_IMPL(__imp__sub_83BC50AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC50B0"))) PPC_WEAK_FUNC(sub_83BC50B0);
PPC_FUNC_IMPL(__imp__sub_83BC50B0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// bl 0x8259af80
	ctx.lr = 0x83BC50C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,592
	ctx.r3.s64 = ctx.r10.s64 + 592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC50D4;
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

__attribute__((alias("__imp__sub_83BC50E4"))) PPC_WEAK_FUNC(sub_83BC50E4);
PPC_FUNC_IMPL(__imp__sub_83BC50E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC50E8"))) PPC_WEAK_FUNC(sub_83BC50E8);
PPC_FUNC_IMPL(__imp__sub_83BC50E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19196
	ctx.r11.s64 = ctx.r8.s64 + -19196;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,5148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5148);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,584
	ctx.r3.s64 = ctx.r6.s64 + 584;
	// stw r10,-19196(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5118"))) PPC_WEAK_FUNC(sub_83BC5118);
PPC_FUNC_IMPL(__imp__sub_83BC5118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,600
	ctx.r3.s64 = ctx.r11.s64 + 600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5124"))) PPC_WEAK_FUNC(sub_83BC5124);
PPC_FUNC_IMPL(__imp__sub_83BC5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5128"))) PPC_WEAK_FUNC(sub_83BC5128);
PPC_FUNC_IMPL(__imp__sub_83BC5128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5134"))) PPC_WEAK_FUNC(sub_83BC5134);
PPC_FUNC_IMPL(__imp__sub_83BC5134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5138"))) PPC_WEAK_FUNC(sub_83BC5138);
PPC_FUNC_IMPL(__imp__sub_83BC5138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5144"))) PPC_WEAK_FUNC(sub_83BC5144);
PPC_FUNC_IMPL(__imp__sub_83BC5144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5148"))) PPC_WEAK_FUNC(sub_83BC5148);
PPC_FUNC_IMPL(__imp__sub_83BC5148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5154"))) PPC_WEAK_FUNC(sub_83BC5154);
PPC_FUNC_IMPL(__imp__sub_83BC5154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5158"))) PPC_WEAK_FUNC(sub_83BC5158);
PPC_FUNC_IMPL(__imp__sub_83BC5158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5164"))) PPC_WEAK_FUNC(sub_83BC5164);
PPC_FUNC_IMPL(__imp__sub_83BC5164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5168"))) PPC_WEAK_FUNC(sub_83BC5168);
PPC_FUNC_IMPL(__imp__sub_83BC5168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,640
	ctx.r3.s64 = ctx.r11.s64 + 640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5174"))) PPC_WEAK_FUNC(sub_83BC5174);
PPC_FUNC_IMPL(__imp__sub_83BC5174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5178"))) PPC_WEAK_FUNC(sub_83BC5178);
PPC_FUNC_IMPL(__imp__sub_83BC5178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,648
	ctx.r3.s64 = ctx.r11.s64 + 648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5184"))) PPC_WEAK_FUNC(sub_83BC5184);
PPC_FUNC_IMPL(__imp__sub_83BC5184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5188"))) PPC_WEAK_FUNC(sub_83BC5188);
PPC_FUNC_IMPL(__imp__sub_83BC5188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5194"))) PPC_WEAK_FUNC(sub_83BC5194);
PPC_FUNC_IMPL(__imp__sub_83BC5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5198"))) PPC_WEAK_FUNC(sub_83BC5198);
PPC_FUNC_IMPL(__imp__sub_83BC5198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,664
	ctx.r3.s64 = ctx.r11.s64 + 664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC51A4"))) PPC_WEAK_FUNC(sub_83BC51A4);
PPC_FUNC_IMPL(__imp__sub_83BC51A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC51A8"))) PPC_WEAK_FUNC(sub_83BC51A8);
PPC_FUNC_IMPL(__imp__sub_83BC51A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,672
	ctx.r3.s64 = ctx.r11.s64 + 672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC51B4"))) PPC_WEAK_FUNC(sub_83BC51B4);
PPC_FUNC_IMPL(__imp__sub_83BC51B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC51B8"))) PPC_WEAK_FUNC(sub_83BC51B8);
PPC_FUNC_IMPL(__imp__sub_83BC51B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,680
	ctx.r3.s64 = ctx.r11.s64 + 680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC51C4"))) PPC_WEAK_FUNC(sub_83BC51C4);
PPC_FUNC_IMPL(__imp__sub_83BC51C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC51C8"))) PPC_WEAK_FUNC(sub_83BC51C8);
PPC_FUNC_IMPL(__imp__sub_83BC51C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,688
	ctx.r3.s64 = ctx.r11.s64 + 688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC51D4"))) PPC_WEAK_FUNC(sub_83BC51D4);
PPC_FUNC_IMPL(__imp__sub_83BC51D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC51D8"))) PPC_WEAK_FUNC(sub_83BC51D8);
PPC_FUNC_IMPL(__imp__sub_83BC51D8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-18828
	ctx.r3.s64 = ctx.r11.s64 + -18828;
	// bl 0x83523120
	ctx.lr = 0x83BC51F0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,696
	ctx.r3.s64 = ctx.r10.s64 + 696;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC51FC;
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

__attribute__((alias("__imp__sub_83BC520C"))) PPC_WEAK_FUNC(sub_83BC520C);
PPC_FUNC_IMPL(__imp__sub_83BC520C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5210"))) PPC_WEAK_FUNC(sub_83BC5210);
PPC_FUNC_IMPL(__imp__sub_83BC5210) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18812
	ctx.r7.s64 = ctx.r8.s64 + -18812;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18812(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18812);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18812(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18812, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC5238"))) PPC_WEAK_FUNC(sub_83BC5238);
PPC_FUNC_IMPL(__imp__sub_83BC5238) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,5316
	ctx.r6.s64 = ctx.r7.s64 + 5316;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5244(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5244);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18812(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18812);
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
	// std r9,5316(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5316, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC5280"))) PPC_WEAK_FUNC(sub_83BC5280);
PPC_FUNC_IMPL(__imp__sub_83BC5280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,712
	ctx.r3.s64 = ctx.r11.s64 + 712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC528C"))) PPC_WEAK_FUNC(sub_83BC528C);
PPC_FUNC_IMPL(__imp__sub_83BC528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5290"))) PPC_WEAK_FUNC(sub_83BC5290);
PPC_FUNC_IMPL(__imp__sub_83BC5290) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-18800
	ctx.r3.s64 = ctx.r11.s64 + -18800;
	// bl 0x8259af80
	ctx.lr = 0x83BC52A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,728
	ctx.r3.s64 = ctx.r10.s64 + 728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC52B4;
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

__attribute__((alias("__imp__sub_83BC52C4"))) PPC_WEAK_FUNC(sub_83BC52C4);
PPC_FUNC_IMPL(__imp__sub_83BC52C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC52C8"))) PPC_WEAK_FUNC(sub_83BC52C8);
PPC_FUNC_IMPL(__imp__sub_83BC52C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18824
	ctx.r11.s64 = ctx.r8.s64 + -18824;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,5292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5292);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,720
	ctx.r3.s64 = ctx.r6.s64 + 720;
	// stw r10,-18824(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18824, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC52F8"))) PPC_WEAK_FUNC(sub_83BC52F8);
PPC_FUNC_IMPL(__imp__sub_83BC52F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5304"))) PPC_WEAK_FUNC(sub_83BC5304);
PPC_FUNC_IMPL(__imp__sub_83BC5304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5308"))) PPC_WEAK_FUNC(sub_83BC5308);
PPC_FUNC_IMPL(__imp__sub_83BC5308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,744
	ctx.r3.s64 = ctx.r11.s64 + 744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5314"))) PPC_WEAK_FUNC(sub_83BC5314);
PPC_FUNC_IMPL(__imp__sub_83BC5314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5318"))) PPC_WEAK_FUNC(sub_83BC5318);
PPC_FUNC_IMPL(__imp__sub_83BC5318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,752
	ctx.r3.s64 = ctx.r11.s64 + 752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5324"))) PPC_WEAK_FUNC(sub_83BC5324);
PPC_FUNC_IMPL(__imp__sub_83BC5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5328"))) PPC_WEAK_FUNC(sub_83BC5328);
PPC_FUNC_IMPL(__imp__sub_83BC5328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5334"))) PPC_WEAK_FUNC(sub_83BC5334);
PPC_FUNC_IMPL(__imp__sub_83BC5334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5338"))) PPC_WEAK_FUNC(sub_83BC5338);
PPC_FUNC_IMPL(__imp__sub_83BC5338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5344"))) PPC_WEAK_FUNC(sub_83BC5344);
PPC_FUNC_IMPL(__imp__sub_83BC5344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5348"))) PPC_WEAK_FUNC(sub_83BC5348);
PPC_FUNC_IMPL(__imp__sub_83BC5348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,776
	ctx.r3.s64 = ctx.r11.s64 + 776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5354"))) PPC_WEAK_FUNC(sub_83BC5354);
PPC_FUNC_IMPL(__imp__sub_83BC5354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5358"))) PPC_WEAK_FUNC(sub_83BC5358);
PPC_FUNC_IMPL(__imp__sub_83BC5358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,784
	ctx.r3.s64 = ctx.r11.s64 + 784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5364"))) PPC_WEAK_FUNC(sub_83BC5364);
PPC_FUNC_IMPL(__imp__sub_83BC5364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5368"))) PPC_WEAK_FUNC(sub_83BC5368);
PPC_FUNC_IMPL(__imp__sub_83BC5368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,792
	ctx.r3.s64 = ctx.r11.s64 + 792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5374"))) PPC_WEAK_FUNC(sub_83BC5374);
PPC_FUNC_IMPL(__imp__sub_83BC5374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5378"))) PPC_WEAK_FUNC(sub_83BC5378);
PPC_FUNC_IMPL(__imp__sub_83BC5378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5384"))) PPC_WEAK_FUNC(sub_83BC5384);
PPC_FUNC_IMPL(__imp__sub_83BC5384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5388"))) PPC_WEAK_FUNC(sub_83BC5388);
PPC_FUNC_IMPL(__imp__sub_83BC5388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,808
	ctx.r3.s64 = ctx.r11.s64 + 808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5394"))) PPC_WEAK_FUNC(sub_83BC5394);
PPC_FUNC_IMPL(__imp__sub_83BC5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5398"))) PPC_WEAK_FUNC(sub_83BC5398);
PPC_FUNC_IMPL(__imp__sub_83BC5398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC53A4"))) PPC_WEAK_FUNC(sub_83BC53A4);
PPC_FUNC_IMPL(__imp__sub_83BC53A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC53A8"))) PPC_WEAK_FUNC(sub_83BC53A8);
PPC_FUNC_IMPL(__imp__sub_83BC53A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC53B4"))) PPC_WEAK_FUNC(sub_83BC53B4);
PPC_FUNC_IMPL(__imp__sub_83BC53B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC53B8"))) PPC_WEAK_FUNC(sub_83BC53B8);
PPC_FUNC_IMPL(__imp__sub_83BC53B8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-18456
	ctx.r3.s64 = ctx.r11.s64 + -18456;
	// bl 0x83523120
	ctx.lr = 0x83BC53D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,832
	ctx.r3.s64 = ctx.r10.s64 + 832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC53DC;
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

__attribute__((alias("__imp__sub_83BC53EC"))) PPC_WEAK_FUNC(sub_83BC53EC);
PPC_FUNC_IMPL(__imp__sub_83BC53EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC53F0"))) PPC_WEAK_FUNC(sub_83BC53F0);
PPC_FUNC_IMPL(__imp__sub_83BC53F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18440
	ctx.r7.s64 = ctx.r8.s64 + -18440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18440);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18440(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18440, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC5418"))) PPC_WEAK_FUNC(sub_83BC5418);
PPC_FUNC_IMPL(__imp__sub_83BC5418) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,5444
	ctx.r6.s64 = ctx.r7.s64 + 5444;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18440(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18440);
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
	// std r9,5444(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5444, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC5460"))) PPC_WEAK_FUNC(sub_83BC5460);
PPC_FUNC_IMPL(__imp__sub_83BC5460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC546C"))) PPC_WEAK_FUNC(sub_83BC546C);
PPC_FUNC_IMPL(__imp__sub_83BC546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5470"))) PPC_WEAK_FUNC(sub_83BC5470);
PPC_FUNC_IMPL(__imp__sub_83BC5470) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// bl 0x8259af80
	ctx.lr = 0x83BC5488;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,864
	ctx.r3.s64 = ctx.r10.s64 + 864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC5494;
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

__attribute__((alias("__imp__sub_83BC54A4"))) PPC_WEAK_FUNC(sub_83BC54A4);
PPC_FUNC_IMPL(__imp__sub_83BC54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC54A8"))) PPC_WEAK_FUNC(sub_83BC54A8);
PPC_FUNC_IMPL(__imp__sub_83BC54A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18452
	ctx.r11.s64 = ctx.r8.s64 + -18452;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,5420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5420);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,856
	ctx.r3.s64 = ctx.r6.s64 + 856;
	// stw r10,-18452(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC54D8"))) PPC_WEAK_FUNC(sub_83BC54D8);
PPC_FUNC_IMPL(__imp__sub_83BC54D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,872
	ctx.r3.s64 = ctx.r11.s64 + 872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC54E4"))) PPC_WEAK_FUNC(sub_83BC54E4);
PPC_FUNC_IMPL(__imp__sub_83BC54E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC54E8"))) PPC_WEAK_FUNC(sub_83BC54E8);
PPC_FUNC_IMPL(__imp__sub_83BC54E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,880
	ctx.r3.s64 = ctx.r11.s64 + 880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC54F4"))) PPC_WEAK_FUNC(sub_83BC54F4);
PPC_FUNC_IMPL(__imp__sub_83BC54F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC54F8"))) PPC_WEAK_FUNC(sub_83BC54F8);
PPC_FUNC_IMPL(__imp__sub_83BC54F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5504"))) PPC_WEAK_FUNC(sub_83BC5504);
PPC_FUNC_IMPL(__imp__sub_83BC5504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5508"))) PPC_WEAK_FUNC(sub_83BC5508);
PPC_FUNC_IMPL(__imp__sub_83BC5508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,896
	ctx.r3.s64 = ctx.r11.s64 + 896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5514"))) PPC_WEAK_FUNC(sub_83BC5514);
PPC_FUNC_IMPL(__imp__sub_83BC5514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5518"))) PPC_WEAK_FUNC(sub_83BC5518);
PPC_FUNC_IMPL(__imp__sub_83BC5518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,904
	ctx.r3.s64 = ctx.r11.s64 + 904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5524"))) PPC_WEAK_FUNC(sub_83BC5524);
PPC_FUNC_IMPL(__imp__sub_83BC5524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5528"))) PPC_WEAK_FUNC(sub_83BC5528);
PPC_FUNC_IMPL(__imp__sub_83BC5528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5534"))) PPC_WEAK_FUNC(sub_83BC5534);
PPC_FUNC_IMPL(__imp__sub_83BC5534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5538"))) PPC_WEAK_FUNC(sub_83BC5538);
PPC_FUNC_IMPL(__imp__sub_83BC5538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,920
	ctx.r3.s64 = ctx.r11.s64 + 920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5544"))) PPC_WEAK_FUNC(sub_83BC5544);
PPC_FUNC_IMPL(__imp__sub_83BC5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5548"))) PPC_WEAK_FUNC(sub_83BC5548);
PPC_FUNC_IMPL(__imp__sub_83BC5548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,928
	ctx.r3.s64 = ctx.r11.s64 + 928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5554"))) PPC_WEAK_FUNC(sub_83BC5554);
PPC_FUNC_IMPL(__imp__sub_83BC5554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5558"))) PPC_WEAK_FUNC(sub_83BC5558);
PPC_FUNC_IMPL(__imp__sub_83BC5558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,936
	ctx.r3.s64 = ctx.r11.s64 + 936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5564"))) PPC_WEAK_FUNC(sub_83BC5564);
PPC_FUNC_IMPL(__imp__sub_83BC5564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5568"))) PPC_WEAK_FUNC(sub_83BC5568);
PPC_FUNC_IMPL(__imp__sub_83BC5568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,944
	ctx.r3.s64 = ctx.r11.s64 + 944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5574"))) PPC_WEAK_FUNC(sub_83BC5574);
PPC_FUNC_IMPL(__imp__sub_83BC5574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5578"))) PPC_WEAK_FUNC(sub_83BC5578);
PPC_FUNC_IMPL(__imp__sub_83BC5578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,952
	ctx.r3.s64 = ctx.r11.s64 + 952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5584"))) PPC_WEAK_FUNC(sub_83BC5584);
PPC_FUNC_IMPL(__imp__sub_83BC5584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5588"))) PPC_WEAK_FUNC(sub_83BC5588);
PPC_FUNC_IMPL(__imp__sub_83BC5588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,960
	ctx.r3.s64 = ctx.r11.s64 + 960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5594"))) PPC_WEAK_FUNC(sub_83BC5594);
PPC_FUNC_IMPL(__imp__sub_83BC5594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5598"))) PPC_WEAK_FUNC(sub_83BC5598);
PPC_FUNC_IMPL(__imp__sub_83BC5598) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-18088
	ctx.r3.s64 = ctx.r11.s64 + -18088;
	// bl 0x83523120
	ctx.lr = 0x83BC55B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,968
	ctx.r3.s64 = ctx.r10.s64 + 968;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC55BC;
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

__attribute__((alias("__imp__sub_83BC55CC"))) PPC_WEAK_FUNC(sub_83BC55CC);
PPC_FUNC_IMPL(__imp__sub_83BC55CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC55D0"))) PPC_WEAK_FUNC(sub_83BC55D0);
PPC_FUNC_IMPL(__imp__sub_83BC55D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18072
	ctx.r7.s64 = ctx.r8.s64 + -18072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18072(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC55F8"))) PPC_WEAK_FUNC(sub_83BC55F8);
PPC_FUNC_IMPL(__imp__sub_83BC55F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,5628
	ctx.r6.s64 = ctx.r7.s64 + 5628;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18072(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18072);
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
	// std r9,5628(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC5640"))) PPC_WEAK_FUNC(sub_83BC5640);
PPC_FUNC_IMPL(__imp__sub_83BC5640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC564C"))) PPC_WEAK_FUNC(sub_83BC564C);
PPC_FUNC_IMPL(__imp__sub_83BC564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5650"))) PPC_WEAK_FUNC(sub_83BC5650);
PPC_FUNC_IMPL(__imp__sub_83BC5650) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-18064
	ctx.r3.s64 = ctx.r11.s64 + -18064;
	// bl 0x8259af80
	ctx.lr = 0x83BC5668;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,1000
	ctx.r3.s64 = ctx.r10.s64 + 1000;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC5674;
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

__attribute__((alias("__imp__sub_83BC5684"))) PPC_WEAK_FUNC(sub_83BC5684);
PPC_FUNC_IMPL(__imp__sub_83BC5684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5688"))) PPC_WEAK_FUNC(sub_83BC5688);
PPC_FUNC_IMPL(__imp__sub_83BC5688) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18084
	ctx.r11.s64 = ctx.r8.s64 + -18084;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,5604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5604);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,992
	ctx.r3.s64 = ctx.r6.s64 + 992;
	// stw r10,-18084(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC56B8"))) PPC_WEAK_FUNC(sub_83BC56B8);
PPC_FUNC_IMPL(__imp__sub_83BC56B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC56C4"))) PPC_WEAK_FUNC(sub_83BC56C4);
PPC_FUNC_IMPL(__imp__sub_83BC56C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC56C8"))) PPC_WEAK_FUNC(sub_83BC56C8);
PPC_FUNC_IMPL(__imp__sub_83BC56C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1016
	ctx.r3.s64 = ctx.r11.s64 + 1016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC56D4"))) PPC_WEAK_FUNC(sub_83BC56D4);
PPC_FUNC_IMPL(__imp__sub_83BC56D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC56D8"))) PPC_WEAK_FUNC(sub_83BC56D8);
PPC_FUNC_IMPL(__imp__sub_83BC56D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1024
	ctx.r3.s64 = ctx.r11.s64 + 1024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC56E4"))) PPC_WEAK_FUNC(sub_83BC56E4);
PPC_FUNC_IMPL(__imp__sub_83BC56E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC56E8"))) PPC_WEAK_FUNC(sub_83BC56E8);
PPC_FUNC_IMPL(__imp__sub_83BC56E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1032
	ctx.r3.s64 = ctx.r11.s64 + 1032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC56F4"))) PPC_WEAK_FUNC(sub_83BC56F4);
PPC_FUNC_IMPL(__imp__sub_83BC56F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC56F8"))) PPC_WEAK_FUNC(sub_83BC56F8);
PPC_FUNC_IMPL(__imp__sub_83BC56F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1040
	ctx.r3.s64 = ctx.r11.s64 + 1040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5704"))) PPC_WEAK_FUNC(sub_83BC5704);
PPC_FUNC_IMPL(__imp__sub_83BC5704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5708"))) PPC_WEAK_FUNC(sub_83BC5708);
PPC_FUNC_IMPL(__imp__sub_83BC5708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1048
	ctx.r3.s64 = ctx.r11.s64 + 1048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5714"))) PPC_WEAK_FUNC(sub_83BC5714);
PPC_FUNC_IMPL(__imp__sub_83BC5714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5718"))) PPC_WEAK_FUNC(sub_83BC5718);
PPC_FUNC_IMPL(__imp__sub_83BC5718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1056
	ctx.r3.s64 = ctx.r11.s64 + 1056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5724"))) PPC_WEAK_FUNC(sub_83BC5724);
PPC_FUNC_IMPL(__imp__sub_83BC5724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5728"))) PPC_WEAK_FUNC(sub_83BC5728);
PPC_FUNC_IMPL(__imp__sub_83BC5728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1064
	ctx.r3.s64 = ctx.r11.s64 + 1064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5734"))) PPC_WEAK_FUNC(sub_83BC5734);
PPC_FUNC_IMPL(__imp__sub_83BC5734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5738"))) PPC_WEAK_FUNC(sub_83BC5738);
PPC_FUNC_IMPL(__imp__sub_83BC5738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5744"))) PPC_WEAK_FUNC(sub_83BC5744);
PPC_FUNC_IMPL(__imp__sub_83BC5744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5748"))) PPC_WEAK_FUNC(sub_83BC5748);
PPC_FUNC_IMPL(__imp__sub_83BC5748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1080
	ctx.r3.s64 = ctx.r11.s64 + 1080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5754"))) PPC_WEAK_FUNC(sub_83BC5754);
PPC_FUNC_IMPL(__imp__sub_83BC5754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5758"))) PPC_WEAK_FUNC(sub_83BC5758);
PPC_FUNC_IMPL(__imp__sub_83BC5758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5764"))) PPC_WEAK_FUNC(sub_83BC5764);
PPC_FUNC_IMPL(__imp__sub_83BC5764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5768"))) PPC_WEAK_FUNC(sub_83BC5768);
PPC_FUNC_IMPL(__imp__sub_83BC5768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1096
	ctx.r3.s64 = ctx.r11.s64 + 1096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5774"))) PPC_WEAK_FUNC(sub_83BC5774);
PPC_FUNC_IMPL(__imp__sub_83BC5774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5778"))) PPC_WEAK_FUNC(sub_83BC5778);
PPC_FUNC_IMPL(__imp__sub_83BC5778) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-17720
	ctx.r3.s64 = ctx.r11.s64 + -17720;
	// bl 0x83523120
	ctx.lr = 0x83BC5790;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,1104
	ctx.r3.s64 = ctx.r10.s64 + 1104;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC579C;
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

__attribute__((alias("__imp__sub_83BC57AC"))) PPC_WEAK_FUNC(sub_83BC57AC);
PPC_FUNC_IMPL(__imp__sub_83BC57AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC57B0"))) PPC_WEAK_FUNC(sub_83BC57B0);
PPC_FUNC_IMPL(__imp__sub_83BC57B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17704
	ctx.r7.s64 = ctx.r8.s64 + -17704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC57D8"))) PPC_WEAK_FUNC(sub_83BC57D8);
PPC_FUNC_IMPL(__imp__sub_83BC57D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,5768
	ctx.r6.s64 = ctx.r7.s64 + 5768;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17704);
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
	// std r9,5768(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5768, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC5820"))) PPC_WEAK_FUNC(sub_83BC5820);
PPC_FUNC_IMPL(__imp__sub_83BC5820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1120
	ctx.r3.s64 = ctx.r11.s64 + 1120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC582C"))) PPC_WEAK_FUNC(sub_83BC582C);
PPC_FUNC_IMPL(__imp__sub_83BC582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5830"))) PPC_WEAK_FUNC(sub_83BC5830);
PPC_FUNC_IMPL(__imp__sub_83BC5830) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,-17696
	ctx.r3.s64 = ctx.r11.s64 + -17696;
	// bl 0x8259af80
	ctx.lr = 0x83BC5848;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,1136
	ctx.r3.s64 = ctx.r10.s64 + 1136;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC5854;
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

__attribute__((alias("__imp__sub_83BC5864"))) PPC_WEAK_FUNC(sub_83BC5864);
PPC_FUNC_IMPL(__imp__sub_83BC5864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC5868"))) PPC_WEAK_FUNC(sub_83BC5868);
PPC_FUNC_IMPL(__imp__sub_83BC5868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17716
	ctx.r11.s64 = ctx.r8.s64 + -17716;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,5744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5744);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1128
	ctx.r3.s64 = ctx.r6.s64 + 1128;
	// stw r10,-17716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC5898"))) PPC_WEAK_FUNC(sub_83BC5898);
PPC_FUNC_IMPL(__imp__sub_83BC5898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1144
	ctx.r3.s64 = ctx.r11.s64 + 1144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC58A4"))) PPC_WEAK_FUNC(sub_83BC58A4);
PPC_FUNC_IMPL(__imp__sub_83BC58A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC58A8"))) PPC_WEAK_FUNC(sub_83BC58A8);
PPC_FUNC_IMPL(__imp__sub_83BC58A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1152
	ctx.r3.s64 = ctx.r11.s64 + 1152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC58B4"))) PPC_WEAK_FUNC(sub_83BC58B4);
PPC_FUNC_IMPL(__imp__sub_83BC58B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC58B8"))) PPC_WEAK_FUNC(sub_83BC58B8);
PPC_FUNC_IMPL(__imp__sub_83BC58B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

