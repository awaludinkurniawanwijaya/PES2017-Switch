#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BC9B04"))) PPC_WEAK_FUNC(sub_83BC9B04);
PPC_FUNC_IMPL(__imp__sub_83BC9B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9B08"))) PPC_WEAK_FUNC(sub_83BC9B08);
PPC_FUNC_IMPL(__imp__sub_83BC9B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7048
	ctx.r3.s64 = ctx.r11.s64 + 7048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9B14"))) PPC_WEAK_FUNC(sub_83BC9B14);
PPC_FUNC_IMPL(__imp__sub_83BC9B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9B18"))) PPC_WEAK_FUNC(sub_83BC9B18);
PPC_FUNC_IMPL(__imp__sub_83BC9B18) {
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
	// addi r3,r11,-5920
	ctx.r3.s64 = ctx.r11.s64 + -5920;
	// bl 0x83523120
	ctx.lr = 0x83BC9B30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,7056
	ctx.r3.s64 = ctx.r10.s64 + 7056;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC9B3C;
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

__attribute__((alias("__imp__sub_83BC9B4C"))) PPC_WEAK_FUNC(sub_83BC9B4C);
PPC_FUNC_IMPL(__imp__sub_83BC9B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9B50"))) PPC_WEAK_FUNC(sub_83BC9B50);
PPC_FUNC_IMPL(__imp__sub_83BC9B50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5904
	ctx.r7.s64 = ctx.r8.s64 + -5904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5904);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5904(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5904, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC9B78"))) PPC_WEAK_FUNC(sub_83BC9B78);
PPC_FUNC_IMPL(__imp__sub_83BC9B78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,11180
	ctx.r6.s64 = ctx.r7.s64 + 11180;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11108(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11108);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5904);
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
	// std r9,11180(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11180, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC9BC0"))) PPC_WEAK_FUNC(sub_83BC9BC0);
PPC_FUNC_IMPL(__imp__sub_83BC9BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7072
	ctx.r3.s64 = ctx.r11.s64 + 7072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9BCC"))) PPC_WEAK_FUNC(sub_83BC9BCC);
PPC_FUNC_IMPL(__imp__sub_83BC9BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9BD0"))) PPC_WEAK_FUNC(sub_83BC9BD0);
PPC_FUNC_IMPL(__imp__sub_83BC9BD0) {
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
	// addi r3,r11,-5896
	ctx.r3.s64 = ctx.r11.s64 + -5896;
	// bl 0x8259af80
	ctx.lr = 0x83BC9BE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,7088
	ctx.r3.s64 = ctx.r10.s64 + 7088;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC9BF4;
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

__attribute__((alias("__imp__sub_83BC9C04"))) PPC_WEAK_FUNC(sub_83BC9C04);
PPC_FUNC_IMPL(__imp__sub_83BC9C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9C08"))) PPC_WEAK_FUNC(sub_83BC9C08);
PPC_FUNC_IMPL(__imp__sub_83BC9C08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5916
	ctx.r11.s64 = ctx.r8.s64 + -5916;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,11156(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11156);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7080
	ctx.r3.s64 = ctx.r6.s64 + 7080;
	// stw r10,-5916(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9C38"))) PPC_WEAK_FUNC(sub_83BC9C38);
PPC_FUNC_IMPL(__imp__sub_83BC9C38) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-21676
	ctx.r4.s64 = ctx.r11.s64 + -21676;
	// addi r3,r10,11204
	ctx.r3.s64 = ctx.r10.s64 + 11204;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC9C5C;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,7096
	ctx.r3.s64 = ctx.r9.s64 + 7096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC9C68;
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

__attribute__((alias("__imp__sub_83BC9C78"))) PPC_WEAK_FUNC(sub_83BC9C78);
PPC_FUNC_IMPL(__imp__sub_83BC9C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7200
	ctx.r3.s64 = ctx.r11.s64 + 7200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9C84"))) PPC_WEAK_FUNC(sub_83BC9C84);
PPC_FUNC_IMPL(__imp__sub_83BC9C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9C88"))) PPC_WEAK_FUNC(sub_83BC9C88);
PPC_FUNC_IMPL(__imp__sub_83BC9C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7208
	ctx.r3.s64 = ctx.r11.s64 + 7208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9C94"))) PPC_WEAK_FUNC(sub_83BC9C94);
PPC_FUNC_IMPL(__imp__sub_83BC9C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9C98"))) PPC_WEAK_FUNC(sub_83BC9C98);
PPC_FUNC_IMPL(__imp__sub_83BC9C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7216
	ctx.r3.s64 = ctx.r11.s64 + 7216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9CA4"))) PPC_WEAK_FUNC(sub_83BC9CA4);
PPC_FUNC_IMPL(__imp__sub_83BC9CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9CA8"))) PPC_WEAK_FUNC(sub_83BC9CA8);
PPC_FUNC_IMPL(__imp__sub_83BC9CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7224
	ctx.r3.s64 = ctx.r11.s64 + 7224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9CB4"))) PPC_WEAK_FUNC(sub_83BC9CB4);
PPC_FUNC_IMPL(__imp__sub_83BC9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9CB8"))) PPC_WEAK_FUNC(sub_83BC9CB8);
PPC_FUNC_IMPL(__imp__sub_83BC9CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7232
	ctx.r3.s64 = ctx.r11.s64 + 7232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9CC4"))) PPC_WEAK_FUNC(sub_83BC9CC4);
PPC_FUNC_IMPL(__imp__sub_83BC9CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9CC8"))) PPC_WEAK_FUNC(sub_83BC9CC8);
PPC_FUNC_IMPL(__imp__sub_83BC9CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9CD4"))) PPC_WEAK_FUNC(sub_83BC9CD4);
PPC_FUNC_IMPL(__imp__sub_83BC9CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9CD8"))) PPC_WEAK_FUNC(sub_83BC9CD8);
PPC_FUNC_IMPL(__imp__sub_83BC9CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7248
	ctx.r3.s64 = ctx.r11.s64 + 7248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9CE4"))) PPC_WEAK_FUNC(sub_83BC9CE4);
PPC_FUNC_IMPL(__imp__sub_83BC9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9CE8"))) PPC_WEAK_FUNC(sub_83BC9CE8);
PPC_FUNC_IMPL(__imp__sub_83BC9CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7256
	ctx.r3.s64 = ctx.r11.s64 + 7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9CF4"))) PPC_WEAK_FUNC(sub_83BC9CF4);
PPC_FUNC_IMPL(__imp__sub_83BC9CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9CF8"))) PPC_WEAK_FUNC(sub_83BC9CF8);
PPC_FUNC_IMPL(__imp__sub_83BC9CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7264
	ctx.r3.s64 = ctx.r11.s64 + 7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9D04"))) PPC_WEAK_FUNC(sub_83BC9D04);
PPC_FUNC_IMPL(__imp__sub_83BC9D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9D08"))) PPC_WEAK_FUNC(sub_83BC9D08);
PPC_FUNC_IMPL(__imp__sub_83BC9D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7272
	ctx.r3.s64 = ctx.r11.s64 + 7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9D14"))) PPC_WEAK_FUNC(sub_83BC9D14);
PPC_FUNC_IMPL(__imp__sub_83BC9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9D18"))) PPC_WEAK_FUNC(sub_83BC9D18);
PPC_FUNC_IMPL(__imp__sub_83BC9D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7280
	ctx.r3.s64 = ctx.r11.s64 + 7280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9D24"))) PPC_WEAK_FUNC(sub_83BC9D24);
PPC_FUNC_IMPL(__imp__sub_83BC9D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9D28"))) PPC_WEAK_FUNC(sub_83BC9D28);
PPC_FUNC_IMPL(__imp__sub_83BC9D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7288
	ctx.r3.s64 = ctx.r11.s64 + 7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9D34"))) PPC_WEAK_FUNC(sub_83BC9D34);
PPC_FUNC_IMPL(__imp__sub_83BC9D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9D38"))) PPC_WEAK_FUNC(sub_83BC9D38);
PPC_FUNC_IMPL(__imp__sub_83BC9D38) {
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
	// addi r3,r11,-5552
	ctx.r3.s64 = ctx.r11.s64 + -5552;
	// bl 0x83523120
	ctx.lr = 0x83BC9D50;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,7296
	ctx.r3.s64 = ctx.r10.s64 + 7296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC9D5C;
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

__attribute__((alias("__imp__sub_83BC9D6C"))) PPC_WEAK_FUNC(sub_83BC9D6C);
PPC_FUNC_IMPL(__imp__sub_83BC9D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9D70"))) PPC_WEAK_FUNC(sub_83BC9D70);
PPC_FUNC_IMPL(__imp__sub_83BC9D70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5536
	ctx.r7.s64 = ctx.r8.s64 + -5536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5536);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5536(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5536, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC9D98"))) PPC_WEAK_FUNC(sub_83BC9D98);
PPC_FUNC_IMPL(__imp__sub_83BC9D98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,11336
	ctx.r6.s64 = ctx.r7.s64 + 11336;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5536(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5536);
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
	// std r9,11336(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11336, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC9DE0"))) PPC_WEAK_FUNC(sub_83BC9DE0);
PPC_FUNC_IMPL(__imp__sub_83BC9DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9DEC"))) PPC_WEAK_FUNC(sub_83BC9DEC);
PPC_FUNC_IMPL(__imp__sub_83BC9DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9DF0"))) PPC_WEAK_FUNC(sub_83BC9DF0);
PPC_FUNC_IMPL(__imp__sub_83BC9DF0) {
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
	// addi r3,r11,-5528
	ctx.r3.s64 = ctx.r11.s64 + -5528;
	// bl 0x8259af80
	ctx.lr = 0x83BC9E08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,7328
	ctx.r3.s64 = ctx.r10.s64 + 7328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC9E14;
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

__attribute__((alias("__imp__sub_83BC9E24"))) PPC_WEAK_FUNC(sub_83BC9E24);
PPC_FUNC_IMPL(__imp__sub_83BC9E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9E28"))) PPC_WEAK_FUNC(sub_83BC9E28);
PPC_FUNC_IMPL(__imp__sub_83BC9E28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5548
	ctx.r11.s64 = ctx.r8.s64 + -5548;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,11312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7320
	ctx.r3.s64 = ctx.r6.s64 + 7320;
	// stw r10,-5548(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5548, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9E58"))) PPC_WEAK_FUNC(sub_83BC9E58);
PPC_FUNC_IMPL(__imp__sub_83BC9E58) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-20900
	ctx.r4.s64 = ctx.r11.s64 + -20900;
	// addi r3,r10,11360
	ctx.r3.s64 = ctx.r10.s64 + 11360;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BC9E7C;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,7336
	ctx.r3.s64 = ctx.r9.s64 + 7336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC9E88;
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

__attribute__((alias("__imp__sub_83BC9E98"))) PPC_WEAK_FUNC(sub_83BC9E98);
PPC_FUNC_IMPL(__imp__sub_83BC9E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7440
	ctx.r3.s64 = ctx.r11.s64 + 7440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9EA4"))) PPC_WEAK_FUNC(sub_83BC9EA4);
PPC_FUNC_IMPL(__imp__sub_83BC9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9EA8"))) PPC_WEAK_FUNC(sub_83BC9EA8);
PPC_FUNC_IMPL(__imp__sub_83BC9EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7448
	ctx.r3.s64 = ctx.r11.s64 + 7448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9EB4"))) PPC_WEAK_FUNC(sub_83BC9EB4);
PPC_FUNC_IMPL(__imp__sub_83BC9EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9EB8"))) PPC_WEAK_FUNC(sub_83BC9EB8);
PPC_FUNC_IMPL(__imp__sub_83BC9EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7456
	ctx.r3.s64 = ctx.r11.s64 + 7456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9EC4"))) PPC_WEAK_FUNC(sub_83BC9EC4);
PPC_FUNC_IMPL(__imp__sub_83BC9EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9EC8"))) PPC_WEAK_FUNC(sub_83BC9EC8);
PPC_FUNC_IMPL(__imp__sub_83BC9EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7464
	ctx.r3.s64 = ctx.r11.s64 + 7464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9ED4"))) PPC_WEAK_FUNC(sub_83BC9ED4);
PPC_FUNC_IMPL(__imp__sub_83BC9ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9ED8"))) PPC_WEAK_FUNC(sub_83BC9ED8);
PPC_FUNC_IMPL(__imp__sub_83BC9ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7472
	ctx.r3.s64 = ctx.r11.s64 + 7472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9EE4"))) PPC_WEAK_FUNC(sub_83BC9EE4);
PPC_FUNC_IMPL(__imp__sub_83BC9EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9EE8"))) PPC_WEAK_FUNC(sub_83BC9EE8);
PPC_FUNC_IMPL(__imp__sub_83BC9EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7480
	ctx.r3.s64 = ctx.r11.s64 + 7480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9EF4"))) PPC_WEAK_FUNC(sub_83BC9EF4);
PPC_FUNC_IMPL(__imp__sub_83BC9EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9EF8"))) PPC_WEAK_FUNC(sub_83BC9EF8);
PPC_FUNC_IMPL(__imp__sub_83BC9EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7488
	ctx.r3.s64 = ctx.r11.s64 + 7488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9F04"))) PPC_WEAK_FUNC(sub_83BC9F04);
PPC_FUNC_IMPL(__imp__sub_83BC9F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9F08"))) PPC_WEAK_FUNC(sub_83BC9F08);
PPC_FUNC_IMPL(__imp__sub_83BC9F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7496
	ctx.r3.s64 = ctx.r11.s64 + 7496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9F14"))) PPC_WEAK_FUNC(sub_83BC9F14);
PPC_FUNC_IMPL(__imp__sub_83BC9F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9F18"))) PPC_WEAK_FUNC(sub_83BC9F18);
PPC_FUNC_IMPL(__imp__sub_83BC9F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7504
	ctx.r3.s64 = ctx.r11.s64 + 7504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9F24"))) PPC_WEAK_FUNC(sub_83BC9F24);
PPC_FUNC_IMPL(__imp__sub_83BC9F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9F28"))) PPC_WEAK_FUNC(sub_83BC9F28);
PPC_FUNC_IMPL(__imp__sub_83BC9F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9F34"))) PPC_WEAK_FUNC(sub_83BC9F34);
PPC_FUNC_IMPL(__imp__sub_83BC9F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9F38"))) PPC_WEAK_FUNC(sub_83BC9F38);
PPC_FUNC_IMPL(__imp__sub_83BC9F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9F44"))) PPC_WEAK_FUNC(sub_83BC9F44);
PPC_FUNC_IMPL(__imp__sub_83BC9F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9F48"))) PPC_WEAK_FUNC(sub_83BC9F48);
PPC_FUNC_IMPL(__imp__sub_83BC9F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7528
	ctx.r3.s64 = ctx.r11.s64 + 7528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC9F54"))) PPC_WEAK_FUNC(sub_83BC9F54);
PPC_FUNC_IMPL(__imp__sub_83BC9F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9F58"))) PPC_WEAK_FUNC(sub_83BC9F58);
PPC_FUNC_IMPL(__imp__sub_83BC9F58) {
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
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// bl 0x83523120
	ctx.lr = 0x83BC9F70;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,7536
	ctx.r3.s64 = ctx.r10.s64 + 7536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC9F7C;
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

__attribute__((alias("__imp__sub_83BC9F8C"))) PPC_WEAK_FUNC(sub_83BC9F8C);
PPC_FUNC_IMPL(__imp__sub_83BC9F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC9F90"))) PPC_WEAK_FUNC(sub_83BC9F90);
PPC_FUNC_IMPL(__imp__sub_83BC9F90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5168
	ctx.r7.s64 = ctx.r8.s64 + -5168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5168);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5168(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5168, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC9FB8"))) PPC_WEAK_FUNC(sub_83BC9FB8);
PPC_FUNC_IMPL(__imp__sub_83BC9FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,11504
	ctx.r6.s64 = ctx.r7.s64 + 11504;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11432(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11432);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5168);
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
	// std r9,11504(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA000"))) PPC_WEAK_FUNC(sub_83BCA000);
PPC_FUNC_IMPL(__imp__sub_83BCA000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA00C"))) PPC_WEAK_FUNC(sub_83BCA00C);
PPC_FUNC_IMPL(__imp__sub_83BCA00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA010"))) PPC_WEAK_FUNC(sub_83BCA010);
PPC_FUNC_IMPL(__imp__sub_83BCA010) {
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
	// addi r3,r11,-5160
	ctx.r3.s64 = ctx.r11.s64 + -5160;
	// bl 0x8259af80
	ctx.lr = 0x83BCA028;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,7568
	ctx.r3.s64 = ctx.r10.s64 + 7568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA034;
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

__attribute__((alias("__imp__sub_83BCA044"))) PPC_WEAK_FUNC(sub_83BCA044);
PPC_FUNC_IMPL(__imp__sub_83BCA044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA048"))) PPC_WEAK_FUNC(sub_83BCA048);
PPC_FUNC_IMPL(__imp__sub_83BCA048) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5180
	ctx.r11.s64 = ctx.r8.s64 + -5180;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,11480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7560
	ctx.r3.s64 = ctx.r6.s64 + 7560;
	// stw r10,-5180(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5180, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA078"))) PPC_WEAK_FUNC(sub_83BCA078);
PPC_FUNC_IMPL(__imp__sub_83BCA078) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-20172
	ctx.r4.s64 = ctx.r11.s64 + -20172;
	// addi r3,r10,11528
	ctx.r3.s64 = ctx.r10.s64 + 11528;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BCA09C;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,7576
	ctx.r3.s64 = ctx.r9.s64 + 7576;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA0A8;
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

__attribute__((alias("__imp__sub_83BCA0B8"))) PPC_WEAK_FUNC(sub_83BCA0B8);
PPC_FUNC_IMPL(__imp__sub_83BCA0B8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-20048
	ctx.r4.s64 = ctx.r11.s64 + -20048;
	// addi r3,r10,11556
	ctx.r3.s64 = ctx.r10.s64 + 11556;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8259cc28
	ctx.lr = 0x83BCA0DC;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,7680
	ctx.r3.s64 = ctx.r9.s64 + 7680;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA0E8;
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

__attribute__((alias("__imp__sub_83BCA0F8"))) PPC_WEAK_FUNC(sub_83BCA0F8);
PPC_FUNC_IMPL(__imp__sub_83BCA0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7784
	ctx.r3.s64 = ctx.r11.s64 + 7784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA104"))) PPC_WEAK_FUNC(sub_83BCA104);
PPC_FUNC_IMPL(__imp__sub_83BCA104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA108"))) PPC_WEAK_FUNC(sub_83BCA108);
PPC_FUNC_IMPL(__imp__sub_83BCA108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7792
	ctx.r3.s64 = ctx.r11.s64 + 7792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA114"))) PPC_WEAK_FUNC(sub_83BCA114);
PPC_FUNC_IMPL(__imp__sub_83BCA114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA118"))) PPC_WEAK_FUNC(sub_83BCA118);
PPC_FUNC_IMPL(__imp__sub_83BCA118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7800
	ctx.r3.s64 = ctx.r11.s64 + 7800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA124"))) PPC_WEAK_FUNC(sub_83BCA124);
PPC_FUNC_IMPL(__imp__sub_83BCA124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA128"))) PPC_WEAK_FUNC(sub_83BCA128);
PPC_FUNC_IMPL(__imp__sub_83BCA128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7808
	ctx.r3.s64 = ctx.r11.s64 + 7808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA134"))) PPC_WEAK_FUNC(sub_83BCA134);
PPC_FUNC_IMPL(__imp__sub_83BCA134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA138"))) PPC_WEAK_FUNC(sub_83BCA138);
PPC_FUNC_IMPL(__imp__sub_83BCA138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7816
	ctx.r3.s64 = ctx.r11.s64 + 7816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA144"))) PPC_WEAK_FUNC(sub_83BCA144);
PPC_FUNC_IMPL(__imp__sub_83BCA144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA148"))) PPC_WEAK_FUNC(sub_83BCA148);
PPC_FUNC_IMPL(__imp__sub_83BCA148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7824
	ctx.r3.s64 = ctx.r11.s64 + 7824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA154"))) PPC_WEAK_FUNC(sub_83BCA154);
PPC_FUNC_IMPL(__imp__sub_83BCA154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA158"))) PPC_WEAK_FUNC(sub_83BCA158);
PPC_FUNC_IMPL(__imp__sub_83BCA158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7832
	ctx.r3.s64 = ctx.r11.s64 + 7832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA164"))) PPC_WEAK_FUNC(sub_83BCA164);
PPC_FUNC_IMPL(__imp__sub_83BCA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA168"))) PPC_WEAK_FUNC(sub_83BCA168);
PPC_FUNC_IMPL(__imp__sub_83BCA168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7840
	ctx.r3.s64 = ctx.r11.s64 + 7840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA174"))) PPC_WEAK_FUNC(sub_83BCA174);
PPC_FUNC_IMPL(__imp__sub_83BCA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA178"))) PPC_WEAK_FUNC(sub_83BCA178);
PPC_FUNC_IMPL(__imp__sub_83BCA178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7848
	ctx.r3.s64 = ctx.r11.s64 + 7848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA184"))) PPC_WEAK_FUNC(sub_83BCA184);
PPC_FUNC_IMPL(__imp__sub_83BCA184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA188"))) PPC_WEAK_FUNC(sub_83BCA188);
PPC_FUNC_IMPL(__imp__sub_83BCA188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7856
	ctx.r3.s64 = ctx.r11.s64 + 7856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA194"))) PPC_WEAK_FUNC(sub_83BCA194);
PPC_FUNC_IMPL(__imp__sub_83BCA194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA198"))) PPC_WEAK_FUNC(sub_83BCA198);
PPC_FUNC_IMPL(__imp__sub_83BCA198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7864
	ctx.r3.s64 = ctx.r11.s64 + 7864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA1A4"))) PPC_WEAK_FUNC(sub_83BCA1A4);
PPC_FUNC_IMPL(__imp__sub_83BCA1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA1A8"))) PPC_WEAK_FUNC(sub_83BCA1A8);
PPC_FUNC_IMPL(__imp__sub_83BCA1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7872
	ctx.r3.s64 = ctx.r11.s64 + 7872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA1B4"))) PPC_WEAK_FUNC(sub_83BCA1B4);
PPC_FUNC_IMPL(__imp__sub_83BCA1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA1B8"))) PPC_WEAK_FUNC(sub_83BCA1B8);
PPC_FUNC_IMPL(__imp__sub_83BCA1B8) {
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
	// addi r3,r11,-4816
	ctx.r3.s64 = ctx.r11.s64 + -4816;
	// bl 0x83523120
	ctx.lr = 0x83BCA1D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,7880
	ctx.r3.s64 = ctx.r10.s64 + 7880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA1DC;
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

__attribute__((alias("__imp__sub_83BCA1EC"))) PPC_WEAK_FUNC(sub_83BCA1EC);
PPC_FUNC_IMPL(__imp__sub_83BCA1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA1F0"))) PPC_WEAK_FUNC(sub_83BCA1F0);
PPC_FUNC_IMPL(__imp__sub_83BCA1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4800
	ctx.r7.s64 = ctx.r8.s64 + -4800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4800);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4800(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4800, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA218"))) PPC_WEAK_FUNC(sub_83BCA218);
PPC_FUNC_IMPL(__imp__sub_83BCA218) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,11688
	ctx.r6.s64 = ctx.r7.s64 + 11688;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11616(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11616);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4800(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4800);
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
	// std r9,11688(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11688, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA260"))) PPC_WEAK_FUNC(sub_83BCA260);
PPC_FUNC_IMPL(__imp__sub_83BCA260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA26C"))) PPC_WEAK_FUNC(sub_83BCA26C);
PPC_FUNC_IMPL(__imp__sub_83BCA26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA270"))) PPC_WEAK_FUNC(sub_83BCA270);
PPC_FUNC_IMPL(__imp__sub_83BCA270) {
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
	// addi r3,r11,-4792
	ctx.r3.s64 = ctx.r11.s64 + -4792;
	// bl 0x8259af80
	ctx.lr = 0x83BCA288;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,7912
	ctx.r3.s64 = ctx.r10.s64 + 7912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA294;
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

__attribute__((alias("__imp__sub_83BCA2A4"))) PPC_WEAK_FUNC(sub_83BCA2A4);
PPC_FUNC_IMPL(__imp__sub_83BCA2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA2A8"))) PPC_WEAK_FUNC(sub_83BCA2A8);
PPC_FUNC_IMPL(__imp__sub_83BCA2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4812
	ctx.r11.s64 = ctx.r8.s64 + -4812;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,11664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11664);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7904
	ctx.r3.s64 = ctx.r6.s64 + 7904;
	// stw r10,-4812(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4812, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA2D8"))) PPC_WEAK_FUNC(sub_83BCA2D8);
PPC_FUNC_IMPL(__imp__sub_83BCA2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7920
	ctx.r3.s64 = ctx.r11.s64 + 7920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA2E4"))) PPC_WEAK_FUNC(sub_83BCA2E4);
PPC_FUNC_IMPL(__imp__sub_83BCA2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA2E8"))) PPC_WEAK_FUNC(sub_83BCA2E8);
PPC_FUNC_IMPL(__imp__sub_83BCA2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7928
	ctx.r3.s64 = ctx.r11.s64 + 7928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA2F4"))) PPC_WEAK_FUNC(sub_83BCA2F4);
PPC_FUNC_IMPL(__imp__sub_83BCA2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA2F8"))) PPC_WEAK_FUNC(sub_83BCA2F8);
PPC_FUNC_IMPL(__imp__sub_83BCA2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7936
	ctx.r3.s64 = ctx.r11.s64 + 7936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA304"))) PPC_WEAK_FUNC(sub_83BCA304);
PPC_FUNC_IMPL(__imp__sub_83BCA304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA308"))) PPC_WEAK_FUNC(sub_83BCA308);
PPC_FUNC_IMPL(__imp__sub_83BCA308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7944
	ctx.r3.s64 = ctx.r11.s64 + 7944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA314"))) PPC_WEAK_FUNC(sub_83BCA314);
PPC_FUNC_IMPL(__imp__sub_83BCA314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA318"))) PPC_WEAK_FUNC(sub_83BCA318);
PPC_FUNC_IMPL(__imp__sub_83BCA318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7952
	ctx.r3.s64 = ctx.r11.s64 + 7952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA324"))) PPC_WEAK_FUNC(sub_83BCA324);
PPC_FUNC_IMPL(__imp__sub_83BCA324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA328"))) PPC_WEAK_FUNC(sub_83BCA328);
PPC_FUNC_IMPL(__imp__sub_83BCA328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA334"))) PPC_WEAK_FUNC(sub_83BCA334);
PPC_FUNC_IMPL(__imp__sub_83BCA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA338"))) PPC_WEAK_FUNC(sub_83BCA338);
PPC_FUNC_IMPL(__imp__sub_83BCA338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7968
	ctx.r3.s64 = ctx.r11.s64 + 7968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA344"))) PPC_WEAK_FUNC(sub_83BCA344);
PPC_FUNC_IMPL(__imp__sub_83BCA344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA348"))) PPC_WEAK_FUNC(sub_83BCA348);
PPC_FUNC_IMPL(__imp__sub_83BCA348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7976
	ctx.r3.s64 = ctx.r11.s64 + 7976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA354"))) PPC_WEAK_FUNC(sub_83BCA354);
PPC_FUNC_IMPL(__imp__sub_83BCA354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA358"))) PPC_WEAK_FUNC(sub_83BCA358);
PPC_FUNC_IMPL(__imp__sub_83BCA358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7984
	ctx.r3.s64 = ctx.r11.s64 + 7984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA364"))) PPC_WEAK_FUNC(sub_83BCA364);
PPC_FUNC_IMPL(__imp__sub_83BCA364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA368"))) PPC_WEAK_FUNC(sub_83BCA368);
PPC_FUNC_IMPL(__imp__sub_83BCA368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,7992
	ctx.r3.s64 = ctx.r11.s64 + 7992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA374"))) PPC_WEAK_FUNC(sub_83BCA374);
PPC_FUNC_IMPL(__imp__sub_83BCA374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA378"))) PPC_WEAK_FUNC(sub_83BCA378);
PPC_FUNC_IMPL(__imp__sub_83BCA378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8000
	ctx.r3.s64 = ctx.r11.s64 + 8000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA384"))) PPC_WEAK_FUNC(sub_83BCA384);
PPC_FUNC_IMPL(__imp__sub_83BCA384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA388"))) PPC_WEAK_FUNC(sub_83BCA388);
PPC_FUNC_IMPL(__imp__sub_83BCA388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8008
	ctx.r3.s64 = ctx.r11.s64 + 8008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA394"))) PPC_WEAK_FUNC(sub_83BCA394);
PPC_FUNC_IMPL(__imp__sub_83BCA394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA398"))) PPC_WEAK_FUNC(sub_83BCA398);
PPC_FUNC_IMPL(__imp__sub_83BCA398) {
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
	// addi r3,r11,-4448
	ctx.r3.s64 = ctx.r11.s64 + -4448;
	// bl 0x83523120
	ctx.lr = 0x83BCA3B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,8016
	ctx.r3.s64 = ctx.r10.s64 + 8016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA3BC;
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

__attribute__((alias("__imp__sub_83BCA3CC"))) PPC_WEAK_FUNC(sub_83BCA3CC);
PPC_FUNC_IMPL(__imp__sub_83BCA3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA3D0"))) PPC_WEAK_FUNC(sub_83BCA3D0);
PPC_FUNC_IMPL(__imp__sub_83BCA3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4432
	ctx.r7.s64 = ctx.r8.s64 + -4432;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4432(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4432);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4432(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4432, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA3F8"))) PPC_WEAK_FUNC(sub_83BCA3F8);
PPC_FUNC_IMPL(__imp__sub_83BCA3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,11816
	ctx.r6.s64 = ctx.r7.s64 + 11816;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11744(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11744);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4432(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4432);
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
	// std r9,11816(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11816, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA440"))) PPC_WEAK_FUNC(sub_83BCA440);
PPC_FUNC_IMPL(__imp__sub_83BCA440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8032
	ctx.r3.s64 = ctx.r11.s64 + 8032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA44C"))) PPC_WEAK_FUNC(sub_83BCA44C);
PPC_FUNC_IMPL(__imp__sub_83BCA44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA450"))) PPC_WEAK_FUNC(sub_83BCA450);
PPC_FUNC_IMPL(__imp__sub_83BCA450) {
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
	// addi r3,r11,-4424
	ctx.r3.s64 = ctx.r11.s64 + -4424;
	// bl 0x8259af80
	ctx.lr = 0x83BCA468;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,8048
	ctx.r3.s64 = ctx.r10.s64 + 8048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA474;
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

__attribute__((alias("__imp__sub_83BCA484"))) PPC_WEAK_FUNC(sub_83BCA484);
PPC_FUNC_IMPL(__imp__sub_83BCA484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA488"))) PPC_WEAK_FUNC(sub_83BCA488);
PPC_FUNC_IMPL(__imp__sub_83BCA488) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4444
	ctx.r11.s64 = ctx.r8.s64 + -4444;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,11792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11792);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8040
	ctx.r3.s64 = ctx.r6.s64 + 8040;
	// stw r10,-4444(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4444, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA4B8"))) PPC_WEAK_FUNC(sub_83BCA4B8);
PPC_FUNC_IMPL(__imp__sub_83BCA4B8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-17464
	ctx.r4.s64 = ctx.r11.s64 + -17464;
	// addi r3,r10,11840
	ctx.r3.s64 = ctx.r10.s64 + 11840;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BCA4DC;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,8056
	ctx.r3.s64 = ctx.r9.s64 + 8056;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA4E8;
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

__attribute__((alias("__imp__sub_83BCA4F8"))) PPC_WEAK_FUNC(sub_83BCA4F8);
PPC_FUNC_IMPL(__imp__sub_83BCA4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA504"))) PPC_WEAK_FUNC(sub_83BCA504);
PPC_FUNC_IMPL(__imp__sub_83BCA504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA508"))) PPC_WEAK_FUNC(sub_83BCA508);
PPC_FUNC_IMPL(__imp__sub_83BCA508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8168
	ctx.r3.s64 = ctx.r11.s64 + 8168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA514"))) PPC_WEAK_FUNC(sub_83BCA514);
PPC_FUNC_IMPL(__imp__sub_83BCA514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA518"))) PPC_WEAK_FUNC(sub_83BCA518);
PPC_FUNC_IMPL(__imp__sub_83BCA518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8176
	ctx.r3.s64 = ctx.r11.s64 + 8176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA524"))) PPC_WEAK_FUNC(sub_83BCA524);
PPC_FUNC_IMPL(__imp__sub_83BCA524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA528"))) PPC_WEAK_FUNC(sub_83BCA528);
PPC_FUNC_IMPL(__imp__sub_83BCA528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8184
	ctx.r3.s64 = ctx.r11.s64 + 8184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA534"))) PPC_WEAK_FUNC(sub_83BCA534);
PPC_FUNC_IMPL(__imp__sub_83BCA534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA538"))) PPC_WEAK_FUNC(sub_83BCA538);
PPC_FUNC_IMPL(__imp__sub_83BCA538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8192
	ctx.r3.s64 = ctx.r11.s64 + 8192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA544"))) PPC_WEAK_FUNC(sub_83BCA544);
PPC_FUNC_IMPL(__imp__sub_83BCA544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA548"))) PPC_WEAK_FUNC(sub_83BCA548);
PPC_FUNC_IMPL(__imp__sub_83BCA548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8200
	ctx.r3.s64 = ctx.r11.s64 + 8200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA554"))) PPC_WEAK_FUNC(sub_83BCA554);
PPC_FUNC_IMPL(__imp__sub_83BCA554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA558"))) PPC_WEAK_FUNC(sub_83BCA558);
PPC_FUNC_IMPL(__imp__sub_83BCA558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8208
	ctx.r3.s64 = ctx.r11.s64 + 8208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA564"))) PPC_WEAK_FUNC(sub_83BCA564);
PPC_FUNC_IMPL(__imp__sub_83BCA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA568"))) PPC_WEAK_FUNC(sub_83BCA568);
PPC_FUNC_IMPL(__imp__sub_83BCA568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8216
	ctx.r3.s64 = ctx.r11.s64 + 8216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA574"))) PPC_WEAK_FUNC(sub_83BCA574);
PPC_FUNC_IMPL(__imp__sub_83BCA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA578"))) PPC_WEAK_FUNC(sub_83BCA578);
PPC_FUNC_IMPL(__imp__sub_83BCA578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8224
	ctx.r3.s64 = ctx.r11.s64 + 8224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA584"))) PPC_WEAK_FUNC(sub_83BCA584);
PPC_FUNC_IMPL(__imp__sub_83BCA584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA588"))) PPC_WEAK_FUNC(sub_83BCA588);
PPC_FUNC_IMPL(__imp__sub_83BCA588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8232
	ctx.r3.s64 = ctx.r11.s64 + 8232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA594"))) PPC_WEAK_FUNC(sub_83BCA594);
PPC_FUNC_IMPL(__imp__sub_83BCA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA598"))) PPC_WEAK_FUNC(sub_83BCA598);
PPC_FUNC_IMPL(__imp__sub_83BCA598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8240
	ctx.r3.s64 = ctx.r11.s64 + 8240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA5A4"))) PPC_WEAK_FUNC(sub_83BCA5A4);
PPC_FUNC_IMPL(__imp__sub_83BCA5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA5A8"))) PPC_WEAK_FUNC(sub_83BCA5A8);
PPC_FUNC_IMPL(__imp__sub_83BCA5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8248
	ctx.r3.s64 = ctx.r11.s64 + 8248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA5B4"))) PPC_WEAK_FUNC(sub_83BCA5B4);
PPC_FUNC_IMPL(__imp__sub_83BCA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA5B8"))) PPC_WEAK_FUNC(sub_83BCA5B8);
PPC_FUNC_IMPL(__imp__sub_83BCA5B8) {
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
	// addi r3,r11,-4080
	ctx.r3.s64 = ctx.r11.s64 + -4080;
	// bl 0x83523120
	ctx.lr = 0x83BCA5D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,8256
	ctx.r3.s64 = ctx.r10.s64 + 8256;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA5DC;
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

__attribute__((alias("__imp__sub_83BCA5EC"))) PPC_WEAK_FUNC(sub_83BCA5EC);
PPC_FUNC_IMPL(__imp__sub_83BCA5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA5F0"))) PPC_WEAK_FUNC(sub_83BCA5F0);
PPC_FUNC_IMPL(__imp__sub_83BCA5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4064
	ctx.r7.s64 = ctx.r8.s64 + -4064;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4064(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4064);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4064(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4064, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA618"))) PPC_WEAK_FUNC(sub_83BCA618);
PPC_FUNC_IMPL(__imp__sub_83BCA618) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,11988
	ctx.r6.s64 = ctx.r7.s64 + 11988;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11916(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11916);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4064(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4064);
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
	// std r9,11988(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11988, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA660"))) PPC_WEAK_FUNC(sub_83BCA660);
PPC_FUNC_IMPL(__imp__sub_83BCA660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8272
	ctx.r3.s64 = ctx.r11.s64 + 8272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA66C"))) PPC_WEAK_FUNC(sub_83BCA66C);
PPC_FUNC_IMPL(__imp__sub_83BCA66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA670"))) PPC_WEAK_FUNC(sub_83BCA670);
PPC_FUNC_IMPL(__imp__sub_83BCA670) {
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
	// addi r3,r11,-4056
	ctx.r3.s64 = ctx.r11.s64 + -4056;
	// bl 0x8259af80
	ctx.lr = 0x83BCA688;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,8288
	ctx.r3.s64 = ctx.r10.s64 + 8288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA694;
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

__attribute__((alias("__imp__sub_83BCA6A4"))) PPC_WEAK_FUNC(sub_83BCA6A4);
PPC_FUNC_IMPL(__imp__sub_83BCA6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA6A8"))) PPC_WEAK_FUNC(sub_83BCA6A8);
PPC_FUNC_IMPL(__imp__sub_83BCA6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4076
	ctx.r11.s64 = ctx.r8.s64 + -4076;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,11964(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11964);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8280
	ctx.r3.s64 = ctx.r6.s64 + 8280;
	// stw r10,-4076(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4076, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA6D8"))) PPC_WEAK_FUNC(sub_83BCA6D8);
PPC_FUNC_IMPL(__imp__sub_83BCA6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA6E4"))) PPC_WEAK_FUNC(sub_83BCA6E4);
PPC_FUNC_IMPL(__imp__sub_83BCA6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA6E8"))) PPC_WEAK_FUNC(sub_83BCA6E8);
PPC_FUNC_IMPL(__imp__sub_83BCA6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8304
	ctx.r3.s64 = ctx.r11.s64 + 8304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA6F4"))) PPC_WEAK_FUNC(sub_83BCA6F4);
PPC_FUNC_IMPL(__imp__sub_83BCA6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA6F8"))) PPC_WEAK_FUNC(sub_83BCA6F8);
PPC_FUNC_IMPL(__imp__sub_83BCA6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8312
	ctx.r3.s64 = ctx.r11.s64 + 8312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA704"))) PPC_WEAK_FUNC(sub_83BCA704);
PPC_FUNC_IMPL(__imp__sub_83BCA704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA708"))) PPC_WEAK_FUNC(sub_83BCA708);
PPC_FUNC_IMPL(__imp__sub_83BCA708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8320
	ctx.r3.s64 = ctx.r11.s64 + 8320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA714"))) PPC_WEAK_FUNC(sub_83BCA714);
PPC_FUNC_IMPL(__imp__sub_83BCA714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA718"))) PPC_WEAK_FUNC(sub_83BCA718);
PPC_FUNC_IMPL(__imp__sub_83BCA718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8328
	ctx.r3.s64 = ctx.r11.s64 + 8328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA724"))) PPC_WEAK_FUNC(sub_83BCA724);
PPC_FUNC_IMPL(__imp__sub_83BCA724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA728"))) PPC_WEAK_FUNC(sub_83BCA728);
PPC_FUNC_IMPL(__imp__sub_83BCA728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8336
	ctx.r3.s64 = ctx.r11.s64 + 8336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA734"))) PPC_WEAK_FUNC(sub_83BCA734);
PPC_FUNC_IMPL(__imp__sub_83BCA734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA738"))) PPC_WEAK_FUNC(sub_83BCA738);
PPC_FUNC_IMPL(__imp__sub_83BCA738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8344
	ctx.r3.s64 = ctx.r11.s64 + 8344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA744"))) PPC_WEAK_FUNC(sub_83BCA744);
PPC_FUNC_IMPL(__imp__sub_83BCA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA748"))) PPC_WEAK_FUNC(sub_83BCA748);
PPC_FUNC_IMPL(__imp__sub_83BCA748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8352
	ctx.r3.s64 = ctx.r11.s64 + 8352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA754"))) PPC_WEAK_FUNC(sub_83BCA754);
PPC_FUNC_IMPL(__imp__sub_83BCA754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA758"))) PPC_WEAK_FUNC(sub_83BCA758);
PPC_FUNC_IMPL(__imp__sub_83BCA758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8360
	ctx.r3.s64 = ctx.r11.s64 + 8360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA764"))) PPC_WEAK_FUNC(sub_83BCA764);
PPC_FUNC_IMPL(__imp__sub_83BCA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA768"))) PPC_WEAK_FUNC(sub_83BCA768);
PPC_FUNC_IMPL(__imp__sub_83BCA768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8368
	ctx.r3.s64 = ctx.r11.s64 + 8368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA774"))) PPC_WEAK_FUNC(sub_83BCA774);
PPC_FUNC_IMPL(__imp__sub_83BCA774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA778"))) PPC_WEAK_FUNC(sub_83BCA778);
PPC_FUNC_IMPL(__imp__sub_83BCA778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA784"))) PPC_WEAK_FUNC(sub_83BCA784);
PPC_FUNC_IMPL(__imp__sub_83BCA784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA788"))) PPC_WEAK_FUNC(sub_83BCA788);
PPC_FUNC_IMPL(__imp__sub_83BCA788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8384
	ctx.r3.s64 = ctx.r11.s64 + 8384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA794"))) PPC_WEAK_FUNC(sub_83BCA794);
PPC_FUNC_IMPL(__imp__sub_83BCA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA798"))) PPC_WEAK_FUNC(sub_83BCA798);
PPC_FUNC_IMPL(__imp__sub_83BCA798) {
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
	// addi r3,r11,-3712
	ctx.r3.s64 = ctx.r11.s64 + -3712;
	// bl 0x83523120
	ctx.lr = 0x83BCA7B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,8392
	ctx.r3.s64 = ctx.r10.s64 + 8392;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA7BC;
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

__attribute__((alias("__imp__sub_83BCA7CC"))) PPC_WEAK_FUNC(sub_83BCA7CC);
PPC_FUNC_IMPL(__imp__sub_83BCA7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA7D0"))) PPC_WEAK_FUNC(sub_83BCA7D0);
PPC_FUNC_IMPL(__imp__sub_83BCA7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3696
	ctx.r7.s64 = ctx.r8.s64 + -3696;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3696(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3696);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3696(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3696, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA7F8"))) PPC_WEAK_FUNC(sub_83BCA7F8);
PPC_FUNC_IMPL(__imp__sub_83BCA7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,12144
	ctx.r6.s64 = ctx.r7.s64 + 12144;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12072(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12072);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3696(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3696);
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
	// std r9,12144(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12144, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA840"))) PPC_WEAK_FUNC(sub_83BCA840);
PPC_FUNC_IMPL(__imp__sub_83BCA840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8408
	ctx.r3.s64 = ctx.r11.s64 + 8408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA84C"))) PPC_WEAK_FUNC(sub_83BCA84C);
PPC_FUNC_IMPL(__imp__sub_83BCA84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA850"))) PPC_WEAK_FUNC(sub_83BCA850);
PPC_FUNC_IMPL(__imp__sub_83BCA850) {
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
	// addi r3,r11,-3688
	ctx.r3.s64 = ctx.r11.s64 + -3688;
	// bl 0x8259af80
	ctx.lr = 0x83BCA868;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,8424
	ctx.r3.s64 = ctx.r10.s64 + 8424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA874;
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

__attribute__((alias("__imp__sub_83BCA884"))) PPC_WEAK_FUNC(sub_83BCA884);
PPC_FUNC_IMPL(__imp__sub_83BCA884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA888"))) PPC_WEAK_FUNC(sub_83BCA888);
PPC_FUNC_IMPL(__imp__sub_83BCA888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3708
	ctx.r11.s64 = ctx.r8.s64 + -3708;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,12120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12120);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8416
	ctx.r3.s64 = ctx.r6.s64 + 8416;
	// stw r10,-3708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3708, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA8B8"))) PPC_WEAK_FUNC(sub_83BCA8B8);
PPC_FUNC_IMPL(__imp__sub_83BCA8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8432
	ctx.r3.s64 = ctx.r11.s64 + 8432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA8C4"))) PPC_WEAK_FUNC(sub_83BCA8C4);
PPC_FUNC_IMPL(__imp__sub_83BCA8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA8C8"))) PPC_WEAK_FUNC(sub_83BCA8C8);
PPC_FUNC_IMPL(__imp__sub_83BCA8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8440
	ctx.r3.s64 = ctx.r11.s64 + 8440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA8D4"))) PPC_WEAK_FUNC(sub_83BCA8D4);
PPC_FUNC_IMPL(__imp__sub_83BCA8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA8D8"))) PPC_WEAK_FUNC(sub_83BCA8D8);
PPC_FUNC_IMPL(__imp__sub_83BCA8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8448
	ctx.r3.s64 = ctx.r11.s64 + 8448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA8E4"))) PPC_WEAK_FUNC(sub_83BCA8E4);
PPC_FUNC_IMPL(__imp__sub_83BCA8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA8E8"))) PPC_WEAK_FUNC(sub_83BCA8E8);
PPC_FUNC_IMPL(__imp__sub_83BCA8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8456
	ctx.r3.s64 = ctx.r11.s64 + 8456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA8F4"))) PPC_WEAK_FUNC(sub_83BCA8F4);
PPC_FUNC_IMPL(__imp__sub_83BCA8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA8F8"))) PPC_WEAK_FUNC(sub_83BCA8F8);
PPC_FUNC_IMPL(__imp__sub_83BCA8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8464
	ctx.r3.s64 = ctx.r11.s64 + 8464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA904"))) PPC_WEAK_FUNC(sub_83BCA904);
PPC_FUNC_IMPL(__imp__sub_83BCA904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA908"))) PPC_WEAK_FUNC(sub_83BCA908);
PPC_FUNC_IMPL(__imp__sub_83BCA908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8472
	ctx.r3.s64 = ctx.r11.s64 + 8472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA914"))) PPC_WEAK_FUNC(sub_83BCA914);
PPC_FUNC_IMPL(__imp__sub_83BCA914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA918"))) PPC_WEAK_FUNC(sub_83BCA918);
PPC_FUNC_IMPL(__imp__sub_83BCA918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8480
	ctx.r3.s64 = ctx.r11.s64 + 8480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA924"))) PPC_WEAK_FUNC(sub_83BCA924);
PPC_FUNC_IMPL(__imp__sub_83BCA924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA928"))) PPC_WEAK_FUNC(sub_83BCA928);
PPC_FUNC_IMPL(__imp__sub_83BCA928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8488
	ctx.r3.s64 = ctx.r11.s64 + 8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA934"))) PPC_WEAK_FUNC(sub_83BCA934);
PPC_FUNC_IMPL(__imp__sub_83BCA934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA938"))) PPC_WEAK_FUNC(sub_83BCA938);
PPC_FUNC_IMPL(__imp__sub_83BCA938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8496
	ctx.r3.s64 = ctx.r11.s64 + 8496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA944"))) PPC_WEAK_FUNC(sub_83BCA944);
PPC_FUNC_IMPL(__imp__sub_83BCA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA948"))) PPC_WEAK_FUNC(sub_83BCA948);
PPC_FUNC_IMPL(__imp__sub_83BCA948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8504
	ctx.r3.s64 = ctx.r11.s64 + 8504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA954"))) PPC_WEAK_FUNC(sub_83BCA954);
PPC_FUNC_IMPL(__imp__sub_83BCA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA958"))) PPC_WEAK_FUNC(sub_83BCA958);
PPC_FUNC_IMPL(__imp__sub_83BCA958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8512
	ctx.r3.s64 = ctx.r11.s64 + 8512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA964"))) PPC_WEAK_FUNC(sub_83BCA964);
PPC_FUNC_IMPL(__imp__sub_83BCA964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA968"))) PPC_WEAK_FUNC(sub_83BCA968);
PPC_FUNC_IMPL(__imp__sub_83BCA968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8520
	ctx.r3.s64 = ctx.r11.s64 + 8520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCA974"))) PPC_WEAK_FUNC(sub_83BCA974);
PPC_FUNC_IMPL(__imp__sub_83BCA974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA978"))) PPC_WEAK_FUNC(sub_83BCA978);
PPC_FUNC_IMPL(__imp__sub_83BCA978) {
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
	// addi r3,r11,-3344
	ctx.r3.s64 = ctx.r11.s64 + -3344;
	// bl 0x83523120
	ctx.lr = 0x83BCA990;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,8528
	ctx.r3.s64 = ctx.r10.s64 + 8528;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCA99C;
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

__attribute__((alias("__imp__sub_83BCA9AC"))) PPC_WEAK_FUNC(sub_83BCA9AC);
PPC_FUNC_IMPL(__imp__sub_83BCA9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCA9B0"))) PPC_WEAK_FUNC(sub_83BCA9B0);
PPC_FUNC_IMPL(__imp__sub_83BCA9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3328
	ctx.r7.s64 = ctx.r8.s64 + -3328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3328);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3328(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3328, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCA9D8"))) PPC_WEAK_FUNC(sub_83BCA9D8);
PPC_FUNC_IMPL(__imp__sub_83BCA9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,12272
	ctx.r6.s64 = ctx.r7.s64 + 12272;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12200(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12200);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3328);
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
	// std r9,12272(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12272, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCAA20"))) PPC_WEAK_FUNC(sub_83BCAA20);
PPC_FUNC_IMPL(__imp__sub_83BCAA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8544
	ctx.r3.s64 = ctx.r11.s64 + 8544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCAA2C"))) PPC_WEAK_FUNC(sub_83BCAA2C);
PPC_FUNC_IMPL(__imp__sub_83BCAA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCAA30"))) PPC_WEAK_FUNC(sub_83BCAA30);
PPC_FUNC_IMPL(__imp__sub_83BCAA30) {
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
	// addi r3,r11,-3320
	ctx.r3.s64 = ctx.r11.s64 + -3320;
	// bl 0x8259af80
	ctx.lr = 0x83BCAA48;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,8560
	ctx.r3.s64 = ctx.r10.s64 + 8560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCAA54;
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

__attribute__((alias("__imp__sub_83BCAA64"))) PPC_WEAK_FUNC(sub_83BCAA64);
PPC_FUNC_IMPL(__imp__sub_83BCAA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCAA68"))) PPC_WEAK_FUNC(sub_83BCAA68);
PPC_FUNC_IMPL(__imp__sub_83BCAA68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3340
	ctx.r11.s64 = ctx.r8.s64 + -3340;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,12248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12248);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8552
	ctx.r3.s64 = ctx.r6.s64 + 8552;
	// stw r10,-3340(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3340, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCAA98"))) PPC_WEAK_FUNC(sub_83BCAA98);
PPC_FUNC_IMPL(__imp__sub_83BCAA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8568
	ctx.r3.s64 = ctx.r11.s64 + 8568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCAAA4"))) PPC_WEAK_FUNC(sub_83BCAAA4);
PPC_FUNC_IMPL(__imp__sub_83BCAAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCAAA8"))) PPC_WEAK_FUNC(sub_83BCAAA8);
PPC_FUNC_IMPL(__imp__sub_83BCAAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8576
	ctx.r3.s64 = ctx.r11.s64 + 8576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCAAB4"))) PPC_WEAK_FUNC(sub_83BCAAB4);
PPC_FUNC_IMPL(__imp__sub_83BCAAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCAAB8"))) PPC_WEAK_FUNC(sub_83BCAAB8);
PPC_FUNC_IMPL(__imp__sub_83BCAAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8584
	ctx.r3.s64 = ctx.r11.s64 + 8584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCAAC4"))) PPC_WEAK_FUNC(sub_83BCAAC4);
PPC_FUNC_IMPL(__imp__sub_83BCAAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCAAC8"))) PPC_WEAK_FUNC(sub_83BCAAC8);
PPC_FUNC_IMPL(__imp__sub_83BCAAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCAAD4"))) PPC_WEAK_FUNC(sub_83BCAAD4);
PPC_FUNC_IMPL(__imp__sub_83BCAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

