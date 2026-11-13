#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C47618"))) PPC_WEAK_FUNC(sub_83C47618);
PPC_FUNC_IMPL(__imp__sub_83C47618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47624"))) PPC_WEAK_FUNC(sub_83C47624);
PPC_FUNC_IMPL(__imp__sub_83C47624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47628"))) PPC_WEAK_FUNC(sub_83C47628);
PPC_FUNC_IMPL(__imp__sub_83C47628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18424
	ctx.r3.s64 = ctx.r11.s64 + -18424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47634"))) PPC_WEAK_FUNC(sub_83C47634);
PPC_FUNC_IMPL(__imp__sub_83C47634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47638"))) PPC_WEAK_FUNC(sub_83C47638);
PPC_FUNC_IMPL(__imp__sub_83C47638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18416
	ctx.r3.s64 = ctx.r11.s64 + -18416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47644"))) PPC_WEAK_FUNC(sub_83C47644);
PPC_FUNC_IMPL(__imp__sub_83C47644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47648"))) PPC_WEAK_FUNC(sub_83C47648);
PPC_FUNC_IMPL(__imp__sub_83C47648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47654"))) PPC_WEAK_FUNC(sub_83C47654);
PPC_FUNC_IMPL(__imp__sub_83C47654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47658"))) PPC_WEAK_FUNC(sub_83C47658);
PPC_FUNC_IMPL(__imp__sub_83C47658) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7496
	ctx.r7.s64 = ctx.r8.s64 + -7496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7496);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7496(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7496, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47680"))) PPC_WEAK_FUNC(sub_83C47680);
PPC_FUNC_IMPL(__imp__sub_83C47680) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-1036
	ctx.r6.s64 = ctx.r7.s64 + -1036;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1108(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1108);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7496);
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
	// std r9,-1036(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1036, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C476C8"))) PPC_WEAK_FUNC(sub_83C476C8);
PPC_FUNC_IMPL(__imp__sub_83C476C8) {
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
	// addi r3,r11,-7512
	ctx.r3.s64 = ctx.r11.s64 + -7512;
	// bl 0x83523120
	ctx.lr = 0x83C476E0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18400
	ctx.r3.s64 = ctx.r10.s64 + -18400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C476EC;
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

__attribute__((alias("__imp__sub_83C476FC"))) PPC_WEAK_FUNC(sub_83C476FC);
PPC_FUNC_IMPL(__imp__sub_83C476FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47700"))) PPC_WEAK_FUNC(sub_83C47700);
PPC_FUNC_IMPL(__imp__sub_83C47700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18384
	ctx.r3.s64 = ctx.r11.s64 + -18384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4770C"))) PPC_WEAK_FUNC(sub_83C4770C);
PPC_FUNC_IMPL(__imp__sub_83C4770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47710"))) PPC_WEAK_FUNC(sub_83C47710);
PPC_FUNC_IMPL(__imp__sub_83C47710) {
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
	// addi r3,r11,-7488
	ctx.r3.s64 = ctx.r11.s64 + -7488;
	// bl 0x8259af80
	ctx.lr = 0x83C47728;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18368
	ctx.r3.s64 = ctx.r10.s64 + -18368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47734;
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

__attribute__((alias("__imp__sub_83C47744"))) PPC_WEAK_FUNC(sub_83C47744);
PPC_FUNC_IMPL(__imp__sub_83C47744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47748"))) PPC_WEAK_FUNC(sub_83C47748);
PPC_FUNC_IMPL(__imp__sub_83C47748) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7508
	ctx.r11.s64 = ctx.r8.s64 + -7508;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-1060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1060);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18376
	ctx.r3.s64 = ctx.r6.s64 + -18376;
	// stw r10,-7508(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47778"))) PPC_WEAK_FUNC(sub_83C47778);
PPC_FUNC_IMPL(__imp__sub_83C47778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47784"))) PPC_WEAK_FUNC(sub_83C47784);
PPC_FUNC_IMPL(__imp__sub_83C47784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47788"))) PPC_WEAK_FUNC(sub_83C47788);
PPC_FUNC_IMPL(__imp__sub_83C47788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47794"))) PPC_WEAK_FUNC(sub_83C47794);
PPC_FUNC_IMPL(__imp__sub_83C47794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47798"))) PPC_WEAK_FUNC(sub_83C47798);
PPC_FUNC_IMPL(__imp__sub_83C47798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C477A4"))) PPC_WEAK_FUNC(sub_83C477A4);
PPC_FUNC_IMPL(__imp__sub_83C477A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C477A8"))) PPC_WEAK_FUNC(sub_83C477A8);
PPC_FUNC_IMPL(__imp__sub_83C477A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C477B4"))) PPC_WEAK_FUNC(sub_83C477B4);
PPC_FUNC_IMPL(__imp__sub_83C477B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C477B8"))) PPC_WEAK_FUNC(sub_83C477B8);
PPC_FUNC_IMPL(__imp__sub_83C477B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C477C4"))) PPC_WEAK_FUNC(sub_83C477C4);
PPC_FUNC_IMPL(__imp__sub_83C477C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C477C8"))) PPC_WEAK_FUNC(sub_83C477C8);
PPC_FUNC_IMPL(__imp__sub_83C477C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18320
	ctx.r3.s64 = ctx.r11.s64 + -18320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C477D4"))) PPC_WEAK_FUNC(sub_83C477D4);
PPC_FUNC_IMPL(__imp__sub_83C477D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C477D8"))) PPC_WEAK_FUNC(sub_83C477D8);
PPC_FUNC_IMPL(__imp__sub_83C477D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18312
	ctx.r3.s64 = ctx.r11.s64 + -18312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C477E4"))) PPC_WEAK_FUNC(sub_83C477E4);
PPC_FUNC_IMPL(__imp__sub_83C477E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C477E8"))) PPC_WEAK_FUNC(sub_83C477E8);
PPC_FUNC_IMPL(__imp__sub_83C477E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C477F4"))) PPC_WEAK_FUNC(sub_83C477F4);
PPC_FUNC_IMPL(__imp__sub_83C477F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C477F8"))) PPC_WEAK_FUNC(sub_83C477F8);
PPC_FUNC_IMPL(__imp__sub_83C477F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18296
	ctx.r3.s64 = ctx.r11.s64 + -18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47804"))) PPC_WEAK_FUNC(sub_83C47804);
PPC_FUNC_IMPL(__imp__sub_83C47804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47808"))) PPC_WEAK_FUNC(sub_83C47808);
PPC_FUNC_IMPL(__imp__sub_83C47808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47814"))) PPC_WEAK_FUNC(sub_83C47814);
PPC_FUNC_IMPL(__imp__sub_83C47814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47818"))) PPC_WEAK_FUNC(sub_83C47818);
PPC_FUNC_IMPL(__imp__sub_83C47818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18280
	ctx.r3.s64 = ctx.r11.s64 + -18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47824"))) PPC_WEAK_FUNC(sub_83C47824);
PPC_FUNC_IMPL(__imp__sub_83C47824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47828"))) PPC_WEAK_FUNC(sub_83C47828);
PPC_FUNC_IMPL(__imp__sub_83C47828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18272
	ctx.r3.s64 = ctx.r11.s64 + -18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47834"))) PPC_WEAK_FUNC(sub_83C47834);
PPC_FUNC_IMPL(__imp__sub_83C47834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47838"))) PPC_WEAK_FUNC(sub_83C47838);
PPC_FUNC_IMPL(__imp__sub_83C47838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7128
	ctx.r7.s64 = ctx.r8.s64 + -7128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7128(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47860"))) PPC_WEAK_FUNC(sub_83C47860);
PPC_FUNC_IMPL(__imp__sub_83C47860) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-908
	ctx.r6.s64 = ctx.r7.s64 + -908;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-980(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -980);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7128);
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
	// std r9,-908(r7)
	PPC_STORE_U64(ctx.r7.u32 + -908, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C478A8"))) PPC_WEAK_FUNC(sub_83C478A8);
PPC_FUNC_IMPL(__imp__sub_83C478A8) {
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
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// bl 0x83523120
	ctx.lr = 0x83C478C0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18264
	ctx.r3.s64 = ctx.r10.s64 + -18264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C478CC;
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

__attribute__((alias("__imp__sub_83C478DC"))) PPC_WEAK_FUNC(sub_83C478DC);
PPC_FUNC_IMPL(__imp__sub_83C478DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C478E0"))) PPC_WEAK_FUNC(sub_83C478E0);
PPC_FUNC_IMPL(__imp__sub_83C478E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18248
	ctx.r3.s64 = ctx.r11.s64 + -18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C478EC"))) PPC_WEAK_FUNC(sub_83C478EC);
PPC_FUNC_IMPL(__imp__sub_83C478EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C478F0"))) PPC_WEAK_FUNC(sub_83C478F0);
PPC_FUNC_IMPL(__imp__sub_83C478F0) {
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
	// addi r3,r11,-7120
	ctx.r3.s64 = ctx.r11.s64 + -7120;
	// bl 0x8259af80
	ctx.lr = 0x83C47908;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18232
	ctx.r3.s64 = ctx.r10.s64 + -18232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47914;
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

__attribute__((alias("__imp__sub_83C47924"))) PPC_WEAK_FUNC(sub_83C47924);
PPC_FUNC_IMPL(__imp__sub_83C47924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47928"))) PPC_WEAK_FUNC(sub_83C47928);
PPC_FUNC_IMPL(__imp__sub_83C47928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7140
	ctx.r11.s64 = ctx.r8.s64 + -7140;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-932(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -932);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18240
	ctx.r3.s64 = ctx.r6.s64 + -18240;
	// stw r10,-7140(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47958"))) PPC_WEAK_FUNC(sub_83C47958);
PPC_FUNC_IMPL(__imp__sub_83C47958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18224
	ctx.r3.s64 = ctx.r11.s64 + -18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47964"))) PPC_WEAK_FUNC(sub_83C47964);
PPC_FUNC_IMPL(__imp__sub_83C47964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47968"))) PPC_WEAK_FUNC(sub_83C47968);
PPC_FUNC_IMPL(__imp__sub_83C47968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18216
	ctx.r3.s64 = ctx.r11.s64 + -18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47974"))) PPC_WEAK_FUNC(sub_83C47974);
PPC_FUNC_IMPL(__imp__sub_83C47974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47978"))) PPC_WEAK_FUNC(sub_83C47978);
PPC_FUNC_IMPL(__imp__sub_83C47978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18208
	ctx.r3.s64 = ctx.r11.s64 + -18208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47984"))) PPC_WEAK_FUNC(sub_83C47984);
PPC_FUNC_IMPL(__imp__sub_83C47984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47988"))) PPC_WEAK_FUNC(sub_83C47988);
PPC_FUNC_IMPL(__imp__sub_83C47988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18200
	ctx.r3.s64 = ctx.r11.s64 + -18200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47994"))) PPC_WEAK_FUNC(sub_83C47994);
PPC_FUNC_IMPL(__imp__sub_83C47994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47998"))) PPC_WEAK_FUNC(sub_83C47998);
PPC_FUNC_IMPL(__imp__sub_83C47998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18192
	ctx.r3.s64 = ctx.r11.s64 + -18192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C479A4"))) PPC_WEAK_FUNC(sub_83C479A4);
PPC_FUNC_IMPL(__imp__sub_83C479A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C479A8"))) PPC_WEAK_FUNC(sub_83C479A8);
PPC_FUNC_IMPL(__imp__sub_83C479A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18184
	ctx.r3.s64 = ctx.r11.s64 + -18184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C479B4"))) PPC_WEAK_FUNC(sub_83C479B4);
PPC_FUNC_IMPL(__imp__sub_83C479B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C479B8"))) PPC_WEAK_FUNC(sub_83C479B8);
PPC_FUNC_IMPL(__imp__sub_83C479B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18176
	ctx.r3.s64 = ctx.r11.s64 + -18176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C479C4"))) PPC_WEAK_FUNC(sub_83C479C4);
PPC_FUNC_IMPL(__imp__sub_83C479C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C479C8"))) PPC_WEAK_FUNC(sub_83C479C8);
PPC_FUNC_IMPL(__imp__sub_83C479C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18168
	ctx.r3.s64 = ctx.r11.s64 + -18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C479D4"))) PPC_WEAK_FUNC(sub_83C479D4);
PPC_FUNC_IMPL(__imp__sub_83C479D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C479D8"))) PPC_WEAK_FUNC(sub_83C479D8);
PPC_FUNC_IMPL(__imp__sub_83C479D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18160
	ctx.r3.s64 = ctx.r11.s64 + -18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C479E4"))) PPC_WEAK_FUNC(sub_83C479E4);
PPC_FUNC_IMPL(__imp__sub_83C479E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C479E8"))) PPC_WEAK_FUNC(sub_83C479E8);
PPC_FUNC_IMPL(__imp__sub_83C479E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C479F4"))) PPC_WEAK_FUNC(sub_83C479F4);
PPC_FUNC_IMPL(__imp__sub_83C479F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C479F8"))) PPC_WEAK_FUNC(sub_83C479F8);
PPC_FUNC_IMPL(__imp__sub_83C479F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18144
	ctx.r3.s64 = ctx.r11.s64 + -18144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A04"))) PPC_WEAK_FUNC(sub_83C47A04);
PPC_FUNC_IMPL(__imp__sub_83C47A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A08"))) PPC_WEAK_FUNC(sub_83C47A08);
PPC_FUNC_IMPL(__imp__sub_83C47A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18136
	ctx.r3.s64 = ctx.r11.s64 + -18136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A14"))) PPC_WEAK_FUNC(sub_83C47A14);
PPC_FUNC_IMPL(__imp__sub_83C47A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A18"))) PPC_WEAK_FUNC(sub_83C47A18);
PPC_FUNC_IMPL(__imp__sub_83C47A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A24"))) PPC_WEAK_FUNC(sub_83C47A24);
PPC_FUNC_IMPL(__imp__sub_83C47A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A28"))) PPC_WEAK_FUNC(sub_83C47A28);
PPC_FUNC_IMPL(__imp__sub_83C47A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18120
	ctx.r3.s64 = ctx.r11.s64 + -18120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A34"))) PPC_WEAK_FUNC(sub_83C47A34);
PPC_FUNC_IMPL(__imp__sub_83C47A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A38"))) PPC_WEAK_FUNC(sub_83C47A38);
PPC_FUNC_IMPL(__imp__sub_83C47A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18112
	ctx.r3.s64 = ctx.r11.s64 + -18112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A44"))) PPC_WEAK_FUNC(sub_83C47A44);
PPC_FUNC_IMPL(__imp__sub_83C47A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A48"))) PPC_WEAK_FUNC(sub_83C47A48);
PPC_FUNC_IMPL(__imp__sub_83C47A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18104
	ctx.r3.s64 = ctx.r11.s64 + -18104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A54"))) PPC_WEAK_FUNC(sub_83C47A54);
PPC_FUNC_IMPL(__imp__sub_83C47A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A58"))) PPC_WEAK_FUNC(sub_83C47A58);
PPC_FUNC_IMPL(__imp__sub_83C47A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18096
	ctx.r3.s64 = ctx.r11.s64 + -18096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A64"))) PPC_WEAK_FUNC(sub_83C47A64);
PPC_FUNC_IMPL(__imp__sub_83C47A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A68"))) PPC_WEAK_FUNC(sub_83C47A68);
PPC_FUNC_IMPL(__imp__sub_83C47A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18088
	ctx.r3.s64 = ctx.r11.s64 + -18088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A74"))) PPC_WEAK_FUNC(sub_83C47A74);
PPC_FUNC_IMPL(__imp__sub_83C47A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A78"))) PPC_WEAK_FUNC(sub_83C47A78);
PPC_FUNC_IMPL(__imp__sub_83C47A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18080
	ctx.r3.s64 = ctx.r11.s64 + -18080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A84"))) PPC_WEAK_FUNC(sub_83C47A84);
PPC_FUNC_IMPL(__imp__sub_83C47A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A88"))) PPC_WEAK_FUNC(sub_83C47A88);
PPC_FUNC_IMPL(__imp__sub_83C47A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18072
	ctx.r3.s64 = ctx.r11.s64 + -18072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47A94"))) PPC_WEAK_FUNC(sub_83C47A94);
PPC_FUNC_IMPL(__imp__sub_83C47A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47A98"))) PPC_WEAK_FUNC(sub_83C47A98);
PPC_FUNC_IMPL(__imp__sub_83C47A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18064
	ctx.r3.s64 = ctx.r11.s64 + -18064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47AA4"))) PPC_WEAK_FUNC(sub_83C47AA4);
PPC_FUNC_IMPL(__imp__sub_83C47AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47AA8"))) PPC_WEAK_FUNC(sub_83C47AA8);
PPC_FUNC_IMPL(__imp__sub_83C47AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18056
	ctx.r3.s64 = ctx.r11.s64 + -18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47AB4"))) PPC_WEAK_FUNC(sub_83C47AB4);
PPC_FUNC_IMPL(__imp__sub_83C47AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47AB8"))) PPC_WEAK_FUNC(sub_83C47AB8);
PPC_FUNC_IMPL(__imp__sub_83C47AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47AC4"))) PPC_WEAK_FUNC(sub_83C47AC4);
PPC_FUNC_IMPL(__imp__sub_83C47AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47AC8"))) PPC_WEAK_FUNC(sub_83C47AC8);
PPC_FUNC_IMPL(__imp__sub_83C47AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18040
	ctx.r3.s64 = ctx.r11.s64 + -18040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47AD4"))) PPC_WEAK_FUNC(sub_83C47AD4);
PPC_FUNC_IMPL(__imp__sub_83C47AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47AD8"))) PPC_WEAK_FUNC(sub_83C47AD8);
PPC_FUNC_IMPL(__imp__sub_83C47AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6752
	ctx.r7.s64 = ctx.r8.s64 + -6752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6752(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47B00"))) PPC_WEAK_FUNC(sub_83C47B00);
PPC_FUNC_IMPL(__imp__sub_83C47B00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-676
	ctx.r6.s64 = ctx.r7.s64 + -676;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-748(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -748);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6752);
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
	// std r9,-676(r7)
	PPC_STORE_U64(ctx.r7.u32 + -676, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47B48"))) PPC_WEAK_FUNC(sub_83C47B48);
PPC_FUNC_IMPL(__imp__sub_83C47B48) {
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
	// addi r3,r11,-6768
	ctx.r3.s64 = ctx.r11.s64 + -6768;
	// bl 0x83523120
	ctx.lr = 0x83C47B60;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18032
	ctx.r3.s64 = ctx.r10.s64 + -18032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47B6C;
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

__attribute__((alias("__imp__sub_83C47B7C"))) PPC_WEAK_FUNC(sub_83C47B7C);
PPC_FUNC_IMPL(__imp__sub_83C47B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47B80"))) PPC_WEAK_FUNC(sub_83C47B80);
PPC_FUNC_IMPL(__imp__sub_83C47B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-18016
	ctx.r3.s64 = ctx.r11.s64 + -18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47B8C"))) PPC_WEAK_FUNC(sub_83C47B8C);
PPC_FUNC_IMPL(__imp__sub_83C47B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47B90"))) PPC_WEAK_FUNC(sub_83C47B90);
PPC_FUNC_IMPL(__imp__sub_83C47B90) {
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
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// bl 0x8259af80
	ctx.lr = 0x83C47BA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-18000
	ctx.r3.s64 = ctx.r10.s64 + -18000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47BB4;
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

__attribute__((alias("__imp__sub_83C47BC4"))) PPC_WEAK_FUNC(sub_83C47BC4);
PPC_FUNC_IMPL(__imp__sub_83C47BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47BC8"))) PPC_WEAK_FUNC(sub_83C47BC8);
PPC_FUNC_IMPL(__imp__sub_83C47BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6764
	ctx.r11.s64 = ctx.r8.s64 + -6764;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -700);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-18008
	ctx.r3.s64 = ctx.r6.s64 + -18008;
	// stw r10,-6764(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47BF8"))) PPC_WEAK_FUNC(sub_83C47BF8);
PPC_FUNC_IMPL(__imp__sub_83C47BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C04"))) PPC_WEAK_FUNC(sub_83C47C04);
PPC_FUNC_IMPL(__imp__sub_83C47C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C08"))) PPC_WEAK_FUNC(sub_83C47C08);
PPC_FUNC_IMPL(__imp__sub_83C47C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C14"))) PPC_WEAK_FUNC(sub_83C47C14);
PPC_FUNC_IMPL(__imp__sub_83C47C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C18"))) PPC_WEAK_FUNC(sub_83C47C18);
PPC_FUNC_IMPL(__imp__sub_83C47C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17976
	ctx.r3.s64 = ctx.r11.s64 + -17976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C24"))) PPC_WEAK_FUNC(sub_83C47C24);
PPC_FUNC_IMPL(__imp__sub_83C47C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C28"))) PPC_WEAK_FUNC(sub_83C47C28);
PPC_FUNC_IMPL(__imp__sub_83C47C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17968
	ctx.r3.s64 = ctx.r11.s64 + -17968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C34"))) PPC_WEAK_FUNC(sub_83C47C34);
PPC_FUNC_IMPL(__imp__sub_83C47C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C38"))) PPC_WEAK_FUNC(sub_83C47C38);
PPC_FUNC_IMPL(__imp__sub_83C47C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17960
	ctx.r3.s64 = ctx.r11.s64 + -17960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C44"))) PPC_WEAK_FUNC(sub_83C47C44);
PPC_FUNC_IMPL(__imp__sub_83C47C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C48"))) PPC_WEAK_FUNC(sub_83C47C48);
PPC_FUNC_IMPL(__imp__sub_83C47C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17952
	ctx.r3.s64 = ctx.r11.s64 + -17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C54"))) PPC_WEAK_FUNC(sub_83C47C54);
PPC_FUNC_IMPL(__imp__sub_83C47C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C58"))) PPC_WEAK_FUNC(sub_83C47C58);
PPC_FUNC_IMPL(__imp__sub_83C47C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17944
	ctx.r3.s64 = ctx.r11.s64 + -17944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C64"))) PPC_WEAK_FUNC(sub_83C47C64);
PPC_FUNC_IMPL(__imp__sub_83C47C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C68"))) PPC_WEAK_FUNC(sub_83C47C68);
PPC_FUNC_IMPL(__imp__sub_83C47C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17936
	ctx.r3.s64 = ctx.r11.s64 + -17936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C74"))) PPC_WEAK_FUNC(sub_83C47C74);
PPC_FUNC_IMPL(__imp__sub_83C47C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C78"))) PPC_WEAK_FUNC(sub_83C47C78);
PPC_FUNC_IMPL(__imp__sub_83C47C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17928
	ctx.r3.s64 = ctx.r11.s64 + -17928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C84"))) PPC_WEAK_FUNC(sub_83C47C84);
PPC_FUNC_IMPL(__imp__sub_83C47C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C88"))) PPC_WEAK_FUNC(sub_83C47C88);
PPC_FUNC_IMPL(__imp__sub_83C47C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17920
	ctx.r3.s64 = ctx.r11.s64 + -17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47C94"))) PPC_WEAK_FUNC(sub_83C47C94);
PPC_FUNC_IMPL(__imp__sub_83C47C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47C98"))) PPC_WEAK_FUNC(sub_83C47C98);
PPC_FUNC_IMPL(__imp__sub_83C47C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17912
	ctx.r3.s64 = ctx.r11.s64 + -17912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47CA4"))) PPC_WEAK_FUNC(sub_83C47CA4);
PPC_FUNC_IMPL(__imp__sub_83C47CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47CA8"))) PPC_WEAK_FUNC(sub_83C47CA8);
PPC_FUNC_IMPL(__imp__sub_83C47CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17904
	ctx.r3.s64 = ctx.r11.s64 + -17904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47CB4"))) PPC_WEAK_FUNC(sub_83C47CB4);
PPC_FUNC_IMPL(__imp__sub_83C47CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47CB8"))) PPC_WEAK_FUNC(sub_83C47CB8);
PPC_FUNC_IMPL(__imp__sub_83C47CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6384
	ctx.r7.s64 = ctx.r8.s64 + -6384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47CE0"))) PPC_WEAK_FUNC(sub_83C47CE0);
PPC_FUNC_IMPL(__imp__sub_83C47CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-548
	ctx.r6.s64 = ctx.r7.s64 + -548;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6384);
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
	// std r9,-548(r7)
	PPC_STORE_U64(ctx.r7.u32 + -548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47D28"))) PPC_WEAK_FUNC(sub_83C47D28);
PPC_FUNC_IMPL(__imp__sub_83C47D28) {
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
	// addi r3,r11,-6400
	ctx.r3.s64 = ctx.r11.s64 + -6400;
	// bl 0x83523120
	ctx.lr = 0x83C47D40;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17896
	ctx.r3.s64 = ctx.r10.s64 + -17896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47D4C;
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

__attribute__((alias("__imp__sub_83C47D5C"))) PPC_WEAK_FUNC(sub_83C47D5C);
PPC_FUNC_IMPL(__imp__sub_83C47D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47D60"))) PPC_WEAK_FUNC(sub_83C47D60);
PPC_FUNC_IMPL(__imp__sub_83C47D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17880
	ctx.r3.s64 = ctx.r11.s64 + -17880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47D6C"))) PPC_WEAK_FUNC(sub_83C47D6C);
PPC_FUNC_IMPL(__imp__sub_83C47D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47D70"))) PPC_WEAK_FUNC(sub_83C47D70);
PPC_FUNC_IMPL(__imp__sub_83C47D70) {
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
	// addi r3,r11,-6376
	ctx.r3.s64 = ctx.r11.s64 + -6376;
	// bl 0x8259af80
	ctx.lr = 0x83C47D88;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17864
	ctx.r3.s64 = ctx.r10.s64 + -17864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47D94;
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

__attribute__((alias("__imp__sub_83C47DA4"))) PPC_WEAK_FUNC(sub_83C47DA4);
PPC_FUNC_IMPL(__imp__sub_83C47DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47DA8"))) PPC_WEAK_FUNC(sub_83C47DA8);
PPC_FUNC_IMPL(__imp__sub_83C47DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6396
	ctx.r11.s64 = ctx.r8.s64 + -6396;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -572);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17872
	ctx.r3.s64 = ctx.r6.s64 + -17872;
	// stw r10,-6396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47DD8"))) PPC_WEAK_FUNC(sub_83C47DD8);
PPC_FUNC_IMPL(__imp__sub_83C47DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17856
	ctx.r3.s64 = ctx.r11.s64 + -17856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47DE4"))) PPC_WEAK_FUNC(sub_83C47DE4);
PPC_FUNC_IMPL(__imp__sub_83C47DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47DE8"))) PPC_WEAK_FUNC(sub_83C47DE8);
PPC_FUNC_IMPL(__imp__sub_83C47DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17848
	ctx.r3.s64 = ctx.r11.s64 + -17848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47DF4"))) PPC_WEAK_FUNC(sub_83C47DF4);
PPC_FUNC_IMPL(__imp__sub_83C47DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47DF8"))) PPC_WEAK_FUNC(sub_83C47DF8);
PPC_FUNC_IMPL(__imp__sub_83C47DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17840
	ctx.r3.s64 = ctx.r11.s64 + -17840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E04"))) PPC_WEAK_FUNC(sub_83C47E04);
PPC_FUNC_IMPL(__imp__sub_83C47E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E08"))) PPC_WEAK_FUNC(sub_83C47E08);
PPC_FUNC_IMPL(__imp__sub_83C47E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17832
	ctx.r3.s64 = ctx.r11.s64 + -17832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E14"))) PPC_WEAK_FUNC(sub_83C47E14);
PPC_FUNC_IMPL(__imp__sub_83C47E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E18"))) PPC_WEAK_FUNC(sub_83C47E18);
PPC_FUNC_IMPL(__imp__sub_83C47E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17824
	ctx.r3.s64 = ctx.r11.s64 + -17824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E24"))) PPC_WEAK_FUNC(sub_83C47E24);
PPC_FUNC_IMPL(__imp__sub_83C47E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E28"))) PPC_WEAK_FUNC(sub_83C47E28);
PPC_FUNC_IMPL(__imp__sub_83C47E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17816
	ctx.r3.s64 = ctx.r11.s64 + -17816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E34"))) PPC_WEAK_FUNC(sub_83C47E34);
PPC_FUNC_IMPL(__imp__sub_83C47E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E38"))) PPC_WEAK_FUNC(sub_83C47E38);
PPC_FUNC_IMPL(__imp__sub_83C47E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17808
	ctx.r3.s64 = ctx.r11.s64 + -17808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E44"))) PPC_WEAK_FUNC(sub_83C47E44);
PPC_FUNC_IMPL(__imp__sub_83C47E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E48"))) PPC_WEAK_FUNC(sub_83C47E48);
PPC_FUNC_IMPL(__imp__sub_83C47E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17800
	ctx.r3.s64 = ctx.r11.s64 + -17800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E54"))) PPC_WEAK_FUNC(sub_83C47E54);
PPC_FUNC_IMPL(__imp__sub_83C47E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E58"))) PPC_WEAK_FUNC(sub_83C47E58);
PPC_FUNC_IMPL(__imp__sub_83C47E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17792
	ctx.r3.s64 = ctx.r11.s64 + -17792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E64"))) PPC_WEAK_FUNC(sub_83C47E64);
PPC_FUNC_IMPL(__imp__sub_83C47E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E68"))) PPC_WEAK_FUNC(sub_83C47E68);
PPC_FUNC_IMPL(__imp__sub_83C47E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17784
	ctx.r3.s64 = ctx.r11.s64 + -17784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E74"))) PPC_WEAK_FUNC(sub_83C47E74);
PPC_FUNC_IMPL(__imp__sub_83C47E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E78"))) PPC_WEAK_FUNC(sub_83C47E78);
PPC_FUNC_IMPL(__imp__sub_83C47E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17776
	ctx.r3.s64 = ctx.r11.s64 + -17776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E84"))) PPC_WEAK_FUNC(sub_83C47E84);
PPC_FUNC_IMPL(__imp__sub_83C47E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E88"))) PPC_WEAK_FUNC(sub_83C47E88);
PPC_FUNC_IMPL(__imp__sub_83C47E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17768
	ctx.r3.s64 = ctx.r11.s64 + -17768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47E94"))) PPC_WEAK_FUNC(sub_83C47E94);
PPC_FUNC_IMPL(__imp__sub_83C47E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47E98"))) PPC_WEAK_FUNC(sub_83C47E98);
PPC_FUNC_IMPL(__imp__sub_83C47E98) {
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
	// addi r3,r11,-6032
	ctx.r3.s64 = ctx.r11.s64 + -6032;
	// bl 0x83523120
	ctx.lr = 0x83C47EB0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17760
	ctx.r3.s64 = ctx.r10.s64 + -17760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47EBC;
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

__attribute__((alias("__imp__sub_83C47ECC"))) PPC_WEAK_FUNC(sub_83C47ECC);
PPC_FUNC_IMPL(__imp__sub_83C47ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47ED0"))) PPC_WEAK_FUNC(sub_83C47ED0);
PPC_FUNC_IMPL(__imp__sub_83C47ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6016
	ctx.r7.s64 = ctx.r8.s64 + -6016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6016);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6016(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6016, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47EF8"))) PPC_WEAK_FUNC(sub_83C47EF8);
PPC_FUNC_IMPL(__imp__sub_83C47EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-420
	ctx.r6.s64 = ctx.r7.s64 + -420;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-492(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -492);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6016);
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
	// std r9,-420(r7)
	PPC_STORE_U64(ctx.r7.u32 + -420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C47F40"))) PPC_WEAK_FUNC(sub_83C47F40);
PPC_FUNC_IMPL(__imp__sub_83C47F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17744
	ctx.r3.s64 = ctx.r11.s64 + -17744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47F4C"))) PPC_WEAK_FUNC(sub_83C47F4C);
PPC_FUNC_IMPL(__imp__sub_83C47F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47F50"))) PPC_WEAK_FUNC(sub_83C47F50);
PPC_FUNC_IMPL(__imp__sub_83C47F50) {
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
	// addi r3,r11,-6008
	ctx.r3.s64 = ctx.r11.s64 + -6008;
	// bl 0x8259af80
	ctx.lr = 0x83C47F68;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17728
	ctx.r3.s64 = ctx.r10.s64 + -17728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C47F74;
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

__attribute__((alias("__imp__sub_83C47F84"))) PPC_WEAK_FUNC(sub_83C47F84);
PPC_FUNC_IMPL(__imp__sub_83C47F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47F88"))) PPC_WEAK_FUNC(sub_83C47F88);
PPC_FUNC_IMPL(__imp__sub_83C47F88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6028
	ctx.r11.s64 = ctx.r8.s64 + -6028;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -444);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17736
	ctx.r3.s64 = ctx.r6.s64 + -17736;
	// stw r10,-6028(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6028, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47FB8"))) PPC_WEAK_FUNC(sub_83C47FB8);
PPC_FUNC_IMPL(__imp__sub_83C47FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17720
	ctx.r3.s64 = ctx.r11.s64 + -17720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47FC4"))) PPC_WEAK_FUNC(sub_83C47FC4);
PPC_FUNC_IMPL(__imp__sub_83C47FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47FC8"))) PPC_WEAK_FUNC(sub_83C47FC8);
PPC_FUNC_IMPL(__imp__sub_83C47FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17712
	ctx.r3.s64 = ctx.r11.s64 + -17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47FD4"))) PPC_WEAK_FUNC(sub_83C47FD4);
PPC_FUNC_IMPL(__imp__sub_83C47FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47FD8"))) PPC_WEAK_FUNC(sub_83C47FD8);
PPC_FUNC_IMPL(__imp__sub_83C47FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17704
	ctx.r3.s64 = ctx.r11.s64 + -17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47FE4"))) PPC_WEAK_FUNC(sub_83C47FE4);
PPC_FUNC_IMPL(__imp__sub_83C47FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47FE8"))) PPC_WEAK_FUNC(sub_83C47FE8);
PPC_FUNC_IMPL(__imp__sub_83C47FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17696
	ctx.r3.s64 = ctx.r11.s64 + -17696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C47FF4"))) PPC_WEAK_FUNC(sub_83C47FF4);
PPC_FUNC_IMPL(__imp__sub_83C47FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C47FF8"))) PPC_WEAK_FUNC(sub_83C47FF8);
PPC_FUNC_IMPL(__imp__sub_83C47FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17688
	ctx.r3.s64 = ctx.r11.s64 + -17688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48004"))) PPC_WEAK_FUNC(sub_83C48004);
PPC_FUNC_IMPL(__imp__sub_83C48004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48008"))) PPC_WEAK_FUNC(sub_83C48008);
PPC_FUNC_IMPL(__imp__sub_83C48008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48014"))) PPC_WEAK_FUNC(sub_83C48014);
PPC_FUNC_IMPL(__imp__sub_83C48014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48018"))) PPC_WEAK_FUNC(sub_83C48018);
PPC_FUNC_IMPL(__imp__sub_83C48018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17672
	ctx.r3.s64 = ctx.r11.s64 + -17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48024"))) PPC_WEAK_FUNC(sub_83C48024);
PPC_FUNC_IMPL(__imp__sub_83C48024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48028"))) PPC_WEAK_FUNC(sub_83C48028);
PPC_FUNC_IMPL(__imp__sub_83C48028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17664
	ctx.r3.s64 = ctx.r11.s64 + -17664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48034"))) PPC_WEAK_FUNC(sub_83C48034);
PPC_FUNC_IMPL(__imp__sub_83C48034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48038"))) PPC_WEAK_FUNC(sub_83C48038);
PPC_FUNC_IMPL(__imp__sub_83C48038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17656
	ctx.r3.s64 = ctx.r11.s64 + -17656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48044"))) PPC_WEAK_FUNC(sub_83C48044);
PPC_FUNC_IMPL(__imp__sub_83C48044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48048"))) PPC_WEAK_FUNC(sub_83C48048);
PPC_FUNC_IMPL(__imp__sub_83C48048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17648
	ctx.r3.s64 = ctx.r11.s64 + -17648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48054"))) PPC_WEAK_FUNC(sub_83C48054);
PPC_FUNC_IMPL(__imp__sub_83C48054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48058"))) PPC_WEAK_FUNC(sub_83C48058);
PPC_FUNC_IMPL(__imp__sub_83C48058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17640
	ctx.r3.s64 = ctx.r11.s64 + -17640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48064"))) PPC_WEAK_FUNC(sub_83C48064);
PPC_FUNC_IMPL(__imp__sub_83C48064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48068"))) PPC_WEAK_FUNC(sub_83C48068);
PPC_FUNC_IMPL(__imp__sub_83C48068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17632
	ctx.r3.s64 = ctx.r11.s64 + -17632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48074"))) PPC_WEAK_FUNC(sub_83C48074);
PPC_FUNC_IMPL(__imp__sub_83C48074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48078"))) PPC_WEAK_FUNC(sub_83C48078);
PPC_FUNC_IMPL(__imp__sub_83C48078) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5648
	ctx.r7.s64 = ctx.r8.s64 + -5648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5648(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C480A0"))) PPC_WEAK_FUNC(sub_83C480A0);
PPC_FUNC_IMPL(__imp__sub_83C480A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-292
	ctx.r6.s64 = ctx.r7.s64 + -292;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-364(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -364);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5648(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5648);
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
	// std r9,-292(r7)
	PPC_STORE_U64(ctx.r7.u32 + -292, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C480E8"))) PPC_WEAK_FUNC(sub_83C480E8);
PPC_FUNC_IMPL(__imp__sub_83C480E8) {
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
	// addi r3,r11,-5664
	ctx.r3.s64 = ctx.r11.s64 + -5664;
	// bl 0x83523120
	ctx.lr = 0x83C48100;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17624
	ctx.r3.s64 = ctx.r10.s64 + -17624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4810C;
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

__attribute__((alias("__imp__sub_83C4811C"))) PPC_WEAK_FUNC(sub_83C4811C);
PPC_FUNC_IMPL(__imp__sub_83C4811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48120"))) PPC_WEAK_FUNC(sub_83C48120);
PPC_FUNC_IMPL(__imp__sub_83C48120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17608
	ctx.r3.s64 = ctx.r11.s64 + -17608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4812C"))) PPC_WEAK_FUNC(sub_83C4812C);
PPC_FUNC_IMPL(__imp__sub_83C4812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48130"))) PPC_WEAK_FUNC(sub_83C48130);
PPC_FUNC_IMPL(__imp__sub_83C48130) {
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
	// addi r3,r11,-5640
	ctx.r3.s64 = ctx.r11.s64 + -5640;
	// bl 0x8259af80
	ctx.lr = 0x83C48148;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17592
	ctx.r3.s64 = ctx.r10.s64 + -17592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48154;
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

__attribute__((alias("__imp__sub_83C48164"))) PPC_WEAK_FUNC(sub_83C48164);
PPC_FUNC_IMPL(__imp__sub_83C48164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48168"))) PPC_WEAK_FUNC(sub_83C48168);
PPC_FUNC_IMPL(__imp__sub_83C48168) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5660
	ctx.r11.s64 = ctx.r8.s64 + -5660;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -316);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17600
	ctx.r3.s64 = ctx.r6.s64 + -17600;
	// stw r10,-5660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48198"))) PPC_WEAK_FUNC(sub_83C48198);
PPC_FUNC_IMPL(__imp__sub_83C48198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17584
	ctx.r3.s64 = ctx.r11.s64 + -17584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C481A4"))) PPC_WEAK_FUNC(sub_83C481A4);
PPC_FUNC_IMPL(__imp__sub_83C481A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C481A8"))) PPC_WEAK_FUNC(sub_83C481A8);
PPC_FUNC_IMPL(__imp__sub_83C481A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C481B4"))) PPC_WEAK_FUNC(sub_83C481B4);
PPC_FUNC_IMPL(__imp__sub_83C481B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C481B8"))) PPC_WEAK_FUNC(sub_83C481B8);
PPC_FUNC_IMPL(__imp__sub_83C481B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17568
	ctx.r3.s64 = ctx.r11.s64 + -17568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C481C4"))) PPC_WEAK_FUNC(sub_83C481C4);
PPC_FUNC_IMPL(__imp__sub_83C481C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C481C8"))) PPC_WEAK_FUNC(sub_83C481C8);
PPC_FUNC_IMPL(__imp__sub_83C481C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17560
	ctx.r3.s64 = ctx.r11.s64 + -17560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C481D4"))) PPC_WEAK_FUNC(sub_83C481D4);
PPC_FUNC_IMPL(__imp__sub_83C481D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C481D8"))) PPC_WEAK_FUNC(sub_83C481D8);
PPC_FUNC_IMPL(__imp__sub_83C481D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17552
	ctx.r3.s64 = ctx.r11.s64 + -17552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C481E4"))) PPC_WEAK_FUNC(sub_83C481E4);
PPC_FUNC_IMPL(__imp__sub_83C481E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C481E8"))) PPC_WEAK_FUNC(sub_83C481E8);
PPC_FUNC_IMPL(__imp__sub_83C481E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17544
	ctx.r3.s64 = ctx.r11.s64 + -17544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C481F4"))) PPC_WEAK_FUNC(sub_83C481F4);
PPC_FUNC_IMPL(__imp__sub_83C481F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C481F8"))) PPC_WEAK_FUNC(sub_83C481F8);
PPC_FUNC_IMPL(__imp__sub_83C481F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17536
	ctx.r3.s64 = ctx.r11.s64 + -17536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48204"))) PPC_WEAK_FUNC(sub_83C48204);
PPC_FUNC_IMPL(__imp__sub_83C48204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48208"))) PPC_WEAK_FUNC(sub_83C48208);
PPC_FUNC_IMPL(__imp__sub_83C48208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17528
	ctx.r3.s64 = ctx.r11.s64 + -17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48214"))) PPC_WEAK_FUNC(sub_83C48214);
PPC_FUNC_IMPL(__imp__sub_83C48214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48218"))) PPC_WEAK_FUNC(sub_83C48218);
PPC_FUNC_IMPL(__imp__sub_83C48218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48224"))) PPC_WEAK_FUNC(sub_83C48224);
PPC_FUNC_IMPL(__imp__sub_83C48224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48228"))) PPC_WEAK_FUNC(sub_83C48228);
PPC_FUNC_IMPL(__imp__sub_83C48228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17512
	ctx.r3.s64 = ctx.r11.s64 + -17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48234"))) PPC_WEAK_FUNC(sub_83C48234);
PPC_FUNC_IMPL(__imp__sub_83C48234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48238"))) PPC_WEAK_FUNC(sub_83C48238);
PPC_FUNC_IMPL(__imp__sub_83C48238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17504
	ctx.r3.s64 = ctx.r11.s64 + -17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48244"))) PPC_WEAK_FUNC(sub_83C48244);
PPC_FUNC_IMPL(__imp__sub_83C48244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48248"))) PPC_WEAK_FUNC(sub_83C48248);
PPC_FUNC_IMPL(__imp__sub_83C48248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48254"))) PPC_WEAK_FUNC(sub_83C48254);
PPC_FUNC_IMPL(__imp__sub_83C48254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48258"))) PPC_WEAK_FUNC(sub_83C48258);
PPC_FUNC_IMPL(__imp__sub_83C48258) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5280
	ctx.r7.s64 = ctx.r8.s64 + -5280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5280);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5280, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48280"))) PPC_WEAK_FUNC(sub_83C48280);
PPC_FUNC_IMPL(__imp__sub_83C48280) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-164
	ctx.r6.s64 = ctx.r7.s64 + -164;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-236(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -236);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5280);
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
	// std r9,-164(r7)
	PPC_STORE_U64(ctx.r7.u32 + -164, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C482C8"))) PPC_WEAK_FUNC(sub_83C482C8);
PPC_FUNC_IMPL(__imp__sub_83C482C8) {
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
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
	// bl 0x83523120
	ctx.lr = 0x83C482E0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17488
	ctx.r3.s64 = ctx.r10.s64 + -17488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C482EC;
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

__attribute__((alias("__imp__sub_83C482FC"))) PPC_WEAK_FUNC(sub_83C482FC);
PPC_FUNC_IMPL(__imp__sub_83C482FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48300"))) PPC_WEAK_FUNC(sub_83C48300);
PPC_FUNC_IMPL(__imp__sub_83C48300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17472
	ctx.r3.s64 = ctx.r11.s64 + -17472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4830C"))) PPC_WEAK_FUNC(sub_83C4830C);
PPC_FUNC_IMPL(__imp__sub_83C4830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48310"))) PPC_WEAK_FUNC(sub_83C48310);
PPC_FUNC_IMPL(__imp__sub_83C48310) {
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
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// bl 0x8259af80
	ctx.lr = 0x83C48328;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17456
	ctx.r3.s64 = ctx.r10.s64 + -17456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48334;
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

__attribute__((alias("__imp__sub_83C48344"))) PPC_WEAK_FUNC(sub_83C48344);
PPC_FUNC_IMPL(__imp__sub_83C48344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48348"))) PPC_WEAK_FUNC(sub_83C48348);
PPC_FUNC_IMPL(__imp__sub_83C48348) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5292
	ctx.r11.s64 = ctx.r8.s64 + -5292;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17464
	ctx.r3.s64 = ctx.r6.s64 + -17464;
	// stw r10,-5292(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48378"))) PPC_WEAK_FUNC(sub_83C48378);
PPC_FUNC_IMPL(__imp__sub_83C48378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48384"))) PPC_WEAK_FUNC(sub_83C48384);
PPC_FUNC_IMPL(__imp__sub_83C48384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48388"))) PPC_WEAK_FUNC(sub_83C48388);
PPC_FUNC_IMPL(__imp__sub_83C48388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17440
	ctx.r3.s64 = ctx.r11.s64 + -17440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48394"))) PPC_WEAK_FUNC(sub_83C48394);
PPC_FUNC_IMPL(__imp__sub_83C48394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48398"))) PPC_WEAK_FUNC(sub_83C48398);
PPC_FUNC_IMPL(__imp__sub_83C48398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17432
	ctx.r3.s64 = ctx.r11.s64 + -17432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C483A4"))) PPC_WEAK_FUNC(sub_83C483A4);
PPC_FUNC_IMPL(__imp__sub_83C483A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C483A8"))) PPC_WEAK_FUNC(sub_83C483A8);
PPC_FUNC_IMPL(__imp__sub_83C483A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17424
	ctx.r3.s64 = ctx.r11.s64 + -17424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C483B4"))) PPC_WEAK_FUNC(sub_83C483B4);
PPC_FUNC_IMPL(__imp__sub_83C483B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C483B8"))) PPC_WEAK_FUNC(sub_83C483B8);
PPC_FUNC_IMPL(__imp__sub_83C483B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17416
	ctx.r3.s64 = ctx.r11.s64 + -17416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C483C4"))) PPC_WEAK_FUNC(sub_83C483C4);
PPC_FUNC_IMPL(__imp__sub_83C483C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C483C8"))) PPC_WEAK_FUNC(sub_83C483C8);
PPC_FUNC_IMPL(__imp__sub_83C483C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C483D4"))) PPC_WEAK_FUNC(sub_83C483D4);
PPC_FUNC_IMPL(__imp__sub_83C483D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C483D8"))) PPC_WEAK_FUNC(sub_83C483D8);
PPC_FUNC_IMPL(__imp__sub_83C483D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17400
	ctx.r3.s64 = ctx.r11.s64 + -17400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C483E4"))) PPC_WEAK_FUNC(sub_83C483E4);
PPC_FUNC_IMPL(__imp__sub_83C483E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C483E8"))) PPC_WEAK_FUNC(sub_83C483E8);
PPC_FUNC_IMPL(__imp__sub_83C483E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17392
	ctx.r3.s64 = ctx.r11.s64 + -17392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C483F4"))) PPC_WEAK_FUNC(sub_83C483F4);
PPC_FUNC_IMPL(__imp__sub_83C483F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C483F8"))) PPC_WEAK_FUNC(sub_83C483F8);
PPC_FUNC_IMPL(__imp__sub_83C483F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17384
	ctx.r3.s64 = ctx.r11.s64 + -17384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

