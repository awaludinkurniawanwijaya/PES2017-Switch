#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BC3B44"))) PPC_WEAK_FUNC(sub_83BC3B44);
PPC_FUNC_IMPL(__imp__sub_83BC3B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3B48"))) PPC_WEAK_FUNC(sub_83BC3B48);
PPC_FUNC_IMPL(__imp__sub_83BC3B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-944
	ctx.r3.s64 = ctx.r11.s64 + -944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3B54"))) PPC_WEAK_FUNC(sub_83BC3B54);
PPC_FUNC_IMPL(__imp__sub_83BC3B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3B58"))) PPC_WEAK_FUNC(sub_83BC3B58);
PPC_FUNC_IMPL(__imp__sub_83BC3B58) {
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
	// addi r3,r11,-23248
	ctx.r3.s64 = ctx.r11.s64 + -23248;
	// bl 0x83523120
	ctx.lr = 0x83BC3B70;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-936
	ctx.r3.s64 = ctx.r10.s64 + -936;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3B7C;
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

__attribute__((alias("__imp__sub_83BC3B8C"))) PPC_WEAK_FUNC(sub_83BC3B8C);
PPC_FUNC_IMPL(__imp__sub_83BC3B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3B90"))) PPC_WEAK_FUNC(sub_83BC3B90);
PPC_FUNC_IMPL(__imp__sub_83BC3B90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23232
	ctx.r7.s64 = ctx.r8.s64 + -23232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3BB8"))) PPC_WEAK_FUNC(sub_83BC3BB8);
PPC_FUNC_IMPL(__imp__sub_83BC3BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,3644
	ctx.r6.s64 = ctx.r7.s64 + 3644;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3572(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3572);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23232);
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
	// std r9,3644(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3644, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3C00"))) PPC_WEAK_FUNC(sub_83BC3C00);
PPC_FUNC_IMPL(__imp__sub_83BC3C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-920
	ctx.r3.s64 = ctx.r11.s64 + -920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3C0C"))) PPC_WEAK_FUNC(sub_83BC3C0C);
PPC_FUNC_IMPL(__imp__sub_83BC3C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3C10"))) PPC_WEAK_FUNC(sub_83BC3C10);
PPC_FUNC_IMPL(__imp__sub_83BC3C10) {
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
	// addi r3,r11,-23224
	ctx.r3.s64 = ctx.r11.s64 + -23224;
	// bl 0x8259af80
	ctx.lr = 0x83BC3C28;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-904
	ctx.r3.s64 = ctx.r10.s64 + -904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3C34;
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

__attribute__((alias("__imp__sub_83BC3C44"))) PPC_WEAK_FUNC(sub_83BC3C44);
PPC_FUNC_IMPL(__imp__sub_83BC3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3C48"))) PPC_WEAK_FUNC(sub_83BC3C48);
PPC_FUNC_IMPL(__imp__sub_83BC3C48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23244
	ctx.r11.s64 = ctx.r8.s64 + -23244;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,3620(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3620);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-912
	ctx.r3.s64 = ctx.r6.s64 + -912;
	// stw r10,-23244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3C78"))) PPC_WEAK_FUNC(sub_83BC3C78);
PPC_FUNC_IMPL(__imp__sub_83BC3C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-896
	ctx.r3.s64 = ctx.r11.s64 + -896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3C84"))) PPC_WEAK_FUNC(sub_83BC3C84);
PPC_FUNC_IMPL(__imp__sub_83BC3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3C88"))) PPC_WEAK_FUNC(sub_83BC3C88);
PPC_FUNC_IMPL(__imp__sub_83BC3C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-888
	ctx.r3.s64 = ctx.r11.s64 + -888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3C94"))) PPC_WEAK_FUNC(sub_83BC3C94);
PPC_FUNC_IMPL(__imp__sub_83BC3C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3C98"))) PPC_WEAK_FUNC(sub_83BC3C98);
PPC_FUNC_IMPL(__imp__sub_83BC3C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-880
	ctx.r3.s64 = ctx.r11.s64 + -880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3CA4"))) PPC_WEAK_FUNC(sub_83BC3CA4);
PPC_FUNC_IMPL(__imp__sub_83BC3CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3CA8"))) PPC_WEAK_FUNC(sub_83BC3CA8);
PPC_FUNC_IMPL(__imp__sub_83BC3CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-872
	ctx.r3.s64 = ctx.r11.s64 + -872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3CB4"))) PPC_WEAK_FUNC(sub_83BC3CB4);
PPC_FUNC_IMPL(__imp__sub_83BC3CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3CB8"))) PPC_WEAK_FUNC(sub_83BC3CB8);
PPC_FUNC_IMPL(__imp__sub_83BC3CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-864
	ctx.r3.s64 = ctx.r11.s64 + -864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3CC4"))) PPC_WEAK_FUNC(sub_83BC3CC4);
PPC_FUNC_IMPL(__imp__sub_83BC3CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3CC8"))) PPC_WEAK_FUNC(sub_83BC3CC8);
PPC_FUNC_IMPL(__imp__sub_83BC3CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-856
	ctx.r3.s64 = ctx.r11.s64 + -856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3CD4"))) PPC_WEAK_FUNC(sub_83BC3CD4);
PPC_FUNC_IMPL(__imp__sub_83BC3CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3CD8"))) PPC_WEAK_FUNC(sub_83BC3CD8);
PPC_FUNC_IMPL(__imp__sub_83BC3CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-848
	ctx.r3.s64 = ctx.r11.s64 + -848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3CE4"))) PPC_WEAK_FUNC(sub_83BC3CE4);
PPC_FUNC_IMPL(__imp__sub_83BC3CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3CE8"))) PPC_WEAK_FUNC(sub_83BC3CE8);
PPC_FUNC_IMPL(__imp__sub_83BC3CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-840
	ctx.r3.s64 = ctx.r11.s64 + -840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3CF4"))) PPC_WEAK_FUNC(sub_83BC3CF4);
PPC_FUNC_IMPL(__imp__sub_83BC3CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3CF8"))) PPC_WEAK_FUNC(sub_83BC3CF8);
PPC_FUNC_IMPL(__imp__sub_83BC3CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3D04"))) PPC_WEAK_FUNC(sub_83BC3D04);
PPC_FUNC_IMPL(__imp__sub_83BC3D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3D08"))) PPC_WEAK_FUNC(sub_83BC3D08);
PPC_FUNC_IMPL(__imp__sub_83BC3D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-824
	ctx.r3.s64 = ctx.r11.s64 + -824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3D14"))) PPC_WEAK_FUNC(sub_83BC3D14);
PPC_FUNC_IMPL(__imp__sub_83BC3D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3D18"))) PPC_WEAK_FUNC(sub_83BC3D18);
PPC_FUNC_IMPL(__imp__sub_83BC3D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-816
	ctx.r3.s64 = ctx.r11.s64 + -816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3D24"))) PPC_WEAK_FUNC(sub_83BC3D24);
PPC_FUNC_IMPL(__imp__sub_83BC3D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3D28"))) PPC_WEAK_FUNC(sub_83BC3D28);
PPC_FUNC_IMPL(__imp__sub_83BC3D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-808
	ctx.r3.s64 = ctx.r11.s64 + -808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3D34"))) PPC_WEAK_FUNC(sub_83BC3D34);
PPC_FUNC_IMPL(__imp__sub_83BC3D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3D38"))) PPC_WEAK_FUNC(sub_83BC3D38);
PPC_FUNC_IMPL(__imp__sub_83BC3D38) {
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
	// addi r3,r11,-22880
	ctx.r3.s64 = ctx.r11.s64 + -22880;
	// bl 0x83523120
	ctx.lr = 0x83BC3D50;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-800
	ctx.r3.s64 = ctx.r10.s64 + -800;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3D5C;
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

__attribute__((alias("__imp__sub_83BC3D6C"))) PPC_WEAK_FUNC(sub_83BC3D6C);
PPC_FUNC_IMPL(__imp__sub_83BC3D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3D70"))) PPC_WEAK_FUNC(sub_83BC3D70);
PPC_FUNC_IMPL(__imp__sub_83BC3D70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22864
	ctx.r7.s64 = ctx.r8.s64 + -22864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22864(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3D98"))) PPC_WEAK_FUNC(sub_83BC3D98);
PPC_FUNC_IMPL(__imp__sub_83BC3D98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,3780
	ctx.r6.s64 = ctx.r7.s64 + 3780;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3708(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3708);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22864);
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
	// std r9,3780(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3780, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3DE0"))) PPC_WEAK_FUNC(sub_83BC3DE0);
PPC_FUNC_IMPL(__imp__sub_83BC3DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-784
	ctx.r3.s64 = ctx.r11.s64 + -784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3DEC"))) PPC_WEAK_FUNC(sub_83BC3DEC);
PPC_FUNC_IMPL(__imp__sub_83BC3DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3DF0"))) PPC_WEAK_FUNC(sub_83BC3DF0);
PPC_FUNC_IMPL(__imp__sub_83BC3DF0) {
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
	// addi r3,r11,-22856
	ctx.r3.s64 = ctx.r11.s64 + -22856;
	// bl 0x8259af80
	ctx.lr = 0x83BC3E08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-768
	ctx.r3.s64 = ctx.r10.s64 + -768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3E14;
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

__attribute__((alias("__imp__sub_83BC3E24"))) PPC_WEAK_FUNC(sub_83BC3E24);
PPC_FUNC_IMPL(__imp__sub_83BC3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3E28"))) PPC_WEAK_FUNC(sub_83BC3E28);
PPC_FUNC_IMPL(__imp__sub_83BC3E28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22876
	ctx.r11.s64 = ctx.r8.s64 + -22876;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,3756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3756);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-776
	ctx.r3.s64 = ctx.r6.s64 + -776;
	// stw r10,-22876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3E58"))) PPC_WEAK_FUNC(sub_83BC3E58);
PPC_FUNC_IMPL(__imp__sub_83BC3E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-760
	ctx.r3.s64 = ctx.r11.s64 + -760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3E64"))) PPC_WEAK_FUNC(sub_83BC3E64);
PPC_FUNC_IMPL(__imp__sub_83BC3E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3E68"))) PPC_WEAK_FUNC(sub_83BC3E68);
PPC_FUNC_IMPL(__imp__sub_83BC3E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-752
	ctx.r3.s64 = ctx.r11.s64 + -752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3E74"))) PPC_WEAK_FUNC(sub_83BC3E74);
PPC_FUNC_IMPL(__imp__sub_83BC3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3E78"))) PPC_WEAK_FUNC(sub_83BC3E78);
PPC_FUNC_IMPL(__imp__sub_83BC3E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-744
	ctx.r3.s64 = ctx.r11.s64 + -744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3E84"))) PPC_WEAK_FUNC(sub_83BC3E84);
PPC_FUNC_IMPL(__imp__sub_83BC3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3E88"))) PPC_WEAK_FUNC(sub_83BC3E88);
PPC_FUNC_IMPL(__imp__sub_83BC3E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-736
	ctx.r3.s64 = ctx.r11.s64 + -736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3E94"))) PPC_WEAK_FUNC(sub_83BC3E94);
PPC_FUNC_IMPL(__imp__sub_83BC3E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3E98"))) PPC_WEAK_FUNC(sub_83BC3E98);
PPC_FUNC_IMPL(__imp__sub_83BC3E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-728
	ctx.r3.s64 = ctx.r11.s64 + -728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3EA4"))) PPC_WEAK_FUNC(sub_83BC3EA4);
PPC_FUNC_IMPL(__imp__sub_83BC3EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3EA8"))) PPC_WEAK_FUNC(sub_83BC3EA8);
PPC_FUNC_IMPL(__imp__sub_83BC3EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-720
	ctx.r3.s64 = ctx.r11.s64 + -720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3EB4"))) PPC_WEAK_FUNC(sub_83BC3EB4);
PPC_FUNC_IMPL(__imp__sub_83BC3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3EB8"))) PPC_WEAK_FUNC(sub_83BC3EB8);
PPC_FUNC_IMPL(__imp__sub_83BC3EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-712
	ctx.r3.s64 = ctx.r11.s64 + -712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3EC4"))) PPC_WEAK_FUNC(sub_83BC3EC4);
PPC_FUNC_IMPL(__imp__sub_83BC3EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3EC8"))) PPC_WEAK_FUNC(sub_83BC3EC8);
PPC_FUNC_IMPL(__imp__sub_83BC3EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-704
	ctx.r3.s64 = ctx.r11.s64 + -704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3ED4"))) PPC_WEAK_FUNC(sub_83BC3ED4);
PPC_FUNC_IMPL(__imp__sub_83BC3ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3ED8"))) PPC_WEAK_FUNC(sub_83BC3ED8);
PPC_FUNC_IMPL(__imp__sub_83BC3ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-696
	ctx.r3.s64 = ctx.r11.s64 + -696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3EE4"))) PPC_WEAK_FUNC(sub_83BC3EE4);
PPC_FUNC_IMPL(__imp__sub_83BC3EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3EE8"))) PPC_WEAK_FUNC(sub_83BC3EE8);
PPC_FUNC_IMPL(__imp__sub_83BC3EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-688
	ctx.r3.s64 = ctx.r11.s64 + -688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3EF4"))) PPC_WEAK_FUNC(sub_83BC3EF4);
PPC_FUNC_IMPL(__imp__sub_83BC3EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3EF8"))) PPC_WEAK_FUNC(sub_83BC3EF8);
PPC_FUNC_IMPL(__imp__sub_83BC3EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-680
	ctx.r3.s64 = ctx.r11.s64 + -680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3F04"))) PPC_WEAK_FUNC(sub_83BC3F04);
PPC_FUNC_IMPL(__imp__sub_83BC3F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3F08"))) PPC_WEAK_FUNC(sub_83BC3F08);
PPC_FUNC_IMPL(__imp__sub_83BC3F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-672
	ctx.r3.s64 = ctx.r11.s64 + -672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3F14"))) PPC_WEAK_FUNC(sub_83BC3F14);
PPC_FUNC_IMPL(__imp__sub_83BC3F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3F18"))) PPC_WEAK_FUNC(sub_83BC3F18);
PPC_FUNC_IMPL(__imp__sub_83BC3F18) {
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
	// addi r3,r11,-22512
	ctx.r3.s64 = ctx.r11.s64 + -22512;
	// bl 0x83523120
	ctx.lr = 0x83BC3F30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-664
	ctx.r3.s64 = ctx.r10.s64 + -664;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3F3C;
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

__attribute__((alias("__imp__sub_83BC3F4C"))) PPC_WEAK_FUNC(sub_83BC3F4C);
PPC_FUNC_IMPL(__imp__sub_83BC3F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3F50"))) PPC_WEAK_FUNC(sub_83BC3F50);
PPC_FUNC_IMPL(__imp__sub_83BC3F50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22496
	ctx.r7.s64 = ctx.r8.s64 + -22496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22496);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22496(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22496, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3F78"))) PPC_WEAK_FUNC(sub_83BC3F78);
PPC_FUNC_IMPL(__imp__sub_83BC3F78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,3908
	ctx.r6.s64 = ctx.r7.s64 + 3908;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3836(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3836);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22496);
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
	// std r9,3908(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3908, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3FC0"))) PPC_WEAK_FUNC(sub_83BC3FC0);
PPC_FUNC_IMPL(__imp__sub_83BC3FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-648
	ctx.r3.s64 = ctx.r11.s64 + -648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3FCC"))) PPC_WEAK_FUNC(sub_83BC3FCC);
PPC_FUNC_IMPL(__imp__sub_83BC3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3FD0"))) PPC_WEAK_FUNC(sub_83BC3FD0);
PPC_FUNC_IMPL(__imp__sub_83BC3FD0) {
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
	// addi r3,r11,-22488
	ctx.r3.s64 = ctx.r11.s64 + -22488;
	// bl 0x8259af80
	ctx.lr = 0x83BC3FE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-632
	ctx.r3.s64 = ctx.r10.s64 + -632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3FF4;
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

__attribute__((alias("__imp__sub_83BC4004"))) PPC_WEAK_FUNC(sub_83BC4004);
PPC_FUNC_IMPL(__imp__sub_83BC4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4008"))) PPC_WEAK_FUNC(sub_83BC4008);
PPC_FUNC_IMPL(__imp__sub_83BC4008) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22508
	ctx.r11.s64 = ctx.r8.s64 + -22508;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,3884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3884);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-640
	ctx.r3.s64 = ctx.r6.s64 + -640;
	// stw r10,-22508(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4038"))) PPC_WEAK_FUNC(sub_83BC4038);
PPC_FUNC_IMPL(__imp__sub_83BC4038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4044"))) PPC_WEAK_FUNC(sub_83BC4044);
PPC_FUNC_IMPL(__imp__sub_83BC4044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4048"))) PPC_WEAK_FUNC(sub_83BC4048);
PPC_FUNC_IMPL(__imp__sub_83BC4048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-616
	ctx.r3.s64 = ctx.r11.s64 + -616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4054"))) PPC_WEAK_FUNC(sub_83BC4054);
PPC_FUNC_IMPL(__imp__sub_83BC4054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4058"))) PPC_WEAK_FUNC(sub_83BC4058);
PPC_FUNC_IMPL(__imp__sub_83BC4058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-608
	ctx.r3.s64 = ctx.r11.s64 + -608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4064"))) PPC_WEAK_FUNC(sub_83BC4064);
PPC_FUNC_IMPL(__imp__sub_83BC4064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4068"))) PPC_WEAK_FUNC(sub_83BC4068);
PPC_FUNC_IMPL(__imp__sub_83BC4068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-600
	ctx.r3.s64 = ctx.r11.s64 + -600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4074"))) PPC_WEAK_FUNC(sub_83BC4074);
PPC_FUNC_IMPL(__imp__sub_83BC4074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4078"))) PPC_WEAK_FUNC(sub_83BC4078);
PPC_FUNC_IMPL(__imp__sub_83BC4078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-592
	ctx.r3.s64 = ctx.r11.s64 + -592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4084"))) PPC_WEAK_FUNC(sub_83BC4084);
PPC_FUNC_IMPL(__imp__sub_83BC4084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4088"))) PPC_WEAK_FUNC(sub_83BC4088);
PPC_FUNC_IMPL(__imp__sub_83BC4088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-584
	ctx.r3.s64 = ctx.r11.s64 + -584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4094"))) PPC_WEAK_FUNC(sub_83BC4094);
PPC_FUNC_IMPL(__imp__sub_83BC4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4098"))) PPC_WEAK_FUNC(sub_83BC4098);
PPC_FUNC_IMPL(__imp__sub_83BC4098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-576
	ctx.r3.s64 = ctx.r11.s64 + -576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC40A4"))) PPC_WEAK_FUNC(sub_83BC40A4);
PPC_FUNC_IMPL(__imp__sub_83BC40A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC40A8"))) PPC_WEAK_FUNC(sub_83BC40A8);
PPC_FUNC_IMPL(__imp__sub_83BC40A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-568
	ctx.r3.s64 = ctx.r11.s64 + -568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC40B4"))) PPC_WEAK_FUNC(sub_83BC40B4);
PPC_FUNC_IMPL(__imp__sub_83BC40B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC40B8"))) PPC_WEAK_FUNC(sub_83BC40B8);
PPC_FUNC_IMPL(__imp__sub_83BC40B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-560
	ctx.r3.s64 = ctx.r11.s64 + -560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC40C4"))) PPC_WEAK_FUNC(sub_83BC40C4);
PPC_FUNC_IMPL(__imp__sub_83BC40C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC40C8"))) PPC_WEAK_FUNC(sub_83BC40C8);
PPC_FUNC_IMPL(__imp__sub_83BC40C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-552
	ctx.r3.s64 = ctx.r11.s64 + -552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC40D4"))) PPC_WEAK_FUNC(sub_83BC40D4);
PPC_FUNC_IMPL(__imp__sub_83BC40D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC40D8"))) PPC_WEAK_FUNC(sub_83BC40D8);
PPC_FUNC_IMPL(__imp__sub_83BC40D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-544
	ctx.r3.s64 = ctx.r11.s64 + -544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC40E4"))) PPC_WEAK_FUNC(sub_83BC40E4);
PPC_FUNC_IMPL(__imp__sub_83BC40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC40E8"))) PPC_WEAK_FUNC(sub_83BC40E8);
PPC_FUNC_IMPL(__imp__sub_83BC40E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-536
	ctx.r3.s64 = ctx.r11.s64 + -536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC40F4"))) PPC_WEAK_FUNC(sub_83BC40F4);
PPC_FUNC_IMPL(__imp__sub_83BC40F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC40F8"))) PPC_WEAK_FUNC(sub_83BC40F8);
PPC_FUNC_IMPL(__imp__sub_83BC40F8) {
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
	// addi r3,r11,-22144
	ctx.r3.s64 = ctx.r11.s64 + -22144;
	// bl 0x83523120
	ctx.lr = 0x83BC4110;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-528
	ctx.r3.s64 = ctx.r10.s64 + -528;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC411C;
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

__attribute__((alias("__imp__sub_83BC412C"))) PPC_WEAK_FUNC(sub_83BC412C);
PPC_FUNC_IMPL(__imp__sub_83BC412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4130"))) PPC_WEAK_FUNC(sub_83BC4130);
PPC_FUNC_IMPL(__imp__sub_83BC4130) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22128
	ctx.r7.s64 = ctx.r8.s64 + -22128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22128(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4158"))) PPC_WEAK_FUNC(sub_83BC4158);
PPC_FUNC_IMPL(__imp__sub_83BC4158) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,4068
	ctx.r6.s64 = ctx.r7.s64 + 4068;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3988(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3988);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22128);
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
	// std r9,4068(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4068, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC41A0"))) PPC_WEAK_FUNC(sub_83BC41A0);
PPC_FUNC_IMPL(__imp__sub_83BC41A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-512
	ctx.r3.s64 = ctx.r11.s64 + -512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC41AC"))) PPC_WEAK_FUNC(sub_83BC41AC);
PPC_FUNC_IMPL(__imp__sub_83BC41AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC41B0"))) PPC_WEAK_FUNC(sub_83BC41B0);
PPC_FUNC_IMPL(__imp__sub_83BC41B0) {
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
	// addi r3,r11,-22120
	ctx.r3.s64 = ctx.r11.s64 + -22120;
	// bl 0x8259af80
	ctx.lr = 0x83BC41C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-496
	ctx.r3.s64 = ctx.r10.s64 + -496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC41D4;
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

__attribute__((alias("__imp__sub_83BC41E4"))) PPC_WEAK_FUNC(sub_83BC41E4);
PPC_FUNC_IMPL(__imp__sub_83BC41E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC41E8"))) PPC_WEAK_FUNC(sub_83BC41E8);
PPC_FUNC_IMPL(__imp__sub_83BC41E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22140
	ctx.r11.s64 = ctx.r8.s64 + -22140;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,4036(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4036);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-504
	ctx.r3.s64 = ctx.r6.s64 + -504;
	// stw r10,-22140(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4218"))) PPC_WEAK_FUNC(sub_83BC4218);
PPC_FUNC_IMPL(__imp__sub_83BC4218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-488
	ctx.r3.s64 = ctx.r11.s64 + -488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4224"))) PPC_WEAK_FUNC(sub_83BC4224);
PPC_FUNC_IMPL(__imp__sub_83BC4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4228"))) PPC_WEAK_FUNC(sub_83BC4228);
PPC_FUNC_IMPL(__imp__sub_83BC4228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-480
	ctx.r3.s64 = ctx.r11.s64 + -480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4234"))) PPC_WEAK_FUNC(sub_83BC4234);
PPC_FUNC_IMPL(__imp__sub_83BC4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4238"))) PPC_WEAK_FUNC(sub_83BC4238);
PPC_FUNC_IMPL(__imp__sub_83BC4238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-472
	ctx.r3.s64 = ctx.r11.s64 + -472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4244"))) PPC_WEAK_FUNC(sub_83BC4244);
PPC_FUNC_IMPL(__imp__sub_83BC4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4248"))) PPC_WEAK_FUNC(sub_83BC4248);
PPC_FUNC_IMPL(__imp__sub_83BC4248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-464
	ctx.r3.s64 = ctx.r11.s64 + -464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4254"))) PPC_WEAK_FUNC(sub_83BC4254);
PPC_FUNC_IMPL(__imp__sub_83BC4254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4258"))) PPC_WEAK_FUNC(sub_83BC4258);
PPC_FUNC_IMPL(__imp__sub_83BC4258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-456
	ctx.r3.s64 = ctx.r11.s64 + -456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4264"))) PPC_WEAK_FUNC(sub_83BC4264);
PPC_FUNC_IMPL(__imp__sub_83BC4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4268"))) PPC_WEAK_FUNC(sub_83BC4268);
PPC_FUNC_IMPL(__imp__sub_83BC4268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-448
	ctx.r3.s64 = ctx.r11.s64 + -448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4274"))) PPC_WEAK_FUNC(sub_83BC4274);
PPC_FUNC_IMPL(__imp__sub_83BC4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4278"))) PPC_WEAK_FUNC(sub_83BC4278);
PPC_FUNC_IMPL(__imp__sub_83BC4278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-440
	ctx.r3.s64 = ctx.r11.s64 + -440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4284"))) PPC_WEAK_FUNC(sub_83BC4284);
PPC_FUNC_IMPL(__imp__sub_83BC4284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4288"))) PPC_WEAK_FUNC(sub_83BC4288);
PPC_FUNC_IMPL(__imp__sub_83BC4288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-432
	ctx.r3.s64 = ctx.r11.s64 + -432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4294"))) PPC_WEAK_FUNC(sub_83BC4294);
PPC_FUNC_IMPL(__imp__sub_83BC4294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4298"))) PPC_WEAK_FUNC(sub_83BC4298);
PPC_FUNC_IMPL(__imp__sub_83BC4298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-424
	ctx.r3.s64 = ctx.r11.s64 + -424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC42A4"))) PPC_WEAK_FUNC(sub_83BC42A4);
PPC_FUNC_IMPL(__imp__sub_83BC42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC42A8"))) PPC_WEAK_FUNC(sub_83BC42A8);
PPC_FUNC_IMPL(__imp__sub_83BC42A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-416
	ctx.r3.s64 = ctx.r11.s64 + -416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC42B4"))) PPC_WEAK_FUNC(sub_83BC42B4);
PPC_FUNC_IMPL(__imp__sub_83BC42B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC42B8"))) PPC_WEAK_FUNC(sub_83BC42B8);
PPC_FUNC_IMPL(__imp__sub_83BC42B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-408
	ctx.r3.s64 = ctx.r11.s64 + -408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC42C4"))) PPC_WEAK_FUNC(sub_83BC42C4);
PPC_FUNC_IMPL(__imp__sub_83BC42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC42C8"))) PPC_WEAK_FUNC(sub_83BC42C8);
PPC_FUNC_IMPL(__imp__sub_83BC42C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-400
	ctx.r3.s64 = ctx.r11.s64 + -400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC42D4"))) PPC_WEAK_FUNC(sub_83BC42D4);
PPC_FUNC_IMPL(__imp__sub_83BC42D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC42D8"))) PPC_WEAK_FUNC(sub_83BC42D8);
PPC_FUNC_IMPL(__imp__sub_83BC42D8) {
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
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// bl 0x83523120
	ctx.lr = 0x83BC42F0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-392
	ctx.r3.s64 = ctx.r10.s64 + -392;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC42FC;
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

__attribute__((alias("__imp__sub_83BC430C"))) PPC_WEAK_FUNC(sub_83BC430C);
PPC_FUNC_IMPL(__imp__sub_83BC430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4310"))) PPC_WEAK_FUNC(sub_83BC4310);
PPC_FUNC_IMPL(__imp__sub_83BC4310) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21760
	ctx.r7.s64 = ctx.r8.s64 + -21760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4338"))) PPC_WEAK_FUNC(sub_83BC4338);
PPC_FUNC_IMPL(__imp__sub_83BC4338) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,4216
	ctx.r6.s64 = ctx.r7.s64 + 4216;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4144(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4144);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21760(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21760);
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
	// std r9,4216(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4216, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4380"))) PPC_WEAK_FUNC(sub_83BC4380);
PPC_FUNC_IMPL(__imp__sub_83BC4380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-376
	ctx.r3.s64 = ctx.r11.s64 + -376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC438C"))) PPC_WEAK_FUNC(sub_83BC438C);
PPC_FUNC_IMPL(__imp__sub_83BC438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4390"))) PPC_WEAK_FUNC(sub_83BC4390);
PPC_FUNC_IMPL(__imp__sub_83BC4390) {
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
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// bl 0x8259af80
	ctx.lr = 0x83BC43A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-360
	ctx.r3.s64 = ctx.r10.s64 + -360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC43B4;
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

__attribute__((alias("__imp__sub_83BC43C4"))) PPC_WEAK_FUNC(sub_83BC43C4);
PPC_FUNC_IMPL(__imp__sub_83BC43C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC43C8"))) PPC_WEAK_FUNC(sub_83BC43C8);
PPC_FUNC_IMPL(__imp__sub_83BC43C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21772
	ctx.r11.s64 = ctx.r8.s64 + -21772;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,4192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4192);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-368
	ctx.r3.s64 = ctx.r6.s64 + -368;
	// stw r10,-21772(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC43F8"))) PPC_WEAK_FUNC(sub_83BC43F8);
PPC_FUNC_IMPL(__imp__sub_83BC43F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-352
	ctx.r3.s64 = ctx.r11.s64 + -352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4404"))) PPC_WEAK_FUNC(sub_83BC4404);
PPC_FUNC_IMPL(__imp__sub_83BC4404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4408"))) PPC_WEAK_FUNC(sub_83BC4408);
PPC_FUNC_IMPL(__imp__sub_83BC4408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-344
	ctx.r3.s64 = ctx.r11.s64 + -344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4414"))) PPC_WEAK_FUNC(sub_83BC4414);
PPC_FUNC_IMPL(__imp__sub_83BC4414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4418"))) PPC_WEAK_FUNC(sub_83BC4418);
PPC_FUNC_IMPL(__imp__sub_83BC4418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-336
	ctx.r3.s64 = ctx.r11.s64 + -336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4424"))) PPC_WEAK_FUNC(sub_83BC4424);
PPC_FUNC_IMPL(__imp__sub_83BC4424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4428"))) PPC_WEAK_FUNC(sub_83BC4428);
PPC_FUNC_IMPL(__imp__sub_83BC4428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-328
	ctx.r3.s64 = ctx.r11.s64 + -328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4434"))) PPC_WEAK_FUNC(sub_83BC4434);
PPC_FUNC_IMPL(__imp__sub_83BC4434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4438"))) PPC_WEAK_FUNC(sub_83BC4438);
PPC_FUNC_IMPL(__imp__sub_83BC4438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-320
	ctx.r3.s64 = ctx.r11.s64 + -320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4444"))) PPC_WEAK_FUNC(sub_83BC4444);
PPC_FUNC_IMPL(__imp__sub_83BC4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4448"))) PPC_WEAK_FUNC(sub_83BC4448);
PPC_FUNC_IMPL(__imp__sub_83BC4448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-312
	ctx.r3.s64 = ctx.r11.s64 + -312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4454"))) PPC_WEAK_FUNC(sub_83BC4454);
PPC_FUNC_IMPL(__imp__sub_83BC4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4458"))) PPC_WEAK_FUNC(sub_83BC4458);
PPC_FUNC_IMPL(__imp__sub_83BC4458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-304
	ctx.r3.s64 = ctx.r11.s64 + -304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4464"))) PPC_WEAK_FUNC(sub_83BC4464);
PPC_FUNC_IMPL(__imp__sub_83BC4464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4468"))) PPC_WEAK_FUNC(sub_83BC4468);
PPC_FUNC_IMPL(__imp__sub_83BC4468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-296
	ctx.r3.s64 = ctx.r11.s64 + -296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4474"))) PPC_WEAK_FUNC(sub_83BC4474);
PPC_FUNC_IMPL(__imp__sub_83BC4474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4478"))) PPC_WEAK_FUNC(sub_83BC4478);
PPC_FUNC_IMPL(__imp__sub_83BC4478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-288
	ctx.r3.s64 = ctx.r11.s64 + -288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4484"))) PPC_WEAK_FUNC(sub_83BC4484);
PPC_FUNC_IMPL(__imp__sub_83BC4484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4488"))) PPC_WEAK_FUNC(sub_83BC4488);
PPC_FUNC_IMPL(__imp__sub_83BC4488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-280
	ctx.r3.s64 = ctx.r11.s64 + -280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4494"))) PPC_WEAK_FUNC(sub_83BC4494);
PPC_FUNC_IMPL(__imp__sub_83BC4494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4498"))) PPC_WEAK_FUNC(sub_83BC4498);
PPC_FUNC_IMPL(__imp__sub_83BC4498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-272
	ctx.r3.s64 = ctx.r11.s64 + -272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC44A4"))) PPC_WEAK_FUNC(sub_83BC44A4);
PPC_FUNC_IMPL(__imp__sub_83BC44A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC44A8"))) PPC_WEAK_FUNC(sub_83BC44A8);
PPC_FUNC_IMPL(__imp__sub_83BC44A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-264
	ctx.r3.s64 = ctx.r11.s64 + -264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC44B4"))) PPC_WEAK_FUNC(sub_83BC44B4);
PPC_FUNC_IMPL(__imp__sub_83BC44B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC44B8"))) PPC_WEAK_FUNC(sub_83BC44B8);
PPC_FUNC_IMPL(__imp__sub_83BC44B8) {
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
	// addi r3,r11,-21408
	ctx.r3.s64 = ctx.r11.s64 + -21408;
	// bl 0x83523120
	ctx.lr = 0x83BC44D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-256
	ctx.r3.s64 = ctx.r10.s64 + -256;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC44DC;
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

__attribute__((alias("__imp__sub_83BC44EC"))) PPC_WEAK_FUNC(sub_83BC44EC);
PPC_FUNC_IMPL(__imp__sub_83BC44EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC44F0"))) PPC_WEAK_FUNC(sub_83BC44F0);
PPC_FUNC_IMPL(__imp__sub_83BC44F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21392
	ctx.r7.s64 = ctx.r8.s64 + -21392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4518"))) PPC_WEAK_FUNC(sub_83BC4518);
PPC_FUNC_IMPL(__imp__sub_83BC4518) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,4356
	ctx.r6.s64 = ctx.r7.s64 + 4356;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21392);
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
	// std r9,4356(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4560"))) PPC_WEAK_FUNC(sub_83BC4560);
PPC_FUNC_IMPL(__imp__sub_83BC4560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-240
	ctx.r3.s64 = ctx.r11.s64 + -240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC456C"))) PPC_WEAK_FUNC(sub_83BC456C);
PPC_FUNC_IMPL(__imp__sub_83BC456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4570"))) PPC_WEAK_FUNC(sub_83BC4570);
PPC_FUNC_IMPL(__imp__sub_83BC4570) {
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
	// addi r3,r11,-21384
	ctx.r3.s64 = ctx.r11.s64 + -21384;
	// bl 0x8259af80
	ctx.lr = 0x83BC4588;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-224
	ctx.r3.s64 = ctx.r10.s64 + -224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4594;
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

__attribute__((alias("__imp__sub_83BC45A4"))) PPC_WEAK_FUNC(sub_83BC45A4);
PPC_FUNC_IMPL(__imp__sub_83BC45A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC45A8"))) PPC_WEAK_FUNC(sub_83BC45A8);
PPC_FUNC_IMPL(__imp__sub_83BC45A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21404
	ctx.r11.s64 = ctx.r8.s64 + -21404;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,4332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4332);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-232
	ctx.r3.s64 = ctx.r6.s64 + -232;
	// stw r10,-21404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC45D8"))) PPC_WEAK_FUNC(sub_83BC45D8);
PPC_FUNC_IMPL(__imp__sub_83BC45D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-216
	ctx.r3.s64 = ctx.r11.s64 + -216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC45E4"))) PPC_WEAK_FUNC(sub_83BC45E4);
PPC_FUNC_IMPL(__imp__sub_83BC45E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC45E8"))) PPC_WEAK_FUNC(sub_83BC45E8);
PPC_FUNC_IMPL(__imp__sub_83BC45E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-208
	ctx.r3.s64 = ctx.r11.s64 + -208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC45F4"))) PPC_WEAK_FUNC(sub_83BC45F4);
PPC_FUNC_IMPL(__imp__sub_83BC45F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC45F8"))) PPC_WEAK_FUNC(sub_83BC45F8);
PPC_FUNC_IMPL(__imp__sub_83BC45F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-200
	ctx.r3.s64 = ctx.r11.s64 + -200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4604"))) PPC_WEAK_FUNC(sub_83BC4604);
PPC_FUNC_IMPL(__imp__sub_83BC4604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4608"))) PPC_WEAK_FUNC(sub_83BC4608);
PPC_FUNC_IMPL(__imp__sub_83BC4608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-192
	ctx.r3.s64 = ctx.r11.s64 + -192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4614"))) PPC_WEAK_FUNC(sub_83BC4614);
PPC_FUNC_IMPL(__imp__sub_83BC4614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4618"))) PPC_WEAK_FUNC(sub_83BC4618);
PPC_FUNC_IMPL(__imp__sub_83BC4618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-184
	ctx.r3.s64 = ctx.r11.s64 + -184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4624"))) PPC_WEAK_FUNC(sub_83BC4624);
PPC_FUNC_IMPL(__imp__sub_83BC4624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4628"))) PPC_WEAK_FUNC(sub_83BC4628);
PPC_FUNC_IMPL(__imp__sub_83BC4628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-176
	ctx.r3.s64 = ctx.r11.s64 + -176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4634"))) PPC_WEAK_FUNC(sub_83BC4634);
PPC_FUNC_IMPL(__imp__sub_83BC4634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4638"))) PPC_WEAK_FUNC(sub_83BC4638);
PPC_FUNC_IMPL(__imp__sub_83BC4638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4644"))) PPC_WEAK_FUNC(sub_83BC4644);
PPC_FUNC_IMPL(__imp__sub_83BC4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4648"))) PPC_WEAK_FUNC(sub_83BC4648);
PPC_FUNC_IMPL(__imp__sub_83BC4648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-160
	ctx.r3.s64 = ctx.r11.s64 + -160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4654"))) PPC_WEAK_FUNC(sub_83BC4654);
PPC_FUNC_IMPL(__imp__sub_83BC4654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4658"))) PPC_WEAK_FUNC(sub_83BC4658);
PPC_FUNC_IMPL(__imp__sub_83BC4658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-152
	ctx.r3.s64 = ctx.r11.s64 + -152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4664"))) PPC_WEAK_FUNC(sub_83BC4664);
PPC_FUNC_IMPL(__imp__sub_83BC4664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4668"))) PPC_WEAK_FUNC(sub_83BC4668);
PPC_FUNC_IMPL(__imp__sub_83BC4668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4674"))) PPC_WEAK_FUNC(sub_83BC4674);
PPC_FUNC_IMPL(__imp__sub_83BC4674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4678"))) PPC_WEAK_FUNC(sub_83BC4678);
PPC_FUNC_IMPL(__imp__sub_83BC4678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4684"))) PPC_WEAK_FUNC(sub_83BC4684);
PPC_FUNC_IMPL(__imp__sub_83BC4684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4688"))) PPC_WEAK_FUNC(sub_83BC4688);
PPC_FUNC_IMPL(__imp__sub_83BC4688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4694"))) PPC_WEAK_FUNC(sub_83BC4694);
PPC_FUNC_IMPL(__imp__sub_83BC4694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4698"))) PPC_WEAK_FUNC(sub_83BC4698);
PPC_FUNC_IMPL(__imp__sub_83BC4698) {
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
	// addi r3,r11,-21040
	ctx.r3.s64 = ctx.r11.s64 + -21040;
	// bl 0x83523120
	ctx.lr = 0x83BC46B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-120
	ctx.r3.s64 = ctx.r10.s64 + -120;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC46BC;
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

__attribute__((alias("__imp__sub_83BC46CC"))) PPC_WEAK_FUNC(sub_83BC46CC);
PPC_FUNC_IMPL(__imp__sub_83BC46CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC46D0"))) PPC_WEAK_FUNC(sub_83BC46D0);
PPC_FUNC_IMPL(__imp__sub_83BC46D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21024
	ctx.r7.s64 = ctx.r8.s64 + -21024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21024);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21024(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21024, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC46F8"))) PPC_WEAK_FUNC(sub_83BC46F8);
PPC_FUNC_IMPL(__imp__sub_83BC46F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,4492
	ctx.r6.s64 = ctx.r7.s64 + 4492;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4420(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4420);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21024);
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
	// std r9,4492(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4492, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4740"))) PPC_WEAK_FUNC(sub_83BC4740);
PPC_FUNC_IMPL(__imp__sub_83BC4740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-104
	ctx.r3.s64 = ctx.r11.s64 + -104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC474C"))) PPC_WEAK_FUNC(sub_83BC474C);
PPC_FUNC_IMPL(__imp__sub_83BC474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4750"))) PPC_WEAK_FUNC(sub_83BC4750);
PPC_FUNC_IMPL(__imp__sub_83BC4750) {
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
	// addi r3,r11,-21016
	ctx.r3.s64 = ctx.r11.s64 + -21016;
	// bl 0x8259af80
	ctx.lr = 0x83BC4768;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-88
	ctx.r3.s64 = ctx.r10.s64 + -88;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4774;
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

__attribute__((alias("__imp__sub_83BC4784"))) PPC_WEAK_FUNC(sub_83BC4784);
PPC_FUNC_IMPL(__imp__sub_83BC4784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4788"))) PPC_WEAK_FUNC(sub_83BC4788);
PPC_FUNC_IMPL(__imp__sub_83BC4788) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21036
	ctx.r11.s64 = ctx.r8.s64 + -21036;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,4468(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4468);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-96
	ctx.r3.s64 = ctx.r6.s64 + -96;
	// stw r10,-21036(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC47B8"))) PPC_WEAK_FUNC(sub_83BC47B8);
PPC_FUNC_IMPL(__imp__sub_83BC47B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC47C4"))) PPC_WEAK_FUNC(sub_83BC47C4);
PPC_FUNC_IMPL(__imp__sub_83BC47C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC47C8"))) PPC_WEAK_FUNC(sub_83BC47C8);
PPC_FUNC_IMPL(__imp__sub_83BC47C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC47D4"))) PPC_WEAK_FUNC(sub_83BC47D4);
PPC_FUNC_IMPL(__imp__sub_83BC47D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC47D8"))) PPC_WEAK_FUNC(sub_83BC47D8);
PPC_FUNC_IMPL(__imp__sub_83BC47D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC47E4"))) PPC_WEAK_FUNC(sub_83BC47E4);
PPC_FUNC_IMPL(__imp__sub_83BC47E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC47E8"))) PPC_WEAK_FUNC(sub_83BC47E8);
PPC_FUNC_IMPL(__imp__sub_83BC47E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC47F4"))) PPC_WEAK_FUNC(sub_83BC47F4);
PPC_FUNC_IMPL(__imp__sub_83BC47F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC47F8"))) PPC_WEAK_FUNC(sub_83BC47F8);
PPC_FUNC_IMPL(__imp__sub_83BC47F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4804"))) PPC_WEAK_FUNC(sub_83BC4804);
PPC_FUNC_IMPL(__imp__sub_83BC4804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4808"))) PPC_WEAK_FUNC(sub_83BC4808);
PPC_FUNC_IMPL(__imp__sub_83BC4808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4814"))) PPC_WEAK_FUNC(sub_83BC4814);
PPC_FUNC_IMPL(__imp__sub_83BC4814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4818"))) PPC_WEAK_FUNC(sub_83BC4818);
PPC_FUNC_IMPL(__imp__sub_83BC4818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4824"))) PPC_WEAK_FUNC(sub_83BC4824);
PPC_FUNC_IMPL(__imp__sub_83BC4824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4828"))) PPC_WEAK_FUNC(sub_83BC4828);
PPC_FUNC_IMPL(__imp__sub_83BC4828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4834"))) PPC_WEAK_FUNC(sub_83BC4834);
PPC_FUNC_IMPL(__imp__sub_83BC4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4838"))) PPC_WEAK_FUNC(sub_83BC4838);
PPC_FUNC_IMPL(__imp__sub_83BC4838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4844"))) PPC_WEAK_FUNC(sub_83BC4844);
PPC_FUNC_IMPL(__imp__sub_83BC4844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4848"))) PPC_WEAK_FUNC(sub_83BC4848);
PPC_FUNC_IMPL(__imp__sub_83BC4848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4854"))) PPC_WEAK_FUNC(sub_83BC4854);
PPC_FUNC_IMPL(__imp__sub_83BC4854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4858"))) PPC_WEAK_FUNC(sub_83BC4858);
PPC_FUNC_IMPL(__imp__sub_83BC4858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,0
	ctx.r3.s64 = ctx.r11.s64 + 0;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4864"))) PPC_WEAK_FUNC(sub_83BC4864);
PPC_FUNC_IMPL(__imp__sub_83BC4864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4868"))) PPC_WEAK_FUNC(sub_83BC4868);
PPC_FUNC_IMPL(__imp__sub_83BC4868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4874"))) PPC_WEAK_FUNC(sub_83BC4874);
PPC_FUNC_IMPL(__imp__sub_83BC4874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4878"))) PPC_WEAK_FUNC(sub_83BC4878);
PPC_FUNC_IMPL(__imp__sub_83BC4878) {
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
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// bl 0x83523120
	ctx.lr = 0x83BC4890;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC489C;
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

__attribute__((alias("__imp__sub_83BC48AC"))) PPC_WEAK_FUNC(sub_83BC48AC);
PPC_FUNC_IMPL(__imp__sub_83BC48AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC48B0"))) PPC_WEAK_FUNC(sub_83BC48B0);
PPC_FUNC_IMPL(__imp__sub_83BC48B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20656
	ctx.r7.s64 = ctx.r8.s64 + -20656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC48D8"))) PPC_WEAK_FUNC(sub_83BC48D8);
PPC_FUNC_IMPL(__imp__sub_83BC48D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,4628
	ctx.r6.s64 = ctx.r7.s64 + 4628;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20656);
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
	// std r9,4628(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC4920"))) PPC_WEAK_FUNC(sub_83BC4920);
PPC_FUNC_IMPL(__imp__sub_83BC4920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC492C"))) PPC_WEAK_FUNC(sub_83BC492C);
PPC_FUNC_IMPL(__imp__sub_83BC492C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4930"))) PPC_WEAK_FUNC(sub_83BC4930);
PPC_FUNC_IMPL(__imp__sub_83BC4930) {
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
	// addi r3,r11,-20648
	ctx.r3.s64 = ctx.r11.s64 + -20648;
	// bl 0x8259af80
	ctx.lr = 0x83BC4948;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC4954;
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

__attribute__((alias("__imp__sub_83BC4964"))) PPC_WEAK_FUNC(sub_83BC4964);
PPC_FUNC_IMPL(__imp__sub_83BC4964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC4968"))) PPC_WEAK_FUNC(sub_83BC4968);
PPC_FUNC_IMPL(__imp__sub_83BC4968) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20668
	ctx.r11.s64 = ctx.r8.s64 + -20668;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,4604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4604);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,40
	ctx.r3.s64 = ctx.r6.s64 + 40;
	// stw r10,-20668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC4998"))) PPC_WEAK_FUNC(sub_83BC4998);
PPC_FUNC_IMPL(__imp__sub_83BC4998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC49A4"))) PPC_WEAK_FUNC(sub_83BC49A4);
PPC_FUNC_IMPL(__imp__sub_83BC49A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC49A8"))) PPC_WEAK_FUNC(sub_83BC49A8);
PPC_FUNC_IMPL(__imp__sub_83BC49A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC49B4"))) PPC_WEAK_FUNC(sub_83BC49B4);
PPC_FUNC_IMPL(__imp__sub_83BC49B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC49B8"))) PPC_WEAK_FUNC(sub_83BC49B8);
PPC_FUNC_IMPL(__imp__sub_83BC49B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC49C4"))) PPC_WEAK_FUNC(sub_83BC49C4);
PPC_FUNC_IMPL(__imp__sub_83BC49C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC49C8"))) PPC_WEAK_FUNC(sub_83BC49C8);
PPC_FUNC_IMPL(__imp__sub_83BC49C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC49D4"))) PPC_WEAK_FUNC(sub_83BC49D4);
PPC_FUNC_IMPL(__imp__sub_83BC49D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC49D8"))) PPC_WEAK_FUNC(sub_83BC49D8);
PPC_FUNC_IMPL(__imp__sub_83BC49D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC49E4"))) PPC_WEAK_FUNC(sub_83BC49E4);
PPC_FUNC_IMPL(__imp__sub_83BC49E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC49E8"))) PPC_WEAK_FUNC(sub_83BC49E8);
PPC_FUNC_IMPL(__imp__sub_83BC49E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC49F4"))) PPC_WEAK_FUNC(sub_83BC49F4);
PPC_FUNC_IMPL(__imp__sub_83BC49F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC49F8"))) PPC_WEAK_FUNC(sub_83BC49F8);
PPC_FUNC_IMPL(__imp__sub_83BC49F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

