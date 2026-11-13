#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BB0A48"))) PPC_WEAK_FUNC(sub_83BB0A48);
PPC_FUNC_IMPL(__imp__sub_83BB0A48) {
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
	// addi r3,r11,-16880
	ctx.r3.s64 = ctx.r11.s64 + -16880;
	// bl 0x83523120
	ctx.lr = 0x83BB0A60;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23448
	ctx.r3.s64 = ctx.r10.s64 + -23448;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0A6C;
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

__attribute__((alias("__imp__sub_83BB0A7C"))) PPC_WEAK_FUNC(sub_83BB0A7C);
PPC_FUNC_IMPL(__imp__sub_83BB0A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0A80"))) PPC_WEAK_FUNC(sub_83BB0A80);
PPC_FUNC_IMPL(__imp__sub_83BB0A80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16864
	ctx.r7.s64 = ctx.r8.s64 + -16864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16864(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0AA8"))) PPC_WEAK_FUNC(sub_83BB0AA8);
PPC_FUNC_IMPL(__imp__sub_83BB0AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-23412
	ctx.r6.s64 = ctx.r7.s64 + -23412;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23484(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23484);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16864);
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
	// std r9,-23412(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23412, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0AF0"))) PPC_WEAK_FUNC(sub_83BB0AF0);
PPC_FUNC_IMPL(__imp__sub_83BB0AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23432
	ctx.r3.s64 = ctx.r11.s64 + -23432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0AFC"))) PPC_WEAK_FUNC(sub_83BB0AFC);
PPC_FUNC_IMPL(__imp__sub_83BB0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0B00"))) PPC_WEAK_FUNC(sub_83BB0B00);
PPC_FUNC_IMPL(__imp__sub_83BB0B00) {
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
	// addi r3,r11,-16856
	ctx.r3.s64 = ctx.r11.s64 + -16856;
	// bl 0x8259af80
	ctx.lr = 0x83BB0B18;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23416
	ctx.r3.s64 = ctx.r10.s64 + -23416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0B24;
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

__attribute__((alias("__imp__sub_83BB0B34"))) PPC_WEAK_FUNC(sub_83BB0B34);
PPC_FUNC_IMPL(__imp__sub_83BB0B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0B38"))) PPC_WEAK_FUNC(sub_83BB0B38);
PPC_FUNC_IMPL(__imp__sub_83BB0B38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16876
	ctx.r11.s64 = ctx.r8.s64 + -16876;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23436);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23424
	ctx.r3.s64 = ctx.r6.s64 + -23424;
	// stw r10,-16876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0B68"))) PPC_WEAK_FUNC(sub_83BB0B68);
PPC_FUNC_IMPL(__imp__sub_83BB0B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23408
	ctx.r3.s64 = ctx.r11.s64 + -23408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0B74"))) PPC_WEAK_FUNC(sub_83BB0B74);
PPC_FUNC_IMPL(__imp__sub_83BB0B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0B78"))) PPC_WEAK_FUNC(sub_83BB0B78);
PPC_FUNC_IMPL(__imp__sub_83BB0B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23400
	ctx.r3.s64 = ctx.r11.s64 + -23400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0B84"))) PPC_WEAK_FUNC(sub_83BB0B84);
PPC_FUNC_IMPL(__imp__sub_83BB0B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0B88"))) PPC_WEAK_FUNC(sub_83BB0B88);
PPC_FUNC_IMPL(__imp__sub_83BB0B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23392
	ctx.r3.s64 = ctx.r11.s64 + -23392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0B94"))) PPC_WEAK_FUNC(sub_83BB0B94);
PPC_FUNC_IMPL(__imp__sub_83BB0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0B98"))) PPC_WEAK_FUNC(sub_83BB0B98);
PPC_FUNC_IMPL(__imp__sub_83BB0B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23384
	ctx.r3.s64 = ctx.r11.s64 + -23384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0BA4"))) PPC_WEAK_FUNC(sub_83BB0BA4);
PPC_FUNC_IMPL(__imp__sub_83BB0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0BA8"))) PPC_WEAK_FUNC(sub_83BB0BA8);
PPC_FUNC_IMPL(__imp__sub_83BB0BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23376
	ctx.r3.s64 = ctx.r11.s64 + -23376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0BB4"))) PPC_WEAK_FUNC(sub_83BB0BB4);
PPC_FUNC_IMPL(__imp__sub_83BB0BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0BB8"))) PPC_WEAK_FUNC(sub_83BB0BB8);
PPC_FUNC_IMPL(__imp__sub_83BB0BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23368
	ctx.r3.s64 = ctx.r11.s64 + -23368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0BC4"))) PPC_WEAK_FUNC(sub_83BB0BC4);
PPC_FUNC_IMPL(__imp__sub_83BB0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0BC8"))) PPC_WEAK_FUNC(sub_83BB0BC8);
PPC_FUNC_IMPL(__imp__sub_83BB0BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0BD4"))) PPC_WEAK_FUNC(sub_83BB0BD4);
PPC_FUNC_IMPL(__imp__sub_83BB0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0BD8"))) PPC_WEAK_FUNC(sub_83BB0BD8);
PPC_FUNC_IMPL(__imp__sub_83BB0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23352
	ctx.r3.s64 = ctx.r11.s64 + -23352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0BE4"))) PPC_WEAK_FUNC(sub_83BB0BE4);
PPC_FUNC_IMPL(__imp__sub_83BB0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0BE8"))) PPC_WEAK_FUNC(sub_83BB0BE8);
PPC_FUNC_IMPL(__imp__sub_83BB0BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23344
	ctx.r3.s64 = ctx.r11.s64 + -23344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0BF4"))) PPC_WEAK_FUNC(sub_83BB0BF4);
PPC_FUNC_IMPL(__imp__sub_83BB0BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0BF8"))) PPC_WEAK_FUNC(sub_83BB0BF8);
PPC_FUNC_IMPL(__imp__sub_83BB0BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23336
	ctx.r3.s64 = ctx.r11.s64 + -23336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0C04"))) PPC_WEAK_FUNC(sub_83BB0C04);
PPC_FUNC_IMPL(__imp__sub_83BB0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0C08"))) PPC_WEAK_FUNC(sub_83BB0C08);
PPC_FUNC_IMPL(__imp__sub_83BB0C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23328
	ctx.r3.s64 = ctx.r11.s64 + -23328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0C14"))) PPC_WEAK_FUNC(sub_83BB0C14);
PPC_FUNC_IMPL(__imp__sub_83BB0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0C18"))) PPC_WEAK_FUNC(sub_83BB0C18);
PPC_FUNC_IMPL(__imp__sub_83BB0C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23320
	ctx.r3.s64 = ctx.r11.s64 + -23320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0C24"))) PPC_WEAK_FUNC(sub_83BB0C24);
PPC_FUNC_IMPL(__imp__sub_83BB0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0C28"))) PPC_WEAK_FUNC(sub_83BB0C28);
PPC_FUNC_IMPL(__imp__sub_83BB0C28) {
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
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// bl 0x83523120
	ctx.lr = 0x83BB0C40;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23312
	ctx.r3.s64 = ctx.r10.s64 + -23312;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0C4C;
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

__attribute__((alias("__imp__sub_83BB0C5C"))) PPC_WEAK_FUNC(sub_83BB0C5C);
PPC_FUNC_IMPL(__imp__sub_83BB0C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0C60"))) PPC_WEAK_FUNC(sub_83BB0C60);
PPC_FUNC_IMPL(__imp__sub_83BB0C60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16496
	ctx.r7.s64 = ctx.r8.s64 + -16496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16496);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16496(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16496, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0C88"))) PPC_WEAK_FUNC(sub_83BB0C88);
PPC_FUNC_IMPL(__imp__sub_83BB0C88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-23252
	ctx.r6.s64 = ctx.r7.s64 + -23252;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23324(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23324);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16496);
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
	// std r9,-23252(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23252, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0CD0"))) PPC_WEAK_FUNC(sub_83BB0CD0);
PPC_FUNC_IMPL(__imp__sub_83BB0CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23296
	ctx.r3.s64 = ctx.r11.s64 + -23296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0CDC"))) PPC_WEAK_FUNC(sub_83BB0CDC);
PPC_FUNC_IMPL(__imp__sub_83BB0CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0CE0"))) PPC_WEAK_FUNC(sub_83BB0CE0);
PPC_FUNC_IMPL(__imp__sub_83BB0CE0) {
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
	// addi r3,r11,-16488
	ctx.r3.s64 = ctx.r11.s64 + -16488;
	// bl 0x8259af80
	ctx.lr = 0x83BB0CF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23280
	ctx.r3.s64 = ctx.r10.s64 + -23280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0D04;
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

__attribute__((alias("__imp__sub_83BB0D14"))) PPC_WEAK_FUNC(sub_83BB0D14);
PPC_FUNC_IMPL(__imp__sub_83BB0D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0D18"))) PPC_WEAK_FUNC(sub_83BB0D18);
PPC_FUNC_IMPL(__imp__sub_83BB0D18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16508
	ctx.r11.s64 = ctx.r8.s64 + -16508;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23276);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23288
	ctx.r3.s64 = ctx.r6.s64 + -23288;
	// stw r10,-16508(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0D48"))) PPC_WEAK_FUNC(sub_83BB0D48);
PPC_FUNC_IMPL(__imp__sub_83BB0D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23272
	ctx.r3.s64 = ctx.r11.s64 + -23272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0D54"))) PPC_WEAK_FUNC(sub_83BB0D54);
PPC_FUNC_IMPL(__imp__sub_83BB0D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0D58"))) PPC_WEAK_FUNC(sub_83BB0D58);
PPC_FUNC_IMPL(__imp__sub_83BB0D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23264
	ctx.r3.s64 = ctx.r11.s64 + -23264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0D64"))) PPC_WEAK_FUNC(sub_83BB0D64);
PPC_FUNC_IMPL(__imp__sub_83BB0D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0D68"))) PPC_WEAK_FUNC(sub_83BB0D68);
PPC_FUNC_IMPL(__imp__sub_83BB0D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23256
	ctx.r3.s64 = ctx.r11.s64 + -23256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0D74"))) PPC_WEAK_FUNC(sub_83BB0D74);
PPC_FUNC_IMPL(__imp__sub_83BB0D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0D78"))) PPC_WEAK_FUNC(sub_83BB0D78);
PPC_FUNC_IMPL(__imp__sub_83BB0D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23248
	ctx.r3.s64 = ctx.r11.s64 + -23248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0D84"))) PPC_WEAK_FUNC(sub_83BB0D84);
PPC_FUNC_IMPL(__imp__sub_83BB0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0D88"))) PPC_WEAK_FUNC(sub_83BB0D88);
PPC_FUNC_IMPL(__imp__sub_83BB0D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23240
	ctx.r3.s64 = ctx.r11.s64 + -23240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0D94"))) PPC_WEAK_FUNC(sub_83BB0D94);
PPC_FUNC_IMPL(__imp__sub_83BB0D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0D98"))) PPC_WEAK_FUNC(sub_83BB0D98);
PPC_FUNC_IMPL(__imp__sub_83BB0D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23232
	ctx.r3.s64 = ctx.r11.s64 + -23232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0DA4"))) PPC_WEAK_FUNC(sub_83BB0DA4);
PPC_FUNC_IMPL(__imp__sub_83BB0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0DA8"))) PPC_WEAK_FUNC(sub_83BB0DA8);
PPC_FUNC_IMPL(__imp__sub_83BB0DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23224
	ctx.r3.s64 = ctx.r11.s64 + -23224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0DB4"))) PPC_WEAK_FUNC(sub_83BB0DB4);
PPC_FUNC_IMPL(__imp__sub_83BB0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0DB8"))) PPC_WEAK_FUNC(sub_83BB0DB8);
PPC_FUNC_IMPL(__imp__sub_83BB0DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23216
	ctx.r3.s64 = ctx.r11.s64 + -23216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0DC4"))) PPC_WEAK_FUNC(sub_83BB0DC4);
PPC_FUNC_IMPL(__imp__sub_83BB0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0DC8"))) PPC_WEAK_FUNC(sub_83BB0DC8);
PPC_FUNC_IMPL(__imp__sub_83BB0DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23208
	ctx.r3.s64 = ctx.r11.s64 + -23208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0DD4"))) PPC_WEAK_FUNC(sub_83BB0DD4);
PPC_FUNC_IMPL(__imp__sub_83BB0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0DD8"))) PPC_WEAK_FUNC(sub_83BB0DD8);
PPC_FUNC_IMPL(__imp__sub_83BB0DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23200
	ctx.r3.s64 = ctx.r11.s64 + -23200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0DE4"))) PPC_WEAK_FUNC(sub_83BB0DE4);
PPC_FUNC_IMPL(__imp__sub_83BB0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0DE8"))) PPC_WEAK_FUNC(sub_83BB0DE8);
PPC_FUNC_IMPL(__imp__sub_83BB0DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23192
	ctx.r3.s64 = ctx.r11.s64 + -23192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0DF4"))) PPC_WEAK_FUNC(sub_83BB0DF4);
PPC_FUNC_IMPL(__imp__sub_83BB0DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0DF8"))) PPC_WEAK_FUNC(sub_83BB0DF8);
PPC_FUNC_IMPL(__imp__sub_83BB0DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23184
	ctx.r3.s64 = ctx.r11.s64 + -23184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0E04"))) PPC_WEAK_FUNC(sub_83BB0E04);
PPC_FUNC_IMPL(__imp__sub_83BB0E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0E08"))) PPC_WEAK_FUNC(sub_83BB0E08);
PPC_FUNC_IMPL(__imp__sub_83BB0E08) {
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
	// addi r3,r11,-16144
	ctx.r3.s64 = ctx.r11.s64 + -16144;
	// bl 0x83523120
	ctx.lr = 0x83BB0E20;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23176
	ctx.r3.s64 = ctx.r10.s64 + -23176;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0E2C;
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

__attribute__((alias("__imp__sub_83BB0E3C"))) PPC_WEAK_FUNC(sub_83BB0E3C);
PPC_FUNC_IMPL(__imp__sub_83BB0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0E40"))) PPC_WEAK_FUNC(sub_83BB0E40);
PPC_FUNC_IMPL(__imp__sub_83BB0E40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16128
	ctx.r7.s64 = ctx.r8.s64 + -16128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16128(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0E68"))) PPC_WEAK_FUNC(sub_83BB0E68);
PPC_FUNC_IMPL(__imp__sub_83BB0E68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-23116
	ctx.r6.s64 = ctx.r7.s64 + -23116;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23188(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23188);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16128);
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
	// std r9,-23116(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23116, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB0EB0"))) PPC_WEAK_FUNC(sub_83BB0EB0);
PPC_FUNC_IMPL(__imp__sub_83BB0EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23160
	ctx.r3.s64 = ctx.r11.s64 + -23160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0EBC"))) PPC_WEAK_FUNC(sub_83BB0EBC);
PPC_FUNC_IMPL(__imp__sub_83BB0EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0EC0"))) PPC_WEAK_FUNC(sub_83BB0EC0);
PPC_FUNC_IMPL(__imp__sub_83BB0EC0) {
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
	// addi r3,r11,-16120
	ctx.r3.s64 = ctx.r11.s64 + -16120;
	// bl 0x8259af80
	ctx.lr = 0x83BB0ED8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23144
	ctx.r3.s64 = ctx.r10.s64 + -23144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB0EE4;
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

__attribute__((alias("__imp__sub_83BB0EF4"))) PPC_WEAK_FUNC(sub_83BB0EF4);
PPC_FUNC_IMPL(__imp__sub_83BB0EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0EF8"))) PPC_WEAK_FUNC(sub_83BB0EF8);
PPC_FUNC_IMPL(__imp__sub_83BB0EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16140
	ctx.r11.s64 = ctx.r8.s64 + -16140;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23140);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23152
	ctx.r3.s64 = ctx.r6.s64 + -23152;
	// stw r10,-16140(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0F28"))) PPC_WEAK_FUNC(sub_83BB0F28);
PPC_FUNC_IMPL(__imp__sub_83BB0F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23136
	ctx.r3.s64 = ctx.r11.s64 + -23136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0F34"))) PPC_WEAK_FUNC(sub_83BB0F34);
PPC_FUNC_IMPL(__imp__sub_83BB0F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0F38"))) PPC_WEAK_FUNC(sub_83BB0F38);
PPC_FUNC_IMPL(__imp__sub_83BB0F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23128
	ctx.r3.s64 = ctx.r11.s64 + -23128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0F44"))) PPC_WEAK_FUNC(sub_83BB0F44);
PPC_FUNC_IMPL(__imp__sub_83BB0F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0F48"))) PPC_WEAK_FUNC(sub_83BB0F48);
PPC_FUNC_IMPL(__imp__sub_83BB0F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23120
	ctx.r3.s64 = ctx.r11.s64 + -23120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0F54"))) PPC_WEAK_FUNC(sub_83BB0F54);
PPC_FUNC_IMPL(__imp__sub_83BB0F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0F58"))) PPC_WEAK_FUNC(sub_83BB0F58);
PPC_FUNC_IMPL(__imp__sub_83BB0F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23112
	ctx.r3.s64 = ctx.r11.s64 + -23112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0F64"))) PPC_WEAK_FUNC(sub_83BB0F64);
PPC_FUNC_IMPL(__imp__sub_83BB0F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0F68"))) PPC_WEAK_FUNC(sub_83BB0F68);
PPC_FUNC_IMPL(__imp__sub_83BB0F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23104
	ctx.r3.s64 = ctx.r11.s64 + -23104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0F74"))) PPC_WEAK_FUNC(sub_83BB0F74);
PPC_FUNC_IMPL(__imp__sub_83BB0F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0F78"))) PPC_WEAK_FUNC(sub_83BB0F78);
PPC_FUNC_IMPL(__imp__sub_83BB0F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23096
	ctx.r3.s64 = ctx.r11.s64 + -23096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0F84"))) PPC_WEAK_FUNC(sub_83BB0F84);
PPC_FUNC_IMPL(__imp__sub_83BB0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0F88"))) PPC_WEAK_FUNC(sub_83BB0F88);
PPC_FUNC_IMPL(__imp__sub_83BB0F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23088
	ctx.r3.s64 = ctx.r11.s64 + -23088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0F94"))) PPC_WEAK_FUNC(sub_83BB0F94);
PPC_FUNC_IMPL(__imp__sub_83BB0F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0F98"))) PPC_WEAK_FUNC(sub_83BB0F98);
PPC_FUNC_IMPL(__imp__sub_83BB0F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23080
	ctx.r3.s64 = ctx.r11.s64 + -23080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0FA4"))) PPC_WEAK_FUNC(sub_83BB0FA4);
PPC_FUNC_IMPL(__imp__sub_83BB0FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0FA8"))) PPC_WEAK_FUNC(sub_83BB0FA8);
PPC_FUNC_IMPL(__imp__sub_83BB0FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0FB4"))) PPC_WEAK_FUNC(sub_83BB0FB4);
PPC_FUNC_IMPL(__imp__sub_83BB0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0FB8"))) PPC_WEAK_FUNC(sub_83BB0FB8);
PPC_FUNC_IMPL(__imp__sub_83BB0FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23064
	ctx.r3.s64 = ctx.r11.s64 + -23064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0FC4"))) PPC_WEAK_FUNC(sub_83BB0FC4);
PPC_FUNC_IMPL(__imp__sub_83BB0FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0FC8"))) PPC_WEAK_FUNC(sub_83BB0FC8);
PPC_FUNC_IMPL(__imp__sub_83BB0FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23056
	ctx.r3.s64 = ctx.r11.s64 + -23056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0FD4"))) PPC_WEAK_FUNC(sub_83BB0FD4);
PPC_FUNC_IMPL(__imp__sub_83BB0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0FD8"))) PPC_WEAK_FUNC(sub_83BB0FD8);
PPC_FUNC_IMPL(__imp__sub_83BB0FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23048
	ctx.r3.s64 = ctx.r11.s64 + -23048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB0FE4"))) PPC_WEAK_FUNC(sub_83BB0FE4);
PPC_FUNC_IMPL(__imp__sub_83BB0FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB0FE8"))) PPC_WEAK_FUNC(sub_83BB0FE8);
PPC_FUNC_IMPL(__imp__sub_83BB0FE8) {
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
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// bl 0x83523120
	ctx.lr = 0x83BB1000;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23040
	ctx.r3.s64 = ctx.r10.s64 + -23040;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB100C;
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

__attribute__((alias("__imp__sub_83BB101C"))) PPC_WEAK_FUNC(sub_83BB101C);
PPC_FUNC_IMPL(__imp__sub_83BB101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1020"))) PPC_WEAK_FUNC(sub_83BB1020);
PPC_FUNC_IMPL(__imp__sub_83BB1020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15760
	ctx.r7.s64 = ctx.r8.s64 + -15760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1048"))) PPC_WEAK_FUNC(sub_83BB1048);
PPC_FUNC_IMPL(__imp__sub_83BB1048) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-22988
	ctx.r6.s64 = ctx.r7.s64 + -22988;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23060(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23060);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15760(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15760);
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
	// std r9,-22988(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22988, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1090"))) PPC_WEAK_FUNC(sub_83BB1090);
PPC_FUNC_IMPL(__imp__sub_83BB1090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23024
	ctx.r3.s64 = ctx.r11.s64 + -23024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB109C"))) PPC_WEAK_FUNC(sub_83BB109C);
PPC_FUNC_IMPL(__imp__sub_83BB109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB10A0"))) PPC_WEAK_FUNC(sub_83BB10A0);
PPC_FUNC_IMPL(__imp__sub_83BB10A0) {
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
	// addi r3,r11,-15752
	ctx.r3.s64 = ctx.r11.s64 + -15752;
	// bl 0x8259af80
	ctx.lr = 0x83BB10B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-23008
	ctx.r3.s64 = ctx.r10.s64 + -23008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB10C4;
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

__attribute__((alias("__imp__sub_83BB10D4"))) PPC_WEAK_FUNC(sub_83BB10D4);
PPC_FUNC_IMPL(__imp__sub_83BB10D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB10D8"))) PPC_WEAK_FUNC(sub_83BB10D8);
PPC_FUNC_IMPL(__imp__sub_83BB10D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15772
	ctx.r11.s64 = ctx.r8.s64 + -15772;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23012(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23012);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23016
	ctx.r3.s64 = ctx.r6.s64 + -23016;
	// stw r10,-15772(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1108"))) PPC_WEAK_FUNC(sub_83BB1108);
PPC_FUNC_IMPL(__imp__sub_83BB1108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-23000
	ctx.r3.s64 = ctx.r11.s64 + -23000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1114"))) PPC_WEAK_FUNC(sub_83BB1114);
PPC_FUNC_IMPL(__imp__sub_83BB1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1118"))) PPC_WEAK_FUNC(sub_83BB1118);
PPC_FUNC_IMPL(__imp__sub_83BB1118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22992
	ctx.r3.s64 = ctx.r11.s64 + -22992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1124"))) PPC_WEAK_FUNC(sub_83BB1124);
PPC_FUNC_IMPL(__imp__sub_83BB1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1128"))) PPC_WEAK_FUNC(sub_83BB1128);
PPC_FUNC_IMPL(__imp__sub_83BB1128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22984
	ctx.r3.s64 = ctx.r11.s64 + -22984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1134"))) PPC_WEAK_FUNC(sub_83BB1134);
PPC_FUNC_IMPL(__imp__sub_83BB1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1138"))) PPC_WEAK_FUNC(sub_83BB1138);
PPC_FUNC_IMPL(__imp__sub_83BB1138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22976
	ctx.r3.s64 = ctx.r11.s64 + -22976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1144"))) PPC_WEAK_FUNC(sub_83BB1144);
PPC_FUNC_IMPL(__imp__sub_83BB1144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1148"))) PPC_WEAK_FUNC(sub_83BB1148);
PPC_FUNC_IMPL(__imp__sub_83BB1148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22968
	ctx.r3.s64 = ctx.r11.s64 + -22968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1154"))) PPC_WEAK_FUNC(sub_83BB1154);
PPC_FUNC_IMPL(__imp__sub_83BB1154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1158"))) PPC_WEAK_FUNC(sub_83BB1158);
PPC_FUNC_IMPL(__imp__sub_83BB1158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22960
	ctx.r3.s64 = ctx.r11.s64 + -22960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1164"))) PPC_WEAK_FUNC(sub_83BB1164);
PPC_FUNC_IMPL(__imp__sub_83BB1164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1168"))) PPC_WEAK_FUNC(sub_83BB1168);
PPC_FUNC_IMPL(__imp__sub_83BB1168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22952
	ctx.r3.s64 = ctx.r11.s64 + -22952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1174"))) PPC_WEAK_FUNC(sub_83BB1174);
PPC_FUNC_IMPL(__imp__sub_83BB1174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1178"))) PPC_WEAK_FUNC(sub_83BB1178);
PPC_FUNC_IMPL(__imp__sub_83BB1178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22944
	ctx.r3.s64 = ctx.r11.s64 + -22944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1184"))) PPC_WEAK_FUNC(sub_83BB1184);
PPC_FUNC_IMPL(__imp__sub_83BB1184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1188"))) PPC_WEAK_FUNC(sub_83BB1188);
PPC_FUNC_IMPL(__imp__sub_83BB1188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22936
	ctx.r3.s64 = ctx.r11.s64 + -22936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1194"))) PPC_WEAK_FUNC(sub_83BB1194);
PPC_FUNC_IMPL(__imp__sub_83BB1194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1198"))) PPC_WEAK_FUNC(sub_83BB1198);
PPC_FUNC_IMPL(__imp__sub_83BB1198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22928
	ctx.r3.s64 = ctx.r11.s64 + -22928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB11A4"))) PPC_WEAK_FUNC(sub_83BB11A4);
PPC_FUNC_IMPL(__imp__sub_83BB11A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB11A8"))) PPC_WEAK_FUNC(sub_83BB11A8);
PPC_FUNC_IMPL(__imp__sub_83BB11A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22920
	ctx.r3.s64 = ctx.r11.s64 + -22920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB11B4"))) PPC_WEAK_FUNC(sub_83BB11B4);
PPC_FUNC_IMPL(__imp__sub_83BB11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB11B8"))) PPC_WEAK_FUNC(sub_83BB11B8);
PPC_FUNC_IMPL(__imp__sub_83BB11B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22912
	ctx.r3.s64 = ctx.r11.s64 + -22912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB11C4"))) PPC_WEAK_FUNC(sub_83BB11C4);
PPC_FUNC_IMPL(__imp__sub_83BB11C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB11C8"))) PPC_WEAK_FUNC(sub_83BB11C8);
PPC_FUNC_IMPL(__imp__sub_83BB11C8) {
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
	// addi r3,r11,-15408
	ctx.r3.s64 = ctx.r11.s64 + -15408;
	// bl 0x83523120
	ctx.lr = 0x83BB11E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22904
	ctx.r3.s64 = ctx.r10.s64 + -22904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB11EC;
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

__attribute__((alias("__imp__sub_83BB11FC"))) PPC_WEAK_FUNC(sub_83BB11FC);
PPC_FUNC_IMPL(__imp__sub_83BB11FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1200"))) PPC_WEAK_FUNC(sub_83BB1200);
PPC_FUNC_IMPL(__imp__sub_83BB1200) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15392
	ctx.r7.s64 = ctx.r8.s64 + -15392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1228"))) PPC_WEAK_FUNC(sub_83BB1228);
PPC_FUNC_IMPL(__imp__sub_83BB1228) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-22860
	ctx.r6.s64 = ctx.r7.s64 + -22860;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22932(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22932);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15392);
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
	// std r9,-22860(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22860, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1270"))) PPC_WEAK_FUNC(sub_83BB1270);
PPC_FUNC_IMPL(__imp__sub_83BB1270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22888
	ctx.r3.s64 = ctx.r11.s64 + -22888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB127C"))) PPC_WEAK_FUNC(sub_83BB127C);
PPC_FUNC_IMPL(__imp__sub_83BB127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1280"))) PPC_WEAK_FUNC(sub_83BB1280);
PPC_FUNC_IMPL(__imp__sub_83BB1280) {
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
	// addi r3,r11,-15384
	ctx.r3.s64 = ctx.r11.s64 + -15384;
	// bl 0x8259af80
	ctx.lr = 0x83BB1298;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22872
	ctx.r3.s64 = ctx.r10.s64 + -22872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB12A4;
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

__attribute__((alias("__imp__sub_83BB12B4"))) PPC_WEAK_FUNC(sub_83BB12B4);
PPC_FUNC_IMPL(__imp__sub_83BB12B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB12B8"))) PPC_WEAK_FUNC(sub_83BB12B8);
PPC_FUNC_IMPL(__imp__sub_83BB12B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15404
	ctx.r11.s64 = ctx.r8.s64 + -15404;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-22884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22884);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22880
	ctx.r3.s64 = ctx.r6.s64 + -22880;
	// stw r10,-15404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB12E8"))) PPC_WEAK_FUNC(sub_83BB12E8);
PPC_FUNC_IMPL(__imp__sub_83BB12E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22864
	ctx.r3.s64 = ctx.r11.s64 + -22864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB12F4"))) PPC_WEAK_FUNC(sub_83BB12F4);
PPC_FUNC_IMPL(__imp__sub_83BB12F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB12F8"))) PPC_WEAK_FUNC(sub_83BB12F8);
PPC_FUNC_IMPL(__imp__sub_83BB12F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22856
	ctx.r3.s64 = ctx.r11.s64 + -22856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1304"))) PPC_WEAK_FUNC(sub_83BB1304);
PPC_FUNC_IMPL(__imp__sub_83BB1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1308"))) PPC_WEAK_FUNC(sub_83BB1308);
PPC_FUNC_IMPL(__imp__sub_83BB1308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1314"))) PPC_WEAK_FUNC(sub_83BB1314);
PPC_FUNC_IMPL(__imp__sub_83BB1314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1318"))) PPC_WEAK_FUNC(sub_83BB1318);
PPC_FUNC_IMPL(__imp__sub_83BB1318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22840
	ctx.r3.s64 = ctx.r11.s64 + -22840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1324"))) PPC_WEAK_FUNC(sub_83BB1324);
PPC_FUNC_IMPL(__imp__sub_83BB1324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1328"))) PPC_WEAK_FUNC(sub_83BB1328);
PPC_FUNC_IMPL(__imp__sub_83BB1328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22832
	ctx.r3.s64 = ctx.r11.s64 + -22832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1334"))) PPC_WEAK_FUNC(sub_83BB1334);
PPC_FUNC_IMPL(__imp__sub_83BB1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1338"))) PPC_WEAK_FUNC(sub_83BB1338);
PPC_FUNC_IMPL(__imp__sub_83BB1338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22824
	ctx.r3.s64 = ctx.r11.s64 + -22824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1344"))) PPC_WEAK_FUNC(sub_83BB1344);
PPC_FUNC_IMPL(__imp__sub_83BB1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1348"))) PPC_WEAK_FUNC(sub_83BB1348);
PPC_FUNC_IMPL(__imp__sub_83BB1348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22816
	ctx.r3.s64 = ctx.r11.s64 + -22816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1354"))) PPC_WEAK_FUNC(sub_83BB1354);
PPC_FUNC_IMPL(__imp__sub_83BB1354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1358"))) PPC_WEAK_FUNC(sub_83BB1358);
PPC_FUNC_IMPL(__imp__sub_83BB1358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22808
	ctx.r3.s64 = ctx.r11.s64 + -22808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1364"))) PPC_WEAK_FUNC(sub_83BB1364);
PPC_FUNC_IMPL(__imp__sub_83BB1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1368"))) PPC_WEAK_FUNC(sub_83BB1368);
PPC_FUNC_IMPL(__imp__sub_83BB1368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22800
	ctx.r3.s64 = ctx.r11.s64 + -22800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1374"))) PPC_WEAK_FUNC(sub_83BB1374);
PPC_FUNC_IMPL(__imp__sub_83BB1374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1378"))) PPC_WEAK_FUNC(sub_83BB1378);
PPC_FUNC_IMPL(__imp__sub_83BB1378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22792
	ctx.r3.s64 = ctx.r11.s64 + -22792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1384"))) PPC_WEAK_FUNC(sub_83BB1384);
PPC_FUNC_IMPL(__imp__sub_83BB1384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1388"))) PPC_WEAK_FUNC(sub_83BB1388);
PPC_FUNC_IMPL(__imp__sub_83BB1388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22784
	ctx.r3.s64 = ctx.r11.s64 + -22784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1394"))) PPC_WEAK_FUNC(sub_83BB1394);
PPC_FUNC_IMPL(__imp__sub_83BB1394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1398"))) PPC_WEAK_FUNC(sub_83BB1398);
PPC_FUNC_IMPL(__imp__sub_83BB1398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22776
	ctx.r3.s64 = ctx.r11.s64 + -22776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB13A4"))) PPC_WEAK_FUNC(sub_83BB13A4);
PPC_FUNC_IMPL(__imp__sub_83BB13A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB13A8"))) PPC_WEAK_FUNC(sub_83BB13A8);
PPC_FUNC_IMPL(__imp__sub_83BB13A8) {
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
	// addi r3,r11,-15040
	ctx.r3.s64 = ctx.r11.s64 + -15040;
	// bl 0x83523120
	ctx.lr = 0x83BB13C0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22768
	ctx.r3.s64 = ctx.r10.s64 + -22768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB13CC;
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

__attribute__((alias("__imp__sub_83BB13DC"))) PPC_WEAK_FUNC(sub_83BB13DC);
PPC_FUNC_IMPL(__imp__sub_83BB13DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB13E0"))) PPC_WEAK_FUNC(sub_83BB13E0);
PPC_FUNC_IMPL(__imp__sub_83BB13E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15024
	ctx.r7.s64 = ctx.r8.s64 + -15024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15024);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15024(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15024, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1408"))) PPC_WEAK_FUNC(sub_83BB1408);
PPC_FUNC_IMPL(__imp__sub_83BB1408) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-22724
	ctx.r6.s64 = ctx.r7.s64 + -22724;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22796(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22796);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15024);
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
	// std r9,-22724(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22724, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1450"))) PPC_WEAK_FUNC(sub_83BB1450);
PPC_FUNC_IMPL(__imp__sub_83BB1450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB145C"))) PPC_WEAK_FUNC(sub_83BB145C);
PPC_FUNC_IMPL(__imp__sub_83BB145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1460"))) PPC_WEAK_FUNC(sub_83BB1460);
PPC_FUNC_IMPL(__imp__sub_83BB1460) {
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
	// addi r3,r11,-15016
	ctx.r3.s64 = ctx.r11.s64 + -15016;
	// bl 0x8259af80
	ctx.lr = 0x83BB1478;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22736
	ctx.r3.s64 = ctx.r10.s64 + -22736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1484;
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

__attribute__((alias("__imp__sub_83BB1494"))) PPC_WEAK_FUNC(sub_83BB1494);
PPC_FUNC_IMPL(__imp__sub_83BB1494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1498"))) PPC_WEAK_FUNC(sub_83BB1498);
PPC_FUNC_IMPL(__imp__sub_83BB1498) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15036
	ctx.r11.s64 = ctx.r8.s64 + -15036;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-22748(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22748);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22744
	ctx.r3.s64 = ctx.r6.s64 + -22744;
	// stw r10,-15036(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB14C8"))) PPC_WEAK_FUNC(sub_83BB14C8);
PPC_FUNC_IMPL(__imp__sub_83BB14C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22728
	ctx.r3.s64 = ctx.r11.s64 + -22728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB14D4"))) PPC_WEAK_FUNC(sub_83BB14D4);
PPC_FUNC_IMPL(__imp__sub_83BB14D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB14D8"))) PPC_WEAK_FUNC(sub_83BB14D8);
PPC_FUNC_IMPL(__imp__sub_83BB14D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22720
	ctx.r3.s64 = ctx.r11.s64 + -22720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB14E4"))) PPC_WEAK_FUNC(sub_83BB14E4);
PPC_FUNC_IMPL(__imp__sub_83BB14E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB14E8"))) PPC_WEAK_FUNC(sub_83BB14E8);
PPC_FUNC_IMPL(__imp__sub_83BB14E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22712
	ctx.r3.s64 = ctx.r11.s64 + -22712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB14F4"))) PPC_WEAK_FUNC(sub_83BB14F4);
PPC_FUNC_IMPL(__imp__sub_83BB14F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB14F8"))) PPC_WEAK_FUNC(sub_83BB14F8);
PPC_FUNC_IMPL(__imp__sub_83BB14F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22704
	ctx.r3.s64 = ctx.r11.s64 + -22704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1504"))) PPC_WEAK_FUNC(sub_83BB1504);
PPC_FUNC_IMPL(__imp__sub_83BB1504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1508"))) PPC_WEAK_FUNC(sub_83BB1508);
PPC_FUNC_IMPL(__imp__sub_83BB1508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1514"))) PPC_WEAK_FUNC(sub_83BB1514);
PPC_FUNC_IMPL(__imp__sub_83BB1514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1518"))) PPC_WEAK_FUNC(sub_83BB1518);
PPC_FUNC_IMPL(__imp__sub_83BB1518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22688
	ctx.r3.s64 = ctx.r11.s64 + -22688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1524"))) PPC_WEAK_FUNC(sub_83BB1524);
PPC_FUNC_IMPL(__imp__sub_83BB1524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1528"))) PPC_WEAK_FUNC(sub_83BB1528);
PPC_FUNC_IMPL(__imp__sub_83BB1528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22680
	ctx.r3.s64 = ctx.r11.s64 + -22680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1534"))) PPC_WEAK_FUNC(sub_83BB1534);
PPC_FUNC_IMPL(__imp__sub_83BB1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1538"))) PPC_WEAK_FUNC(sub_83BB1538);
PPC_FUNC_IMPL(__imp__sub_83BB1538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22672
	ctx.r3.s64 = ctx.r11.s64 + -22672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1544"))) PPC_WEAK_FUNC(sub_83BB1544);
PPC_FUNC_IMPL(__imp__sub_83BB1544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1548"))) PPC_WEAK_FUNC(sub_83BB1548);
PPC_FUNC_IMPL(__imp__sub_83BB1548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22664
	ctx.r3.s64 = ctx.r11.s64 + -22664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1554"))) PPC_WEAK_FUNC(sub_83BB1554);
PPC_FUNC_IMPL(__imp__sub_83BB1554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1558"))) PPC_WEAK_FUNC(sub_83BB1558);
PPC_FUNC_IMPL(__imp__sub_83BB1558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22656
	ctx.r3.s64 = ctx.r11.s64 + -22656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1564"))) PPC_WEAK_FUNC(sub_83BB1564);
PPC_FUNC_IMPL(__imp__sub_83BB1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1568"))) PPC_WEAK_FUNC(sub_83BB1568);
PPC_FUNC_IMPL(__imp__sub_83BB1568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22648
	ctx.r3.s64 = ctx.r11.s64 + -22648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1574"))) PPC_WEAK_FUNC(sub_83BB1574);
PPC_FUNC_IMPL(__imp__sub_83BB1574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1578"))) PPC_WEAK_FUNC(sub_83BB1578);
PPC_FUNC_IMPL(__imp__sub_83BB1578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22640
	ctx.r3.s64 = ctx.r11.s64 + -22640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1584"))) PPC_WEAK_FUNC(sub_83BB1584);
PPC_FUNC_IMPL(__imp__sub_83BB1584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1588"))) PPC_WEAK_FUNC(sub_83BB1588);
PPC_FUNC_IMPL(__imp__sub_83BB1588) {
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
	// addi r3,r11,-14672
	ctx.r3.s64 = ctx.r11.s64 + -14672;
	// bl 0x83523120
	ctx.lr = 0x83BB15A0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22632
	ctx.r3.s64 = ctx.r10.s64 + -22632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB15AC;
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

__attribute__((alias("__imp__sub_83BB15BC"))) PPC_WEAK_FUNC(sub_83BB15BC);
PPC_FUNC_IMPL(__imp__sub_83BB15BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB15C0"))) PPC_WEAK_FUNC(sub_83BB15C0);
PPC_FUNC_IMPL(__imp__sub_83BB15C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14656
	ctx.r7.s64 = ctx.r8.s64 + -14656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB15E8"))) PPC_WEAK_FUNC(sub_83BB15E8);
PPC_FUNC_IMPL(__imp__sub_83BB15E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-22548
	ctx.r6.s64 = ctx.r7.s64 + -22548;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14656);
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
	// std r9,-22548(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1630"))) PPC_WEAK_FUNC(sub_83BB1630);
PPC_FUNC_IMPL(__imp__sub_83BB1630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22616
	ctx.r3.s64 = ctx.r11.s64 + -22616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB163C"))) PPC_WEAK_FUNC(sub_83BB163C);
PPC_FUNC_IMPL(__imp__sub_83BB163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1640"))) PPC_WEAK_FUNC(sub_83BB1640);
PPC_FUNC_IMPL(__imp__sub_83BB1640) {
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
	// addi r3,r11,-14648
	ctx.r3.s64 = ctx.r11.s64 + -14648;
	// bl 0x8259af80
	ctx.lr = 0x83BB1658;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22600
	ctx.r3.s64 = ctx.r10.s64 + -22600;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1664;
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

__attribute__((alias("__imp__sub_83BB1674"))) PPC_WEAK_FUNC(sub_83BB1674);
PPC_FUNC_IMPL(__imp__sub_83BB1674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1678"))) PPC_WEAK_FUNC(sub_83BB1678);
PPC_FUNC_IMPL(__imp__sub_83BB1678) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14668
	ctx.r11.s64 = ctx.r8.s64 + -14668;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-22572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22572);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22608
	ctx.r3.s64 = ctx.r6.s64 + -22608;
	// stw r10,-14668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB16A8"))) PPC_WEAK_FUNC(sub_83BB16A8);
PPC_FUNC_IMPL(__imp__sub_83BB16A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22592
	ctx.r3.s64 = ctx.r11.s64 + -22592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB16B4"))) PPC_WEAK_FUNC(sub_83BB16B4);
PPC_FUNC_IMPL(__imp__sub_83BB16B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB16B8"))) PPC_WEAK_FUNC(sub_83BB16B8);
PPC_FUNC_IMPL(__imp__sub_83BB16B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22584
	ctx.r3.s64 = ctx.r11.s64 + -22584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB16C4"))) PPC_WEAK_FUNC(sub_83BB16C4);
PPC_FUNC_IMPL(__imp__sub_83BB16C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB16C8"))) PPC_WEAK_FUNC(sub_83BB16C8);
PPC_FUNC_IMPL(__imp__sub_83BB16C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22576
	ctx.r3.s64 = ctx.r11.s64 + -22576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB16D4"))) PPC_WEAK_FUNC(sub_83BB16D4);
PPC_FUNC_IMPL(__imp__sub_83BB16D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB16D8"))) PPC_WEAK_FUNC(sub_83BB16D8);
PPC_FUNC_IMPL(__imp__sub_83BB16D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22568
	ctx.r3.s64 = ctx.r11.s64 + -22568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB16E4"))) PPC_WEAK_FUNC(sub_83BB16E4);
PPC_FUNC_IMPL(__imp__sub_83BB16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB16E8"))) PPC_WEAK_FUNC(sub_83BB16E8);
PPC_FUNC_IMPL(__imp__sub_83BB16E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22560
	ctx.r3.s64 = ctx.r11.s64 + -22560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB16F4"))) PPC_WEAK_FUNC(sub_83BB16F4);
PPC_FUNC_IMPL(__imp__sub_83BB16F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB16F8"))) PPC_WEAK_FUNC(sub_83BB16F8);
PPC_FUNC_IMPL(__imp__sub_83BB16F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22552
	ctx.r3.s64 = ctx.r11.s64 + -22552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1704"))) PPC_WEAK_FUNC(sub_83BB1704);
PPC_FUNC_IMPL(__imp__sub_83BB1704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1708"))) PPC_WEAK_FUNC(sub_83BB1708);
PPC_FUNC_IMPL(__imp__sub_83BB1708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1714"))) PPC_WEAK_FUNC(sub_83BB1714);
PPC_FUNC_IMPL(__imp__sub_83BB1714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1718"))) PPC_WEAK_FUNC(sub_83BB1718);
PPC_FUNC_IMPL(__imp__sub_83BB1718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22536
	ctx.r3.s64 = ctx.r11.s64 + -22536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1724"))) PPC_WEAK_FUNC(sub_83BB1724);
PPC_FUNC_IMPL(__imp__sub_83BB1724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1728"))) PPC_WEAK_FUNC(sub_83BB1728);
PPC_FUNC_IMPL(__imp__sub_83BB1728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22528
	ctx.r3.s64 = ctx.r11.s64 + -22528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1734"))) PPC_WEAK_FUNC(sub_83BB1734);
PPC_FUNC_IMPL(__imp__sub_83BB1734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1738"))) PPC_WEAK_FUNC(sub_83BB1738);
PPC_FUNC_IMPL(__imp__sub_83BB1738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1744"))) PPC_WEAK_FUNC(sub_83BB1744);
PPC_FUNC_IMPL(__imp__sub_83BB1744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1748"))) PPC_WEAK_FUNC(sub_83BB1748);
PPC_FUNC_IMPL(__imp__sub_83BB1748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22512
	ctx.r3.s64 = ctx.r11.s64 + -22512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1754"))) PPC_WEAK_FUNC(sub_83BB1754);
PPC_FUNC_IMPL(__imp__sub_83BB1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1758"))) PPC_WEAK_FUNC(sub_83BB1758);
PPC_FUNC_IMPL(__imp__sub_83BB1758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22504
	ctx.r3.s64 = ctx.r11.s64 + -22504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1764"))) PPC_WEAK_FUNC(sub_83BB1764);
PPC_FUNC_IMPL(__imp__sub_83BB1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1768"))) PPC_WEAK_FUNC(sub_83BB1768);
PPC_FUNC_IMPL(__imp__sub_83BB1768) {
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
	// addi r3,r11,-14304
	ctx.r3.s64 = ctx.r11.s64 + -14304;
	// bl 0x83523120
	ctx.lr = 0x83BB1780;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22496
	ctx.r3.s64 = ctx.r10.s64 + -22496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB178C;
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

__attribute__((alias("__imp__sub_83BB179C"))) PPC_WEAK_FUNC(sub_83BB179C);
PPC_FUNC_IMPL(__imp__sub_83BB179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB17A0"))) PPC_WEAK_FUNC(sub_83BB17A0);
PPC_FUNC_IMPL(__imp__sub_83BB17A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14288
	ctx.r7.s64 = ctx.r8.s64 + -14288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14288(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB17C8"))) PPC_WEAK_FUNC(sub_83BB17C8);
PPC_FUNC_IMPL(__imp__sub_83BB17C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-22348
	ctx.r6.s64 = ctx.r7.s64 + -22348;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22420(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22420);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14288);
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
	// std r9,-22348(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22348, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB1810"))) PPC_WEAK_FUNC(sub_83BB1810);
PPC_FUNC_IMPL(__imp__sub_83BB1810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22480
	ctx.r3.s64 = ctx.r11.s64 + -22480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB181C"))) PPC_WEAK_FUNC(sub_83BB181C);
PPC_FUNC_IMPL(__imp__sub_83BB181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1820"))) PPC_WEAK_FUNC(sub_83BB1820);
PPC_FUNC_IMPL(__imp__sub_83BB1820) {
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
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// bl 0x8259af80
	ctx.lr = 0x83BB1838;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-22464
	ctx.r3.s64 = ctx.r10.s64 + -22464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB1844;
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

__attribute__((alias("__imp__sub_83BB1854"))) PPC_WEAK_FUNC(sub_83BB1854);
PPC_FUNC_IMPL(__imp__sub_83BB1854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1858"))) PPC_WEAK_FUNC(sub_83BB1858);
PPC_FUNC_IMPL(__imp__sub_83BB1858) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14300
	ctx.r11.s64 = ctx.r8.s64 + -14300;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-22372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22372);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22472
	ctx.r3.s64 = ctx.r6.s64 + -22472;
	// stw r10,-14300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14300, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1888"))) PPC_WEAK_FUNC(sub_83BB1888);
PPC_FUNC_IMPL(__imp__sub_83BB1888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22456
	ctx.r3.s64 = ctx.r11.s64 + -22456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1894"))) PPC_WEAK_FUNC(sub_83BB1894);
PPC_FUNC_IMPL(__imp__sub_83BB1894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB1898"))) PPC_WEAK_FUNC(sub_83BB1898);
PPC_FUNC_IMPL(__imp__sub_83BB1898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22448
	ctx.r3.s64 = ctx.r11.s64 + -22448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB18A4"))) PPC_WEAK_FUNC(sub_83BB18A4);
PPC_FUNC_IMPL(__imp__sub_83BB18A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB18A8"))) PPC_WEAK_FUNC(sub_83BB18A8);
PPC_FUNC_IMPL(__imp__sub_83BB18A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22440
	ctx.r3.s64 = ctx.r11.s64 + -22440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB18B4"))) PPC_WEAK_FUNC(sub_83BB18B4);
PPC_FUNC_IMPL(__imp__sub_83BB18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB18B8"))) PPC_WEAK_FUNC(sub_83BB18B8);
PPC_FUNC_IMPL(__imp__sub_83BB18B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22432
	ctx.r3.s64 = ctx.r11.s64 + -22432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB18C4"))) PPC_WEAK_FUNC(sub_83BB18C4);
PPC_FUNC_IMPL(__imp__sub_83BB18C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB18C8"))) PPC_WEAK_FUNC(sub_83BB18C8);
PPC_FUNC_IMPL(__imp__sub_83BB18C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22424
	ctx.r3.s64 = ctx.r11.s64 + -22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB18D4"))) PPC_WEAK_FUNC(sub_83BB18D4);
PPC_FUNC_IMPL(__imp__sub_83BB18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB18D8"))) PPC_WEAK_FUNC(sub_83BB18D8);
PPC_FUNC_IMPL(__imp__sub_83BB18D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22416
	ctx.r3.s64 = ctx.r11.s64 + -22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB18E4"))) PPC_WEAK_FUNC(sub_83BB18E4);
PPC_FUNC_IMPL(__imp__sub_83BB18E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB18E8"))) PPC_WEAK_FUNC(sub_83BB18E8);
PPC_FUNC_IMPL(__imp__sub_83BB18E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22408
	ctx.r3.s64 = ctx.r11.s64 + -22408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB18F4"))) PPC_WEAK_FUNC(sub_83BB18F4);
PPC_FUNC_IMPL(__imp__sub_83BB18F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB18F8"))) PPC_WEAK_FUNC(sub_83BB18F8);
PPC_FUNC_IMPL(__imp__sub_83BB18F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-22400
	ctx.r3.s64 = ctx.r11.s64 + -22400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB1904"))) PPC_WEAK_FUNC(sub_83BB1904);
PPC_FUNC_IMPL(__imp__sub_83BB1904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

