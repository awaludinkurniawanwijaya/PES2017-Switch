#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D5A8A4"))) PPC_WEAK_FUNC(sub_83D5A8A4);
PPC_FUNC_IMPL(__imp__sub_83D5A8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A8A8"))) PPC_WEAK_FUNC(sub_83D5A8A8);
PPC_FUNC_IMPL(__imp__sub_83D5A8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10616
	ctx.r3.s64 = ctx.r11.s64 + 10616;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A8B4"))) PPC_WEAK_FUNC(sub_83D5A8B4);
PPC_FUNC_IMPL(__imp__sub_83D5A8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A8B8"))) PPC_WEAK_FUNC(sub_83D5A8B8);
PPC_FUNC_IMPL(__imp__sub_83D5A8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10620
	ctx.r3.s64 = ctx.r11.s64 + 10620;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A8C4"))) PPC_WEAK_FUNC(sub_83D5A8C4);
PPC_FUNC_IMPL(__imp__sub_83D5A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A8C8"))) PPC_WEAK_FUNC(sub_83D5A8C8);
PPC_FUNC_IMPL(__imp__sub_83D5A8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10644
	ctx.r3.s64 = ctx.r11.s64 + 10644;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A8D4"))) PPC_WEAK_FUNC(sub_83D5A8D4);
PPC_FUNC_IMPL(__imp__sub_83D5A8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A8D8"))) PPC_WEAK_FUNC(sub_83D5A8D8);
PPC_FUNC_IMPL(__imp__sub_83D5A8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10645
	ctx.r3.s64 = ctx.r11.s64 + 10645;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A8E4"))) PPC_WEAK_FUNC(sub_83D5A8E4);
PPC_FUNC_IMPL(__imp__sub_83D5A8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A8E8"))) PPC_WEAK_FUNC(sub_83D5A8E8);
PPC_FUNC_IMPL(__imp__sub_83D5A8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10660
	ctx.r3.s64 = ctx.r11.s64 + 10660;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A8F4"))) PPC_WEAK_FUNC(sub_83D5A8F4);
PPC_FUNC_IMPL(__imp__sub_83D5A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A8F8"))) PPC_WEAK_FUNC(sub_83D5A8F8);
PPC_FUNC_IMPL(__imp__sub_83D5A8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,10648
	ctx.r3.s64 = ctx.r11.s64 + 10648;
	// bl 0x82574ba8
	ctx.lr = 0x83D5A914;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83d5a95c
	if (cr6.eq) goto loc_83D5A95C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83D5A924:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83d5a924
	if (!cr0.eq) goto loc_83D5A924;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83d5a95c
	if (cr6.gt) goto loc_83D5A95C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83D5A95C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83D5A95C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5A96C"))) PPC_WEAK_FUNC(sub_83D5A96C);
PPC_FUNC_IMPL(__imp__sub_83D5A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A970"))) PPC_WEAK_FUNC(sub_83D5A970);
PPC_FUNC_IMPL(__imp__sub_83D5A970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10661
	ctx.r3.s64 = ctx.r11.s64 + 10661;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A97C"))) PPC_WEAK_FUNC(sub_83D5A97C);
PPC_FUNC_IMPL(__imp__sub_83D5A97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A980"))) PPC_WEAK_FUNC(sub_83D5A980);
PPC_FUNC_IMPL(__imp__sub_83D5A980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10662
	ctx.r3.s64 = ctx.r11.s64 + 10662;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A98C"))) PPC_WEAK_FUNC(sub_83D5A98C);
PPC_FUNC_IMPL(__imp__sub_83D5A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A990"))) PPC_WEAK_FUNC(sub_83D5A990);
PPC_FUNC_IMPL(__imp__sub_83D5A990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10668
	ctx.r3.s64 = ctx.r11.s64 + 10668;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A99C"))) PPC_WEAK_FUNC(sub_83D5A99C);
PPC_FUNC_IMPL(__imp__sub_83D5A99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A9A0"))) PPC_WEAK_FUNC(sub_83D5A9A0);
PPC_FUNC_IMPL(__imp__sub_83D5A9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10676
	ctx.r3.s64 = ctx.r11.s64 + 10676;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A9AC"))) PPC_WEAK_FUNC(sub_83D5A9AC);
PPC_FUNC_IMPL(__imp__sub_83D5A9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A9B0"))) PPC_WEAK_FUNC(sub_83D5A9B0);
PPC_FUNC_IMPL(__imp__sub_83D5A9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10688
	ctx.r3.s64 = ctx.r11.s64 + 10688;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5A9BC"))) PPC_WEAK_FUNC(sub_83D5A9BC);
PPC_FUNC_IMPL(__imp__sub_83D5A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5A9C0"))) PPC_WEAK_FUNC(sub_83D5A9C0);
PPC_FUNC_IMPL(__imp__sub_83D5A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,10696
	ctx.r3.s64 = ctx.r11.s64 + 10696;
	// bl 0x82574ba8
	ctx.lr = 0x83D5A9DC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83d5aa24
	if (cr6.eq) goto loc_83D5AA24;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83D5A9EC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83d5a9ec
	if (!cr0.eq) goto loc_83D5A9EC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83d5aa24
	if (cr6.gt) goto loc_83D5AA24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83D5AA24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83D5AA24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5AA34"))) PPC_WEAK_FUNC(sub_83D5AA34);
PPC_FUNC_IMPL(__imp__sub_83D5AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AA38"))) PPC_WEAK_FUNC(sub_83D5AA38);
PPC_FUNC_IMPL(__imp__sub_83D5AA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10712
	ctx.r3.s64 = ctx.r11.s64 + 10712;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AA44"))) PPC_WEAK_FUNC(sub_83D5AA44);
PPC_FUNC_IMPL(__imp__sub_83D5AA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AA48"))) PPC_WEAK_FUNC(sub_83D5AA48);
PPC_FUNC_IMPL(__imp__sub_83D5AA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r31,21
	ctx.r31.s64 = 21;
	// addi r11,r11,10720
	ctx.r11.s64 = ctx.r11.s64 + 10720;
	// addi r30,r11,88
	ctx.r30.s64 = ctx.r11.s64 + 88;
loc_83D5AA6C:
	// lwzu r3,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83521f50
	ctx.lr = 0x83D5AA74;
	sub_83521F50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x83d5aa6c
	if (!cr0.lt) goto loc_83D5AA6C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5AA94"))) PPC_WEAK_FUNC(sub_83D5AA94);
PPC_FUNC_IMPL(__imp__sub_83D5AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AA98"))) PPC_WEAK_FUNC(sub_83D5AA98);
PPC_FUNC_IMPL(__imp__sub_83D5AA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10828
	ctx.r3.s64 = ctx.r11.s64 + 10828;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AAA4"))) PPC_WEAK_FUNC(sub_83D5AAA4);
PPC_FUNC_IMPL(__imp__sub_83D5AAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AAA8"))) PPC_WEAK_FUNC(sub_83D5AAA8);
PPC_FUNC_IMPL(__imp__sub_83D5AAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10832
	ctx.r3.s64 = ctx.r11.s64 + 10832;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AAB4"))) PPC_WEAK_FUNC(sub_83D5AAB4);
PPC_FUNC_IMPL(__imp__sub_83D5AAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AAB8"))) PPC_WEAK_FUNC(sub_83D5AAB8);
PPC_FUNC_IMPL(__imp__sub_83D5AAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83D5AAC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r29,20
	ctx.r29.s64 = 20;
	// addi r11,r11,10896
	ctx.r11.s64 = ctx.r11.s64 + 10896;
	// li r30,-2
	ctx.r30.s64 = -2;
	// addi r31,r11,168
	ctx.r31.s64 = ctx.r11.s64 + 168;
loc_83D5AAD8:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574ba8
	ctx.lr = 0x83D5AAE8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83d5ab2c
	if (cr6.eq) goto loc_83D5AB2C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_83D5AAF4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83d5aaf4
	if (!cr0.eq) goto loc_83D5AAF4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x83d5ab2c
	if (cr6.gt) goto loc_83D5AB2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83D5AB2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83D5AB2C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x83d5aad8
	if (!cr0.lt) goto loc_83D5AAD8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AB3C"))) PPC_WEAK_FUNC(sub_83D5AB3C);
PPC_FUNC_IMPL(__imp__sub_83D5AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AB40"))) PPC_WEAK_FUNC(sub_83D5AB40);
PPC_FUNC_IMPL(__imp__sub_83D5AB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11100
	ctx.r3.s64 = ctx.r11.s64 + 11100;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AB4C"))) PPC_WEAK_FUNC(sub_83D5AB4C);
PPC_FUNC_IMPL(__imp__sub_83D5AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AB50"))) PPC_WEAK_FUNC(sub_83D5AB50);
PPC_FUNC_IMPL(__imp__sub_83D5AB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11464
	ctx.r3.s64 = ctx.r11.s64 + 11464;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AB5C"))) PPC_WEAK_FUNC(sub_83D5AB5C);
PPC_FUNC_IMPL(__imp__sub_83D5AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AB60"))) PPC_WEAK_FUNC(sub_83D5AB60);
PPC_FUNC_IMPL(__imp__sub_83D5AB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11284
	ctx.r3.s64 = ctx.r11.s64 + 11284;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AB6C"))) PPC_WEAK_FUNC(sub_83D5AB6C);
PPC_FUNC_IMPL(__imp__sub_83D5AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AB70"))) PPC_WEAK_FUNC(sub_83D5AB70);
PPC_FUNC_IMPL(__imp__sub_83D5AB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11584
	ctx.r3.s64 = ctx.r11.s64 + 11584;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AB7C"))) PPC_WEAK_FUNC(sub_83D5AB7C);
PPC_FUNC_IMPL(__imp__sub_83D5AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AB80"))) PPC_WEAK_FUNC(sub_83D5AB80);
PPC_FUNC_IMPL(__imp__sub_83D5AB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11524
	ctx.r3.s64 = ctx.r11.s64 + 11524;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AB8C"))) PPC_WEAK_FUNC(sub_83D5AB8C);
PPC_FUNC_IMPL(__imp__sub_83D5AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AB90"))) PPC_WEAK_FUNC(sub_83D5AB90);
PPC_FUNC_IMPL(__imp__sub_83D5AB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11224
	ctx.r3.s64 = ctx.r11.s64 + 11224;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AB9C"))) PPC_WEAK_FUNC(sub_83D5AB9C);
PPC_FUNC_IMPL(__imp__sub_83D5AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ABA0"))) PPC_WEAK_FUNC(sub_83D5ABA0);
PPC_FUNC_IMPL(__imp__sub_83D5ABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ABAC"))) PPC_WEAK_FUNC(sub_83D5ABAC);
PPC_FUNC_IMPL(__imp__sub_83D5ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ABB0"))) PPC_WEAK_FUNC(sub_83D5ABB0);
PPC_FUNC_IMPL(__imp__sub_83D5ABB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11344
	ctx.r3.s64 = ctx.r11.s64 + 11344;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ABBC"))) PPC_WEAK_FUNC(sub_83D5ABBC);
PPC_FUNC_IMPL(__imp__sub_83D5ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ABC0"))) PPC_WEAK_FUNC(sub_83D5ABC0);
PPC_FUNC_IMPL(__imp__sub_83D5ABC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11164
	ctx.r3.s64 = ctx.r11.s64 + 11164;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ABCC"))) PPC_WEAK_FUNC(sub_83D5ABCC);
PPC_FUNC_IMPL(__imp__sub_83D5ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ABD0"))) PPC_WEAK_FUNC(sub_83D5ABD0);
PPC_FUNC_IMPL(__imp__sub_83D5ABD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11104
	ctx.r3.s64 = ctx.r11.s64 + 11104;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ABDC"))) PPC_WEAK_FUNC(sub_83D5ABDC);
PPC_FUNC_IMPL(__imp__sub_83D5ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ABE0"))) PPC_WEAK_FUNC(sub_83D5ABE0);
PPC_FUNC_IMPL(__imp__sub_83D5ABE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11644
	ctx.r3.s64 = ctx.r11.s64 + 11644;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ABEC"))) PPC_WEAK_FUNC(sub_83D5ABEC);
PPC_FUNC_IMPL(__imp__sub_83D5ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ABF0"))) PPC_WEAK_FUNC(sub_83D5ABF0);
PPC_FUNC_IMPL(__imp__sub_83D5ABF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11708
	ctx.r3.s64 = ctx.r11.s64 + 11708;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ABFC"))) PPC_WEAK_FUNC(sub_83D5ABFC);
PPC_FUNC_IMPL(__imp__sub_83D5ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AC00"))) PPC_WEAK_FUNC(sub_83D5AC00);
PPC_FUNC_IMPL(__imp__sub_83D5AC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11716
	ctx.r3.s64 = ctx.r11.s64 + 11716;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AC0C"))) PPC_WEAK_FUNC(sub_83D5AC0C);
PPC_FUNC_IMPL(__imp__sub_83D5AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AC10"))) PPC_WEAK_FUNC(sub_83D5AC10);
PPC_FUNC_IMPL(__imp__sub_83D5AC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11724
	ctx.r3.s64 = ctx.r11.s64 + 11724;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AC1C"))) PPC_WEAK_FUNC(sub_83D5AC1C);
PPC_FUNC_IMPL(__imp__sub_83D5AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AC20"))) PPC_WEAK_FUNC(sub_83D5AC20);
PPC_FUNC_IMPL(__imp__sub_83D5AC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11732
	ctx.r3.s64 = ctx.r11.s64 + 11732;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AC2C"))) PPC_WEAK_FUNC(sub_83D5AC2C);
PPC_FUNC_IMPL(__imp__sub_83D5AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AC30"))) PPC_WEAK_FUNC(sub_83D5AC30);
PPC_FUNC_IMPL(__imp__sub_83D5AC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AC3C"))) PPC_WEAK_FUNC(sub_83D5AC3C);
PPC_FUNC_IMPL(__imp__sub_83D5AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AC40"))) PPC_WEAK_FUNC(sub_83D5AC40);
PPC_FUNC_IMPL(__imp__sub_83D5AC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r11,r11,11752
	ctx.r11.s64 = ctx.r11.s64 + 11752;
	// addi r31,r11,72
	ctx.r31.s64 = ctx.r11.s64 + 72;
loc_83D5AC64:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83D5AC70;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83D5AC78;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d5ac64
	if (!cr0.lt) goto loc_83D5AC64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5AC98"))) PPC_WEAK_FUNC(sub_83D5AC98);
PPC_FUNC_IMPL(__imp__sub_83D5AC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11828
	ctx.r3.s64 = ctx.r11.s64 + 11828;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ACA4"))) PPC_WEAK_FUNC(sub_83D5ACA4);
PPC_FUNC_IMPL(__imp__sub_83D5ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ACA8"))) PPC_WEAK_FUNC(sub_83D5ACA8);
PPC_FUNC_IMPL(__imp__sub_83D5ACA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11836
	ctx.r3.s64 = ctx.r11.s64 + 11836;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ACB4"))) PPC_WEAK_FUNC(sub_83D5ACB4);
PPC_FUNC_IMPL(__imp__sub_83D5ACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ACB8"))) PPC_WEAK_FUNC(sub_83D5ACB8);
PPC_FUNC_IMPL(__imp__sub_83D5ACB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11840
	ctx.r3.s64 = ctx.r11.s64 + 11840;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ACC4"))) PPC_WEAK_FUNC(sub_83D5ACC4);
PPC_FUNC_IMPL(__imp__sub_83D5ACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ACC8"))) PPC_WEAK_FUNC(sub_83D5ACC8);
PPC_FUNC_IMPL(__imp__sub_83D5ACC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11904
	ctx.r3.s64 = ctx.r11.s64 + 11904;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ACD4"))) PPC_WEAK_FUNC(sub_83D5ACD4);
PPC_FUNC_IMPL(__imp__sub_83D5ACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ACD8"))) PPC_WEAK_FUNC(sub_83D5ACD8);
PPC_FUNC_IMPL(__imp__sub_83D5ACD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12148
	ctx.r3.s64 = ctx.r11.s64 + 12148;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ACE4"))) PPC_WEAK_FUNC(sub_83D5ACE4);
PPC_FUNC_IMPL(__imp__sub_83D5ACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ACE8"))) PPC_WEAK_FUNC(sub_83D5ACE8);
PPC_FUNC_IMPL(__imp__sub_83D5ACE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ACF4"))) PPC_WEAK_FUNC(sub_83D5ACF4);
PPC_FUNC_IMPL(__imp__sub_83D5ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ACF8"))) PPC_WEAK_FUNC(sub_83D5ACF8);
PPC_FUNC_IMPL(__imp__sub_83D5ACF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11968
	ctx.r3.s64 = ctx.r11.s64 + 11968;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AD04"))) PPC_WEAK_FUNC(sub_83D5AD04);
PPC_FUNC_IMPL(__imp__sub_83D5AD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AD08"))) PPC_WEAK_FUNC(sub_83D5AD08);
PPC_FUNC_IMPL(__imp__sub_83D5AD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12028
	ctx.r3.s64 = ctx.r11.s64 + 12028;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AD14"))) PPC_WEAK_FUNC(sub_83D5AD14);
PPC_FUNC_IMPL(__imp__sub_83D5AD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AD18"))) PPC_WEAK_FUNC(sub_83D5AD18);
PPC_FUNC_IMPL(__imp__sub_83D5AD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11908
	ctx.r3.s64 = ctx.r11.s64 + 11908;
	// b 0x835230e0
	sub_835230E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AD24"))) PPC_WEAK_FUNC(sub_83D5AD24);
PPC_FUNC_IMPL(__imp__sub_83D5AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AD28"))) PPC_WEAK_FUNC(sub_83D5AD28);
PPC_FUNC_IMPL(__imp__sub_83D5AD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12212
	ctx.r3.s64 = ctx.r11.s64 + 12212;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AD34"))) PPC_WEAK_FUNC(sub_83D5AD34);
PPC_FUNC_IMPL(__imp__sub_83D5AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AD38"))) PPC_WEAK_FUNC(sub_83D5AD38);
PPC_FUNC_IMPL(__imp__sub_83D5AD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12220
	ctx.r3.s64 = ctx.r11.s64 + 12220;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AD44"))) PPC_WEAK_FUNC(sub_83D5AD44);
PPC_FUNC_IMPL(__imp__sub_83D5AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AD48"))) PPC_WEAK_FUNC(sub_83D5AD48);
PPC_FUNC_IMPL(__imp__sub_83D5AD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r31,13
	ctx.r31.s64 = 13;
	// addi r11,r11,12224
	ctx.r11.s64 = ctx.r11.s64 + 12224;
	// addi r30,r11,56
	ctx.r30.s64 = ctx.r11.s64 + 56;
loc_83D5AD6C:
	// lwzu r3,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83521f50
	ctx.lr = 0x83D5AD74;
	sub_83521F50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x83d5ad6c
	if (!cr0.lt) goto loc_83D5AD6C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5AD94"))) PPC_WEAK_FUNC(sub_83D5AD94);
PPC_FUNC_IMPL(__imp__sub_83D5AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AD98"))) PPC_WEAK_FUNC(sub_83D5AD98);
PPC_FUNC_IMPL(__imp__sub_83D5AD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12284
	ctx.r3.s64 = ctx.r11.s64 + 12284;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ADA4"))) PPC_WEAK_FUNC(sub_83D5ADA4);
PPC_FUNC_IMPL(__imp__sub_83D5ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ADA8"))) PPC_WEAK_FUNC(sub_83D5ADA8);
PPC_FUNC_IMPL(__imp__sub_83D5ADA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12285
	ctx.r3.s64 = ctx.r11.s64 + 12285;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ADB4"))) PPC_WEAK_FUNC(sub_83D5ADB4);
PPC_FUNC_IMPL(__imp__sub_83D5ADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ADB8"))) PPC_WEAK_FUNC(sub_83D5ADB8);
PPC_FUNC_IMPL(__imp__sub_83D5ADB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12292
	ctx.r3.s64 = ctx.r11.s64 + 12292;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ADC4"))) PPC_WEAK_FUNC(sub_83D5ADC4);
PPC_FUNC_IMPL(__imp__sub_83D5ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ADC8"))) PPC_WEAK_FUNC(sub_83D5ADC8);
PPC_FUNC_IMPL(__imp__sub_83D5ADC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12296
	ctx.r3.s64 = ctx.r11.s64 + 12296;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ADD4"))) PPC_WEAK_FUNC(sub_83D5ADD4);
PPC_FUNC_IMPL(__imp__sub_83D5ADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ADD8"))) PPC_WEAK_FUNC(sub_83D5ADD8);
PPC_FUNC_IMPL(__imp__sub_83D5ADD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12324
	ctx.r3.s64 = ctx.r11.s64 + 12324;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ADE4"))) PPC_WEAK_FUNC(sub_83D5ADE4);
PPC_FUNC_IMPL(__imp__sub_83D5ADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ADE8"))) PPC_WEAK_FUNC(sub_83D5ADE8);
PPC_FUNC_IMPL(__imp__sub_83D5ADE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12328
	ctx.r3.s64 = ctx.r11.s64 + 12328;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5ADF4"))) PPC_WEAK_FUNC(sub_83D5ADF4);
PPC_FUNC_IMPL(__imp__sub_83D5ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5ADF8"))) PPC_WEAK_FUNC(sub_83D5ADF8);
PPC_FUNC_IMPL(__imp__sub_83D5ADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12356
	ctx.r3.s64 = ctx.r11.s64 + 12356;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE04"))) PPC_WEAK_FUNC(sub_83D5AE04);
PPC_FUNC_IMPL(__imp__sub_83D5AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE08"))) PPC_WEAK_FUNC(sub_83D5AE08);
PPC_FUNC_IMPL(__imp__sub_83D5AE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12360
	ctx.r3.s64 = ctx.r11.s64 + 12360;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE14"))) PPC_WEAK_FUNC(sub_83D5AE14);
PPC_FUNC_IMPL(__imp__sub_83D5AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE18"))) PPC_WEAK_FUNC(sub_83D5AE18);
PPC_FUNC_IMPL(__imp__sub_83D5AE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12404
	ctx.r3.s64 = ctx.r11.s64 + 12404;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE24"))) PPC_WEAK_FUNC(sub_83D5AE24);
PPC_FUNC_IMPL(__imp__sub_83D5AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE28"))) PPC_WEAK_FUNC(sub_83D5AE28);
PPC_FUNC_IMPL(__imp__sub_83D5AE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12408
	ctx.r3.s64 = ctx.r11.s64 + 12408;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE34"))) PPC_WEAK_FUNC(sub_83D5AE34);
PPC_FUNC_IMPL(__imp__sub_83D5AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE38"))) PPC_WEAK_FUNC(sub_83D5AE38);
PPC_FUNC_IMPL(__imp__sub_83D5AE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12440
	ctx.r3.s64 = ctx.r11.s64 + 12440;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE44"))) PPC_WEAK_FUNC(sub_83D5AE44);
PPC_FUNC_IMPL(__imp__sub_83D5AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE48"))) PPC_WEAK_FUNC(sub_83D5AE48);
PPC_FUNC_IMPL(__imp__sub_83D5AE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12444
	ctx.r3.s64 = ctx.r11.s64 + 12444;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE54"))) PPC_WEAK_FUNC(sub_83D5AE54);
PPC_FUNC_IMPL(__imp__sub_83D5AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE58"))) PPC_WEAK_FUNC(sub_83D5AE58);
PPC_FUNC_IMPL(__imp__sub_83D5AE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12468
	ctx.r3.s64 = ctx.r11.s64 + 12468;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE64"))) PPC_WEAK_FUNC(sub_83D5AE64);
PPC_FUNC_IMPL(__imp__sub_83D5AE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE68"))) PPC_WEAK_FUNC(sub_83D5AE68);
PPC_FUNC_IMPL(__imp__sub_83D5AE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12496
	ctx.r3.s64 = ctx.r11.s64 + 12496;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE74"))) PPC_WEAK_FUNC(sub_83D5AE74);
PPC_FUNC_IMPL(__imp__sub_83D5AE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE78"))) PPC_WEAK_FUNC(sub_83D5AE78);
PPC_FUNC_IMPL(__imp__sub_83D5AE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12500
	ctx.r3.s64 = ctx.r11.s64 + 12500;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE84"))) PPC_WEAK_FUNC(sub_83D5AE84);
PPC_FUNC_IMPL(__imp__sub_83D5AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE88"))) PPC_WEAK_FUNC(sub_83D5AE88);
PPC_FUNC_IMPL(__imp__sub_83D5AE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12560
	ctx.r3.s64 = ctx.r11.s64 + 12560;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AE94"))) PPC_WEAK_FUNC(sub_83D5AE94);
PPC_FUNC_IMPL(__imp__sub_83D5AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AE98"))) PPC_WEAK_FUNC(sub_83D5AE98);
PPC_FUNC_IMPL(__imp__sub_83D5AE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12564
	ctx.r3.s64 = ctx.r11.s64 + 12564;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AEA4"))) PPC_WEAK_FUNC(sub_83D5AEA4);
PPC_FUNC_IMPL(__imp__sub_83D5AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AEA8"))) PPC_WEAK_FUNC(sub_83D5AEA8);
PPC_FUNC_IMPL(__imp__sub_83D5AEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12592
	ctx.r3.s64 = ctx.r11.s64 + 12592;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AEB4"))) PPC_WEAK_FUNC(sub_83D5AEB4);
PPC_FUNC_IMPL(__imp__sub_83D5AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AEB8"))) PPC_WEAK_FUNC(sub_83D5AEB8);
PPC_FUNC_IMPL(__imp__sub_83D5AEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12756
	ctx.r3.s64 = ctx.r11.s64 + 12756;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AEC4"))) PPC_WEAK_FUNC(sub_83D5AEC4);
PPC_FUNC_IMPL(__imp__sub_83D5AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AEC8"))) PPC_WEAK_FUNC(sub_83D5AEC8);
PPC_FUNC_IMPL(__imp__sub_83D5AEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AED4"))) PPC_WEAK_FUNC(sub_83D5AED4);
PPC_FUNC_IMPL(__imp__sub_83D5AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AED8"))) PPC_WEAK_FUNC(sub_83D5AED8);
PPC_FUNC_IMPL(__imp__sub_83D5AED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12788
	ctx.r3.s64 = ctx.r11.s64 + 12788;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AEE4"))) PPC_WEAK_FUNC(sub_83D5AEE4);
PPC_FUNC_IMPL(__imp__sub_83D5AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AEE8"))) PPC_WEAK_FUNC(sub_83D5AEE8);
PPC_FUNC_IMPL(__imp__sub_83D5AEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12816
	ctx.r3.s64 = ctx.r11.s64 + 12816;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AEF4"))) PPC_WEAK_FUNC(sub_83D5AEF4);
PPC_FUNC_IMPL(__imp__sub_83D5AEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AEF8"))) PPC_WEAK_FUNC(sub_83D5AEF8);
PPC_FUNC_IMPL(__imp__sub_83D5AEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12820
	ctx.r3.s64 = ctx.r11.s64 + 12820;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF04"))) PPC_WEAK_FUNC(sub_83D5AF04);
PPC_FUNC_IMPL(__imp__sub_83D5AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF08"))) PPC_WEAK_FUNC(sub_83D5AF08);
PPC_FUNC_IMPL(__imp__sub_83D5AF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12852
	ctx.r3.s64 = ctx.r11.s64 + 12852;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF14"))) PPC_WEAK_FUNC(sub_83D5AF14);
PPC_FUNC_IMPL(__imp__sub_83D5AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF18"))) PPC_WEAK_FUNC(sub_83D5AF18);
PPC_FUNC_IMPL(__imp__sub_83D5AF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12860
	ctx.r3.s64 = ctx.r11.s64 + 12860;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF24"))) PPC_WEAK_FUNC(sub_83D5AF24);
PPC_FUNC_IMPL(__imp__sub_83D5AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF28"))) PPC_WEAK_FUNC(sub_83D5AF28);
PPC_FUNC_IMPL(__imp__sub_83D5AF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12868
	ctx.r3.s64 = ctx.r11.s64 + 12868;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF34"))) PPC_WEAK_FUNC(sub_83D5AF34);
PPC_FUNC_IMPL(__imp__sub_83D5AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF38"))) PPC_WEAK_FUNC(sub_83D5AF38);
PPC_FUNC_IMPL(__imp__sub_83D5AF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12876
	ctx.r3.s64 = ctx.r11.s64 + 12876;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF44"))) PPC_WEAK_FUNC(sub_83D5AF44);
PPC_FUNC_IMPL(__imp__sub_83D5AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF48"))) PPC_WEAK_FUNC(sub_83D5AF48);
PPC_FUNC_IMPL(__imp__sub_83D5AF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12884
	ctx.r3.s64 = ctx.r11.s64 + 12884;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF54"))) PPC_WEAK_FUNC(sub_83D5AF54);
PPC_FUNC_IMPL(__imp__sub_83D5AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF58"))) PPC_WEAK_FUNC(sub_83D5AF58);
PPC_FUNC_IMPL(__imp__sub_83D5AF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12888
	ctx.r3.s64 = ctx.r11.s64 + 12888;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF64"))) PPC_WEAK_FUNC(sub_83D5AF64);
PPC_FUNC_IMPL(__imp__sub_83D5AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF68"))) PPC_WEAK_FUNC(sub_83D5AF68);
PPC_FUNC_IMPL(__imp__sub_83D5AF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12916
	ctx.r3.s64 = ctx.r11.s64 + 12916;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF74"))) PPC_WEAK_FUNC(sub_83D5AF74);
PPC_FUNC_IMPL(__imp__sub_83D5AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF78"))) PPC_WEAK_FUNC(sub_83D5AF78);
PPC_FUNC_IMPL(__imp__sub_83D5AF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12920
	ctx.r3.s64 = ctx.r11.s64 + 12920;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF84"))) PPC_WEAK_FUNC(sub_83D5AF84);
PPC_FUNC_IMPL(__imp__sub_83D5AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF88"))) PPC_WEAK_FUNC(sub_83D5AF88);
PPC_FUNC_IMPL(__imp__sub_83D5AF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12948
	ctx.r3.s64 = ctx.r11.s64 + 12948;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AF94"))) PPC_WEAK_FUNC(sub_83D5AF94);
PPC_FUNC_IMPL(__imp__sub_83D5AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AF98"))) PPC_WEAK_FUNC(sub_83D5AF98);
PPC_FUNC_IMPL(__imp__sub_83D5AF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13036
	ctx.r3.s64 = ctx.r11.s64 + 13036;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AFA4"))) PPC_WEAK_FUNC(sub_83D5AFA4);
PPC_FUNC_IMPL(__imp__sub_83D5AFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AFA8"))) PPC_WEAK_FUNC(sub_83D5AFA8);
PPC_FUNC_IMPL(__imp__sub_83D5AFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13044
	ctx.r3.s64 = ctx.r11.s64 + 13044;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AFB4"))) PPC_WEAK_FUNC(sub_83D5AFB4);
PPC_FUNC_IMPL(__imp__sub_83D5AFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AFB8"))) PPC_WEAK_FUNC(sub_83D5AFB8);
PPC_FUNC_IMPL(__imp__sub_83D5AFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13048
	ctx.r3.s64 = ctx.r11.s64 + 13048;
	// b 0x83102db0
	sub_83102DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AFC4"))) PPC_WEAK_FUNC(sub_83D5AFC4);
PPC_FUNC_IMPL(__imp__sub_83D5AFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AFC8"))) PPC_WEAK_FUNC(sub_83D5AFC8);
PPC_FUNC_IMPL(__imp__sub_83D5AFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13076
	ctx.r3.s64 = ctx.r11.s64 + 13076;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AFD4"))) PPC_WEAK_FUNC(sub_83D5AFD4);
PPC_FUNC_IMPL(__imp__sub_83D5AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AFD8"))) PPC_WEAK_FUNC(sub_83D5AFD8);
PPC_FUNC_IMPL(__imp__sub_83D5AFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13088
	ctx.r3.s64 = ctx.r11.s64 + 13088;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AFE4"))) PPC_WEAK_FUNC(sub_83D5AFE4);
PPC_FUNC_IMPL(__imp__sub_83D5AFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AFE8"))) PPC_WEAK_FUNC(sub_83D5AFE8);
PPC_FUNC_IMPL(__imp__sub_83D5AFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13096
	ctx.r3.s64 = ctx.r11.s64 + 13096;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5AFF4"))) PPC_WEAK_FUNC(sub_83D5AFF4);
PPC_FUNC_IMPL(__imp__sub_83D5AFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5AFF8"))) PPC_WEAK_FUNC(sub_83D5AFF8);
PPC_FUNC_IMPL(__imp__sub_83D5AFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16260
	ctx.r3.s64 = ctx.r11.s64 + 16260;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B004"))) PPC_WEAK_FUNC(sub_83D5B004);
PPC_FUNC_IMPL(__imp__sub_83D5B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B008"))) PPC_WEAK_FUNC(sub_83D5B008);
PPC_FUNC_IMPL(__imp__sub_83D5B008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B014"))) PPC_WEAK_FUNC(sub_83D5B014);
PPC_FUNC_IMPL(__imp__sub_83D5B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B018"))) PPC_WEAK_FUNC(sub_83D5B018);
PPC_FUNC_IMPL(__imp__sub_83D5B018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r10,r11,16272
	ctx.r10.s64 = ctx.r11.s64 + 16272;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x83521f50
	sub_83521F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B028"))) PPC_WEAK_FUNC(sub_83D5B028);
PPC_FUNC_IMPL(__imp__sub_83D5B028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16408
	ctx.r3.s64 = ctx.r11.s64 + 16408;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B034"))) PPC_WEAK_FUNC(sub_83D5B034);
PPC_FUNC_IMPL(__imp__sub_83D5B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B038"))) PPC_WEAK_FUNC(sub_83D5B038);
PPC_FUNC_IMPL(__imp__sub_83D5B038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B03C"))) PPC_WEAK_FUNC(sub_83D5B03C);
PPC_FUNC_IMPL(__imp__sub_83D5B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B040"))) PPC_WEAK_FUNC(sub_83D5B040);
PPC_FUNC_IMPL(__imp__sub_83D5B040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16409
	ctx.r3.s64 = ctx.r11.s64 + 16409;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B04C"))) PPC_WEAK_FUNC(sub_83D5B04C);
PPC_FUNC_IMPL(__imp__sub_83D5B04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B050"))) PPC_WEAK_FUNC(sub_83D5B050);
PPC_FUNC_IMPL(__imp__sub_83D5B050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16410
	ctx.r3.s64 = ctx.r11.s64 + 16410;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B05C"))) PPC_WEAK_FUNC(sub_83D5B05C);
PPC_FUNC_IMPL(__imp__sub_83D5B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B060"))) PPC_WEAK_FUNC(sub_83D5B060);
PPC_FUNC_IMPL(__imp__sub_83D5B060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16411
	ctx.r3.s64 = ctx.r11.s64 + 16411;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B06C"))) PPC_WEAK_FUNC(sub_83D5B06C);
PPC_FUNC_IMPL(__imp__sub_83D5B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B070"))) PPC_WEAK_FUNC(sub_83D5B070);
PPC_FUNC_IMPL(__imp__sub_83D5B070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16412
	ctx.r3.s64 = ctx.r11.s64 + 16412;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B07C"))) PPC_WEAK_FUNC(sub_83D5B07C);
PPC_FUNC_IMPL(__imp__sub_83D5B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B080"))) PPC_WEAK_FUNC(sub_83D5B080);
PPC_FUNC_IMPL(__imp__sub_83D5B080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16413
	ctx.r3.s64 = ctx.r11.s64 + 16413;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B08C"))) PPC_WEAK_FUNC(sub_83D5B08C);
PPC_FUNC_IMPL(__imp__sub_83D5B08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B090"))) PPC_WEAK_FUNC(sub_83D5B090);
PPC_FUNC_IMPL(__imp__sub_83D5B090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16414
	ctx.r3.s64 = ctx.r11.s64 + 16414;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B09C"))) PPC_WEAK_FUNC(sub_83D5B09C);
PPC_FUNC_IMPL(__imp__sub_83D5B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B0A0"))) PPC_WEAK_FUNC(sub_83D5B0A0);
PPC_FUNC_IMPL(__imp__sub_83D5B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16415
	ctx.r3.s64 = ctx.r11.s64 + 16415;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B0AC"))) PPC_WEAK_FUNC(sub_83D5B0AC);
PPC_FUNC_IMPL(__imp__sub_83D5B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B0B0"))) PPC_WEAK_FUNC(sub_83D5B0B0);
PPC_FUNC_IMPL(__imp__sub_83D5B0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B0BC"))) PPC_WEAK_FUNC(sub_83D5B0BC);
PPC_FUNC_IMPL(__imp__sub_83D5B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B0C0"))) PPC_WEAK_FUNC(sub_83D5B0C0);
PPC_FUNC_IMPL(__imp__sub_83D5B0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16417
	ctx.r3.s64 = ctx.r11.s64 + 16417;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B0CC"))) PPC_WEAK_FUNC(sub_83D5B0CC);
PPC_FUNC_IMPL(__imp__sub_83D5B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B0D0"))) PPC_WEAK_FUNC(sub_83D5B0D0);
PPC_FUNC_IMPL(__imp__sub_83D5B0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16418
	ctx.r3.s64 = ctx.r11.s64 + 16418;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B0DC"))) PPC_WEAK_FUNC(sub_83D5B0DC);
PPC_FUNC_IMPL(__imp__sub_83D5B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B0E0"))) PPC_WEAK_FUNC(sub_83D5B0E0);
PPC_FUNC_IMPL(__imp__sub_83D5B0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16419
	ctx.r3.s64 = ctx.r11.s64 + 16419;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B0EC"))) PPC_WEAK_FUNC(sub_83D5B0EC);
PPC_FUNC_IMPL(__imp__sub_83D5B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B0F0"))) PPC_WEAK_FUNC(sub_83D5B0F0);
PPC_FUNC_IMPL(__imp__sub_83D5B0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16421
	ctx.r3.s64 = ctx.r11.s64 + 16421;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B0FC"))) PPC_WEAK_FUNC(sub_83D5B0FC);
PPC_FUNC_IMPL(__imp__sub_83D5B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B100"))) PPC_WEAK_FUNC(sub_83D5B100);
PPC_FUNC_IMPL(__imp__sub_83D5B100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,-24884
	ctx.r11.s64 = ctx.r11.s64 + -24884;
	// stw r11,-20616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20616, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B114"))) PPC_WEAK_FUNC(sub_83D5B114);
PPC_FUNC_IMPL(__imp__sub_83D5B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B118"))) PPC_WEAK_FUNC(sub_83D5B118);
PPC_FUNC_IMPL(__imp__sub_83D5B118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,16692
	ctx.r11.s64 = ctx.r11.s64 + 16692;
	// stw r11,-20600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B12C"))) PPC_WEAK_FUNC(sub_83D5B12C);
PPC_FUNC_IMPL(__imp__sub_83D5B12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B130"))) PPC_WEAK_FUNC(sub_83D5B130);
PPC_FUNC_IMPL(__imp__sub_83D5B130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,16692
	ctx.r11.s64 = ctx.r11.s64 + 16692;
	// stw r11,-20560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B144"))) PPC_WEAK_FUNC(sub_83D5B144);
PPC_FUNC_IMPL(__imp__sub_83D5B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B148"))) PPC_WEAK_FUNC(sub_83D5B148);
PPC_FUNC_IMPL(__imp__sub_83D5B148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,16692
	ctx.r11.s64 = ctx.r11.s64 + 16692;
	// stw r11,-20520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B15C"))) PPC_WEAK_FUNC(sub_83D5B15C);
PPC_FUNC_IMPL(__imp__sub_83D5B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B160"))) PPC_WEAK_FUNC(sub_83D5B160);
PPC_FUNC_IMPL(__imp__sub_83D5B160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,16692
	ctx.r11.s64 = ctx.r11.s64 + 16692;
	// stw r11,-20480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B174"))) PPC_WEAK_FUNC(sub_83D5B174);
PPC_FUNC_IMPL(__imp__sub_83D5B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B178"))) PPC_WEAK_FUNC(sub_83D5B178);
PPC_FUNC_IMPL(__imp__sub_83D5B178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,16692
	ctx.r11.s64 = ctx.r11.s64 + 16692;
	// stw r11,-20440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B18C"))) PPC_WEAK_FUNC(sub_83D5B18C);
PPC_FUNC_IMPL(__imp__sub_83D5B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B190"))) PPC_WEAK_FUNC(sub_83D5B190);
PPC_FUNC_IMPL(__imp__sub_83D5B190) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r10,-20652
	ctx.r9.s64 = ctx.r10.s64 + -20652;
	// addi r11,r11,-24884
	ctx.r11.s64 = ctx.r11.s64 + -24884;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B1A8"))) PPC_WEAK_FUNC(sub_83D5B1A8);
PPC_FUNC_IMPL(__imp__sub_83D5B1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r11,r11,16568
	ctx.r11.s64 = ctx.r11.s64 + 16568;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,400
	ctx.r11.s64 = ctx.r11.s64 + 400;
	// addi r10,r10,16692
	ctx.r10.s64 = ctx.r10.s64 + 16692;
loc_83D5B1C4:
	// stwu r10,-40(r11)
	ea = -40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83d5b1c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83D5B1C4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B1D0"))) PPC_WEAK_FUNC(sub_83D5B1D0);
PPC_FUNC_IMPL(__imp__sub_83D5B1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// addi r11,r11,30820
	ctx.r11.s64 = ctx.r11.s64 + 30820;
	// stw r11,16968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B1E4"))) PPC_WEAK_FUNC(sub_83D5B1E4);
PPC_FUNC_IMPL(__imp__sub_83D5B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B1E8"))) PPC_WEAK_FUNC(sub_83D5B1E8);
PPC_FUNC_IMPL(__imp__sub_83D5B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,16552
	ctx.r31.s64 = ctx.r11.s64 + 16552;
	// lwz r3,16552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16552);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83d5b22c
	if (cr6.eq) goto loc_83D5B22C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x835d7b00
	ctx.lr = 0x83D5B218;
	sub_835D7B00(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B22C;
	sub_825952B8(ctx, base);
loc_83D5B22C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B258"))) PPC_WEAK_FUNC(sub_83D5B258);
PPC_FUNC_IMPL(__imp__sub_83D5B258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,16944
	ctx.r11.s64 = ctx.r11.s64 + 16944;
	// stw r11,-20400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B26C"))) PPC_WEAK_FUNC(sub_83D5B26C);
PPC_FUNC_IMPL(__imp__sub_83D5B26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B270"))) PPC_WEAK_FUNC(sub_83D5B270);
PPC_FUNC_IMPL(__imp__sub_83D5B270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,11
	ctx.r10.s64 = 11;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r11,r11,17712
	ctx.r11.s64 = ctx.r11.s64 + 17712;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,440
	ctx.r11.s64 = ctx.r11.s64 + 440;
	// addi r10,r10,16692
	ctx.r10.s64 = ctx.r10.s64 + 16692;
loc_83D5B28C:
	// stwu r10,-40(r11)
	ea = -40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83d5b28c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83D5B28C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B298"))) PPC_WEAK_FUNC(sub_83D5B298);
PPC_FUNC_IMPL(__imp__sub_83D5B298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// addi r11,r11,30820
	ctx.r11.s64 = ctx.r11.s64 + 30820;
	// stw r11,17628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B2AC"))) PPC_WEAK_FUNC(sub_83D5B2AC);
PPC_FUNC_IMPL(__imp__sub_83D5B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B2B0"))) PPC_WEAK_FUNC(sub_83D5B2B0);
PPC_FUNC_IMPL(__imp__sub_83D5B2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,16856
	ctx.r11.s64 = ctx.r11.s64 + 16856;
	// stw r11,-20396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B2C4"))) PPC_WEAK_FUNC(sub_83D5B2C4);
PPC_FUNC_IMPL(__imp__sub_83D5B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B2C8"))) PPC_WEAK_FUNC(sub_83D5B2C8);
PPC_FUNC_IMPL(__imp__sub_83D5B2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// addi r11,r11,30820
	ctx.r11.s64 = ctx.r11.s64 + 30820;
	// stw r11,18156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B2DC"))) PPC_WEAK_FUNC(sub_83D5B2DC);
PPC_FUNC_IMPL(__imp__sub_83D5B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B2E0"))) PPC_WEAK_FUNC(sub_83D5B2E0);
PPC_FUNC_IMPL(__imp__sub_83D5B2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,18320
	ctx.r31.s64 = ctx.r11.s64 + 18320;
	// lwz r4,18320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18320);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83d5b314
	if (cr6.eq) goto loc_83D5B314;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B314;
	sub_825952B8(ctx, base);
loc_83D5B314:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B340"))) PPC_WEAK_FUNC(sub_83D5B340);
PPC_FUNC_IMPL(__imp__sub_83D5B340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// addi r11,r11,16944
	ctx.r11.s64 = ctx.r11.s64 + 16944;
	// stw r11,-20380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B354"))) PPC_WEAK_FUNC(sub_83D5B354);
PPC_FUNC_IMPL(__imp__sub_83D5B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B358"))) PPC_WEAK_FUNC(sub_83D5B358);
PPC_FUNC_IMPL(__imp__sub_83D5B358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r11,r11,18424
	ctx.r11.s64 = ctx.r11.s64 + 18424;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r10,r10,16692
	ctx.r10.s64 = ctx.r10.s64 + 16692;
loc_83D5B374:
	// stwu r10,-40(r11)
	ea = -40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83d5b374
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83D5B374;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B380"))) PPC_WEAK_FUNC(sub_83D5B380);
PPC_FUNC_IMPL(__imp__sub_83D5B380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,18584
	ctx.r31.s64 = ctx.r11.s64 + 18584;
	// lwz r4,18584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18584);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83d5b3b4
	if (cr6.eq) goto loc_83D5B3B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B3B4;
	sub_825952B8(ctx, base);
loc_83D5B3B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B3E0"))) PPC_WEAK_FUNC(sub_83D5B3E0);
PPC_FUNC_IMPL(__imp__sub_83D5B3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// addi r11,r11,17412
	ctx.r11.s64 = ctx.r11.s64 + 17412;
	// stw r11,18608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B3F4"))) PPC_WEAK_FUNC(sub_83D5B3F4);
PPC_FUNC_IMPL(__imp__sub_83D5B3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B3F8"))) PPC_WEAK_FUNC(sub_83D5B3F8);
PPC_FUNC_IMPL(__imp__sub_83D5B3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// addi r3,r31,18660
	ctx.r3.s64 = ctx.r31.s64 + 18660;
	// bl 0x82e62630
	ctx.lr = 0x83D5B414;
	sub_82E62630(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,18660(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18660);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B428;
	sub_825952B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B43C"))) PPC_WEAK_FUNC(sub_83D5B43C);
PPC_FUNC_IMPL(__imp__sub_83D5B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B440"))) PPC_WEAK_FUNC(sub_83D5B440);
PPC_FUNC_IMPL(__imp__sub_83D5B440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,18704
	ctx.r31.s64 = ctx.r11.s64 + 18704;
	// lwz r4,18704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18704);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83d5b474
	if (cr6.eq) goto loc_83D5B474;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B474;
	sub_825952B8(ctx, base);
loc_83D5B474:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B4A0"))) PPC_WEAK_FUNC(sub_83D5B4A0);
PPC_FUNC_IMPL(__imp__sub_83D5B4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,18688
	ctx.r31.s64 = ctx.r11.s64 + 18688;
	// lwz r3,18688(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18688);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83d5b4e8
	if (cr6.eq) goto loc_83D5B4E8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x833ea3a8
	ctx.lr = 0x83D5B4D4;
	sub_833EA3A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B4E8;
	sub_825952B8(ctx, base);
loc_83D5B4E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B514"))) PPC_WEAK_FUNC(sub_83D5B514);
PPC_FUNC_IMPL(__imp__sub_83D5B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B518"))) PPC_WEAK_FUNC(sub_83D5B518);
PPC_FUNC_IMPL(__imp__sub_83D5B518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,18672
	ctx.r31.s64 = ctx.r11.s64 + 18672;
	// lwz r4,18672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18672);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83d5b54c
	if (cr6.eq) goto loc_83D5B54C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B54C;
	sub_825952B8(ctx, base);
loc_83D5B54C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B578"))) PPC_WEAK_FUNC(sub_83D5B578);
PPC_FUNC_IMPL(__imp__sub_83D5B578) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31770
	ctx.r9.s64 = -2082078720;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r8,r9,-19172
	ctx.r8.s64 = ctx.r9.s64 + -19172;
	// addi r11,r11,16944
	ctx.r11.s64 = ctx.r11.s64 + 16944;
	// addi r10,r10,17484
	ctx.r10.s64 = ctx.r10.s64 + 17484;
	// stw r10,-19172(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19172, ctx.r10.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B59C"))) PPC_WEAK_FUNC(sub_83D5B59C);
PPC_FUNC_IMPL(__imp__sub_83D5B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B5A0"))) PPC_WEAK_FUNC(sub_83D5B5A0);
PPC_FUNC_IMPL(__imp__sub_83D5B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// addi r11,r11,30820
	ctx.r11.s64 = ctx.r11.s64 + 30820;
	// stw r11,18972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18972, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B5B4"))) PPC_WEAK_FUNC(sub_83D5B5B4);
PPC_FUNC_IMPL(__imp__sub_83D5B5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B5B8"))) PPC_WEAK_FUNC(sub_83D5B5B8);
PPC_FUNC_IMPL(__imp__sub_83D5B5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,18956
	ctx.r31.s64 = ctx.r11.s64 + 18956;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82da6ea8
	ctx.lr = 0x83D5B5E4;
	sub_82DA6EA8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B5F8;
	sub_825952B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B60C"))) PPC_WEAK_FUNC(sub_83D5B60C);
PPC_FUNC_IMPL(__imp__sub_83D5B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B610"))) PPC_WEAK_FUNC(sub_83D5B610);
PPC_FUNC_IMPL(__imp__sub_83D5B610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,18940
	ctx.r31.s64 = ctx.r11.s64 + 18940;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82da6ea8
	ctx.lr = 0x83D5B63C;
	sub_82DA6EA8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D5B650;
	sub_825952B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5B664"))) PPC_WEAK_FUNC(sub_83D5B664);
PPC_FUNC_IMPL(__imp__sub_83D5B664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B668"))) PPC_WEAK_FUNC(sub_83D5B668);
PPC_FUNC_IMPL(__imp__sub_83D5B668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19033
	ctx.r3.s64 = ctx.r11.s64 + 19033;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B674"))) PPC_WEAK_FUNC(sub_83D5B674);
PPC_FUNC_IMPL(__imp__sub_83D5B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B678"))) PPC_WEAK_FUNC(sub_83D5B678);
PPC_FUNC_IMPL(__imp__sub_83D5B678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19034
	ctx.r3.s64 = ctx.r11.s64 + 19034;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B684"))) PPC_WEAK_FUNC(sub_83D5B684);
PPC_FUNC_IMPL(__imp__sub_83D5B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B688"))) PPC_WEAK_FUNC(sub_83D5B688);
PPC_FUNC_IMPL(__imp__sub_83D5B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19035
	ctx.r3.s64 = ctx.r11.s64 + 19035;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B694"))) PPC_WEAK_FUNC(sub_83D5B694);
PPC_FUNC_IMPL(__imp__sub_83D5B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D5B698"))) PPC_WEAK_FUNC(sub_83D5B698);
PPC_FUNC_IMPL(__imp__sub_83D5B698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19036
	ctx.r3.s64 = ctx.r11.s64 + 19036;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5B6A4"))) PPC_WEAK_FUNC(sub_83D5B6A4);
PPC_FUNC_IMPL(__imp__sub_83D5B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

