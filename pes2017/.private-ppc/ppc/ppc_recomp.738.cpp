#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C25674"))) PPC_WEAK_FUNC(sub_83C25674);
PPC_FUNC_IMPL(__imp__sub_83C25674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25678"))) PPC_WEAK_FUNC(sub_83C25678);
PPC_FUNC_IMPL(__imp__sub_83C25678) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-18708
	ctx.r4.s64 = ctx.r11.s64 + -18708;
	// addi r3,r10,15232
	ctx.r3.s64 = ctx.r10.s64 + 15232;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2569C;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-2208
	ctx.r3.s64 = ctx.r9.s64 + -2208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C256A8;
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

__attribute__((alias("__imp__sub_83C256B8"))) PPC_WEAK_FUNC(sub_83C256B8);
PPC_FUNC_IMPL(__imp__sub_83C256B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13920
	ctx.r7.s64 = ctx.r8.s64 + -13920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13920);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13920, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C256E0"))) PPC_WEAK_FUNC(sub_83C256E0);
PPC_FUNC_IMPL(__imp__sub_83C256E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,15260
	ctx.r6.s64 = ctx.r7.s64 + 15260;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15160(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15160);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13920(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13920);
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
	// std r9,15260(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15260, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C25728"))) PPC_WEAK_FUNC(sub_83C25728);
PPC_FUNC_IMPL(__imp__sub_83C25728) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// bl 0x83523120
	ctx.lr = 0x83C25740;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-2248
	ctx.r3.s64 = ctx.r10.s64 + -2248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2574C;
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

__attribute__((alias("__imp__sub_83C2575C"))) PPC_WEAK_FUNC(sub_83C2575C);
PPC_FUNC_IMPL(__imp__sub_83C2575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25760"))) PPC_WEAK_FUNC(sub_83C25760);
PPC_FUNC_IMPL(__imp__sub_83C25760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2232
	ctx.r3.s64 = ctx.r11.s64 + -2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2576C"))) PPC_WEAK_FUNC(sub_83C2576C);
PPC_FUNC_IMPL(__imp__sub_83C2576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25770"))) PPC_WEAK_FUNC(sub_83C25770);
PPC_FUNC_IMPL(__imp__sub_83C25770) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13912
	ctx.r3.s64 = ctx.r11.s64 + -13912;
	// bl 0x8259af80
	ctx.lr = 0x83C25788;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-2216
	ctx.r3.s64 = ctx.r10.s64 + -2216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C25794;
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

__attribute__((alias("__imp__sub_83C257A4"))) PPC_WEAK_FUNC(sub_83C257A4);
PPC_FUNC_IMPL(__imp__sub_83C257A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C257A8"))) PPC_WEAK_FUNC(sub_83C257A8);
PPC_FUNC_IMPL(__imp__sub_83C257A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13932
	ctx.r11.s64 = ctx.r8.s64 + -13932;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,15208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15208);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2224
	ctx.r3.s64 = ctx.r6.s64 + -2224;
	// stw r10,-13932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13932, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C257D8"))) PPC_WEAK_FUNC(sub_83C257D8);
PPC_FUNC_IMPL(__imp__sub_83C257D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2104
	ctx.r3.s64 = ctx.r11.s64 + -2104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C257E4"))) PPC_WEAK_FUNC(sub_83C257E4);
PPC_FUNC_IMPL(__imp__sub_83C257E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C257E8"))) PPC_WEAK_FUNC(sub_83C257E8);
PPC_FUNC_IMPL(__imp__sub_83C257E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2096
	ctx.r3.s64 = ctx.r11.s64 + -2096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C257F4"))) PPC_WEAK_FUNC(sub_83C257F4);
PPC_FUNC_IMPL(__imp__sub_83C257F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C257F8"))) PPC_WEAK_FUNC(sub_83C257F8);
PPC_FUNC_IMPL(__imp__sub_83C257F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2088
	ctx.r3.s64 = ctx.r11.s64 + -2088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25804"))) PPC_WEAK_FUNC(sub_83C25804);
PPC_FUNC_IMPL(__imp__sub_83C25804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25808"))) PPC_WEAK_FUNC(sub_83C25808);
PPC_FUNC_IMPL(__imp__sub_83C25808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2080
	ctx.r3.s64 = ctx.r11.s64 + -2080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25814"))) PPC_WEAK_FUNC(sub_83C25814);
PPC_FUNC_IMPL(__imp__sub_83C25814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25818"))) PPC_WEAK_FUNC(sub_83C25818);
PPC_FUNC_IMPL(__imp__sub_83C25818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2072
	ctx.r3.s64 = ctx.r11.s64 + -2072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25824"))) PPC_WEAK_FUNC(sub_83C25824);
PPC_FUNC_IMPL(__imp__sub_83C25824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25828"))) PPC_WEAK_FUNC(sub_83C25828);
PPC_FUNC_IMPL(__imp__sub_83C25828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2064
	ctx.r3.s64 = ctx.r11.s64 + -2064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25834"))) PPC_WEAK_FUNC(sub_83C25834);
PPC_FUNC_IMPL(__imp__sub_83C25834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25838"))) PPC_WEAK_FUNC(sub_83C25838);
PPC_FUNC_IMPL(__imp__sub_83C25838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2056
	ctx.r3.s64 = ctx.r11.s64 + -2056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25844"))) PPC_WEAK_FUNC(sub_83C25844);
PPC_FUNC_IMPL(__imp__sub_83C25844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25848"))) PPC_WEAK_FUNC(sub_83C25848);
PPC_FUNC_IMPL(__imp__sub_83C25848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2048
	ctx.r3.s64 = ctx.r11.s64 + -2048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25854"))) PPC_WEAK_FUNC(sub_83C25854);
PPC_FUNC_IMPL(__imp__sub_83C25854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25858"))) PPC_WEAK_FUNC(sub_83C25858);
PPC_FUNC_IMPL(__imp__sub_83C25858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2040
	ctx.r3.s64 = ctx.r11.s64 + -2040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25864"))) PPC_WEAK_FUNC(sub_83C25864);
PPC_FUNC_IMPL(__imp__sub_83C25864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25868"))) PPC_WEAK_FUNC(sub_83C25868);
PPC_FUNC_IMPL(__imp__sub_83C25868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2032
	ctx.r3.s64 = ctx.r11.s64 + -2032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25874"))) PPC_WEAK_FUNC(sub_83C25874);
PPC_FUNC_IMPL(__imp__sub_83C25874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25878"))) PPC_WEAK_FUNC(sub_83C25878);
PPC_FUNC_IMPL(__imp__sub_83C25878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2024
	ctx.r3.s64 = ctx.r11.s64 + -2024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25884"))) PPC_WEAK_FUNC(sub_83C25884);
PPC_FUNC_IMPL(__imp__sub_83C25884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25888"))) PPC_WEAK_FUNC(sub_83C25888);
PPC_FUNC_IMPL(__imp__sub_83C25888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-2016
	ctx.r3.s64 = ctx.r11.s64 + -2016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25894"))) PPC_WEAK_FUNC(sub_83C25894);
PPC_FUNC_IMPL(__imp__sub_83C25894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25898"))) PPC_WEAK_FUNC(sub_83C25898);
PPC_FUNC_IMPL(__imp__sub_83C25898) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// bl 0x83523120
	ctx.lr = 0x83C258B0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-2008
	ctx.r3.s64 = ctx.r10.s64 + -2008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C258BC;
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

__attribute__((alias("__imp__sub_83C258CC"))) PPC_WEAK_FUNC(sub_83C258CC);
PPC_FUNC_IMPL(__imp__sub_83C258CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C258D0"))) PPC_WEAK_FUNC(sub_83C258D0);
PPC_FUNC_IMPL(__imp__sub_83C258D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13564
	ctx.r7.s64 = ctx.r8.s64 + -13564;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13564(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13564);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13564, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C258F8"))) PPC_WEAK_FUNC(sub_83C258F8);
PPC_FUNC_IMPL(__imp__sub_83C258F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1992
	ctx.r3.s64 = ctx.r11.s64 + -1992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25904"))) PPC_WEAK_FUNC(sub_83C25904);
PPC_FUNC_IMPL(__imp__sub_83C25904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25908"))) PPC_WEAK_FUNC(sub_83C25908);
PPC_FUNC_IMPL(__imp__sub_83C25908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1984
	ctx.r3.s64 = ctx.r11.s64 + -1984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25914"))) PPC_WEAK_FUNC(sub_83C25914);
PPC_FUNC_IMPL(__imp__sub_83C25914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25918"))) PPC_WEAK_FUNC(sub_83C25918);
PPC_FUNC_IMPL(__imp__sub_83C25918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1976
	ctx.r3.s64 = ctx.r11.s64 + -1976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25924"))) PPC_WEAK_FUNC(sub_83C25924);
PPC_FUNC_IMPL(__imp__sub_83C25924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25928"))) PPC_WEAK_FUNC(sub_83C25928);
PPC_FUNC_IMPL(__imp__sub_83C25928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1968
	ctx.r3.s64 = ctx.r11.s64 + -1968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25934"))) PPC_WEAK_FUNC(sub_83C25934);
PPC_FUNC_IMPL(__imp__sub_83C25934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25938"))) PPC_WEAK_FUNC(sub_83C25938);
PPC_FUNC_IMPL(__imp__sub_83C25938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1960
	ctx.r3.s64 = ctx.r11.s64 + -1960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25944"))) PPC_WEAK_FUNC(sub_83C25944);
PPC_FUNC_IMPL(__imp__sub_83C25944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25948"))) PPC_WEAK_FUNC(sub_83C25948);
PPC_FUNC_IMPL(__imp__sub_83C25948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25954"))) PPC_WEAK_FUNC(sub_83C25954);
PPC_FUNC_IMPL(__imp__sub_83C25954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25958"))) PPC_WEAK_FUNC(sub_83C25958);
PPC_FUNC_IMPL(__imp__sub_83C25958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1944
	ctx.r3.s64 = ctx.r11.s64 + -1944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25964"))) PPC_WEAK_FUNC(sub_83C25964);
PPC_FUNC_IMPL(__imp__sub_83C25964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25968"))) PPC_WEAK_FUNC(sub_83C25968);
PPC_FUNC_IMPL(__imp__sub_83C25968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1936
	ctx.r3.s64 = ctx.r11.s64 + -1936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25974"))) PPC_WEAK_FUNC(sub_83C25974);
PPC_FUNC_IMPL(__imp__sub_83C25974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25978"))) PPC_WEAK_FUNC(sub_83C25978);
PPC_FUNC_IMPL(__imp__sub_83C25978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1928
	ctx.r3.s64 = ctx.r11.s64 + -1928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25984"))) PPC_WEAK_FUNC(sub_83C25984);
PPC_FUNC_IMPL(__imp__sub_83C25984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25988"))) PPC_WEAK_FUNC(sub_83C25988);
PPC_FUNC_IMPL(__imp__sub_83C25988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1920
	ctx.r3.s64 = ctx.r11.s64 + -1920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25994"))) PPC_WEAK_FUNC(sub_83C25994);
PPC_FUNC_IMPL(__imp__sub_83C25994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25998"))) PPC_WEAK_FUNC(sub_83C25998);
PPC_FUNC_IMPL(__imp__sub_83C25998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1912
	ctx.r3.s64 = ctx.r11.s64 + -1912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C259A4"))) PPC_WEAK_FUNC(sub_83C259A4);
PPC_FUNC_IMPL(__imp__sub_83C259A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C259A8"))) PPC_WEAK_FUNC(sub_83C259A8);
PPC_FUNC_IMPL(__imp__sub_83C259A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1904
	ctx.r3.s64 = ctx.r11.s64 + -1904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C259B4"))) PPC_WEAK_FUNC(sub_83C259B4);
PPC_FUNC_IMPL(__imp__sub_83C259B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C259B8"))) PPC_WEAK_FUNC(sub_83C259B8);
PPC_FUNC_IMPL(__imp__sub_83C259B8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// bl 0x83523120
	ctx.lr = 0x83C259D0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-1896
	ctx.r3.s64 = ctx.r10.s64 + -1896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C259DC;
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

__attribute__((alias("__imp__sub_83C259EC"))) PPC_WEAK_FUNC(sub_83C259EC);
PPC_FUNC_IMPL(__imp__sub_83C259EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C259F0"))) PPC_WEAK_FUNC(sub_83C259F0);
PPC_FUNC_IMPL(__imp__sub_83C259F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13536
	ctx.r7.s64 = ctx.r8.s64 + -13536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13536);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13536(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13536, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C25A18"))) PPC_WEAK_FUNC(sub_83C25A18);
PPC_FUNC_IMPL(__imp__sub_83C25A18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,15492
	ctx.r6.s64 = ctx.r7.s64 + 15492;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15420(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15420);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13536(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13536);
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
	// std r9,15492(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15492, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C25A60"))) PPC_WEAK_FUNC(sub_83C25A60);
PPC_FUNC_IMPL(__imp__sub_83C25A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1880
	ctx.r3.s64 = ctx.r11.s64 + -1880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25A6C"))) PPC_WEAK_FUNC(sub_83C25A6C);
PPC_FUNC_IMPL(__imp__sub_83C25A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25A70"))) PPC_WEAK_FUNC(sub_83C25A70);
PPC_FUNC_IMPL(__imp__sub_83C25A70) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13528
	ctx.r3.s64 = ctx.r11.s64 + -13528;
	// bl 0x8259af80
	ctx.lr = 0x83C25A88;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-1864
	ctx.r3.s64 = ctx.r10.s64 + -1864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C25A94;
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

__attribute__((alias("__imp__sub_83C25AA4"))) PPC_WEAK_FUNC(sub_83C25AA4);
PPC_FUNC_IMPL(__imp__sub_83C25AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25AA8"))) PPC_WEAK_FUNC(sub_83C25AA8);
PPC_FUNC_IMPL(__imp__sub_83C25AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13548
	ctx.r11.s64 = ctx.r8.s64 + -13548;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,15468(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15468);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1872
	ctx.r3.s64 = ctx.r6.s64 + -1872;
	// stw r10,-13548(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13548, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25AD8"))) PPC_WEAK_FUNC(sub_83C25AD8);
PPC_FUNC_IMPL(__imp__sub_83C25AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1856
	ctx.r3.s64 = ctx.r11.s64 + -1856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25AE4"))) PPC_WEAK_FUNC(sub_83C25AE4);
PPC_FUNC_IMPL(__imp__sub_83C25AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25AE8"))) PPC_WEAK_FUNC(sub_83C25AE8);
PPC_FUNC_IMPL(__imp__sub_83C25AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1848
	ctx.r3.s64 = ctx.r11.s64 + -1848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25AF4"))) PPC_WEAK_FUNC(sub_83C25AF4);
PPC_FUNC_IMPL(__imp__sub_83C25AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25AF8"))) PPC_WEAK_FUNC(sub_83C25AF8);
PPC_FUNC_IMPL(__imp__sub_83C25AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1840
	ctx.r3.s64 = ctx.r11.s64 + -1840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B04"))) PPC_WEAK_FUNC(sub_83C25B04);
PPC_FUNC_IMPL(__imp__sub_83C25B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B08"))) PPC_WEAK_FUNC(sub_83C25B08);
PPC_FUNC_IMPL(__imp__sub_83C25B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1832
	ctx.r3.s64 = ctx.r11.s64 + -1832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B14"))) PPC_WEAK_FUNC(sub_83C25B14);
PPC_FUNC_IMPL(__imp__sub_83C25B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B18"))) PPC_WEAK_FUNC(sub_83C25B18);
PPC_FUNC_IMPL(__imp__sub_83C25B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1824
	ctx.r3.s64 = ctx.r11.s64 + -1824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B24"))) PPC_WEAK_FUNC(sub_83C25B24);
PPC_FUNC_IMPL(__imp__sub_83C25B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B28"))) PPC_WEAK_FUNC(sub_83C25B28);
PPC_FUNC_IMPL(__imp__sub_83C25B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1816
	ctx.r3.s64 = ctx.r11.s64 + -1816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B34"))) PPC_WEAK_FUNC(sub_83C25B34);
PPC_FUNC_IMPL(__imp__sub_83C25B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B38"))) PPC_WEAK_FUNC(sub_83C25B38);
PPC_FUNC_IMPL(__imp__sub_83C25B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1808
	ctx.r3.s64 = ctx.r11.s64 + -1808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B44"))) PPC_WEAK_FUNC(sub_83C25B44);
PPC_FUNC_IMPL(__imp__sub_83C25B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B48"))) PPC_WEAK_FUNC(sub_83C25B48);
PPC_FUNC_IMPL(__imp__sub_83C25B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1800
	ctx.r3.s64 = ctx.r11.s64 + -1800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B54"))) PPC_WEAK_FUNC(sub_83C25B54);
PPC_FUNC_IMPL(__imp__sub_83C25B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B58"))) PPC_WEAK_FUNC(sub_83C25B58);
PPC_FUNC_IMPL(__imp__sub_83C25B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1792
	ctx.r3.s64 = ctx.r11.s64 + -1792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B64"))) PPC_WEAK_FUNC(sub_83C25B64);
PPC_FUNC_IMPL(__imp__sub_83C25B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B68"))) PPC_WEAK_FUNC(sub_83C25B68);
PPC_FUNC_IMPL(__imp__sub_83C25B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1784
	ctx.r3.s64 = ctx.r11.s64 + -1784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B74"))) PPC_WEAK_FUNC(sub_83C25B74);
PPC_FUNC_IMPL(__imp__sub_83C25B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B78"))) PPC_WEAK_FUNC(sub_83C25B78);
PPC_FUNC_IMPL(__imp__sub_83C25B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1776
	ctx.r3.s64 = ctx.r11.s64 + -1776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B84"))) PPC_WEAK_FUNC(sub_83C25B84);
PPC_FUNC_IMPL(__imp__sub_83C25B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B88"))) PPC_WEAK_FUNC(sub_83C25B88);
PPC_FUNC_IMPL(__imp__sub_83C25B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1768
	ctx.r3.s64 = ctx.r11.s64 + -1768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25B94"))) PPC_WEAK_FUNC(sub_83C25B94);
PPC_FUNC_IMPL(__imp__sub_83C25B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25B98"))) PPC_WEAK_FUNC(sub_83C25B98);
PPC_FUNC_IMPL(__imp__sub_83C25B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1760
	ctx.r3.s64 = ctx.r11.s64 + -1760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25BA4"))) PPC_WEAK_FUNC(sub_83C25BA4);
PPC_FUNC_IMPL(__imp__sub_83C25BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25BA8"))) PPC_WEAK_FUNC(sub_83C25BA8);
PPC_FUNC_IMPL(__imp__sub_83C25BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1752
	ctx.r3.s64 = ctx.r11.s64 + -1752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25BB4"))) PPC_WEAK_FUNC(sub_83C25BB4);
PPC_FUNC_IMPL(__imp__sub_83C25BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25BB8"))) PPC_WEAK_FUNC(sub_83C25BB8);
PPC_FUNC_IMPL(__imp__sub_83C25BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1744
	ctx.r3.s64 = ctx.r11.s64 + -1744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25BC4"))) PPC_WEAK_FUNC(sub_83C25BC4);
PPC_FUNC_IMPL(__imp__sub_83C25BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25BC8"))) PPC_WEAK_FUNC(sub_83C25BC8);
PPC_FUNC_IMPL(__imp__sub_83C25BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1736
	ctx.r3.s64 = ctx.r11.s64 + -1736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25BD4"))) PPC_WEAK_FUNC(sub_83C25BD4);
PPC_FUNC_IMPL(__imp__sub_83C25BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25BD8"))) PPC_WEAK_FUNC(sub_83C25BD8);
PPC_FUNC_IMPL(__imp__sub_83C25BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1728
	ctx.r3.s64 = ctx.r11.s64 + -1728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25BE4"))) PPC_WEAK_FUNC(sub_83C25BE4);
PPC_FUNC_IMPL(__imp__sub_83C25BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25BE8"))) PPC_WEAK_FUNC(sub_83C25BE8);
PPC_FUNC_IMPL(__imp__sub_83C25BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1720
	ctx.r3.s64 = ctx.r11.s64 + -1720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25BF4"))) PPC_WEAK_FUNC(sub_83C25BF4);
PPC_FUNC_IMPL(__imp__sub_83C25BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25BF8"))) PPC_WEAK_FUNC(sub_83C25BF8);
PPC_FUNC_IMPL(__imp__sub_83C25BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1712
	ctx.r3.s64 = ctx.r11.s64 + -1712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25C04"))) PPC_WEAK_FUNC(sub_83C25C04);
PPC_FUNC_IMPL(__imp__sub_83C25C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25C08"))) PPC_WEAK_FUNC(sub_83C25C08);
PPC_FUNC_IMPL(__imp__sub_83C25C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1704
	ctx.r3.s64 = ctx.r11.s64 + -1704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25C14"))) PPC_WEAK_FUNC(sub_83C25C14);
PPC_FUNC_IMPL(__imp__sub_83C25C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25C18"))) PPC_WEAK_FUNC(sub_83C25C18);
PPC_FUNC_IMPL(__imp__sub_83C25C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1696
	ctx.r3.s64 = ctx.r11.s64 + -1696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25C24"))) PPC_WEAK_FUNC(sub_83C25C24);
PPC_FUNC_IMPL(__imp__sub_83C25C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25C28"))) PPC_WEAK_FUNC(sub_83C25C28);
PPC_FUNC_IMPL(__imp__sub_83C25C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1688
	ctx.r3.s64 = ctx.r11.s64 + -1688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25C34"))) PPC_WEAK_FUNC(sub_83C25C34);
PPC_FUNC_IMPL(__imp__sub_83C25C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25C38"))) PPC_WEAK_FUNC(sub_83C25C38);
PPC_FUNC_IMPL(__imp__sub_83C25C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1680
	ctx.r3.s64 = ctx.r11.s64 + -1680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25C44"))) PPC_WEAK_FUNC(sub_83C25C44);
PPC_FUNC_IMPL(__imp__sub_83C25C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25C48"))) PPC_WEAK_FUNC(sub_83C25C48);
PPC_FUNC_IMPL(__imp__sub_83C25C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1672
	ctx.r3.s64 = ctx.r11.s64 + -1672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25C54"))) PPC_WEAK_FUNC(sub_83C25C54);
PPC_FUNC_IMPL(__imp__sub_83C25C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25C58"))) PPC_WEAK_FUNC(sub_83C25C58);
PPC_FUNC_IMPL(__imp__sub_83C25C58) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// bl 0x83523120
	ctx.lr = 0x83C25C70;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-1664
	ctx.r3.s64 = ctx.r10.s64 + -1664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C25C7C;
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

__attribute__((alias("__imp__sub_83C25C8C"))) PPC_WEAK_FUNC(sub_83C25C8C);
PPC_FUNC_IMPL(__imp__sub_83C25C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25C90"))) PPC_WEAK_FUNC(sub_83C25C90);
PPC_FUNC_IMPL(__imp__sub_83C25C90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13160
	ctx.r7.s64 = ctx.r8.s64 + -13160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13160(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C25CB8"))) PPC_WEAK_FUNC(sub_83C25CB8);
PPC_FUNC_IMPL(__imp__sub_83C25CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,15724
	ctx.r6.s64 = ctx.r7.s64 + 15724;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15652(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15652);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13160);
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
	// std r9,15724(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15724, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C25D00"))) PPC_WEAK_FUNC(sub_83C25D00);
PPC_FUNC_IMPL(__imp__sub_83C25D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25D0C"))) PPC_WEAK_FUNC(sub_83C25D0C);
PPC_FUNC_IMPL(__imp__sub_83C25D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25D10"))) PPC_WEAK_FUNC(sub_83C25D10);
PPC_FUNC_IMPL(__imp__sub_83C25D10) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-13152
	ctx.r3.s64 = ctx.r11.s64 + -13152;
	// bl 0x8259af80
	ctx.lr = 0x83C25D28;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-1632
	ctx.r3.s64 = ctx.r10.s64 + -1632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C25D34;
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

__attribute__((alias("__imp__sub_83C25D44"))) PPC_WEAK_FUNC(sub_83C25D44);
PPC_FUNC_IMPL(__imp__sub_83C25D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25D48"))) PPC_WEAK_FUNC(sub_83C25D48);
PPC_FUNC_IMPL(__imp__sub_83C25D48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13172
	ctx.r11.s64 = ctx.r8.s64 + -13172;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,15700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15700);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1640
	ctx.r3.s64 = ctx.r6.s64 + -1640;
	// stw r10,-13172(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13172, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25D78"))) PPC_WEAK_FUNC(sub_83C25D78);
PPC_FUNC_IMPL(__imp__sub_83C25D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1624
	ctx.r3.s64 = ctx.r11.s64 + -1624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25D84"))) PPC_WEAK_FUNC(sub_83C25D84);
PPC_FUNC_IMPL(__imp__sub_83C25D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25D88"))) PPC_WEAK_FUNC(sub_83C25D88);
PPC_FUNC_IMPL(__imp__sub_83C25D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1616
	ctx.r3.s64 = ctx.r11.s64 + -1616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25D94"))) PPC_WEAK_FUNC(sub_83C25D94);
PPC_FUNC_IMPL(__imp__sub_83C25D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25D98"))) PPC_WEAK_FUNC(sub_83C25D98);
PPC_FUNC_IMPL(__imp__sub_83C25D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1608
	ctx.r3.s64 = ctx.r11.s64 + -1608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25DA4"))) PPC_WEAK_FUNC(sub_83C25DA4);
PPC_FUNC_IMPL(__imp__sub_83C25DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25DA8"))) PPC_WEAK_FUNC(sub_83C25DA8);
PPC_FUNC_IMPL(__imp__sub_83C25DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1600
	ctx.r3.s64 = ctx.r11.s64 + -1600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25DB4"))) PPC_WEAK_FUNC(sub_83C25DB4);
PPC_FUNC_IMPL(__imp__sub_83C25DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25DB8"))) PPC_WEAK_FUNC(sub_83C25DB8);
PPC_FUNC_IMPL(__imp__sub_83C25DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1592
	ctx.r3.s64 = ctx.r11.s64 + -1592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25DC4"))) PPC_WEAK_FUNC(sub_83C25DC4);
PPC_FUNC_IMPL(__imp__sub_83C25DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25DC8"))) PPC_WEAK_FUNC(sub_83C25DC8);
PPC_FUNC_IMPL(__imp__sub_83C25DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1584
	ctx.r3.s64 = ctx.r11.s64 + -1584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25DD4"))) PPC_WEAK_FUNC(sub_83C25DD4);
PPC_FUNC_IMPL(__imp__sub_83C25DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25DD8"))) PPC_WEAK_FUNC(sub_83C25DD8);
PPC_FUNC_IMPL(__imp__sub_83C25DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1576
	ctx.r3.s64 = ctx.r11.s64 + -1576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25DE4"))) PPC_WEAK_FUNC(sub_83C25DE4);
PPC_FUNC_IMPL(__imp__sub_83C25DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25DE8"))) PPC_WEAK_FUNC(sub_83C25DE8);
PPC_FUNC_IMPL(__imp__sub_83C25DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1568
	ctx.r3.s64 = ctx.r11.s64 + -1568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25DF4"))) PPC_WEAK_FUNC(sub_83C25DF4);
PPC_FUNC_IMPL(__imp__sub_83C25DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25DF8"))) PPC_WEAK_FUNC(sub_83C25DF8);
PPC_FUNC_IMPL(__imp__sub_83C25DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1560
	ctx.r3.s64 = ctx.r11.s64 + -1560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25E04"))) PPC_WEAK_FUNC(sub_83C25E04);
PPC_FUNC_IMPL(__imp__sub_83C25E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25E08"))) PPC_WEAK_FUNC(sub_83C25E08);
PPC_FUNC_IMPL(__imp__sub_83C25E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1552
	ctx.r3.s64 = ctx.r11.s64 + -1552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25E14"))) PPC_WEAK_FUNC(sub_83C25E14);
PPC_FUNC_IMPL(__imp__sub_83C25E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25E18"))) PPC_WEAK_FUNC(sub_83C25E18);
PPC_FUNC_IMPL(__imp__sub_83C25E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1544
	ctx.r3.s64 = ctx.r11.s64 + -1544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25E24"))) PPC_WEAK_FUNC(sub_83C25E24);
PPC_FUNC_IMPL(__imp__sub_83C25E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25E28"))) PPC_WEAK_FUNC(sub_83C25E28);
PPC_FUNC_IMPL(__imp__sub_83C25E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25E34"))) PPC_WEAK_FUNC(sub_83C25E34);
PPC_FUNC_IMPL(__imp__sub_83C25E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25E38"))) PPC_WEAK_FUNC(sub_83C25E38);
PPC_FUNC_IMPL(__imp__sub_83C25E38) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-16288
	ctx.r4.s64 = ctx.r11.s64 + -16288;
	// addi r3,r10,15852
	ctx.r3.s64 = ctx.r10.s64 + 15852;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C25E5C;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-1512
	ctx.r3.s64 = ctx.r9.s64 + -1512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C25E68;
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

__attribute__((alias("__imp__sub_83C25E78"))) PPC_WEAK_FUNC(sub_83C25E78);
PPC_FUNC_IMPL(__imp__sub_83C25E78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12804
	ctx.r7.s64 = ctx.r8.s64 + -12804;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12804(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12804);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12804(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12804, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C25EA0"))) PPC_WEAK_FUNC(sub_83C25EA0);
PPC_FUNC_IMPL(__imp__sub_83C25EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,15880
	ctx.r6.s64 = ctx.r7.s64 + 15880;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15780(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15780);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12804(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12804);
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
	// std r9,15880(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C25EE8"))) PPC_WEAK_FUNC(sub_83C25EE8);
PPC_FUNC_IMPL(__imp__sub_83C25EE8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// bl 0x83523120
	ctx.lr = 0x83C25F00;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-1528
	ctx.r3.s64 = ctx.r10.s64 + -1528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C25F0C;
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

__attribute__((alias("__imp__sub_83C25F1C"))) PPC_WEAK_FUNC(sub_83C25F1C);
PPC_FUNC_IMPL(__imp__sub_83C25F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25F20"))) PPC_WEAK_FUNC(sub_83C25F20);
PPC_FUNC_IMPL(__imp__sub_83C25F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1408
	ctx.r3.s64 = ctx.r11.s64 + -1408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25F2C"))) PPC_WEAK_FUNC(sub_83C25F2C);
PPC_FUNC_IMPL(__imp__sub_83C25F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25F30"))) PPC_WEAK_FUNC(sub_83C25F30);
PPC_FUNC_IMPL(__imp__sub_83C25F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1400
	ctx.r3.s64 = ctx.r11.s64 + -1400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25F3C"))) PPC_WEAK_FUNC(sub_83C25F3C);
PPC_FUNC_IMPL(__imp__sub_83C25F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25F40"))) PPC_WEAK_FUNC(sub_83C25F40);
PPC_FUNC_IMPL(__imp__sub_83C25F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1392
	ctx.r3.s64 = ctx.r11.s64 + -1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25F4C"))) PPC_WEAK_FUNC(sub_83C25F4C);
PPC_FUNC_IMPL(__imp__sub_83C25F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25F50"))) PPC_WEAK_FUNC(sub_83C25F50);
PPC_FUNC_IMPL(__imp__sub_83C25F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1384
	ctx.r3.s64 = ctx.r11.s64 + -1384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25F5C"))) PPC_WEAK_FUNC(sub_83C25F5C);
PPC_FUNC_IMPL(__imp__sub_83C25F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25F60"))) PPC_WEAK_FUNC(sub_83C25F60);
PPC_FUNC_IMPL(__imp__sub_83C25F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1376
	ctx.r3.s64 = ctx.r11.s64 + -1376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25F6C"))) PPC_WEAK_FUNC(sub_83C25F6C);
PPC_FUNC_IMPL(__imp__sub_83C25F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25F70"))) PPC_WEAK_FUNC(sub_83C25F70);
PPC_FUNC_IMPL(__imp__sub_83C25F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1368
	ctx.r3.s64 = ctx.r11.s64 + -1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25F7C"))) PPC_WEAK_FUNC(sub_83C25F7C);
PPC_FUNC_IMPL(__imp__sub_83C25F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25F80"))) PPC_WEAK_FUNC(sub_83C25F80);
PPC_FUNC_IMPL(__imp__sub_83C25F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1360
	ctx.r3.s64 = ctx.r11.s64 + -1360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25F8C"))) PPC_WEAK_FUNC(sub_83C25F8C);
PPC_FUNC_IMPL(__imp__sub_83C25F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25F90"))) PPC_WEAK_FUNC(sub_83C25F90);
PPC_FUNC_IMPL(__imp__sub_83C25F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1352
	ctx.r3.s64 = ctx.r11.s64 + -1352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25F9C"))) PPC_WEAK_FUNC(sub_83C25F9C);
PPC_FUNC_IMPL(__imp__sub_83C25F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25FA0"))) PPC_WEAK_FUNC(sub_83C25FA0);
PPC_FUNC_IMPL(__imp__sub_83C25FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1344
	ctx.r3.s64 = ctx.r11.s64 + -1344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25FAC"))) PPC_WEAK_FUNC(sub_83C25FAC);
PPC_FUNC_IMPL(__imp__sub_83C25FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25FB0"))) PPC_WEAK_FUNC(sub_83C25FB0);
PPC_FUNC_IMPL(__imp__sub_83C25FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1336
	ctx.r3.s64 = ctx.r11.s64 + -1336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25FBC"))) PPC_WEAK_FUNC(sub_83C25FBC);
PPC_FUNC_IMPL(__imp__sub_83C25FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25FC0"))) PPC_WEAK_FUNC(sub_83C25FC0);
PPC_FUNC_IMPL(__imp__sub_83C25FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1328
	ctx.r3.s64 = ctx.r11.s64 + -1328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25FCC"))) PPC_WEAK_FUNC(sub_83C25FCC);
PPC_FUNC_IMPL(__imp__sub_83C25FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25FD0"))) PPC_WEAK_FUNC(sub_83C25FD0);
PPC_FUNC_IMPL(__imp__sub_83C25FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1320
	ctx.r3.s64 = ctx.r11.s64 + -1320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C25FDC"))) PPC_WEAK_FUNC(sub_83C25FDC);
PPC_FUNC_IMPL(__imp__sub_83C25FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C25FE0"))) PPC_WEAK_FUNC(sub_83C25FE0);
PPC_FUNC_IMPL(__imp__sub_83C25FE0) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-16008
	ctx.r4.s64 = ctx.r11.s64 + -16008;
	// addi r3,r10,16004
	ctx.r3.s64 = ctx.r10.s64 + 16004;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C26004;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-1296
	ctx.r3.s64 = ctx.r9.s64 + -1296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26010;
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

__attribute__((alias("__imp__sub_83C26020"))) PPC_WEAK_FUNC(sub_83C26020);
PPC_FUNC_IMPL(__imp__sub_83C26020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12792
	ctx.r7.s64 = ctx.r8.s64 + -12792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12792);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12792(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12792, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26048"))) PPC_WEAK_FUNC(sub_83C26048);
PPC_FUNC_IMPL(__imp__sub_83C26048) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,16032
	ctx.r6.s64 = ctx.r7.s64 + 16032;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15932(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15932);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12792);
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
	// std r9,16032(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16032, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C26090"))) PPC_WEAK_FUNC(sub_83C26090);
PPC_FUNC_IMPL(__imp__sub_83C26090) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12796
	ctx.r3.s64 = ctx.r11.s64 + -12796;
	// bl 0x83523120
	ctx.lr = 0x83C260A8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-1312
	ctx.r3.s64 = ctx.r10.s64 + -1312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C260B4;
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

__attribute__((alias("__imp__sub_83C260C4"))) PPC_WEAK_FUNC(sub_83C260C4);
PPC_FUNC_IMPL(__imp__sub_83C260C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C260C8"))) PPC_WEAK_FUNC(sub_83C260C8);
PPC_FUNC_IMPL(__imp__sub_83C260C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1192
	ctx.r3.s64 = ctx.r11.s64 + -1192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C260D4"))) PPC_WEAK_FUNC(sub_83C260D4);
PPC_FUNC_IMPL(__imp__sub_83C260D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C260D8"))) PPC_WEAK_FUNC(sub_83C260D8);
PPC_FUNC_IMPL(__imp__sub_83C260D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1184
	ctx.r3.s64 = ctx.r11.s64 + -1184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C260E4"))) PPC_WEAK_FUNC(sub_83C260E4);
PPC_FUNC_IMPL(__imp__sub_83C260E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C260E8"))) PPC_WEAK_FUNC(sub_83C260E8);
PPC_FUNC_IMPL(__imp__sub_83C260E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1176
	ctx.r3.s64 = ctx.r11.s64 + -1176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C260F4"))) PPC_WEAK_FUNC(sub_83C260F4);
PPC_FUNC_IMPL(__imp__sub_83C260F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C260F8"))) PPC_WEAK_FUNC(sub_83C260F8);
PPC_FUNC_IMPL(__imp__sub_83C260F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1168
	ctx.r3.s64 = ctx.r11.s64 + -1168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26104"))) PPC_WEAK_FUNC(sub_83C26104);
PPC_FUNC_IMPL(__imp__sub_83C26104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26108"))) PPC_WEAK_FUNC(sub_83C26108);
PPC_FUNC_IMPL(__imp__sub_83C26108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1160
	ctx.r3.s64 = ctx.r11.s64 + -1160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26114"))) PPC_WEAK_FUNC(sub_83C26114);
PPC_FUNC_IMPL(__imp__sub_83C26114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26118"))) PPC_WEAK_FUNC(sub_83C26118);
PPC_FUNC_IMPL(__imp__sub_83C26118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1152
	ctx.r3.s64 = ctx.r11.s64 + -1152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26124"))) PPC_WEAK_FUNC(sub_83C26124);
PPC_FUNC_IMPL(__imp__sub_83C26124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26128"))) PPC_WEAK_FUNC(sub_83C26128);
PPC_FUNC_IMPL(__imp__sub_83C26128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1144
	ctx.r3.s64 = ctx.r11.s64 + -1144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26134"))) PPC_WEAK_FUNC(sub_83C26134);
PPC_FUNC_IMPL(__imp__sub_83C26134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26138"))) PPC_WEAK_FUNC(sub_83C26138);
PPC_FUNC_IMPL(__imp__sub_83C26138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1136
	ctx.r3.s64 = ctx.r11.s64 + -1136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26144"))) PPC_WEAK_FUNC(sub_83C26144);
PPC_FUNC_IMPL(__imp__sub_83C26144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26148"))) PPC_WEAK_FUNC(sub_83C26148);
PPC_FUNC_IMPL(__imp__sub_83C26148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1128
	ctx.r3.s64 = ctx.r11.s64 + -1128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26154"))) PPC_WEAK_FUNC(sub_83C26154);
PPC_FUNC_IMPL(__imp__sub_83C26154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26158"))) PPC_WEAK_FUNC(sub_83C26158);
PPC_FUNC_IMPL(__imp__sub_83C26158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1120
	ctx.r3.s64 = ctx.r11.s64 + -1120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26164"))) PPC_WEAK_FUNC(sub_83C26164);
PPC_FUNC_IMPL(__imp__sub_83C26164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26168"))) PPC_WEAK_FUNC(sub_83C26168);
PPC_FUNC_IMPL(__imp__sub_83C26168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1112
	ctx.r3.s64 = ctx.r11.s64 + -1112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26174"))) PPC_WEAK_FUNC(sub_83C26174);
PPC_FUNC_IMPL(__imp__sub_83C26174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26178"))) PPC_WEAK_FUNC(sub_83C26178);
PPC_FUNC_IMPL(__imp__sub_83C26178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1104
	ctx.r3.s64 = ctx.r11.s64 + -1104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26184"))) PPC_WEAK_FUNC(sub_83C26184);
PPC_FUNC_IMPL(__imp__sub_83C26184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26188"))) PPC_WEAK_FUNC(sub_83C26188);
PPC_FUNC_IMPL(__imp__sub_83C26188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1096
	ctx.r3.s64 = ctx.r11.s64 + -1096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26194"))) PPC_WEAK_FUNC(sub_83C26194);
PPC_FUNC_IMPL(__imp__sub_83C26194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26198"))) PPC_WEAK_FUNC(sub_83C26198);
PPC_FUNC_IMPL(__imp__sub_83C26198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1088
	ctx.r3.s64 = ctx.r11.s64 + -1088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C261A4"))) PPC_WEAK_FUNC(sub_83C261A4);
PPC_FUNC_IMPL(__imp__sub_83C261A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C261A8"))) PPC_WEAK_FUNC(sub_83C261A8);
PPC_FUNC_IMPL(__imp__sub_83C261A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1080
	ctx.r3.s64 = ctx.r11.s64 + -1080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C261B4"))) PPC_WEAK_FUNC(sub_83C261B4);
PPC_FUNC_IMPL(__imp__sub_83C261B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C261B8"))) PPC_WEAK_FUNC(sub_83C261B8);
PPC_FUNC_IMPL(__imp__sub_83C261B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1072
	ctx.r3.s64 = ctx.r11.s64 + -1072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C261C4"))) PPC_WEAK_FUNC(sub_83C261C4);
PPC_FUNC_IMPL(__imp__sub_83C261C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C261C8"))) PPC_WEAK_FUNC(sub_83C261C8);
PPC_FUNC_IMPL(__imp__sub_83C261C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1064
	ctx.r3.s64 = ctx.r11.s64 + -1064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C261D4"))) PPC_WEAK_FUNC(sub_83C261D4);
PPC_FUNC_IMPL(__imp__sub_83C261D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C261D8"))) PPC_WEAK_FUNC(sub_83C261D8);
PPC_FUNC_IMPL(__imp__sub_83C261D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1056
	ctx.r3.s64 = ctx.r11.s64 + -1056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C261E4"))) PPC_WEAK_FUNC(sub_83C261E4);
PPC_FUNC_IMPL(__imp__sub_83C261E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C261E8"))) PPC_WEAK_FUNC(sub_83C261E8);
PPC_FUNC_IMPL(__imp__sub_83C261E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1048
	ctx.r3.s64 = ctx.r11.s64 + -1048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C261F4"))) PPC_WEAK_FUNC(sub_83C261F4);
PPC_FUNC_IMPL(__imp__sub_83C261F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C261F8"))) PPC_WEAK_FUNC(sub_83C261F8);
PPC_FUNC_IMPL(__imp__sub_83C261F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1040
	ctx.r3.s64 = ctx.r11.s64 + -1040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26204"))) PPC_WEAK_FUNC(sub_83C26204);
PPC_FUNC_IMPL(__imp__sub_83C26204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26208"))) PPC_WEAK_FUNC(sub_83C26208);
PPC_FUNC_IMPL(__imp__sub_83C26208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1032
	ctx.r3.s64 = ctx.r11.s64 + -1032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26214"))) PPC_WEAK_FUNC(sub_83C26214);
PPC_FUNC_IMPL(__imp__sub_83C26214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26218"))) PPC_WEAK_FUNC(sub_83C26218);
PPC_FUNC_IMPL(__imp__sub_83C26218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1024
	ctx.r3.s64 = ctx.r11.s64 + -1024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26224"))) PPC_WEAK_FUNC(sub_83C26224);
PPC_FUNC_IMPL(__imp__sub_83C26224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26228"))) PPC_WEAK_FUNC(sub_83C26228);
PPC_FUNC_IMPL(__imp__sub_83C26228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1016
	ctx.r3.s64 = ctx.r11.s64 + -1016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26234"))) PPC_WEAK_FUNC(sub_83C26234);
PPC_FUNC_IMPL(__imp__sub_83C26234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26238"))) PPC_WEAK_FUNC(sub_83C26238);
PPC_FUNC_IMPL(__imp__sub_83C26238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-1008
	ctx.r3.s64 = ctx.r11.s64 + -1008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C26244"))) PPC_WEAK_FUNC(sub_83C26244);
PPC_FUNC_IMPL(__imp__sub_83C26244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26248"))) PPC_WEAK_FUNC(sub_83C26248);
PPC_FUNC_IMPL(__imp__sub_83C26248) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-15464
	ctx.r4.s64 = ctx.r11.s64 + -15464;
	// addi r3,r10,16260
	ctx.r3.s64 = ctx.r10.s64 + 16260;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C2626C;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-984
	ctx.r3.s64 = ctx.r9.s64 + -984;
	// bl 0x831cdcc8
	ctx.lr = 0x83C26278;
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

__attribute__((alias("__imp__sub_83C26288"))) PPC_WEAK_FUNC(sub_83C26288);
PPC_FUNC_IMPL(__imp__sub_83C26288) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12776
	ctx.r7.s64 = ctx.r8.s64 + -12776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12776(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C262B0"))) PPC_WEAK_FUNC(sub_83C262B0);
PPC_FUNC_IMPL(__imp__sub_83C262B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,16288
	ctx.r6.s64 = ctx.r7.s64 + 16288;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16188(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16188);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12776);
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
	// std r9,16288(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16288, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C262F8"))) PPC_WEAK_FUNC(sub_83C262F8);
PPC_FUNC_IMPL(__imp__sub_83C262F8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-12780
	ctx.r3.s64 = ctx.r11.s64 + -12780;
	// bl 0x83523120
	ctx.lr = 0x83C26310;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-1000
	ctx.r3.s64 = ctx.r10.s64 + -1000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2631C;
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

__attribute__((alias("__imp__sub_83C2632C"))) PPC_WEAK_FUNC(sub_83C2632C);
PPC_FUNC_IMPL(__imp__sub_83C2632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26330"))) PPC_WEAK_FUNC(sub_83C26330);
PPC_FUNC_IMPL(__imp__sub_83C26330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-880
	ctx.r3.s64 = ctx.r11.s64 + -880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2633C"))) PPC_WEAK_FUNC(sub_83C2633C);
PPC_FUNC_IMPL(__imp__sub_83C2633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26340"))) PPC_WEAK_FUNC(sub_83C26340);
PPC_FUNC_IMPL(__imp__sub_83C26340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-872
	ctx.r3.s64 = ctx.r11.s64 + -872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2634C"))) PPC_WEAK_FUNC(sub_83C2634C);
PPC_FUNC_IMPL(__imp__sub_83C2634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26350"))) PPC_WEAK_FUNC(sub_83C26350);
PPC_FUNC_IMPL(__imp__sub_83C26350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-864
	ctx.r3.s64 = ctx.r11.s64 + -864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2635C"))) PPC_WEAK_FUNC(sub_83C2635C);
PPC_FUNC_IMPL(__imp__sub_83C2635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26360"))) PPC_WEAK_FUNC(sub_83C26360);
PPC_FUNC_IMPL(__imp__sub_83C26360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-856
	ctx.r3.s64 = ctx.r11.s64 + -856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2636C"))) PPC_WEAK_FUNC(sub_83C2636C);
PPC_FUNC_IMPL(__imp__sub_83C2636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26370"))) PPC_WEAK_FUNC(sub_83C26370);
PPC_FUNC_IMPL(__imp__sub_83C26370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-848
	ctx.r3.s64 = ctx.r11.s64 + -848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2637C"))) PPC_WEAK_FUNC(sub_83C2637C);
PPC_FUNC_IMPL(__imp__sub_83C2637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26380"))) PPC_WEAK_FUNC(sub_83C26380);
PPC_FUNC_IMPL(__imp__sub_83C26380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-840
	ctx.r3.s64 = ctx.r11.s64 + -840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2638C"))) PPC_WEAK_FUNC(sub_83C2638C);
PPC_FUNC_IMPL(__imp__sub_83C2638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C26390"))) PPC_WEAK_FUNC(sub_83C26390);
PPC_FUNC_IMPL(__imp__sub_83C26390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2639C"))) PPC_WEAK_FUNC(sub_83C2639C);
PPC_FUNC_IMPL(__imp__sub_83C2639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C263A0"))) PPC_WEAK_FUNC(sub_83C263A0);
PPC_FUNC_IMPL(__imp__sub_83C263A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-824
	ctx.r3.s64 = ctx.r11.s64 + -824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C263AC"))) PPC_WEAK_FUNC(sub_83C263AC);
PPC_FUNC_IMPL(__imp__sub_83C263AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C263B0"))) PPC_WEAK_FUNC(sub_83C263B0);
PPC_FUNC_IMPL(__imp__sub_83C263B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-816
	ctx.r3.s64 = ctx.r11.s64 + -816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

