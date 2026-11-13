#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BAFC38"))) PPC_WEAK_FUNC(sub_83BAFC38);
PPC_FUNC_IMPL(__imp__sub_83BAFC38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19820
	ctx.r11.s64 = ctx.r8.s64 + -19820;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-25060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25060);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-24512
	ctx.r3.s64 = ctx.r6.s64 + -24512;
	// stw r10,-19820(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19820, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFC68"))) PPC_WEAK_FUNC(sub_83BAFC68);
PPC_FUNC_IMPL(__imp__sub_83BAFC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24496
	ctx.r3.s64 = ctx.r11.s64 + -24496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFC74"))) PPC_WEAK_FUNC(sub_83BAFC74);
PPC_FUNC_IMPL(__imp__sub_83BAFC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFC78"))) PPC_WEAK_FUNC(sub_83BAFC78);
PPC_FUNC_IMPL(__imp__sub_83BAFC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24488
	ctx.r3.s64 = ctx.r11.s64 + -24488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFC84"))) PPC_WEAK_FUNC(sub_83BAFC84);
PPC_FUNC_IMPL(__imp__sub_83BAFC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFC88"))) PPC_WEAK_FUNC(sub_83BAFC88);
PPC_FUNC_IMPL(__imp__sub_83BAFC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24480
	ctx.r3.s64 = ctx.r11.s64 + -24480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFC94"))) PPC_WEAK_FUNC(sub_83BAFC94);
PPC_FUNC_IMPL(__imp__sub_83BAFC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFC98"))) PPC_WEAK_FUNC(sub_83BAFC98);
PPC_FUNC_IMPL(__imp__sub_83BAFC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24472
	ctx.r3.s64 = ctx.r11.s64 + -24472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFCA4"))) PPC_WEAK_FUNC(sub_83BAFCA4);
PPC_FUNC_IMPL(__imp__sub_83BAFCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFCA8"))) PPC_WEAK_FUNC(sub_83BAFCA8);
PPC_FUNC_IMPL(__imp__sub_83BAFCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24464
	ctx.r3.s64 = ctx.r11.s64 + -24464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFCB4"))) PPC_WEAK_FUNC(sub_83BAFCB4);
PPC_FUNC_IMPL(__imp__sub_83BAFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFCB8"))) PPC_WEAK_FUNC(sub_83BAFCB8);
PPC_FUNC_IMPL(__imp__sub_83BAFCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24456
	ctx.r3.s64 = ctx.r11.s64 + -24456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFCC4"))) PPC_WEAK_FUNC(sub_83BAFCC4);
PPC_FUNC_IMPL(__imp__sub_83BAFCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFCC8"))) PPC_WEAK_FUNC(sub_83BAFCC8);
PPC_FUNC_IMPL(__imp__sub_83BAFCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24448
	ctx.r3.s64 = ctx.r11.s64 + -24448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFCD4"))) PPC_WEAK_FUNC(sub_83BAFCD4);
PPC_FUNC_IMPL(__imp__sub_83BAFCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFCD8"))) PPC_WEAK_FUNC(sub_83BAFCD8);
PPC_FUNC_IMPL(__imp__sub_83BAFCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24440
	ctx.r3.s64 = ctx.r11.s64 + -24440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFCE4"))) PPC_WEAK_FUNC(sub_83BAFCE4);
PPC_FUNC_IMPL(__imp__sub_83BAFCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFCE8"))) PPC_WEAK_FUNC(sub_83BAFCE8);
PPC_FUNC_IMPL(__imp__sub_83BAFCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24432
	ctx.r3.s64 = ctx.r11.s64 + -24432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFCF4"))) PPC_WEAK_FUNC(sub_83BAFCF4);
PPC_FUNC_IMPL(__imp__sub_83BAFCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFCF8"))) PPC_WEAK_FUNC(sub_83BAFCF8);
PPC_FUNC_IMPL(__imp__sub_83BAFCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24424
	ctx.r3.s64 = ctx.r11.s64 + -24424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFD04"))) PPC_WEAK_FUNC(sub_83BAFD04);
PPC_FUNC_IMPL(__imp__sub_83BAFD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFD08"))) PPC_WEAK_FUNC(sub_83BAFD08);
PPC_FUNC_IMPL(__imp__sub_83BAFD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24416
	ctx.r3.s64 = ctx.r11.s64 + -24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFD14"))) PPC_WEAK_FUNC(sub_83BAFD14);
PPC_FUNC_IMPL(__imp__sub_83BAFD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFD18"))) PPC_WEAK_FUNC(sub_83BAFD18);
PPC_FUNC_IMPL(__imp__sub_83BAFD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24408
	ctx.r3.s64 = ctx.r11.s64 + -24408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFD24"))) PPC_WEAK_FUNC(sub_83BAFD24);
PPC_FUNC_IMPL(__imp__sub_83BAFD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFD28"))) PPC_WEAK_FUNC(sub_83BAFD28);
PPC_FUNC_IMPL(__imp__sub_83BAFD28) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-19456
	ctx.r3.s64 = ctx.r11.s64 + -19456;
	// bl 0x83523120
	ctx.lr = 0x83BAFD40;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-24400
	ctx.r3.s64 = ctx.r10.s64 + -24400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAFD4C;
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

__attribute__((alias("__imp__sub_83BAFD5C"))) PPC_WEAK_FUNC(sub_83BAFD5C);
PPC_FUNC_IMPL(__imp__sub_83BAFD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFD60"))) PPC_WEAK_FUNC(sub_83BAFD60);
PPC_FUNC_IMPL(__imp__sub_83BAFD60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19440
	ctx.r7.s64 = ctx.r8.s64 + -19440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19440);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19440(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19440, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAFD88"))) PPC_WEAK_FUNC(sub_83BAFD88);
PPC_FUNC_IMPL(__imp__sub_83BAFD88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-24572
	ctx.r6.s64 = ctx.r7.s64 + -24572;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24644(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24644);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19440(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19440);
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
	// std r9,-24572(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24572, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAFDD0"))) PPC_WEAK_FUNC(sub_83BAFDD0);
PPC_FUNC_IMPL(__imp__sub_83BAFDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24384
	ctx.r3.s64 = ctx.r11.s64 + -24384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFDDC"))) PPC_WEAK_FUNC(sub_83BAFDDC);
PPC_FUNC_IMPL(__imp__sub_83BAFDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFDE0"))) PPC_WEAK_FUNC(sub_83BAFDE0);
PPC_FUNC_IMPL(__imp__sub_83BAFDE0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-19432
	ctx.r3.s64 = ctx.r11.s64 + -19432;
	// bl 0x8259af80
	ctx.lr = 0x83BAFDF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-24368
	ctx.r3.s64 = ctx.r10.s64 + -24368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAFE04;
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

__attribute__((alias("__imp__sub_83BAFE14"))) PPC_WEAK_FUNC(sub_83BAFE14);
PPC_FUNC_IMPL(__imp__sub_83BAFE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFE18"))) PPC_WEAK_FUNC(sub_83BAFE18);
PPC_FUNC_IMPL(__imp__sub_83BAFE18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19452
	ctx.r11.s64 = ctx.r8.s64 + -19452;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24596);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-24376
	ctx.r3.s64 = ctx.r6.s64 + -24376;
	// stw r10,-19452(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFE48"))) PPC_WEAK_FUNC(sub_83BAFE48);
PPC_FUNC_IMPL(__imp__sub_83BAFE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24360
	ctx.r3.s64 = ctx.r11.s64 + -24360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFE54"))) PPC_WEAK_FUNC(sub_83BAFE54);
PPC_FUNC_IMPL(__imp__sub_83BAFE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFE58"))) PPC_WEAK_FUNC(sub_83BAFE58);
PPC_FUNC_IMPL(__imp__sub_83BAFE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFE64"))) PPC_WEAK_FUNC(sub_83BAFE64);
PPC_FUNC_IMPL(__imp__sub_83BAFE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFE68"))) PPC_WEAK_FUNC(sub_83BAFE68);
PPC_FUNC_IMPL(__imp__sub_83BAFE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24344
	ctx.r3.s64 = ctx.r11.s64 + -24344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFE74"))) PPC_WEAK_FUNC(sub_83BAFE74);
PPC_FUNC_IMPL(__imp__sub_83BAFE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFE78"))) PPC_WEAK_FUNC(sub_83BAFE78);
PPC_FUNC_IMPL(__imp__sub_83BAFE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24336
	ctx.r3.s64 = ctx.r11.s64 + -24336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFE84"))) PPC_WEAK_FUNC(sub_83BAFE84);
PPC_FUNC_IMPL(__imp__sub_83BAFE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFE88"))) PPC_WEAK_FUNC(sub_83BAFE88);
PPC_FUNC_IMPL(__imp__sub_83BAFE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24328
	ctx.r3.s64 = ctx.r11.s64 + -24328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFE94"))) PPC_WEAK_FUNC(sub_83BAFE94);
PPC_FUNC_IMPL(__imp__sub_83BAFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFE98"))) PPC_WEAK_FUNC(sub_83BAFE98);
PPC_FUNC_IMPL(__imp__sub_83BAFE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24320
	ctx.r3.s64 = ctx.r11.s64 + -24320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFEA4"))) PPC_WEAK_FUNC(sub_83BAFEA4);
PPC_FUNC_IMPL(__imp__sub_83BAFEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFEA8"))) PPC_WEAK_FUNC(sub_83BAFEA8);
PPC_FUNC_IMPL(__imp__sub_83BAFEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24312
	ctx.r3.s64 = ctx.r11.s64 + -24312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFEB4"))) PPC_WEAK_FUNC(sub_83BAFEB4);
PPC_FUNC_IMPL(__imp__sub_83BAFEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFEB8"))) PPC_WEAK_FUNC(sub_83BAFEB8);
PPC_FUNC_IMPL(__imp__sub_83BAFEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24304
	ctx.r3.s64 = ctx.r11.s64 + -24304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFEC4"))) PPC_WEAK_FUNC(sub_83BAFEC4);
PPC_FUNC_IMPL(__imp__sub_83BAFEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFEC8"))) PPC_WEAK_FUNC(sub_83BAFEC8);
PPC_FUNC_IMPL(__imp__sub_83BAFEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24296
	ctx.r3.s64 = ctx.r11.s64 + -24296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFED4"))) PPC_WEAK_FUNC(sub_83BAFED4);
PPC_FUNC_IMPL(__imp__sub_83BAFED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFED8"))) PPC_WEAK_FUNC(sub_83BAFED8);
PPC_FUNC_IMPL(__imp__sub_83BAFED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24288
	ctx.r3.s64 = ctx.r11.s64 + -24288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFEE4"))) PPC_WEAK_FUNC(sub_83BAFEE4);
PPC_FUNC_IMPL(__imp__sub_83BAFEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFEE8"))) PPC_WEAK_FUNC(sub_83BAFEE8);
PPC_FUNC_IMPL(__imp__sub_83BAFEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24280
	ctx.r3.s64 = ctx.r11.s64 + -24280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFEF4"))) PPC_WEAK_FUNC(sub_83BAFEF4);
PPC_FUNC_IMPL(__imp__sub_83BAFEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFEF8"))) PPC_WEAK_FUNC(sub_83BAFEF8);
PPC_FUNC_IMPL(__imp__sub_83BAFEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24272
	ctx.r3.s64 = ctx.r11.s64 + -24272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFF04"))) PPC_WEAK_FUNC(sub_83BAFF04);
PPC_FUNC_IMPL(__imp__sub_83BAFF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFF08"))) PPC_WEAK_FUNC(sub_83BAFF08);
PPC_FUNC_IMPL(__imp__sub_83BAFF08) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-19088
	ctx.r3.s64 = ctx.r11.s64 + -19088;
	// bl 0x83523120
	ctx.lr = 0x83BAFF20;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-24264
	ctx.r3.s64 = ctx.r10.s64 + -24264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAFF2C;
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

__attribute__((alias("__imp__sub_83BAFF3C"))) PPC_WEAK_FUNC(sub_83BAFF3C);
PPC_FUNC_IMPL(__imp__sub_83BAFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFF40"))) PPC_WEAK_FUNC(sub_83BAFF40);
PPC_FUNC_IMPL(__imp__sub_83BAFF40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19072
	ctx.r7.s64 = ctx.r8.s64 + -19072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19072(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAFF68"))) PPC_WEAK_FUNC(sub_83BAFF68);
PPC_FUNC_IMPL(__imp__sub_83BAFF68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-24432
	ctx.r6.s64 = ctx.r7.s64 + -24432;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24504(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24504);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19072(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19072);
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
	// std r9,-24432(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24432, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAFFB0"))) PPC_WEAK_FUNC(sub_83BAFFB0);
PPC_FUNC_IMPL(__imp__sub_83BAFFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24248
	ctx.r3.s64 = ctx.r11.s64 + -24248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAFFBC"))) PPC_WEAK_FUNC(sub_83BAFFBC);
PPC_FUNC_IMPL(__imp__sub_83BAFFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFFC0"))) PPC_WEAK_FUNC(sub_83BAFFC0);
PPC_FUNC_IMPL(__imp__sub_83BAFFC0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-19064
	ctx.r3.s64 = ctx.r11.s64 + -19064;
	// bl 0x8259af80
	ctx.lr = 0x83BAFFD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-24232
	ctx.r3.s64 = ctx.r10.s64 + -24232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAFFE4;
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

__attribute__((alias("__imp__sub_83BAFFF4"))) PPC_WEAK_FUNC(sub_83BAFFF4);
PPC_FUNC_IMPL(__imp__sub_83BAFFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAFFF8"))) PPC_WEAK_FUNC(sub_83BAFFF8);
PPC_FUNC_IMPL(__imp__sub_83BAFFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19084
	ctx.r11.s64 = ctx.r8.s64 + -19084;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-24240
	ctx.r3.s64 = ctx.r6.s64 + -24240;
	// stw r10,-19084(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0028"))) PPC_WEAK_FUNC(sub_83BB0028);
PPC_FUNC_IMPL(__imp__sub_83BB0028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24224
	ctx.r3.s64 = ctx.r11.s64 + -24224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0034"))) PPC_WEAK_FUNC(sub_83BB0034);
PPC_FUNC_IMPL(__imp__sub_83BB0034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0038"))) PPC_WEAK_FUNC(sub_83BB0038);
PPC_FUNC_IMPL(__imp__sub_83BB0038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24216
	ctx.r3.s64 = ctx.r11.s64 + -24216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0044"))) PPC_WEAK_FUNC(sub_83BB0044);
PPC_FUNC_IMPL(__imp__sub_83BB0044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0048"))) PPC_WEAK_FUNC(sub_83BB0048);
PPC_FUNC_IMPL(__imp__sub_83BB0048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24208
	ctx.r3.s64 = ctx.r11.s64 + -24208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0054"))) PPC_WEAK_FUNC(sub_83BB0054);
PPC_FUNC_IMPL(__imp__sub_83BB0054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0058"))) PPC_WEAK_FUNC(sub_83BB0058);
PPC_FUNC_IMPL(__imp__sub_83BB0058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24200
	ctx.r3.s64 = ctx.r11.s64 + -24200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0064"))) PPC_WEAK_FUNC(sub_83BB0064);
PPC_FUNC_IMPL(__imp__sub_83BB0064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0068"))) PPC_WEAK_FUNC(sub_83BB0068);
PPC_FUNC_IMPL(__imp__sub_83BB0068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24192
	ctx.r3.s64 = ctx.r11.s64 + -24192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0074"))) PPC_WEAK_FUNC(sub_83BB0074);
PPC_FUNC_IMPL(__imp__sub_83BB0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0078"))) PPC_WEAK_FUNC(sub_83BB0078);
PPC_FUNC_IMPL(__imp__sub_83BB0078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24184
	ctx.r3.s64 = ctx.r11.s64 + -24184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0084"))) PPC_WEAK_FUNC(sub_83BB0084);
PPC_FUNC_IMPL(__imp__sub_83BB0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0088"))) PPC_WEAK_FUNC(sub_83BB0088);
PPC_FUNC_IMPL(__imp__sub_83BB0088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24176
	ctx.r3.s64 = ctx.r11.s64 + -24176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0094"))) PPC_WEAK_FUNC(sub_83BB0094);
PPC_FUNC_IMPL(__imp__sub_83BB0094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0098"))) PPC_WEAK_FUNC(sub_83BB0098);
PPC_FUNC_IMPL(__imp__sub_83BB0098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24168
	ctx.r3.s64 = ctx.r11.s64 + -24168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB00A4"))) PPC_WEAK_FUNC(sub_83BB00A4);
PPC_FUNC_IMPL(__imp__sub_83BB00A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB00A8"))) PPC_WEAK_FUNC(sub_83BB00A8);
PPC_FUNC_IMPL(__imp__sub_83BB00A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24160
	ctx.r3.s64 = ctx.r11.s64 + -24160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB00B4"))) PPC_WEAK_FUNC(sub_83BB00B4);
PPC_FUNC_IMPL(__imp__sub_83BB00B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB00B8"))) PPC_WEAK_FUNC(sub_83BB00B8);
PPC_FUNC_IMPL(__imp__sub_83BB00B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24152
	ctx.r3.s64 = ctx.r11.s64 + -24152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB00C4"))) PPC_WEAK_FUNC(sub_83BB00C4);
PPC_FUNC_IMPL(__imp__sub_83BB00C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB00C8"))) PPC_WEAK_FUNC(sub_83BB00C8);
PPC_FUNC_IMPL(__imp__sub_83BB00C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24144
	ctx.r3.s64 = ctx.r11.s64 + -24144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB00D4"))) PPC_WEAK_FUNC(sub_83BB00D4);
PPC_FUNC_IMPL(__imp__sub_83BB00D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB00D8"))) PPC_WEAK_FUNC(sub_83BB00D8);
PPC_FUNC_IMPL(__imp__sub_83BB00D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24136
	ctx.r3.s64 = ctx.r11.s64 + -24136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB00E4"))) PPC_WEAK_FUNC(sub_83BB00E4);
PPC_FUNC_IMPL(__imp__sub_83BB00E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB00E8"))) PPC_WEAK_FUNC(sub_83BB00E8);
PPC_FUNC_IMPL(__imp__sub_83BB00E8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// bl 0x83523120
	ctx.lr = 0x83BB0100;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-24128
	ctx.r3.s64 = ctx.r10.s64 + -24128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB010C;
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

__attribute__((alias("__imp__sub_83BB011C"))) PPC_WEAK_FUNC(sub_83BB011C);
PPC_FUNC_IMPL(__imp__sub_83BB011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0120"))) PPC_WEAK_FUNC(sub_83BB0120);
PPC_FUNC_IMPL(__imp__sub_83BB0120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18704
	ctx.r7.s64 = ctx.r8.s64 + -18704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0148"))) PPC_WEAK_FUNC(sub_83BB0148);
PPC_FUNC_IMPL(__imp__sub_83BB0148) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-24280
	ctx.r6.s64 = ctx.r7.s64 + -24280;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24352(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24352);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18704);
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
	// std r9,-24280(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24280, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0190"))) PPC_WEAK_FUNC(sub_83BB0190);
PPC_FUNC_IMPL(__imp__sub_83BB0190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24112
	ctx.r3.s64 = ctx.r11.s64 + -24112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB019C"))) PPC_WEAK_FUNC(sub_83BB019C);
PPC_FUNC_IMPL(__imp__sub_83BB019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB01A0"))) PPC_WEAK_FUNC(sub_83BB01A0);
PPC_FUNC_IMPL(__imp__sub_83BB01A0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-18696
	ctx.r3.s64 = ctx.r11.s64 + -18696;
	// bl 0x8259af80
	ctx.lr = 0x83BB01B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-24096
	ctx.r3.s64 = ctx.r10.s64 + -24096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB01C4;
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

__attribute__((alias("__imp__sub_83BB01D4"))) PPC_WEAK_FUNC(sub_83BB01D4);
PPC_FUNC_IMPL(__imp__sub_83BB01D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB01D8"))) PPC_WEAK_FUNC(sub_83BB01D8);
PPC_FUNC_IMPL(__imp__sub_83BB01D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18716
	ctx.r11.s64 = ctx.r8.s64 + -18716;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24304);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-24104
	ctx.r3.s64 = ctx.r6.s64 + -24104;
	// stw r10,-18716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0208"))) PPC_WEAK_FUNC(sub_83BB0208);
PPC_FUNC_IMPL(__imp__sub_83BB0208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24088
	ctx.r3.s64 = ctx.r11.s64 + -24088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0214"))) PPC_WEAK_FUNC(sub_83BB0214);
PPC_FUNC_IMPL(__imp__sub_83BB0214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0218"))) PPC_WEAK_FUNC(sub_83BB0218);
PPC_FUNC_IMPL(__imp__sub_83BB0218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24080
	ctx.r3.s64 = ctx.r11.s64 + -24080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0224"))) PPC_WEAK_FUNC(sub_83BB0224);
PPC_FUNC_IMPL(__imp__sub_83BB0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0228"))) PPC_WEAK_FUNC(sub_83BB0228);
PPC_FUNC_IMPL(__imp__sub_83BB0228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24072
	ctx.r3.s64 = ctx.r11.s64 + -24072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0234"))) PPC_WEAK_FUNC(sub_83BB0234);
PPC_FUNC_IMPL(__imp__sub_83BB0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0238"))) PPC_WEAK_FUNC(sub_83BB0238);
PPC_FUNC_IMPL(__imp__sub_83BB0238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24064
	ctx.r3.s64 = ctx.r11.s64 + -24064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0244"))) PPC_WEAK_FUNC(sub_83BB0244);
PPC_FUNC_IMPL(__imp__sub_83BB0244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0248"))) PPC_WEAK_FUNC(sub_83BB0248);
PPC_FUNC_IMPL(__imp__sub_83BB0248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24056
	ctx.r3.s64 = ctx.r11.s64 + -24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0254"))) PPC_WEAK_FUNC(sub_83BB0254);
PPC_FUNC_IMPL(__imp__sub_83BB0254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0258"))) PPC_WEAK_FUNC(sub_83BB0258);
PPC_FUNC_IMPL(__imp__sub_83BB0258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24048
	ctx.r3.s64 = ctx.r11.s64 + -24048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0264"))) PPC_WEAK_FUNC(sub_83BB0264);
PPC_FUNC_IMPL(__imp__sub_83BB0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0268"))) PPC_WEAK_FUNC(sub_83BB0268);
PPC_FUNC_IMPL(__imp__sub_83BB0268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24040
	ctx.r3.s64 = ctx.r11.s64 + -24040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0274"))) PPC_WEAK_FUNC(sub_83BB0274);
PPC_FUNC_IMPL(__imp__sub_83BB0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0278"))) PPC_WEAK_FUNC(sub_83BB0278);
PPC_FUNC_IMPL(__imp__sub_83BB0278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24032
	ctx.r3.s64 = ctx.r11.s64 + -24032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0284"))) PPC_WEAK_FUNC(sub_83BB0284);
PPC_FUNC_IMPL(__imp__sub_83BB0284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0288"))) PPC_WEAK_FUNC(sub_83BB0288);
PPC_FUNC_IMPL(__imp__sub_83BB0288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24024
	ctx.r3.s64 = ctx.r11.s64 + -24024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0294"))) PPC_WEAK_FUNC(sub_83BB0294);
PPC_FUNC_IMPL(__imp__sub_83BB0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0298"))) PPC_WEAK_FUNC(sub_83BB0298);
PPC_FUNC_IMPL(__imp__sub_83BB0298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24016
	ctx.r3.s64 = ctx.r11.s64 + -24016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB02A4"))) PPC_WEAK_FUNC(sub_83BB02A4);
PPC_FUNC_IMPL(__imp__sub_83BB02A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB02A8"))) PPC_WEAK_FUNC(sub_83BB02A8);
PPC_FUNC_IMPL(__imp__sub_83BB02A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB02B4"))) PPC_WEAK_FUNC(sub_83BB02B4);
PPC_FUNC_IMPL(__imp__sub_83BB02B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB02B8"))) PPC_WEAK_FUNC(sub_83BB02B8);
PPC_FUNC_IMPL(__imp__sub_83BB02B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB02C4"))) PPC_WEAK_FUNC(sub_83BB02C4);
PPC_FUNC_IMPL(__imp__sub_83BB02C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB02C8"))) PPC_WEAK_FUNC(sub_83BB02C8);
PPC_FUNC_IMPL(__imp__sub_83BB02C8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-18351
	ctx.r3.s64 = ctx.r11.s64 + -18351;
	// bl 0x83523120
	ctx.lr = 0x83BB02E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23992
	ctx.r3.s64 = ctx.r10.s64 + -23992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB02EC;
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

__attribute__((alias("__imp__sub_83BB02FC"))) PPC_WEAK_FUNC(sub_83BB02FC);
PPC_FUNC_IMPL(__imp__sub_83BB02FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0300"))) PPC_WEAK_FUNC(sub_83BB0300);
PPC_FUNC_IMPL(__imp__sub_83BB0300) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18336
	ctx.r7.s64 = ctx.r8.s64 + -18336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0328"))) PPC_WEAK_FUNC(sub_83BB0328);
PPC_FUNC_IMPL(__imp__sub_83BB0328) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-24020
	ctx.r6.s64 = ctx.r7.s64 + -24020;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24092(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24092);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18336);
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
	// std r9,-24020(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24020, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0370"))) PPC_WEAK_FUNC(sub_83BB0370);
PPC_FUNC_IMPL(__imp__sub_83BB0370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23976
	ctx.r3.s64 = ctx.r11.s64 + -23976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB037C"))) PPC_WEAK_FUNC(sub_83BB037C);
PPC_FUNC_IMPL(__imp__sub_83BB037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0380"))) PPC_WEAK_FUNC(sub_83BB0380);
PPC_FUNC_IMPL(__imp__sub_83BB0380) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// bl 0x8259af80
	ctx.lr = 0x83BB0398;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23960
	ctx.r3.s64 = ctx.r10.s64 + -23960;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB03A4;
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

__attribute__((alias("__imp__sub_83BB03B4"))) PPC_WEAK_FUNC(sub_83BB03B4);
PPC_FUNC_IMPL(__imp__sub_83BB03B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB03B8"))) PPC_WEAK_FUNC(sub_83BB03B8);
PPC_FUNC_IMPL(__imp__sub_83BB03B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18348
	ctx.r11.s64 = ctx.r8.s64 + -18348;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-24044(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24044);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23968
	ctx.r3.s64 = ctx.r6.s64 + -23968;
	// stw r10,-18348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB03E8"))) PPC_WEAK_FUNC(sub_83BB03E8);
PPC_FUNC_IMPL(__imp__sub_83BB03E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23952
	ctx.r3.s64 = ctx.r11.s64 + -23952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB03F4"))) PPC_WEAK_FUNC(sub_83BB03F4);
PPC_FUNC_IMPL(__imp__sub_83BB03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB03F8"))) PPC_WEAK_FUNC(sub_83BB03F8);
PPC_FUNC_IMPL(__imp__sub_83BB03F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23944
	ctx.r3.s64 = ctx.r11.s64 + -23944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0404"))) PPC_WEAK_FUNC(sub_83BB0404);
PPC_FUNC_IMPL(__imp__sub_83BB0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0408"))) PPC_WEAK_FUNC(sub_83BB0408);
PPC_FUNC_IMPL(__imp__sub_83BB0408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23936
	ctx.r3.s64 = ctx.r11.s64 + -23936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0414"))) PPC_WEAK_FUNC(sub_83BB0414);
PPC_FUNC_IMPL(__imp__sub_83BB0414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0418"))) PPC_WEAK_FUNC(sub_83BB0418);
PPC_FUNC_IMPL(__imp__sub_83BB0418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23928
	ctx.r3.s64 = ctx.r11.s64 + -23928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0424"))) PPC_WEAK_FUNC(sub_83BB0424);
PPC_FUNC_IMPL(__imp__sub_83BB0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0428"))) PPC_WEAK_FUNC(sub_83BB0428);
PPC_FUNC_IMPL(__imp__sub_83BB0428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23920
	ctx.r3.s64 = ctx.r11.s64 + -23920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0434"))) PPC_WEAK_FUNC(sub_83BB0434);
PPC_FUNC_IMPL(__imp__sub_83BB0434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0438"))) PPC_WEAK_FUNC(sub_83BB0438);
PPC_FUNC_IMPL(__imp__sub_83BB0438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23912
	ctx.r3.s64 = ctx.r11.s64 + -23912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0444"))) PPC_WEAK_FUNC(sub_83BB0444);
PPC_FUNC_IMPL(__imp__sub_83BB0444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0448"))) PPC_WEAK_FUNC(sub_83BB0448);
PPC_FUNC_IMPL(__imp__sub_83BB0448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23904
	ctx.r3.s64 = ctx.r11.s64 + -23904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0454"))) PPC_WEAK_FUNC(sub_83BB0454);
PPC_FUNC_IMPL(__imp__sub_83BB0454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0458"))) PPC_WEAK_FUNC(sub_83BB0458);
PPC_FUNC_IMPL(__imp__sub_83BB0458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23896
	ctx.r3.s64 = ctx.r11.s64 + -23896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0464"))) PPC_WEAK_FUNC(sub_83BB0464);
PPC_FUNC_IMPL(__imp__sub_83BB0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0468"))) PPC_WEAK_FUNC(sub_83BB0468);
PPC_FUNC_IMPL(__imp__sub_83BB0468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23888
	ctx.r3.s64 = ctx.r11.s64 + -23888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0474"))) PPC_WEAK_FUNC(sub_83BB0474);
PPC_FUNC_IMPL(__imp__sub_83BB0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0478"))) PPC_WEAK_FUNC(sub_83BB0478);
PPC_FUNC_IMPL(__imp__sub_83BB0478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23880
	ctx.r3.s64 = ctx.r11.s64 + -23880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0484"))) PPC_WEAK_FUNC(sub_83BB0484);
PPC_FUNC_IMPL(__imp__sub_83BB0484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0488"))) PPC_WEAK_FUNC(sub_83BB0488);
PPC_FUNC_IMPL(__imp__sub_83BB0488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23872
	ctx.r3.s64 = ctx.r11.s64 + -23872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0494"))) PPC_WEAK_FUNC(sub_83BB0494);
PPC_FUNC_IMPL(__imp__sub_83BB0494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0498"))) PPC_WEAK_FUNC(sub_83BB0498);
PPC_FUNC_IMPL(__imp__sub_83BB0498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23864
	ctx.r3.s64 = ctx.r11.s64 + -23864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB04A4"))) PPC_WEAK_FUNC(sub_83BB04A4);
PPC_FUNC_IMPL(__imp__sub_83BB04A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB04A8"))) PPC_WEAK_FUNC(sub_83BB04A8);
PPC_FUNC_IMPL(__imp__sub_83BB04A8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// bl 0x83523120
	ctx.lr = 0x83BB04C0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23856
	ctx.r3.s64 = ctx.r10.s64 + -23856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB04CC;
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

__attribute__((alias("__imp__sub_83BB04DC"))) PPC_WEAK_FUNC(sub_83BB04DC);
PPC_FUNC_IMPL(__imp__sub_83BB04DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB04E0"))) PPC_WEAK_FUNC(sub_83BB04E0);
PPC_FUNC_IMPL(__imp__sub_83BB04E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17968
	ctx.r7.s64 = ctx.r8.s64 + -17968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17968(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0508"))) PPC_WEAK_FUNC(sub_83BB0508);
PPC_FUNC_IMPL(__imp__sub_83BB0508) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-23852
	ctx.r6.s64 = ctx.r7.s64 + -23852;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23924(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23924);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17968);
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
	// std r9,-23852(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23852, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0550"))) PPC_WEAK_FUNC(sub_83BB0550);
PPC_FUNC_IMPL(__imp__sub_83BB0550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23840
	ctx.r3.s64 = ctx.r11.s64 + -23840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB055C"))) PPC_WEAK_FUNC(sub_83BB055C);
PPC_FUNC_IMPL(__imp__sub_83BB055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0560"))) PPC_WEAK_FUNC(sub_83BB0560);
PPC_FUNC_IMPL(__imp__sub_83BB0560) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-17960
	ctx.r3.s64 = ctx.r11.s64 + -17960;
	// bl 0x8259af80
	ctx.lr = 0x83BB0578;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23824
	ctx.r3.s64 = ctx.r10.s64 + -23824;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0584;
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

__attribute__((alias("__imp__sub_83BB0594"))) PPC_WEAK_FUNC(sub_83BB0594);
PPC_FUNC_IMPL(__imp__sub_83BB0594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0598"))) PPC_WEAK_FUNC(sub_83BB0598);
PPC_FUNC_IMPL(__imp__sub_83BB0598) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17980
	ctx.r11.s64 = ctx.r8.s64 + -17980;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23876);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23832
	ctx.r3.s64 = ctx.r6.s64 + -23832;
	// stw r10,-17980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB05C8"))) PPC_WEAK_FUNC(sub_83BB05C8);
PPC_FUNC_IMPL(__imp__sub_83BB05C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23816
	ctx.r3.s64 = ctx.r11.s64 + -23816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB05D4"))) PPC_WEAK_FUNC(sub_83BB05D4);
PPC_FUNC_IMPL(__imp__sub_83BB05D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB05D8"))) PPC_WEAK_FUNC(sub_83BB05D8);
PPC_FUNC_IMPL(__imp__sub_83BB05D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23808
	ctx.r3.s64 = ctx.r11.s64 + -23808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB05E4"))) PPC_WEAK_FUNC(sub_83BB05E4);
PPC_FUNC_IMPL(__imp__sub_83BB05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB05E8"))) PPC_WEAK_FUNC(sub_83BB05E8);
PPC_FUNC_IMPL(__imp__sub_83BB05E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23800
	ctx.r3.s64 = ctx.r11.s64 + -23800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB05F4"))) PPC_WEAK_FUNC(sub_83BB05F4);
PPC_FUNC_IMPL(__imp__sub_83BB05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB05F8"))) PPC_WEAK_FUNC(sub_83BB05F8);
PPC_FUNC_IMPL(__imp__sub_83BB05F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23792
	ctx.r3.s64 = ctx.r11.s64 + -23792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0604"))) PPC_WEAK_FUNC(sub_83BB0604);
PPC_FUNC_IMPL(__imp__sub_83BB0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0608"))) PPC_WEAK_FUNC(sub_83BB0608);
PPC_FUNC_IMPL(__imp__sub_83BB0608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23784
	ctx.r3.s64 = ctx.r11.s64 + -23784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0614"))) PPC_WEAK_FUNC(sub_83BB0614);
PPC_FUNC_IMPL(__imp__sub_83BB0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0618"))) PPC_WEAK_FUNC(sub_83BB0618);
PPC_FUNC_IMPL(__imp__sub_83BB0618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23776
	ctx.r3.s64 = ctx.r11.s64 + -23776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0624"))) PPC_WEAK_FUNC(sub_83BB0624);
PPC_FUNC_IMPL(__imp__sub_83BB0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0628"))) PPC_WEAK_FUNC(sub_83BB0628);
PPC_FUNC_IMPL(__imp__sub_83BB0628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23768
	ctx.r3.s64 = ctx.r11.s64 + -23768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0634"))) PPC_WEAK_FUNC(sub_83BB0634);
PPC_FUNC_IMPL(__imp__sub_83BB0634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0638"))) PPC_WEAK_FUNC(sub_83BB0638);
PPC_FUNC_IMPL(__imp__sub_83BB0638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23760
	ctx.r3.s64 = ctx.r11.s64 + -23760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0644"))) PPC_WEAK_FUNC(sub_83BB0644);
PPC_FUNC_IMPL(__imp__sub_83BB0644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0648"))) PPC_WEAK_FUNC(sub_83BB0648);
PPC_FUNC_IMPL(__imp__sub_83BB0648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23752
	ctx.r3.s64 = ctx.r11.s64 + -23752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0654"))) PPC_WEAK_FUNC(sub_83BB0654);
PPC_FUNC_IMPL(__imp__sub_83BB0654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0658"))) PPC_WEAK_FUNC(sub_83BB0658);
PPC_FUNC_IMPL(__imp__sub_83BB0658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23744
	ctx.r3.s64 = ctx.r11.s64 + -23744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0664"))) PPC_WEAK_FUNC(sub_83BB0664);
PPC_FUNC_IMPL(__imp__sub_83BB0664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0668"))) PPC_WEAK_FUNC(sub_83BB0668);
PPC_FUNC_IMPL(__imp__sub_83BB0668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23736
	ctx.r3.s64 = ctx.r11.s64 + -23736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0674"))) PPC_WEAK_FUNC(sub_83BB0674);
PPC_FUNC_IMPL(__imp__sub_83BB0674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0678"))) PPC_WEAK_FUNC(sub_83BB0678);
PPC_FUNC_IMPL(__imp__sub_83BB0678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23728
	ctx.r3.s64 = ctx.r11.s64 + -23728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0684"))) PPC_WEAK_FUNC(sub_83BB0684);
PPC_FUNC_IMPL(__imp__sub_83BB0684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0688"))) PPC_WEAK_FUNC(sub_83BB0688);
PPC_FUNC_IMPL(__imp__sub_83BB0688) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-17616
	ctx.r3.s64 = ctx.r11.s64 + -17616;
	// bl 0x83523120
	ctx.lr = 0x83BB06A0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23720
	ctx.r3.s64 = ctx.r10.s64 + -23720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB06AC;
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

__attribute__((alias("__imp__sub_83BB06BC"))) PPC_WEAK_FUNC(sub_83BB06BC);
PPC_FUNC_IMPL(__imp__sub_83BB06BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB06C0"))) PPC_WEAK_FUNC(sub_83BB06C0);
PPC_FUNC_IMPL(__imp__sub_83BB06C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17600
	ctx.r7.s64 = ctx.r8.s64 + -17600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB06E8"))) PPC_WEAK_FUNC(sub_83BB06E8);
PPC_FUNC_IMPL(__imp__sub_83BB06E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-23704
	ctx.r6.s64 = ctx.r7.s64 + -23704;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17600);
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
	// std r9,-23704(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0730"))) PPC_WEAK_FUNC(sub_83BB0730);
PPC_FUNC_IMPL(__imp__sub_83BB0730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23704
	ctx.r3.s64 = ctx.r11.s64 + -23704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB073C"))) PPC_WEAK_FUNC(sub_83BB073C);
PPC_FUNC_IMPL(__imp__sub_83BB073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0740"))) PPC_WEAK_FUNC(sub_83BB0740);
PPC_FUNC_IMPL(__imp__sub_83BB0740) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-17592
	ctx.r3.s64 = ctx.r11.s64 + -17592;
	// bl 0x8259af80
	ctx.lr = 0x83BB0758;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23688
	ctx.r3.s64 = ctx.r10.s64 + -23688;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0764;
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

__attribute__((alias("__imp__sub_83BB0774"))) PPC_WEAK_FUNC(sub_83BB0774);
PPC_FUNC_IMPL(__imp__sub_83BB0774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0778"))) PPC_WEAK_FUNC(sub_83BB0778);
PPC_FUNC_IMPL(__imp__sub_83BB0778) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17612
	ctx.r11.s64 = ctx.r8.s64 + -17612;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23728);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23696
	ctx.r3.s64 = ctx.r6.s64 + -23696;
	// stw r10,-17612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB07A8"))) PPC_WEAK_FUNC(sub_83BB07A8);
PPC_FUNC_IMPL(__imp__sub_83BB07A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23680
	ctx.r3.s64 = ctx.r11.s64 + -23680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB07B4"))) PPC_WEAK_FUNC(sub_83BB07B4);
PPC_FUNC_IMPL(__imp__sub_83BB07B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB07B8"))) PPC_WEAK_FUNC(sub_83BB07B8);
PPC_FUNC_IMPL(__imp__sub_83BB07B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23672
	ctx.r3.s64 = ctx.r11.s64 + -23672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB07C4"))) PPC_WEAK_FUNC(sub_83BB07C4);
PPC_FUNC_IMPL(__imp__sub_83BB07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB07C8"))) PPC_WEAK_FUNC(sub_83BB07C8);
PPC_FUNC_IMPL(__imp__sub_83BB07C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23664
	ctx.r3.s64 = ctx.r11.s64 + -23664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB07D4"))) PPC_WEAK_FUNC(sub_83BB07D4);
PPC_FUNC_IMPL(__imp__sub_83BB07D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB07D8"))) PPC_WEAK_FUNC(sub_83BB07D8);
PPC_FUNC_IMPL(__imp__sub_83BB07D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23656
	ctx.r3.s64 = ctx.r11.s64 + -23656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB07E4"))) PPC_WEAK_FUNC(sub_83BB07E4);
PPC_FUNC_IMPL(__imp__sub_83BB07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB07E8"))) PPC_WEAK_FUNC(sub_83BB07E8);
PPC_FUNC_IMPL(__imp__sub_83BB07E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23648
	ctx.r3.s64 = ctx.r11.s64 + -23648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB07F4"))) PPC_WEAK_FUNC(sub_83BB07F4);
PPC_FUNC_IMPL(__imp__sub_83BB07F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB07F8"))) PPC_WEAK_FUNC(sub_83BB07F8);
PPC_FUNC_IMPL(__imp__sub_83BB07F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23640
	ctx.r3.s64 = ctx.r11.s64 + -23640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0804"))) PPC_WEAK_FUNC(sub_83BB0804);
PPC_FUNC_IMPL(__imp__sub_83BB0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0808"))) PPC_WEAK_FUNC(sub_83BB0808);
PPC_FUNC_IMPL(__imp__sub_83BB0808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23632
	ctx.r3.s64 = ctx.r11.s64 + -23632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0814"))) PPC_WEAK_FUNC(sub_83BB0814);
PPC_FUNC_IMPL(__imp__sub_83BB0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0818"))) PPC_WEAK_FUNC(sub_83BB0818);
PPC_FUNC_IMPL(__imp__sub_83BB0818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23624
	ctx.r3.s64 = ctx.r11.s64 + -23624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0824"))) PPC_WEAK_FUNC(sub_83BB0824);
PPC_FUNC_IMPL(__imp__sub_83BB0824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0828"))) PPC_WEAK_FUNC(sub_83BB0828);
PPC_FUNC_IMPL(__imp__sub_83BB0828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23616
	ctx.r3.s64 = ctx.r11.s64 + -23616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0834"))) PPC_WEAK_FUNC(sub_83BB0834);
PPC_FUNC_IMPL(__imp__sub_83BB0834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0838"))) PPC_WEAK_FUNC(sub_83BB0838);
PPC_FUNC_IMPL(__imp__sub_83BB0838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23608
	ctx.r3.s64 = ctx.r11.s64 + -23608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0844"))) PPC_WEAK_FUNC(sub_83BB0844);
PPC_FUNC_IMPL(__imp__sub_83BB0844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0848"))) PPC_WEAK_FUNC(sub_83BB0848);
PPC_FUNC_IMPL(__imp__sub_83BB0848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23600
	ctx.r3.s64 = ctx.r11.s64 + -23600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0854"))) PPC_WEAK_FUNC(sub_83BB0854);
PPC_FUNC_IMPL(__imp__sub_83BB0854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0858"))) PPC_WEAK_FUNC(sub_83BB0858);
PPC_FUNC_IMPL(__imp__sub_83BB0858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23592
	ctx.r3.s64 = ctx.r11.s64 + -23592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0864"))) PPC_WEAK_FUNC(sub_83BB0864);
PPC_FUNC_IMPL(__imp__sub_83BB0864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0868"))) PPC_WEAK_FUNC(sub_83BB0868);
PPC_FUNC_IMPL(__imp__sub_83BB0868) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-17248
	ctx.r3.s64 = ctx.r11.s64 + -17248;
	// bl 0x83523120
	ctx.lr = 0x83BB0880;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23584
	ctx.r3.s64 = ctx.r10.s64 + -23584;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB088C;
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

__attribute__((alias("__imp__sub_83BB089C"))) PPC_WEAK_FUNC(sub_83BB089C);
PPC_FUNC_IMPL(__imp__sub_83BB089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB08A0"))) PPC_WEAK_FUNC(sub_83BB08A0);
PPC_FUNC_IMPL(__imp__sub_83BB08A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17232
	ctx.r7.s64 = ctx.r8.s64 + -17232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB08C8"))) PPC_WEAK_FUNC(sub_83BB08C8);
PPC_FUNC_IMPL(__imp__sub_83BB08C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-23556
	ctx.r6.s64 = ctx.r7.s64 + -23556;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23628(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23628);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17232);
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
	// std r9,-23556(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23556, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0910"))) PPC_WEAK_FUNC(sub_83BB0910);
PPC_FUNC_IMPL(__imp__sub_83BB0910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23568
	ctx.r3.s64 = ctx.r11.s64 + -23568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB091C"))) PPC_WEAK_FUNC(sub_83BB091C);
PPC_FUNC_IMPL(__imp__sub_83BB091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0920"))) PPC_WEAK_FUNC(sub_83BB0920);
PPC_FUNC_IMPL(__imp__sub_83BB0920) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-17224
	ctx.r3.s64 = ctx.r11.s64 + -17224;
	// bl 0x8259af80
	ctx.lr = 0x83BB0938;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23552
	ctx.r3.s64 = ctx.r10.s64 + -23552;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0944;
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

__attribute__((alias("__imp__sub_83BB0954"))) PPC_WEAK_FUNC(sub_83BB0954);
PPC_FUNC_IMPL(__imp__sub_83BB0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0958"))) PPC_WEAK_FUNC(sub_83BB0958);
PPC_FUNC_IMPL(__imp__sub_83BB0958) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17244
	ctx.r11.s64 = ctx.r8.s64 + -17244;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23580(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23560
	ctx.r3.s64 = ctx.r6.s64 + -23560;
	// stw r10,-17244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0988"))) PPC_WEAK_FUNC(sub_83BB0988);
PPC_FUNC_IMPL(__imp__sub_83BB0988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23544
	ctx.r3.s64 = ctx.r11.s64 + -23544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0994"))) PPC_WEAK_FUNC(sub_83BB0994);
PPC_FUNC_IMPL(__imp__sub_83BB0994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0998"))) PPC_WEAK_FUNC(sub_83BB0998);
PPC_FUNC_IMPL(__imp__sub_83BB0998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23536
	ctx.r3.s64 = ctx.r11.s64 + -23536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB09A4"))) PPC_WEAK_FUNC(sub_83BB09A4);
PPC_FUNC_IMPL(__imp__sub_83BB09A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB09A8"))) PPC_WEAK_FUNC(sub_83BB09A8);
PPC_FUNC_IMPL(__imp__sub_83BB09A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23528
	ctx.r3.s64 = ctx.r11.s64 + -23528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB09B4"))) PPC_WEAK_FUNC(sub_83BB09B4);
PPC_FUNC_IMPL(__imp__sub_83BB09B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB09B8"))) PPC_WEAK_FUNC(sub_83BB09B8);
PPC_FUNC_IMPL(__imp__sub_83BB09B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23520
	ctx.r3.s64 = ctx.r11.s64 + -23520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB09C4"))) PPC_WEAK_FUNC(sub_83BB09C4);
PPC_FUNC_IMPL(__imp__sub_83BB09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB09C8"))) PPC_WEAK_FUNC(sub_83BB09C8);
PPC_FUNC_IMPL(__imp__sub_83BB09C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23512
	ctx.r3.s64 = ctx.r11.s64 + -23512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB09D4"))) PPC_WEAK_FUNC(sub_83BB09D4);
PPC_FUNC_IMPL(__imp__sub_83BB09D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB09D8"))) PPC_WEAK_FUNC(sub_83BB09D8);
PPC_FUNC_IMPL(__imp__sub_83BB09D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23504
	ctx.r3.s64 = ctx.r11.s64 + -23504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB09E4"))) PPC_WEAK_FUNC(sub_83BB09E4);
PPC_FUNC_IMPL(__imp__sub_83BB09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB09E8"))) PPC_WEAK_FUNC(sub_83BB09E8);
PPC_FUNC_IMPL(__imp__sub_83BB09E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23496
	ctx.r3.s64 = ctx.r11.s64 + -23496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB09F4"))) PPC_WEAK_FUNC(sub_83BB09F4);
PPC_FUNC_IMPL(__imp__sub_83BB09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB09F8"))) PPC_WEAK_FUNC(sub_83BB09F8);
PPC_FUNC_IMPL(__imp__sub_83BB09F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23488
	ctx.r3.s64 = ctx.r11.s64 + -23488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0A04"))) PPC_WEAK_FUNC(sub_83BB0A04);
PPC_FUNC_IMPL(__imp__sub_83BB0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0A08"))) PPC_WEAK_FUNC(sub_83BB0A08);
PPC_FUNC_IMPL(__imp__sub_83BB0A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23480
	ctx.r3.s64 = ctx.r11.s64 + -23480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0A14"))) PPC_WEAK_FUNC(sub_83BB0A14);
PPC_FUNC_IMPL(__imp__sub_83BB0A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0A18"))) PPC_WEAK_FUNC(sub_83BB0A18);
PPC_FUNC_IMPL(__imp__sub_83BB0A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23472
	ctx.r3.s64 = ctx.r11.s64 + -23472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0A24"))) PPC_WEAK_FUNC(sub_83BB0A24);
PPC_FUNC_IMPL(__imp__sub_83BB0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0A28"))) PPC_WEAK_FUNC(sub_83BB0A28);
PPC_FUNC_IMPL(__imp__sub_83BB0A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23464
	ctx.r3.s64 = ctx.r11.s64 + -23464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0A34"))) PPC_WEAK_FUNC(sub_83BB0A34);
PPC_FUNC_IMPL(__imp__sub_83BB0A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0A38"))) PPC_WEAK_FUNC(sub_83BB0A38);
PPC_FUNC_IMPL(__imp__sub_83BB0A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23456
	ctx.r3.s64 = ctx.r11.s64 + -23456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0A44"))) PPC_WEAK_FUNC(sub_83BB0A44);
PPC_FUNC_IMPL(__imp__sub_83BB0A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

