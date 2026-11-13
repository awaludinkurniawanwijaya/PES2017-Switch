#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C99FB0"))) PPC_WEAK_FUNC(sub_83C99FB0);
PPC_FUNC_IMPL(__imp__sub_83C99FB0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24896
	ctx.r3.s64 = ctx.r11.s64 + -24896;
	// bl 0x83523120
	ctx.lr = 0x83C99FC8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,31992
	ctx.r3.s64 = ctx.r10.s64 + 31992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C99FD4;
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

__attribute__((alias("__imp__sub_83C99FE4"))) PPC_WEAK_FUNC(sub_83C99FE4);
PPC_FUNC_IMPL(__imp__sub_83C99FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C99FE8"))) PPC_WEAK_FUNC(sub_83C99FE8);
PPC_FUNC_IMPL(__imp__sub_83C99FE8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24888
	ctx.r3.s64 = ctx.r11.s64 + -24888;
	// bl 0x83523120
	ctx.lr = 0x83C9A000;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32008
	ctx.r3.s64 = ctx.r10.s64 + 32008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A00C;
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

__attribute__((alias("__imp__sub_83C9A01C"))) PPC_WEAK_FUNC(sub_83C9A01C);
PPC_FUNC_IMPL(__imp__sub_83C9A01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A020"))) PPC_WEAK_FUNC(sub_83C9A020);
PPC_FUNC_IMPL(__imp__sub_83C9A020) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24887
	ctx.r3.s64 = ctx.r11.s64 + -24887;
	// bl 0x83523120
	ctx.lr = 0x83C9A038;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32024
	ctx.r3.s64 = ctx.r10.s64 + 32024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A044;
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

__attribute__((alias("__imp__sub_83C9A054"))) PPC_WEAK_FUNC(sub_83C9A054);
PPC_FUNC_IMPL(__imp__sub_83C9A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A058"))) PPC_WEAK_FUNC(sub_83C9A058);
PPC_FUNC_IMPL(__imp__sub_83C9A058) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24886
	ctx.r3.s64 = ctx.r11.s64 + -24886;
	// bl 0x83523120
	ctx.lr = 0x83C9A070;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32040
	ctx.r3.s64 = ctx.r10.s64 + 32040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A07C;
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

__attribute__((alias("__imp__sub_83C9A08C"))) PPC_WEAK_FUNC(sub_83C9A08C);
PPC_FUNC_IMPL(__imp__sub_83C9A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A090"))) PPC_WEAK_FUNC(sub_83C9A090);
PPC_FUNC_IMPL(__imp__sub_83C9A090) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24885
	ctx.r3.s64 = ctx.r11.s64 + -24885;
	// bl 0x83523120
	ctx.lr = 0x83C9A0A8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32056
	ctx.r3.s64 = ctx.r10.s64 + 32056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A0B4;
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

__attribute__((alias("__imp__sub_83C9A0C4"))) PPC_WEAK_FUNC(sub_83C9A0C4);
PPC_FUNC_IMPL(__imp__sub_83C9A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A0C8"))) PPC_WEAK_FUNC(sub_83C9A0C8);
PPC_FUNC_IMPL(__imp__sub_83C9A0C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24884
	ctx.r3.s64 = ctx.r11.s64 + -24884;
	// bl 0x83523120
	ctx.lr = 0x83C9A0E0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32072
	ctx.r3.s64 = ctx.r10.s64 + 32072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A0EC;
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

__attribute__((alias("__imp__sub_83C9A0FC"))) PPC_WEAK_FUNC(sub_83C9A0FC);
PPC_FUNC_IMPL(__imp__sub_83C9A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A100"))) PPC_WEAK_FUNC(sub_83C9A100);
PPC_FUNC_IMPL(__imp__sub_83C9A100) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24876
	ctx.r3.s64 = ctx.r11.s64 + -24876;
	// bl 0x83523120
	ctx.lr = 0x83C9A118;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32088
	ctx.r3.s64 = ctx.r10.s64 + 32088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A124;
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

__attribute__((alias("__imp__sub_83C9A134"))) PPC_WEAK_FUNC(sub_83C9A134);
PPC_FUNC_IMPL(__imp__sub_83C9A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A138"))) PPC_WEAK_FUNC(sub_83C9A138);
PPC_FUNC_IMPL(__imp__sub_83C9A138) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24875
	ctx.r3.s64 = ctx.r11.s64 + -24875;
	// bl 0x83523120
	ctx.lr = 0x83C9A150;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32104
	ctx.r3.s64 = ctx.r10.s64 + 32104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A15C;
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

__attribute__((alias("__imp__sub_83C9A16C"))) PPC_WEAK_FUNC(sub_83C9A16C);
PPC_FUNC_IMPL(__imp__sub_83C9A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A170"))) PPC_WEAK_FUNC(sub_83C9A170);
PPC_FUNC_IMPL(__imp__sub_83C9A170) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24874
	ctx.r3.s64 = ctx.r11.s64 + -24874;
	// bl 0x83523120
	ctx.lr = 0x83C9A188;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32120
	ctx.r3.s64 = ctx.r10.s64 + 32120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A194;
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

__attribute__((alias("__imp__sub_83C9A1A4"))) PPC_WEAK_FUNC(sub_83C9A1A4);
PPC_FUNC_IMPL(__imp__sub_83C9A1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A1A8"))) PPC_WEAK_FUNC(sub_83C9A1A8);
PPC_FUNC_IMPL(__imp__sub_83C9A1A8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24864
	ctx.r3.s64 = ctx.r11.s64 + -24864;
	// bl 0x83523120
	ctx.lr = 0x83C9A1C0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32136
	ctx.r3.s64 = ctx.r10.s64 + 32136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A1CC;
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

__attribute__((alias("__imp__sub_83C9A1DC"))) PPC_WEAK_FUNC(sub_83C9A1DC);
PPC_FUNC_IMPL(__imp__sub_83C9A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A1E0"))) PPC_WEAK_FUNC(sub_83C9A1E0);
PPC_FUNC_IMPL(__imp__sub_83C9A1E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24860
	ctx.r3.s64 = ctx.r11.s64 + -24860;
	// bl 0x83523120
	ctx.lr = 0x83C9A1F8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32152
	ctx.r3.s64 = ctx.r10.s64 + 32152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A204;
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

__attribute__((alias("__imp__sub_83C9A214"))) PPC_WEAK_FUNC(sub_83C9A214);
PPC_FUNC_IMPL(__imp__sub_83C9A214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A218"))) PPC_WEAK_FUNC(sub_83C9A218);
PPC_FUNC_IMPL(__imp__sub_83C9A218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83522850
	ctx.lr = 0x83C9A228;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// stw r11,-24848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24848, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83c9a268
	if (!cr6.eq) goto loc_83C9A268;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_83C9A24C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83c9a24c
	if (!cr0.eq) goto loc_83C9A24C;
loc_83C9A268:
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,32168
	ctx.r3.s64 = ctx.r11.s64 + 32168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A274;
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

__attribute__((alias("__imp__sub_83C9A284"))) PPC_WEAK_FUNC(sub_83C9A284);
PPC_FUNC_IMPL(__imp__sub_83C9A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A288"))) PPC_WEAK_FUNC(sub_83C9A288);
PPC_FUNC_IMPL(__imp__sub_83C9A288) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r11,-24472
	ctx.r3.s64 = ctx.r11.s64 + -24472;
	// bl 0x83522540
	ctx.lr = 0x83C9A2A4;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,32184
	ctx.r3.s64 = ctx.r9.s64 + 32184;
	// stw r11,-24852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24852, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A2BC;
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

__attribute__((alias("__imp__sub_83C9A2CC"))) PPC_WEAK_FUNC(sub_83C9A2CC);
PPC_FUNC_IMPL(__imp__sub_83C9A2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A2D0"))) PPC_WEAK_FUNC(sub_83C9A2D0);
PPC_FUNC_IMPL(__imp__sub_83C9A2D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,-24440
	ctx.r3.s64 = ctx.r11.s64 + -24440;
	// bl 0x83522540
	ctx.lr = 0x83C9A2EC;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,32200
	ctx.r3.s64 = ctx.r9.s64 + 32200;
	// stw r11,-24856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24856, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A304;
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

__attribute__((alias("__imp__sub_83C9A314"))) PPC_WEAK_FUNC(sub_83C9A314);
PPC_FUNC_IMPL(__imp__sub_83C9A314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A318"))) PPC_WEAK_FUNC(sub_83C9A318);
PPC_FUNC_IMPL(__imp__sub_83C9A318) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,30
	ctx.r4.s64 = 30;
	// addi r3,r11,-24404
	ctx.r3.s64 = ctx.r11.s64 + -24404;
	// bl 0x83522540
	ctx.lr = 0x83C9A334;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,32216
	ctx.r3.s64 = ctx.r9.s64 + 32216;
	// stw r11,-24844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24844, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A34C;
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

__attribute__((alias("__imp__sub_83C9A35C"))) PPC_WEAK_FUNC(sub_83C9A35C);
PPC_FUNC_IMPL(__imp__sub_83C9A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A360"))) PPC_WEAK_FUNC(sub_83C9A360);
PPC_FUNC_IMPL(__imp__sub_83C9A360) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r11,-24372
	ctx.r3.s64 = ctx.r11.s64 + -24372;
	// bl 0x83522540
	ctx.lr = 0x83C9A37C;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,32232
	ctx.r3.s64 = ctx.r9.s64 + 32232;
	// stw r11,-24840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24840, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A394;
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

__attribute__((alias("__imp__sub_83C9A3A4"))) PPC_WEAK_FUNC(sub_83C9A3A4);
PPC_FUNC_IMPL(__imp__sub_83C9A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A3A8"))) PPC_WEAK_FUNC(sub_83C9A3A8);
PPC_FUNC_IMPL(__imp__sub_83C9A3A8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24836
	ctx.r3.s64 = ctx.r11.s64 + -24836;
	// bl 0x83523120
	ctx.lr = 0x83C9A3C0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32248
	ctx.r3.s64 = ctx.r10.s64 + 32248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A3CC;
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

__attribute__((alias("__imp__sub_83C9A3DC"))) PPC_WEAK_FUNC(sub_83C9A3DC);
PPC_FUNC_IMPL(__imp__sub_83C9A3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A3E0"))) PPC_WEAK_FUNC(sub_83C9A3E0);
PPC_FUNC_IMPL(__imp__sub_83C9A3E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24824
	ctx.r3.s64 = ctx.r11.s64 + -24824;
	// bl 0x83523120
	ctx.lr = 0x83C9A3F8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32264
	ctx.r3.s64 = ctx.r10.s64 + 32264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A404;
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

__attribute__((alias("__imp__sub_83C9A414"))) PPC_WEAK_FUNC(sub_83C9A414);
PPC_FUNC_IMPL(__imp__sub_83C9A414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A418"))) PPC_WEAK_FUNC(sub_83C9A418);
PPC_FUNC_IMPL(__imp__sub_83C9A418) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24816
	ctx.r3.s64 = ctx.r11.s64 + -24816;
	// bl 0x83523120
	ctx.lr = 0x83C9A430;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32280
	ctx.r3.s64 = ctx.r10.s64 + 32280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A43C;
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

__attribute__((alias("__imp__sub_83C9A44C"))) PPC_WEAK_FUNC(sub_83C9A44C);
PPC_FUNC_IMPL(__imp__sub_83C9A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A450"))) PPC_WEAK_FUNC(sub_83C9A450);
PPC_FUNC_IMPL(__imp__sub_83C9A450) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83C9A474;
	sub_82595718(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-24812
	ctx.r9.s64 = ctx.r10.s64 + -24812;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,32392
	ctx.r3.s64 = ctx.r8.s64 + 32392;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A4B8;
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

__attribute__((alias("__imp__sub_83C9A4C8"))) PPC_WEAK_FUNC(sub_83C9A4C8);
PPC_FUNC_IMPL(__imp__sub_83C9A4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9A4D4"))) PPC_WEAK_FUNC(sub_83C9A4D4);
PPC_FUNC_IMPL(__imp__sub_83C9A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A4D8"))) PPC_WEAK_FUNC(sub_83C9A4D8);
PPC_FUNC_IMPL(__imp__sub_83C9A4D8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24776
	ctx.r3.s64 = ctx.r11.s64 + -24776;
	// bl 0x83523120
	ctx.lr = 0x83C9A4F0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32480
	ctx.r3.s64 = ctx.r10.s64 + 32480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A4FC;
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

__attribute__((alias("__imp__sub_83C9A50C"))) PPC_WEAK_FUNC(sub_83C9A50C);
PPC_FUNC_IMPL(__imp__sub_83C9A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A510"))) PPC_WEAK_FUNC(sub_83C9A510);
PPC_FUNC_IMPL(__imp__sub_83C9A510) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24768
	ctx.r3.s64 = ctx.r11.s64 + -24768;
	// bl 0x83523120
	ctx.lr = 0x83C9A528;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32496
	ctx.r3.s64 = ctx.r10.s64 + 32496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A534;
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

__attribute__((alias("__imp__sub_83C9A544"))) PPC_WEAK_FUNC(sub_83C9A544);
PPC_FUNC_IMPL(__imp__sub_83C9A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A548"))) PPC_WEAK_FUNC(sub_83C9A548);
PPC_FUNC_IMPL(__imp__sub_83C9A548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r31,r11,-24760
	ctx.r31.s64 = ctx.r11.s64 + -24760;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83C9A570;
	sub_831CDCF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C9A58C"))) PPC_WEAK_FUNC(sub_83C9A58C);
PPC_FUNC_IMPL(__imp__sub_83C9A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A590"))) PPC_WEAK_FUNC(sub_83C9A590);
PPC_FUNC_IMPL(__imp__sub_83C9A590) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24648
	ctx.r3.s64 = ctx.r11.s64 + -24648;
	// bl 0x83523120
	ctx.lr = 0x83C9A5A8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32512
	ctx.r3.s64 = ctx.r10.s64 + 32512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A5B4;
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

__attribute__((alias("__imp__sub_83C9A5C4"))) PPC_WEAK_FUNC(sub_83C9A5C4);
PPC_FUNC_IMPL(__imp__sub_83C9A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A5C8"))) PPC_WEAK_FUNC(sub_83C9A5C8);
PPC_FUNC_IMPL(__imp__sub_83C9A5C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24640
	ctx.r3.s64 = ctx.r11.s64 + -24640;
	// bl 0x83523120
	ctx.lr = 0x83C9A5E0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32528
	ctx.r3.s64 = ctx.r10.s64 + 32528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A5EC;
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

__attribute__((alias("__imp__sub_83C9A5FC"))) PPC_WEAK_FUNC(sub_83C9A5FC);
PPC_FUNC_IMPL(__imp__sub_83C9A5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A600"))) PPC_WEAK_FUNC(sub_83C9A600);
PPC_FUNC_IMPL(__imp__sub_83C9A600) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83C9A624;
	sub_82595718(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,32544
	ctx.r3.s64 = ctx.r8.s64 + 32544;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A668;
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

__attribute__((alias("__imp__sub_83C9A678"))) PPC_WEAK_FUNC(sub_83C9A678);
PPC_FUNC_IMPL(__imp__sub_83C9A678) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83C9A69C;
	sub_82595718(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-24620
	ctx.r9.s64 = ctx.r10.s64 + -24620;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,32632
	ctx.r3.s64 = ctx.r8.s64 + 32632;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A6E0;
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

__attribute__((alias("__imp__sub_83C9A6F0"))) PPC_WEAK_FUNC(sub_83C9A6F0);
PPC_FUNC_IMPL(__imp__sub_83C9A6F0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24588
	ctx.r3.s64 = ctx.r11.s64 + -24588;
	// bl 0x83523120
	ctx.lr = 0x83C9A708;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,32720
	ctx.r3.s64 = ctx.r10.s64 + 32720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A714;
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

__attribute__((alias("__imp__sub_83C9A724"))) PPC_WEAK_FUNC(sub_83C9A724);
PPC_FUNC_IMPL(__imp__sub_83C9A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A728"))) PPC_WEAK_FUNC(sub_83C9A728);
PPC_FUNC_IMPL(__imp__sub_83C9A728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,32736
	ctx.r3.s64 = ctx.r11.s64 + 32736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C9A734"))) PPC_WEAK_FUNC(sub_83C9A734);
PPC_FUNC_IMPL(__imp__sub_83C9A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A738"))) PPC_WEAK_FUNC(sub_83C9A738);
PPC_FUNC_IMPL(__imp__sub_83C9A738) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83C9A75C;
	sub_82595718(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-24604
	ctx.r9.s64 = ctx.r10.s64 + -24604;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31786
	ctx.r8.s64 = -2083127296;
	// addi r3,r8,-32704
	ctx.r3.s64 = ctx.r8.s64 + -32704;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A7A0;
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

__attribute__((alias("__imp__sub_83C9A7B0"))) PPC_WEAK_FUNC(sub_83C9A7B0);
PPC_FUNC_IMPL(__imp__sub_83C9A7B0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24568
	ctx.r3.s64 = ctx.r11.s64 + -24568;
	// bl 0x83523120
	ctx.lr = 0x83C9A7C8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32616
	ctx.r3.s64 = ctx.r10.s64 + -32616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A7D4;
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

__attribute__((alias("__imp__sub_83C9A7E4"))) PPC_WEAK_FUNC(sub_83C9A7E4);
PPC_FUNC_IMPL(__imp__sub_83C9A7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A7E8"))) PPC_WEAK_FUNC(sub_83C9A7E8);
PPC_FUNC_IMPL(__imp__sub_83C9A7E8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24567
	ctx.r3.s64 = ctx.r11.s64 + -24567;
	// bl 0x83523120
	ctx.lr = 0x83C9A800;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32600
	ctx.r3.s64 = ctx.r10.s64 + -32600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A80C;
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

__attribute__((alias("__imp__sub_83C9A81C"))) PPC_WEAK_FUNC(sub_83C9A81C);
PPC_FUNC_IMPL(__imp__sub_83C9A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A820"))) PPC_WEAK_FUNC(sub_83C9A820);
PPC_FUNC_IMPL(__imp__sub_83C9A820) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24566
	ctx.r3.s64 = ctx.r11.s64 + -24566;
	// bl 0x83523120
	ctx.lr = 0x83C9A838;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32584
	ctx.r3.s64 = ctx.r10.s64 + -32584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A844;
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

__attribute__((alias("__imp__sub_83C9A854"))) PPC_WEAK_FUNC(sub_83C9A854);
PPC_FUNC_IMPL(__imp__sub_83C9A854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A858"))) PPC_WEAK_FUNC(sub_83C9A858);
PPC_FUNC_IMPL(__imp__sub_83C9A858) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24565
	ctx.r3.s64 = ctx.r11.s64 + -24565;
	// bl 0x83523120
	ctx.lr = 0x83C9A870;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32568
	ctx.r3.s64 = ctx.r10.s64 + -32568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A87C;
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

__attribute__((alias("__imp__sub_83C9A88C"))) PPC_WEAK_FUNC(sub_83C9A88C);
PPC_FUNC_IMPL(__imp__sub_83C9A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A890"))) PPC_WEAK_FUNC(sub_83C9A890);
PPC_FUNC_IMPL(__imp__sub_83C9A890) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24564
	ctx.r3.s64 = ctx.r11.s64 + -24564;
	// bl 0x83523120
	ctx.lr = 0x83C9A8A8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32552
	ctx.r3.s64 = ctx.r10.s64 + -32552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A8B4;
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

__attribute__((alias("__imp__sub_83C9A8C4"))) PPC_WEAK_FUNC(sub_83C9A8C4);
PPC_FUNC_IMPL(__imp__sub_83C9A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A8C8"))) PPC_WEAK_FUNC(sub_83C9A8C8);
PPC_FUNC_IMPL(__imp__sub_83C9A8C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24556
	ctx.r3.s64 = ctx.r11.s64 + -24556;
	// bl 0x83523120
	ctx.lr = 0x83C9A8E0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32536
	ctx.r3.s64 = ctx.r10.s64 + -32536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A8EC;
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

__attribute__((alias("__imp__sub_83C9A8FC"))) PPC_WEAK_FUNC(sub_83C9A8FC);
PPC_FUNC_IMPL(__imp__sub_83C9A8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A900"))) PPC_WEAK_FUNC(sub_83C9A900);
PPC_FUNC_IMPL(__imp__sub_83C9A900) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-19611
	ctx.r3.s64 = ctx.r11.s64 + -19611;
	// bl 0x83522540
	ctx.lr = 0x83C9A91C;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32520
	ctx.r3.s64 = ctx.r9.s64 + -32520;
	// stw r11,-24552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24552, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A934;
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

__attribute__((alias("__imp__sub_83C9A944"))) PPC_WEAK_FUNC(sub_83C9A944);
PPC_FUNC_IMPL(__imp__sub_83C9A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A948"))) PPC_WEAK_FUNC(sub_83C9A948);
PPC_FUNC_IMPL(__imp__sub_83C9A948) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24544
	ctx.r3.s64 = ctx.r11.s64 + -24544;
	// bl 0x83523120
	ctx.lr = 0x83C9A960;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32504
	ctx.r3.s64 = ctx.r10.s64 + -32504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A96C;
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

__attribute__((alias("__imp__sub_83C9A97C"))) PPC_WEAK_FUNC(sub_83C9A97C);
PPC_FUNC_IMPL(__imp__sub_83C9A97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A980"))) PPC_WEAK_FUNC(sub_83C9A980);
PPC_FUNC_IMPL(__imp__sub_83C9A980) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24543
	ctx.r3.s64 = ctx.r11.s64 + -24543;
	// bl 0x83523120
	ctx.lr = 0x83C9A998;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32488
	ctx.r3.s64 = ctx.r10.s64 + -32488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A9A4;
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

__attribute__((alias("__imp__sub_83C9A9B4"))) PPC_WEAK_FUNC(sub_83C9A9B4);
PPC_FUNC_IMPL(__imp__sub_83C9A9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A9B8"))) PPC_WEAK_FUNC(sub_83C9A9B8);
PPC_FUNC_IMPL(__imp__sub_83C9A9B8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24540
	ctx.r3.s64 = ctx.r11.s64 + -24540;
	// bl 0x83523120
	ctx.lr = 0x83C9A9D0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32472
	ctx.r3.s64 = ctx.r10.s64 + -32472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9A9DC;
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

__attribute__((alias("__imp__sub_83C9A9EC"))) PPC_WEAK_FUNC(sub_83C9A9EC);
PPC_FUNC_IMPL(__imp__sub_83C9A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9A9F0"))) PPC_WEAK_FUNC(sub_83C9A9F0);
PPC_FUNC_IMPL(__imp__sub_83C9A9F0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,-17120
	ctx.r3.s64 = ctx.r11.s64 + -17120;
	// bl 0x83522540
	ctx.lr = 0x83C9AA0C;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32456
	ctx.r3.s64 = ctx.r9.s64 + -32456;
	// stw r11,-24536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24536, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AA24;
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

__attribute__((alias("__imp__sub_83C9AA34"))) PPC_WEAK_FUNC(sub_83C9AA34);
PPC_FUNC_IMPL(__imp__sub_83C9AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9AA38"))) PPC_WEAK_FUNC(sub_83C9AA38);
PPC_FUNC_IMPL(__imp__sub_83C9AA38) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24532
	ctx.r3.s64 = ctx.r11.s64 + -24532;
	// bl 0x83523120
	ctx.lr = 0x83C9AA50;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32440
	ctx.r3.s64 = ctx.r10.s64 + -32440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AA5C;
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

__attribute__((alias("__imp__sub_83C9AA6C"))) PPC_WEAK_FUNC(sub_83C9AA6C);
PPC_FUNC_IMPL(__imp__sub_83C9AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9AA70"))) PPC_WEAK_FUNC(sub_83C9AA70);
PPC_FUNC_IMPL(__imp__sub_83C9AA70) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24531
	ctx.r3.s64 = ctx.r11.s64 + -24531;
	// bl 0x83523120
	ctx.lr = 0x83C9AA88;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32424
	ctx.r3.s64 = ctx.r10.s64 + -32424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AA94;
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

__attribute__((alias("__imp__sub_83C9AAA4"))) PPC_WEAK_FUNC(sub_83C9AAA4);
PPC_FUNC_IMPL(__imp__sub_83C9AAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9AAA8"))) PPC_WEAK_FUNC(sub_83C9AAA8);
PPC_FUNC_IMPL(__imp__sub_83C9AAA8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24530
	ctx.r3.s64 = ctx.r11.s64 + -24530;
	// bl 0x83523120
	ctx.lr = 0x83C9AAC0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32408
	ctx.r3.s64 = ctx.r10.s64 + -32408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AACC;
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

__attribute__((alias("__imp__sub_83C9AADC"))) PPC_WEAK_FUNC(sub_83C9AADC);
PPC_FUNC_IMPL(__imp__sub_83C9AADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9AAE0"))) PPC_WEAK_FUNC(sub_83C9AAE0);
PPC_FUNC_IMPL(__imp__sub_83C9AAE0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24529
	ctx.r3.s64 = ctx.r11.s64 + -24529;
	// bl 0x83523120
	ctx.lr = 0x83C9AAF8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32392
	ctx.r3.s64 = ctx.r10.s64 + -32392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AB04;
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

__attribute__((alias("__imp__sub_83C9AB14"))) PPC_WEAK_FUNC(sub_83C9AB14);
PPC_FUNC_IMPL(__imp__sub_83C9AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9AB18"))) PPC_WEAK_FUNC(sub_83C9AB18);
PPC_FUNC_IMPL(__imp__sub_83C9AB18) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24528
	ctx.r3.s64 = ctx.r11.s64 + -24528;
	// bl 0x83523120
	ctx.lr = 0x83C9AB30;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32376
	ctx.r3.s64 = ctx.r10.s64 + -32376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AB3C;
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

__attribute__((alias("__imp__sub_83C9AB4C"))) PPC_WEAK_FUNC(sub_83C9AB4C);
PPC_FUNC_IMPL(__imp__sub_83C9AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9AB50"))) PPC_WEAK_FUNC(sub_83C9AB50);
PPC_FUNC_IMPL(__imp__sub_83C9AB50) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24464
	ctx.r3.s64 = ctx.r11.s64 + -24464;
	// bl 0x83523120
	ctx.lr = 0x83C9AB68;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32360
	ctx.r3.s64 = ctx.r10.s64 + -32360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AB74;
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

__attribute__((alias("__imp__sub_83C9AB84"))) PPC_WEAK_FUNC(sub_83C9AB84);
PPC_FUNC_IMPL(__imp__sub_83C9AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9AB88"))) PPC_WEAK_FUNC(sub_83C9AB88);
PPC_FUNC_IMPL(__imp__sub_83C9AB88) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24220
	ctx.r3.s64 = ctx.r11.s64 + -24220;
	// addi r4,r10,-16704
	ctx.r4.s64 = ctx.r10.s64 + -16704;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9ABB4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32344
	ctx.r3.s64 = ctx.r9.s64 + -32344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9ABC0;
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

__attribute__((alias("__imp__sub_83C9ABD0"))) PPC_WEAK_FUNC(sub_83C9ABD0);
PPC_FUNC_IMPL(__imp__sub_83C9ABD0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24340
	ctx.r3.s64 = ctx.r11.s64 + -24340;
	// addi r4,r10,-16692
	ctx.r4.s64 = ctx.r10.s64 + -16692;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83523160
	ctx.lr = 0x83C9ABFC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32328
	ctx.r3.s64 = ctx.r9.s64 + -32328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AC08;
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

__attribute__((alias("__imp__sub_83C9AC18"))) PPC_WEAK_FUNC(sub_83C9AC18);
PPC_FUNC_IMPL(__imp__sub_83C9AC18) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24460
	ctx.r3.s64 = ctx.r11.s64 + -24460;
	// addi r4,r10,-16620
	ctx.r4.s64 = ctx.r10.s64 + -16620;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9AC44;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32312
	ctx.r3.s64 = ctx.r9.s64 + -32312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AC50;
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

__attribute__((alias("__imp__sub_83C9AC60"))) PPC_WEAK_FUNC(sub_83C9AC60);
PPC_FUNC_IMPL(__imp__sub_83C9AC60) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24400
	ctx.r3.s64 = ctx.r11.s64 + -24400;
	// addi r4,r10,-16608
	ctx.r4.s64 = ctx.r10.s64 + -16608;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9AC8C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32296
	ctx.r3.s64 = ctx.r9.s64 + -32296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AC98;
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

__attribute__((alias("__imp__sub_83C9ACA8"))) PPC_WEAK_FUNC(sub_83C9ACA8);
PPC_FUNC_IMPL(__imp__sub_83C9ACA8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24280
	ctx.r3.s64 = ctx.r11.s64 + -24280;
	// addi r4,r10,-16596
	ctx.r4.s64 = ctx.r10.s64 + -16596;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9ACD4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32280
	ctx.r3.s64 = ctx.r9.s64 + -32280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9ACE0;
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

__attribute__((alias("__imp__sub_83C9ACF0"))) PPC_WEAK_FUNC(sub_83C9ACF0);
PPC_FUNC_IMPL(__imp__sub_83C9ACF0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24524
	ctx.r3.s64 = ctx.r11.s64 + -24524;
	// addi r4,r10,-16584
	ctx.r4.s64 = ctx.r10.s64 + -16584;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9AD1C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32264
	ctx.r3.s64 = ctx.r9.s64 + -32264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AD28;
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

__attribute__((alias("__imp__sub_83C9AD38"))) PPC_WEAK_FUNC(sub_83C9AD38);
PPC_FUNC_IMPL(__imp__sub_83C9AD38) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-24156
	ctx.r3.s64 = ctx.r11.s64 + -24156;
	// bl 0x83523120
	ctx.lr = 0x83C9AD50;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32248
	ctx.r3.s64 = ctx.r10.s64 + -32248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AD5C;
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

__attribute__((alias("__imp__sub_83C9AD6C"))) PPC_WEAK_FUNC(sub_83C9AD6C);
PPC_FUNC_IMPL(__imp__sub_83C9AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9AD70"))) PPC_WEAK_FUNC(sub_83C9AD70);
PPC_FUNC_IMPL(__imp__sub_83C9AD70) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-23828
	ctx.r3.s64 = ctx.r11.s64 + -23828;
	// bl 0x83523120
	ctx.lr = 0x83C9AD88;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-32232
	ctx.r3.s64 = ctx.r10.s64 + -32232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AD94;
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

__attribute__((alias("__imp__sub_83C9ADA4"))) PPC_WEAK_FUNC(sub_83C9ADA4);
PPC_FUNC_IMPL(__imp__sub_83C9ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9ADA8"))) PPC_WEAK_FUNC(sub_83C9ADA8);
PPC_FUNC_IMPL(__imp__sub_83C9ADA8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22864
	ctx.r3.s64 = ctx.r11.s64 + -22864;
	// addi r4,r10,-15312
	ctx.r4.s64 = ctx.r10.s64 + -15312;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9ADD4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32216
	ctx.r3.s64 = ctx.r9.s64 + -32216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9ADE0;
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

__attribute__((alias("__imp__sub_83C9ADF0"))) PPC_WEAK_FUNC(sub_83C9ADF0);
PPC_FUNC_IMPL(__imp__sub_83C9ADF0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24068
	ctx.r3.s64 = ctx.r11.s64 + -24068;
	// addi r4,r10,-15304
	ctx.r4.s64 = ctx.r10.s64 + -15304;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9AE1C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32200
	ctx.r3.s64 = ctx.r9.s64 + -32200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AE28;
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

__attribute__((alias("__imp__sub_83C9AE38"))) PPC_WEAK_FUNC(sub_83C9AE38);
PPC_FUNC_IMPL(__imp__sub_83C9AE38) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23404
	ctx.r3.s64 = ctx.r11.s64 + -23404;
	// addi r4,r10,-15292
	ctx.r4.s64 = ctx.r10.s64 + -15292;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9AE64;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32184
	ctx.r3.s64 = ctx.r9.s64 + -32184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AE70;
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

__attribute__((alias("__imp__sub_83C9AE80"))) PPC_WEAK_FUNC(sub_83C9AE80);
PPC_FUNC_IMPL(__imp__sub_83C9AE80) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23644
	ctx.r3.s64 = ctx.r11.s64 + -23644;
	// addi r4,r10,-15276
	ctx.r4.s64 = ctx.r10.s64 + -15276;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9AEAC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32168
	ctx.r3.s64 = ctx.r9.s64 + -32168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AEB8;
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

__attribute__((alias("__imp__sub_83C9AEC8"))) PPC_WEAK_FUNC(sub_83C9AEC8);
PPC_FUNC_IMPL(__imp__sub_83C9AEC8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22084
	ctx.r3.s64 = ctx.r11.s64 + -22084;
	// addi r4,r10,-15268
	ctx.r4.s64 = ctx.r10.s64 + -15268;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9AEF4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32152
	ctx.r3.s64 = ctx.r9.s64 + -32152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AF00;
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

__attribute__((alias("__imp__sub_83C9AF10"))) PPC_WEAK_FUNC(sub_83C9AF10);
PPC_FUNC_IMPL(__imp__sub_83C9AF10) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22624
	ctx.r3.s64 = ctx.r11.s64 + -22624;
	// addi r4,r10,-15256
	ctx.r4.s64 = ctx.r10.s64 + -15256;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9AF3C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32136
	ctx.r3.s64 = ctx.r9.s64 + -32136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AF48;
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

__attribute__((alias("__imp__sub_83C9AF58"))) PPC_WEAK_FUNC(sub_83C9AF58);
PPC_FUNC_IMPL(__imp__sub_83C9AF58) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23584
	ctx.r3.s64 = ctx.r11.s64 + -23584;
	// addi r4,r10,-15240
	ctx.r4.s64 = ctx.r10.s64 + -15240;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x83523160
	ctx.lr = 0x83C9AF84;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32120
	ctx.r3.s64 = ctx.r9.s64 + -32120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AF90;
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

__attribute__((alias("__imp__sub_83C9AFA0"))) PPC_WEAK_FUNC(sub_83C9AFA0);
PPC_FUNC_IMPL(__imp__sub_83C9AFA0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21216
	ctx.r3.s64 = ctx.r11.s64 + -21216;
	// addi r4,r10,-15220
	ctx.r4.s64 = ctx.r10.s64 + -15220;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9AFCC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32104
	ctx.r3.s64 = ctx.r9.s64 + -32104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9AFD8;
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

__attribute__((alias("__imp__sub_83C9AFE8"))) PPC_WEAK_FUNC(sub_83C9AFE8);
PPC_FUNC_IMPL(__imp__sub_83C9AFE8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21576
	ctx.r3.s64 = ctx.r11.s64 + -21576;
	// addi r4,r10,-15212
	ctx.r4.s64 = ctx.r10.s64 + -15212;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9B014;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32088
	ctx.r3.s64 = ctx.r9.s64 + -32088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B020;
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

__attribute__((alias("__imp__sub_83C9B030"))) PPC_WEAK_FUNC(sub_83C9B030);
PPC_FUNC_IMPL(__imp__sub_83C9B030) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22264
	ctx.r3.s64 = ctx.r11.s64 + -22264;
	// addi r4,r10,-15200
	ctx.r4.s64 = ctx.r10.s64 + -15200;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9B05C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32072
	ctx.r3.s64 = ctx.r9.s64 + -32072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B068;
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

__attribute__((alias("__imp__sub_83C9B078"))) PPC_WEAK_FUNC(sub_83C9B078);
PPC_FUNC_IMPL(__imp__sub_83C9B078) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23104
	ctx.r3.s64 = ctx.r11.s64 + -23104;
	// addi r4,r10,-15192
	ctx.r4.s64 = ctx.r10.s64 + -15192;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9B0A4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32056
	ctx.r3.s64 = ctx.r9.s64 + -32056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B0B0;
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

__attribute__((alias("__imp__sub_83C9B0C0"))) PPC_WEAK_FUNC(sub_83C9B0C0);
PPC_FUNC_IMPL(__imp__sub_83C9B0C0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23948
	ctx.r3.s64 = ctx.r11.s64 + -23948;
	// addi r4,r10,-15180
	ctx.r4.s64 = ctx.r10.s64 + -15180;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83523160
	ctx.lr = 0x83C9B0EC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32040
	ctx.r3.s64 = ctx.r9.s64 + -32040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B0F8;
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

__attribute__((alias("__imp__sub_83C9B108"))) PPC_WEAK_FUNC(sub_83C9B108);
PPC_FUNC_IMPL(__imp__sub_83C9B108) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21096
	ctx.r3.s64 = ctx.r11.s64 + -21096;
	// addi r4,r10,-15172
	ctx.r4.s64 = ctx.r10.s64 + -15172;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9B134;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32024
	ctx.r3.s64 = ctx.r9.s64 + -32024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B140;
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

__attribute__((alias("__imp__sub_83C9B150"))) PPC_WEAK_FUNC(sub_83C9B150);
PPC_FUNC_IMPL(__imp__sub_83C9B150) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22744
	ctx.r3.s64 = ctx.r11.s64 + -22744;
	// addi r4,r10,-15164
	ctx.r4.s64 = ctx.r10.s64 + -15164;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9B17C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-32008
	ctx.r3.s64 = ctx.r9.s64 + -32008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B188;
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

__attribute__((alias("__imp__sub_83C9B198"))) PPC_WEAK_FUNC(sub_83C9B198);
PPC_FUNC_IMPL(__imp__sub_83C9B198) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23888
	ctx.r3.s64 = ctx.r11.s64 + -23888;
	// addi r4,r10,-15152
	ctx.r4.s64 = ctx.r10.s64 + -15152;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9B1C4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31992
	ctx.r3.s64 = ctx.r9.s64 + -31992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B1D0;
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

__attribute__((alias("__imp__sub_83C9B1E0"))) PPC_WEAK_FUNC(sub_83C9B1E0);
PPC_FUNC_IMPL(__imp__sub_83C9B1E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22564
	ctx.r3.s64 = ctx.r11.s64 + -22564;
	// addi r4,r10,-15144
	ctx.r4.s64 = ctx.r10.s64 + -15144;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83C9B20C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31976
	ctx.r3.s64 = ctx.r9.s64 + -31976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B218;
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

__attribute__((alias("__imp__sub_83C9B228"))) PPC_WEAK_FUNC(sub_83C9B228);
PPC_FUNC_IMPL(__imp__sub_83C9B228) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24128
	ctx.r3.s64 = ctx.r11.s64 + -24128;
	// addi r4,r10,-15140
	ctx.r4.s64 = ctx.r10.s64 + -15140;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9B254;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31960
	ctx.r3.s64 = ctx.r9.s64 + -31960;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B260;
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

__attribute__((alias("__imp__sub_83C9B270"))) PPC_WEAK_FUNC(sub_83C9B270);
PPC_FUNC_IMPL(__imp__sub_83C9B270) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23824
	ctx.r3.s64 = ctx.r11.s64 + -23824;
	// addi r4,r10,-15132
	ctx.r4.s64 = ctx.r10.s64 + -15132;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9B29C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31944
	ctx.r3.s64 = ctx.r9.s64 + -31944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B2A8;
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

__attribute__((alias("__imp__sub_83C9B2B8"))) PPC_WEAK_FUNC(sub_83C9B2B8);
PPC_FUNC_IMPL(__imp__sub_83C9B2B8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22924
	ctx.r3.s64 = ctx.r11.s64 + -22924;
	// addi r4,r10,-15124
	ctx.r4.s64 = ctx.r10.s64 + -15124;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9B2E4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31928
	ctx.r3.s64 = ctx.r9.s64 + -31928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B2F0;
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

__attribute__((alias("__imp__sub_83C9B300"))) PPC_WEAK_FUNC(sub_83C9B300);
PPC_FUNC_IMPL(__imp__sub_83C9B300) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22144
	ctx.r3.s64 = ctx.r11.s64 + -22144;
	// addi r4,r10,-15108
	ctx.r4.s64 = ctx.r10.s64 + -15108;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x83523160
	ctx.lr = 0x83C9B32C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31912
	ctx.r3.s64 = ctx.r9.s64 + -31912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B338;
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

__attribute__((alias("__imp__sub_83C9B348"))) PPC_WEAK_FUNC(sub_83C9B348);
PPC_FUNC_IMPL(__imp__sub_83C9B348) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21696
	ctx.r3.s64 = ctx.r11.s64 + -21696;
	// addi r4,r10,-15084
	ctx.r4.s64 = ctx.r10.s64 + -15084;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9B374;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31896
	ctx.r3.s64 = ctx.r9.s64 + -31896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B380;
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

__attribute__((alias("__imp__sub_83C9B390"))) PPC_WEAK_FUNC(sub_83C9B390);
PPC_FUNC_IMPL(__imp__sub_83C9B390) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23464
	ctx.r3.s64 = ctx.r11.s64 + -23464;
	// addi r4,r10,-15068
	ctx.r4.s64 = ctx.r10.s64 + -15068;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x83523160
	ctx.lr = 0x83C9B3BC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31880
	ctx.r3.s64 = ctx.r9.s64 + -31880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B3C8;
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

__attribute__((alias("__imp__sub_83C9B3D8"))) PPC_WEAK_FUNC(sub_83C9B3D8);
PPC_FUNC_IMPL(__imp__sub_83C9B3D8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23764
	ctx.r3.s64 = ctx.r11.s64 + -23764;
	// addi r4,r10,-15048
	ctx.r4.s64 = ctx.r10.s64 + -15048;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x83523160
	ctx.lr = 0x83C9B404;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31864
	ctx.r3.s64 = ctx.r9.s64 + -31864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B410;
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

__attribute__((alias("__imp__sub_83C9B420"))) PPC_WEAK_FUNC(sub_83C9B420);
PPC_FUNC_IMPL(__imp__sub_83C9B420) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22324
	ctx.r3.s64 = ctx.r11.s64 + -22324;
	// addi r4,r10,-15028
	ctx.r4.s64 = ctx.r10.s64 + -15028;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x83523160
	ctx.lr = 0x83C9B44C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31848
	ctx.r3.s64 = ctx.r9.s64 + -31848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B458;
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

__attribute__((alias("__imp__sub_83C9B468"))) PPC_WEAK_FUNC(sub_83C9B468);
PPC_FUNC_IMPL(__imp__sub_83C9B468) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23524
	ctx.r3.s64 = ctx.r11.s64 + -23524;
	// addi r4,r10,-15000
	ctx.r4.s64 = ctx.r10.s64 + -15000;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9B494;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31832
	ctx.r3.s64 = ctx.r9.s64 + -31832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B4A0;
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

__attribute__((alias("__imp__sub_83C9B4B0"))) PPC_WEAK_FUNC(sub_83C9B4B0);
PPC_FUNC_IMPL(__imp__sub_83C9B4B0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// addi r4,r10,-14988
	ctx.r4.s64 = ctx.r10.s64 + -14988;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83C9B4DC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31816
	ctx.r3.s64 = ctx.r9.s64 + -31816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B4E8;
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

__attribute__((alias("__imp__sub_83C9B4F8"))) PPC_WEAK_FUNC(sub_83C9B4F8);
PPC_FUNC_IMPL(__imp__sub_83C9B4F8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22684
	ctx.r3.s64 = ctx.r11.s64 + -22684;
	// addi r4,r10,-14976
	ctx.r4.s64 = ctx.r10.s64 + -14976;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9B524;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31800
	ctx.r3.s64 = ctx.r9.s64 + -31800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B530;
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

__attribute__((alias("__imp__sub_83C9B540"))) PPC_WEAK_FUNC(sub_83C9B540);
PPC_FUNC_IMPL(__imp__sub_83C9B540) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23044
	ctx.r3.s64 = ctx.r11.s64 + -23044;
	// addi r4,r10,-14960
	ctx.r4.s64 = ctx.r10.s64 + -14960;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9B56C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31784
	ctx.r3.s64 = ctx.r9.s64 + -31784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B578;
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

__attribute__((alias("__imp__sub_83C9B588"))) PPC_WEAK_FUNC(sub_83C9B588);
PPC_FUNC_IMPL(__imp__sub_83C9B588) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22984
	ctx.r3.s64 = ctx.r11.s64 + -22984;
	// addi r4,r10,-14948
	ctx.r4.s64 = ctx.r10.s64 + -14948;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9B5B4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31768
	ctx.r3.s64 = ctx.r9.s64 + -31768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B5C0;
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

__attribute__((alias("__imp__sub_83C9B5D0"))) PPC_WEAK_FUNC(sub_83C9B5D0);
PPC_FUNC_IMPL(__imp__sub_83C9B5D0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23284
	ctx.r3.s64 = ctx.r11.s64 + -23284;
	// addi r4,r10,-14932
	ctx.r4.s64 = ctx.r10.s64 + -14932;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9B5FC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31752
	ctx.r3.s64 = ctx.r9.s64 + -31752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B608;
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

__attribute__((alias("__imp__sub_83C9B618"))) PPC_WEAK_FUNC(sub_83C9B618);
PPC_FUNC_IMPL(__imp__sub_83C9B618) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21456
	ctx.r3.s64 = ctx.r11.s64 + -21456;
	// addi r4,r10,-14920
	ctx.r4.s64 = ctx.r10.s64 + -14920;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9B644;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31736
	ctx.r3.s64 = ctx.r9.s64 + -31736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B650;
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

__attribute__((alias("__imp__sub_83C9B660"))) PPC_WEAK_FUNC(sub_83C9B660);
PPC_FUNC_IMPL(__imp__sub_83C9B660) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22204
	ctx.r3.s64 = ctx.r11.s64 + -22204;
	// addi r4,r10,-14908
	ctx.r4.s64 = ctx.r10.s64 + -14908;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9B68C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31720
	ctx.r3.s64 = ctx.r9.s64 + -31720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B698;
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

__attribute__((alias("__imp__sub_83C9B6A8"))) PPC_WEAK_FUNC(sub_83C9B6A8);
PPC_FUNC_IMPL(__imp__sub_83C9B6A8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23344
	ctx.r3.s64 = ctx.r11.s64 + -23344;
	// addi r4,r10,-14896
	ctx.r4.s64 = ctx.r10.s64 + -14896;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x83523160
	ctx.lr = 0x83C9B6D4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31704
	ctx.r3.s64 = ctx.r9.s64 + -31704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B6E0;
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

__attribute__((alias("__imp__sub_83C9B6F0"))) PPC_WEAK_FUNC(sub_83C9B6F0);
PPC_FUNC_IMPL(__imp__sub_83C9B6F0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21156
	ctx.r3.s64 = ctx.r11.s64 + -21156;
	// addi r4,r10,-14872
	ctx.r4.s64 = ctx.r10.s64 + -14872;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9B71C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31688
	ctx.r3.s64 = ctx.r9.s64 + -31688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B728;
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

__attribute__((alias("__imp__sub_83C9B738"))) PPC_WEAK_FUNC(sub_83C9B738);
PPC_FUNC_IMPL(__imp__sub_83C9B738) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23164
	ctx.r3.s64 = ctx.r11.s64 + -23164;
	// addi r4,r10,-14864
	ctx.r4.s64 = ctx.r10.s64 + -14864;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9B764;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31672
	ctx.r3.s64 = ctx.r9.s64 + -31672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B770;
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

__attribute__((alias("__imp__sub_83C9B780"))) PPC_WEAK_FUNC(sub_83C9B780);
PPC_FUNC_IMPL(__imp__sub_83C9B780) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21516
	ctx.r3.s64 = ctx.r11.s64 + -21516;
	// addi r4,r10,-14852
	ctx.r4.s64 = ctx.r10.s64 + -14852;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9B7AC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31656
	ctx.r3.s64 = ctx.r9.s64 + -31656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B7B8;
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

__attribute__((alias("__imp__sub_83C9B7C8"))) PPC_WEAK_FUNC(sub_83C9B7C8);
PPC_FUNC_IMPL(__imp__sub_83C9B7C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21636
	ctx.r3.s64 = ctx.r11.s64 + -21636;
	// addi r4,r10,-14836
	ctx.r4.s64 = ctx.r10.s64 + -14836;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9B7F4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31640
	ctx.r3.s64 = ctx.r9.s64 + -31640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B800;
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

__attribute__((alias("__imp__sub_83C9B810"))) PPC_WEAK_FUNC(sub_83C9B810);
PPC_FUNC_IMPL(__imp__sub_83C9B810) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22384
	ctx.r3.s64 = ctx.r11.s64 + -22384;
	// addi r4,r10,-14820
	ctx.r4.s64 = ctx.r10.s64 + -14820;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9B83C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31624
	ctx.r3.s64 = ctx.r9.s64 + -31624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B848;
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

__attribute__((alias("__imp__sub_83C9B858"))) PPC_WEAK_FUNC(sub_83C9B858);
PPC_FUNC_IMPL(__imp__sub_83C9B858) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21964
	ctx.r3.s64 = ctx.r11.s64 + -21964;
	// addi r4,r10,-14804
	ctx.r4.s64 = ctx.r10.s64 + -14804;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9B884;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31608
	ctx.r3.s64 = ctx.r9.s64 + -31608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B890;
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

__attribute__((alias("__imp__sub_83C9B8A0"))) PPC_WEAK_FUNC(sub_83C9B8A0);
PPC_FUNC_IMPL(__imp__sub_83C9B8A0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21784
	ctx.r3.s64 = ctx.r11.s64 + -21784;
	// addi r4,r10,-14788
	ctx.r4.s64 = ctx.r10.s64 + -14788;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9B8CC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31592
	ctx.r3.s64 = ctx.r9.s64 + -31592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B8D8;
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

__attribute__((alias("__imp__sub_83C9B8E8"))) PPC_WEAK_FUNC(sub_83C9B8E8);
PPC_FUNC_IMPL(__imp__sub_83C9B8E8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22504
	ctx.r3.s64 = ctx.r11.s64 + -22504;
	// addi r4,r10,-14776
	ctx.r4.s64 = ctx.r10.s64 + -14776;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9B914;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31576
	ctx.r3.s64 = ctx.r9.s64 + -31576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B920;
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

__attribute__((alias("__imp__sub_83C9B930"))) PPC_WEAK_FUNC(sub_83C9B930);
PPC_FUNC_IMPL(__imp__sub_83C9B930) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22804
	ctx.r3.s64 = ctx.r11.s64 + -22804;
	// addi r4,r10,-14764
	ctx.r4.s64 = ctx.r10.s64 + -14764;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83C9B95C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31560
	ctx.r3.s64 = ctx.r9.s64 + -31560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B968;
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

__attribute__((alias("__imp__sub_83C9B978"))) PPC_WEAK_FUNC(sub_83C9B978);
PPC_FUNC_IMPL(__imp__sub_83C9B978) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21396
	ctx.r3.s64 = ctx.r11.s64 + -21396;
	// addi r4,r10,-14752
	ctx.r4.s64 = ctx.r10.s64 + -14752;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83C9B9A4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31544
	ctx.r3.s64 = ctx.r9.s64 + -31544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B9B0;
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

__attribute__((alias("__imp__sub_83C9B9C0"))) PPC_WEAK_FUNC(sub_83C9B9C0);
PPC_FUNC_IMPL(__imp__sub_83C9B9C0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22444
	ctx.r3.s64 = ctx.r11.s64 + -22444;
	// addi r4,r10,-14740
	ctx.r4.s64 = ctx.r10.s64 + -14740;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9B9EC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31528
	ctx.r3.s64 = ctx.r9.s64 + -31528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9B9F8;
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

__attribute__((alias("__imp__sub_83C9BA08"))) PPC_WEAK_FUNC(sub_83C9BA08);
PPC_FUNC_IMPL(__imp__sub_83C9BA08) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21904
	ctx.r3.s64 = ctx.r11.s64 + -21904;
	// addi r4,r10,-14732
	ctx.r4.s64 = ctx.r10.s64 + -14732;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9BA34;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31512
	ctx.r3.s64 = ctx.r9.s64 + -31512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BA40;
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

__attribute__((alias("__imp__sub_83C9BA50"))) PPC_WEAK_FUNC(sub_83C9BA50);
PPC_FUNC_IMPL(__imp__sub_83C9BA50) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21276
	ctx.r3.s64 = ctx.r11.s64 + -21276;
	// addi r4,r10,-14724
	ctx.r4.s64 = ctx.r10.s64 + -14724;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83C9BA7C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31496
	ctx.r3.s64 = ctx.r9.s64 + -31496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BA88;
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

__attribute__((alias("__imp__sub_83C9BA98"))) PPC_WEAK_FUNC(sub_83C9BA98);
PPC_FUNC_IMPL(__imp__sub_83C9BA98) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-22024
	ctx.r3.s64 = ctx.r11.s64 + -22024;
	// addi r4,r10,-14712
	ctx.r4.s64 = ctx.r10.s64 + -14712;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9BAC4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31480
	ctx.r3.s64 = ctx.r9.s64 + -31480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BAD0;
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

__attribute__((alias("__imp__sub_83C9BAE0"))) PPC_WEAK_FUNC(sub_83C9BAE0);
PPC_FUNC_IMPL(__imp__sub_83C9BAE0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23224
	ctx.r3.s64 = ctx.r11.s64 + -23224;
	// addi r4,r10,-14696
	ctx.r4.s64 = ctx.r10.s64 + -14696;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9BB0C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31464
	ctx.r3.s64 = ctx.r9.s64 + -31464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BB18;
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

__attribute__((alias("__imp__sub_83C9BB28"))) PPC_WEAK_FUNC(sub_83C9BB28);
PPC_FUNC_IMPL(__imp__sub_83C9BB28) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21336
	ctx.r3.s64 = ctx.r11.s64 + -21336;
	// addi r4,r10,-14688
	ctx.r4.s64 = ctx.r10.s64 + -14688;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9BB54;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31448
	ctx.r3.s64 = ctx.r9.s64 + -31448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BB60;
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

__attribute__((alias("__imp__sub_83C9BB70"))) PPC_WEAK_FUNC(sub_83C9BB70);
PPC_FUNC_IMPL(__imp__sub_83C9BB70) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21036
	ctx.r3.s64 = ctx.r11.s64 + -21036;
	// addi r4,r10,-14676
	ctx.r4.s64 = ctx.r10.s64 + -14676;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83C9BB9C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31432
	ctx.r3.s64 = ctx.r9.s64 + -31432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BBA8;
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

__attribute__((alias("__imp__sub_83C9BBB8"))) PPC_WEAK_FUNC(sub_83C9BBB8);
PPC_FUNC_IMPL(__imp__sub_83C9BBB8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-21844
	ctx.r3.s64 = ctx.r11.s64 + -21844;
	// addi r4,r10,-14664
	ctx.r4.s64 = ctx.r10.s64 + -14664;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9BBE4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31416
	ctx.r3.s64 = ctx.r9.s64 + -31416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BBF0;
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

__attribute__((alias("__imp__sub_83C9BC00"))) PPC_WEAK_FUNC(sub_83C9BC00);
PPC_FUNC_IMPL(__imp__sub_83C9BC00) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-23704
	ctx.r3.s64 = ctx.r11.s64 + -23704;
	// addi r4,r10,-14652
	ctx.r4.s64 = ctx.r10.s64 + -14652;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9BC2C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31400
	ctx.r3.s64 = ctx.r9.s64 + -31400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BC38;
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

__attribute__((alias("__imp__sub_83C9BC48"))) PPC_WEAK_FUNC(sub_83C9BC48);
PPC_FUNC_IMPL(__imp__sub_83C9BC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-11168
	ctx.r9.s64 = ctx.r11.s64 + -11168;
	// addi r8,r10,-21712
	ctx.r8.s64 = ctx.r10.s64 + -21712;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C9BC64"))) PPC_WEAK_FUNC(sub_83C9BC64);
PPC_FUNC_IMPL(__imp__sub_83C9BC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BC68"))) PPC_WEAK_FUNC(sub_83C9BC68);
PPC_FUNC_IMPL(__imp__sub_83C9BC68) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20972
	ctx.r3.s64 = ctx.r11.s64 + -20972;
	// bl 0x83523120
	ctx.lr = 0x83C9BC80;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31264
	ctx.r3.s64 = ctx.r10.s64 + -31264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BC8C;
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

__attribute__((alias("__imp__sub_83C9BC9C"))) PPC_WEAK_FUNC(sub_83C9BC9C);
PPC_FUNC_IMPL(__imp__sub_83C9BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BCA0"))) PPC_WEAK_FUNC(sub_83C9BCA0);
PPC_FUNC_IMPL(__imp__sub_83C9BCA0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20968
	ctx.r3.s64 = ctx.r11.s64 + -20968;
	// addi r4,r10,-11120
	ctx.r4.s64 = ctx.r10.s64 + -11120;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9BCCC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31248
	ctx.r3.s64 = ctx.r9.s64 + -31248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BCD8;
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

__attribute__((alias("__imp__sub_83C9BCE8"))) PPC_WEAK_FUNC(sub_83C9BCE8);
PPC_FUNC_IMPL(__imp__sub_83C9BCE8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20908
	ctx.r3.s64 = ctx.r11.s64 + -20908;
	// addi r4,r10,-11112
	ctx.r4.s64 = ctx.r10.s64 + -11112;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9BD14;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31232
	ctx.r3.s64 = ctx.r9.s64 + -31232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BD20;
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

__attribute__((alias("__imp__sub_83C9BD30"))) PPC_WEAK_FUNC(sub_83C9BD30);
PPC_FUNC_IMPL(__imp__sub_83C9BD30) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20848
	ctx.r3.s64 = ctx.r11.s64 + -20848;
	// addi r4,r10,-11096
	ctx.r4.s64 = ctx.r10.s64 + -11096;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x83523160
	ctx.lr = 0x83C9BD5C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31216
	ctx.r3.s64 = ctx.r9.s64 + -31216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BD68;
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

__attribute__((alias("__imp__sub_83C9BD78"))) PPC_WEAK_FUNC(sub_83C9BD78);
PPC_FUNC_IMPL(__imp__sub_83C9BD78) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20696
	ctx.r3.s64 = ctx.r11.s64 + -20696;
	// bl 0x83523120
	ctx.lr = 0x83C9BD90;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31200
	ctx.r3.s64 = ctx.r10.s64 + -31200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BD9C;
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

__attribute__((alias("__imp__sub_83C9BDAC"))) PPC_WEAK_FUNC(sub_83C9BDAC);
PPC_FUNC_IMPL(__imp__sub_83C9BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BDB0"))) PPC_WEAK_FUNC(sub_83C9BDB0);
PPC_FUNC_IMPL(__imp__sub_83C9BDB0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20632
	ctx.r3.s64 = ctx.r11.s64 + -20632;
	// addi r4,r10,-7784
	ctx.r4.s64 = ctx.r10.s64 + -7784;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9BDDC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31184
	ctx.r3.s64 = ctx.r9.s64 + -31184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BDE8;
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

__attribute__((alias("__imp__sub_83C9BDF8"))) PPC_WEAK_FUNC(sub_83C9BDF8);
PPC_FUNC_IMPL(__imp__sub_83C9BDF8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20692
	ctx.r3.s64 = ctx.r11.s64 + -20692;
	// addi r4,r10,-7776
	ctx.r4.s64 = ctx.r10.s64 + -7776;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83523160
	ctx.lr = 0x83C9BE24;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-31168
	ctx.r3.s64 = ctx.r9.s64 + -31168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BE30;
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

__attribute__((alias("__imp__sub_83C9BE40"))) PPC_WEAK_FUNC(sub_83C9BE40);
PPC_FUNC_IMPL(__imp__sub_83C9BE40) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20568
	ctx.r3.s64 = ctx.r11.s64 + -20568;
	// bl 0x83523120
	ctx.lr = 0x83C9BE58;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31152
	ctx.r3.s64 = ctx.r10.s64 + -31152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BE64;
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

__attribute__((alias("__imp__sub_83C9BE74"))) PPC_WEAK_FUNC(sub_83C9BE74);
PPC_FUNC_IMPL(__imp__sub_83C9BE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BE78"))) PPC_WEAK_FUNC(sub_83C9BE78);
PPC_FUNC_IMPL(__imp__sub_83C9BE78) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20567
	ctx.r3.s64 = ctx.r11.s64 + -20567;
	// bl 0x83523120
	ctx.lr = 0x83C9BE90;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31136
	ctx.r3.s64 = ctx.r10.s64 + -31136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BE9C;
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

__attribute__((alias("__imp__sub_83C9BEAC"))) PPC_WEAK_FUNC(sub_83C9BEAC);
PPC_FUNC_IMPL(__imp__sub_83C9BEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BEB0"))) PPC_WEAK_FUNC(sub_83C9BEB0);
PPC_FUNC_IMPL(__imp__sub_83C9BEB0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20566
	ctx.r3.s64 = ctx.r11.s64 + -20566;
	// bl 0x83523120
	ctx.lr = 0x83C9BEC8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31120
	ctx.r3.s64 = ctx.r10.s64 + -31120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BED4;
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

__attribute__((alias("__imp__sub_83C9BEE4"))) PPC_WEAK_FUNC(sub_83C9BEE4);
PPC_FUNC_IMPL(__imp__sub_83C9BEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BEE8"))) PPC_WEAK_FUNC(sub_83C9BEE8);
PPC_FUNC_IMPL(__imp__sub_83C9BEE8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20560
	ctx.r3.s64 = ctx.r11.s64 + -20560;
	// bl 0x83523120
	ctx.lr = 0x83C9BF00;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31104
	ctx.r3.s64 = ctx.r10.s64 + -31104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BF0C;
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

__attribute__((alias("__imp__sub_83C9BF1C"))) PPC_WEAK_FUNC(sub_83C9BF1C);
PPC_FUNC_IMPL(__imp__sub_83C9BF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BF20"))) PPC_WEAK_FUNC(sub_83C9BF20);
PPC_FUNC_IMPL(__imp__sub_83C9BF20) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20559
	ctx.r3.s64 = ctx.r11.s64 + -20559;
	// bl 0x83523120
	ctx.lr = 0x83C9BF38;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31088
	ctx.r3.s64 = ctx.r10.s64 + -31088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BF44;
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

__attribute__((alias("__imp__sub_83C9BF54"))) PPC_WEAK_FUNC(sub_83C9BF54);
PPC_FUNC_IMPL(__imp__sub_83C9BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BF58"))) PPC_WEAK_FUNC(sub_83C9BF58);
PPC_FUNC_IMPL(__imp__sub_83C9BF58) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20552
	ctx.r3.s64 = ctx.r11.s64 + -20552;
	// bl 0x83523120
	ctx.lr = 0x83C9BF70;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31072
	ctx.r3.s64 = ctx.r10.s64 + -31072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BF7C;
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

__attribute__((alias("__imp__sub_83C9BF8C"))) PPC_WEAK_FUNC(sub_83C9BF8C);
PPC_FUNC_IMPL(__imp__sub_83C9BF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BF90"))) PPC_WEAK_FUNC(sub_83C9BF90);
PPC_FUNC_IMPL(__imp__sub_83C9BF90) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20551
	ctx.r3.s64 = ctx.r11.s64 + -20551;
	// bl 0x83523120
	ctx.lr = 0x83C9BFA8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31056
	ctx.r3.s64 = ctx.r10.s64 + -31056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BFB4;
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

__attribute__((alias("__imp__sub_83C9BFC4"))) PPC_WEAK_FUNC(sub_83C9BFC4);
PPC_FUNC_IMPL(__imp__sub_83C9BFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9BFC8"))) PPC_WEAK_FUNC(sub_83C9BFC8);
PPC_FUNC_IMPL(__imp__sub_83C9BFC8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20544
	ctx.r3.s64 = ctx.r11.s64 + -20544;
	// bl 0x83523120
	ctx.lr = 0x83C9BFE0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31040
	ctx.r3.s64 = ctx.r10.s64 + -31040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9BFEC;
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

__attribute__((alias("__imp__sub_83C9BFFC"))) PPC_WEAK_FUNC(sub_83C9BFFC);
PPC_FUNC_IMPL(__imp__sub_83C9BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9C000"))) PPC_WEAK_FUNC(sub_83C9C000);
PPC_FUNC_IMPL(__imp__sub_83C9C000) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20543
	ctx.r3.s64 = ctx.r11.s64 + -20543;
	// bl 0x83523120
	ctx.lr = 0x83C9C018;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31024
	ctx.r3.s64 = ctx.r10.s64 + -31024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C024;
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

__attribute__((alias("__imp__sub_83C9C034"))) PPC_WEAK_FUNC(sub_83C9C034);
PPC_FUNC_IMPL(__imp__sub_83C9C034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9C038"))) PPC_WEAK_FUNC(sub_83C9C038);
PPC_FUNC_IMPL(__imp__sub_83C9C038) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20540
	ctx.r3.s64 = ctx.r11.s64 + -20540;
	// bl 0x83523120
	ctx.lr = 0x83C9C050;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-31008
	ctx.r3.s64 = ctx.r10.s64 + -31008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C05C;
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

__attribute__((alias("__imp__sub_83C9C06C"))) PPC_WEAK_FUNC(sub_83C9C06C);
PPC_FUNC_IMPL(__imp__sub_83C9C06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9C070"))) PPC_WEAK_FUNC(sub_83C9C070);
PPC_FUNC_IMPL(__imp__sub_83C9C070) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20476
	ctx.r3.s64 = ctx.r11.s64 + -20476;
	// addi r4,r10,-5408
	ctx.r4.s64 = ctx.r10.s64 + -5408;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9C09C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30992
	ctx.r3.s64 = ctx.r9.s64 + -30992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C0A8;
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

__attribute__((alias("__imp__sub_83C9C0B8"))) PPC_WEAK_FUNC(sub_83C9C0B8);
PPC_FUNC_IMPL(__imp__sub_83C9C0B8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20536
	ctx.r3.s64 = ctx.r11.s64 + -20536;
	// addi r4,r10,-5400
	ctx.r4.s64 = ctx.r10.s64 + -5400;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9C0E4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30976
	ctx.r3.s64 = ctx.r9.s64 + -30976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C0F0;
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

__attribute__((alias("__imp__sub_83C9C100"))) PPC_WEAK_FUNC(sub_83C9C100);
PPC_FUNC_IMPL(__imp__sub_83C9C100) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20416
	ctx.r3.s64 = ctx.r11.s64 + -20416;
	// addi r4,r10,-5388
	ctx.r4.s64 = ctx.r10.s64 + -5388;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9C12C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30960
	ctx.r3.s64 = ctx.r9.s64 + -30960;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C138;
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

__attribute__((alias("__imp__sub_83C9C148"))) PPC_WEAK_FUNC(sub_83C9C148);
PPC_FUNC_IMPL(__imp__sub_83C9C148) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-20104
	ctx.r3.s64 = ctx.r11.s64 + -20104;
	// bl 0x83523120
	ctx.lr = 0x83C9C160;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C16C;
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

__attribute__((alias("__imp__sub_83C9C17C"))) PPC_WEAK_FUNC(sub_83C9C17C);
PPC_FUNC_IMPL(__imp__sub_83C9C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9C180"))) PPC_WEAK_FUNC(sub_83C9C180);
PPC_FUNC_IMPL(__imp__sub_83C9C180) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19620
	ctx.r3.s64 = ctx.r11.s64 + -19620;
	// addi r4,r10,-5112
	ctx.r4.s64 = ctx.r10.s64 + -5112;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9C1AC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30928
	ctx.r3.s64 = ctx.r9.s64 + -30928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C1B8;
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

__attribute__((alias("__imp__sub_83C9C1C8"))) PPC_WEAK_FUNC(sub_83C9C1C8);
PPC_FUNC_IMPL(__imp__sub_83C9C1C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19800
	ctx.r3.s64 = ctx.r11.s64 + -19800;
	// addi r4,r10,-5104
	ctx.r4.s64 = ctx.r10.s64 + -5104;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9C1F4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30912
	ctx.r3.s64 = ctx.r9.s64 + -30912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C200;
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

__attribute__((alias("__imp__sub_83C9C210"))) PPC_WEAK_FUNC(sub_83C9C210);
PPC_FUNC_IMPL(__imp__sub_83C9C210) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19500
	ctx.r3.s64 = ctx.r11.s64 + -19500;
	// addi r4,r10,-5092
	ctx.r4.s64 = ctx.r10.s64 + -5092;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9C23C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30896
	ctx.r3.s64 = ctx.r9.s64 + -30896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C248;
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

__attribute__((alias("__imp__sub_83C9C258"))) PPC_WEAK_FUNC(sub_83C9C258);
PPC_FUNC_IMPL(__imp__sub_83C9C258) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19560
	ctx.r3.s64 = ctx.r11.s64 + -19560;
	// addi r4,r10,-5080
	ctx.r4.s64 = ctx.r10.s64 + -5080;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9C284;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30880
	ctx.r3.s64 = ctx.r9.s64 + -30880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C290;
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

__attribute__((alias("__imp__sub_83C9C2A0"))) PPC_WEAK_FUNC(sub_83C9C2A0);
PPC_FUNC_IMPL(__imp__sub_83C9C2A0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19860
	ctx.r3.s64 = ctx.r11.s64 + -19860;
	// addi r4,r10,-5068
	ctx.r4.s64 = ctx.r10.s64 + -5068;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C2CC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30864
	ctx.r3.s64 = ctx.r9.s64 + -30864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C2D8;
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

__attribute__((alias("__imp__sub_83C9C2E8"))) PPC_WEAK_FUNC(sub_83C9C2E8);
PPC_FUNC_IMPL(__imp__sub_83C9C2E8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20040
	ctx.r3.s64 = ctx.r11.s64 + -20040;
	// addi r4,r10,-5052
	ctx.r4.s64 = ctx.r10.s64 + -5052;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83C9C314;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30848
	ctx.r3.s64 = ctx.r9.s64 + -30848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C320;
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

__attribute__((alias("__imp__sub_83C9C330"))) PPC_WEAK_FUNC(sub_83C9C330);
PPC_FUNC_IMPL(__imp__sub_83C9C330) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19680
	ctx.r3.s64 = ctx.r11.s64 + -19680;
	// addi r4,r10,-5048
	ctx.r4.s64 = ctx.r10.s64 + -5048;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9C35C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30832
	ctx.r3.s64 = ctx.r9.s64 + -30832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C368;
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

__attribute__((alias("__imp__sub_83C9C378"))) PPC_WEAK_FUNC(sub_83C9C378);
PPC_FUNC_IMPL(__imp__sub_83C9C378) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19740
	ctx.r3.s64 = ctx.r11.s64 + -19740;
	// addi r4,r10,-5040
	ctx.r4.s64 = ctx.r10.s64 + -5040;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9C3A4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30816
	ctx.r3.s64 = ctx.r9.s64 + -30816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C3B0;
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

__attribute__((alias("__imp__sub_83C9C3C0"))) PPC_WEAK_FUNC(sub_83C9C3C0);
PPC_FUNC_IMPL(__imp__sub_83C9C3C0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19920
	ctx.r3.s64 = ctx.r11.s64 + -19920;
	// addi r4,r10,-5024
	ctx.r4.s64 = ctx.r10.s64 + -5024;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9C3EC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30800
	ctx.r3.s64 = ctx.r9.s64 + -30800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C3F8;
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

__attribute__((alias("__imp__sub_83C9C408"))) PPC_WEAK_FUNC(sub_83C9C408);
PPC_FUNC_IMPL(__imp__sub_83C9C408) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-20100
	ctx.r3.s64 = ctx.r11.s64 + -20100;
	// addi r4,r10,-5008
	ctx.r4.s64 = ctx.r10.s64 + -5008;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9C434;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30784
	ctx.r3.s64 = ctx.r9.s64 + -30784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C440;
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

__attribute__((alias("__imp__sub_83C9C450"))) PPC_WEAK_FUNC(sub_83C9C450);
PPC_FUNC_IMPL(__imp__sub_83C9C450) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19980
	ctx.r3.s64 = ctx.r11.s64 + -19980;
	// addi r4,r10,-4996
	ctx.r4.s64 = ctx.r10.s64 + -4996;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83523160
	ctx.lr = 0x83C9C47C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30768
	ctx.r3.s64 = ctx.r9.s64 + -30768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C488;
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

__attribute__((alias("__imp__sub_83C9C498"))) PPC_WEAK_FUNC(sub_83C9C498);
PPC_FUNC_IMPL(__imp__sub_83C9C498) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-19440
	ctx.r3.s64 = ctx.r11.s64 + -19440;
	// bl 0x83523120
	ctx.lr = 0x83C9C4B0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30752
	ctx.r3.s64 = ctx.r10.s64 + -30752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C4BC;
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

__attribute__((alias("__imp__sub_83C9C4CC"))) PPC_WEAK_FUNC(sub_83C9C4CC);
PPC_FUNC_IMPL(__imp__sub_83C9C4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9C4D0"))) PPC_WEAK_FUNC(sub_83C9C4D0);
PPC_FUNC_IMPL(__imp__sub_83C9C4D0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19436
	ctx.r3.s64 = ctx.r11.s64 + -19436;
	// addi r4,r10,-3608
	ctx.r4.s64 = ctx.r10.s64 + -3608;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9C4FC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30736
	ctx.r3.s64 = ctx.r9.s64 + -30736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C508;
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

__attribute__((alias("__imp__sub_83C9C518"))) PPC_WEAK_FUNC(sub_83C9C518);
PPC_FUNC_IMPL(__imp__sub_83C9C518) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-19196
	ctx.r3.s64 = ctx.r11.s64 + -19196;
	// bl 0x83523120
	ctx.lr = 0x83C9C530;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30720
	ctx.r3.s64 = ctx.r10.s64 + -30720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C53C;
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

__attribute__((alias("__imp__sub_83C9C54C"))) PPC_WEAK_FUNC(sub_83C9C54C);
PPC_FUNC_IMPL(__imp__sub_83C9C54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9C550"))) PPC_WEAK_FUNC(sub_83C9C550);
PPC_FUNC_IMPL(__imp__sub_83C9C550) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// addi r4,r10,-3052
	ctx.r4.s64 = ctx.r10.s64 + -3052;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9C57C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30704
	ctx.r3.s64 = ctx.r9.s64 + -30704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C588;
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

__attribute__((alias("__imp__sub_83C9C598"))) PPC_WEAK_FUNC(sub_83C9C598);
PPC_FUNC_IMPL(__imp__sub_83C9C598) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// addi r4,r10,-3040
	ctx.r4.s64 = ctx.r10.s64 + -3040;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9C5C4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30688
	ctx.r3.s64 = ctx.r9.s64 + -30688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C5D0;
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

__attribute__((alias("__imp__sub_83C9C5E0"))) PPC_WEAK_FUNC(sub_83C9C5E0);
PPC_FUNC_IMPL(__imp__sub_83C9C5E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18652
	ctx.r3.s64 = ctx.r11.s64 + -18652;
	// addi r4,r10,-3028
	ctx.r4.s64 = ctx.r10.s64 + -3028;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9C60C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30672
	ctx.r3.s64 = ctx.r9.s64 + -30672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C618;
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

__attribute__((alias("__imp__sub_83C9C628"))) PPC_WEAK_FUNC(sub_83C9C628);
PPC_FUNC_IMPL(__imp__sub_83C9C628) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18412
	ctx.r3.s64 = ctx.r11.s64 + -18412;
	// addi r4,r10,-3016
	ctx.r4.s64 = ctx.r10.s64 + -3016;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9C654;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30656
	ctx.r3.s64 = ctx.r9.s64 + -30656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C660;
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

__attribute__((alias("__imp__sub_83C9C670"))) PPC_WEAK_FUNC(sub_83C9C670);
PPC_FUNC_IMPL(__imp__sub_83C9C670) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18892
	ctx.r3.s64 = ctx.r11.s64 + -18892;
	// addi r4,r10,-3004
	ctx.r4.s64 = ctx.r10.s64 + -3004;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9C69C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30640
	ctx.r3.s64 = ctx.r9.s64 + -30640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C6A8;
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

__attribute__((alias("__imp__sub_83C9C6B8"))) PPC_WEAK_FUNC(sub_83C9C6B8);
PPC_FUNC_IMPL(__imp__sub_83C9C6B8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19132
	ctx.r3.s64 = ctx.r11.s64 + -19132;
	// addi r4,r10,-2992
	ctx.r4.s64 = ctx.r10.s64 + -2992;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9C6E4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30624
	ctx.r3.s64 = ctx.r9.s64 + -30624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C6F0;
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

__attribute__((alias("__imp__sub_83C9C700"))) PPC_WEAK_FUNC(sub_83C9C700);
PPC_FUNC_IMPL(__imp__sub_83C9C700) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18472
	ctx.r3.s64 = ctx.r11.s64 + -18472;
	// addi r4,r10,-2980
	ctx.r4.s64 = ctx.r10.s64 + -2980;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9C72C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30608
	ctx.r3.s64 = ctx.r9.s64 + -30608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C738;
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

__attribute__((alias("__imp__sub_83C9C748"))) PPC_WEAK_FUNC(sub_83C9C748);
PPC_FUNC_IMPL(__imp__sub_83C9C748) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19072
	ctx.r3.s64 = ctx.r11.s64 + -19072;
	// addi r4,r10,-2968
	ctx.r4.s64 = ctx.r10.s64 + -2968;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9C774;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30592
	ctx.r3.s64 = ctx.r9.s64 + -30592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C780;
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

__attribute__((alias("__imp__sub_83C9C790"))) PPC_WEAK_FUNC(sub_83C9C790);
PPC_FUNC_IMPL(__imp__sub_83C9C790) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18952
	ctx.r3.s64 = ctx.r11.s64 + -18952;
	// addi r4,r10,-2956
	ctx.r4.s64 = ctx.r10.s64 + -2956;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C7BC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30576
	ctx.r3.s64 = ctx.r9.s64 + -30576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C7C8;
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

__attribute__((alias("__imp__sub_83C9C7D8"))) PPC_WEAK_FUNC(sub_83C9C7D8);
PPC_FUNC_IMPL(__imp__sub_83C9C7D8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19012
	ctx.r3.s64 = ctx.r11.s64 + -19012;
	// addi r4,r10,-2940
	ctx.r4.s64 = ctx.r10.s64 + -2940;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C804;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30560
	ctx.r3.s64 = ctx.r9.s64 + -30560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C810;
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

__attribute__((alias("__imp__sub_83C9C820"))) PPC_WEAK_FUNC(sub_83C9C820);
PPC_FUNC_IMPL(__imp__sub_83C9C820) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19192
	ctx.r3.s64 = ctx.r11.s64 + -19192;
	// addi r4,r10,-2924
	ctx.r4.s64 = ctx.r10.s64 + -2924;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C84C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30544
	ctx.r3.s64 = ctx.r9.s64 + -30544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C858;
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

__attribute__((alias("__imp__sub_83C9C868"))) PPC_WEAK_FUNC(sub_83C9C868);
PPC_FUNC_IMPL(__imp__sub_83C9C868) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18832
	ctx.r3.s64 = ctx.r11.s64 + -18832;
	// addi r4,r10,-2908
	ctx.r4.s64 = ctx.r10.s64 + -2908;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C894;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30528
	ctx.r3.s64 = ctx.r9.s64 + -30528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C8A0;
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

__attribute__((alias("__imp__sub_83C9C8B0"))) PPC_WEAK_FUNC(sub_83C9C8B0);
PPC_FUNC_IMPL(__imp__sub_83C9C8B0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19256
	ctx.r3.s64 = ctx.r11.s64 + -19256;
	// addi r4,r10,-2892
	ctx.r4.s64 = ctx.r10.s64 + -2892;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C8DC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30512
	ctx.r3.s64 = ctx.r9.s64 + -30512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C8E8;
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

__attribute__((alias("__imp__sub_83C9C8F8"))) PPC_WEAK_FUNC(sub_83C9C8F8);
PPC_FUNC_IMPL(__imp__sub_83C9C8F8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18772
	ctx.r3.s64 = ctx.r11.s64 + -18772;
	// addi r4,r10,-2876
	ctx.r4.s64 = ctx.r10.s64 + -2876;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C924;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30496
	ctx.r3.s64 = ctx.r9.s64 + -30496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C930;
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

__attribute__((alias("__imp__sub_83C9C940"))) PPC_WEAK_FUNC(sub_83C9C940);
PPC_FUNC_IMPL(__imp__sub_83C9C940) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18712
	ctx.r3.s64 = ctx.r11.s64 + -18712;
	// addi r4,r10,-2860
	ctx.r4.s64 = ctx.r10.s64 + -2860;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C96C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30480
	ctx.r3.s64 = ctx.r9.s64 + -30480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C978;
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

__attribute__((alias("__imp__sub_83C9C988"))) PPC_WEAK_FUNC(sub_83C9C988);
PPC_FUNC_IMPL(__imp__sub_83C9C988) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18592
	ctx.r3.s64 = ctx.r11.s64 + -18592;
	// addi r4,r10,-2844
	ctx.r4.s64 = ctx.r10.s64 + -2844;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C9B4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30464
	ctx.r3.s64 = ctx.r9.s64 + -30464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9C9C0;
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

__attribute__((alias("__imp__sub_83C9C9D0"))) PPC_WEAK_FUNC(sub_83C9C9D0);
PPC_FUNC_IMPL(__imp__sub_83C9C9D0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18532
	ctx.r3.s64 = ctx.r11.s64 + -18532;
	// addi r4,r10,-2828
	ctx.r4.s64 = ctx.r10.s64 + -2828;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9C9FC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30448
	ctx.r3.s64 = ctx.r9.s64 + -30448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CA08;
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

__attribute__((alias("__imp__sub_83C9CA18"))) PPC_WEAK_FUNC(sub_83C9CA18);
PPC_FUNC_IMPL(__imp__sub_83C9CA18) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-19316
	ctx.r3.s64 = ctx.r11.s64 + -19316;
	// addi r4,r10,-2812
	ctx.r4.s64 = ctx.r10.s64 + -2812;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9CA44;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30432
	ctx.r3.s64 = ctx.r9.s64 + -30432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CA50;
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

__attribute__((alias("__imp__sub_83C9CA60"))) PPC_WEAK_FUNC(sub_83C9CA60);
PPC_FUNC_IMPL(__imp__sub_83C9CA60) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-18292
	ctx.r3.s64 = ctx.r11.s64 + -18292;
	// bl 0x83523120
	ctx.lr = 0x83C9CA78;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30416
	ctx.r3.s64 = ctx.r10.s64 + -30416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CA84;
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

__attribute__((alias("__imp__sub_83C9CA94"))) PPC_WEAK_FUNC(sub_83C9CA94);
PPC_FUNC_IMPL(__imp__sub_83C9CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CA98"))) PPC_WEAK_FUNC(sub_83C9CA98);
PPC_FUNC_IMPL(__imp__sub_83C9CA98) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18108
	ctx.r3.s64 = ctx.r11.s64 + -18108;
	// addi r4,r10,-2488
	ctx.r4.s64 = ctx.r10.s64 + -2488;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9CAC4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30400
	ctx.r3.s64 = ctx.r9.s64 + -30400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CAD0;
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

__attribute__((alias("__imp__sub_83C9CAE0"))) PPC_WEAK_FUNC(sub_83C9CAE0);
PPC_FUNC_IMPL(__imp__sub_83C9CAE0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18168
	ctx.r3.s64 = ctx.r11.s64 + -18168;
	// addi r4,r10,-2480
	ctx.r4.s64 = ctx.r10.s64 + -2480;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9CB0C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30384
	ctx.r3.s64 = ctx.r9.s64 + -30384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CB18;
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

__attribute__((alias("__imp__sub_83C9CB28"))) PPC_WEAK_FUNC(sub_83C9CB28);
PPC_FUNC_IMPL(__imp__sub_83C9CB28) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// addi r4,r10,-2468
	ctx.r4.s64 = ctx.r10.s64 + -2468;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9CB54;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30368
	ctx.r3.s64 = ctx.r9.s64 + -30368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CB60;
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

__attribute__((alias("__imp__sub_83C9CB70"))) PPC_WEAK_FUNC(sub_83C9CB70);
PPC_FUNC_IMPL(__imp__sub_83C9CB70) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18228
	ctx.r3.s64 = ctx.r11.s64 + -18228;
	// addi r4,r10,-2456
	ctx.r4.s64 = ctx.r10.s64 + -2456;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9CB9C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30352
	ctx.r3.s64 = ctx.r9.s64 + -30352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CBA8;
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

__attribute__((alias("__imp__sub_83C9CBB8"))) PPC_WEAK_FUNC(sub_83C9CBB8);
PPC_FUNC_IMPL(__imp__sub_83C9CBB8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-17988
	ctx.r3.s64 = ctx.r11.s64 + -17988;
	// addi r4,r10,-2440
	ctx.r4.s64 = ctx.r10.s64 + -2440;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9CBE4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30336
	ctx.r3.s64 = ctx.r9.s64 + -30336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CBF0;
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

__attribute__((alias("__imp__sub_83C9CC00"))) PPC_WEAK_FUNC(sub_83C9CC00);
PPC_FUNC_IMPL(__imp__sub_83C9CC00) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-17928
	ctx.r3.s64 = ctx.r11.s64 + -17928;
	// addi r4,r10,-2424
	ctx.r4.s64 = ctx.r10.s64 + -2424;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9CC2C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30320
	ctx.r3.s64 = ctx.r9.s64 + -30320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CC38;
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

__attribute__((alias("__imp__sub_83C9CC48"))) PPC_WEAK_FUNC(sub_83C9CC48);
PPC_FUNC_IMPL(__imp__sub_83C9CC48) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// addi r4,r10,-2408
	ctx.r4.s64 = ctx.r10.s64 + -2408;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9CC74;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30304
	ctx.r3.s64 = ctx.r9.s64 + -30304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CC80;
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

__attribute__((alias("__imp__sub_83C9CC90"))) PPC_WEAK_FUNC(sub_83C9CC90);
PPC_FUNC_IMPL(__imp__sub_83C9CC90) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-17868
	ctx.r3.s64 = ctx.r11.s64 + -17868;
	// bl 0x83523120
	ctx.lr = 0x83C9CCA8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30288
	ctx.r3.s64 = ctx.r10.s64 + -30288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CCB4;
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

__attribute__((alias("__imp__sub_83C9CCC4"))) PPC_WEAK_FUNC(sub_83C9CCC4);
PPC_FUNC_IMPL(__imp__sub_83C9CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CCC8"))) PPC_WEAK_FUNC(sub_83C9CCC8);
PPC_FUNC_IMPL(__imp__sub_83C9CCC8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-17863
	ctx.r3.s64 = ctx.r11.s64 + -17863;
	// bl 0x83523120
	ctx.lr = 0x83C9CCE0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30272
	ctx.r3.s64 = ctx.r10.s64 + -30272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CCEC;
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

__attribute__((alias("__imp__sub_83C9CCFC"))) PPC_WEAK_FUNC(sub_83C9CCFC);
PPC_FUNC_IMPL(__imp__sub_83C9CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CD00"))) PPC_WEAK_FUNC(sub_83C9CD00);
PPC_FUNC_IMPL(__imp__sub_83C9CD00) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-17860
	ctx.r3.s64 = ctx.r11.s64 + -17860;
	// addi r4,r10,-1260
	ctx.r4.s64 = ctx.r10.s64 + -1260;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9CD2C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-30256
	ctx.r3.s64 = ctx.r9.s64 + -30256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CD38;
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

__attribute__((alias("__imp__sub_83C9CD48"))) PPC_WEAK_FUNC(sub_83C9CD48);
PPC_FUNC_IMPL(__imp__sub_83C9CD48) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-14715
	ctx.r3.s64 = ctx.r11.s64 + -14715;
	// bl 0x83523120
	ctx.lr = 0x83C9CD60;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30240
	ctx.r3.s64 = ctx.r10.s64 + -30240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CD6C;
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

__attribute__((alias("__imp__sub_83C9CD7C"))) PPC_WEAK_FUNC(sub_83C9CD7C);
PPC_FUNC_IMPL(__imp__sub_83C9CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CD80"))) PPC_WEAK_FUNC(sub_83C9CD80);
PPC_FUNC_IMPL(__imp__sub_83C9CD80) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11628
	ctx.r3.s64 = ctx.r11.s64 + -11628;
	// bl 0x83523120
	ctx.lr = 0x83C9CD98;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30224
	ctx.r3.s64 = ctx.r10.s64 + -30224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CDA4;
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

__attribute__((alias("__imp__sub_83C9CDB4"))) PPC_WEAK_FUNC(sub_83C9CDB4);
PPC_FUNC_IMPL(__imp__sub_83C9CDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CDB8"))) PPC_WEAK_FUNC(sub_83C9CDB8);
PPC_FUNC_IMPL(__imp__sub_83C9CDB8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11627
	ctx.r3.s64 = ctx.r11.s64 + -11627;
	// bl 0x83523120
	ctx.lr = 0x83C9CDD0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30208
	ctx.r3.s64 = ctx.r10.s64 + -30208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CDDC;
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

__attribute__((alias("__imp__sub_83C9CDEC"))) PPC_WEAK_FUNC(sub_83C9CDEC);
PPC_FUNC_IMPL(__imp__sub_83C9CDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CDF0"))) PPC_WEAK_FUNC(sub_83C9CDF0);
PPC_FUNC_IMPL(__imp__sub_83C9CDF0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11626
	ctx.r3.s64 = ctx.r11.s64 + -11626;
	// bl 0x83523120
	ctx.lr = 0x83C9CE08;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30192
	ctx.r3.s64 = ctx.r10.s64 + -30192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CE14;
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

__attribute__((alias("__imp__sub_83C9CE24"))) PPC_WEAK_FUNC(sub_83C9CE24);
PPC_FUNC_IMPL(__imp__sub_83C9CE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CE28"))) PPC_WEAK_FUNC(sub_83C9CE28);
PPC_FUNC_IMPL(__imp__sub_83C9CE28) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11625
	ctx.r3.s64 = ctx.r11.s64 + -11625;
	// bl 0x83523120
	ctx.lr = 0x83C9CE40;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30176
	ctx.r3.s64 = ctx.r10.s64 + -30176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CE4C;
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

__attribute__((alias("__imp__sub_83C9CE5C"))) PPC_WEAK_FUNC(sub_83C9CE5C);
PPC_FUNC_IMPL(__imp__sub_83C9CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CE60"))) PPC_WEAK_FUNC(sub_83C9CE60);
PPC_FUNC_IMPL(__imp__sub_83C9CE60) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11624
	ctx.r3.s64 = ctx.r11.s64 + -11624;
	// bl 0x83523120
	ctx.lr = 0x83C9CE78;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30160
	ctx.r3.s64 = ctx.r10.s64 + -30160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CE84;
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

__attribute__((alias("__imp__sub_83C9CE94"))) PPC_WEAK_FUNC(sub_83C9CE94);
PPC_FUNC_IMPL(__imp__sub_83C9CE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CE98"))) PPC_WEAK_FUNC(sub_83C9CE98);
PPC_FUNC_IMPL(__imp__sub_83C9CE98) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11623
	ctx.r3.s64 = ctx.r11.s64 + -11623;
	// bl 0x83523120
	ctx.lr = 0x83C9CEB0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30144
	ctx.r3.s64 = ctx.r10.s64 + -30144;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CEBC;
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

__attribute__((alias("__imp__sub_83C9CECC"))) PPC_WEAK_FUNC(sub_83C9CECC);
PPC_FUNC_IMPL(__imp__sub_83C9CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CED0"))) PPC_WEAK_FUNC(sub_83C9CED0);
PPC_FUNC_IMPL(__imp__sub_83C9CED0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11622
	ctx.r3.s64 = ctx.r11.s64 + -11622;
	// bl 0x83523120
	ctx.lr = 0x83C9CEE8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30128
	ctx.r3.s64 = ctx.r10.s64 + -30128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CEF4;
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

__attribute__((alias("__imp__sub_83C9CF04"))) PPC_WEAK_FUNC(sub_83C9CF04);
PPC_FUNC_IMPL(__imp__sub_83C9CF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CF08"))) PPC_WEAK_FUNC(sub_83C9CF08);
PPC_FUNC_IMPL(__imp__sub_83C9CF08) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11621
	ctx.r3.s64 = ctx.r11.s64 + -11621;
	// bl 0x83523120
	ctx.lr = 0x83C9CF20;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30112
	ctx.r3.s64 = ctx.r10.s64 + -30112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CF2C;
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

__attribute__((alias("__imp__sub_83C9CF3C"))) PPC_WEAK_FUNC(sub_83C9CF3C);
PPC_FUNC_IMPL(__imp__sub_83C9CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

