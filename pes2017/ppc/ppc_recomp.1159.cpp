#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D29584"))) PPC_WEAK_FUNC(sub_83D29584);
PPC_FUNC_IMPL(__imp__sub_83D29584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29588"))) PPC_WEAK_FUNC(sub_83D29588);
PPC_FUNC_IMPL(__imp__sub_83D29588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2958C"))) PPC_WEAK_FUNC(sub_83D2958C);
PPC_FUNC_IMPL(__imp__sub_83D2958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29590"))) PPC_WEAK_FUNC(sub_83D29590);
PPC_FUNC_IMPL(__imp__sub_83D29590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29594"))) PPC_WEAK_FUNC(sub_83D29594);
PPC_FUNC_IMPL(__imp__sub_83D29594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29598"))) PPC_WEAK_FUNC(sub_83D29598);
PPC_FUNC_IMPL(__imp__sub_83D29598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2959C"))) PPC_WEAK_FUNC(sub_83D2959C);
PPC_FUNC_IMPL(__imp__sub_83D2959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D295A0"))) PPC_WEAK_FUNC(sub_83D295A0);
PPC_FUNC_IMPL(__imp__sub_83D295A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D295A4"))) PPC_WEAK_FUNC(sub_83D295A4);
PPC_FUNC_IMPL(__imp__sub_83D295A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D295A8"))) PPC_WEAK_FUNC(sub_83D295A8);
PPC_FUNC_IMPL(__imp__sub_83D295A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-32576
	ctx.r3.s64 = ctx.r11.s64 + -32576;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D295B4"))) PPC_WEAK_FUNC(sub_83D295B4);
PPC_FUNC_IMPL(__imp__sub_83D295B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D295B8"))) PPC_WEAK_FUNC(sub_83D295B8);
PPC_FUNC_IMPL(__imp__sub_83D295B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D295BC"))) PPC_WEAK_FUNC(sub_83D295BC);
PPC_FUNC_IMPL(__imp__sub_83D295BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D295C0"))) PPC_WEAK_FUNC(sub_83D295C0);
PPC_FUNC_IMPL(__imp__sub_83D295C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D295C4"))) PPC_WEAK_FUNC(sub_83D295C4);
PPC_FUNC_IMPL(__imp__sub_83D295C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D295C8"))) PPC_WEAK_FUNC(sub_83D295C8);
PPC_FUNC_IMPL(__imp__sub_83D295C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D295CC"))) PPC_WEAK_FUNC(sub_83D295CC);
PPC_FUNC_IMPL(__imp__sub_83D295CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D295D0"))) PPC_WEAK_FUNC(sub_83D295D0);
PPC_FUNC_IMPL(__imp__sub_83D295D0) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-8620
	ctx.r31.s64 = ctx.r11.s64 + -8620;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d29608
	if (cr6.lt) goto loc_83D29608;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D29608;
	sub_825952B8(ctx, base);
loc_83D29608:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D29634"))) PPC_WEAK_FUNC(sub_83D29634);
PPC_FUNC_IMPL(__imp__sub_83D29634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29638"))) PPC_WEAK_FUNC(sub_83D29638);
PPC_FUNC_IMPL(__imp__sub_83D29638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2963C"))) PPC_WEAK_FUNC(sub_83D2963C);
PPC_FUNC_IMPL(__imp__sub_83D2963C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29640"))) PPC_WEAK_FUNC(sub_83D29640);
PPC_FUNC_IMPL(__imp__sub_83D29640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29644"))) PPC_WEAK_FUNC(sub_83D29644);
PPC_FUNC_IMPL(__imp__sub_83D29644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29648"))) PPC_WEAK_FUNC(sub_83D29648);
PPC_FUNC_IMPL(__imp__sub_83D29648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2964C"))) PPC_WEAK_FUNC(sub_83D2964C);
PPC_FUNC_IMPL(__imp__sub_83D2964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29650"))) PPC_WEAK_FUNC(sub_83D29650);
PPC_FUNC_IMPL(__imp__sub_83D29650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29654"))) PPC_WEAK_FUNC(sub_83D29654);
PPC_FUNC_IMPL(__imp__sub_83D29654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29658"))) PPC_WEAK_FUNC(sub_83D29658);
PPC_FUNC_IMPL(__imp__sub_83D29658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2965C"))) PPC_WEAK_FUNC(sub_83D2965C);
PPC_FUNC_IMPL(__imp__sub_83D2965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29660"))) PPC_WEAK_FUNC(sub_83D29660);
PPC_FUNC_IMPL(__imp__sub_83D29660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29664"))) PPC_WEAK_FUNC(sub_83D29664);
PPC_FUNC_IMPL(__imp__sub_83D29664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29668"))) PPC_WEAK_FUNC(sub_83D29668);
PPC_FUNC_IMPL(__imp__sub_83D29668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2966C"))) PPC_WEAK_FUNC(sub_83D2966C);
PPC_FUNC_IMPL(__imp__sub_83D2966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29670"))) PPC_WEAK_FUNC(sub_83D29670);
PPC_FUNC_IMPL(__imp__sub_83D29670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29674"))) PPC_WEAK_FUNC(sub_83D29674);
PPC_FUNC_IMPL(__imp__sub_83D29674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29678"))) PPC_WEAK_FUNC(sub_83D29678);
PPC_FUNC_IMPL(__imp__sub_83D29678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2967C"))) PPC_WEAK_FUNC(sub_83D2967C);
PPC_FUNC_IMPL(__imp__sub_83D2967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29680"))) PPC_WEAK_FUNC(sub_83D29680);
PPC_FUNC_IMPL(__imp__sub_83D29680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29684"))) PPC_WEAK_FUNC(sub_83D29684);
PPC_FUNC_IMPL(__imp__sub_83D29684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29688"))) PPC_WEAK_FUNC(sub_83D29688);
PPC_FUNC_IMPL(__imp__sub_83D29688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2968C"))) PPC_WEAK_FUNC(sub_83D2968C);
PPC_FUNC_IMPL(__imp__sub_83D2968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29690"))) PPC_WEAK_FUNC(sub_83D29690);
PPC_FUNC_IMPL(__imp__sub_83D29690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29694"))) PPC_WEAK_FUNC(sub_83D29694);
PPC_FUNC_IMPL(__imp__sub_83D29694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29698"))) PPC_WEAK_FUNC(sub_83D29698);
PPC_FUNC_IMPL(__imp__sub_83D29698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2969C"))) PPC_WEAK_FUNC(sub_83D2969C);
PPC_FUNC_IMPL(__imp__sub_83D2969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296A0"))) PPC_WEAK_FUNC(sub_83D296A0);
PPC_FUNC_IMPL(__imp__sub_83D296A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296A4"))) PPC_WEAK_FUNC(sub_83D296A4);
PPC_FUNC_IMPL(__imp__sub_83D296A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296A8"))) PPC_WEAK_FUNC(sub_83D296A8);
PPC_FUNC_IMPL(__imp__sub_83D296A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296AC"))) PPC_WEAK_FUNC(sub_83D296AC);
PPC_FUNC_IMPL(__imp__sub_83D296AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296B0"))) PPC_WEAK_FUNC(sub_83D296B0);
PPC_FUNC_IMPL(__imp__sub_83D296B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296B4"))) PPC_WEAK_FUNC(sub_83D296B4);
PPC_FUNC_IMPL(__imp__sub_83D296B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296B8"))) PPC_WEAK_FUNC(sub_83D296B8);
PPC_FUNC_IMPL(__imp__sub_83D296B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296BC"))) PPC_WEAK_FUNC(sub_83D296BC);
PPC_FUNC_IMPL(__imp__sub_83D296BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296C0"))) PPC_WEAK_FUNC(sub_83D296C0);
PPC_FUNC_IMPL(__imp__sub_83D296C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296C4"))) PPC_WEAK_FUNC(sub_83D296C4);
PPC_FUNC_IMPL(__imp__sub_83D296C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296C8"))) PPC_WEAK_FUNC(sub_83D296C8);
PPC_FUNC_IMPL(__imp__sub_83D296C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296CC"))) PPC_WEAK_FUNC(sub_83D296CC);
PPC_FUNC_IMPL(__imp__sub_83D296CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296D0"))) PPC_WEAK_FUNC(sub_83D296D0);
PPC_FUNC_IMPL(__imp__sub_83D296D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296D4"))) PPC_WEAK_FUNC(sub_83D296D4);
PPC_FUNC_IMPL(__imp__sub_83D296D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296D8"))) PPC_WEAK_FUNC(sub_83D296D8);
PPC_FUNC_IMPL(__imp__sub_83D296D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296DC"))) PPC_WEAK_FUNC(sub_83D296DC);
PPC_FUNC_IMPL(__imp__sub_83D296DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296E0"))) PPC_WEAK_FUNC(sub_83D296E0);
PPC_FUNC_IMPL(__imp__sub_83D296E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296E4"))) PPC_WEAK_FUNC(sub_83D296E4);
PPC_FUNC_IMPL(__imp__sub_83D296E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296E8"))) PPC_WEAK_FUNC(sub_83D296E8);
PPC_FUNC_IMPL(__imp__sub_83D296E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296EC"))) PPC_WEAK_FUNC(sub_83D296EC);
PPC_FUNC_IMPL(__imp__sub_83D296EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296F0"))) PPC_WEAK_FUNC(sub_83D296F0);
PPC_FUNC_IMPL(__imp__sub_83D296F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D296F4"))) PPC_WEAK_FUNC(sub_83D296F4);
PPC_FUNC_IMPL(__imp__sub_83D296F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D296F8"))) PPC_WEAK_FUNC(sub_83D296F8);
PPC_FUNC_IMPL(__imp__sub_83D296F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-32196
	ctx.r3.s64 = ctx.r11.s64 + -32196;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D29704"))) PPC_WEAK_FUNC(sub_83D29704);
PPC_FUNC_IMPL(__imp__sub_83D29704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29708"))) PPC_WEAK_FUNC(sub_83D29708);
PPC_FUNC_IMPL(__imp__sub_83D29708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2970C"))) PPC_WEAK_FUNC(sub_83D2970C);
PPC_FUNC_IMPL(__imp__sub_83D2970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29710"))) PPC_WEAK_FUNC(sub_83D29710);
PPC_FUNC_IMPL(__imp__sub_83D29710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29714"))) PPC_WEAK_FUNC(sub_83D29714);
PPC_FUNC_IMPL(__imp__sub_83D29714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29718"))) PPC_WEAK_FUNC(sub_83D29718);
PPC_FUNC_IMPL(__imp__sub_83D29718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2971C"))) PPC_WEAK_FUNC(sub_83D2971C);
PPC_FUNC_IMPL(__imp__sub_83D2971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29720"))) PPC_WEAK_FUNC(sub_83D29720);
PPC_FUNC_IMPL(__imp__sub_83D29720) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-8384
	ctx.r31.s64 = ctx.r11.s64 + -8384;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d29758
	if (cr6.lt) goto loc_83D29758;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D29758;
	sub_825952B8(ctx, base);
loc_83D29758:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D29784"))) PPC_WEAK_FUNC(sub_83D29784);
PPC_FUNC_IMPL(__imp__sub_83D29784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29788"))) PPC_WEAK_FUNC(sub_83D29788);
PPC_FUNC_IMPL(__imp__sub_83D29788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2978C"))) PPC_WEAK_FUNC(sub_83D2978C);
PPC_FUNC_IMPL(__imp__sub_83D2978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29790"))) PPC_WEAK_FUNC(sub_83D29790);
PPC_FUNC_IMPL(__imp__sub_83D29790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29794"))) PPC_WEAK_FUNC(sub_83D29794);
PPC_FUNC_IMPL(__imp__sub_83D29794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29798"))) PPC_WEAK_FUNC(sub_83D29798);
PPC_FUNC_IMPL(__imp__sub_83D29798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2979C"))) PPC_WEAK_FUNC(sub_83D2979C);
PPC_FUNC_IMPL(__imp__sub_83D2979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297A0"))) PPC_WEAK_FUNC(sub_83D297A0);
PPC_FUNC_IMPL(__imp__sub_83D297A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297A4"))) PPC_WEAK_FUNC(sub_83D297A4);
PPC_FUNC_IMPL(__imp__sub_83D297A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297A8"))) PPC_WEAK_FUNC(sub_83D297A8);
PPC_FUNC_IMPL(__imp__sub_83D297A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297AC"))) PPC_WEAK_FUNC(sub_83D297AC);
PPC_FUNC_IMPL(__imp__sub_83D297AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297B0"))) PPC_WEAK_FUNC(sub_83D297B0);
PPC_FUNC_IMPL(__imp__sub_83D297B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297B4"))) PPC_WEAK_FUNC(sub_83D297B4);
PPC_FUNC_IMPL(__imp__sub_83D297B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297B8"))) PPC_WEAK_FUNC(sub_83D297B8);
PPC_FUNC_IMPL(__imp__sub_83D297B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297BC"))) PPC_WEAK_FUNC(sub_83D297BC);
PPC_FUNC_IMPL(__imp__sub_83D297BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297C0"))) PPC_WEAK_FUNC(sub_83D297C0);
PPC_FUNC_IMPL(__imp__sub_83D297C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297C4"))) PPC_WEAK_FUNC(sub_83D297C4);
PPC_FUNC_IMPL(__imp__sub_83D297C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297C8"))) PPC_WEAK_FUNC(sub_83D297C8);
PPC_FUNC_IMPL(__imp__sub_83D297C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297CC"))) PPC_WEAK_FUNC(sub_83D297CC);
PPC_FUNC_IMPL(__imp__sub_83D297CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297D0"))) PPC_WEAK_FUNC(sub_83D297D0);
PPC_FUNC_IMPL(__imp__sub_83D297D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297D4"))) PPC_WEAK_FUNC(sub_83D297D4);
PPC_FUNC_IMPL(__imp__sub_83D297D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297D8"))) PPC_WEAK_FUNC(sub_83D297D8);
PPC_FUNC_IMPL(__imp__sub_83D297D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297DC"))) PPC_WEAK_FUNC(sub_83D297DC);
PPC_FUNC_IMPL(__imp__sub_83D297DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297E0"))) PPC_WEAK_FUNC(sub_83D297E0);
PPC_FUNC_IMPL(__imp__sub_83D297E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297E4"))) PPC_WEAK_FUNC(sub_83D297E4);
PPC_FUNC_IMPL(__imp__sub_83D297E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297E8"))) PPC_WEAK_FUNC(sub_83D297E8);
PPC_FUNC_IMPL(__imp__sub_83D297E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D297F4"))) PPC_WEAK_FUNC(sub_83D297F4);
PPC_FUNC_IMPL(__imp__sub_83D297F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D297F8"))) PPC_WEAK_FUNC(sub_83D297F8);
PPC_FUNC_IMPL(__imp__sub_83D297F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D297FC"))) PPC_WEAK_FUNC(sub_83D297FC);
PPC_FUNC_IMPL(__imp__sub_83D297FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29800"))) PPC_WEAK_FUNC(sub_83D29800);
PPC_FUNC_IMPL(__imp__sub_83D29800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29804"))) PPC_WEAK_FUNC(sub_83D29804);
PPC_FUNC_IMPL(__imp__sub_83D29804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29808"))) PPC_WEAK_FUNC(sub_83D29808);
PPC_FUNC_IMPL(__imp__sub_83D29808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2980C"))) PPC_WEAK_FUNC(sub_83D2980C);
PPC_FUNC_IMPL(__imp__sub_83D2980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29810"))) PPC_WEAK_FUNC(sub_83D29810);
PPC_FUNC_IMPL(__imp__sub_83D29810) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-8228
	ctx.r31.s64 = ctx.r11.s64 + -8228;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d29848
	if (cr6.lt) goto loc_83D29848;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D29848;
	sub_825952B8(ctx, base);
loc_83D29848:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D29874"))) PPC_WEAK_FUNC(sub_83D29874);
PPC_FUNC_IMPL(__imp__sub_83D29874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29878"))) PPC_WEAK_FUNC(sub_83D29878);
PPC_FUNC_IMPL(__imp__sub_83D29878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2987C"))) PPC_WEAK_FUNC(sub_83D2987C);
PPC_FUNC_IMPL(__imp__sub_83D2987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29880"))) PPC_WEAK_FUNC(sub_83D29880);
PPC_FUNC_IMPL(__imp__sub_83D29880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29884"))) PPC_WEAK_FUNC(sub_83D29884);
PPC_FUNC_IMPL(__imp__sub_83D29884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29888"))) PPC_WEAK_FUNC(sub_83D29888);
PPC_FUNC_IMPL(__imp__sub_83D29888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2988C"))) PPC_WEAK_FUNC(sub_83D2988C);
PPC_FUNC_IMPL(__imp__sub_83D2988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29890"))) PPC_WEAK_FUNC(sub_83D29890);
PPC_FUNC_IMPL(__imp__sub_83D29890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29894"))) PPC_WEAK_FUNC(sub_83D29894);
PPC_FUNC_IMPL(__imp__sub_83D29894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29898"))) PPC_WEAK_FUNC(sub_83D29898);
PPC_FUNC_IMPL(__imp__sub_83D29898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2989C"))) PPC_WEAK_FUNC(sub_83D2989C);
PPC_FUNC_IMPL(__imp__sub_83D2989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298A0"))) PPC_WEAK_FUNC(sub_83D298A0);
PPC_FUNC_IMPL(__imp__sub_83D298A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298A4"))) PPC_WEAK_FUNC(sub_83D298A4);
PPC_FUNC_IMPL(__imp__sub_83D298A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298A8"))) PPC_WEAK_FUNC(sub_83D298A8);
PPC_FUNC_IMPL(__imp__sub_83D298A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298AC"))) PPC_WEAK_FUNC(sub_83D298AC);
PPC_FUNC_IMPL(__imp__sub_83D298AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298B0"))) PPC_WEAK_FUNC(sub_83D298B0);
PPC_FUNC_IMPL(__imp__sub_83D298B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298B4"))) PPC_WEAK_FUNC(sub_83D298B4);
PPC_FUNC_IMPL(__imp__sub_83D298B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298B8"))) PPC_WEAK_FUNC(sub_83D298B8);
PPC_FUNC_IMPL(__imp__sub_83D298B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298BC"))) PPC_WEAK_FUNC(sub_83D298BC);
PPC_FUNC_IMPL(__imp__sub_83D298BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298C0"))) PPC_WEAK_FUNC(sub_83D298C0);
PPC_FUNC_IMPL(__imp__sub_83D298C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298C4"))) PPC_WEAK_FUNC(sub_83D298C4);
PPC_FUNC_IMPL(__imp__sub_83D298C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298C8"))) PPC_WEAK_FUNC(sub_83D298C8);
PPC_FUNC_IMPL(__imp__sub_83D298C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298CC"))) PPC_WEAK_FUNC(sub_83D298CC);
PPC_FUNC_IMPL(__imp__sub_83D298CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298D0"))) PPC_WEAK_FUNC(sub_83D298D0);
PPC_FUNC_IMPL(__imp__sub_83D298D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298D4"))) PPC_WEAK_FUNC(sub_83D298D4);
PPC_FUNC_IMPL(__imp__sub_83D298D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298D8"))) PPC_WEAK_FUNC(sub_83D298D8);
PPC_FUNC_IMPL(__imp__sub_83D298D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-31452
	ctx.r3.s64 = ctx.r11.s64 + -31452;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D298E4"))) PPC_WEAK_FUNC(sub_83D298E4);
PPC_FUNC_IMPL(__imp__sub_83D298E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298E8"))) PPC_WEAK_FUNC(sub_83D298E8);
PPC_FUNC_IMPL(__imp__sub_83D298E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298EC"))) PPC_WEAK_FUNC(sub_83D298EC);
PPC_FUNC_IMPL(__imp__sub_83D298EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298F0"))) PPC_WEAK_FUNC(sub_83D298F0);
PPC_FUNC_IMPL(__imp__sub_83D298F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298F4"))) PPC_WEAK_FUNC(sub_83D298F4);
PPC_FUNC_IMPL(__imp__sub_83D298F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D298F8"))) PPC_WEAK_FUNC(sub_83D298F8);
PPC_FUNC_IMPL(__imp__sub_83D298F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D298FC"))) PPC_WEAK_FUNC(sub_83D298FC);
PPC_FUNC_IMPL(__imp__sub_83D298FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29900"))) PPC_WEAK_FUNC(sub_83D29900);
PPC_FUNC_IMPL(__imp__sub_83D29900) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-8060
	ctx.r31.s64 = ctx.r11.s64 + -8060;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d29938
	if (cr6.lt) goto loc_83D29938;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D29938;
	sub_825952B8(ctx, base);
loc_83D29938:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D29964"))) PPC_WEAK_FUNC(sub_83D29964);
PPC_FUNC_IMPL(__imp__sub_83D29964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29968"))) PPC_WEAK_FUNC(sub_83D29968);
PPC_FUNC_IMPL(__imp__sub_83D29968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2996C"))) PPC_WEAK_FUNC(sub_83D2996C);
PPC_FUNC_IMPL(__imp__sub_83D2996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29970"))) PPC_WEAK_FUNC(sub_83D29970);
PPC_FUNC_IMPL(__imp__sub_83D29970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29974"))) PPC_WEAK_FUNC(sub_83D29974);
PPC_FUNC_IMPL(__imp__sub_83D29974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29978"))) PPC_WEAK_FUNC(sub_83D29978);
PPC_FUNC_IMPL(__imp__sub_83D29978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2997C"))) PPC_WEAK_FUNC(sub_83D2997C);
PPC_FUNC_IMPL(__imp__sub_83D2997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29980"))) PPC_WEAK_FUNC(sub_83D29980);
PPC_FUNC_IMPL(__imp__sub_83D29980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29984"))) PPC_WEAK_FUNC(sub_83D29984);
PPC_FUNC_IMPL(__imp__sub_83D29984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29988"))) PPC_WEAK_FUNC(sub_83D29988);
PPC_FUNC_IMPL(__imp__sub_83D29988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2998C"))) PPC_WEAK_FUNC(sub_83D2998C);
PPC_FUNC_IMPL(__imp__sub_83D2998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29990"))) PPC_WEAK_FUNC(sub_83D29990);
PPC_FUNC_IMPL(__imp__sub_83D29990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29994"))) PPC_WEAK_FUNC(sub_83D29994);
PPC_FUNC_IMPL(__imp__sub_83D29994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29998"))) PPC_WEAK_FUNC(sub_83D29998);
PPC_FUNC_IMPL(__imp__sub_83D29998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2999C"))) PPC_WEAK_FUNC(sub_83D2999C);
PPC_FUNC_IMPL(__imp__sub_83D2999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299A0"))) PPC_WEAK_FUNC(sub_83D299A0);
PPC_FUNC_IMPL(__imp__sub_83D299A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299A4"))) PPC_WEAK_FUNC(sub_83D299A4);
PPC_FUNC_IMPL(__imp__sub_83D299A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299A8"))) PPC_WEAK_FUNC(sub_83D299A8);
PPC_FUNC_IMPL(__imp__sub_83D299A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299AC"))) PPC_WEAK_FUNC(sub_83D299AC);
PPC_FUNC_IMPL(__imp__sub_83D299AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299B0"))) PPC_WEAK_FUNC(sub_83D299B0);
PPC_FUNC_IMPL(__imp__sub_83D299B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299B4"))) PPC_WEAK_FUNC(sub_83D299B4);
PPC_FUNC_IMPL(__imp__sub_83D299B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299B8"))) PPC_WEAK_FUNC(sub_83D299B8);
PPC_FUNC_IMPL(__imp__sub_83D299B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299BC"))) PPC_WEAK_FUNC(sub_83D299BC);
PPC_FUNC_IMPL(__imp__sub_83D299BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299C0"))) PPC_WEAK_FUNC(sub_83D299C0);
PPC_FUNC_IMPL(__imp__sub_83D299C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299C4"))) PPC_WEAK_FUNC(sub_83D299C4);
PPC_FUNC_IMPL(__imp__sub_83D299C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299C8"))) PPC_WEAK_FUNC(sub_83D299C8);
PPC_FUNC_IMPL(__imp__sub_83D299C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-31080
	ctx.r3.s64 = ctx.r11.s64 + -31080;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D299D4"))) PPC_WEAK_FUNC(sub_83D299D4);
PPC_FUNC_IMPL(__imp__sub_83D299D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299D8"))) PPC_WEAK_FUNC(sub_83D299D8);
PPC_FUNC_IMPL(__imp__sub_83D299D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299DC"))) PPC_WEAK_FUNC(sub_83D299DC);
PPC_FUNC_IMPL(__imp__sub_83D299DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299E0"))) PPC_WEAK_FUNC(sub_83D299E0);
PPC_FUNC_IMPL(__imp__sub_83D299E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299E4"))) PPC_WEAK_FUNC(sub_83D299E4);
PPC_FUNC_IMPL(__imp__sub_83D299E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299E8"))) PPC_WEAK_FUNC(sub_83D299E8);
PPC_FUNC_IMPL(__imp__sub_83D299E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299EC"))) PPC_WEAK_FUNC(sub_83D299EC);
PPC_FUNC_IMPL(__imp__sub_83D299EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299F0"))) PPC_WEAK_FUNC(sub_83D299F0);
PPC_FUNC_IMPL(__imp__sub_83D299F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299F4"))) PPC_WEAK_FUNC(sub_83D299F4);
PPC_FUNC_IMPL(__imp__sub_83D299F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D299F8"))) PPC_WEAK_FUNC(sub_83D299F8);
PPC_FUNC_IMPL(__imp__sub_83D299F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D299FC"))) PPC_WEAK_FUNC(sub_83D299FC);
PPC_FUNC_IMPL(__imp__sub_83D299FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A00"))) PPC_WEAK_FUNC(sub_83D29A00);
PPC_FUNC_IMPL(__imp__sub_83D29A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A04"))) PPC_WEAK_FUNC(sub_83D29A04);
PPC_FUNC_IMPL(__imp__sub_83D29A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A08"))) PPC_WEAK_FUNC(sub_83D29A08);
PPC_FUNC_IMPL(__imp__sub_83D29A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A0C"))) PPC_WEAK_FUNC(sub_83D29A0C);
PPC_FUNC_IMPL(__imp__sub_83D29A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A10"))) PPC_WEAK_FUNC(sub_83D29A10);
PPC_FUNC_IMPL(__imp__sub_83D29A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A14"))) PPC_WEAK_FUNC(sub_83D29A14);
PPC_FUNC_IMPL(__imp__sub_83D29A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A18"))) PPC_WEAK_FUNC(sub_83D29A18);
PPC_FUNC_IMPL(__imp__sub_83D29A18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A1C"))) PPC_WEAK_FUNC(sub_83D29A1C);
PPC_FUNC_IMPL(__imp__sub_83D29A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A20"))) PPC_WEAK_FUNC(sub_83D29A20);
PPC_FUNC_IMPL(__imp__sub_83D29A20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A24"))) PPC_WEAK_FUNC(sub_83D29A24);
PPC_FUNC_IMPL(__imp__sub_83D29A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A28"))) PPC_WEAK_FUNC(sub_83D29A28);
PPC_FUNC_IMPL(__imp__sub_83D29A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A2C"))) PPC_WEAK_FUNC(sub_83D29A2C);
PPC_FUNC_IMPL(__imp__sub_83D29A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A30"))) PPC_WEAK_FUNC(sub_83D29A30);
PPC_FUNC_IMPL(__imp__sub_83D29A30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A34"))) PPC_WEAK_FUNC(sub_83D29A34);
PPC_FUNC_IMPL(__imp__sub_83D29A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A38"))) PPC_WEAK_FUNC(sub_83D29A38);
PPC_FUNC_IMPL(__imp__sub_83D29A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A3C"))) PPC_WEAK_FUNC(sub_83D29A3C);
PPC_FUNC_IMPL(__imp__sub_83D29A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A40"))) PPC_WEAK_FUNC(sub_83D29A40);
PPC_FUNC_IMPL(__imp__sub_83D29A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A44"))) PPC_WEAK_FUNC(sub_83D29A44);
PPC_FUNC_IMPL(__imp__sub_83D29A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A48"))) PPC_WEAK_FUNC(sub_83D29A48);
PPC_FUNC_IMPL(__imp__sub_83D29A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29A4C"))) PPC_WEAK_FUNC(sub_83D29A4C);
PPC_FUNC_IMPL(__imp__sub_83D29A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29A50"))) PPC_WEAK_FUNC(sub_83D29A50);
PPC_FUNC_IMPL(__imp__sub_83D29A50) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-7776
	ctx.r31.s64 = ctx.r11.s64 + -7776;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d29a88
	if (cr6.lt) goto loc_83D29A88;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D29A88;
	sub_825952B8(ctx, base);
loc_83D29A88:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D29AB4"))) PPC_WEAK_FUNC(sub_83D29AB4);
PPC_FUNC_IMPL(__imp__sub_83D29AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AB8"))) PPC_WEAK_FUNC(sub_83D29AB8);
PPC_FUNC_IMPL(__imp__sub_83D29AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29ABC"))) PPC_WEAK_FUNC(sub_83D29ABC);
PPC_FUNC_IMPL(__imp__sub_83D29ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AC0"))) PPC_WEAK_FUNC(sub_83D29AC0);
PPC_FUNC_IMPL(__imp__sub_83D29AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29AC4"))) PPC_WEAK_FUNC(sub_83D29AC4);
PPC_FUNC_IMPL(__imp__sub_83D29AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AC8"))) PPC_WEAK_FUNC(sub_83D29AC8);
PPC_FUNC_IMPL(__imp__sub_83D29AC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29ACC"))) PPC_WEAK_FUNC(sub_83D29ACC);
PPC_FUNC_IMPL(__imp__sub_83D29ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AD0"))) PPC_WEAK_FUNC(sub_83D29AD0);
PPC_FUNC_IMPL(__imp__sub_83D29AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29AD4"))) PPC_WEAK_FUNC(sub_83D29AD4);
PPC_FUNC_IMPL(__imp__sub_83D29AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AD8"))) PPC_WEAK_FUNC(sub_83D29AD8);
PPC_FUNC_IMPL(__imp__sub_83D29AD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29ADC"))) PPC_WEAK_FUNC(sub_83D29ADC);
PPC_FUNC_IMPL(__imp__sub_83D29ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AE0"))) PPC_WEAK_FUNC(sub_83D29AE0);
PPC_FUNC_IMPL(__imp__sub_83D29AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29AE4"))) PPC_WEAK_FUNC(sub_83D29AE4);
PPC_FUNC_IMPL(__imp__sub_83D29AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AE8"))) PPC_WEAK_FUNC(sub_83D29AE8);
PPC_FUNC_IMPL(__imp__sub_83D29AE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29AEC"))) PPC_WEAK_FUNC(sub_83D29AEC);
PPC_FUNC_IMPL(__imp__sub_83D29AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AF0"))) PPC_WEAK_FUNC(sub_83D29AF0);
PPC_FUNC_IMPL(__imp__sub_83D29AF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29AF4"))) PPC_WEAK_FUNC(sub_83D29AF4);
PPC_FUNC_IMPL(__imp__sub_83D29AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29AF8"))) PPC_WEAK_FUNC(sub_83D29AF8);
PPC_FUNC_IMPL(__imp__sub_83D29AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29AFC"))) PPC_WEAK_FUNC(sub_83D29AFC);
PPC_FUNC_IMPL(__imp__sub_83D29AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29B00"))) PPC_WEAK_FUNC(sub_83D29B00);
PPC_FUNC_IMPL(__imp__sub_83D29B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29B04"))) PPC_WEAK_FUNC(sub_83D29B04);
PPC_FUNC_IMPL(__imp__sub_83D29B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29B08"))) PPC_WEAK_FUNC(sub_83D29B08);
PPC_FUNC_IMPL(__imp__sub_83D29B08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29B0C"))) PPC_WEAK_FUNC(sub_83D29B0C);
PPC_FUNC_IMPL(__imp__sub_83D29B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29B10"))) PPC_WEAK_FUNC(sub_83D29B10);
PPC_FUNC_IMPL(__imp__sub_83D29B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29B14"))) PPC_WEAK_FUNC(sub_83D29B14);
PPC_FUNC_IMPL(__imp__sub_83D29B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29B18"))) PPC_WEAK_FUNC(sub_83D29B18);
PPC_FUNC_IMPL(__imp__sub_83D29B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-30704
	ctx.r3.s64 = ctx.r11.s64 + -30704;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D29B24"))) PPC_WEAK_FUNC(sub_83D29B24);
PPC_FUNC_IMPL(__imp__sub_83D29B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29B28"))) PPC_WEAK_FUNC(sub_83D29B28);
PPC_FUNC_IMPL(__imp__sub_83D29B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29B2C"))) PPC_WEAK_FUNC(sub_83D29B2C);
PPC_FUNC_IMPL(__imp__sub_83D29B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29B30"))) PPC_WEAK_FUNC(sub_83D29B30);
PPC_FUNC_IMPL(__imp__sub_83D29B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29B34"))) PPC_WEAK_FUNC(sub_83D29B34);
PPC_FUNC_IMPL(__imp__sub_83D29B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29B38"))) PPC_WEAK_FUNC(sub_83D29B38);
PPC_FUNC_IMPL(__imp__sub_83D29B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29B3C"))) PPC_WEAK_FUNC(sub_83D29B3C);
PPC_FUNC_IMPL(__imp__sub_83D29B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29B40"))) PPC_WEAK_FUNC(sub_83D29B40);
PPC_FUNC_IMPL(__imp__sub_83D29B40) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-7644
	ctx.r31.s64 = ctx.r11.s64 + -7644;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d29b78
	if (cr6.lt) goto loc_83D29B78;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D29B78;
	sub_825952B8(ctx, base);
loc_83D29B78:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D29BA4"))) PPC_WEAK_FUNC(sub_83D29BA4);
PPC_FUNC_IMPL(__imp__sub_83D29BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BA8"))) PPC_WEAK_FUNC(sub_83D29BA8);
PPC_FUNC_IMPL(__imp__sub_83D29BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BAC"))) PPC_WEAK_FUNC(sub_83D29BAC);
PPC_FUNC_IMPL(__imp__sub_83D29BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BB0"))) PPC_WEAK_FUNC(sub_83D29BB0);
PPC_FUNC_IMPL(__imp__sub_83D29BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BB4"))) PPC_WEAK_FUNC(sub_83D29BB4);
PPC_FUNC_IMPL(__imp__sub_83D29BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BB8"))) PPC_WEAK_FUNC(sub_83D29BB8);
PPC_FUNC_IMPL(__imp__sub_83D29BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BBC"))) PPC_WEAK_FUNC(sub_83D29BBC);
PPC_FUNC_IMPL(__imp__sub_83D29BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BC0"))) PPC_WEAK_FUNC(sub_83D29BC0);
PPC_FUNC_IMPL(__imp__sub_83D29BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BC4"))) PPC_WEAK_FUNC(sub_83D29BC4);
PPC_FUNC_IMPL(__imp__sub_83D29BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BC8"))) PPC_WEAK_FUNC(sub_83D29BC8);
PPC_FUNC_IMPL(__imp__sub_83D29BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BCC"))) PPC_WEAK_FUNC(sub_83D29BCC);
PPC_FUNC_IMPL(__imp__sub_83D29BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BD0"))) PPC_WEAK_FUNC(sub_83D29BD0);
PPC_FUNC_IMPL(__imp__sub_83D29BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BD4"))) PPC_WEAK_FUNC(sub_83D29BD4);
PPC_FUNC_IMPL(__imp__sub_83D29BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BD8"))) PPC_WEAK_FUNC(sub_83D29BD8);
PPC_FUNC_IMPL(__imp__sub_83D29BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BDC"))) PPC_WEAK_FUNC(sub_83D29BDC);
PPC_FUNC_IMPL(__imp__sub_83D29BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BE0"))) PPC_WEAK_FUNC(sub_83D29BE0);
PPC_FUNC_IMPL(__imp__sub_83D29BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BE4"))) PPC_WEAK_FUNC(sub_83D29BE4);
PPC_FUNC_IMPL(__imp__sub_83D29BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BE8"))) PPC_WEAK_FUNC(sub_83D29BE8);
PPC_FUNC_IMPL(__imp__sub_83D29BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D29BEC"))) PPC_WEAK_FUNC(sub_83D29BEC);
PPC_FUNC_IMPL(__imp__sub_83D29BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D29BF0"))) PPC_WEAK_FUNC(sub_83D29BF0);
PPC_FUNC_IMPL(__imp__sub_83D29BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

