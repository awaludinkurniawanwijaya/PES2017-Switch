#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C46834"))) PPC_WEAK_FUNC(sub_83C46834);
PPC_FUNC_IMPL(__imp__sub_83C46834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46838"))) PPC_WEAK_FUNC(sub_83C46838);
PPC_FUNC_IMPL(__imp__sub_83C46838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19480
	ctx.r3.s64 = ctx.r11.s64 + -19480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46844"))) PPC_WEAK_FUNC(sub_83C46844);
PPC_FUNC_IMPL(__imp__sub_83C46844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46848"))) PPC_WEAK_FUNC(sub_83C46848);
PPC_FUNC_IMPL(__imp__sub_83C46848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19472
	ctx.r3.s64 = ctx.r11.s64 + -19472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46854"))) PPC_WEAK_FUNC(sub_83C46854);
PPC_FUNC_IMPL(__imp__sub_83C46854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46858"))) PPC_WEAK_FUNC(sub_83C46858);
PPC_FUNC_IMPL(__imp__sub_83C46858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19464
	ctx.r3.s64 = ctx.r11.s64 + -19464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46864"))) PPC_WEAK_FUNC(sub_83C46864);
PPC_FUNC_IMPL(__imp__sub_83C46864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46868"))) PPC_WEAK_FUNC(sub_83C46868);
PPC_FUNC_IMPL(__imp__sub_83C46868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19456
	ctx.r3.s64 = ctx.r11.s64 + -19456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46874"))) PPC_WEAK_FUNC(sub_83C46874);
PPC_FUNC_IMPL(__imp__sub_83C46874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46878"))) PPC_WEAK_FUNC(sub_83C46878);
PPC_FUNC_IMPL(__imp__sub_83C46878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10080
	ctx.r7.s64 = ctx.r8.s64 + -10080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C468A0"))) PPC_WEAK_FUNC(sub_83C468A0);
PPC_FUNC_IMPL(__imp__sub_83C468A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-2036
	ctx.r6.s64 = ctx.r7.s64 + -2036;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2108(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2108);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10080);
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
	// std r9,-2036(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2036, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C468E8"))) PPC_WEAK_FUNC(sub_83C468E8);
PPC_FUNC_IMPL(__imp__sub_83C468E8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-10096
	ctx.r3.s64 = ctx.r11.s64 + -10096;
	// bl 0x83523120
	ctx.lr = 0x83C46900;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19448
	ctx.r3.s64 = ctx.r10.s64 + -19448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4690C;
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

__attribute__((alias("__imp__sub_83C4691C"))) PPC_WEAK_FUNC(sub_83C4691C);
PPC_FUNC_IMPL(__imp__sub_83C4691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46920"))) PPC_WEAK_FUNC(sub_83C46920);
PPC_FUNC_IMPL(__imp__sub_83C46920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19432
	ctx.r3.s64 = ctx.r11.s64 + -19432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4692C"))) PPC_WEAK_FUNC(sub_83C4692C);
PPC_FUNC_IMPL(__imp__sub_83C4692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46930"))) PPC_WEAK_FUNC(sub_83C46930);
PPC_FUNC_IMPL(__imp__sub_83C46930) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-10072
	ctx.r3.s64 = ctx.r11.s64 + -10072;
	// bl 0x8259af80
	ctx.lr = 0x83C46948;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19416
	ctx.r3.s64 = ctx.r10.s64 + -19416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46954;
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

__attribute__((alias("__imp__sub_83C46964"))) PPC_WEAK_FUNC(sub_83C46964);
PPC_FUNC_IMPL(__imp__sub_83C46964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46968"))) PPC_WEAK_FUNC(sub_83C46968);
PPC_FUNC_IMPL(__imp__sub_83C46968) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10092
	ctx.r11.s64 = ctx.r8.s64 + -10092;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-2060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2060);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19424
	ctx.r3.s64 = ctx.r6.s64 + -19424;
	// stw r10,-10092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46998"))) PPC_WEAK_FUNC(sub_83C46998);
PPC_FUNC_IMPL(__imp__sub_83C46998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19408
	ctx.r3.s64 = ctx.r11.s64 + -19408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C469A4"))) PPC_WEAK_FUNC(sub_83C469A4);
PPC_FUNC_IMPL(__imp__sub_83C469A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C469A8"))) PPC_WEAK_FUNC(sub_83C469A8);
PPC_FUNC_IMPL(__imp__sub_83C469A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19400
	ctx.r3.s64 = ctx.r11.s64 + -19400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C469B4"))) PPC_WEAK_FUNC(sub_83C469B4);
PPC_FUNC_IMPL(__imp__sub_83C469B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C469B8"))) PPC_WEAK_FUNC(sub_83C469B8);
PPC_FUNC_IMPL(__imp__sub_83C469B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19392
	ctx.r3.s64 = ctx.r11.s64 + -19392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C469C4"))) PPC_WEAK_FUNC(sub_83C469C4);
PPC_FUNC_IMPL(__imp__sub_83C469C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C469C8"))) PPC_WEAK_FUNC(sub_83C469C8);
PPC_FUNC_IMPL(__imp__sub_83C469C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19384
	ctx.r3.s64 = ctx.r11.s64 + -19384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C469D4"))) PPC_WEAK_FUNC(sub_83C469D4);
PPC_FUNC_IMPL(__imp__sub_83C469D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C469D8"))) PPC_WEAK_FUNC(sub_83C469D8);
PPC_FUNC_IMPL(__imp__sub_83C469D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C469E4"))) PPC_WEAK_FUNC(sub_83C469E4);
PPC_FUNC_IMPL(__imp__sub_83C469E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C469E8"))) PPC_WEAK_FUNC(sub_83C469E8);
PPC_FUNC_IMPL(__imp__sub_83C469E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19368
	ctx.r3.s64 = ctx.r11.s64 + -19368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C469F4"))) PPC_WEAK_FUNC(sub_83C469F4);
PPC_FUNC_IMPL(__imp__sub_83C469F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C469F8"))) PPC_WEAK_FUNC(sub_83C469F8);
PPC_FUNC_IMPL(__imp__sub_83C469F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19360
	ctx.r3.s64 = ctx.r11.s64 + -19360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46A04"))) PPC_WEAK_FUNC(sub_83C46A04);
PPC_FUNC_IMPL(__imp__sub_83C46A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46A08"))) PPC_WEAK_FUNC(sub_83C46A08);
PPC_FUNC_IMPL(__imp__sub_83C46A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19352
	ctx.r3.s64 = ctx.r11.s64 + -19352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46A14"))) PPC_WEAK_FUNC(sub_83C46A14);
PPC_FUNC_IMPL(__imp__sub_83C46A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46A18"))) PPC_WEAK_FUNC(sub_83C46A18);
PPC_FUNC_IMPL(__imp__sub_83C46A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19344
	ctx.r3.s64 = ctx.r11.s64 + -19344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46A24"))) PPC_WEAK_FUNC(sub_83C46A24);
PPC_FUNC_IMPL(__imp__sub_83C46A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46A28"))) PPC_WEAK_FUNC(sub_83C46A28);
PPC_FUNC_IMPL(__imp__sub_83C46A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19336
	ctx.r3.s64 = ctx.r11.s64 + -19336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46A34"))) PPC_WEAK_FUNC(sub_83C46A34);
PPC_FUNC_IMPL(__imp__sub_83C46A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46A38"))) PPC_WEAK_FUNC(sub_83C46A38);
PPC_FUNC_IMPL(__imp__sub_83C46A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19328
	ctx.r3.s64 = ctx.r11.s64 + -19328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46A44"))) PPC_WEAK_FUNC(sub_83C46A44);
PPC_FUNC_IMPL(__imp__sub_83C46A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46A48"))) PPC_WEAK_FUNC(sub_83C46A48);
PPC_FUNC_IMPL(__imp__sub_83C46A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19320
	ctx.r3.s64 = ctx.r11.s64 + -19320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46A54"))) PPC_WEAK_FUNC(sub_83C46A54);
PPC_FUNC_IMPL(__imp__sub_83C46A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46A58"))) PPC_WEAK_FUNC(sub_83C46A58);
PPC_FUNC_IMPL(__imp__sub_83C46A58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9712
	ctx.r7.s64 = ctx.r8.s64 + -9712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46A80"))) PPC_WEAK_FUNC(sub_83C46A80);
PPC_FUNC_IMPL(__imp__sub_83C46A80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-1908
	ctx.r6.s64 = ctx.r7.s64 + -1908;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1980(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1980);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9712);
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
	// std r9,-1908(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1908, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46AC8"))) PPC_WEAK_FUNC(sub_83C46AC8);
PPC_FUNC_IMPL(__imp__sub_83C46AC8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-9728
	ctx.r3.s64 = ctx.r11.s64 + -9728;
	// bl 0x83523120
	ctx.lr = 0x83C46AE0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19312
	ctx.r3.s64 = ctx.r10.s64 + -19312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46AEC;
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

__attribute__((alias("__imp__sub_83C46AFC"))) PPC_WEAK_FUNC(sub_83C46AFC);
PPC_FUNC_IMPL(__imp__sub_83C46AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46B00"))) PPC_WEAK_FUNC(sub_83C46B00);
PPC_FUNC_IMPL(__imp__sub_83C46B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19296
	ctx.r3.s64 = ctx.r11.s64 + -19296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46B0C"))) PPC_WEAK_FUNC(sub_83C46B0C);
PPC_FUNC_IMPL(__imp__sub_83C46B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46B10"))) PPC_WEAK_FUNC(sub_83C46B10);
PPC_FUNC_IMPL(__imp__sub_83C46B10) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-9704
	ctx.r3.s64 = ctx.r11.s64 + -9704;
	// bl 0x8259af80
	ctx.lr = 0x83C46B28;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19280
	ctx.r3.s64 = ctx.r10.s64 + -19280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46B34;
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

__attribute__((alias("__imp__sub_83C46B44"))) PPC_WEAK_FUNC(sub_83C46B44);
PPC_FUNC_IMPL(__imp__sub_83C46B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46B48"))) PPC_WEAK_FUNC(sub_83C46B48);
PPC_FUNC_IMPL(__imp__sub_83C46B48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9724
	ctx.r11.s64 = ctx.r8.s64 + -9724;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-1932(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1932);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19288
	ctx.r3.s64 = ctx.r6.s64 + -19288;
	// stw r10,-9724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46B78"))) PPC_WEAK_FUNC(sub_83C46B78);
PPC_FUNC_IMPL(__imp__sub_83C46B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19272
	ctx.r3.s64 = ctx.r11.s64 + -19272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46B84"))) PPC_WEAK_FUNC(sub_83C46B84);
PPC_FUNC_IMPL(__imp__sub_83C46B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46B88"))) PPC_WEAK_FUNC(sub_83C46B88);
PPC_FUNC_IMPL(__imp__sub_83C46B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19264
	ctx.r3.s64 = ctx.r11.s64 + -19264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46B94"))) PPC_WEAK_FUNC(sub_83C46B94);
PPC_FUNC_IMPL(__imp__sub_83C46B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46B98"))) PPC_WEAK_FUNC(sub_83C46B98);
PPC_FUNC_IMPL(__imp__sub_83C46B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19256
	ctx.r3.s64 = ctx.r11.s64 + -19256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46BA4"))) PPC_WEAK_FUNC(sub_83C46BA4);
PPC_FUNC_IMPL(__imp__sub_83C46BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46BA8"))) PPC_WEAK_FUNC(sub_83C46BA8);
PPC_FUNC_IMPL(__imp__sub_83C46BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19248
	ctx.r3.s64 = ctx.r11.s64 + -19248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46BB4"))) PPC_WEAK_FUNC(sub_83C46BB4);
PPC_FUNC_IMPL(__imp__sub_83C46BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46BB8"))) PPC_WEAK_FUNC(sub_83C46BB8);
PPC_FUNC_IMPL(__imp__sub_83C46BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19240
	ctx.r3.s64 = ctx.r11.s64 + -19240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46BC4"))) PPC_WEAK_FUNC(sub_83C46BC4);
PPC_FUNC_IMPL(__imp__sub_83C46BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46BC8"))) PPC_WEAK_FUNC(sub_83C46BC8);
PPC_FUNC_IMPL(__imp__sub_83C46BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19232
	ctx.r3.s64 = ctx.r11.s64 + -19232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46BD4"))) PPC_WEAK_FUNC(sub_83C46BD4);
PPC_FUNC_IMPL(__imp__sub_83C46BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46BD8"))) PPC_WEAK_FUNC(sub_83C46BD8);
PPC_FUNC_IMPL(__imp__sub_83C46BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19224
	ctx.r3.s64 = ctx.r11.s64 + -19224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46BE4"))) PPC_WEAK_FUNC(sub_83C46BE4);
PPC_FUNC_IMPL(__imp__sub_83C46BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46BE8"))) PPC_WEAK_FUNC(sub_83C46BE8);
PPC_FUNC_IMPL(__imp__sub_83C46BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19216
	ctx.r3.s64 = ctx.r11.s64 + -19216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46BF4"))) PPC_WEAK_FUNC(sub_83C46BF4);
PPC_FUNC_IMPL(__imp__sub_83C46BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46BF8"))) PPC_WEAK_FUNC(sub_83C46BF8);
PPC_FUNC_IMPL(__imp__sub_83C46BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19208
	ctx.r3.s64 = ctx.r11.s64 + -19208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C04"))) PPC_WEAK_FUNC(sub_83C46C04);
PPC_FUNC_IMPL(__imp__sub_83C46C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C08"))) PPC_WEAK_FUNC(sub_83C46C08);
PPC_FUNC_IMPL(__imp__sub_83C46C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19200
	ctx.r3.s64 = ctx.r11.s64 + -19200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C14"))) PPC_WEAK_FUNC(sub_83C46C14);
PPC_FUNC_IMPL(__imp__sub_83C46C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C18"))) PPC_WEAK_FUNC(sub_83C46C18);
PPC_FUNC_IMPL(__imp__sub_83C46C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19192
	ctx.r3.s64 = ctx.r11.s64 + -19192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C24"))) PPC_WEAK_FUNC(sub_83C46C24);
PPC_FUNC_IMPL(__imp__sub_83C46C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C28"))) PPC_WEAK_FUNC(sub_83C46C28);
PPC_FUNC_IMPL(__imp__sub_83C46C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19184
	ctx.r3.s64 = ctx.r11.s64 + -19184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C34"))) PPC_WEAK_FUNC(sub_83C46C34);
PPC_FUNC_IMPL(__imp__sub_83C46C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C38"))) PPC_WEAK_FUNC(sub_83C46C38);
PPC_FUNC_IMPL(__imp__sub_83C46C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C44"))) PPC_WEAK_FUNC(sub_83C46C44);
PPC_FUNC_IMPL(__imp__sub_83C46C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C48"))) PPC_WEAK_FUNC(sub_83C46C48);
PPC_FUNC_IMPL(__imp__sub_83C46C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19168
	ctx.r3.s64 = ctx.r11.s64 + -19168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C54"))) PPC_WEAK_FUNC(sub_83C46C54);
PPC_FUNC_IMPL(__imp__sub_83C46C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C58"))) PPC_WEAK_FUNC(sub_83C46C58);
PPC_FUNC_IMPL(__imp__sub_83C46C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19160
	ctx.r3.s64 = ctx.r11.s64 + -19160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C64"))) PPC_WEAK_FUNC(sub_83C46C64);
PPC_FUNC_IMPL(__imp__sub_83C46C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C68"))) PPC_WEAK_FUNC(sub_83C46C68);
PPC_FUNC_IMPL(__imp__sub_83C46C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19152
	ctx.r3.s64 = ctx.r11.s64 + -19152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C74"))) PPC_WEAK_FUNC(sub_83C46C74);
PPC_FUNC_IMPL(__imp__sub_83C46C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C78"))) PPC_WEAK_FUNC(sub_83C46C78);
PPC_FUNC_IMPL(__imp__sub_83C46C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19144
	ctx.r3.s64 = ctx.r11.s64 + -19144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C84"))) PPC_WEAK_FUNC(sub_83C46C84);
PPC_FUNC_IMPL(__imp__sub_83C46C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C88"))) PPC_WEAK_FUNC(sub_83C46C88);
PPC_FUNC_IMPL(__imp__sub_83C46C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19136
	ctx.r3.s64 = ctx.r11.s64 + -19136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46C94"))) PPC_WEAK_FUNC(sub_83C46C94);
PPC_FUNC_IMPL(__imp__sub_83C46C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46C98"))) PPC_WEAK_FUNC(sub_83C46C98);
PPC_FUNC_IMPL(__imp__sub_83C46C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19128
	ctx.r3.s64 = ctx.r11.s64 + -19128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46CA4"))) PPC_WEAK_FUNC(sub_83C46CA4);
PPC_FUNC_IMPL(__imp__sub_83C46CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46CA8"))) PPC_WEAK_FUNC(sub_83C46CA8);
PPC_FUNC_IMPL(__imp__sub_83C46CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19120
	ctx.r3.s64 = ctx.r11.s64 + -19120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46CB4"))) PPC_WEAK_FUNC(sub_83C46CB4);
PPC_FUNC_IMPL(__imp__sub_83C46CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46CB8"))) PPC_WEAK_FUNC(sub_83C46CB8);
PPC_FUNC_IMPL(__imp__sub_83C46CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19112
	ctx.r3.s64 = ctx.r11.s64 + -19112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46CC4"))) PPC_WEAK_FUNC(sub_83C46CC4);
PPC_FUNC_IMPL(__imp__sub_83C46CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46CC8"))) PPC_WEAK_FUNC(sub_83C46CC8);
PPC_FUNC_IMPL(__imp__sub_83C46CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19104
	ctx.r3.s64 = ctx.r11.s64 + -19104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46CD4"))) PPC_WEAK_FUNC(sub_83C46CD4);
PPC_FUNC_IMPL(__imp__sub_83C46CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46CD8"))) PPC_WEAK_FUNC(sub_83C46CD8);
PPC_FUNC_IMPL(__imp__sub_83C46CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19096
	ctx.r3.s64 = ctx.r11.s64 + -19096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46CE4"))) PPC_WEAK_FUNC(sub_83C46CE4);
PPC_FUNC_IMPL(__imp__sub_83C46CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46CE8"))) PPC_WEAK_FUNC(sub_83C46CE8);
PPC_FUNC_IMPL(__imp__sub_83C46CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19088
	ctx.r3.s64 = ctx.r11.s64 + -19088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46CF4"))) PPC_WEAK_FUNC(sub_83C46CF4);
PPC_FUNC_IMPL(__imp__sub_83C46CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46CF8"))) PPC_WEAK_FUNC(sub_83C46CF8);
PPC_FUNC_IMPL(__imp__sub_83C46CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9336
	ctx.r7.s64 = ctx.r8.s64 + -9336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46D20"))) PPC_WEAK_FUNC(sub_83C46D20);
PPC_FUNC_IMPL(__imp__sub_83C46D20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-1676
	ctx.r6.s64 = ctx.r7.s64 + -1676;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1748(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1748);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9336);
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
	// std r9,-1676(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1676, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46D68"))) PPC_WEAK_FUNC(sub_83C46D68);
PPC_FUNC_IMPL(__imp__sub_83C46D68) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-9352
	ctx.r3.s64 = ctx.r11.s64 + -9352;
	// bl 0x83523120
	ctx.lr = 0x83C46D80;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19080
	ctx.r3.s64 = ctx.r10.s64 + -19080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46D8C;
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

__attribute__((alias("__imp__sub_83C46D9C"))) PPC_WEAK_FUNC(sub_83C46D9C);
PPC_FUNC_IMPL(__imp__sub_83C46D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46DA0"))) PPC_WEAK_FUNC(sub_83C46DA0);
PPC_FUNC_IMPL(__imp__sub_83C46DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19064
	ctx.r3.s64 = ctx.r11.s64 + -19064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46DAC"))) PPC_WEAK_FUNC(sub_83C46DAC);
PPC_FUNC_IMPL(__imp__sub_83C46DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46DB0"))) PPC_WEAK_FUNC(sub_83C46DB0);
PPC_FUNC_IMPL(__imp__sub_83C46DB0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// bl 0x8259af80
	ctx.lr = 0x83C46DC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19048
	ctx.r3.s64 = ctx.r10.s64 + -19048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46DD4;
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

__attribute__((alias("__imp__sub_83C46DE4"))) PPC_WEAK_FUNC(sub_83C46DE4);
PPC_FUNC_IMPL(__imp__sub_83C46DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46DE8"))) PPC_WEAK_FUNC(sub_83C46DE8);
PPC_FUNC_IMPL(__imp__sub_83C46DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9348
	ctx.r11.s64 = ctx.r8.s64 + -9348;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-1700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1700);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19056
	ctx.r3.s64 = ctx.r6.s64 + -19056;
	// stw r10,-9348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E18"))) PPC_WEAK_FUNC(sub_83C46E18);
PPC_FUNC_IMPL(__imp__sub_83C46E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19040
	ctx.r3.s64 = ctx.r11.s64 + -19040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E24"))) PPC_WEAK_FUNC(sub_83C46E24);
PPC_FUNC_IMPL(__imp__sub_83C46E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46E28"))) PPC_WEAK_FUNC(sub_83C46E28);
PPC_FUNC_IMPL(__imp__sub_83C46E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19032
	ctx.r3.s64 = ctx.r11.s64 + -19032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E34"))) PPC_WEAK_FUNC(sub_83C46E34);
PPC_FUNC_IMPL(__imp__sub_83C46E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46E38"))) PPC_WEAK_FUNC(sub_83C46E38);
PPC_FUNC_IMPL(__imp__sub_83C46E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19024
	ctx.r3.s64 = ctx.r11.s64 + -19024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E44"))) PPC_WEAK_FUNC(sub_83C46E44);
PPC_FUNC_IMPL(__imp__sub_83C46E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46E48"))) PPC_WEAK_FUNC(sub_83C46E48);
PPC_FUNC_IMPL(__imp__sub_83C46E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E54"))) PPC_WEAK_FUNC(sub_83C46E54);
PPC_FUNC_IMPL(__imp__sub_83C46E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46E58"))) PPC_WEAK_FUNC(sub_83C46E58);
PPC_FUNC_IMPL(__imp__sub_83C46E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19008
	ctx.r3.s64 = ctx.r11.s64 + -19008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E64"))) PPC_WEAK_FUNC(sub_83C46E64);
PPC_FUNC_IMPL(__imp__sub_83C46E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46E68"))) PPC_WEAK_FUNC(sub_83C46E68);
PPC_FUNC_IMPL(__imp__sub_83C46E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19000
	ctx.r3.s64 = ctx.r11.s64 + -19000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E74"))) PPC_WEAK_FUNC(sub_83C46E74);
PPC_FUNC_IMPL(__imp__sub_83C46E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46E78"))) PPC_WEAK_FUNC(sub_83C46E78);
PPC_FUNC_IMPL(__imp__sub_83C46E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18992
	ctx.r3.s64 = ctx.r11.s64 + -18992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E84"))) PPC_WEAK_FUNC(sub_83C46E84);
PPC_FUNC_IMPL(__imp__sub_83C46E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46E88"))) PPC_WEAK_FUNC(sub_83C46E88);
PPC_FUNC_IMPL(__imp__sub_83C46E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18984
	ctx.r3.s64 = ctx.r11.s64 + -18984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46E94"))) PPC_WEAK_FUNC(sub_83C46E94);
PPC_FUNC_IMPL(__imp__sub_83C46E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46E98"))) PPC_WEAK_FUNC(sub_83C46E98);
PPC_FUNC_IMPL(__imp__sub_83C46E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18976
	ctx.r3.s64 = ctx.r11.s64 + -18976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46EA4"))) PPC_WEAK_FUNC(sub_83C46EA4);
PPC_FUNC_IMPL(__imp__sub_83C46EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46EA8"))) PPC_WEAK_FUNC(sub_83C46EA8);
PPC_FUNC_IMPL(__imp__sub_83C46EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18968
	ctx.r3.s64 = ctx.r11.s64 + -18968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46EB4"))) PPC_WEAK_FUNC(sub_83C46EB4);
PPC_FUNC_IMPL(__imp__sub_83C46EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46EB8"))) PPC_WEAK_FUNC(sub_83C46EB8);
PPC_FUNC_IMPL(__imp__sub_83C46EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18960
	ctx.r3.s64 = ctx.r11.s64 + -18960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46EC4"))) PPC_WEAK_FUNC(sub_83C46EC4);
PPC_FUNC_IMPL(__imp__sub_83C46EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46EC8"))) PPC_WEAK_FUNC(sub_83C46EC8);
PPC_FUNC_IMPL(__imp__sub_83C46EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18952
	ctx.r3.s64 = ctx.r11.s64 + -18952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46ED4"))) PPC_WEAK_FUNC(sub_83C46ED4);
PPC_FUNC_IMPL(__imp__sub_83C46ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46ED8"))) PPC_WEAK_FUNC(sub_83C46ED8);
PPC_FUNC_IMPL(__imp__sub_83C46ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8968
	ctx.r7.s64 = ctx.r8.s64 + -8968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8968(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46F00"))) PPC_WEAK_FUNC(sub_83C46F00);
PPC_FUNC_IMPL(__imp__sub_83C46F00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-1548
	ctx.r6.s64 = ctx.r7.s64 + -1548;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8968);
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
	// std r9,-1548(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46F48"))) PPC_WEAK_FUNC(sub_83C46F48);
PPC_FUNC_IMPL(__imp__sub_83C46F48) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-8984
	ctx.r3.s64 = ctx.r11.s64 + -8984;
	// bl 0x83523120
	ctx.lr = 0x83C46F60;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18944
	ctx.r3.s64 = ctx.r10.s64 + -18944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46F6C;
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

__attribute__((alias("__imp__sub_83C46F7C"))) PPC_WEAK_FUNC(sub_83C46F7C);
PPC_FUNC_IMPL(__imp__sub_83C46F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46F80"))) PPC_WEAK_FUNC(sub_83C46F80);
PPC_FUNC_IMPL(__imp__sub_83C46F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18928
	ctx.r3.s64 = ctx.r11.s64 + -18928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46F8C"))) PPC_WEAK_FUNC(sub_83C46F8C);
PPC_FUNC_IMPL(__imp__sub_83C46F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46F90"))) PPC_WEAK_FUNC(sub_83C46F90);
PPC_FUNC_IMPL(__imp__sub_83C46F90) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-8960
	ctx.r3.s64 = ctx.r11.s64 + -8960;
	// bl 0x8259af80
	ctx.lr = 0x83C46FA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18912
	ctx.r3.s64 = ctx.r10.s64 + -18912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46FB4;
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

__attribute__((alias("__imp__sub_83C46FC4"))) PPC_WEAK_FUNC(sub_83C46FC4);
PPC_FUNC_IMPL(__imp__sub_83C46FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46FC8"))) PPC_WEAK_FUNC(sub_83C46FC8);
PPC_FUNC_IMPL(__imp__sub_83C46FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8980
	ctx.r11.s64 = ctx.r8.s64 + -8980;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-1572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1572);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18920
	ctx.r3.s64 = ctx.r6.s64 + -18920;
	// stw r10,-8980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46FF8"))) PPC_WEAK_FUNC(sub_83C46FF8);
PPC_FUNC_IMPL(__imp__sub_83C46FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18904
	ctx.r3.s64 = ctx.r11.s64 + -18904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47004"))) PPC_WEAK_FUNC(sub_83C47004);
PPC_FUNC_IMPL(__imp__sub_83C47004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47008"))) PPC_WEAK_FUNC(sub_83C47008);
PPC_FUNC_IMPL(__imp__sub_83C47008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18896
	ctx.r3.s64 = ctx.r11.s64 + -18896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47014"))) PPC_WEAK_FUNC(sub_83C47014);
PPC_FUNC_IMPL(__imp__sub_83C47014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47018"))) PPC_WEAK_FUNC(sub_83C47018);
PPC_FUNC_IMPL(__imp__sub_83C47018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18888
	ctx.r3.s64 = ctx.r11.s64 + -18888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47024"))) PPC_WEAK_FUNC(sub_83C47024);
PPC_FUNC_IMPL(__imp__sub_83C47024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47028"))) PPC_WEAK_FUNC(sub_83C47028);
PPC_FUNC_IMPL(__imp__sub_83C47028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18880
	ctx.r3.s64 = ctx.r11.s64 + -18880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47034"))) PPC_WEAK_FUNC(sub_83C47034);
PPC_FUNC_IMPL(__imp__sub_83C47034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47038"))) PPC_WEAK_FUNC(sub_83C47038);
PPC_FUNC_IMPL(__imp__sub_83C47038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18872
	ctx.r3.s64 = ctx.r11.s64 + -18872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47044"))) PPC_WEAK_FUNC(sub_83C47044);
PPC_FUNC_IMPL(__imp__sub_83C47044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47048"))) PPC_WEAK_FUNC(sub_83C47048);
PPC_FUNC_IMPL(__imp__sub_83C47048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18864
	ctx.r3.s64 = ctx.r11.s64 + -18864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47054"))) PPC_WEAK_FUNC(sub_83C47054);
PPC_FUNC_IMPL(__imp__sub_83C47054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47058"))) PPC_WEAK_FUNC(sub_83C47058);
PPC_FUNC_IMPL(__imp__sub_83C47058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18856
	ctx.r3.s64 = ctx.r11.s64 + -18856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47064"))) PPC_WEAK_FUNC(sub_83C47064);
PPC_FUNC_IMPL(__imp__sub_83C47064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47068"))) PPC_WEAK_FUNC(sub_83C47068);
PPC_FUNC_IMPL(__imp__sub_83C47068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18848
	ctx.r3.s64 = ctx.r11.s64 + -18848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47074"))) PPC_WEAK_FUNC(sub_83C47074);
PPC_FUNC_IMPL(__imp__sub_83C47074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47078"))) PPC_WEAK_FUNC(sub_83C47078);
PPC_FUNC_IMPL(__imp__sub_83C47078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18840
	ctx.r3.s64 = ctx.r11.s64 + -18840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47084"))) PPC_WEAK_FUNC(sub_83C47084);
PPC_FUNC_IMPL(__imp__sub_83C47084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47088"))) PPC_WEAK_FUNC(sub_83C47088);
PPC_FUNC_IMPL(__imp__sub_83C47088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47094"))) PPC_WEAK_FUNC(sub_83C47094);
PPC_FUNC_IMPL(__imp__sub_83C47094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47098"))) PPC_WEAK_FUNC(sub_83C47098);
PPC_FUNC_IMPL(__imp__sub_83C47098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18824
	ctx.r3.s64 = ctx.r11.s64 + -18824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C470A4"))) PPC_WEAK_FUNC(sub_83C470A4);
PPC_FUNC_IMPL(__imp__sub_83C470A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C470A8"))) PPC_WEAK_FUNC(sub_83C470A8);
PPC_FUNC_IMPL(__imp__sub_83C470A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18816
	ctx.r3.s64 = ctx.r11.s64 + -18816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C470B4"))) PPC_WEAK_FUNC(sub_83C470B4);
PPC_FUNC_IMPL(__imp__sub_83C470B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C470B8"))) PPC_WEAK_FUNC(sub_83C470B8);
PPC_FUNC_IMPL(__imp__sub_83C470B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8600
	ctx.r7.s64 = ctx.r8.s64 + -8600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C470E0"))) PPC_WEAK_FUNC(sub_83C470E0);
PPC_FUNC_IMPL(__imp__sub_83C470E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-1420
	ctx.r6.s64 = ctx.r7.s64 + -1420;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1492(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1492);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8600);
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
	// std r9,-1420(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47128"))) PPC_WEAK_FUNC(sub_83C47128);
PPC_FUNC_IMPL(__imp__sub_83C47128) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-8616
	ctx.r3.s64 = ctx.r11.s64 + -8616;
	// bl 0x83523120
	ctx.lr = 0x83C47140;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18808
	ctx.r3.s64 = ctx.r10.s64 + -18808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4714C;
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

__attribute__((alias("__imp__sub_83C4715C"))) PPC_WEAK_FUNC(sub_83C4715C);
PPC_FUNC_IMPL(__imp__sub_83C4715C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47160"))) PPC_WEAK_FUNC(sub_83C47160);
PPC_FUNC_IMPL(__imp__sub_83C47160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18792
	ctx.r3.s64 = ctx.r11.s64 + -18792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4716C"))) PPC_WEAK_FUNC(sub_83C4716C);
PPC_FUNC_IMPL(__imp__sub_83C4716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47170"))) PPC_WEAK_FUNC(sub_83C47170);
PPC_FUNC_IMPL(__imp__sub_83C47170) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-8592
	ctx.r3.s64 = ctx.r11.s64 + -8592;
	// bl 0x8259af80
	ctx.lr = 0x83C47188;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18776
	ctx.r3.s64 = ctx.r10.s64 + -18776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47194;
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

__attribute__((alias("__imp__sub_83C471A4"))) PPC_WEAK_FUNC(sub_83C471A4);
PPC_FUNC_IMPL(__imp__sub_83C471A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C471A8"))) PPC_WEAK_FUNC(sub_83C471A8);
PPC_FUNC_IMPL(__imp__sub_83C471A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8612
	ctx.r11.s64 = ctx.r8.s64 + -8612;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-1444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1444);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18784
	ctx.r3.s64 = ctx.r6.s64 + -18784;
	// stw r10,-8612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C471D8"))) PPC_WEAK_FUNC(sub_83C471D8);
PPC_FUNC_IMPL(__imp__sub_83C471D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18768
	ctx.r3.s64 = ctx.r11.s64 + -18768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C471E4"))) PPC_WEAK_FUNC(sub_83C471E4);
PPC_FUNC_IMPL(__imp__sub_83C471E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C471E8"))) PPC_WEAK_FUNC(sub_83C471E8);
PPC_FUNC_IMPL(__imp__sub_83C471E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18760
	ctx.r3.s64 = ctx.r11.s64 + -18760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C471F4"))) PPC_WEAK_FUNC(sub_83C471F4);
PPC_FUNC_IMPL(__imp__sub_83C471F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C471F8"))) PPC_WEAK_FUNC(sub_83C471F8);
PPC_FUNC_IMPL(__imp__sub_83C471F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18752
	ctx.r3.s64 = ctx.r11.s64 + -18752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47204"))) PPC_WEAK_FUNC(sub_83C47204);
PPC_FUNC_IMPL(__imp__sub_83C47204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47208"))) PPC_WEAK_FUNC(sub_83C47208);
PPC_FUNC_IMPL(__imp__sub_83C47208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18744
	ctx.r3.s64 = ctx.r11.s64 + -18744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47214"))) PPC_WEAK_FUNC(sub_83C47214);
PPC_FUNC_IMPL(__imp__sub_83C47214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47218"))) PPC_WEAK_FUNC(sub_83C47218);
PPC_FUNC_IMPL(__imp__sub_83C47218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18736
	ctx.r3.s64 = ctx.r11.s64 + -18736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47224"))) PPC_WEAK_FUNC(sub_83C47224);
PPC_FUNC_IMPL(__imp__sub_83C47224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47228"))) PPC_WEAK_FUNC(sub_83C47228);
PPC_FUNC_IMPL(__imp__sub_83C47228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18728
	ctx.r3.s64 = ctx.r11.s64 + -18728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47234"))) PPC_WEAK_FUNC(sub_83C47234);
PPC_FUNC_IMPL(__imp__sub_83C47234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47238"))) PPC_WEAK_FUNC(sub_83C47238);
PPC_FUNC_IMPL(__imp__sub_83C47238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47244"))) PPC_WEAK_FUNC(sub_83C47244);
PPC_FUNC_IMPL(__imp__sub_83C47244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47248"))) PPC_WEAK_FUNC(sub_83C47248);
PPC_FUNC_IMPL(__imp__sub_83C47248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18712
	ctx.r3.s64 = ctx.r11.s64 + -18712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47254"))) PPC_WEAK_FUNC(sub_83C47254);
PPC_FUNC_IMPL(__imp__sub_83C47254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47258"))) PPC_WEAK_FUNC(sub_83C47258);
PPC_FUNC_IMPL(__imp__sub_83C47258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47264"))) PPC_WEAK_FUNC(sub_83C47264);
PPC_FUNC_IMPL(__imp__sub_83C47264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47268"))) PPC_WEAK_FUNC(sub_83C47268);
PPC_FUNC_IMPL(__imp__sub_83C47268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18696
	ctx.r3.s64 = ctx.r11.s64 + -18696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47274"))) PPC_WEAK_FUNC(sub_83C47274);
PPC_FUNC_IMPL(__imp__sub_83C47274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47278"))) PPC_WEAK_FUNC(sub_83C47278);
PPC_FUNC_IMPL(__imp__sub_83C47278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18688
	ctx.r3.s64 = ctx.r11.s64 + -18688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47284"))) PPC_WEAK_FUNC(sub_83C47284);
PPC_FUNC_IMPL(__imp__sub_83C47284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47288"))) PPC_WEAK_FUNC(sub_83C47288);
PPC_FUNC_IMPL(__imp__sub_83C47288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18680
	ctx.r3.s64 = ctx.r11.s64 + -18680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47294"))) PPC_WEAK_FUNC(sub_83C47294);
PPC_FUNC_IMPL(__imp__sub_83C47294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47298"))) PPC_WEAK_FUNC(sub_83C47298);
PPC_FUNC_IMPL(__imp__sub_83C47298) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8232
	ctx.r7.s64 = ctx.r8.s64 + -8232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C472C0"))) PPC_WEAK_FUNC(sub_83C472C0);
PPC_FUNC_IMPL(__imp__sub_83C472C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-1292
	ctx.r6.s64 = ctx.r7.s64 + -1292;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1364(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1364);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8232);
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
	// std r9,-1292(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1292, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47308"))) PPC_WEAK_FUNC(sub_83C47308);
PPC_FUNC_IMPL(__imp__sub_83C47308) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-8248
	ctx.r3.s64 = ctx.r11.s64 + -8248;
	// bl 0x83523120
	ctx.lr = 0x83C47320;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18672
	ctx.r3.s64 = ctx.r10.s64 + -18672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4732C;
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

__attribute__((alias("__imp__sub_83C4733C"))) PPC_WEAK_FUNC(sub_83C4733C);
PPC_FUNC_IMPL(__imp__sub_83C4733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47340"))) PPC_WEAK_FUNC(sub_83C47340);
PPC_FUNC_IMPL(__imp__sub_83C47340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18656
	ctx.r3.s64 = ctx.r11.s64 + -18656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4734C"))) PPC_WEAK_FUNC(sub_83C4734C);
PPC_FUNC_IMPL(__imp__sub_83C4734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47350"))) PPC_WEAK_FUNC(sub_83C47350);
PPC_FUNC_IMPL(__imp__sub_83C47350) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-8224
	ctx.r3.s64 = ctx.r11.s64 + -8224;
	// bl 0x8259af80
	ctx.lr = 0x83C47368;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18640
	ctx.r3.s64 = ctx.r10.s64 + -18640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47374;
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

__attribute__((alias("__imp__sub_83C47384"))) PPC_WEAK_FUNC(sub_83C47384);
PPC_FUNC_IMPL(__imp__sub_83C47384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47388"))) PPC_WEAK_FUNC(sub_83C47388);
PPC_FUNC_IMPL(__imp__sub_83C47388) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8244
	ctx.r11.s64 = ctx.r8.s64 + -8244;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-1316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1316);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18648
	ctx.r3.s64 = ctx.r6.s64 + -18648;
	// stw r10,-8244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C473B8"))) PPC_WEAK_FUNC(sub_83C473B8);
PPC_FUNC_IMPL(__imp__sub_83C473B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18632
	ctx.r3.s64 = ctx.r11.s64 + -18632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C473C4"))) PPC_WEAK_FUNC(sub_83C473C4);
PPC_FUNC_IMPL(__imp__sub_83C473C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C473C8"))) PPC_WEAK_FUNC(sub_83C473C8);
PPC_FUNC_IMPL(__imp__sub_83C473C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18624
	ctx.r3.s64 = ctx.r11.s64 + -18624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C473D4"))) PPC_WEAK_FUNC(sub_83C473D4);
PPC_FUNC_IMPL(__imp__sub_83C473D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C473D8"))) PPC_WEAK_FUNC(sub_83C473D8);
PPC_FUNC_IMPL(__imp__sub_83C473D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C473E4"))) PPC_WEAK_FUNC(sub_83C473E4);
PPC_FUNC_IMPL(__imp__sub_83C473E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C473E8"))) PPC_WEAK_FUNC(sub_83C473E8);
PPC_FUNC_IMPL(__imp__sub_83C473E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18608
	ctx.r3.s64 = ctx.r11.s64 + -18608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C473F4"))) PPC_WEAK_FUNC(sub_83C473F4);
PPC_FUNC_IMPL(__imp__sub_83C473F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C473F8"))) PPC_WEAK_FUNC(sub_83C473F8);
PPC_FUNC_IMPL(__imp__sub_83C473F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18600
	ctx.r3.s64 = ctx.r11.s64 + -18600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47404"))) PPC_WEAK_FUNC(sub_83C47404);
PPC_FUNC_IMPL(__imp__sub_83C47404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47408"))) PPC_WEAK_FUNC(sub_83C47408);
PPC_FUNC_IMPL(__imp__sub_83C47408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47414"))) PPC_WEAK_FUNC(sub_83C47414);
PPC_FUNC_IMPL(__imp__sub_83C47414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47418"))) PPC_WEAK_FUNC(sub_83C47418);
PPC_FUNC_IMPL(__imp__sub_83C47418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18584
	ctx.r3.s64 = ctx.r11.s64 + -18584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47424"))) PPC_WEAK_FUNC(sub_83C47424);
PPC_FUNC_IMPL(__imp__sub_83C47424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47428"))) PPC_WEAK_FUNC(sub_83C47428);
PPC_FUNC_IMPL(__imp__sub_83C47428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18576
	ctx.r3.s64 = ctx.r11.s64 + -18576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47434"))) PPC_WEAK_FUNC(sub_83C47434);
PPC_FUNC_IMPL(__imp__sub_83C47434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47438"))) PPC_WEAK_FUNC(sub_83C47438);
PPC_FUNC_IMPL(__imp__sub_83C47438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18568
	ctx.r3.s64 = ctx.r11.s64 + -18568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47444"))) PPC_WEAK_FUNC(sub_83C47444);
PPC_FUNC_IMPL(__imp__sub_83C47444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47448"))) PPC_WEAK_FUNC(sub_83C47448);
PPC_FUNC_IMPL(__imp__sub_83C47448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47454"))) PPC_WEAK_FUNC(sub_83C47454);
PPC_FUNC_IMPL(__imp__sub_83C47454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47458"))) PPC_WEAK_FUNC(sub_83C47458);
PPC_FUNC_IMPL(__imp__sub_83C47458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18552
	ctx.r3.s64 = ctx.r11.s64 + -18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47464"))) PPC_WEAK_FUNC(sub_83C47464);
PPC_FUNC_IMPL(__imp__sub_83C47464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47468"))) PPC_WEAK_FUNC(sub_83C47468);
PPC_FUNC_IMPL(__imp__sub_83C47468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18544
	ctx.r3.s64 = ctx.r11.s64 + -18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47474"))) PPC_WEAK_FUNC(sub_83C47474);
PPC_FUNC_IMPL(__imp__sub_83C47474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47478"))) PPC_WEAK_FUNC(sub_83C47478);
PPC_FUNC_IMPL(__imp__sub_83C47478) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7864
	ctx.r7.s64 = ctx.r8.s64 + -7864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7864(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C474A0"))) PPC_WEAK_FUNC(sub_83C474A0);
PPC_FUNC_IMPL(__imp__sub_83C474A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-1164
	ctx.r6.s64 = ctx.r7.s64 + -1164;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1236(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1236);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7864(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7864);
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
	// std r9,-1164(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1164, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C474E8"))) PPC_WEAK_FUNC(sub_83C474E8);
PPC_FUNC_IMPL(__imp__sub_83C474E8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-7880
	ctx.r3.s64 = ctx.r11.s64 + -7880;
	// bl 0x83523120
	ctx.lr = 0x83C47500;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18536
	ctx.r3.s64 = ctx.r10.s64 + -18536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4750C;
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

__attribute__((alias("__imp__sub_83C4751C"))) PPC_WEAK_FUNC(sub_83C4751C);
PPC_FUNC_IMPL(__imp__sub_83C4751C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47520"))) PPC_WEAK_FUNC(sub_83C47520);
PPC_FUNC_IMPL(__imp__sub_83C47520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18520
	ctx.r3.s64 = ctx.r11.s64 + -18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4752C"))) PPC_WEAK_FUNC(sub_83C4752C);
PPC_FUNC_IMPL(__imp__sub_83C4752C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47530"))) PPC_WEAK_FUNC(sub_83C47530);
PPC_FUNC_IMPL(__imp__sub_83C47530) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,-7856
	ctx.r3.s64 = ctx.r11.s64 + -7856;
	// bl 0x8259af80
	ctx.lr = 0x83C47548;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18504
	ctx.r3.s64 = ctx.r10.s64 + -18504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47554;
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

__attribute__((alias("__imp__sub_83C47564"))) PPC_WEAK_FUNC(sub_83C47564);
PPC_FUNC_IMPL(__imp__sub_83C47564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47568"))) PPC_WEAK_FUNC(sub_83C47568);
PPC_FUNC_IMPL(__imp__sub_83C47568) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7876
	ctx.r11.s64 = ctx.r8.s64 + -7876;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-1188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18512
	ctx.r3.s64 = ctx.r6.s64 + -18512;
	// stw r10,-7876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47598"))) PPC_WEAK_FUNC(sub_83C47598);
PPC_FUNC_IMPL(__imp__sub_83C47598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C475A4"))) PPC_WEAK_FUNC(sub_83C475A4);
PPC_FUNC_IMPL(__imp__sub_83C475A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C475A8"))) PPC_WEAK_FUNC(sub_83C475A8);
PPC_FUNC_IMPL(__imp__sub_83C475A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C475B4"))) PPC_WEAK_FUNC(sub_83C475B4);
PPC_FUNC_IMPL(__imp__sub_83C475B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C475B8"))) PPC_WEAK_FUNC(sub_83C475B8);
PPC_FUNC_IMPL(__imp__sub_83C475B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18480
	ctx.r3.s64 = ctx.r11.s64 + -18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C475C4"))) PPC_WEAK_FUNC(sub_83C475C4);
PPC_FUNC_IMPL(__imp__sub_83C475C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C475C8"))) PPC_WEAK_FUNC(sub_83C475C8);
PPC_FUNC_IMPL(__imp__sub_83C475C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18472
	ctx.r3.s64 = ctx.r11.s64 + -18472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C475D4"))) PPC_WEAK_FUNC(sub_83C475D4);
PPC_FUNC_IMPL(__imp__sub_83C475D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C475D8"))) PPC_WEAK_FUNC(sub_83C475D8);
PPC_FUNC_IMPL(__imp__sub_83C475D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18464
	ctx.r3.s64 = ctx.r11.s64 + -18464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C475E4"))) PPC_WEAK_FUNC(sub_83C475E4);
PPC_FUNC_IMPL(__imp__sub_83C475E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C475E8"))) PPC_WEAK_FUNC(sub_83C475E8);
PPC_FUNC_IMPL(__imp__sub_83C475E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18456
	ctx.r3.s64 = ctx.r11.s64 + -18456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C475F4"))) PPC_WEAK_FUNC(sub_83C475F4);
PPC_FUNC_IMPL(__imp__sub_83C475F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C475F8"))) PPC_WEAK_FUNC(sub_83C475F8);
PPC_FUNC_IMPL(__imp__sub_83C475F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18448
	ctx.r3.s64 = ctx.r11.s64 + -18448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47604"))) PPC_WEAK_FUNC(sub_83C47604);
PPC_FUNC_IMPL(__imp__sub_83C47604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47608"))) PPC_WEAK_FUNC(sub_83C47608);
PPC_FUNC_IMPL(__imp__sub_83C47608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18440
	ctx.r3.s64 = ctx.r11.s64 + -18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47614"))) PPC_WEAK_FUNC(sub_83C47614);
PPC_FUNC_IMPL(__imp__sub_83C47614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

