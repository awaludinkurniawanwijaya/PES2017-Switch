#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BDEC68"))) PPC_WEAK_FUNC(sub_83BDEC68);
PPC_FUNC_IMPL(__imp__sub_83BDEC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31280
	ctx.r3.s64 = ctx.r11.s64 + 31280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC74"))) PPC_WEAK_FUNC(sub_83BDEC74);
PPC_FUNC_IMPL(__imp__sub_83BDEC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEC78"))) PPC_WEAK_FUNC(sub_83BDEC78);
PPC_FUNC_IMPL(__imp__sub_83BDEC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31288
	ctx.r3.s64 = ctx.r11.s64 + 31288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC84"))) PPC_WEAK_FUNC(sub_83BDEC84);
PPC_FUNC_IMPL(__imp__sub_83BDEC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEC88"))) PPC_WEAK_FUNC(sub_83BDEC88);
PPC_FUNC_IMPL(__imp__sub_83BDEC88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10876
	ctx.r7.s64 = ctx.r8.s64 + -10876;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10876(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10876);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10876, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDECB0"))) PPC_WEAK_FUNC(sub_83BDECB0);
PPC_FUNC_IMPL(__imp__sub_83BDECB0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-10892
	ctx.r3.s64 = ctx.r11.s64 + -10892;
	// bl 0x83523120
	ctx.lr = 0x83BDECC8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31296
	ctx.r3.s64 = ctx.r10.s64 + 31296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDECD4;
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

__attribute__((alias("__imp__sub_83BDECE4"))) PPC_WEAK_FUNC(sub_83BDECE4);
PPC_FUNC_IMPL(__imp__sub_83BDECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDECE8"))) PPC_WEAK_FUNC(sub_83BDECE8);
PPC_FUNC_IMPL(__imp__sub_83BDECE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-21176
	ctx.r6.s64 = ctx.r7.s64 + -21176;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21248(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21248);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10876(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10876);
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
	// std r9,-21176(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21176, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDED30"))) PPC_WEAK_FUNC(sub_83BDED30);
PPC_FUNC_IMPL(__imp__sub_83BDED30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31312
	ctx.r3.s64 = ctx.r11.s64 + 31312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDED3C"))) PPC_WEAK_FUNC(sub_83BDED3C);
PPC_FUNC_IMPL(__imp__sub_83BDED3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDED40"))) PPC_WEAK_FUNC(sub_83BDED40);
PPC_FUNC_IMPL(__imp__sub_83BDED40) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// bl 0x8259af80
	ctx.lr = 0x83BDED58;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31328
	ctx.r3.s64 = ctx.r10.s64 + 31328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDED64;
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

__attribute__((alias("__imp__sub_83BDED74"))) PPC_WEAK_FUNC(sub_83BDED74);
PPC_FUNC_IMPL(__imp__sub_83BDED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDED78"))) PPC_WEAK_FUNC(sub_83BDED78);
PPC_FUNC_IMPL(__imp__sub_83BDED78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10888
	ctx.r11.s64 = ctx.r8.s64 + -10888;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21200);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31320
	ctx.r3.s64 = ctx.r6.s64 + 31320;
	// stw r10,-10888(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10888, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEDA8"))) PPC_WEAK_FUNC(sub_83BDEDA8);
PPC_FUNC_IMPL(__imp__sub_83BDEDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31336
	ctx.r3.s64 = ctx.r11.s64 + 31336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEDB4"))) PPC_WEAK_FUNC(sub_83BDEDB4);
PPC_FUNC_IMPL(__imp__sub_83BDEDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEDB8"))) PPC_WEAK_FUNC(sub_83BDEDB8);
PPC_FUNC_IMPL(__imp__sub_83BDEDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31344
	ctx.r3.s64 = ctx.r11.s64 + 31344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEDC4"))) PPC_WEAK_FUNC(sub_83BDEDC4);
PPC_FUNC_IMPL(__imp__sub_83BDEDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEDC8"))) PPC_WEAK_FUNC(sub_83BDEDC8);
PPC_FUNC_IMPL(__imp__sub_83BDEDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31352
	ctx.r3.s64 = ctx.r11.s64 + 31352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEDD4"))) PPC_WEAK_FUNC(sub_83BDEDD4);
PPC_FUNC_IMPL(__imp__sub_83BDEDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEDD8"))) PPC_WEAK_FUNC(sub_83BDEDD8);
PPC_FUNC_IMPL(__imp__sub_83BDEDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31360
	ctx.r3.s64 = ctx.r11.s64 + 31360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEDE4"))) PPC_WEAK_FUNC(sub_83BDEDE4);
PPC_FUNC_IMPL(__imp__sub_83BDEDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEDE8"))) PPC_WEAK_FUNC(sub_83BDEDE8);
PPC_FUNC_IMPL(__imp__sub_83BDEDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31368
	ctx.r3.s64 = ctx.r11.s64 + 31368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEDF4"))) PPC_WEAK_FUNC(sub_83BDEDF4);
PPC_FUNC_IMPL(__imp__sub_83BDEDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEDF8"))) PPC_WEAK_FUNC(sub_83BDEDF8);
PPC_FUNC_IMPL(__imp__sub_83BDEDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31376
	ctx.r3.s64 = ctx.r11.s64 + 31376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEE04"))) PPC_WEAK_FUNC(sub_83BDEE04);
PPC_FUNC_IMPL(__imp__sub_83BDEE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEE08"))) PPC_WEAK_FUNC(sub_83BDEE08);
PPC_FUNC_IMPL(__imp__sub_83BDEE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31384
	ctx.r3.s64 = ctx.r11.s64 + 31384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEE14"))) PPC_WEAK_FUNC(sub_83BDEE14);
PPC_FUNC_IMPL(__imp__sub_83BDEE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEE18"))) PPC_WEAK_FUNC(sub_83BDEE18);
PPC_FUNC_IMPL(__imp__sub_83BDEE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31392
	ctx.r3.s64 = ctx.r11.s64 + 31392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEE24"))) PPC_WEAK_FUNC(sub_83BDEE24);
PPC_FUNC_IMPL(__imp__sub_83BDEE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEE28"))) PPC_WEAK_FUNC(sub_83BDEE28);
PPC_FUNC_IMPL(__imp__sub_83BDEE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31400
	ctx.r3.s64 = ctx.r11.s64 + 31400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEE34"))) PPC_WEAK_FUNC(sub_83BDEE34);
PPC_FUNC_IMPL(__imp__sub_83BDEE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEE38"))) PPC_WEAK_FUNC(sub_83BDEE38);
PPC_FUNC_IMPL(__imp__sub_83BDEE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31408
	ctx.r3.s64 = ctx.r11.s64 + 31408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEE44"))) PPC_WEAK_FUNC(sub_83BDEE44);
PPC_FUNC_IMPL(__imp__sub_83BDEE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEE48"))) PPC_WEAK_FUNC(sub_83BDEE48);
PPC_FUNC_IMPL(__imp__sub_83BDEE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31416
	ctx.r3.s64 = ctx.r11.s64 + 31416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEE54"))) PPC_WEAK_FUNC(sub_83BDEE54);
PPC_FUNC_IMPL(__imp__sub_83BDEE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEE58"))) PPC_WEAK_FUNC(sub_83BDEE58);
PPC_FUNC_IMPL(__imp__sub_83BDEE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEE64"))) PPC_WEAK_FUNC(sub_83BDEE64);
PPC_FUNC_IMPL(__imp__sub_83BDEE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEE68"))) PPC_WEAK_FUNC(sub_83BDEE68);
PPC_FUNC_IMPL(__imp__sub_83BDEE68) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// bl 0x83523120
	ctx.lr = 0x83BDEE80;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31432
	ctx.r3.s64 = ctx.r10.s64 + 31432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDEE8C;
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

__attribute__((alias("__imp__sub_83BDEE9C"))) PPC_WEAK_FUNC(sub_83BDEE9C);
PPC_FUNC_IMPL(__imp__sub_83BDEE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEEA0"))) PPC_WEAK_FUNC(sub_83BDEEA0);
PPC_FUNC_IMPL(__imp__sub_83BDEEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10504
	ctx.r7.s64 = ctx.r8.s64 + -10504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDEEC8"))) PPC_WEAK_FUNC(sub_83BDEEC8);
PPC_FUNC_IMPL(__imp__sub_83BDEEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-20992
	ctx.r6.s64 = ctx.r7.s64 + -20992;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21064(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21064);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10504);
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
	// std r9,-20992(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20992, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDEF10"))) PPC_WEAK_FUNC(sub_83BDEF10);
PPC_FUNC_IMPL(__imp__sub_83BDEF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31448
	ctx.r3.s64 = ctx.r11.s64 + 31448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEF1C"))) PPC_WEAK_FUNC(sub_83BDEF1C);
PPC_FUNC_IMPL(__imp__sub_83BDEF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEF20"))) PPC_WEAK_FUNC(sub_83BDEF20);
PPC_FUNC_IMPL(__imp__sub_83BDEF20) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// bl 0x8259af80
	ctx.lr = 0x83BDEF38;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31464
	ctx.r3.s64 = ctx.r10.s64 + 31464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDEF44;
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

__attribute__((alias("__imp__sub_83BDEF54"))) PPC_WEAK_FUNC(sub_83BDEF54);
PPC_FUNC_IMPL(__imp__sub_83BDEF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEF58"))) PPC_WEAK_FUNC(sub_83BDEF58);
PPC_FUNC_IMPL(__imp__sub_83BDEF58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10516
	ctx.r11.s64 = ctx.r8.s64 + -10516;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21016);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31456
	ctx.r3.s64 = ctx.r6.s64 + 31456;
	// stw r10,-10516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEF88"))) PPC_WEAK_FUNC(sub_83BDEF88);
PPC_FUNC_IMPL(__imp__sub_83BDEF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31472
	ctx.r3.s64 = ctx.r11.s64 + 31472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEF94"))) PPC_WEAK_FUNC(sub_83BDEF94);
PPC_FUNC_IMPL(__imp__sub_83BDEF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEF98"))) PPC_WEAK_FUNC(sub_83BDEF98);
PPC_FUNC_IMPL(__imp__sub_83BDEF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31480
	ctx.r3.s64 = ctx.r11.s64 + 31480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEFA4"))) PPC_WEAK_FUNC(sub_83BDEFA4);
PPC_FUNC_IMPL(__imp__sub_83BDEFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEFA8"))) PPC_WEAK_FUNC(sub_83BDEFA8);
PPC_FUNC_IMPL(__imp__sub_83BDEFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31488
	ctx.r3.s64 = ctx.r11.s64 + 31488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEFB4"))) PPC_WEAK_FUNC(sub_83BDEFB4);
PPC_FUNC_IMPL(__imp__sub_83BDEFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEFB8"))) PPC_WEAK_FUNC(sub_83BDEFB8);
PPC_FUNC_IMPL(__imp__sub_83BDEFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31496
	ctx.r3.s64 = ctx.r11.s64 + 31496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEFC4"))) PPC_WEAK_FUNC(sub_83BDEFC4);
PPC_FUNC_IMPL(__imp__sub_83BDEFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEFC8"))) PPC_WEAK_FUNC(sub_83BDEFC8);
PPC_FUNC_IMPL(__imp__sub_83BDEFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31504
	ctx.r3.s64 = ctx.r11.s64 + 31504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEFD4"))) PPC_WEAK_FUNC(sub_83BDEFD4);
PPC_FUNC_IMPL(__imp__sub_83BDEFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEFD8"))) PPC_WEAK_FUNC(sub_83BDEFD8);
PPC_FUNC_IMPL(__imp__sub_83BDEFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31512
	ctx.r3.s64 = ctx.r11.s64 + 31512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEFE4"))) PPC_WEAK_FUNC(sub_83BDEFE4);
PPC_FUNC_IMPL(__imp__sub_83BDEFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEFE8"))) PPC_WEAK_FUNC(sub_83BDEFE8);
PPC_FUNC_IMPL(__imp__sub_83BDEFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEFF4"))) PPC_WEAK_FUNC(sub_83BDEFF4);
PPC_FUNC_IMPL(__imp__sub_83BDEFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEFF8"))) PPC_WEAK_FUNC(sub_83BDEFF8);
PPC_FUNC_IMPL(__imp__sub_83BDEFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31528
	ctx.r3.s64 = ctx.r11.s64 + 31528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF004"))) PPC_WEAK_FUNC(sub_83BDF004);
PPC_FUNC_IMPL(__imp__sub_83BDF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF008"))) PPC_WEAK_FUNC(sub_83BDF008);
PPC_FUNC_IMPL(__imp__sub_83BDF008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31536
	ctx.r3.s64 = ctx.r11.s64 + 31536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF014"))) PPC_WEAK_FUNC(sub_83BDF014);
PPC_FUNC_IMPL(__imp__sub_83BDF014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF018"))) PPC_WEAK_FUNC(sub_83BDF018);
PPC_FUNC_IMPL(__imp__sub_83BDF018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31544
	ctx.r3.s64 = ctx.r11.s64 + 31544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF024"))) PPC_WEAK_FUNC(sub_83BDF024);
PPC_FUNC_IMPL(__imp__sub_83BDF024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF028"))) PPC_WEAK_FUNC(sub_83BDF028);
PPC_FUNC_IMPL(__imp__sub_83BDF028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31552
	ctx.r3.s64 = ctx.r11.s64 + 31552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF034"))) PPC_WEAK_FUNC(sub_83BDF034);
PPC_FUNC_IMPL(__imp__sub_83BDF034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF038"))) PPC_WEAK_FUNC(sub_83BDF038);
PPC_FUNC_IMPL(__imp__sub_83BDF038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31560
	ctx.r3.s64 = ctx.r11.s64 + 31560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF044"))) PPC_WEAK_FUNC(sub_83BDF044);
PPC_FUNC_IMPL(__imp__sub_83BDF044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF048"))) PPC_WEAK_FUNC(sub_83BDF048);
PPC_FUNC_IMPL(__imp__sub_83BDF048) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-10152
	ctx.r3.s64 = ctx.r11.s64 + -10152;
	// bl 0x83523120
	ctx.lr = 0x83BDF060;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31568
	ctx.r3.s64 = ctx.r10.s64 + 31568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF06C;
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

__attribute__((alias("__imp__sub_83BDF07C"))) PPC_WEAK_FUNC(sub_83BDF07C);
PPC_FUNC_IMPL(__imp__sub_83BDF07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF080"))) PPC_WEAK_FUNC(sub_83BDF080);
PPC_FUNC_IMPL(__imp__sub_83BDF080) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10136
	ctx.r7.s64 = ctx.r8.s64 + -10136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10136(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF0A8"))) PPC_WEAK_FUNC(sub_83BDF0A8);
PPC_FUNC_IMPL(__imp__sub_83BDF0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-20860
	ctx.r6.s64 = ctx.r7.s64 + -20860;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20932(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20932);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10136);
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
	// std r9,-20860(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20860, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF0F0"))) PPC_WEAK_FUNC(sub_83BDF0F0);
PPC_FUNC_IMPL(__imp__sub_83BDF0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31584
	ctx.r3.s64 = ctx.r11.s64 + 31584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF0FC"))) PPC_WEAK_FUNC(sub_83BDF0FC);
PPC_FUNC_IMPL(__imp__sub_83BDF0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF100"))) PPC_WEAK_FUNC(sub_83BDF100);
PPC_FUNC_IMPL(__imp__sub_83BDF100) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// bl 0x8259af80
	ctx.lr = 0x83BDF118;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31600
	ctx.r3.s64 = ctx.r10.s64 + 31600;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF124;
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

__attribute__((alias("__imp__sub_83BDF134"))) PPC_WEAK_FUNC(sub_83BDF134);
PPC_FUNC_IMPL(__imp__sub_83BDF134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF138"))) PPC_WEAK_FUNC(sub_83BDF138);
PPC_FUNC_IMPL(__imp__sub_83BDF138) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10148
	ctx.r11.s64 = ctx.r8.s64 + -10148;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-20884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20884);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31592
	ctx.r3.s64 = ctx.r6.s64 + 31592;
	// stw r10,-10148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF168"))) PPC_WEAK_FUNC(sub_83BDF168);
PPC_FUNC_IMPL(__imp__sub_83BDF168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31608
	ctx.r3.s64 = ctx.r11.s64 + 31608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF174"))) PPC_WEAK_FUNC(sub_83BDF174);
PPC_FUNC_IMPL(__imp__sub_83BDF174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF178"))) PPC_WEAK_FUNC(sub_83BDF178);
PPC_FUNC_IMPL(__imp__sub_83BDF178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31616
	ctx.r3.s64 = ctx.r11.s64 + 31616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF184"))) PPC_WEAK_FUNC(sub_83BDF184);
PPC_FUNC_IMPL(__imp__sub_83BDF184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF188"))) PPC_WEAK_FUNC(sub_83BDF188);
PPC_FUNC_IMPL(__imp__sub_83BDF188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31624
	ctx.r3.s64 = ctx.r11.s64 + 31624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF194"))) PPC_WEAK_FUNC(sub_83BDF194);
PPC_FUNC_IMPL(__imp__sub_83BDF194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF198"))) PPC_WEAK_FUNC(sub_83BDF198);
PPC_FUNC_IMPL(__imp__sub_83BDF198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31632
	ctx.r3.s64 = ctx.r11.s64 + 31632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF1A4"))) PPC_WEAK_FUNC(sub_83BDF1A4);
PPC_FUNC_IMPL(__imp__sub_83BDF1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF1A8"))) PPC_WEAK_FUNC(sub_83BDF1A8);
PPC_FUNC_IMPL(__imp__sub_83BDF1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF1B4"))) PPC_WEAK_FUNC(sub_83BDF1B4);
PPC_FUNC_IMPL(__imp__sub_83BDF1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF1B8"))) PPC_WEAK_FUNC(sub_83BDF1B8);
PPC_FUNC_IMPL(__imp__sub_83BDF1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31648
	ctx.r3.s64 = ctx.r11.s64 + 31648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF1C4"))) PPC_WEAK_FUNC(sub_83BDF1C4);
PPC_FUNC_IMPL(__imp__sub_83BDF1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF1C8"))) PPC_WEAK_FUNC(sub_83BDF1C8);
PPC_FUNC_IMPL(__imp__sub_83BDF1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31656
	ctx.r3.s64 = ctx.r11.s64 + 31656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF1D4"))) PPC_WEAK_FUNC(sub_83BDF1D4);
PPC_FUNC_IMPL(__imp__sub_83BDF1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF1D8"))) PPC_WEAK_FUNC(sub_83BDF1D8);
PPC_FUNC_IMPL(__imp__sub_83BDF1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31664
	ctx.r3.s64 = ctx.r11.s64 + 31664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF1E4"))) PPC_WEAK_FUNC(sub_83BDF1E4);
PPC_FUNC_IMPL(__imp__sub_83BDF1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF1E8"))) PPC_WEAK_FUNC(sub_83BDF1E8);
PPC_FUNC_IMPL(__imp__sub_83BDF1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31672
	ctx.r3.s64 = ctx.r11.s64 + 31672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF1F4"))) PPC_WEAK_FUNC(sub_83BDF1F4);
PPC_FUNC_IMPL(__imp__sub_83BDF1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF1F8"))) PPC_WEAK_FUNC(sub_83BDF1F8);
PPC_FUNC_IMPL(__imp__sub_83BDF1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31680
	ctx.r3.s64 = ctx.r11.s64 + 31680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF204"))) PPC_WEAK_FUNC(sub_83BDF204);
PPC_FUNC_IMPL(__imp__sub_83BDF204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF208"))) PPC_WEAK_FUNC(sub_83BDF208);
PPC_FUNC_IMPL(__imp__sub_83BDF208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31688
	ctx.r3.s64 = ctx.r11.s64 + 31688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF214"))) PPC_WEAK_FUNC(sub_83BDF214);
PPC_FUNC_IMPL(__imp__sub_83BDF214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF218"))) PPC_WEAK_FUNC(sub_83BDF218);
PPC_FUNC_IMPL(__imp__sub_83BDF218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31696
	ctx.r3.s64 = ctx.r11.s64 + 31696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF224"))) PPC_WEAK_FUNC(sub_83BDF224);
PPC_FUNC_IMPL(__imp__sub_83BDF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF228"))) PPC_WEAK_FUNC(sub_83BDF228);
PPC_FUNC_IMPL(__imp__sub_83BDF228) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-9784
	ctx.r3.s64 = ctx.r11.s64 + -9784;
	// bl 0x83523120
	ctx.lr = 0x83BDF240;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31704
	ctx.r3.s64 = ctx.r10.s64 + 31704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF24C;
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

__attribute__((alias("__imp__sub_83BDF25C"))) PPC_WEAK_FUNC(sub_83BDF25C);
PPC_FUNC_IMPL(__imp__sub_83BDF25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF260"))) PPC_WEAK_FUNC(sub_83BDF260);
PPC_FUNC_IMPL(__imp__sub_83BDF260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9768
	ctx.r7.s64 = ctx.r8.s64 + -9768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF288"))) PPC_WEAK_FUNC(sub_83BDF288);
PPC_FUNC_IMPL(__imp__sub_83BDF288) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-20724
	ctx.r6.s64 = ctx.r7.s64 + -20724;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20796(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20796);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9768);
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
	// std r9,-20724(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20724, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF2D0"))) PPC_WEAK_FUNC(sub_83BDF2D0);
PPC_FUNC_IMPL(__imp__sub_83BDF2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31720
	ctx.r3.s64 = ctx.r11.s64 + 31720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF2DC"))) PPC_WEAK_FUNC(sub_83BDF2DC);
PPC_FUNC_IMPL(__imp__sub_83BDF2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF2E0"))) PPC_WEAK_FUNC(sub_83BDF2E0);
PPC_FUNC_IMPL(__imp__sub_83BDF2E0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// bl 0x8259af80
	ctx.lr = 0x83BDF2F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31736
	ctx.r3.s64 = ctx.r10.s64 + 31736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF304;
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

__attribute__((alias("__imp__sub_83BDF314"))) PPC_WEAK_FUNC(sub_83BDF314);
PPC_FUNC_IMPL(__imp__sub_83BDF314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF318"))) PPC_WEAK_FUNC(sub_83BDF318);
PPC_FUNC_IMPL(__imp__sub_83BDF318) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9780
	ctx.r11.s64 = ctx.r8.s64 + -9780;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-20748(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20748);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31728
	ctx.r3.s64 = ctx.r6.s64 + 31728;
	// stw r10,-9780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF348"))) PPC_WEAK_FUNC(sub_83BDF348);
PPC_FUNC_IMPL(__imp__sub_83BDF348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31744
	ctx.r3.s64 = ctx.r11.s64 + 31744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF354"))) PPC_WEAK_FUNC(sub_83BDF354);
PPC_FUNC_IMPL(__imp__sub_83BDF354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF358"))) PPC_WEAK_FUNC(sub_83BDF358);
PPC_FUNC_IMPL(__imp__sub_83BDF358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31752
	ctx.r3.s64 = ctx.r11.s64 + 31752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF364"))) PPC_WEAK_FUNC(sub_83BDF364);
PPC_FUNC_IMPL(__imp__sub_83BDF364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF368"))) PPC_WEAK_FUNC(sub_83BDF368);
PPC_FUNC_IMPL(__imp__sub_83BDF368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31760
	ctx.r3.s64 = ctx.r11.s64 + 31760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF374"))) PPC_WEAK_FUNC(sub_83BDF374);
PPC_FUNC_IMPL(__imp__sub_83BDF374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF378"))) PPC_WEAK_FUNC(sub_83BDF378);
PPC_FUNC_IMPL(__imp__sub_83BDF378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31768
	ctx.r3.s64 = ctx.r11.s64 + 31768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF384"))) PPC_WEAK_FUNC(sub_83BDF384);
PPC_FUNC_IMPL(__imp__sub_83BDF384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF388"))) PPC_WEAK_FUNC(sub_83BDF388);
PPC_FUNC_IMPL(__imp__sub_83BDF388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31776
	ctx.r3.s64 = ctx.r11.s64 + 31776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF394"))) PPC_WEAK_FUNC(sub_83BDF394);
PPC_FUNC_IMPL(__imp__sub_83BDF394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF398"))) PPC_WEAK_FUNC(sub_83BDF398);
PPC_FUNC_IMPL(__imp__sub_83BDF398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31784
	ctx.r3.s64 = ctx.r11.s64 + 31784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF3A4"))) PPC_WEAK_FUNC(sub_83BDF3A4);
PPC_FUNC_IMPL(__imp__sub_83BDF3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF3A8"))) PPC_WEAK_FUNC(sub_83BDF3A8);
PPC_FUNC_IMPL(__imp__sub_83BDF3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31792
	ctx.r3.s64 = ctx.r11.s64 + 31792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF3B4"))) PPC_WEAK_FUNC(sub_83BDF3B4);
PPC_FUNC_IMPL(__imp__sub_83BDF3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF3B8"))) PPC_WEAK_FUNC(sub_83BDF3B8);
PPC_FUNC_IMPL(__imp__sub_83BDF3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31800
	ctx.r3.s64 = ctx.r11.s64 + 31800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF3C4"))) PPC_WEAK_FUNC(sub_83BDF3C4);
PPC_FUNC_IMPL(__imp__sub_83BDF3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF3C8"))) PPC_WEAK_FUNC(sub_83BDF3C8);
PPC_FUNC_IMPL(__imp__sub_83BDF3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31808
	ctx.r3.s64 = ctx.r11.s64 + 31808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF3D4"))) PPC_WEAK_FUNC(sub_83BDF3D4);
PPC_FUNC_IMPL(__imp__sub_83BDF3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF3D8"))) PPC_WEAK_FUNC(sub_83BDF3D8);
PPC_FUNC_IMPL(__imp__sub_83BDF3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31816
	ctx.r3.s64 = ctx.r11.s64 + 31816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF3E4"))) PPC_WEAK_FUNC(sub_83BDF3E4);
PPC_FUNC_IMPL(__imp__sub_83BDF3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF3E8"))) PPC_WEAK_FUNC(sub_83BDF3E8);
PPC_FUNC_IMPL(__imp__sub_83BDF3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31824
	ctx.r3.s64 = ctx.r11.s64 + 31824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF3F4"))) PPC_WEAK_FUNC(sub_83BDF3F4);
PPC_FUNC_IMPL(__imp__sub_83BDF3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF3F8"))) PPC_WEAK_FUNC(sub_83BDF3F8);
PPC_FUNC_IMPL(__imp__sub_83BDF3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31832
	ctx.r3.s64 = ctx.r11.s64 + 31832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF404"))) PPC_WEAK_FUNC(sub_83BDF404);
PPC_FUNC_IMPL(__imp__sub_83BDF404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF408"))) PPC_WEAK_FUNC(sub_83BDF408);
PPC_FUNC_IMPL(__imp__sub_83BDF408) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// bl 0x83523120
	ctx.lr = 0x83BDF420;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31840
	ctx.r3.s64 = ctx.r10.s64 + 31840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF42C;
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

__attribute__((alias("__imp__sub_83BDF43C"))) PPC_WEAK_FUNC(sub_83BDF43C);
PPC_FUNC_IMPL(__imp__sub_83BDF43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF440"))) PPC_WEAK_FUNC(sub_83BDF440);
PPC_FUNC_IMPL(__imp__sub_83BDF440) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9400
	ctx.r7.s64 = ctx.r8.s64 + -9400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF468"))) PPC_WEAK_FUNC(sub_83BDF468);
PPC_FUNC_IMPL(__imp__sub_83BDF468) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-20596
	ctx.r6.s64 = ctx.r7.s64 + -20596;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20668(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20668);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9400);
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
	// std r9,-20596(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20596, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF4B0"))) PPC_WEAK_FUNC(sub_83BDF4B0);
PPC_FUNC_IMPL(__imp__sub_83BDF4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31856
	ctx.r3.s64 = ctx.r11.s64 + 31856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF4BC"))) PPC_WEAK_FUNC(sub_83BDF4BC);
PPC_FUNC_IMPL(__imp__sub_83BDF4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF4C0"))) PPC_WEAK_FUNC(sub_83BDF4C0);
PPC_FUNC_IMPL(__imp__sub_83BDF4C0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-9392
	ctx.r3.s64 = ctx.r11.s64 + -9392;
	// bl 0x8259af80
	ctx.lr = 0x83BDF4D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31872
	ctx.r3.s64 = ctx.r10.s64 + 31872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF4E4;
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

__attribute__((alias("__imp__sub_83BDF4F4"))) PPC_WEAK_FUNC(sub_83BDF4F4);
PPC_FUNC_IMPL(__imp__sub_83BDF4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF4F8"))) PPC_WEAK_FUNC(sub_83BDF4F8);
PPC_FUNC_IMPL(__imp__sub_83BDF4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9412
	ctx.r11.s64 = ctx.r8.s64 + -9412;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-20620(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20620);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31864
	ctx.r3.s64 = ctx.r6.s64 + 31864;
	// stw r10,-9412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF528"))) PPC_WEAK_FUNC(sub_83BDF528);
PPC_FUNC_IMPL(__imp__sub_83BDF528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31880
	ctx.r3.s64 = ctx.r11.s64 + 31880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF534"))) PPC_WEAK_FUNC(sub_83BDF534);
PPC_FUNC_IMPL(__imp__sub_83BDF534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF538"))) PPC_WEAK_FUNC(sub_83BDF538);
PPC_FUNC_IMPL(__imp__sub_83BDF538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31888
	ctx.r3.s64 = ctx.r11.s64 + 31888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF544"))) PPC_WEAK_FUNC(sub_83BDF544);
PPC_FUNC_IMPL(__imp__sub_83BDF544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF548"))) PPC_WEAK_FUNC(sub_83BDF548);
PPC_FUNC_IMPL(__imp__sub_83BDF548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31896
	ctx.r3.s64 = ctx.r11.s64 + 31896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF554"))) PPC_WEAK_FUNC(sub_83BDF554);
PPC_FUNC_IMPL(__imp__sub_83BDF554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF558"))) PPC_WEAK_FUNC(sub_83BDF558);
PPC_FUNC_IMPL(__imp__sub_83BDF558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31904
	ctx.r3.s64 = ctx.r11.s64 + 31904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF564"))) PPC_WEAK_FUNC(sub_83BDF564);
PPC_FUNC_IMPL(__imp__sub_83BDF564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF568"))) PPC_WEAK_FUNC(sub_83BDF568);
PPC_FUNC_IMPL(__imp__sub_83BDF568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31912
	ctx.r3.s64 = ctx.r11.s64 + 31912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF574"))) PPC_WEAK_FUNC(sub_83BDF574);
PPC_FUNC_IMPL(__imp__sub_83BDF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF578"))) PPC_WEAK_FUNC(sub_83BDF578);
PPC_FUNC_IMPL(__imp__sub_83BDF578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF584"))) PPC_WEAK_FUNC(sub_83BDF584);
PPC_FUNC_IMPL(__imp__sub_83BDF584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF588"))) PPC_WEAK_FUNC(sub_83BDF588);
PPC_FUNC_IMPL(__imp__sub_83BDF588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31928
	ctx.r3.s64 = ctx.r11.s64 + 31928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF594"))) PPC_WEAK_FUNC(sub_83BDF594);
PPC_FUNC_IMPL(__imp__sub_83BDF594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF598"))) PPC_WEAK_FUNC(sub_83BDF598);
PPC_FUNC_IMPL(__imp__sub_83BDF598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF5A4"))) PPC_WEAK_FUNC(sub_83BDF5A4);
PPC_FUNC_IMPL(__imp__sub_83BDF5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF5A8"))) PPC_WEAK_FUNC(sub_83BDF5A8);
PPC_FUNC_IMPL(__imp__sub_83BDF5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31944
	ctx.r3.s64 = ctx.r11.s64 + 31944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF5B4"))) PPC_WEAK_FUNC(sub_83BDF5B4);
PPC_FUNC_IMPL(__imp__sub_83BDF5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF5B8"))) PPC_WEAK_FUNC(sub_83BDF5B8);
PPC_FUNC_IMPL(__imp__sub_83BDF5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31952
	ctx.r3.s64 = ctx.r11.s64 + 31952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF5C4"))) PPC_WEAK_FUNC(sub_83BDF5C4);
PPC_FUNC_IMPL(__imp__sub_83BDF5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF5C8"))) PPC_WEAK_FUNC(sub_83BDF5C8);
PPC_FUNC_IMPL(__imp__sub_83BDF5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF5D4"))) PPC_WEAK_FUNC(sub_83BDF5D4);
PPC_FUNC_IMPL(__imp__sub_83BDF5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF5D8"))) PPC_WEAK_FUNC(sub_83BDF5D8);
PPC_FUNC_IMPL(__imp__sub_83BDF5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31968
	ctx.r3.s64 = ctx.r11.s64 + 31968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF5E4"))) PPC_WEAK_FUNC(sub_83BDF5E4);
PPC_FUNC_IMPL(__imp__sub_83BDF5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF5E8"))) PPC_WEAK_FUNC(sub_83BDF5E8);
PPC_FUNC_IMPL(__imp__sub_83BDF5E8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-9048
	ctx.r3.s64 = ctx.r11.s64 + -9048;
	// bl 0x83523120
	ctx.lr = 0x83BDF600;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31976
	ctx.r3.s64 = ctx.r10.s64 + 31976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF60C;
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

__attribute__((alias("__imp__sub_83BDF61C"))) PPC_WEAK_FUNC(sub_83BDF61C);
PPC_FUNC_IMPL(__imp__sub_83BDF61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF620"))) PPC_WEAK_FUNC(sub_83BDF620);
PPC_FUNC_IMPL(__imp__sub_83BDF620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9032
	ctx.r7.s64 = ctx.r8.s64 + -9032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9032(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF648"))) PPC_WEAK_FUNC(sub_83BDF648);
PPC_FUNC_IMPL(__imp__sub_83BDF648) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-20468
	ctx.r6.s64 = ctx.r7.s64 + -20468;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20540(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20540);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9032);
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
	// std r9,-20468(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20468, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF690"))) PPC_WEAK_FUNC(sub_83BDF690);
PPC_FUNC_IMPL(__imp__sub_83BDF690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31992
	ctx.r3.s64 = ctx.r11.s64 + 31992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF69C"))) PPC_WEAK_FUNC(sub_83BDF69C);
PPC_FUNC_IMPL(__imp__sub_83BDF69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF6A0"))) PPC_WEAK_FUNC(sub_83BDF6A0);
PPC_FUNC_IMPL(__imp__sub_83BDF6A0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-9024
	ctx.r3.s64 = ctx.r11.s64 + -9024;
	// bl 0x8259af80
	ctx.lr = 0x83BDF6B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32008
	ctx.r3.s64 = ctx.r10.s64 + 32008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF6C4;
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

__attribute__((alias("__imp__sub_83BDF6D4"))) PPC_WEAK_FUNC(sub_83BDF6D4);
PPC_FUNC_IMPL(__imp__sub_83BDF6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF6D8"))) PPC_WEAK_FUNC(sub_83BDF6D8);
PPC_FUNC_IMPL(__imp__sub_83BDF6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9044
	ctx.r11.s64 = ctx.r8.s64 + -9044;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-20492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20492);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32000
	ctx.r3.s64 = ctx.r6.s64 + 32000;
	// stw r10,-9044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF708"))) PPC_WEAK_FUNC(sub_83BDF708);
PPC_FUNC_IMPL(__imp__sub_83BDF708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32016
	ctx.r3.s64 = ctx.r11.s64 + 32016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF714"))) PPC_WEAK_FUNC(sub_83BDF714);
PPC_FUNC_IMPL(__imp__sub_83BDF714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF718"))) PPC_WEAK_FUNC(sub_83BDF718);
PPC_FUNC_IMPL(__imp__sub_83BDF718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32024
	ctx.r3.s64 = ctx.r11.s64 + 32024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF724"))) PPC_WEAK_FUNC(sub_83BDF724);
PPC_FUNC_IMPL(__imp__sub_83BDF724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF728"))) PPC_WEAK_FUNC(sub_83BDF728);
PPC_FUNC_IMPL(__imp__sub_83BDF728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32032
	ctx.r3.s64 = ctx.r11.s64 + 32032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF734"))) PPC_WEAK_FUNC(sub_83BDF734);
PPC_FUNC_IMPL(__imp__sub_83BDF734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF738"))) PPC_WEAK_FUNC(sub_83BDF738);
PPC_FUNC_IMPL(__imp__sub_83BDF738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF744"))) PPC_WEAK_FUNC(sub_83BDF744);
PPC_FUNC_IMPL(__imp__sub_83BDF744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF748"))) PPC_WEAK_FUNC(sub_83BDF748);
PPC_FUNC_IMPL(__imp__sub_83BDF748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32048
	ctx.r3.s64 = ctx.r11.s64 + 32048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF754"))) PPC_WEAK_FUNC(sub_83BDF754);
PPC_FUNC_IMPL(__imp__sub_83BDF754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF758"))) PPC_WEAK_FUNC(sub_83BDF758);
PPC_FUNC_IMPL(__imp__sub_83BDF758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32056
	ctx.r3.s64 = ctx.r11.s64 + 32056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF764"))) PPC_WEAK_FUNC(sub_83BDF764);
PPC_FUNC_IMPL(__imp__sub_83BDF764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF768"))) PPC_WEAK_FUNC(sub_83BDF768);
PPC_FUNC_IMPL(__imp__sub_83BDF768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF774"))) PPC_WEAK_FUNC(sub_83BDF774);
PPC_FUNC_IMPL(__imp__sub_83BDF774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF778"))) PPC_WEAK_FUNC(sub_83BDF778);
PPC_FUNC_IMPL(__imp__sub_83BDF778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32072
	ctx.r3.s64 = ctx.r11.s64 + 32072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF784"))) PPC_WEAK_FUNC(sub_83BDF784);
PPC_FUNC_IMPL(__imp__sub_83BDF784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF788"))) PPC_WEAK_FUNC(sub_83BDF788);
PPC_FUNC_IMPL(__imp__sub_83BDF788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32080
	ctx.r3.s64 = ctx.r11.s64 + 32080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF794"))) PPC_WEAK_FUNC(sub_83BDF794);
PPC_FUNC_IMPL(__imp__sub_83BDF794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF798"))) PPC_WEAK_FUNC(sub_83BDF798);
PPC_FUNC_IMPL(__imp__sub_83BDF798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32088
	ctx.r3.s64 = ctx.r11.s64 + 32088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF7A4"))) PPC_WEAK_FUNC(sub_83BDF7A4);
PPC_FUNC_IMPL(__imp__sub_83BDF7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF7A8"))) PPC_WEAK_FUNC(sub_83BDF7A8);
PPC_FUNC_IMPL(__imp__sub_83BDF7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32096
	ctx.r3.s64 = ctx.r11.s64 + 32096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF7B4"))) PPC_WEAK_FUNC(sub_83BDF7B4);
PPC_FUNC_IMPL(__imp__sub_83BDF7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF7B8"))) PPC_WEAK_FUNC(sub_83BDF7B8);
PPC_FUNC_IMPL(__imp__sub_83BDF7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32104
	ctx.r3.s64 = ctx.r11.s64 + 32104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF7C4"))) PPC_WEAK_FUNC(sub_83BDF7C4);
PPC_FUNC_IMPL(__imp__sub_83BDF7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF7C8"))) PPC_WEAK_FUNC(sub_83BDF7C8);
PPC_FUNC_IMPL(__imp__sub_83BDF7C8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// bl 0x83523120
	ctx.lr = 0x83BDF7E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32112
	ctx.r3.s64 = ctx.r10.s64 + 32112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF7EC;
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

__attribute__((alias("__imp__sub_83BDF7FC"))) PPC_WEAK_FUNC(sub_83BDF7FC);
PPC_FUNC_IMPL(__imp__sub_83BDF7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF800"))) PPC_WEAK_FUNC(sub_83BDF800);
PPC_FUNC_IMPL(__imp__sub_83BDF800) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8664
	ctx.r7.s64 = ctx.r8.s64 + -8664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8664(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF828"))) PPC_WEAK_FUNC(sub_83BDF828);
PPC_FUNC_IMPL(__imp__sub_83BDF828) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-20340
	ctx.r6.s64 = ctx.r7.s64 + -20340;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20412(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20412);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8664);
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
	// std r9,-20340(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20340, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDF870"))) PPC_WEAK_FUNC(sub_83BDF870);
PPC_FUNC_IMPL(__imp__sub_83BDF870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF87C"))) PPC_WEAK_FUNC(sub_83BDF87C);
PPC_FUNC_IMPL(__imp__sub_83BDF87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF880"))) PPC_WEAK_FUNC(sub_83BDF880);
PPC_FUNC_IMPL(__imp__sub_83BDF880) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-8656
	ctx.r3.s64 = ctx.r11.s64 + -8656;
	// bl 0x8259af80
	ctx.lr = 0x83BDF898;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32144
	ctx.r3.s64 = ctx.r10.s64 + 32144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF8A4;
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

__attribute__((alias("__imp__sub_83BDF8B4"))) PPC_WEAK_FUNC(sub_83BDF8B4);
PPC_FUNC_IMPL(__imp__sub_83BDF8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF8B8"))) PPC_WEAK_FUNC(sub_83BDF8B8);
PPC_FUNC_IMPL(__imp__sub_83BDF8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8676
	ctx.r11.s64 = ctx.r8.s64 + -8676;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-20364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20364);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32136
	ctx.r3.s64 = ctx.r6.s64 + 32136;
	// stw r10,-8676(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF8E8"))) PPC_WEAK_FUNC(sub_83BDF8E8);
PPC_FUNC_IMPL(__imp__sub_83BDF8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32152
	ctx.r3.s64 = ctx.r11.s64 + 32152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF8F4"))) PPC_WEAK_FUNC(sub_83BDF8F4);
PPC_FUNC_IMPL(__imp__sub_83BDF8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF8F8"))) PPC_WEAK_FUNC(sub_83BDF8F8);
PPC_FUNC_IMPL(__imp__sub_83BDF8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32160
	ctx.r3.s64 = ctx.r11.s64 + 32160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF904"))) PPC_WEAK_FUNC(sub_83BDF904);
PPC_FUNC_IMPL(__imp__sub_83BDF904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF908"))) PPC_WEAK_FUNC(sub_83BDF908);
PPC_FUNC_IMPL(__imp__sub_83BDF908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32168
	ctx.r3.s64 = ctx.r11.s64 + 32168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF914"))) PPC_WEAK_FUNC(sub_83BDF914);
PPC_FUNC_IMPL(__imp__sub_83BDF914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF918"))) PPC_WEAK_FUNC(sub_83BDF918);
PPC_FUNC_IMPL(__imp__sub_83BDF918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF924"))) PPC_WEAK_FUNC(sub_83BDF924);
PPC_FUNC_IMPL(__imp__sub_83BDF924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF928"))) PPC_WEAK_FUNC(sub_83BDF928);
PPC_FUNC_IMPL(__imp__sub_83BDF928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32184
	ctx.r3.s64 = ctx.r11.s64 + 32184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF934"))) PPC_WEAK_FUNC(sub_83BDF934);
PPC_FUNC_IMPL(__imp__sub_83BDF934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF938"))) PPC_WEAK_FUNC(sub_83BDF938);
PPC_FUNC_IMPL(__imp__sub_83BDF938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF944"))) PPC_WEAK_FUNC(sub_83BDF944);
PPC_FUNC_IMPL(__imp__sub_83BDF944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF948"))) PPC_WEAK_FUNC(sub_83BDF948);
PPC_FUNC_IMPL(__imp__sub_83BDF948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32200
	ctx.r3.s64 = ctx.r11.s64 + 32200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF954"))) PPC_WEAK_FUNC(sub_83BDF954);
PPC_FUNC_IMPL(__imp__sub_83BDF954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF958"))) PPC_WEAK_FUNC(sub_83BDF958);
PPC_FUNC_IMPL(__imp__sub_83BDF958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF964"))) PPC_WEAK_FUNC(sub_83BDF964);
PPC_FUNC_IMPL(__imp__sub_83BDF964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF968"))) PPC_WEAK_FUNC(sub_83BDF968);
PPC_FUNC_IMPL(__imp__sub_83BDF968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF974"))) PPC_WEAK_FUNC(sub_83BDF974);
PPC_FUNC_IMPL(__imp__sub_83BDF974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF978"))) PPC_WEAK_FUNC(sub_83BDF978);
PPC_FUNC_IMPL(__imp__sub_83BDF978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32224
	ctx.r3.s64 = ctx.r11.s64 + 32224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF984"))) PPC_WEAK_FUNC(sub_83BDF984);
PPC_FUNC_IMPL(__imp__sub_83BDF984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF988"))) PPC_WEAK_FUNC(sub_83BDF988);
PPC_FUNC_IMPL(__imp__sub_83BDF988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32232
	ctx.r3.s64 = ctx.r11.s64 + 32232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF994"))) PPC_WEAK_FUNC(sub_83BDF994);
PPC_FUNC_IMPL(__imp__sub_83BDF994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF998"))) PPC_WEAK_FUNC(sub_83BDF998);
PPC_FUNC_IMPL(__imp__sub_83BDF998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDF9A4"))) PPC_WEAK_FUNC(sub_83BDF9A4);
PPC_FUNC_IMPL(__imp__sub_83BDF9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF9A8"))) PPC_WEAK_FUNC(sub_83BDF9A8);
PPC_FUNC_IMPL(__imp__sub_83BDF9A8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-8312
	ctx.r3.s64 = ctx.r11.s64 + -8312;
	// bl 0x83523120
	ctx.lr = 0x83BDF9C0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32248
	ctx.r3.s64 = ctx.r10.s64 + 32248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDF9CC;
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

__attribute__((alias("__imp__sub_83BDF9DC"))) PPC_WEAK_FUNC(sub_83BDF9DC);
PPC_FUNC_IMPL(__imp__sub_83BDF9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDF9E0"))) PPC_WEAK_FUNC(sub_83BDF9E0);
PPC_FUNC_IMPL(__imp__sub_83BDF9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8296
	ctx.r7.s64 = ctx.r8.s64 + -8296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8296(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDFA08"))) PPC_WEAK_FUNC(sub_83BDFA08);
PPC_FUNC_IMPL(__imp__sub_83BDFA08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-20212
	ctx.r6.s64 = ctx.r7.s64 + -20212;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8296);
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
	// std r9,-20212(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDFA50"))) PPC_WEAK_FUNC(sub_83BDFA50);
PPC_FUNC_IMPL(__imp__sub_83BDFA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32264
	ctx.r3.s64 = ctx.r11.s64 + 32264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFA5C"))) PPC_WEAK_FUNC(sub_83BDFA5C);
PPC_FUNC_IMPL(__imp__sub_83BDFA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFA60"))) PPC_WEAK_FUNC(sub_83BDFA60);
PPC_FUNC_IMPL(__imp__sub_83BDFA60) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-8288
	ctx.r3.s64 = ctx.r11.s64 + -8288;
	// bl 0x8259af80
	ctx.lr = 0x83BDFA78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32280
	ctx.r3.s64 = ctx.r10.s64 + 32280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDFA84;
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

__attribute__((alias("__imp__sub_83BDFA94"))) PPC_WEAK_FUNC(sub_83BDFA94);
PPC_FUNC_IMPL(__imp__sub_83BDFA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFA98"))) PPC_WEAK_FUNC(sub_83BDFA98);
PPC_FUNC_IMPL(__imp__sub_83BDFA98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8308
	ctx.r11.s64 = ctx.r8.s64 + -8308;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-20236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20236);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32272
	ctx.r3.s64 = ctx.r6.s64 + 32272;
	// stw r10,-8308(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFAC8"))) PPC_WEAK_FUNC(sub_83BDFAC8);
PPC_FUNC_IMPL(__imp__sub_83BDFAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32288
	ctx.r3.s64 = ctx.r11.s64 + 32288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFAD4"))) PPC_WEAK_FUNC(sub_83BDFAD4);
PPC_FUNC_IMPL(__imp__sub_83BDFAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFAD8"))) PPC_WEAK_FUNC(sub_83BDFAD8);
PPC_FUNC_IMPL(__imp__sub_83BDFAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFAE4"))) PPC_WEAK_FUNC(sub_83BDFAE4);
PPC_FUNC_IMPL(__imp__sub_83BDFAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFAE8"))) PPC_WEAK_FUNC(sub_83BDFAE8);
PPC_FUNC_IMPL(__imp__sub_83BDFAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32304
	ctx.r3.s64 = ctx.r11.s64 + 32304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFAF4"))) PPC_WEAK_FUNC(sub_83BDFAF4);
PPC_FUNC_IMPL(__imp__sub_83BDFAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFAF8"))) PPC_WEAK_FUNC(sub_83BDFAF8);
PPC_FUNC_IMPL(__imp__sub_83BDFAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32312
	ctx.r3.s64 = ctx.r11.s64 + 32312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB04"))) PPC_WEAK_FUNC(sub_83BDFB04);
PPC_FUNC_IMPL(__imp__sub_83BDFB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFB08"))) PPC_WEAK_FUNC(sub_83BDFB08);
PPC_FUNC_IMPL(__imp__sub_83BDFB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32320
	ctx.r3.s64 = ctx.r11.s64 + 32320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB14"))) PPC_WEAK_FUNC(sub_83BDFB14);
PPC_FUNC_IMPL(__imp__sub_83BDFB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFB18"))) PPC_WEAK_FUNC(sub_83BDFB18);
PPC_FUNC_IMPL(__imp__sub_83BDFB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32328
	ctx.r3.s64 = ctx.r11.s64 + 32328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB24"))) PPC_WEAK_FUNC(sub_83BDFB24);
PPC_FUNC_IMPL(__imp__sub_83BDFB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

