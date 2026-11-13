#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B7571C"))) PPC_WEAK_FUNC(sub_83B7571C);
PPC_FUNC_IMPL(__imp__sub_83B7571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75720"))) PPC_WEAK_FUNC(sub_83B75720);
PPC_FUNC_IMPL(__imp__sub_83B75720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7572C"))) PPC_WEAK_FUNC(sub_83B7572C);
PPC_FUNC_IMPL(__imp__sub_83B7572C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75730"))) PPC_WEAK_FUNC(sub_83B75730);
PPC_FUNC_IMPL(__imp__sub_83B75730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23560
	ctx.r3.s64 = ctx.r11.s64 + 23560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7573C"))) PPC_WEAK_FUNC(sub_83B7573C);
PPC_FUNC_IMPL(__imp__sub_83B7573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75740"))) PPC_WEAK_FUNC(sub_83B75740);
PPC_FUNC_IMPL(__imp__sub_83B75740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23568
	ctx.r3.s64 = ctx.r11.s64 + 23568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7574C"))) PPC_WEAK_FUNC(sub_83B7574C);
PPC_FUNC_IMPL(__imp__sub_83B7574C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75750"))) PPC_WEAK_FUNC(sub_83B75750);
PPC_FUNC_IMPL(__imp__sub_83B75750) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15144
	ctx.r7.s64 = ctx.r8.s64 + -15144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B75778"))) PPC_WEAK_FUNC(sub_83B75778);
PPC_FUNC_IMPL(__imp__sub_83B75778) {
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
	// addi r3,r11,-15148
	ctx.r3.s64 = ctx.r11.s64 + -15148;
	// bl 0x83523120
	ctx.lr = 0x83B75790;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,23576
	ctx.r3.s64 = ctx.r10.s64 + 23576;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7579C;
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

__attribute__((alias("__imp__sub_83B757AC"))) PPC_WEAK_FUNC(sub_83B757AC);
PPC_FUNC_IMPL(__imp__sub_83B757AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B757B0"))) PPC_WEAK_FUNC(sub_83B757B0);
PPC_FUNC_IMPL(__imp__sub_83B757B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23592
	ctx.r3.s64 = ctx.r11.s64 + 23592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B757BC"))) PPC_WEAK_FUNC(sub_83B757BC);
PPC_FUNC_IMPL(__imp__sub_83B757BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B757C0"))) PPC_WEAK_FUNC(sub_83B757C0);
PPC_FUNC_IMPL(__imp__sub_83B757C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23600
	ctx.r3.s64 = ctx.r11.s64 + 23600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B757CC"))) PPC_WEAK_FUNC(sub_83B757CC);
PPC_FUNC_IMPL(__imp__sub_83B757CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B757D0"))) PPC_WEAK_FUNC(sub_83B757D0);
PPC_FUNC_IMPL(__imp__sub_83B757D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23608
	ctx.r3.s64 = ctx.r11.s64 + 23608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B757DC"))) PPC_WEAK_FUNC(sub_83B757DC);
PPC_FUNC_IMPL(__imp__sub_83B757DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B757E0"))) PPC_WEAK_FUNC(sub_83B757E0);
PPC_FUNC_IMPL(__imp__sub_83B757E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23616
	ctx.r3.s64 = ctx.r11.s64 + 23616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B757EC"))) PPC_WEAK_FUNC(sub_83B757EC);
PPC_FUNC_IMPL(__imp__sub_83B757EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B757F0"))) PPC_WEAK_FUNC(sub_83B757F0);
PPC_FUNC_IMPL(__imp__sub_83B757F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23624
	ctx.r3.s64 = ctx.r11.s64 + 23624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B757FC"))) PPC_WEAK_FUNC(sub_83B757FC);
PPC_FUNC_IMPL(__imp__sub_83B757FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75800"))) PPC_WEAK_FUNC(sub_83B75800);
PPC_FUNC_IMPL(__imp__sub_83B75800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23632
	ctx.r3.s64 = ctx.r11.s64 + 23632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7580C"))) PPC_WEAK_FUNC(sub_83B7580C);
PPC_FUNC_IMPL(__imp__sub_83B7580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75810"))) PPC_WEAK_FUNC(sub_83B75810);
PPC_FUNC_IMPL(__imp__sub_83B75810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23640
	ctx.r3.s64 = ctx.r11.s64 + 23640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7581C"))) PPC_WEAK_FUNC(sub_83B7581C);
PPC_FUNC_IMPL(__imp__sub_83B7581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75820"))) PPC_WEAK_FUNC(sub_83B75820);
PPC_FUNC_IMPL(__imp__sub_83B75820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23648
	ctx.r3.s64 = ctx.r11.s64 + 23648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7582C"))) PPC_WEAK_FUNC(sub_83B7582C);
PPC_FUNC_IMPL(__imp__sub_83B7582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75830"))) PPC_WEAK_FUNC(sub_83B75830);
PPC_FUNC_IMPL(__imp__sub_83B75830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23656
	ctx.r3.s64 = ctx.r11.s64 + 23656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7583C"))) PPC_WEAK_FUNC(sub_83B7583C);
PPC_FUNC_IMPL(__imp__sub_83B7583C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75840"))) PPC_WEAK_FUNC(sub_83B75840);
PPC_FUNC_IMPL(__imp__sub_83B75840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7584C"))) PPC_WEAK_FUNC(sub_83B7584C);
PPC_FUNC_IMPL(__imp__sub_83B7584C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75850"))) PPC_WEAK_FUNC(sub_83B75850);
PPC_FUNC_IMPL(__imp__sub_83B75850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23672
	ctx.r3.s64 = ctx.r11.s64 + 23672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7585C"))) PPC_WEAK_FUNC(sub_83B7585C);
PPC_FUNC_IMPL(__imp__sub_83B7585C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75860"))) PPC_WEAK_FUNC(sub_83B75860);
PPC_FUNC_IMPL(__imp__sub_83B75860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23680
	ctx.r3.s64 = ctx.r11.s64 + 23680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7586C"))) PPC_WEAK_FUNC(sub_83B7586C);
PPC_FUNC_IMPL(__imp__sub_83B7586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75870"))) PPC_WEAK_FUNC(sub_83B75870);
PPC_FUNC_IMPL(__imp__sub_83B75870) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15132
	ctx.r7.s64 = ctx.r8.s64 + -15132;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15132);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15132(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15132, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B75898"))) PPC_WEAK_FUNC(sub_83B75898);
PPC_FUNC_IMPL(__imp__sub_83B75898) {
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
	// addi r3,r11,-15136
	ctx.r3.s64 = ctx.r11.s64 + -15136;
	// bl 0x83523120
	ctx.lr = 0x83B758B0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,23688
	ctx.r3.s64 = ctx.r10.s64 + 23688;
	// bl 0x831cdcc8
	ctx.lr = 0x83B758BC;
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

__attribute__((alias("__imp__sub_83B758CC"))) PPC_WEAK_FUNC(sub_83B758CC);
PPC_FUNC_IMPL(__imp__sub_83B758CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B758D0"))) PPC_WEAK_FUNC(sub_83B758D0);
PPC_FUNC_IMPL(__imp__sub_83B758D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23704
	ctx.r3.s64 = ctx.r11.s64 + 23704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B758DC"))) PPC_WEAK_FUNC(sub_83B758DC);
PPC_FUNC_IMPL(__imp__sub_83B758DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B758E0"))) PPC_WEAK_FUNC(sub_83B758E0);
PPC_FUNC_IMPL(__imp__sub_83B758E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B758EC"))) PPC_WEAK_FUNC(sub_83B758EC);
PPC_FUNC_IMPL(__imp__sub_83B758EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B758F0"))) PPC_WEAK_FUNC(sub_83B758F0);
PPC_FUNC_IMPL(__imp__sub_83B758F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23720
	ctx.r3.s64 = ctx.r11.s64 + 23720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B758FC"))) PPC_WEAK_FUNC(sub_83B758FC);
PPC_FUNC_IMPL(__imp__sub_83B758FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75900"))) PPC_WEAK_FUNC(sub_83B75900);
PPC_FUNC_IMPL(__imp__sub_83B75900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23728
	ctx.r3.s64 = ctx.r11.s64 + 23728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7590C"))) PPC_WEAK_FUNC(sub_83B7590C);
PPC_FUNC_IMPL(__imp__sub_83B7590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75910"))) PPC_WEAK_FUNC(sub_83B75910);
PPC_FUNC_IMPL(__imp__sub_83B75910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23736
	ctx.r3.s64 = ctx.r11.s64 + 23736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7591C"))) PPC_WEAK_FUNC(sub_83B7591C);
PPC_FUNC_IMPL(__imp__sub_83B7591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75920"))) PPC_WEAK_FUNC(sub_83B75920);
PPC_FUNC_IMPL(__imp__sub_83B75920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7592C"))) PPC_WEAK_FUNC(sub_83B7592C);
PPC_FUNC_IMPL(__imp__sub_83B7592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75930"))) PPC_WEAK_FUNC(sub_83B75930);
PPC_FUNC_IMPL(__imp__sub_83B75930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23752
	ctx.r3.s64 = ctx.r11.s64 + 23752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7593C"))) PPC_WEAK_FUNC(sub_83B7593C);
PPC_FUNC_IMPL(__imp__sub_83B7593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75940"))) PPC_WEAK_FUNC(sub_83B75940);
PPC_FUNC_IMPL(__imp__sub_83B75940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23760
	ctx.r3.s64 = ctx.r11.s64 + 23760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7594C"))) PPC_WEAK_FUNC(sub_83B7594C);
PPC_FUNC_IMPL(__imp__sub_83B7594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75950"))) PPC_WEAK_FUNC(sub_83B75950);
PPC_FUNC_IMPL(__imp__sub_83B75950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7595C"))) PPC_WEAK_FUNC(sub_83B7595C);
PPC_FUNC_IMPL(__imp__sub_83B7595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75960"))) PPC_WEAK_FUNC(sub_83B75960);
PPC_FUNC_IMPL(__imp__sub_83B75960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23776
	ctx.r3.s64 = ctx.r11.s64 + 23776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7596C"))) PPC_WEAK_FUNC(sub_83B7596C);
PPC_FUNC_IMPL(__imp__sub_83B7596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75970"))) PPC_WEAK_FUNC(sub_83B75970);
PPC_FUNC_IMPL(__imp__sub_83B75970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7597C"))) PPC_WEAK_FUNC(sub_83B7597C);
PPC_FUNC_IMPL(__imp__sub_83B7597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75980"))) PPC_WEAK_FUNC(sub_83B75980);
PPC_FUNC_IMPL(__imp__sub_83B75980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23792
	ctx.r3.s64 = ctx.r11.s64 + 23792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7598C"))) PPC_WEAK_FUNC(sub_83B7598C);
PPC_FUNC_IMPL(__imp__sub_83B7598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75990"))) PPC_WEAK_FUNC(sub_83B75990);
PPC_FUNC_IMPL(__imp__sub_83B75990) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15120
	ctx.r7.s64 = ctx.r8.s64 + -15120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15120(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B759B8"))) PPC_WEAK_FUNC(sub_83B759B8);
PPC_FUNC_IMPL(__imp__sub_83B759B8) {
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
	// addi r3,r11,-15124
	ctx.r3.s64 = ctx.r11.s64 + -15124;
	// bl 0x83523120
	ctx.lr = 0x83B759D0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,23800
	ctx.r3.s64 = ctx.r10.s64 + 23800;
	// bl 0x831cdcc8
	ctx.lr = 0x83B759DC;
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

__attribute__((alias("__imp__sub_83B759EC"))) PPC_WEAK_FUNC(sub_83B759EC);
PPC_FUNC_IMPL(__imp__sub_83B759EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B759F0"))) PPC_WEAK_FUNC(sub_83B759F0);
PPC_FUNC_IMPL(__imp__sub_83B759F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23816
	ctx.r3.s64 = ctx.r11.s64 + 23816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B759FC"))) PPC_WEAK_FUNC(sub_83B759FC);
PPC_FUNC_IMPL(__imp__sub_83B759FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A00"))) PPC_WEAK_FUNC(sub_83B75A00);
PPC_FUNC_IMPL(__imp__sub_83B75A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A0C"))) PPC_WEAK_FUNC(sub_83B75A0C);
PPC_FUNC_IMPL(__imp__sub_83B75A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A10"))) PPC_WEAK_FUNC(sub_83B75A10);
PPC_FUNC_IMPL(__imp__sub_83B75A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23832
	ctx.r3.s64 = ctx.r11.s64 + 23832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A1C"))) PPC_WEAK_FUNC(sub_83B75A1C);
PPC_FUNC_IMPL(__imp__sub_83B75A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A20"))) PPC_WEAK_FUNC(sub_83B75A20);
PPC_FUNC_IMPL(__imp__sub_83B75A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23840
	ctx.r3.s64 = ctx.r11.s64 + 23840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A2C"))) PPC_WEAK_FUNC(sub_83B75A2C);
PPC_FUNC_IMPL(__imp__sub_83B75A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A30"))) PPC_WEAK_FUNC(sub_83B75A30);
PPC_FUNC_IMPL(__imp__sub_83B75A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23848
	ctx.r3.s64 = ctx.r11.s64 + 23848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A3C"))) PPC_WEAK_FUNC(sub_83B75A3C);
PPC_FUNC_IMPL(__imp__sub_83B75A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A40"))) PPC_WEAK_FUNC(sub_83B75A40);
PPC_FUNC_IMPL(__imp__sub_83B75A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A4C"))) PPC_WEAK_FUNC(sub_83B75A4C);
PPC_FUNC_IMPL(__imp__sub_83B75A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A50"))) PPC_WEAK_FUNC(sub_83B75A50);
PPC_FUNC_IMPL(__imp__sub_83B75A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23864
	ctx.r3.s64 = ctx.r11.s64 + 23864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A5C"))) PPC_WEAK_FUNC(sub_83B75A5C);
PPC_FUNC_IMPL(__imp__sub_83B75A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A60"))) PPC_WEAK_FUNC(sub_83B75A60);
PPC_FUNC_IMPL(__imp__sub_83B75A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23872
	ctx.r3.s64 = ctx.r11.s64 + 23872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A6C"))) PPC_WEAK_FUNC(sub_83B75A6C);
PPC_FUNC_IMPL(__imp__sub_83B75A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A70"))) PPC_WEAK_FUNC(sub_83B75A70);
PPC_FUNC_IMPL(__imp__sub_83B75A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23880
	ctx.r3.s64 = ctx.r11.s64 + 23880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A7C"))) PPC_WEAK_FUNC(sub_83B75A7C);
PPC_FUNC_IMPL(__imp__sub_83B75A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A80"))) PPC_WEAK_FUNC(sub_83B75A80);
PPC_FUNC_IMPL(__imp__sub_83B75A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23888
	ctx.r3.s64 = ctx.r11.s64 + 23888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A8C"))) PPC_WEAK_FUNC(sub_83B75A8C);
PPC_FUNC_IMPL(__imp__sub_83B75A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75A90"))) PPC_WEAK_FUNC(sub_83B75A90);
PPC_FUNC_IMPL(__imp__sub_83B75A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23896
	ctx.r3.s64 = ctx.r11.s64 + 23896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75A9C"))) PPC_WEAK_FUNC(sub_83B75A9C);
PPC_FUNC_IMPL(__imp__sub_83B75A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75AA0"))) PPC_WEAK_FUNC(sub_83B75AA0);
PPC_FUNC_IMPL(__imp__sub_83B75AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75AAC"))) PPC_WEAK_FUNC(sub_83B75AAC);
PPC_FUNC_IMPL(__imp__sub_83B75AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75AB0"))) PPC_WEAK_FUNC(sub_83B75AB0);
PPC_FUNC_IMPL(__imp__sub_83B75AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15108
	ctx.r7.s64 = ctx.r8.s64 + -15108;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15108);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15108(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15108, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B75AD8"))) PPC_WEAK_FUNC(sub_83B75AD8);
PPC_FUNC_IMPL(__imp__sub_83B75AD8) {
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
	// addi r3,r11,-15112
	ctx.r3.s64 = ctx.r11.s64 + -15112;
	// bl 0x83523120
	ctx.lr = 0x83B75AF0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,23912
	ctx.r3.s64 = ctx.r10.s64 + 23912;
	// bl 0x831cdcc8
	ctx.lr = 0x83B75AFC;
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

__attribute__((alias("__imp__sub_83B75B0C"))) PPC_WEAK_FUNC(sub_83B75B0C);
PPC_FUNC_IMPL(__imp__sub_83B75B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B10"))) PPC_WEAK_FUNC(sub_83B75B10);
PPC_FUNC_IMPL(__imp__sub_83B75B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23928
	ctx.r3.s64 = ctx.r11.s64 + 23928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B1C"))) PPC_WEAK_FUNC(sub_83B75B1C);
PPC_FUNC_IMPL(__imp__sub_83B75B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B20"))) PPC_WEAK_FUNC(sub_83B75B20);
PPC_FUNC_IMPL(__imp__sub_83B75B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23936
	ctx.r3.s64 = ctx.r11.s64 + 23936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B2C"))) PPC_WEAK_FUNC(sub_83B75B2C);
PPC_FUNC_IMPL(__imp__sub_83B75B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B30"))) PPC_WEAK_FUNC(sub_83B75B30);
PPC_FUNC_IMPL(__imp__sub_83B75B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23944
	ctx.r3.s64 = ctx.r11.s64 + 23944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B3C"))) PPC_WEAK_FUNC(sub_83B75B3C);
PPC_FUNC_IMPL(__imp__sub_83B75B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B40"))) PPC_WEAK_FUNC(sub_83B75B40);
PPC_FUNC_IMPL(__imp__sub_83B75B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23952
	ctx.r3.s64 = ctx.r11.s64 + 23952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B4C"))) PPC_WEAK_FUNC(sub_83B75B4C);
PPC_FUNC_IMPL(__imp__sub_83B75B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B50"))) PPC_WEAK_FUNC(sub_83B75B50);
PPC_FUNC_IMPL(__imp__sub_83B75B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B5C"))) PPC_WEAK_FUNC(sub_83B75B5C);
PPC_FUNC_IMPL(__imp__sub_83B75B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B60"))) PPC_WEAK_FUNC(sub_83B75B60);
PPC_FUNC_IMPL(__imp__sub_83B75B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23968
	ctx.r3.s64 = ctx.r11.s64 + 23968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B6C"))) PPC_WEAK_FUNC(sub_83B75B6C);
PPC_FUNC_IMPL(__imp__sub_83B75B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B70"))) PPC_WEAK_FUNC(sub_83B75B70);
PPC_FUNC_IMPL(__imp__sub_83B75B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23976
	ctx.r3.s64 = ctx.r11.s64 + 23976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B7C"))) PPC_WEAK_FUNC(sub_83B75B7C);
PPC_FUNC_IMPL(__imp__sub_83B75B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B80"))) PPC_WEAK_FUNC(sub_83B75B80);
PPC_FUNC_IMPL(__imp__sub_83B75B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B8C"))) PPC_WEAK_FUNC(sub_83B75B8C);
PPC_FUNC_IMPL(__imp__sub_83B75B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75B90"))) PPC_WEAK_FUNC(sub_83B75B90);
PPC_FUNC_IMPL(__imp__sub_83B75B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,23992
	ctx.r3.s64 = ctx.r11.s64 + 23992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75B9C"))) PPC_WEAK_FUNC(sub_83B75B9C);
PPC_FUNC_IMPL(__imp__sub_83B75B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75BA0"))) PPC_WEAK_FUNC(sub_83B75BA0);
PPC_FUNC_IMPL(__imp__sub_83B75BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24000
	ctx.r3.s64 = ctx.r11.s64 + 24000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75BAC"))) PPC_WEAK_FUNC(sub_83B75BAC);
PPC_FUNC_IMPL(__imp__sub_83B75BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75BB0"))) PPC_WEAK_FUNC(sub_83B75BB0);
PPC_FUNC_IMPL(__imp__sub_83B75BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24008
	ctx.r3.s64 = ctx.r11.s64 + 24008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75BBC"))) PPC_WEAK_FUNC(sub_83B75BBC);
PPC_FUNC_IMPL(__imp__sub_83B75BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75BC0"))) PPC_WEAK_FUNC(sub_83B75BC0);
PPC_FUNC_IMPL(__imp__sub_83B75BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24016
	ctx.r3.s64 = ctx.r11.s64 + 24016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75BCC"))) PPC_WEAK_FUNC(sub_83B75BCC);
PPC_FUNC_IMPL(__imp__sub_83B75BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75BD0"))) PPC_WEAK_FUNC(sub_83B75BD0);
PPC_FUNC_IMPL(__imp__sub_83B75BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15096
	ctx.r7.s64 = ctx.r8.s64 + -15096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15096(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B75BF8"))) PPC_WEAK_FUNC(sub_83B75BF8);
PPC_FUNC_IMPL(__imp__sub_83B75BF8) {
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
	// addi r3,r11,-15100
	ctx.r3.s64 = ctx.r11.s64 + -15100;
	// bl 0x83523120
	ctx.lr = 0x83B75C10;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,24024
	ctx.r3.s64 = ctx.r10.s64 + 24024;
	// bl 0x831cdcc8
	ctx.lr = 0x83B75C1C;
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

__attribute__((alias("__imp__sub_83B75C2C"))) PPC_WEAK_FUNC(sub_83B75C2C);
PPC_FUNC_IMPL(__imp__sub_83B75C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75C30"))) PPC_WEAK_FUNC(sub_83B75C30);
PPC_FUNC_IMPL(__imp__sub_83B75C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24040
	ctx.r3.s64 = ctx.r11.s64 + 24040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75C3C"))) PPC_WEAK_FUNC(sub_83B75C3C);
PPC_FUNC_IMPL(__imp__sub_83B75C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75C40"))) PPC_WEAK_FUNC(sub_83B75C40);
PPC_FUNC_IMPL(__imp__sub_83B75C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24048
	ctx.r3.s64 = ctx.r11.s64 + 24048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75C4C"))) PPC_WEAK_FUNC(sub_83B75C4C);
PPC_FUNC_IMPL(__imp__sub_83B75C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75C50"))) PPC_WEAK_FUNC(sub_83B75C50);
PPC_FUNC_IMPL(__imp__sub_83B75C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24056
	ctx.r3.s64 = ctx.r11.s64 + 24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75C5C"))) PPC_WEAK_FUNC(sub_83B75C5C);
PPC_FUNC_IMPL(__imp__sub_83B75C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75C60"))) PPC_WEAK_FUNC(sub_83B75C60);
PPC_FUNC_IMPL(__imp__sub_83B75C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24064
	ctx.r3.s64 = ctx.r11.s64 + 24064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75C6C"))) PPC_WEAK_FUNC(sub_83B75C6C);
PPC_FUNC_IMPL(__imp__sub_83B75C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75C70"))) PPC_WEAK_FUNC(sub_83B75C70);
PPC_FUNC_IMPL(__imp__sub_83B75C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75C7C"))) PPC_WEAK_FUNC(sub_83B75C7C);
PPC_FUNC_IMPL(__imp__sub_83B75C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75C80"))) PPC_WEAK_FUNC(sub_83B75C80);
PPC_FUNC_IMPL(__imp__sub_83B75C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24080
	ctx.r3.s64 = ctx.r11.s64 + 24080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75C8C"))) PPC_WEAK_FUNC(sub_83B75C8C);
PPC_FUNC_IMPL(__imp__sub_83B75C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75C90"))) PPC_WEAK_FUNC(sub_83B75C90);
PPC_FUNC_IMPL(__imp__sub_83B75C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24088
	ctx.r3.s64 = ctx.r11.s64 + 24088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75C9C"))) PPC_WEAK_FUNC(sub_83B75C9C);
PPC_FUNC_IMPL(__imp__sub_83B75C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75CA0"))) PPC_WEAK_FUNC(sub_83B75CA0);
PPC_FUNC_IMPL(__imp__sub_83B75CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24096
	ctx.r3.s64 = ctx.r11.s64 + 24096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75CAC"))) PPC_WEAK_FUNC(sub_83B75CAC);
PPC_FUNC_IMPL(__imp__sub_83B75CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75CB0"))) PPC_WEAK_FUNC(sub_83B75CB0);
PPC_FUNC_IMPL(__imp__sub_83B75CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24104
	ctx.r3.s64 = ctx.r11.s64 + 24104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75CBC"))) PPC_WEAK_FUNC(sub_83B75CBC);
PPC_FUNC_IMPL(__imp__sub_83B75CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75CC0"))) PPC_WEAK_FUNC(sub_83B75CC0);
PPC_FUNC_IMPL(__imp__sub_83B75CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24112
	ctx.r3.s64 = ctx.r11.s64 + 24112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75CCC"))) PPC_WEAK_FUNC(sub_83B75CCC);
PPC_FUNC_IMPL(__imp__sub_83B75CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75CD0"))) PPC_WEAK_FUNC(sub_83B75CD0);
PPC_FUNC_IMPL(__imp__sub_83B75CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24120
	ctx.r3.s64 = ctx.r11.s64 + 24120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75CDC"))) PPC_WEAK_FUNC(sub_83B75CDC);
PPC_FUNC_IMPL(__imp__sub_83B75CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75CE0"))) PPC_WEAK_FUNC(sub_83B75CE0);
PPC_FUNC_IMPL(__imp__sub_83B75CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24128
	ctx.r3.s64 = ctx.r11.s64 + 24128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75CEC"))) PPC_WEAK_FUNC(sub_83B75CEC);
PPC_FUNC_IMPL(__imp__sub_83B75CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75CF0"))) PPC_WEAK_FUNC(sub_83B75CF0);
PPC_FUNC_IMPL(__imp__sub_83B75CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15084
	ctx.r7.s64 = ctx.r8.s64 + -15084;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15084(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15084);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15084(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15084, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B75D18"))) PPC_WEAK_FUNC(sub_83B75D18);
PPC_FUNC_IMPL(__imp__sub_83B75D18) {
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
	// addi r3,r11,-15088
	ctx.r3.s64 = ctx.r11.s64 + -15088;
	// bl 0x83523120
	ctx.lr = 0x83B75D30;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,24136
	ctx.r3.s64 = ctx.r10.s64 + 24136;
	// bl 0x831cdcc8
	ctx.lr = 0x83B75D3C;
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

__attribute__((alias("__imp__sub_83B75D4C"))) PPC_WEAK_FUNC(sub_83B75D4C);
PPC_FUNC_IMPL(__imp__sub_83B75D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75D50"))) PPC_WEAK_FUNC(sub_83B75D50);
PPC_FUNC_IMPL(__imp__sub_83B75D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24152
	ctx.r3.s64 = ctx.r11.s64 + 24152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75D5C"))) PPC_WEAK_FUNC(sub_83B75D5C);
PPC_FUNC_IMPL(__imp__sub_83B75D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75D60"))) PPC_WEAK_FUNC(sub_83B75D60);
PPC_FUNC_IMPL(__imp__sub_83B75D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24160
	ctx.r3.s64 = ctx.r11.s64 + 24160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75D6C"))) PPC_WEAK_FUNC(sub_83B75D6C);
PPC_FUNC_IMPL(__imp__sub_83B75D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75D70"))) PPC_WEAK_FUNC(sub_83B75D70);
PPC_FUNC_IMPL(__imp__sub_83B75D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24168
	ctx.r3.s64 = ctx.r11.s64 + 24168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75D7C"))) PPC_WEAK_FUNC(sub_83B75D7C);
PPC_FUNC_IMPL(__imp__sub_83B75D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75D80"))) PPC_WEAK_FUNC(sub_83B75D80);
PPC_FUNC_IMPL(__imp__sub_83B75D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24176
	ctx.r3.s64 = ctx.r11.s64 + 24176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75D8C"))) PPC_WEAK_FUNC(sub_83B75D8C);
PPC_FUNC_IMPL(__imp__sub_83B75D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75D90"))) PPC_WEAK_FUNC(sub_83B75D90);
PPC_FUNC_IMPL(__imp__sub_83B75D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24184
	ctx.r3.s64 = ctx.r11.s64 + 24184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75D9C"))) PPC_WEAK_FUNC(sub_83B75D9C);
PPC_FUNC_IMPL(__imp__sub_83B75D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75DA0"))) PPC_WEAK_FUNC(sub_83B75DA0);
PPC_FUNC_IMPL(__imp__sub_83B75DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24192
	ctx.r3.s64 = ctx.r11.s64 + 24192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75DAC"))) PPC_WEAK_FUNC(sub_83B75DAC);
PPC_FUNC_IMPL(__imp__sub_83B75DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75DB0"))) PPC_WEAK_FUNC(sub_83B75DB0);
PPC_FUNC_IMPL(__imp__sub_83B75DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24200
	ctx.r3.s64 = ctx.r11.s64 + 24200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75DBC"))) PPC_WEAK_FUNC(sub_83B75DBC);
PPC_FUNC_IMPL(__imp__sub_83B75DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75DC0"))) PPC_WEAK_FUNC(sub_83B75DC0);
PPC_FUNC_IMPL(__imp__sub_83B75DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24208
	ctx.r3.s64 = ctx.r11.s64 + 24208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75DCC"))) PPC_WEAK_FUNC(sub_83B75DCC);
PPC_FUNC_IMPL(__imp__sub_83B75DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75DD0"))) PPC_WEAK_FUNC(sub_83B75DD0);
PPC_FUNC_IMPL(__imp__sub_83B75DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24216
	ctx.r3.s64 = ctx.r11.s64 + 24216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75DDC"))) PPC_WEAK_FUNC(sub_83B75DDC);
PPC_FUNC_IMPL(__imp__sub_83B75DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75DE0"))) PPC_WEAK_FUNC(sub_83B75DE0);
PPC_FUNC_IMPL(__imp__sub_83B75DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75DEC"))) PPC_WEAK_FUNC(sub_83B75DEC);
PPC_FUNC_IMPL(__imp__sub_83B75DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75DF0"))) PPC_WEAK_FUNC(sub_83B75DF0);
PPC_FUNC_IMPL(__imp__sub_83B75DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24232
	ctx.r3.s64 = ctx.r11.s64 + 24232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75DFC"))) PPC_WEAK_FUNC(sub_83B75DFC);
PPC_FUNC_IMPL(__imp__sub_83B75DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75E00"))) PPC_WEAK_FUNC(sub_83B75E00);
PPC_FUNC_IMPL(__imp__sub_83B75E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24240
	ctx.r3.s64 = ctx.r11.s64 + 24240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75E0C"))) PPC_WEAK_FUNC(sub_83B75E0C);
PPC_FUNC_IMPL(__imp__sub_83B75E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75E10"))) PPC_WEAK_FUNC(sub_83B75E10);
PPC_FUNC_IMPL(__imp__sub_83B75E10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15072
	ctx.r7.s64 = ctx.r8.s64 + -15072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15072(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B75E38"))) PPC_WEAK_FUNC(sub_83B75E38);
PPC_FUNC_IMPL(__imp__sub_83B75E38) {
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
	// addi r3,r11,-15076
	ctx.r3.s64 = ctx.r11.s64 + -15076;
	// bl 0x83523120
	ctx.lr = 0x83B75E50;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,24248
	ctx.r3.s64 = ctx.r10.s64 + 24248;
	// bl 0x831cdcc8
	ctx.lr = 0x83B75E5C;
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

__attribute__((alias("__imp__sub_83B75E6C"))) PPC_WEAK_FUNC(sub_83B75E6C);
PPC_FUNC_IMPL(__imp__sub_83B75E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75E70"))) PPC_WEAK_FUNC(sub_83B75E70);
PPC_FUNC_IMPL(__imp__sub_83B75E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24264
	ctx.r3.s64 = ctx.r11.s64 + 24264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75E7C"))) PPC_WEAK_FUNC(sub_83B75E7C);
PPC_FUNC_IMPL(__imp__sub_83B75E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75E80"))) PPC_WEAK_FUNC(sub_83B75E80);
PPC_FUNC_IMPL(__imp__sub_83B75E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24272
	ctx.r3.s64 = ctx.r11.s64 + 24272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75E8C"))) PPC_WEAK_FUNC(sub_83B75E8C);
PPC_FUNC_IMPL(__imp__sub_83B75E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75E90"))) PPC_WEAK_FUNC(sub_83B75E90);
PPC_FUNC_IMPL(__imp__sub_83B75E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24280
	ctx.r3.s64 = ctx.r11.s64 + 24280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75E9C"))) PPC_WEAK_FUNC(sub_83B75E9C);
PPC_FUNC_IMPL(__imp__sub_83B75E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75EA0"))) PPC_WEAK_FUNC(sub_83B75EA0);
PPC_FUNC_IMPL(__imp__sub_83B75EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24288
	ctx.r3.s64 = ctx.r11.s64 + 24288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75EAC"))) PPC_WEAK_FUNC(sub_83B75EAC);
PPC_FUNC_IMPL(__imp__sub_83B75EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75EB0"))) PPC_WEAK_FUNC(sub_83B75EB0);
PPC_FUNC_IMPL(__imp__sub_83B75EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24296
	ctx.r3.s64 = ctx.r11.s64 + 24296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75EBC"))) PPC_WEAK_FUNC(sub_83B75EBC);
PPC_FUNC_IMPL(__imp__sub_83B75EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75EC0"))) PPC_WEAK_FUNC(sub_83B75EC0);
PPC_FUNC_IMPL(__imp__sub_83B75EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24304
	ctx.r3.s64 = ctx.r11.s64 + 24304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75ECC"))) PPC_WEAK_FUNC(sub_83B75ECC);
PPC_FUNC_IMPL(__imp__sub_83B75ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75ED0"))) PPC_WEAK_FUNC(sub_83B75ED0);
PPC_FUNC_IMPL(__imp__sub_83B75ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24312
	ctx.r3.s64 = ctx.r11.s64 + 24312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75EDC"))) PPC_WEAK_FUNC(sub_83B75EDC);
PPC_FUNC_IMPL(__imp__sub_83B75EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75EE0"))) PPC_WEAK_FUNC(sub_83B75EE0);
PPC_FUNC_IMPL(__imp__sub_83B75EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24320
	ctx.r3.s64 = ctx.r11.s64 + 24320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75EEC"))) PPC_WEAK_FUNC(sub_83B75EEC);
PPC_FUNC_IMPL(__imp__sub_83B75EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75EF0"))) PPC_WEAK_FUNC(sub_83B75EF0);
PPC_FUNC_IMPL(__imp__sub_83B75EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24328
	ctx.r3.s64 = ctx.r11.s64 + 24328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75EFC"))) PPC_WEAK_FUNC(sub_83B75EFC);
PPC_FUNC_IMPL(__imp__sub_83B75EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75F00"))) PPC_WEAK_FUNC(sub_83B75F00);
PPC_FUNC_IMPL(__imp__sub_83B75F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24336
	ctx.r3.s64 = ctx.r11.s64 + 24336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75F0C"))) PPC_WEAK_FUNC(sub_83B75F0C);
PPC_FUNC_IMPL(__imp__sub_83B75F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75F10"))) PPC_WEAK_FUNC(sub_83B75F10);
PPC_FUNC_IMPL(__imp__sub_83B75F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24344
	ctx.r3.s64 = ctx.r11.s64 + 24344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75F1C"))) PPC_WEAK_FUNC(sub_83B75F1C);
PPC_FUNC_IMPL(__imp__sub_83B75F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75F20"))) PPC_WEAK_FUNC(sub_83B75F20);
PPC_FUNC_IMPL(__imp__sub_83B75F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24352
	ctx.r3.s64 = ctx.r11.s64 + 24352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75F2C"))) PPC_WEAK_FUNC(sub_83B75F2C);
PPC_FUNC_IMPL(__imp__sub_83B75F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75F30"))) PPC_WEAK_FUNC(sub_83B75F30);
PPC_FUNC_IMPL(__imp__sub_83B75F30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15060
	ctx.r7.s64 = ctx.r8.s64 + -15060;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15060(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15060);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15060(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15060, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B75F58"))) PPC_WEAK_FUNC(sub_83B75F58);
PPC_FUNC_IMPL(__imp__sub_83B75F58) {
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
	// addi r3,r11,-15064
	ctx.r3.s64 = ctx.r11.s64 + -15064;
	// bl 0x83523120
	ctx.lr = 0x83B75F70;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,24360
	ctx.r3.s64 = ctx.r10.s64 + 24360;
	// bl 0x831cdcc8
	ctx.lr = 0x83B75F7C;
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

__attribute__((alias("__imp__sub_83B75F8C"))) PPC_WEAK_FUNC(sub_83B75F8C);
PPC_FUNC_IMPL(__imp__sub_83B75F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75F90"))) PPC_WEAK_FUNC(sub_83B75F90);
PPC_FUNC_IMPL(__imp__sub_83B75F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24376
	ctx.r3.s64 = ctx.r11.s64 + 24376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75F9C"))) PPC_WEAK_FUNC(sub_83B75F9C);
PPC_FUNC_IMPL(__imp__sub_83B75F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75FA0"))) PPC_WEAK_FUNC(sub_83B75FA0);
PPC_FUNC_IMPL(__imp__sub_83B75FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24384
	ctx.r3.s64 = ctx.r11.s64 + 24384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75FAC"))) PPC_WEAK_FUNC(sub_83B75FAC);
PPC_FUNC_IMPL(__imp__sub_83B75FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75FB0"))) PPC_WEAK_FUNC(sub_83B75FB0);
PPC_FUNC_IMPL(__imp__sub_83B75FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24392
	ctx.r3.s64 = ctx.r11.s64 + 24392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75FBC"))) PPC_WEAK_FUNC(sub_83B75FBC);
PPC_FUNC_IMPL(__imp__sub_83B75FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75FC0"))) PPC_WEAK_FUNC(sub_83B75FC0);
PPC_FUNC_IMPL(__imp__sub_83B75FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24400
	ctx.r3.s64 = ctx.r11.s64 + 24400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75FCC"))) PPC_WEAK_FUNC(sub_83B75FCC);
PPC_FUNC_IMPL(__imp__sub_83B75FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75FD0"))) PPC_WEAK_FUNC(sub_83B75FD0);
PPC_FUNC_IMPL(__imp__sub_83B75FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24408
	ctx.r3.s64 = ctx.r11.s64 + 24408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75FDC"))) PPC_WEAK_FUNC(sub_83B75FDC);
PPC_FUNC_IMPL(__imp__sub_83B75FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75FE0"))) PPC_WEAK_FUNC(sub_83B75FE0);
PPC_FUNC_IMPL(__imp__sub_83B75FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24416
	ctx.r3.s64 = ctx.r11.s64 + 24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75FEC"))) PPC_WEAK_FUNC(sub_83B75FEC);
PPC_FUNC_IMPL(__imp__sub_83B75FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B75FF0"))) PPC_WEAK_FUNC(sub_83B75FF0);
PPC_FUNC_IMPL(__imp__sub_83B75FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24424
	ctx.r3.s64 = ctx.r11.s64 + 24424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B75FFC"))) PPC_WEAK_FUNC(sub_83B75FFC);
PPC_FUNC_IMPL(__imp__sub_83B75FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76000"))) PPC_WEAK_FUNC(sub_83B76000);
PPC_FUNC_IMPL(__imp__sub_83B76000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7600C"))) PPC_WEAK_FUNC(sub_83B7600C);
PPC_FUNC_IMPL(__imp__sub_83B7600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76010"))) PPC_WEAK_FUNC(sub_83B76010);
PPC_FUNC_IMPL(__imp__sub_83B76010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24440
	ctx.r3.s64 = ctx.r11.s64 + 24440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7601C"))) PPC_WEAK_FUNC(sub_83B7601C);
PPC_FUNC_IMPL(__imp__sub_83B7601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76020"))) PPC_WEAK_FUNC(sub_83B76020);
PPC_FUNC_IMPL(__imp__sub_83B76020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24448
	ctx.r3.s64 = ctx.r11.s64 + 24448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7602C"))) PPC_WEAK_FUNC(sub_83B7602C);
PPC_FUNC_IMPL(__imp__sub_83B7602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76030"))) PPC_WEAK_FUNC(sub_83B76030);
PPC_FUNC_IMPL(__imp__sub_83B76030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24456
	ctx.r3.s64 = ctx.r11.s64 + 24456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7603C"))) PPC_WEAK_FUNC(sub_83B7603C);
PPC_FUNC_IMPL(__imp__sub_83B7603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76040"))) PPC_WEAK_FUNC(sub_83B76040);
PPC_FUNC_IMPL(__imp__sub_83B76040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24464
	ctx.r3.s64 = ctx.r11.s64 + 24464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7604C"))) PPC_WEAK_FUNC(sub_83B7604C);
PPC_FUNC_IMPL(__imp__sub_83B7604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76050"))) PPC_WEAK_FUNC(sub_83B76050);
PPC_FUNC_IMPL(__imp__sub_83B76050) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15048
	ctx.r7.s64 = ctx.r8.s64 + -15048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15048);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15048(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15048, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B76078"))) PPC_WEAK_FUNC(sub_83B76078);
PPC_FUNC_IMPL(__imp__sub_83B76078) {
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
	// addi r3,r11,-15052
	ctx.r3.s64 = ctx.r11.s64 + -15052;
	// bl 0x83523120
	ctx.lr = 0x83B76090;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,24472
	ctx.r3.s64 = ctx.r10.s64 + 24472;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7609C;
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

__attribute__((alias("__imp__sub_83B760AC"))) PPC_WEAK_FUNC(sub_83B760AC);
PPC_FUNC_IMPL(__imp__sub_83B760AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B760B0"))) PPC_WEAK_FUNC(sub_83B760B0);
PPC_FUNC_IMPL(__imp__sub_83B760B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24488
	ctx.r3.s64 = ctx.r11.s64 + 24488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B760BC"))) PPC_WEAK_FUNC(sub_83B760BC);
PPC_FUNC_IMPL(__imp__sub_83B760BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B760C0"))) PPC_WEAK_FUNC(sub_83B760C0);
PPC_FUNC_IMPL(__imp__sub_83B760C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24496
	ctx.r3.s64 = ctx.r11.s64 + 24496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B760CC"))) PPC_WEAK_FUNC(sub_83B760CC);
PPC_FUNC_IMPL(__imp__sub_83B760CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B760D0"))) PPC_WEAK_FUNC(sub_83B760D0);
PPC_FUNC_IMPL(__imp__sub_83B760D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24504
	ctx.r3.s64 = ctx.r11.s64 + 24504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B760DC"))) PPC_WEAK_FUNC(sub_83B760DC);
PPC_FUNC_IMPL(__imp__sub_83B760DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B760E0"))) PPC_WEAK_FUNC(sub_83B760E0);
PPC_FUNC_IMPL(__imp__sub_83B760E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24512
	ctx.r3.s64 = ctx.r11.s64 + 24512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B760EC"))) PPC_WEAK_FUNC(sub_83B760EC);
PPC_FUNC_IMPL(__imp__sub_83B760EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B760F0"))) PPC_WEAK_FUNC(sub_83B760F0);
PPC_FUNC_IMPL(__imp__sub_83B760F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24520
	ctx.r3.s64 = ctx.r11.s64 + 24520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B760FC"))) PPC_WEAK_FUNC(sub_83B760FC);
PPC_FUNC_IMPL(__imp__sub_83B760FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76100"))) PPC_WEAK_FUNC(sub_83B76100);
PPC_FUNC_IMPL(__imp__sub_83B76100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24528
	ctx.r3.s64 = ctx.r11.s64 + 24528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7610C"))) PPC_WEAK_FUNC(sub_83B7610C);
PPC_FUNC_IMPL(__imp__sub_83B7610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76110"))) PPC_WEAK_FUNC(sub_83B76110);
PPC_FUNC_IMPL(__imp__sub_83B76110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24536
	ctx.r3.s64 = ctx.r11.s64 + 24536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7611C"))) PPC_WEAK_FUNC(sub_83B7611C);
PPC_FUNC_IMPL(__imp__sub_83B7611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76120"))) PPC_WEAK_FUNC(sub_83B76120);
PPC_FUNC_IMPL(__imp__sub_83B76120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24544
	ctx.r3.s64 = ctx.r11.s64 + 24544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7612C"))) PPC_WEAK_FUNC(sub_83B7612C);
PPC_FUNC_IMPL(__imp__sub_83B7612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76130"))) PPC_WEAK_FUNC(sub_83B76130);
PPC_FUNC_IMPL(__imp__sub_83B76130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24552
	ctx.r3.s64 = ctx.r11.s64 + 24552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7613C"))) PPC_WEAK_FUNC(sub_83B7613C);
PPC_FUNC_IMPL(__imp__sub_83B7613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76140"))) PPC_WEAK_FUNC(sub_83B76140);
PPC_FUNC_IMPL(__imp__sub_83B76140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24560
	ctx.r3.s64 = ctx.r11.s64 + 24560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7614C"))) PPC_WEAK_FUNC(sub_83B7614C);
PPC_FUNC_IMPL(__imp__sub_83B7614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76150"))) PPC_WEAK_FUNC(sub_83B76150);
PPC_FUNC_IMPL(__imp__sub_83B76150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24568
	ctx.r3.s64 = ctx.r11.s64 + 24568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7615C"))) PPC_WEAK_FUNC(sub_83B7615C);
PPC_FUNC_IMPL(__imp__sub_83B7615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76160"))) PPC_WEAK_FUNC(sub_83B76160);
PPC_FUNC_IMPL(__imp__sub_83B76160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7616C"))) PPC_WEAK_FUNC(sub_83B7616C);
PPC_FUNC_IMPL(__imp__sub_83B7616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76170"))) PPC_WEAK_FUNC(sub_83B76170);
PPC_FUNC_IMPL(__imp__sub_83B76170) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15036
	ctx.r7.s64 = ctx.r8.s64 + -15036;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15036(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15036);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15036(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15036, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B76198"))) PPC_WEAK_FUNC(sub_83B76198);
PPC_FUNC_IMPL(__imp__sub_83B76198) {
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
	// addi r3,r11,-15040
	ctx.r3.s64 = ctx.r11.s64 + -15040;
	// bl 0x83523120
	ctx.lr = 0x83B761B0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,24584
	ctx.r3.s64 = ctx.r10.s64 + 24584;
	// bl 0x831cdcc8
	ctx.lr = 0x83B761BC;
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

__attribute__((alias("__imp__sub_83B761CC"))) PPC_WEAK_FUNC(sub_83B761CC);
PPC_FUNC_IMPL(__imp__sub_83B761CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B761D0"))) PPC_WEAK_FUNC(sub_83B761D0);
PPC_FUNC_IMPL(__imp__sub_83B761D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24600
	ctx.r3.s64 = ctx.r11.s64 + 24600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B761DC"))) PPC_WEAK_FUNC(sub_83B761DC);
PPC_FUNC_IMPL(__imp__sub_83B761DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B761E0"))) PPC_WEAK_FUNC(sub_83B761E0);
PPC_FUNC_IMPL(__imp__sub_83B761E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,24608
	ctx.r3.s64 = ctx.r11.s64 + 24608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

