#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BF06E0"))) PPC_WEAK_FUNC(sub_83BF06E0);
PPC_FUNC_IMPL(__imp__sub_83BF06E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11624
	ctx.r3.s64 = ctx.r11.s64 + -11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF06EC"))) PPC_WEAK_FUNC(sub_83BF06EC);
PPC_FUNC_IMPL(__imp__sub_83BF06EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF06F0"))) PPC_WEAK_FUNC(sub_83BF06F0);
PPC_FUNC_IMPL(__imp__sub_83BF06F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF06FC"))) PPC_WEAK_FUNC(sub_83BF06FC);
PPC_FUNC_IMPL(__imp__sub_83BF06FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0700"))) PPC_WEAK_FUNC(sub_83BF0700);
PPC_FUNC_IMPL(__imp__sub_83BF0700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11608
	ctx.r3.s64 = ctx.r11.s64 + -11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF070C"))) PPC_WEAK_FUNC(sub_83BF070C);
PPC_FUNC_IMPL(__imp__sub_83BF070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0710"))) PPC_WEAK_FUNC(sub_83BF0710);
PPC_FUNC_IMPL(__imp__sub_83BF0710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11600
	ctx.r3.s64 = ctx.r11.s64 + -11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF071C"))) PPC_WEAK_FUNC(sub_83BF071C);
PPC_FUNC_IMPL(__imp__sub_83BF071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0720"))) PPC_WEAK_FUNC(sub_83BF0720);
PPC_FUNC_IMPL(__imp__sub_83BF0720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11592
	ctx.r3.s64 = ctx.r11.s64 + -11592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF072C"))) PPC_WEAK_FUNC(sub_83BF072C);
PPC_FUNC_IMPL(__imp__sub_83BF072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0730"))) PPC_WEAK_FUNC(sub_83BF0730);
PPC_FUNC_IMPL(__imp__sub_83BF0730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF073C"))) PPC_WEAK_FUNC(sub_83BF073C);
PPC_FUNC_IMPL(__imp__sub_83BF073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0740"))) PPC_WEAK_FUNC(sub_83BF0740);
PPC_FUNC_IMPL(__imp__sub_83BF0740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF074C"))) PPC_WEAK_FUNC(sub_83BF074C);
PPC_FUNC_IMPL(__imp__sub_83BF074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0750"))) PPC_WEAK_FUNC(sub_83BF0750);
PPC_FUNC_IMPL(__imp__sub_83BF0750) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-19096
	ctx.r3.s64 = ctx.r11.s64 + -19096;
	// bl 0x83523120
	ctx.lr = 0x83BF0768;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11568
	ctx.r3.s64 = ctx.r10.s64 + -11568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0774;
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

__attribute__((alias("__imp__sub_83BF0784"))) PPC_WEAK_FUNC(sub_83BF0784);
PPC_FUNC_IMPL(__imp__sub_83BF0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0788"))) PPC_WEAK_FUNC(sub_83BF0788);
PPC_FUNC_IMPL(__imp__sub_83BF0788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19080
	ctx.r7.s64 = ctx.r8.s64 + -19080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF07B0"))) PPC_WEAK_FUNC(sub_83BF07B0);
PPC_FUNC_IMPL(__imp__sub_83BF07B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-2924
	ctx.r6.s64 = ctx.r7.s64 + -2924;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2996(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2996);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19080);
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
	// std r9,-2924(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2924, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF07F8"))) PPC_WEAK_FUNC(sub_83BF07F8);
PPC_FUNC_IMPL(__imp__sub_83BF07F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0804"))) PPC_WEAK_FUNC(sub_83BF0804);
PPC_FUNC_IMPL(__imp__sub_83BF0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0808"))) PPC_WEAK_FUNC(sub_83BF0808);
PPC_FUNC_IMPL(__imp__sub_83BF0808) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-19072
	ctx.r3.s64 = ctx.r11.s64 + -19072;
	// bl 0x8259af80
	ctx.lr = 0x83BF0820;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11536
	ctx.r3.s64 = ctx.r10.s64 + -11536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF082C;
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

__attribute__((alias("__imp__sub_83BF083C"))) PPC_WEAK_FUNC(sub_83BF083C);
PPC_FUNC_IMPL(__imp__sub_83BF083C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0840"))) PPC_WEAK_FUNC(sub_83BF0840);
PPC_FUNC_IMPL(__imp__sub_83BF0840) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19092
	ctx.r11.s64 = ctx.r8.s64 + -19092;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-2948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2948);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11544
	ctx.r3.s64 = ctx.r6.s64 + -11544;
	// stw r10,-19092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0870"))) PPC_WEAK_FUNC(sub_83BF0870);
PPC_FUNC_IMPL(__imp__sub_83BF0870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11528
	ctx.r3.s64 = ctx.r11.s64 + -11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF087C"))) PPC_WEAK_FUNC(sub_83BF087C);
PPC_FUNC_IMPL(__imp__sub_83BF087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0880"))) PPC_WEAK_FUNC(sub_83BF0880);
PPC_FUNC_IMPL(__imp__sub_83BF0880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11520
	ctx.r3.s64 = ctx.r11.s64 + -11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF088C"))) PPC_WEAK_FUNC(sub_83BF088C);
PPC_FUNC_IMPL(__imp__sub_83BF088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0890"))) PPC_WEAK_FUNC(sub_83BF0890);
PPC_FUNC_IMPL(__imp__sub_83BF0890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11512
	ctx.r3.s64 = ctx.r11.s64 + -11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF089C"))) PPC_WEAK_FUNC(sub_83BF089C);
PPC_FUNC_IMPL(__imp__sub_83BF089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF08A0"))) PPC_WEAK_FUNC(sub_83BF08A0);
PPC_FUNC_IMPL(__imp__sub_83BF08A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11504
	ctx.r3.s64 = ctx.r11.s64 + -11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF08AC"))) PPC_WEAK_FUNC(sub_83BF08AC);
PPC_FUNC_IMPL(__imp__sub_83BF08AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF08B0"))) PPC_WEAK_FUNC(sub_83BF08B0);
PPC_FUNC_IMPL(__imp__sub_83BF08B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11496
	ctx.r3.s64 = ctx.r11.s64 + -11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF08BC"))) PPC_WEAK_FUNC(sub_83BF08BC);
PPC_FUNC_IMPL(__imp__sub_83BF08BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF08C0"))) PPC_WEAK_FUNC(sub_83BF08C0);
PPC_FUNC_IMPL(__imp__sub_83BF08C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF08CC"))) PPC_WEAK_FUNC(sub_83BF08CC);
PPC_FUNC_IMPL(__imp__sub_83BF08CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF08D0"))) PPC_WEAK_FUNC(sub_83BF08D0);
PPC_FUNC_IMPL(__imp__sub_83BF08D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF08DC"))) PPC_WEAK_FUNC(sub_83BF08DC);
PPC_FUNC_IMPL(__imp__sub_83BF08DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF08E0"))) PPC_WEAK_FUNC(sub_83BF08E0);
PPC_FUNC_IMPL(__imp__sub_83BF08E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11472
	ctx.r3.s64 = ctx.r11.s64 + -11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF08EC"))) PPC_WEAK_FUNC(sub_83BF08EC);
PPC_FUNC_IMPL(__imp__sub_83BF08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF08F0"))) PPC_WEAK_FUNC(sub_83BF08F0);
PPC_FUNC_IMPL(__imp__sub_83BF08F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11464
	ctx.r3.s64 = ctx.r11.s64 + -11464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF08FC"))) PPC_WEAK_FUNC(sub_83BF08FC);
PPC_FUNC_IMPL(__imp__sub_83BF08FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0900"))) PPC_WEAK_FUNC(sub_83BF0900);
PPC_FUNC_IMPL(__imp__sub_83BF0900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11456
	ctx.r3.s64 = ctx.r11.s64 + -11456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF090C"))) PPC_WEAK_FUNC(sub_83BF090C);
PPC_FUNC_IMPL(__imp__sub_83BF090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0910"))) PPC_WEAK_FUNC(sub_83BF0910);
PPC_FUNC_IMPL(__imp__sub_83BF0910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11448
	ctx.r3.s64 = ctx.r11.s64 + -11448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF091C"))) PPC_WEAK_FUNC(sub_83BF091C);
PPC_FUNC_IMPL(__imp__sub_83BF091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0920"))) PPC_WEAK_FUNC(sub_83BF0920);
PPC_FUNC_IMPL(__imp__sub_83BF0920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11440
	ctx.r3.s64 = ctx.r11.s64 + -11440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF092C"))) PPC_WEAK_FUNC(sub_83BF092C);
PPC_FUNC_IMPL(__imp__sub_83BF092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0930"))) PPC_WEAK_FUNC(sub_83BF0930);
PPC_FUNC_IMPL(__imp__sub_83BF0930) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-18728
	ctx.r3.s64 = ctx.r11.s64 + -18728;
	// bl 0x83523120
	ctx.lr = 0x83BF0948;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11432
	ctx.r3.s64 = ctx.r10.s64 + -11432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0954;
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

__attribute__((alias("__imp__sub_83BF0964"))) PPC_WEAK_FUNC(sub_83BF0964);
PPC_FUNC_IMPL(__imp__sub_83BF0964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0968"))) PPC_WEAK_FUNC(sub_83BF0968);
PPC_FUNC_IMPL(__imp__sub_83BF0968) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18712
	ctx.r7.s64 = ctx.r8.s64 + -18712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0990"))) PPC_WEAK_FUNC(sub_83BF0990);
PPC_FUNC_IMPL(__imp__sub_83BF0990) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-2796
	ctx.r6.s64 = ctx.r7.s64 + -2796;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2868(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2868);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18712);
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
	// std r9,-2796(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2796, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF09D8"))) PPC_WEAK_FUNC(sub_83BF09D8);
PPC_FUNC_IMPL(__imp__sub_83BF09D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11416
	ctx.r3.s64 = ctx.r11.s64 + -11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF09E4"))) PPC_WEAK_FUNC(sub_83BF09E4);
PPC_FUNC_IMPL(__imp__sub_83BF09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF09E8"))) PPC_WEAK_FUNC(sub_83BF09E8);
PPC_FUNC_IMPL(__imp__sub_83BF09E8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// bl 0x8259af80
	ctx.lr = 0x83BF0A00;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11400
	ctx.r3.s64 = ctx.r10.s64 + -11400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0A0C;
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

__attribute__((alias("__imp__sub_83BF0A1C"))) PPC_WEAK_FUNC(sub_83BF0A1C);
PPC_FUNC_IMPL(__imp__sub_83BF0A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0A20"))) PPC_WEAK_FUNC(sub_83BF0A20);
PPC_FUNC_IMPL(__imp__sub_83BF0A20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18724
	ctx.r11.s64 = ctx.r8.s64 + -18724;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-2820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2820);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11408
	ctx.r3.s64 = ctx.r6.s64 + -11408;
	// stw r10,-18724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0A50"))) PPC_WEAK_FUNC(sub_83BF0A50);
PPC_FUNC_IMPL(__imp__sub_83BF0A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11392
	ctx.r3.s64 = ctx.r11.s64 + -11392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0A5C"))) PPC_WEAK_FUNC(sub_83BF0A5C);
PPC_FUNC_IMPL(__imp__sub_83BF0A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0A60"))) PPC_WEAK_FUNC(sub_83BF0A60);
PPC_FUNC_IMPL(__imp__sub_83BF0A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11384
	ctx.r3.s64 = ctx.r11.s64 + -11384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0A6C"))) PPC_WEAK_FUNC(sub_83BF0A6C);
PPC_FUNC_IMPL(__imp__sub_83BF0A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0A70"))) PPC_WEAK_FUNC(sub_83BF0A70);
PPC_FUNC_IMPL(__imp__sub_83BF0A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0A7C"))) PPC_WEAK_FUNC(sub_83BF0A7C);
PPC_FUNC_IMPL(__imp__sub_83BF0A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0A80"))) PPC_WEAK_FUNC(sub_83BF0A80);
PPC_FUNC_IMPL(__imp__sub_83BF0A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0A8C"))) PPC_WEAK_FUNC(sub_83BF0A8C);
PPC_FUNC_IMPL(__imp__sub_83BF0A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0A90"))) PPC_WEAK_FUNC(sub_83BF0A90);
PPC_FUNC_IMPL(__imp__sub_83BF0A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0A9C"))) PPC_WEAK_FUNC(sub_83BF0A9C);
PPC_FUNC_IMPL(__imp__sub_83BF0A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0AA0"))) PPC_WEAK_FUNC(sub_83BF0AA0);
PPC_FUNC_IMPL(__imp__sub_83BF0AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11352
	ctx.r3.s64 = ctx.r11.s64 + -11352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0AAC"))) PPC_WEAK_FUNC(sub_83BF0AAC);
PPC_FUNC_IMPL(__imp__sub_83BF0AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0AB0"))) PPC_WEAK_FUNC(sub_83BF0AB0);
PPC_FUNC_IMPL(__imp__sub_83BF0AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0ABC"))) PPC_WEAK_FUNC(sub_83BF0ABC);
PPC_FUNC_IMPL(__imp__sub_83BF0ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0AC0"))) PPC_WEAK_FUNC(sub_83BF0AC0);
PPC_FUNC_IMPL(__imp__sub_83BF0AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0ACC"))) PPC_WEAK_FUNC(sub_83BF0ACC);
PPC_FUNC_IMPL(__imp__sub_83BF0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0AD0"))) PPC_WEAK_FUNC(sub_83BF0AD0);
PPC_FUNC_IMPL(__imp__sub_83BF0AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11328
	ctx.r3.s64 = ctx.r11.s64 + -11328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0ADC"))) PPC_WEAK_FUNC(sub_83BF0ADC);
PPC_FUNC_IMPL(__imp__sub_83BF0ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0AE0"))) PPC_WEAK_FUNC(sub_83BF0AE0);
PPC_FUNC_IMPL(__imp__sub_83BF0AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11320
	ctx.r3.s64 = ctx.r11.s64 + -11320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0AEC"))) PPC_WEAK_FUNC(sub_83BF0AEC);
PPC_FUNC_IMPL(__imp__sub_83BF0AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0AF0"))) PPC_WEAK_FUNC(sub_83BF0AF0);
PPC_FUNC_IMPL(__imp__sub_83BF0AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11312
	ctx.r3.s64 = ctx.r11.s64 + -11312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0AFC"))) PPC_WEAK_FUNC(sub_83BF0AFC);
PPC_FUNC_IMPL(__imp__sub_83BF0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0B00"))) PPC_WEAK_FUNC(sub_83BF0B00);
PPC_FUNC_IMPL(__imp__sub_83BF0B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11304
	ctx.r3.s64 = ctx.r11.s64 + -11304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0B0C"))) PPC_WEAK_FUNC(sub_83BF0B0C);
PPC_FUNC_IMPL(__imp__sub_83BF0B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0B10"))) PPC_WEAK_FUNC(sub_83BF0B10);
PPC_FUNC_IMPL(__imp__sub_83BF0B10) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// bl 0x83523120
	ctx.lr = 0x83BF0B28;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11296
	ctx.r3.s64 = ctx.r10.s64 + -11296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0B34;
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

__attribute__((alias("__imp__sub_83BF0B44"))) PPC_WEAK_FUNC(sub_83BF0B44);
PPC_FUNC_IMPL(__imp__sub_83BF0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0B48"))) PPC_WEAK_FUNC(sub_83BF0B48);
PPC_FUNC_IMPL(__imp__sub_83BF0B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18344
	ctx.r7.s64 = ctx.r8.s64 + -18344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18344(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0B70"))) PPC_WEAK_FUNC(sub_83BF0B70);
PPC_FUNC_IMPL(__imp__sub_83BF0B70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-2544
	ctx.r6.s64 = ctx.r7.s64 + -2544;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2616(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2616);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18344);
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
	// std r9,-2544(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2544, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0BB8"))) PPC_WEAK_FUNC(sub_83BF0BB8);
PPC_FUNC_IMPL(__imp__sub_83BF0BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11280
	ctx.r3.s64 = ctx.r11.s64 + -11280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0BC4"))) PPC_WEAK_FUNC(sub_83BF0BC4);
PPC_FUNC_IMPL(__imp__sub_83BF0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0BC8"))) PPC_WEAK_FUNC(sub_83BF0BC8);
PPC_FUNC_IMPL(__imp__sub_83BF0BC8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// bl 0x8259af80
	ctx.lr = 0x83BF0BE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11264
	ctx.r3.s64 = ctx.r10.s64 + -11264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0BEC;
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

__attribute__((alias("__imp__sub_83BF0BFC"))) PPC_WEAK_FUNC(sub_83BF0BFC);
PPC_FUNC_IMPL(__imp__sub_83BF0BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0C00"))) PPC_WEAK_FUNC(sub_83BF0C00);
PPC_FUNC_IMPL(__imp__sub_83BF0C00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18356
	ctx.r11.s64 = ctx.r8.s64 + -18356;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-2568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2568);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11272
	ctx.r3.s64 = ctx.r6.s64 + -11272;
	// stw r10,-18356(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0C30"))) PPC_WEAK_FUNC(sub_83BF0C30);
PPC_FUNC_IMPL(__imp__sub_83BF0C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0C3C"))) PPC_WEAK_FUNC(sub_83BF0C3C);
PPC_FUNC_IMPL(__imp__sub_83BF0C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0C40"))) PPC_WEAK_FUNC(sub_83BF0C40);
PPC_FUNC_IMPL(__imp__sub_83BF0C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11248
	ctx.r3.s64 = ctx.r11.s64 + -11248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0C4C"))) PPC_WEAK_FUNC(sub_83BF0C4C);
PPC_FUNC_IMPL(__imp__sub_83BF0C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0C50"))) PPC_WEAK_FUNC(sub_83BF0C50);
PPC_FUNC_IMPL(__imp__sub_83BF0C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11240
	ctx.r3.s64 = ctx.r11.s64 + -11240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0C5C"))) PPC_WEAK_FUNC(sub_83BF0C5C);
PPC_FUNC_IMPL(__imp__sub_83BF0C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0C60"))) PPC_WEAK_FUNC(sub_83BF0C60);
PPC_FUNC_IMPL(__imp__sub_83BF0C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11232
	ctx.r3.s64 = ctx.r11.s64 + -11232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0C6C"))) PPC_WEAK_FUNC(sub_83BF0C6C);
PPC_FUNC_IMPL(__imp__sub_83BF0C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0C70"))) PPC_WEAK_FUNC(sub_83BF0C70);
PPC_FUNC_IMPL(__imp__sub_83BF0C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11224
	ctx.r3.s64 = ctx.r11.s64 + -11224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0C7C"))) PPC_WEAK_FUNC(sub_83BF0C7C);
PPC_FUNC_IMPL(__imp__sub_83BF0C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0C80"))) PPC_WEAK_FUNC(sub_83BF0C80);
PPC_FUNC_IMPL(__imp__sub_83BF0C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11216
	ctx.r3.s64 = ctx.r11.s64 + -11216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0C8C"))) PPC_WEAK_FUNC(sub_83BF0C8C);
PPC_FUNC_IMPL(__imp__sub_83BF0C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0C90"))) PPC_WEAK_FUNC(sub_83BF0C90);
PPC_FUNC_IMPL(__imp__sub_83BF0C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11208
	ctx.r3.s64 = ctx.r11.s64 + -11208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0C9C"))) PPC_WEAK_FUNC(sub_83BF0C9C);
PPC_FUNC_IMPL(__imp__sub_83BF0C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0CA0"))) PPC_WEAK_FUNC(sub_83BF0CA0);
PPC_FUNC_IMPL(__imp__sub_83BF0CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11200
	ctx.r3.s64 = ctx.r11.s64 + -11200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0CAC"))) PPC_WEAK_FUNC(sub_83BF0CAC);
PPC_FUNC_IMPL(__imp__sub_83BF0CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0CB0"))) PPC_WEAK_FUNC(sub_83BF0CB0);
PPC_FUNC_IMPL(__imp__sub_83BF0CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0CBC"))) PPC_WEAK_FUNC(sub_83BF0CBC);
PPC_FUNC_IMPL(__imp__sub_83BF0CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0CC0"))) PPC_WEAK_FUNC(sub_83BF0CC0);
PPC_FUNC_IMPL(__imp__sub_83BF0CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11184
	ctx.r3.s64 = ctx.r11.s64 + -11184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0CCC"))) PPC_WEAK_FUNC(sub_83BF0CCC);
PPC_FUNC_IMPL(__imp__sub_83BF0CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0CD0"))) PPC_WEAK_FUNC(sub_83BF0CD0);
PPC_FUNC_IMPL(__imp__sub_83BF0CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11176
	ctx.r3.s64 = ctx.r11.s64 + -11176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0CDC"))) PPC_WEAK_FUNC(sub_83BF0CDC);
PPC_FUNC_IMPL(__imp__sub_83BF0CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0CE0"))) PPC_WEAK_FUNC(sub_83BF0CE0);
PPC_FUNC_IMPL(__imp__sub_83BF0CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11168
	ctx.r3.s64 = ctx.r11.s64 + -11168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0CEC"))) PPC_WEAK_FUNC(sub_83BF0CEC);
PPC_FUNC_IMPL(__imp__sub_83BF0CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0CF0"))) PPC_WEAK_FUNC(sub_83BF0CF0);
PPC_FUNC_IMPL(__imp__sub_83BF0CF0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// bl 0x83523120
	ctx.lr = 0x83BF0D08;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11160
	ctx.r3.s64 = ctx.r10.s64 + -11160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0D14;
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

__attribute__((alias("__imp__sub_83BF0D24"))) PPC_WEAK_FUNC(sub_83BF0D24);
PPC_FUNC_IMPL(__imp__sub_83BF0D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0D28"))) PPC_WEAK_FUNC(sub_83BF0D28);
PPC_FUNC_IMPL(__imp__sub_83BF0D28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17976
	ctx.r7.s64 = ctx.r8.s64 + -17976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17976(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0D50"))) PPC_WEAK_FUNC(sub_83BF0D50);
PPC_FUNC_IMPL(__imp__sub_83BF0D50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-2288
	ctx.r6.s64 = ctx.r7.s64 + -2288;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2360(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2360);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17976);
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
	// std r9,-2288(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2288, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0D98"))) PPC_WEAK_FUNC(sub_83BF0D98);
PPC_FUNC_IMPL(__imp__sub_83BF0D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11144
	ctx.r3.s64 = ctx.r11.s64 + -11144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0DA4"))) PPC_WEAK_FUNC(sub_83BF0DA4);
PPC_FUNC_IMPL(__imp__sub_83BF0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0DA8"))) PPC_WEAK_FUNC(sub_83BF0DA8);
PPC_FUNC_IMPL(__imp__sub_83BF0DA8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-17968
	ctx.r3.s64 = ctx.r11.s64 + -17968;
	// bl 0x8259af80
	ctx.lr = 0x83BF0DC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11128
	ctx.r3.s64 = ctx.r10.s64 + -11128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0DCC;
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

__attribute__((alias("__imp__sub_83BF0DDC"))) PPC_WEAK_FUNC(sub_83BF0DDC);
PPC_FUNC_IMPL(__imp__sub_83BF0DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0DE0"))) PPC_WEAK_FUNC(sub_83BF0DE0);
PPC_FUNC_IMPL(__imp__sub_83BF0DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17988
	ctx.r11.s64 = ctx.r8.s64 + -17988;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-2312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11136
	ctx.r3.s64 = ctx.r6.s64 + -11136;
	// stw r10,-17988(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E10"))) PPC_WEAK_FUNC(sub_83BF0E10);
PPC_FUNC_IMPL(__imp__sub_83BF0E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E1C"))) PPC_WEAK_FUNC(sub_83BF0E1C);
PPC_FUNC_IMPL(__imp__sub_83BF0E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0E20"))) PPC_WEAK_FUNC(sub_83BF0E20);
PPC_FUNC_IMPL(__imp__sub_83BF0E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11112
	ctx.r3.s64 = ctx.r11.s64 + -11112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E2C"))) PPC_WEAK_FUNC(sub_83BF0E2C);
PPC_FUNC_IMPL(__imp__sub_83BF0E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0E30"))) PPC_WEAK_FUNC(sub_83BF0E30);
PPC_FUNC_IMPL(__imp__sub_83BF0E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E3C"))) PPC_WEAK_FUNC(sub_83BF0E3C);
PPC_FUNC_IMPL(__imp__sub_83BF0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0E40"))) PPC_WEAK_FUNC(sub_83BF0E40);
PPC_FUNC_IMPL(__imp__sub_83BF0E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E4C"))) PPC_WEAK_FUNC(sub_83BF0E4C);
PPC_FUNC_IMPL(__imp__sub_83BF0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0E50"))) PPC_WEAK_FUNC(sub_83BF0E50);
PPC_FUNC_IMPL(__imp__sub_83BF0E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11088
	ctx.r3.s64 = ctx.r11.s64 + -11088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E5C"))) PPC_WEAK_FUNC(sub_83BF0E5C);
PPC_FUNC_IMPL(__imp__sub_83BF0E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0E60"))) PPC_WEAK_FUNC(sub_83BF0E60);
PPC_FUNC_IMPL(__imp__sub_83BF0E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11080
	ctx.r3.s64 = ctx.r11.s64 + -11080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E6C"))) PPC_WEAK_FUNC(sub_83BF0E6C);
PPC_FUNC_IMPL(__imp__sub_83BF0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0E70"))) PPC_WEAK_FUNC(sub_83BF0E70);
PPC_FUNC_IMPL(__imp__sub_83BF0E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11072
	ctx.r3.s64 = ctx.r11.s64 + -11072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E7C"))) PPC_WEAK_FUNC(sub_83BF0E7C);
PPC_FUNC_IMPL(__imp__sub_83BF0E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0E80"))) PPC_WEAK_FUNC(sub_83BF0E80);
PPC_FUNC_IMPL(__imp__sub_83BF0E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11064
	ctx.r3.s64 = ctx.r11.s64 + -11064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E8C"))) PPC_WEAK_FUNC(sub_83BF0E8C);
PPC_FUNC_IMPL(__imp__sub_83BF0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0E90"))) PPC_WEAK_FUNC(sub_83BF0E90);
PPC_FUNC_IMPL(__imp__sub_83BF0E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11056
	ctx.r3.s64 = ctx.r11.s64 + -11056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0E9C"))) PPC_WEAK_FUNC(sub_83BF0E9C);
PPC_FUNC_IMPL(__imp__sub_83BF0E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0EA0"))) PPC_WEAK_FUNC(sub_83BF0EA0);
PPC_FUNC_IMPL(__imp__sub_83BF0EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11048
	ctx.r3.s64 = ctx.r11.s64 + -11048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0EAC"))) PPC_WEAK_FUNC(sub_83BF0EAC);
PPC_FUNC_IMPL(__imp__sub_83BF0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0EB0"))) PPC_WEAK_FUNC(sub_83BF0EB0);
PPC_FUNC_IMPL(__imp__sub_83BF0EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11040
	ctx.r3.s64 = ctx.r11.s64 + -11040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0EBC"))) PPC_WEAK_FUNC(sub_83BF0EBC);
PPC_FUNC_IMPL(__imp__sub_83BF0EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0EC0"))) PPC_WEAK_FUNC(sub_83BF0EC0);
PPC_FUNC_IMPL(__imp__sub_83BF0EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11032
	ctx.r3.s64 = ctx.r11.s64 + -11032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0ECC"))) PPC_WEAK_FUNC(sub_83BF0ECC);
PPC_FUNC_IMPL(__imp__sub_83BF0ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0ED0"))) PPC_WEAK_FUNC(sub_83BF0ED0);
PPC_FUNC_IMPL(__imp__sub_83BF0ED0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-17624
	ctx.r3.s64 = ctx.r11.s64 + -17624;
	// bl 0x83523120
	ctx.lr = 0x83BF0EE8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11024
	ctx.r3.s64 = ctx.r10.s64 + -11024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0EF4;
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

__attribute__((alias("__imp__sub_83BF0F04"))) PPC_WEAK_FUNC(sub_83BF0F04);
PPC_FUNC_IMPL(__imp__sub_83BF0F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0F08"))) PPC_WEAK_FUNC(sub_83BF0F08);
PPC_FUNC_IMPL(__imp__sub_83BF0F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17608
	ctx.r7.s64 = ctx.r8.s64 + -17608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0F30"))) PPC_WEAK_FUNC(sub_83BF0F30);
PPC_FUNC_IMPL(__imp__sub_83BF0F30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-2080
	ctx.r6.s64 = ctx.r7.s64 + -2080;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17608);
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
	// std r9,-2080(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0F78"))) PPC_WEAK_FUNC(sub_83BF0F78);
PPC_FUNC_IMPL(__imp__sub_83BF0F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0F84"))) PPC_WEAK_FUNC(sub_83BF0F84);
PPC_FUNC_IMPL(__imp__sub_83BF0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0F88"))) PPC_WEAK_FUNC(sub_83BF0F88);
PPC_FUNC_IMPL(__imp__sub_83BF0F88) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-17600
	ctx.r3.s64 = ctx.r11.s64 + -17600;
	// bl 0x8259af80
	ctx.lr = 0x83BF0FA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-10992
	ctx.r3.s64 = ctx.r10.s64 + -10992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0FAC;
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

__attribute__((alias("__imp__sub_83BF0FBC"))) PPC_WEAK_FUNC(sub_83BF0FBC);
PPC_FUNC_IMPL(__imp__sub_83BF0FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0FC0"))) PPC_WEAK_FUNC(sub_83BF0FC0);
PPC_FUNC_IMPL(__imp__sub_83BF0FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17620
	ctx.r11.s64 = ctx.r8.s64 + -17620;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-2104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11000
	ctx.r3.s64 = ctx.r6.s64 + -11000;
	// stw r10,-17620(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0FF0"))) PPC_WEAK_FUNC(sub_83BF0FF0);
PPC_FUNC_IMPL(__imp__sub_83BF0FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10984
	ctx.r3.s64 = ctx.r11.s64 + -10984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0FFC"))) PPC_WEAK_FUNC(sub_83BF0FFC);
PPC_FUNC_IMPL(__imp__sub_83BF0FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1000"))) PPC_WEAK_FUNC(sub_83BF1000);
PPC_FUNC_IMPL(__imp__sub_83BF1000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10976
	ctx.r3.s64 = ctx.r11.s64 + -10976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF100C"))) PPC_WEAK_FUNC(sub_83BF100C);
PPC_FUNC_IMPL(__imp__sub_83BF100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1010"))) PPC_WEAK_FUNC(sub_83BF1010);
PPC_FUNC_IMPL(__imp__sub_83BF1010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10968
	ctx.r3.s64 = ctx.r11.s64 + -10968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF101C"))) PPC_WEAK_FUNC(sub_83BF101C);
PPC_FUNC_IMPL(__imp__sub_83BF101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1020"))) PPC_WEAK_FUNC(sub_83BF1020);
PPC_FUNC_IMPL(__imp__sub_83BF1020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10960
	ctx.r3.s64 = ctx.r11.s64 + -10960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF102C"))) PPC_WEAK_FUNC(sub_83BF102C);
PPC_FUNC_IMPL(__imp__sub_83BF102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1030"))) PPC_WEAK_FUNC(sub_83BF1030);
PPC_FUNC_IMPL(__imp__sub_83BF1030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10952
	ctx.r3.s64 = ctx.r11.s64 + -10952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF103C"))) PPC_WEAK_FUNC(sub_83BF103C);
PPC_FUNC_IMPL(__imp__sub_83BF103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1040"))) PPC_WEAK_FUNC(sub_83BF1040);
PPC_FUNC_IMPL(__imp__sub_83BF1040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF104C"))) PPC_WEAK_FUNC(sub_83BF104C);
PPC_FUNC_IMPL(__imp__sub_83BF104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1050"))) PPC_WEAK_FUNC(sub_83BF1050);
PPC_FUNC_IMPL(__imp__sub_83BF1050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10936
	ctx.r3.s64 = ctx.r11.s64 + -10936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF105C"))) PPC_WEAK_FUNC(sub_83BF105C);
PPC_FUNC_IMPL(__imp__sub_83BF105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1060"))) PPC_WEAK_FUNC(sub_83BF1060);
PPC_FUNC_IMPL(__imp__sub_83BF1060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF106C"))) PPC_WEAK_FUNC(sub_83BF106C);
PPC_FUNC_IMPL(__imp__sub_83BF106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1070"))) PPC_WEAK_FUNC(sub_83BF1070);
PPC_FUNC_IMPL(__imp__sub_83BF1070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10920
	ctx.r3.s64 = ctx.r11.s64 + -10920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF107C"))) PPC_WEAK_FUNC(sub_83BF107C);
PPC_FUNC_IMPL(__imp__sub_83BF107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1080"))) PPC_WEAK_FUNC(sub_83BF1080);
PPC_FUNC_IMPL(__imp__sub_83BF1080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10912
	ctx.r3.s64 = ctx.r11.s64 + -10912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF108C"))) PPC_WEAK_FUNC(sub_83BF108C);
PPC_FUNC_IMPL(__imp__sub_83BF108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1090"))) PPC_WEAK_FUNC(sub_83BF1090);
PPC_FUNC_IMPL(__imp__sub_83BF1090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10904
	ctx.r3.s64 = ctx.r11.s64 + -10904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF109C"))) PPC_WEAK_FUNC(sub_83BF109C);
PPC_FUNC_IMPL(__imp__sub_83BF109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF10A0"))) PPC_WEAK_FUNC(sub_83BF10A0);
PPC_FUNC_IMPL(__imp__sub_83BF10A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10896
	ctx.r3.s64 = ctx.r11.s64 + -10896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF10AC"))) PPC_WEAK_FUNC(sub_83BF10AC);
PPC_FUNC_IMPL(__imp__sub_83BF10AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF10B0"))) PPC_WEAK_FUNC(sub_83BF10B0);
PPC_FUNC_IMPL(__imp__sub_83BF10B0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-17256
	ctx.r3.s64 = ctx.r11.s64 + -17256;
	// bl 0x83523120
	ctx.lr = 0x83BF10C8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-10888
	ctx.r3.s64 = ctx.r10.s64 + -10888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF10D4;
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

__attribute__((alias("__imp__sub_83BF10E4"))) PPC_WEAK_FUNC(sub_83BF10E4);
PPC_FUNC_IMPL(__imp__sub_83BF10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF10E8"))) PPC_WEAK_FUNC(sub_83BF10E8);
PPC_FUNC_IMPL(__imp__sub_83BF10E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17240
	ctx.r7.s64 = ctx.r8.s64 + -17240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF1110"))) PPC_WEAK_FUNC(sub_83BF1110);
PPC_FUNC_IMPL(__imp__sub_83BF1110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-1864
	ctx.r6.s64 = ctx.r7.s64 + -1864;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1936(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1936);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17240);
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
	// std r9,-1864(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1864, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF1158"))) PPC_WEAK_FUNC(sub_83BF1158);
PPC_FUNC_IMPL(__imp__sub_83BF1158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10872
	ctx.r3.s64 = ctx.r11.s64 + -10872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF1164"))) PPC_WEAK_FUNC(sub_83BF1164);
PPC_FUNC_IMPL(__imp__sub_83BF1164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1168"))) PPC_WEAK_FUNC(sub_83BF1168);
PPC_FUNC_IMPL(__imp__sub_83BF1168) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-17232
	ctx.r3.s64 = ctx.r11.s64 + -17232;
	// bl 0x8259af80
	ctx.lr = 0x83BF1180;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-10856
	ctx.r3.s64 = ctx.r10.s64 + -10856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF118C;
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

__attribute__((alias("__imp__sub_83BF119C"))) PPC_WEAK_FUNC(sub_83BF119C);
PPC_FUNC_IMPL(__imp__sub_83BF119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF11A0"))) PPC_WEAK_FUNC(sub_83BF11A0);
PPC_FUNC_IMPL(__imp__sub_83BF11A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-17252
	ctx.r11.s64 = ctx.r8.s64 + -17252;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-1888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1888);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10864
	ctx.r3.s64 = ctx.r6.s64 + -10864;
	// stw r10,-17252(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF11D0"))) PPC_WEAK_FUNC(sub_83BF11D0);
PPC_FUNC_IMPL(__imp__sub_83BF11D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF11DC"))) PPC_WEAK_FUNC(sub_83BF11DC);
PPC_FUNC_IMPL(__imp__sub_83BF11DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF11E0"))) PPC_WEAK_FUNC(sub_83BF11E0);
PPC_FUNC_IMPL(__imp__sub_83BF11E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10840
	ctx.r3.s64 = ctx.r11.s64 + -10840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF11EC"))) PPC_WEAK_FUNC(sub_83BF11EC);
PPC_FUNC_IMPL(__imp__sub_83BF11EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF11F0"))) PPC_WEAK_FUNC(sub_83BF11F0);
PPC_FUNC_IMPL(__imp__sub_83BF11F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10832
	ctx.r3.s64 = ctx.r11.s64 + -10832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF11FC"))) PPC_WEAK_FUNC(sub_83BF11FC);
PPC_FUNC_IMPL(__imp__sub_83BF11FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1200"))) PPC_WEAK_FUNC(sub_83BF1200);
PPC_FUNC_IMPL(__imp__sub_83BF1200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10824
	ctx.r3.s64 = ctx.r11.s64 + -10824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF120C"))) PPC_WEAK_FUNC(sub_83BF120C);
PPC_FUNC_IMPL(__imp__sub_83BF120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1210"))) PPC_WEAK_FUNC(sub_83BF1210);
PPC_FUNC_IMPL(__imp__sub_83BF1210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10816
	ctx.r3.s64 = ctx.r11.s64 + -10816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF121C"))) PPC_WEAK_FUNC(sub_83BF121C);
PPC_FUNC_IMPL(__imp__sub_83BF121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1220"))) PPC_WEAK_FUNC(sub_83BF1220);
PPC_FUNC_IMPL(__imp__sub_83BF1220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10808
	ctx.r3.s64 = ctx.r11.s64 + -10808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF122C"))) PPC_WEAK_FUNC(sub_83BF122C);
PPC_FUNC_IMPL(__imp__sub_83BF122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1230"))) PPC_WEAK_FUNC(sub_83BF1230);
PPC_FUNC_IMPL(__imp__sub_83BF1230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10800
	ctx.r3.s64 = ctx.r11.s64 + -10800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF123C"))) PPC_WEAK_FUNC(sub_83BF123C);
PPC_FUNC_IMPL(__imp__sub_83BF123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1240"))) PPC_WEAK_FUNC(sub_83BF1240);
PPC_FUNC_IMPL(__imp__sub_83BF1240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10792
	ctx.r3.s64 = ctx.r11.s64 + -10792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF124C"))) PPC_WEAK_FUNC(sub_83BF124C);
PPC_FUNC_IMPL(__imp__sub_83BF124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1250"))) PPC_WEAK_FUNC(sub_83BF1250);
PPC_FUNC_IMPL(__imp__sub_83BF1250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10784
	ctx.r3.s64 = ctx.r11.s64 + -10784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF125C"))) PPC_WEAK_FUNC(sub_83BF125C);
PPC_FUNC_IMPL(__imp__sub_83BF125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1260"))) PPC_WEAK_FUNC(sub_83BF1260);
PPC_FUNC_IMPL(__imp__sub_83BF1260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10776
	ctx.r3.s64 = ctx.r11.s64 + -10776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF126C"))) PPC_WEAK_FUNC(sub_83BF126C);
PPC_FUNC_IMPL(__imp__sub_83BF126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1270"))) PPC_WEAK_FUNC(sub_83BF1270);
PPC_FUNC_IMPL(__imp__sub_83BF1270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF127C"))) PPC_WEAK_FUNC(sub_83BF127C);
PPC_FUNC_IMPL(__imp__sub_83BF127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1280"))) PPC_WEAK_FUNC(sub_83BF1280);
PPC_FUNC_IMPL(__imp__sub_83BF1280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10760
	ctx.r3.s64 = ctx.r11.s64 + -10760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF128C"))) PPC_WEAK_FUNC(sub_83BF128C);
PPC_FUNC_IMPL(__imp__sub_83BF128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1290"))) PPC_WEAK_FUNC(sub_83BF1290);
PPC_FUNC_IMPL(__imp__sub_83BF1290) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// bl 0x83523120
	ctx.lr = 0x83BF12A8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-10752
	ctx.r3.s64 = ctx.r10.s64 + -10752;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF12B4;
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

__attribute__((alias("__imp__sub_83BF12C4"))) PPC_WEAK_FUNC(sub_83BF12C4);
PPC_FUNC_IMPL(__imp__sub_83BF12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF12C8"))) PPC_WEAK_FUNC(sub_83BF12C8);
PPC_FUNC_IMPL(__imp__sub_83BF12C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16872
	ctx.r7.s64 = ctx.r8.s64 + -16872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16872(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF12F0"))) PPC_WEAK_FUNC(sub_83BF12F0);
PPC_FUNC_IMPL(__imp__sub_83BF12F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-1628
	ctx.r6.s64 = ctx.r7.s64 + -1628;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1700(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1700);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16872);
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
	// std r9,-1628(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF1338"))) PPC_WEAK_FUNC(sub_83BF1338);
PPC_FUNC_IMPL(__imp__sub_83BF1338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF1344"))) PPC_WEAK_FUNC(sub_83BF1344);
PPC_FUNC_IMPL(__imp__sub_83BF1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1348"))) PPC_WEAK_FUNC(sub_83BF1348);
PPC_FUNC_IMPL(__imp__sub_83BF1348) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// bl 0x8259af80
	ctx.lr = 0x83BF1360;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-10720
	ctx.r3.s64 = ctx.r10.s64 + -10720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF136C;
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

__attribute__((alias("__imp__sub_83BF137C"))) PPC_WEAK_FUNC(sub_83BF137C);
PPC_FUNC_IMPL(__imp__sub_83BF137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1380"))) PPC_WEAK_FUNC(sub_83BF1380);
PPC_FUNC_IMPL(__imp__sub_83BF1380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16884
	ctx.r11.s64 = ctx.r8.s64 + -16884;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-1652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1652);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10728
	ctx.r3.s64 = ctx.r6.s64 + -10728;
	// stw r10,-16884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF13B0"))) PPC_WEAK_FUNC(sub_83BF13B0);
PPC_FUNC_IMPL(__imp__sub_83BF13B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10712
	ctx.r3.s64 = ctx.r11.s64 + -10712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF13BC"))) PPC_WEAK_FUNC(sub_83BF13BC);
PPC_FUNC_IMPL(__imp__sub_83BF13BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF13C0"))) PPC_WEAK_FUNC(sub_83BF13C0);
PPC_FUNC_IMPL(__imp__sub_83BF13C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10704
	ctx.r3.s64 = ctx.r11.s64 + -10704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF13CC"))) PPC_WEAK_FUNC(sub_83BF13CC);
PPC_FUNC_IMPL(__imp__sub_83BF13CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF13D0"))) PPC_WEAK_FUNC(sub_83BF13D0);
PPC_FUNC_IMPL(__imp__sub_83BF13D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10696
	ctx.r3.s64 = ctx.r11.s64 + -10696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF13DC"))) PPC_WEAK_FUNC(sub_83BF13DC);
PPC_FUNC_IMPL(__imp__sub_83BF13DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF13E0"))) PPC_WEAK_FUNC(sub_83BF13E0);
PPC_FUNC_IMPL(__imp__sub_83BF13E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF13EC"))) PPC_WEAK_FUNC(sub_83BF13EC);
PPC_FUNC_IMPL(__imp__sub_83BF13EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF13F0"))) PPC_WEAK_FUNC(sub_83BF13F0);
PPC_FUNC_IMPL(__imp__sub_83BF13F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10680
	ctx.r3.s64 = ctx.r11.s64 + -10680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF13FC"))) PPC_WEAK_FUNC(sub_83BF13FC);
PPC_FUNC_IMPL(__imp__sub_83BF13FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1400"))) PPC_WEAK_FUNC(sub_83BF1400);
PPC_FUNC_IMPL(__imp__sub_83BF1400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10672
	ctx.r3.s64 = ctx.r11.s64 + -10672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF140C"))) PPC_WEAK_FUNC(sub_83BF140C);
PPC_FUNC_IMPL(__imp__sub_83BF140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1410"))) PPC_WEAK_FUNC(sub_83BF1410);
PPC_FUNC_IMPL(__imp__sub_83BF1410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF141C"))) PPC_WEAK_FUNC(sub_83BF141C);
PPC_FUNC_IMPL(__imp__sub_83BF141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1420"))) PPC_WEAK_FUNC(sub_83BF1420);
PPC_FUNC_IMPL(__imp__sub_83BF1420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10656
	ctx.r3.s64 = ctx.r11.s64 + -10656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF142C"))) PPC_WEAK_FUNC(sub_83BF142C);
PPC_FUNC_IMPL(__imp__sub_83BF142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1430"))) PPC_WEAK_FUNC(sub_83BF1430);
PPC_FUNC_IMPL(__imp__sub_83BF1430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10648
	ctx.r3.s64 = ctx.r11.s64 + -10648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF143C"))) PPC_WEAK_FUNC(sub_83BF143C);
PPC_FUNC_IMPL(__imp__sub_83BF143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1440"))) PPC_WEAK_FUNC(sub_83BF1440);
PPC_FUNC_IMPL(__imp__sub_83BF1440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10640
	ctx.r3.s64 = ctx.r11.s64 + -10640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF144C"))) PPC_WEAK_FUNC(sub_83BF144C);
PPC_FUNC_IMPL(__imp__sub_83BF144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1450"))) PPC_WEAK_FUNC(sub_83BF1450);
PPC_FUNC_IMPL(__imp__sub_83BF1450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10632
	ctx.r3.s64 = ctx.r11.s64 + -10632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF145C"))) PPC_WEAK_FUNC(sub_83BF145C);
PPC_FUNC_IMPL(__imp__sub_83BF145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1460"))) PPC_WEAK_FUNC(sub_83BF1460);
PPC_FUNC_IMPL(__imp__sub_83BF1460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF146C"))) PPC_WEAK_FUNC(sub_83BF146C);
PPC_FUNC_IMPL(__imp__sub_83BF146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1470"))) PPC_WEAK_FUNC(sub_83BF1470);
PPC_FUNC_IMPL(__imp__sub_83BF1470) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-16520
	ctx.r3.s64 = ctx.r11.s64 + -16520;
	// bl 0x83523120
	ctx.lr = 0x83BF1488;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-10616
	ctx.r3.s64 = ctx.r10.s64 + -10616;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF1494;
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

__attribute__((alias("__imp__sub_83BF14A4"))) PPC_WEAK_FUNC(sub_83BF14A4);
PPC_FUNC_IMPL(__imp__sub_83BF14A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF14A8"))) PPC_WEAK_FUNC(sub_83BF14A8);
PPC_FUNC_IMPL(__imp__sub_83BF14A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16504
	ctx.r7.s64 = ctx.r8.s64 + -16504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF14D0"))) PPC_WEAK_FUNC(sub_83BF14D0);
PPC_FUNC_IMPL(__imp__sub_83BF14D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-1392
	ctx.r6.s64 = ctx.r7.s64 + -1392;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1464(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1464);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16504);
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
	// std r9,-1392(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1392, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF1518"))) PPC_WEAK_FUNC(sub_83BF1518);
PPC_FUNC_IMPL(__imp__sub_83BF1518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10600
	ctx.r3.s64 = ctx.r11.s64 + -10600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF1524"))) PPC_WEAK_FUNC(sub_83BF1524);
PPC_FUNC_IMPL(__imp__sub_83BF1524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1528"))) PPC_WEAK_FUNC(sub_83BF1528);
PPC_FUNC_IMPL(__imp__sub_83BF1528) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-16496
	ctx.r3.s64 = ctx.r11.s64 + -16496;
	// bl 0x8259af80
	ctx.lr = 0x83BF1540;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-10584
	ctx.r3.s64 = ctx.r10.s64 + -10584;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF154C;
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

__attribute__((alias("__imp__sub_83BF155C"))) PPC_WEAK_FUNC(sub_83BF155C);
PPC_FUNC_IMPL(__imp__sub_83BF155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF1560"))) PPC_WEAK_FUNC(sub_83BF1560);
PPC_FUNC_IMPL(__imp__sub_83BF1560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-16516
	ctx.r11.s64 = ctx.r8.s64 + -16516;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-1416(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1416);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10592
	ctx.r3.s64 = ctx.r6.s64 + -10592;
	// stw r10,-16516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF1590"))) PPC_WEAK_FUNC(sub_83BF1590);
PPC_FUNC_IMPL(__imp__sub_83BF1590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF159C"))) PPC_WEAK_FUNC(sub_83BF159C);
PPC_FUNC_IMPL(__imp__sub_83BF159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

