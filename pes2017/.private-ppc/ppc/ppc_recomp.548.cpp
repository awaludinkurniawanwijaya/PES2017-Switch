#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B805E8"))) PPC_WEAK_FUNC(sub_83B805E8);
PPC_FUNC_IMPL(__imp__sub_83B805E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27160
	ctx.r3.s64 = ctx.r11.s64 + -27160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B805F4"))) PPC_WEAK_FUNC(sub_83B805F4);
PPC_FUNC_IMPL(__imp__sub_83B805F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B805F8"))) PPC_WEAK_FUNC(sub_83B805F8);
PPC_FUNC_IMPL(__imp__sub_83B805F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27152
	ctx.r3.s64 = ctx.r11.s64 + -27152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80604"))) PPC_WEAK_FUNC(sub_83B80604);
PPC_FUNC_IMPL(__imp__sub_83B80604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80608"))) PPC_WEAK_FUNC(sub_83B80608);
PPC_FUNC_IMPL(__imp__sub_83B80608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80614"))) PPC_WEAK_FUNC(sub_83B80614);
PPC_FUNC_IMPL(__imp__sub_83B80614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80618"))) PPC_WEAK_FUNC(sub_83B80618);
PPC_FUNC_IMPL(__imp__sub_83B80618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80624"))) PPC_WEAK_FUNC(sub_83B80624);
PPC_FUNC_IMPL(__imp__sub_83B80624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80628"))) PPC_WEAK_FUNC(sub_83B80628);
PPC_FUNC_IMPL(__imp__sub_83B80628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27128
	ctx.r3.s64 = ctx.r11.s64 + -27128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80634"))) PPC_WEAK_FUNC(sub_83B80634);
PPC_FUNC_IMPL(__imp__sub_83B80634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80638"))) PPC_WEAK_FUNC(sub_83B80638);
PPC_FUNC_IMPL(__imp__sub_83B80638) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13444
	ctx.r7.s64 = ctx.r8.s64 + -13444;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13444(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13444);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13444(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13444, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80660"))) PPC_WEAK_FUNC(sub_83B80660);
PPC_FUNC_IMPL(__imp__sub_83B80660) {
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
	// addi r3,r11,-13448
	ctx.r3.s64 = ctx.r11.s64 + -13448;
	// bl 0x83523120
	ctx.lr = 0x83B80678;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27120
	ctx.r3.s64 = ctx.r10.s64 + -27120;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80684;
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

__attribute__((alias("__imp__sub_83B80694"))) PPC_WEAK_FUNC(sub_83B80694);
PPC_FUNC_IMPL(__imp__sub_83B80694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80698"))) PPC_WEAK_FUNC(sub_83B80698);
PPC_FUNC_IMPL(__imp__sub_83B80698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27104
	ctx.r3.s64 = ctx.r11.s64 + -27104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B806A4"))) PPC_WEAK_FUNC(sub_83B806A4);
PPC_FUNC_IMPL(__imp__sub_83B806A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B806A8"))) PPC_WEAK_FUNC(sub_83B806A8);
PPC_FUNC_IMPL(__imp__sub_83B806A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B806B4"))) PPC_WEAK_FUNC(sub_83B806B4);
PPC_FUNC_IMPL(__imp__sub_83B806B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B806B8"))) PPC_WEAK_FUNC(sub_83B806B8);
PPC_FUNC_IMPL(__imp__sub_83B806B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27088
	ctx.r3.s64 = ctx.r11.s64 + -27088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B806C4"))) PPC_WEAK_FUNC(sub_83B806C4);
PPC_FUNC_IMPL(__imp__sub_83B806C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B806C8"))) PPC_WEAK_FUNC(sub_83B806C8);
PPC_FUNC_IMPL(__imp__sub_83B806C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27080
	ctx.r3.s64 = ctx.r11.s64 + -27080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B806D4"))) PPC_WEAK_FUNC(sub_83B806D4);
PPC_FUNC_IMPL(__imp__sub_83B806D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B806D8"))) PPC_WEAK_FUNC(sub_83B806D8);
PPC_FUNC_IMPL(__imp__sub_83B806D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27072
	ctx.r3.s64 = ctx.r11.s64 + -27072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B806E4"))) PPC_WEAK_FUNC(sub_83B806E4);
PPC_FUNC_IMPL(__imp__sub_83B806E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B806E8"))) PPC_WEAK_FUNC(sub_83B806E8);
PPC_FUNC_IMPL(__imp__sub_83B806E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27064
	ctx.r3.s64 = ctx.r11.s64 + -27064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B806F4"))) PPC_WEAK_FUNC(sub_83B806F4);
PPC_FUNC_IMPL(__imp__sub_83B806F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B806F8"))) PPC_WEAK_FUNC(sub_83B806F8);
PPC_FUNC_IMPL(__imp__sub_83B806F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27056
	ctx.r3.s64 = ctx.r11.s64 + -27056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80704"))) PPC_WEAK_FUNC(sub_83B80704);
PPC_FUNC_IMPL(__imp__sub_83B80704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80708"))) PPC_WEAK_FUNC(sub_83B80708);
PPC_FUNC_IMPL(__imp__sub_83B80708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27048
	ctx.r3.s64 = ctx.r11.s64 + -27048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80714"))) PPC_WEAK_FUNC(sub_83B80714);
PPC_FUNC_IMPL(__imp__sub_83B80714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80718"))) PPC_WEAK_FUNC(sub_83B80718);
PPC_FUNC_IMPL(__imp__sub_83B80718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27040
	ctx.r3.s64 = ctx.r11.s64 + -27040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80724"))) PPC_WEAK_FUNC(sub_83B80724);
PPC_FUNC_IMPL(__imp__sub_83B80724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80728"))) PPC_WEAK_FUNC(sub_83B80728);
PPC_FUNC_IMPL(__imp__sub_83B80728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27032
	ctx.r3.s64 = ctx.r11.s64 + -27032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80734"))) PPC_WEAK_FUNC(sub_83B80734);
PPC_FUNC_IMPL(__imp__sub_83B80734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80738"))) PPC_WEAK_FUNC(sub_83B80738);
PPC_FUNC_IMPL(__imp__sub_83B80738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27024
	ctx.r3.s64 = ctx.r11.s64 + -27024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80744"))) PPC_WEAK_FUNC(sub_83B80744);
PPC_FUNC_IMPL(__imp__sub_83B80744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80748"))) PPC_WEAK_FUNC(sub_83B80748);
PPC_FUNC_IMPL(__imp__sub_83B80748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-27016
	ctx.r3.s64 = ctx.r11.s64 + -27016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80754"))) PPC_WEAK_FUNC(sub_83B80754);
PPC_FUNC_IMPL(__imp__sub_83B80754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80758"))) PPC_WEAK_FUNC(sub_83B80758);
PPC_FUNC_IMPL(__imp__sub_83B80758) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13432
	ctx.r7.s64 = ctx.r8.s64 + -13432;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13432(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13432);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13432(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13432, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80780"))) PPC_WEAK_FUNC(sub_83B80780);
PPC_FUNC_IMPL(__imp__sub_83B80780) {
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
	// addi r3,r11,-13436
	ctx.r3.s64 = ctx.r11.s64 + -13436;
	// bl 0x83523120
	ctx.lr = 0x83B80798;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-27008
	ctx.r3.s64 = ctx.r10.s64 + -27008;
	// bl 0x831cdcc8
	ctx.lr = 0x83B807A4;
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

__attribute__((alias("__imp__sub_83B807B4"))) PPC_WEAK_FUNC(sub_83B807B4);
PPC_FUNC_IMPL(__imp__sub_83B807B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B807B8"))) PPC_WEAK_FUNC(sub_83B807B8);
PPC_FUNC_IMPL(__imp__sub_83B807B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26992
	ctx.r3.s64 = ctx.r11.s64 + -26992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B807C4"))) PPC_WEAK_FUNC(sub_83B807C4);
PPC_FUNC_IMPL(__imp__sub_83B807C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B807C8"))) PPC_WEAK_FUNC(sub_83B807C8);
PPC_FUNC_IMPL(__imp__sub_83B807C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26984
	ctx.r3.s64 = ctx.r11.s64 + -26984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B807D4"))) PPC_WEAK_FUNC(sub_83B807D4);
PPC_FUNC_IMPL(__imp__sub_83B807D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B807D8"))) PPC_WEAK_FUNC(sub_83B807D8);
PPC_FUNC_IMPL(__imp__sub_83B807D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26976
	ctx.r3.s64 = ctx.r11.s64 + -26976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B807E4"))) PPC_WEAK_FUNC(sub_83B807E4);
PPC_FUNC_IMPL(__imp__sub_83B807E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B807E8"))) PPC_WEAK_FUNC(sub_83B807E8);
PPC_FUNC_IMPL(__imp__sub_83B807E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26968
	ctx.r3.s64 = ctx.r11.s64 + -26968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B807F4"))) PPC_WEAK_FUNC(sub_83B807F4);
PPC_FUNC_IMPL(__imp__sub_83B807F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B807F8"))) PPC_WEAK_FUNC(sub_83B807F8);
PPC_FUNC_IMPL(__imp__sub_83B807F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26960
	ctx.r3.s64 = ctx.r11.s64 + -26960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80804"))) PPC_WEAK_FUNC(sub_83B80804);
PPC_FUNC_IMPL(__imp__sub_83B80804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80808"))) PPC_WEAK_FUNC(sub_83B80808);
PPC_FUNC_IMPL(__imp__sub_83B80808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26952
	ctx.r3.s64 = ctx.r11.s64 + -26952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80814"))) PPC_WEAK_FUNC(sub_83B80814);
PPC_FUNC_IMPL(__imp__sub_83B80814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80818"))) PPC_WEAK_FUNC(sub_83B80818);
PPC_FUNC_IMPL(__imp__sub_83B80818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26944
	ctx.r3.s64 = ctx.r11.s64 + -26944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80824"))) PPC_WEAK_FUNC(sub_83B80824);
PPC_FUNC_IMPL(__imp__sub_83B80824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80828"))) PPC_WEAK_FUNC(sub_83B80828);
PPC_FUNC_IMPL(__imp__sub_83B80828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26936
	ctx.r3.s64 = ctx.r11.s64 + -26936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80834"))) PPC_WEAK_FUNC(sub_83B80834);
PPC_FUNC_IMPL(__imp__sub_83B80834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80838"))) PPC_WEAK_FUNC(sub_83B80838);
PPC_FUNC_IMPL(__imp__sub_83B80838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26928
	ctx.r3.s64 = ctx.r11.s64 + -26928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80844"))) PPC_WEAK_FUNC(sub_83B80844);
PPC_FUNC_IMPL(__imp__sub_83B80844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80848"))) PPC_WEAK_FUNC(sub_83B80848);
PPC_FUNC_IMPL(__imp__sub_83B80848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26920
	ctx.r3.s64 = ctx.r11.s64 + -26920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80854"))) PPC_WEAK_FUNC(sub_83B80854);
PPC_FUNC_IMPL(__imp__sub_83B80854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80858"))) PPC_WEAK_FUNC(sub_83B80858);
PPC_FUNC_IMPL(__imp__sub_83B80858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26912
	ctx.r3.s64 = ctx.r11.s64 + -26912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80864"))) PPC_WEAK_FUNC(sub_83B80864);
PPC_FUNC_IMPL(__imp__sub_83B80864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80868"))) PPC_WEAK_FUNC(sub_83B80868);
PPC_FUNC_IMPL(__imp__sub_83B80868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26904
	ctx.r3.s64 = ctx.r11.s64 + -26904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80874"))) PPC_WEAK_FUNC(sub_83B80874);
PPC_FUNC_IMPL(__imp__sub_83B80874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80878"))) PPC_WEAK_FUNC(sub_83B80878);
PPC_FUNC_IMPL(__imp__sub_83B80878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13420
	ctx.r7.s64 = ctx.r8.s64 + -13420;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13420);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13420, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B808A0"))) PPC_WEAK_FUNC(sub_83B808A0);
PPC_FUNC_IMPL(__imp__sub_83B808A0) {
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
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// bl 0x83523120
	ctx.lr = 0x83B808B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-26896
	ctx.r3.s64 = ctx.r10.s64 + -26896;
	// bl 0x831cdcc8
	ctx.lr = 0x83B808C4;
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

__attribute__((alias("__imp__sub_83B808D4"))) PPC_WEAK_FUNC(sub_83B808D4);
PPC_FUNC_IMPL(__imp__sub_83B808D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B808D8"))) PPC_WEAK_FUNC(sub_83B808D8);
PPC_FUNC_IMPL(__imp__sub_83B808D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26880
	ctx.r3.s64 = ctx.r11.s64 + -26880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B808E4"))) PPC_WEAK_FUNC(sub_83B808E4);
PPC_FUNC_IMPL(__imp__sub_83B808E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B808E8"))) PPC_WEAK_FUNC(sub_83B808E8);
PPC_FUNC_IMPL(__imp__sub_83B808E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26872
	ctx.r3.s64 = ctx.r11.s64 + -26872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B808F4"))) PPC_WEAK_FUNC(sub_83B808F4);
PPC_FUNC_IMPL(__imp__sub_83B808F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B808F8"))) PPC_WEAK_FUNC(sub_83B808F8);
PPC_FUNC_IMPL(__imp__sub_83B808F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26864
	ctx.r3.s64 = ctx.r11.s64 + -26864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80904"))) PPC_WEAK_FUNC(sub_83B80904);
PPC_FUNC_IMPL(__imp__sub_83B80904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80908"))) PPC_WEAK_FUNC(sub_83B80908);
PPC_FUNC_IMPL(__imp__sub_83B80908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80914"))) PPC_WEAK_FUNC(sub_83B80914);
PPC_FUNC_IMPL(__imp__sub_83B80914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80918"))) PPC_WEAK_FUNC(sub_83B80918);
PPC_FUNC_IMPL(__imp__sub_83B80918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26848
	ctx.r3.s64 = ctx.r11.s64 + -26848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80924"))) PPC_WEAK_FUNC(sub_83B80924);
PPC_FUNC_IMPL(__imp__sub_83B80924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80928"))) PPC_WEAK_FUNC(sub_83B80928);
PPC_FUNC_IMPL(__imp__sub_83B80928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26840
	ctx.r3.s64 = ctx.r11.s64 + -26840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80934"))) PPC_WEAK_FUNC(sub_83B80934);
PPC_FUNC_IMPL(__imp__sub_83B80934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80938"))) PPC_WEAK_FUNC(sub_83B80938);
PPC_FUNC_IMPL(__imp__sub_83B80938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26832
	ctx.r3.s64 = ctx.r11.s64 + -26832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80944"))) PPC_WEAK_FUNC(sub_83B80944);
PPC_FUNC_IMPL(__imp__sub_83B80944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80948"))) PPC_WEAK_FUNC(sub_83B80948);
PPC_FUNC_IMPL(__imp__sub_83B80948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26824
	ctx.r3.s64 = ctx.r11.s64 + -26824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80954"))) PPC_WEAK_FUNC(sub_83B80954);
PPC_FUNC_IMPL(__imp__sub_83B80954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80958"))) PPC_WEAK_FUNC(sub_83B80958);
PPC_FUNC_IMPL(__imp__sub_83B80958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26816
	ctx.r3.s64 = ctx.r11.s64 + -26816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80964"))) PPC_WEAK_FUNC(sub_83B80964);
PPC_FUNC_IMPL(__imp__sub_83B80964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80968"))) PPC_WEAK_FUNC(sub_83B80968);
PPC_FUNC_IMPL(__imp__sub_83B80968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26808
	ctx.r3.s64 = ctx.r11.s64 + -26808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80974"))) PPC_WEAK_FUNC(sub_83B80974);
PPC_FUNC_IMPL(__imp__sub_83B80974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80978"))) PPC_WEAK_FUNC(sub_83B80978);
PPC_FUNC_IMPL(__imp__sub_83B80978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26800
	ctx.r3.s64 = ctx.r11.s64 + -26800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80984"))) PPC_WEAK_FUNC(sub_83B80984);
PPC_FUNC_IMPL(__imp__sub_83B80984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80988"))) PPC_WEAK_FUNC(sub_83B80988);
PPC_FUNC_IMPL(__imp__sub_83B80988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26792
	ctx.r3.s64 = ctx.r11.s64 + -26792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80994"))) PPC_WEAK_FUNC(sub_83B80994);
PPC_FUNC_IMPL(__imp__sub_83B80994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80998"))) PPC_WEAK_FUNC(sub_83B80998);
PPC_FUNC_IMPL(__imp__sub_83B80998) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13408
	ctx.r7.s64 = ctx.r8.s64 + -13408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B809C0"))) PPC_WEAK_FUNC(sub_83B809C0);
PPC_FUNC_IMPL(__imp__sub_83B809C0) {
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
	// addi r3,r11,-13412
	ctx.r3.s64 = ctx.r11.s64 + -13412;
	// bl 0x83523120
	ctx.lr = 0x83B809D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-26784
	ctx.r3.s64 = ctx.r10.s64 + -26784;
	// bl 0x831cdcc8
	ctx.lr = 0x83B809E4;
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

__attribute__((alias("__imp__sub_83B809F4"))) PPC_WEAK_FUNC(sub_83B809F4);
PPC_FUNC_IMPL(__imp__sub_83B809F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B809F8"))) PPC_WEAK_FUNC(sub_83B809F8);
PPC_FUNC_IMPL(__imp__sub_83B809F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26768
	ctx.r3.s64 = ctx.r11.s64 + -26768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A04"))) PPC_WEAK_FUNC(sub_83B80A04);
PPC_FUNC_IMPL(__imp__sub_83B80A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A08"))) PPC_WEAK_FUNC(sub_83B80A08);
PPC_FUNC_IMPL(__imp__sub_83B80A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26760
	ctx.r3.s64 = ctx.r11.s64 + -26760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A14"))) PPC_WEAK_FUNC(sub_83B80A14);
PPC_FUNC_IMPL(__imp__sub_83B80A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A18"))) PPC_WEAK_FUNC(sub_83B80A18);
PPC_FUNC_IMPL(__imp__sub_83B80A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26752
	ctx.r3.s64 = ctx.r11.s64 + -26752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A24"))) PPC_WEAK_FUNC(sub_83B80A24);
PPC_FUNC_IMPL(__imp__sub_83B80A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A28"))) PPC_WEAK_FUNC(sub_83B80A28);
PPC_FUNC_IMPL(__imp__sub_83B80A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26744
	ctx.r3.s64 = ctx.r11.s64 + -26744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A34"))) PPC_WEAK_FUNC(sub_83B80A34);
PPC_FUNC_IMPL(__imp__sub_83B80A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A38"))) PPC_WEAK_FUNC(sub_83B80A38);
PPC_FUNC_IMPL(__imp__sub_83B80A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26736
	ctx.r3.s64 = ctx.r11.s64 + -26736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A44"))) PPC_WEAK_FUNC(sub_83B80A44);
PPC_FUNC_IMPL(__imp__sub_83B80A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A48"))) PPC_WEAK_FUNC(sub_83B80A48);
PPC_FUNC_IMPL(__imp__sub_83B80A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26728
	ctx.r3.s64 = ctx.r11.s64 + -26728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A54"))) PPC_WEAK_FUNC(sub_83B80A54);
PPC_FUNC_IMPL(__imp__sub_83B80A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A58"))) PPC_WEAK_FUNC(sub_83B80A58);
PPC_FUNC_IMPL(__imp__sub_83B80A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26720
	ctx.r3.s64 = ctx.r11.s64 + -26720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A64"))) PPC_WEAK_FUNC(sub_83B80A64);
PPC_FUNC_IMPL(__imp__sub_83B80A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A68"))) PPC_WEAK_FUNC(sub_83B80A68);
PPC_FUNC_IMPL(__imp__sub_83B80A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26712
	ctx.r3.s64 = ctx.r11.s64 + -26712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A74"))) PPC_WEAK_FUNC(sub_83B80A74);
PPC_FUNC_IMPL(__imp__sub_83B80A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A78"))) PPC_WEAK_FUNC(sub_83B80A78);
PPC_FUNC_IMPL(__imp__sub_83B80A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26704
	ctx.r3.s64 = ctx.r11.s64 + -26704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A84"))) PPC_WEAK_FUNC(sub_83B80A84);
PPC_FUNC_IMPL(__imp__sub_83B80A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A88"))) PPC_WEAK_FUNC(sub_83B80A88);
PPC_FUNC_IMPL(__imp__sub_83B80A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80A94"))) PPC_WEAK_FUNC(sub_83B80A94);
PPC_FUNC_IMPL(__imp__sub_83B80A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80A98"))) PPC_WEAK_FUNC(sub_83B80A98);
PPC_FUNC_IMPL(__imp__sub_83B80A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26688
	ctx.r3.s64 = ctx.r11.s64 + -26688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80AA4"))) PPC_WEAK_FUNC(sub_83B80AA4);
PPC_FUNC_IMPL(__imp__sub_83B80AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80AA8"))) PPC_WEAK_FUNC(sub_83B80AA8);
PPC_FUNC_IMPL(__imp__sub_83B80AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26680
	ctx.r3.s64 = ctx.r11.s64 + -26680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80AB4"))) PPC_WEAK_FUNC(sub_83B80AB4);
PPC_FUNC_IMPL(__imp__sub_83B80AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80AB8"))) PPC_WEAK_FUNC(sub_83B80AB8);
PPC_FUNC_IMPL(__imp__sub_83B80AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13396
	ctx.r7.s64 = ctx.r8.s64 + -13396;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13396(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13396);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13396, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80AE0"))) PPC_WEAK_FUNC(sub_83B80AE0);
PPC_FUNC_IMPL(__imp__sub_83B80AE0) {
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
	// addi r3,r11,-13400
	ctx.r3.s64 = ctx.r11.s64 + -13400;
	// bl 0x83523120
	ctx.lr = 0x83B80AF8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-26672
	ctx.r3.s64 = ctx.r10.s64 + -26672;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80B04;
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

__attribute__((alias("__imp__sub_83B80B14"))) PPC_WEAK_FUNC(sub_83B80B14);
PPC_FUNC_IMPL(__imp__sub_83B80B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B18"))) PPC_WEAK_FUNC(sub_83B80B18);
PPC_FUNC_IMPL(__imp__sub_83B80B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26656
	ctx.r3.s64 = ctx.r11.s64 + -26656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80B24"))) PPC_WEAK_FUNC(sub_83B80B24);
PPC_FUNC_IMPL(__imp__sub_83B80B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B28"))) PPC_WEAK_FUNC(sub_83B80B28);
PPC_FUNC_IMPL(__imp__sub_83B80B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26648
	ctx.r3.s64 = ctx.r11.s64 + -26648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80B34"))) PPC_WEAK_FUNC(sub_83B80B34);
PPC_FUNC_IMPL(__imp__sub_83B80B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B38"))) PPC_WEAK_FUNC(sub_83B80B38);
PPC_FUNC_IMPL(__imp__sub_83B80B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26640
	ctx.r3.s64 = ctx.r11.s64 + -26640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80B44"))) PPC_WEAK_FUNC(sub_83B80B44);
PPC_FUNC_IMPL(__imp__sub_83B80B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B48"))) PPC_WEAK_FUNC(sub_83B80B48);
PPC_FUNC_IMPL(__imp__sub_83B80B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26632
	ctx.r3.s64 = ctx.r11.s64 + -26632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80B54"))) PPC_WEAK_FUNC(sub_83B80B54);
PPC_FUNC_IMPL(__imp__sub_83B80B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B58"))) PPC_WEAK_FUNC(sub_83B80B58);
PPC_FUNC_IMPL(__imp__sub_83B80B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26624
	ctx.r3.s64 = ctx.r11.s64 + -26624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80B64"))) PPC_WEAK_FUNC(sub_83B80B64);
PPC_FUNC_IMPL(__imp__sub_83B80B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B68"))) PPC_WEAK_FUNC(sub_83B80B68);
PPC_FUNC_IMPL(__imp__sub_83B80B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26616
	ctx.r3.s64 = ctx.r11.s64 + -26616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80B74"))) PPC_WEAK_FUNC(sub_83B80B74);
PPC_FUNC_IMPL(__imp__sub_83B80B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B78"))) PPC_WEAK_FUNC(sub_83B80B78);
PPC_FUNC_IMPL(__imp__sub_83B80B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26608
	ctx.r3.s64 = ctx.r11.s64 + -26608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80B84"))) PPC_WEAK_FUNC(sub_83B80B84);
PPC_FUNC_IMPL(__imp__sub_83B80B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B88"))) PPC_WEAK_FUNC(sub_83B80B88);
PPC_FUNC_IMPL(__imp__sub_83B80B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26600
	ctx.r3.s64 = ctx.r11.s64 + -26600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80B94"))) PPC_WEAK_FUNC(sub_83B80B94);
PPC_FUNC_IMPL(__imp__sub_83B80B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80B98"))) PPC_WEAK_FUNC(sub_83B80B98);
PPC_FUNC_IMPL(__imp__sub_83B80B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26592
	ctx.r3.s64 = ctx.r11.s64 + -26592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80BA4"))) PPC_WEAK_FUNC(sub_83B80BA4);
PPC_FUNC_IMPL(__imp__sub_83B80BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80BA8"))) PPC_WEAK_FUNC(sub_83B80BA8);
PPC_FUNC_IMPL(__imp__sub_83B80BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26584
	ctx.r3.s64 = ctx.r11.s64 + -26584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80BB4"))) PPC_WEAK_FUNC(sub_83B80BB4);
PPC_FUNC_IMPL(__imp__sub_83B80BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80BB8"))) PPC_WEAK_FUNC(sub_83B80BB8);
PPC_FUNC_IMPL(__imp__sub_83B80BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26576
	ctx.r3.s64 = ctx.r11.s64 + -26576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80BC4"))) PPC_WEAK_FUNC(sub_83B80BC4);
PPC_FUNC_IMPL(__imp__sub_83B80BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80BC8"))) PPC_WEAK_FUNC(sub_83B80BC8);
PPC_FUNC_IMPL(__imp__sub_83B80BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26568
	ctx.r3.s64 = ctx.r11.s64 + -26568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80BD4"))) PPC_WEAK_FUNC(sub_83B80BD4);
PPC_FUNC_IMPL(__imp__sub_83B80BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80BD8"))) PPC_WEAK_FUNC(sub_83B80BD8);
PPC_FUNC_IMPL(__imp__sub_83B80BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13268
	ctx.r7.s64 = ctx.r8.s64 + -13268;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13268);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13268, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80C00"))) PPC_WEAK_FUNC(sub_83B80C00);
PPC_FUNC_IMPL(__imp__sub_83B80C00) {
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
	// addi r3,r11,-13272
	ctx.r3.s64 = ctx.r11.s64 + -13272;
	// bl 0x83523120
	ctx.lr = 0x83B80C18;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-26560
	ctx.r3.s64 = ctx.r10.s64 + -26560;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80C24;
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

__attribute__((alias("__imp__sub_83B80C34"))) PPC_WEAK_FUNC(sub_83B80C34);
PPC_FUNC_IMPL(__imp__sub_83B80C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80C38"))) PPC_WEAK_FUNC(sub_83B80C38);
PPC_FUNC_IMPL(__imp__sub_83B80C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26544
	ctx.r3.s64 = ctx.r11.s64 + -26544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80C44"))) PPC_WEAK_FUNC(sub_83B80C44);
PPC_FUNC_IMPL(__imp__sub_83B80C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80C48"))) PPC_WEAK_FUNC(sub_83B80C48);
PPC_FUNC_IMPL(__imp__sub_83B80C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26536
	ctx.r3.s64 = ctx.r11.s64 + -26536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80C54"))) PPC_WEAK_FUNC(sub_83B80C54);
PPC_FUNC_IMPL(__imp__sub_83B80C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80C58"))) PPC_WEAK_FUNC(sub_83B80C58);
PPC_FUNC_IMPL(__imp__sub_83B80C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26528
	ctx.r3.s64 = ctx.r11.s64 + -26528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80C64"))) PPC_WEAK_FUNC(sub_83B80C64);
PPC_FUNC_IMPL(__imp__sub_83B80C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80C68"))) PPC_WEAK_FUNC(sub_83B80C68);
PPC_FUNC_IMPL(__imp__sub_83B80C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80C74"))) PPC_WEAK_FUNC(sub_83B80C74);
PPC_FUNC_IMPL(__imp__sub_83B80C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80C78"))) PPC_WEAK_FUNC(sub_83B80C78);
PPC_FUNC_IMPL(__imp__sub_83B80C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26512
	ctx.r3.s64 = ctx.r11.s64 + -26512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80C84"))) PPC_WEAK_FUNC(sub_83B80C84);
PPC_FUNC_IMPL(__imp__sub_83B80C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80C88"))) PPC_WEAK_FUNC(sub_83B80C88);
PPC_FUNC_IMPL(__imp__sub_83B80C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26504
	ctx.r3.s64 = ctx.r11.s64 + -26504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80C94"))) PPC_WEAK_FUNC(sub_83B80C94);
PPC_FUNC_IMPL(__imp__sub_83B80C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80C98"))) PPC_WEAK_FUNC(sub_83B80C98);
PPC_FUNC_IMPL(__imp__sub_83B80C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26496
	ctx.r3.s64 = ctx.r11.s64 + -26496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80CA4"))) PPC_WEAK_FUNC(sub_83B80CA4);
PPC_FUNC_IMPL(__imp__sub_83B80CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80CA8"))) PPC_WEAK_FUNC(sub_83B80CA8);
PPC_FUNC_IMPL(__imp__sub_83B80CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26488
	ctx.r3.s64 = ctx.r11.s64 + -26488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80CB4"))) PPC_WEAK_FUNC(sub_83B80CB4);
PPC_FUNC_IMPL(__imp__sub_83B80CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80CB8"))) PPC_WEAK_FUNC(sub_83B80CB8);
PPC_FUNC_IMPL(__imp__sub_83B80CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26480
	ctx.r3.s64 = ctx.r11.s64 + -26480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80CC4"))) PPC_WEAK_FUNC(sub_83B80CC4);
PPC_FUNC_IMPL(__imp__sub_83B80CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80CC8"))) PPC_WEAK_FUNC(sub_83B80CC8);
PPC_FUNC_IMPL(__imp__sub_83B80CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26472
	ctx.r3.s64 = ctx.r11.s64 + -26472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80CD4"))) PPC_WEAK_FUNC(sub_83B80CD4);
PPC_FUNC_IMPL(__imp__sub_83B80CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80CD8"))) PPC_WEAK_FUNC(sub_83B80CD8);
PPC_FUNC_IMPL(__imp__sub_83B80CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26464
	ctx.r3.s64 = ctx.r11.s64 + -26464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80CE4"))) PPC_WEAK_FUNC(sub_83B80CE4);
PPC_FUNC_IMPL(__imp__sub_83B80CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80CE8"))) PPC_WEAK_FUNC(sub_83B80CE8);
PPC_FUNC_IMPL(__imp__sub_83B80CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26456
	ctx.r3.s64 = ctx.r11.s64 + -26456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80CF4"))) PPC_WEAK_FUNC(sub_83B80CF4);
PPC_FUNC_IMPL(__imp__sub_83B80CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80CF8"))) PPC_WEAK_FUNC(sub_83B80CF8);
PPC_FUNC_IMPL(__imp__sub_83B80CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13256
	ctx.r7.s64 = ctx.r8.s64 + -13256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80D20"))) PPC_WEAK_FUNC(sub_83B80D20);
PPC_FUNC_IMPL(__imp__sub_83B80D20) {
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
	// addi r3,r11,-13260
	ctx.r3.s64 = ctx.r11.s64 + -13260;
	// bl 0x83523120
	ctx.lr = 0x83B80D38;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-26448
	ctx.r3.s64 = ctx.r10.s64 + -26448;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80D44;
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

__attribute__((alias("__imp__sub_83B80D54"))) PPC_WEAK_FUNC(sub_83B80D54);
PPC_FUNC_IMPL(__imp__sub_83B80D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80D58"))) PPC_WEAK_FUNC(sub_83B80D58);
PPC_FUNC_IMPL(__imp__sub_83B80D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80D64"))) PPC_WEAK_FUNC(sub_83B80D64);
PPC_FUNC_IMPL(__imp__sub_83B80D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80D68"))) PPC_WEAK_FUNC(sub_83B80D68);
PPC_FUNC_IMPL(__imp__sub_83B80D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26424
	ctx.r3.s64 = ctx.r11.s64 + -26424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80D74"))) PPC_WEAK_FUNC(sub_83B80D74);
PPC_FUNC_IMPL(__imp__sub_83B80D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80D78"))) PPC_WEAK_FUNC(sub_83B80D78);
PPC_FUNC_IMPL(__imp__sub_83B80D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26416
	ctx.r3.s64 = ctx.r11.s64 + -26416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80D84"))) PPC_WEAK_FUNC(sub_83B80D84);
PPC_FUNC_IMPL(__imp__sub_83B80D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80D88"))) PPC_WEAK_FUNC(sub_83B80D88);
PPC_FUNC_IMPL(__imp__sub_83B80D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26408
	ctx.r3.s64 = ctx.r11.s64 + -26408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80D94"))) PPC_WEAK_FUNC(sub_83B80D94);
PPC_FUNC_IMPL(__imp__sub_83B80D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80D98"))) PPC_WEAK_FUNC(sub_83B80D98);
PPC_FUNC_IMPL(__imp__sub_83B80D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26400
	ctx.r3.s64 = ctx.r11.s64 + -26400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80DA4"))) PPC_WEAK_FUNC(sub_83B80DA4);
PPC_FUNC_IMPL(__imp__sub_83B80DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80DA8"))) PPC_WEAK_FUNC(sub_83B80DA8);
PPC_FUNC_IMPL(__imp__sub_83B80DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26392
	ctx.r3.s64 = ctx.r11.s64 + -26392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80DB4"))) PPC_WEAK_FUNC(sub_83B80DB4);
PPC_FUNC_IMPL(__imp__sub_83B80DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80DB8"))) PPC_WEAK_FUNC(sub_83B80DB8);
PPC_FUNC_IMPL(__imp__sub_83B80DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26384
	ctx.r3.s64 = ctx.r11.s64 + -26384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80DC4"))) PPC_WEAK_FUNC(sub_83B80DC4);
PPC_FUNC_IMPL(__imp__sub_83B80DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80DC8"))) PPC_WEAK_FUNC(sub_83B80DC8);
PPC_FUNC_IMPL(__imp__sub_83B80DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26376
	ctx.r3.s64 = ctx.r11.s64 + -26376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80DD4"))) PPC_WEAK_FUNC(sub_83B80DD4);
PPC_FUNC_IMPL(__imp__sub_83B80DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80DD8"))) PPC_WEAK_FUNC(sub_83B80DD8);
PPC_FUNC_IMPL(__imp__sub_83B80DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26368
	ctx.r3.s64 = ctx.r11.s64 + -26368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80DE4"))) PPC_WEAK_FUNC(sub_83B80DE4);
PPC_FUNC_IMPL(__imp__sub_83B80DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80DE8"))) PPC_WEAK_FUNC(sub_83B80DE8);
PPC_FUNC_IMPL(__imp__sub_83B80DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26360
	ctx.r3.s64 = ctx.r11.s64 + -26360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80DF4"))) PPC_WEAK_FUNC(sub_83B80DF4);
PPC_FUNC_IMPL(__imp__sub_83B80DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80DF8"))) PPC_WEAK_FUNC(sub_83B80DF8);
PPC_FUNC_IMPL(__imp__sub_83B80DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26352
	ctx.r3.s64 = ctx.r11.s64 + -26352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80E04"))) PPC_WEAK_FUNC(sub_83B80E04);
PPC_FUNC_IMPL(__imp__sub_83B80E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80E08"))) PPC_WEAK_FUNC(sub_83B80E08);
PPC_FUNC_IMPL(__imp__sub_83B80E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26344
	ctx.r3.s64 = ctx.r11.s64 + -26344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80E14"))) PPC_WEAK_FUNC(sub_83B80E14);
PPC_FUNC_IMPL(__imp__sub_83B80E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80E18"))) PPC_WEAK_FUNC(sub_83B80E18);
PPC_FUNC_IMPL(__imp__sub_83B80E18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13244
	ctx.r7.s64 = ctx.r8.s64 + -13244;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13244(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13244);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13244, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80E40"))) PPC_WEAK_FUNC(sub_83B80E40);
PPC_FUNC_IMPL(__imp__sub_83B80E40) {
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
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// bl 0x83523120
	ctx.lr = 0x83B80E58;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-26336
	ctx.r3.s64 = ctx.r10.s64 + -26336;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80E64;
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

__attribute__((alias("__imp__sub_83B80E74"))) PPC_WEAK_FUNC(sub_83B80E74);
PPC_FUNC_IMPL(__imp__sub_83B80E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80E78"))) PPC_WEAK_FUNC(sub_83B80E78);
PPC_FUNC_IMPL(__imp__sub_83B80E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26320
	ctx.r3.s64 = ctx.r11.s64 + -26320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80E84"))) PPC_WEAK_FUNC(sub_83B80E84);
PPC_FUNC_IMPL(__imp__sub_83B80E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80E88"))) PPC_WEAK_FUNC(sub_83B80E88);
PPC_FUNC_IMPL(__imp__sub_83B80E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26312
	ctx.r3.s64 = ctx.r11.s64 + -26312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80E94"))) PPC_WEAK_FUNC(sub_83B80E94);
PPC_FUNC_IMPL(__imp__sub_83B80E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80E98"))) PPC_WEAK_FUNC(sub_83B80E98);
PPC_FUNC_IMPL(__imp__sub_83B80E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26304
	ctx.r3.s64 = ctx.r11.s64 + -26304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80EA4"))) PPC_WEAK_FUNC(sub_83B80EA4);
PPC_FUNC_IMPL(__imp__sub_83B80EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80EA8"))) PPC_WEAK_FUNC(sub_83B80EA8);
PPC_FUNC_IMPL(__imp__sub_83B80EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26296
	ctx.r3.s64 = ctx.r11.s64 + -26296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80EB4"))) PPC_WEAK_FUNC(sub_83B80EB4);
PPC_FUNC_IMPL(__imp__sub_83B80EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80EB8"))) PPC_WEAK_FUNC(sub_83B80EB8);
PPC_FUNC_IMPL(__imp__sub_83B80EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26288
	ctx.r3.s64 = ctx.r11.s64 + -26288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80EC4"))) PPC_WEAK_FUNC(sub_83B80EC4);
PPC_FUNC_IMPL(__imp__sub_83B80EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80EC8"))) PPC_WEAK_FUNC(sub_83B80EC8);
PPC_FUNC_IMPL(__imp__sub_83B80EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26280
	ctx.r3.s64 = ctx.r11.s64 + -26280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80ED4"))) PPC_WEAK_FUNC(sub_83B80ED4);
PPC_FUNC_IMPL(__imp__sub_83B80ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80ED8"))) PPC_WEAK_FUNC(sub_83B80ED8);
PPC_FUNC_IMPL(__imp__sub_83B80ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26272
	ctx.r3.s64 = ctx.r11.s64 + -26272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80EE4"))) PPC_WEAK_FUNC(sub_83B80EE4);
PPC_FUNC_IMPL(__imp__sub_83B80EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80EE8"))) PPC_WEAK_FUNC(sub_83B80EE8);
PPC_FUNC_IMPL(__imp__sub_83B80EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80EF4"))) PPC_WEAK_FUNC(sub_83B80EF4);
PPC_FUNC_IMPL(__imp__sub_83B80EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80EF8"))) PPC_WEAK_FUNC(sub_83B80EF8);
PPC_FUNC_IMPL(__imp__sub_83B80EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26256
	ctx.r3.s64 = ctx.r11.s64 + -26256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80F04"))) PPC_WEAK_FUNC(sub_83B80F04);
PPC_FUNC_IMPL(__imp__sub_83B80F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80F08"))) PPC_WEAK_FUNC(sub_83B80F08);
PPC_FUNC_IMPL(__imp__sub_83B80F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26248
	ctx.r3.s64 = ctx.r11.s64 + -26248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80F14"))) PPC_WEAK_FUNC(sub_83B80F14);
PPC_FUNC_IMPL(__imp__sub_83B80F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80F18"))) PPC_WEAK_FUNC(sub_83B80F18);
PPC_FUNC_IMPL(__imp__sub_83B80F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26240
	ctx.r3.s64 = ctx.r11.s64 + -26240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80F24"))) PPC_WEAK_FUNC(sub_83B80F24);
PPC_FUNC_IMPL(__imp__sub_83B80F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80F28"))) PPC_WEAK_FUNC(sub_83B80F28);
PPC_FUNC_IMPL(__imp__sub_83B80F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26232
	ctx.r3.s64 = ctx.r11.s64 + -26232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80F34"))) PPC_WEAK_FUNC(sub_83B80F34);
PPC_FUNC_IMPL(__imp__sub_83B80F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80F38"))) PPC_WEAK_FUNC(sub_83B80F38);
PPC_FUNC_IMPL(__imp__sub_83B80F38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13232
	ctx.r7.s64 = ctx.r8.s64 + -13232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13232);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13232(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13232, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B80F60"))) PPC_WEAK_FUNC(sub_83B80F60);
PPC_FUNC_IMPL(__imp__sub_83B80F60) {
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
	// addi r3,r11,-13236
	ctx.r3.s64 = ctx.r11.s64 + -13236;
	// bl 0x83523120
	ctx.lr = 0x83B80F78;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-26224
	ctx.r3.s64 = ctx.r10.s64 + -26224;
	// bl 0x831cdcc8
	ctx.lr = 0x83B80F84;
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

__attribute__((alias("__imp__sub_83B80F94"))) PPC_WEAK_FUNC(sub_83B80F94);
PPC_FUNC_IMPL(__imp__sub_83B80F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80F98"))) PPC_WEAK_FUNC(sub_83B80F98);
PPC_FUNC_IMPL(__imp__sub_83B80F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26208
	ctx.r3.s64 = ctx.r11.s64 + -26208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80FA4"))) PPC_WEAK_FUNC(sub_83B80FA4);
PPC_FUNC_IMPL(__imp__sub_83B80FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80FA8"))) PPC_WEAK_FUNC(sub_83B80FA8);
PPC_FUNC_IMPL(__imp__sub_83B80FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26200
	ctx.r3.s64 = ctx.r11.s64 + -26200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80FB4"))) PPC_WEAK_FUNC(sub_83B80FB4);
PPC_FUNC_IMPL(__imp__sub_83B80FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80FB8"))) PPC_WEAK_FUNC(sub_83B80FB8);
PPC_FUNC_IMPL(__imp__sub_83B80FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26192
	ctx.r3.s64 = ctx.r11.s64 + -26192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80FC4"))) PPC_WEAK_FUNC(sub_83B80FC4);
PPC_FUNC_IMPL(__imp__sub_83B80FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80FC8"))) PPC_WEAK_FUNC(sub_83B80FC8);
PPC_FUNC_IMPL(__imp__sub_83B80FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26184
	ctx.r3.s64 = ctx.r11.s64 + -26184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80FD4"))) PPC_WEAK_FUNC(sub_83B80FD4);
PPC_FUNC_IMPL(__imp__sub_83B80FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80FD8"))) PPC_WEAK_FUNC(sub_83B80FD8);
PPC_FUNC_IMPL(__imp__sub_83B80FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26176
	ctx.r3.s64 = ctx.r11.s64 + -26176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80FE4"))) PPC_WEAK_FUNC(sub_83B80FE4);
PPC_FUNC_IMPL(__imp__sub_83B80FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80FE8"))) PPC_WEAK_FUNC(sub_83B80FE8);
PPC_FUNC_IMPL(__imp__sub_83B80FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26168
	ctx.r3.s64 = ctx.r11.s64 + -26168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B80FF4"))) PPC_WEAK_FUNC(sub_83B80FF4);
PPC_FUNC_IMPL(__imp__sub_83B80FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B80FF8"))) PPC_WEAK_FUNC(sub_83B80FF8);
PPC_FUNC_IMPL(__imp__sub_83B80FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26160
	ctx.r3.s64 = ctx.r11.s64 + -26160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81004"))) PPC_WEAK_FUNC(sub_83B81004);
PPC_FUNC_IMPL(__imp__sub_83B81004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81008"))) PPC_WEAK_FUNC(sub_83B81008);
PPC_FUNC_IMPL(__imp__sub_83B81008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26152
	ctx.r3.s64 = ctx.r11.s64 + -26152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81014"))) PPC_WEAK_FUNC(sub_83B81014);
PPC_FUNC_IMPL(__imp__sub_83B81014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81018"))) PPC_WEAK_FUNC(sub_83B81018);
PPC_FUNC_IMPL(__imp__sub_83B81018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26144
	ctx.r3.s64 = ctx.r11.s64 + -26144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81024"))) PPC_WEAK_FUNC(sub_83B81024);
PPC_FUNC_IMPL(__imp__sub_83B81024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81028"))) PPC_WEAK_FUNC(sub_83B81028);
PPC_FUNC_IMPL(__imp__sub_83B81028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26136
	ctx.r3.s64 = ctx.r11.s64 + -26136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81034"))) PPC_WEAK_FUNC(sub_83B81034);
PPC_FUNC_IMPL(__imp__sub_83B81034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81038"))) PPC_WEAK_FUNC(sub_83B81038);
PPC_FUNC_IMPL(__imp__sub_83B81038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26128
	ctx.r3.s64 = ctx.r11.s64 + -26128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81044"))) PPC_WEAK_FUNC(sub_83B81044);
PPC_FUNC_IMPL(__imp__sub_83B81044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81048"))) PPC_WEAK_FUNC(sub_83B81048);
PPC_FUNC_IMPL(__imp__sub_83B81048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-26120
	ctx.r3.s64 = ctx.r11.s64 + -26120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81054"))) PPC_WEAK_FUNC(sub_83B81054);
PPC_FUNC_IMPL(__imp__sub_83B81054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81058"))) PPC_WEAK_FUNC(sub_83B81058);
PPC_FUNC_IMPL(__imp__sub_83B81058) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13220
	ctx.r7.s64 = ctx.r8.s64 + -13220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13220(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13220);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13220(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13220, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B81080"))) PPC_WEAK_FUNC(sub_83B81080);
PPC_FUNC_IMPL(__imp__sub_83B81080) {
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
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// bl 0x83523120
	ctx.lr = 0x83B81098;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-26112
	ctx.r3.s64 = ctx.r10.s64 + -26112;
	// bl 0x831cdcc8
	ctx.lr = 0x83B810A4;
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

__attribute__((alias("__imp__sub_83B810B4"))) PPC_WEAK_FUNC(sub_83B810B4);
PPC_FUNC_IMPL(__imp__sub_83B810B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

