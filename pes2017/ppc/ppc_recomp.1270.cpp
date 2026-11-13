#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D48500"))) PPC_WEAK_FUNC(sub_83D48500);
PPC_FUNC_IMPL(__imp__sub_83D48500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48504"))) PPC_WEAK_FUNC(sub_83D48504);
PPC_FUNC_IMPL(__imp__sub_83D48504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48508"))) PPC_WEAK_FUNC(sub_83D48508);
PPC_FUNC_IMPL(__imp__sub_83D48508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4850C"))) PPC_WEAK_FUNC(sub_83D4850C);
PPC_FUNC_IMPL(__imp__sub_83D4850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48510"))) PPC_WEAK_FUNC(sub_83D48510);
PPC_FUNC_IMPL(__imp__sub_83D48510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48514"))) PPC_WEAK_FUNC(sub_83D48514);
PPC_FUNC_IMPL(__imp__sub_83D48514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48518"))) PPC_WEAK_FUNC(sub_83D48518);
PPC_FUNC_IMPL(__imp__sub_83D48518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4851C"))) PPC_WEAK_FUNC(sub_83D4851C);
PPC_FUNC_IMPL(__imp__sub_83D4851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48520"))) PPC_WEAK_FUNC(sub_83D48520);
PPC_FUNC_IMPL(__imp__sub_83D48520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48524"))) PPC_WEAK_FUNC(sub_83D48524);
PPC_FUNC_IMPL(__imp__sub_83D48524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48528"))) PPC_WEAK_FUNC(sub_83D48528);
PPC_FUNC_IMPL(__imp__sub_83D48528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-10600
	ctx.r3.s64 = ctx.r11.s64 + -10600;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D48534"))) PPC_WEAK_FUNC(sub_83D48534);
PPC_FUNC_IMPL(__imp__sub_83D48534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48538"))) PPC_WEAK_FUNC(sub_83D48538);
PPC_FUNC_IMPL(__imp__sub_83D48538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4853C"))) PPC_WEAK_FUNC(sub_83D4853C);
PPC_FUNC_IMPL(__imp__sub_83D4853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48540"))) PPC_WEAK_FUNC(sub_83D48540);
PPC_FUNC_IMPL(__imp__sub_83D48540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48544"))) PPC_WEAK_FUNC(sub_83D48544);
PPC_FUNC_IMPL(__imp__sub_83D48544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48548"))) PPC_WEAK_FUNC(sub_83D48548);
PPC_FUNC_IMPL(__imp__sub_83D48548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4854C"))) PPC_WEAK_FUNC(sub_83D4854C);
PPC_FUNC_IMPL(__imp__sub_83D4854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48550"))) PPC_WEAK_FUNC(sub_83D48550);
PPC_FUNC_IMPL(__imp__sub_83D48550) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-16592
	ctx.r31.s64 = ctx.r11.s64 + -16592;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d48588
	if (cr6.lt) goto loc_83D48588;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D48588;
	sub_825952B8(ctx, base);
loc_83D48588:
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

__attribute__((alias("__imp__sub_83D485B4"))) PPC_WEAK_FUNC(sub_83D485B4);
PPC_FUNC_IMPL(__imp__sub_83D485B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485B8"))) PPC_WEAK_FUNC(sub_83D485B8);
PPC_FUNC_IMPL(__imp__sub_83D485B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485BC"))) PPC_WEAK_FUNC(sub_83D485BC);
PPC_FUNC_IMPL(__imp__sub_83D485BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485C0"))) PPC_WEAK_FUNC(sub_83D485C0);
PPC_FUNC_IMPL(__imp__sub_83D485C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485C4"))) PPC_WEAK_FUNC(sub_83D485C4);
PPC_FUNC_IMPL(__imp__sub_83D485C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485C8"))) PPC_WEAK_FUNC(sub_83D485C8);
PPC_FUNC_IMPL(__imp__sub_83D485C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485CC"))) PPC_WEAK_FUNC(sub_83D485CC);
PPC_FUNC_IMPL(__imp__sub_83D485CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485D0"))) PPC_WEAK_FUNC(sub_83D485D0);
PPC_FUNC_IMPL(__imp__sub_83D485D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485D4"))) PPC_WEAK_FUNC(sub_83D485D4);
PPC_FUNC_IMPL(__imp__sub_83D485D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485D8"))) PPC_WEAK_FUNC(sub_83D485D8);
PPC_FUNC_IMPL(__imp__sub_83D485D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485DC"))) PPC_WEAK_FUNC(sub_83D485DC);
PPC_FUNC_IMPL(__imp__sub_83D485DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485E0"))) PPC_WEAK_FUNC(sub_83D485E0);
PPC_FUNC_IMPL(__imp__sub_83D485E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485E4"))) PPC_WEAK_FUNC(sub_83D485E4);
PPC_FUNC_IMPL(__imp__sub_83D485E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485E8"))) PPC_WEAK_FUNC(sub_83D485E8);
PPC_FUNC_IMPL(__imp__sub_83D485E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485EC"))) PPC_WEAK_FUNC(sub_83D485EC);
PPC_FUNC_IMPL(__imp__sub_83D485EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485F0"))) PPC_WEAK_FUNC(sub_83D485F0);
PPC_FUNC_IMPL(__imp__sub_83D485F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485F4"))) PPC_WEAK_FUNC(sub_83D485F4);
PPC_FUNC_IMPL(__imp__sub_83D485F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D485F8"))) PPC_WEAK_FUNC(sub_83D485F8);
PPC_FUNC_IMPL(__imp__sub_83D485F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D485FC"))) PPC_WEAK_FUNC(sub_83D485FC);
PPC_FUNC_IMPL(__imp__sub_83D485FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48600"))) PPC_WEAK_FUNC(sub_83D48600);
PPC_FUNC_IMPL(__imp__sub_83D48600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48604"))) PPC_WEAK_FUNC(sub_83D48604);
PPC_FUNC_IMPL(__imp__sub_83D48604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48608"))) PPC_WEAK_FUNC(sub_83D48608);
PPC_FUNC_IMPL(__imp__sub_83D48608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4860C"))) PPC_WEAK_FUNC(sub_83D4860C);
PPC_FUNC_IMPL(__imp__sub_83D4860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48610"))) PPC_WEAK_FUNC(sub_83D48610);
PPC_FUNC_IMPL(__imp__sub_83D48610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48614"))) PPC_WEAK_FUNC(sub_83D48614);
PPC_FUNC_IMPL(__imp__sub_83D48614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48618"))) PPC_WEAK_FUNC(sub_83D48618);
PPC_FUNC_IMPL(__imp__sub_83D48618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D48624"))) PPC_WEAK_FUNC(sub_83D48624);
PPC_FUNC_IMPL(__imp__sub_83D48624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48628"))) PPC_WEAK_FUNC(sub_83D48628);
PPC_FUNC_IMPL(__imp__sub_83D48628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4862C"))) PPC_WEAK_FUNC(sub_83D4862C);
PPC_FUNC_IMPL(__imp__sub_83D4862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48630"))) PPC_WEAK_FUNC(sub_83D48630);
PPC_FUNC_IMPL(__imp__sub_83D48630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48634"))) PPC_WEAK_FUNC(sub_83D48634);
PPC_FUNC_IMPL(__imp__sub_83D48634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48638"))) PPC_WEAK_FUNC(sub_83D48638);
PPC_FUNC_IMPL(__imp__sub_83D48638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4863C"))) PPC_WEAK_FUNC(sub_83D4863C);
PPC_FUNC_IMPL(__imp__sub_83D4863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48640"))) PPC_WEAK_FUNC(sub_83D48640);
PPC_FUNC_IMPL(__imp__sub_83D48640) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-16436
	ctx.r31.s64 = ctx.r11.s64 + -16436;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d48678
	if (cr6.lt) goto loc_83D48678;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D48678;
	sub_825952B8(ctx, base);
loc_83D48678:
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

__attribute__((alias("__imp__sub_83D486A4"))) PPC_WEAK_FUNC(sub_83D486A4);
PPC_FUNC_IMPL(__imp__sub_83D486A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486A8"))) PPC_WEAK_FUNC(sub_83D486A8);
PPC_FUNC_IMPL(__imp__sub_83D486A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486AC"))) PPC_WEAK_FUNC(sub_83D486AC);
PPC_FUNC_IMPL(__imp__sub_83D486AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486B0"))) PPC_WEAK_FUNC(sub_83D486B0);
PPC_FUNC_IMPL(__imp__sub_83D486B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486B4"))) PPC_WEAK_FUNC(sub_83D486B4);
PPC_FUNC_IMPL(__imp__sub_83D486B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486B8"))) PPC_WEAK_FUNC(sub_83D486B8);
PPC_FUNC_IMPL(__imp__sub_83D486B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486BC"))) PPC_WEAK_FUNC(sub_83D486BC);
PPC_FUNC_IMPL(__imp__sub_83D486BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486C0"))) PPC_WEAK_FUNC(sub_83D486C0);
PPC_FUNC_IMPL(__imp__sub_83D486C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486C4"))) PPC_WEAK_FUNC(sub_83D486C4);
PPC_FUNC_IMPL(__imp__sub_83D486C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486C8"))) PPC_WEAK_FUNC(sub_83D486C8);
PPC_FUNC_IMPL(__imp__sub_83D486C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486CC"))) PPC_WEAK_FUNC(sub_83D486CC);
PPC_FUNC_IMPL(__imp__sub_83D486CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486D0"))) PPC_WEAK_FUNC(sub_83D486D0);
PPC_FUNC_IMPL(__imp__sub_83D486D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486D4"))) PPC_WEAK_FUNC(sub_83D486D4);
PPC_FUNC_IMPL(__imp__sub_83D486D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486D8"))) PPC_WEAK_FUNC(sub_83D486D8);
PPC_FUNC_IMPL(__imp__sub_83D486D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486DC"))) PPC_WEAK_FUNC(sub_83D486DC);
PPC_FUNC_IMPL(__imp__sub_83D486DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486E0"))) PPC_WEAK_FUNC(sub_83D486E0);
PPC_FUNC_IMPL(__imp__sub_83D486E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486E4"))) PPC_WEAK_FUNC(sub_83D486E4);
PPC_FUNC_IMPL(__imp__sub_83D486E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486E8"))) PPC_WEAK_FUNC(sub_83D486E8);
PPC_FUNC_IMPL(__imp__sub_83D486E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486EC"))) PPC_WEAK_FUNC(sub_83D486EC);
PPC_FUNC_IMPL(__imp__sub_83D486EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486F0"))) PPC_WEAK_FUNC(sub_83D486F0);
PPC_FUNC_IMPL(__imp__sub_83D486F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486F4"))) PPC_WEAK_FUNC(sub_83D486F4);
PPC_FUNC_IMPL(__imp__sub_83D486F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D486F8"))) PPC_WEAK_FUNC(sub_83D486F8);
PPC_FUNC_IMPL(__imp__sub_83D486F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D486FC"))) PPC_WEAK_FUNC(sub_83D486FC);
PPC_FUNC_IMPL(__imp__sub_83D486FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48700"))) PPC_WEAK_FUNC(sub_83D48700);
PPC_FUNC_IMPL(__imp__sub_83D48700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48704"))) PPC_WEAK_FUNC(sub_83D48704);
PPC_FUNC_IMPL(__imp__sub_83D48704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48708"))) PPC_WEAK_FUNC(sub_83D48708);
PPC_FUNC_IMPL(__imp__sub_83D48708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-9864
	ctx.r3.s64 = ctx.r11.s64 + -9864;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D48714"))) PPC_WEAK_FUNC(sub_83D48714);
PPC_FUNC_IMPL(__imp__sub_83D48714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48718"))) PPC_WEAK_FUNC(sub_83D48718);
PPC_FUNC_IMPL(__imp__sub_83D48718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4871C"))) PPC_WEAK_FUNC(sub_83D4871C);
PPC_FUNC_IMPL(__imp__sub_83D4871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48720"))) PPC_WEAK_FUNC(sub_83D48720);
PPC_FUNC_IMPL(__imp__sub_83D48720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48724"))) PPC_WEAK_FUNC(sub_83D48724);
PPC_FUNC_IMPL(__imp__sub_83D48724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48728"))) PPC_WEAK_FUNC(sub_83D48728);
PPC_FUNC_IMPL(__imp__sub_83D48728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4872C"))) PPC_WEAK_FUNC(sub_83D4872C);
PPC_FUNC_IMPL(__imp__sub_83D4872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48730"))) PPC_WEAK_FUNC(sub_83D48730);
PPC_FUNC_IMPL(__imp__sub_83D48730) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-16244
	ctx.r31.s64 = ctx.r11.s64 + -16244;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d48768
	if (cr6.lt) goto loc_83D48768;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D48768;
	sub_825952B8(ctx, base);
loc_83D48768:
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

__attribute__((alias("__imp__sub_83D48794"))) PPC_WEAK_FUNC(sub_83D48794);
PPC_FUNC_IMPL(__imp__sub_83D48794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48798"))) PPC_WEAK_FUNC(sub_83D48798);
PPC_FUNC_IMPL(__imp__sub_83D48798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4879C"))) PPC_WEAK_FUNC(sub_83D4879C);
PPC_FUNC_IMPL(__imp__sub_83D4879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487A0"))) PPC_WEAK_FUNC(sub_83D487A0);
PPC_FUNC_IMPL(__imp__sub_83D487A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487A4"))) PPC_WEAK_FUNC(sub_83D487A4);
PPC_FUNC_IMPL(__imp__sub_83D487A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487A8"))) PPC_WEAK_FUNC(sub_83D487A8);
PPC_FUNC_IMPL(__imp__sub_83D487A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487AC"))) PPC_WEAK_FUNC(sub_83D487AC);
PPC_FUNC_IMPL(__imp__sub_83D487AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487B0"))) PPC_WEAK_FUNC(sub_83D487B0);
PPC_FUNC_IMPL(__imp__sub_83D487B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487B4"))) PPC_WEAK_FUNC(sub_83D487B4);
PPC_FUNC_IMPL(__imp__sub_83D487B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487B8"))) PPC_WEAK_FUNC(sub_83D487B8);
PPC_FUNC_IMPL(__imp__sub_83D487B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487BC"))) PPC_WEAK_FUNC(sub_83D487BC);
PPC_FUNC_IMPL(__imp__sub_83D487BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487C0"))) PPC_WEAK_FUNC(sub_83D487C0);
PPC_FUNC_IMPL(__imp__sub_83D487C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487C4"))) PPC_WEAK_FUNC(sub_83D487C4);
PPC_FUNC_IMPL(__imp__sub_83D487C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487C8"))) PPC_WEAK_FUNC(sub_83D487C8);
PPC_FUNC_IMPL(__imp__sub_83D487C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487CC"))) PPC_WEAK_FUNC(sub_83D487CC);
PPC_FUNC_IMPL(__imp__sub_83D487CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487D0"))) PPC_WEAK_FUNC(sub_83D487D0);
PPC_FUNC_IMPL(__imp__sub_83D487D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487D4"))) PPC_WEAK_FUNC(sub_83D487D4);
PPC_FUNC_IMPL(__imp__sub_83D487D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487D8"))) PPC_WEAK_FUNC(sub_83D487D8);
PPC_FUNC_IMPL(__imp__sub_83D487D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487DC"))) PPC_WEAK_FUNC(sub_83D487DC);
PPC_FUNC_IMPL(__imp__sub_83D487DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487E0"))) PPC_WEAK_FUNC(sub_83D487E0);
PPC_FUNC_IMPL(__imp__sub_83D487E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487E4"))) PPC_WEAK_FUNC(sub_83D487E4);
PPC_FUNC_IMPL(__imp__sub_83D487E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487E8"))) PPC_WEAK_FUNC(sub_83D487E8);
PPC_FUNC_IMPL(__imp__sub_83D487E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487EC"))) PPC_WEAK_FUNC(sub_83D487EC);
PPC_FUNC_IMPL(__imp__sub_83D487EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487F0"))) PPC_WEAK_FUNC(sub_83D487F0);
PPC_FUNC_IMPL(__imp__sub_83D487F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D487F4"))) PPC_WEAK_FUNC(sub_83D487F4);
PPC_FUNC_IMPL(__imp__sub_83D487F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D487F8"))) PPC_WEAK_FUNC(sub_83D487F8);
PPC_FUNC_IMPL(__imp__sub_83D487F8) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-16112
	ctx.r31.s64 = ctx.r11.s64 + -16112;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d48830
	if (cr6.lt) goto loc_83D48830;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D48830;
	sub_825952B8(ctx, base);
loc_83D48830:
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

__attribute__((alias("__imp__sub_83D4885C"))) PPC_WEAK_FUNC(sub_83D4885C);
PPC_FUNC_IMPL(__imp__sub_83D4885C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48860"))) PPC_WEAK_FUNC(sub_83D48860);
PPC_FUNC_IMPL(__imp__sub_83D48860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48864"))) PPC_WEAK_FUNC(sub_83D48864);
PPC_FUNC_IMPL(__imp__sub_83D48864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48868"))) PPC_WEAK_FUNC(sub_83D48868);
PPC_FUNC_IMPL(__imp__sub_83D48868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4886C"))) PPC_WEAK_FUNC(sub_83D4886C);
PPC_FUNC_IMPL(__imp__sub_83D4886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48870"))) PPC_WEAK_FUNC(sub_83D48870);
PPC_FUNC_IMPL(__imp__sub_83D48870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48874"))) PPC_WEAK_FUNC(sub_83D48874);
PPC_FUNC_IMPL(__imp__sub_83D48874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48878"))) PPC_WEAK_FUNC(sub_83D48878);
PPC_FUNC_IMPL(__imp__sub_83D48878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4887C"))) PPC_WEAK_FUNC(sub_83D4887C);
PPC_FUNC_IMPL(__imp__sub_83D4887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48880"))) PPC_WEAK_FUNC(sub_83D48880);
PPC_FUNC_IMPL(__imp__sub_83D48880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48884"))) PPC_WEAK_FUNC(sub_83D48884);
PPC_FUNC_IMPL(__imp__sub_83D48884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48888"))) PPC_WEAK_FUNC(sub_83D48888);
PPC_FUNC_IMPL(__imp__sub_83D48888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4888C"))) PPC_WEAK_FUNC(sub_83D4888C);
PPC_FUNC_IMPL(__imp__sub_83D4888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48890"))) PPC_WEAK_FUNC(sub_83D48890);
PPC_FUNC_IMPL(__imp__sub_83D48890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48894"))) PPC_WEAK_FUNC(sub_83D48894);
PPC_FUNC_IMPL(__imp__sub_83D48894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48898"))) PPC_WEAK_FUNC(sub_83D48898);
PPC_FUNC_IMPL(__imp__sub_83D48898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4889C"))) PPC_WEAK_FUNC(sub_83D4889C);
PPC_FUNC_IMPL(__imp__sub_83D4889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D488A0"))) PPC_WEAK_FUNC(sub_83D488A0);
PPC_FUNC_IMPL(__imp__sub_83D488A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D488A4"))) PPC_WEAK_FUNC(sub_83D488A4);
PPC_FUNC_IMPL(__imp__sub_83D488A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D488A8"))) PPC_WEAK_FUNC(sub_83D488A8);
PPC_FUNC_IMPL(__imp__sub_83D488A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D488AC"))) PPC_WEAK_FUNC(sub_83D488AC);
PPC_FUNC_IMPL(__imp__sub_83D488AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D488B0"))) PPC_WEAK_FUNC(sub_83D488B0);
PPC_FUNC_IMPL(__imp__sub_83D488B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D488B4"))) PPC_WEAK_FUNC(sub_83D488B4);
PPC_FUNC_IMPL(__imp__sub_83D488B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D488B8"))) PPC_WEAK_FUNC(sub_83D488B8);
PPC_FUNC_IMPL(__imp__sub_83D488B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D488BC"))) PPC_WEAK_FUNC(sub_83D488BC);
PPC_FUNC_IMPL(__imp__sub_83D488BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D488C0"))) PPC_WEAK_FUNC(sub_83D488C0);
PPC_FUNC_IMPL(__imp__sub_83D488C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-9492
	ctx.r3.s64 = ctx.r11.s64 + -9492;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D488CC"))) PPC_WEAK_FUNC(sub_83D488CC);
PPC_FUNC_IMPL(__imp__sub_83D488CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D488D0"))) PPC_WEAK_FUNC(sub_83D488D0);
PPC_FUNC_IMPL(__imp__sub_83D488D0) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-15980
	ctx.r31.s64 = ctx.r11.s64 + -15980;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d48908
	if (cr6.lt) goto loc_83D48908;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D48908;
	sub_825952B8(ctx, base);
loc_83D48908:
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

__attribute__((alias("__imp__sub_83D48934"))) PPC_WEAK_FUNC(sub_83D48934);
PPC_FUNC_IMPL(__imp__sub_83D48934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48938"))) PPC_WEAK_FUNC(sub_83D48938);
PPC_FUNC_IMPL(__imp__sub_83D48938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4893C"))) PPC_WEAK_FUNC(sub_83D4893C);
PPC_FUNC_IMPL(__imp__sub_83D4893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48940"))) PPC_WEAK_FUNC(sub_83D48940);
PPC_FUNC_IMPL(__imp__sub_83D48940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48944"))) PPC_WEAK_FUNC(sub_83D48944);
PPC_FUNC_IMPL(__imp__sub_83D48944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48948"))) PPC_WEAK_FUNC(sub_83D48948);
PPC_FUNC_IMPL(__imp__sub_83D48948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4894C"))) PPC_WEAK_FUNC(sub_83D4894C);
PPC_FUNC_IMPL(__imp__sub_83D4894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48950"))) PPC_WEAK_FUNC(sub_83D48950);
PPC_FUNC_IMPL(__imp__sub_83D48950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48954"))) PPC_WEAK_FUNC(sub_83D48954);
PPC_FUNC_IMPL(__imp__sub_83D48954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48958"))) PPC_WEAK_FUNC(sub_83D48958);
PPC_FUNC_IMPL(__imp__sub_83D48958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4895C"))) PPC_WEAK_FUNC(sub_83D4895C);
PPC_FUNC_IMPL(__imp__sub_83D4895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48960"))) PPC_WEAK_FUNC(sub_83D48960);
PPC_FUNC_IMPL(__imp__sub_83D48960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48964"))) PPC_WEAK_FUNC(sub_83D48964);
PPC_FUNC_IMPL(__imp__sub_83D48964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48968"))) PPC_WEAK_FUNC(sub_83D48968);
PPC_FUNC_IMPL(__imp__sub_83D48968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4896C"))) PPC_WEAK_FUNC(sub_83D4896C);
PPC_FUNC_IMPL(__imp__sub_83D4896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48970"))) PPC_WEAK_FUNC(sub_83D48970);
PPC_FUNC_IMPL(__imp__sub_83D48970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48974"))) PPC_WEAK_FUNC(sub_83D48974);
PPC_FUNC_IMPL(__imp__sub_83D48974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48978"))) PPC_WEAK_FUNC(sub_83D48978);
PPC_FUNC_IMPL(__imp__sub_83D48978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4897C"))) PPC_WEAK_FUNC(sub_83D4897C);
PPC_FUNC_IMPL(__imp__sub_83D4897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48980"))) PPC_WEAK_FUNC(sub_83D48980);
PPC_FUNC_IMPL(__imp__sub_83D48980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48984"))) PPC_WEAK_FUNC(sub_83D48984);
PPC_FUNC_IMPL(__imp__sub_83D48984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48988"))) PPC_WEAK_FUNC(sub_83D48988);
PPC_FUNC_IMPL(__imp__sub_83D48988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D4898C"))) PPC_WEAK_FUNC(sub_83D4898C);
PPC_FUNC_IMPL(__imp__sub_83D4898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48990"))) PPC_WEAK_FUNC(sub_83D48990);
PPC_FUNC_IMPL(__imp__sub_83D48990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48994"))) PPC_WEAK_FUNC(sub_83D48994);
PPC_FUNC_IMPL(__imp__sub_83D48994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48998"))) PPC_WEAK_FUNC(sub_83D48998);
PPC_FUNC_IMPL(__imp__sub_83D48998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D489A4"))) PPC_WEAK_FUNC(sub_83D489A4);
PPC_FUNC_IMPL(__imp__sub_83D489A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D489A8"))) PPC_WEAK_FUNC(sub_83D489A8);
PPC_FUNC_IMPL(__imp__sub_83D489A8) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-15828
	ctx.r31.s64 = ctx.r11.s64 + -15828;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d489e0
	if (cr6.lt) goto loc_83D489E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D489E0;
	sub_825952B8(ctx, base);
loc_83D489E0:
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

__attribute__((alias("__imp__sub_83D48A0C"))) PPC_WEAK_FUNC(sub_83D48A0C);
PPC_FUNC_IMPL(__imp__sub_83D48A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A10"))) PPC_WEAK_FUNC(sub_83D48A10);
PPC_FUNC_IMPL(__imp__sub_83D48A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A14"))) PPC_WEAK_FUNC(sub_83D48A14);
PPC_FUNC_IMPL(__imp__sub_83D48A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A18"))) PPC_WEAK_FUNC(sub_83D48A18);
PPC_FUNC_IMPL(__imp__sub_83D48A18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A1C"))) PPC_WEAK_FUNC(sub_83D48A1C);
PPC_FUNC_IMPL(__imp__sub_83D48A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A20"))) PPC_WEAK_FUNC(sub_83D48A20);
PPC_FUNC_IMPL(__imp__sub_83D48A20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A24"))) PPC_WEAK_FUNC(sub_83D48A24);
PPC_FUNC_IMPL(__imp__sub_83D48A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A28"))) PPC_WEAK_FUNC(sub_83D48A28);
PPC_FUNC_IMPL(__imp__sub_83D48A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A2C"))) PPC_WEAK_FUNC(sub_83D48A2C);
PPC_FUNC_IMPL(__imp__sub_83D48A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A30"))) PPC_WEAK_FUNC(sub_83D48A30);
PPC_FUNC_IMPL(__imp__sub_83D48A30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A34"))) PPC_WEAK_FUNC(sub_83D48A34);
PPC_FUNC_IMPL(__imp__sub_83D48A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A38"))) PPC_WEAK_FUNC(sub_83D48A38);
PPC_FUNC_IMPL(__imp__sub_83D48A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A3C"))) PPC_WEAK_FUNC(sub_83D48A3C);
PPC_FUNC_IMPL(__imp__sub_83D48A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A40"))) PPC_WEAK_FUNC(sub_83D48A40);
PPC_FUNC_IMPL(__imp__sub_83D48A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A44"))) PPC_WEAK_FUNC(sub_83D48A44);
PPC_FUNC_IMPL(__imp__sub_83D48A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A48"))) PPC_WEAK_FUNC(sub_83D48A48);
PPC_FUNC_IMPL(__imp__sub_83D48A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A4C"))) PPC_WEAK_FUNC(sub_83D48A4C);
PPC_FUNC_IMPL(__imp__sub_83D48A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A50"))) PPC_WEAK_FUNC(sub_83D48A50);
PPC_FUNC_IMPL(__imp__sub_83D48A50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A54"))) PPC_WEAK_FUNC(sub_83D48A54);
PPC_FUNC_IMPL(__imp__sub_83D48A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A58"))) PPC_WEAK_FUNC(sub_83D48A58);
PPC_FUNC_IMPL(__imp__sub_83D48A58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A5C"))) PPC_WEAK_FUNC(sub_83D48A5C);
PPC_FUNC_IMPL(__imp__sub_83D48A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A60"))) PPC_WEAK_FUNC(sub_83D48A60);
PPC_FUNC_IMPL(__imp__sub_83D48A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A64"))) PPC_WEAK_FUNC(sub_83D48A64);
PPC_FUNC_IMPL(__imp__sub_83D48A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A68"))) PPC_WEAK_FUNC(sub_83D48A68);
PPC_FUNC_IMPL(__imp__sub_83D48A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A6C"))) PPC_WEAK_FUNC(sub_83D48A6C);
PPC_FUNC_IMPL(__imp__sub_83D48A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A70"))) PPC_WEAK_FUNC(sub_83D48A70);
PPC_FUNC_IMPL(__imp__sub_83D48A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-9464
	ctx.r3.s64 = ctx.r11.s64 + -9464;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D48A7C"))) PPC_WEAK_FUNC(sub_83D48A7C);
PPC_FUNC_IMPL(__imp__sub_83D48A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A80"))) PPC_WEAK_FUNC(sub_83D48A80);
PPC_FUNC_IMPL(__imp__sub_83D48A80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A84"))) PPC_WEAK_FUNC(sub_83D48A84);
PPC_FUNC_IMPL(__imp__sub_83D48A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A88"))) PPC_WEAK_FUNC(sub_83D48A88);
PPC_FUNC_IMPL(__imp__sub_83D48A88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A8C"))) PPC_WEAK_FUNC(sub_83D48A8C);
PPC_FUNC_IMPL(__imp__sub_83D48A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A90"))) PPC_WEAK_FUNC(sub_83D48A90);
PPC_FUNC_IMPL(__imp__sub_83D48A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48A94"))) PPC_WEAK_FUNC(sub_83D48A94);
PPC_FUNC_IMPL(__imp__sub_83D48A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48A98"))) PPC_WEAK_FUNC(sub_83D48A98);
PPC_FUNC_IMPL(__imp__sub_83D48A98) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-15652
	ctx.r31.s64 = ctx.r11.s64 + -15652;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d48ad0
	if (cr6.lt) goto loc_83D48AD0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D48AD0;
	sub_825952B8(ctx, base);
loc_83D48AD0:
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

__attribute__((alias("__imp__sub_83D48AFC"))) PPC_WEAK_FUNC(sub_83D48AFC);
PPC_FUNC_IMPL(__imp__sub_83D48AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B00"))) PPC_WEAK_FUNC(sub_83D48B00);
PPC_FUNC_IMPL(__imp__sub_83D48B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B04"))) PPC_WEAK_FUNC(sub_83D48B04);
PPC_FUNC_IMPL(__imp__sub_83D48B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B08"))) PPC_WEAK_FUNC(sub_83D48B08);
PPC_FUNC_IMPL(__imp__sub_83D48B08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B0C"))) PPC_WEAK_FUNC(sub_83D48B0C);
PPC_FUNC_IMPL(__imp__sub_83D48B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B10"))) PPC_WEAK_FUNC(sub_83D48B10);
PPC_FUNC_IMPL(__imp__sub_83D48B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B14"))) PPC_WEAK_FUNC(sub_83D48B14);
PPC_FUNC_IMPL(__imp__sub_83D48B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B18"))) PPC_WEAK_FUNC(sub_83D48B18);
PPC_FUNC_IMPL(__imp__sub_83D48B18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B1C"))) PPC_WEAK_FUNC(sub_83D48B1C);
PPC_FUNC_IMPL(__imp__sub_83D48B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B20"))) PPC_WEAK_FUNC(sub_83D48B20);
PPC_FUNC_IMPL(__imp__sub_83D48B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B24"))) PPC_WEAK_FUNC(sub_83D48B24);
PPC_FUNC_IMPL(__imp__sub_83D48B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B28"))) PPC_WEAK_FUNC(sub_83D48B28);
PPC_FUNC_IMPL(__imp__sub_83D48B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B2C"))) PPC_WEAK_FUNC(sub_83D48B2C);
PPC_FUNC_IMPL(__imp__sub_83D48B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B30"))) PPC_WEAK_FUNC(sub_83D48B30);
PPC_FUNC_IMPL(__imp__sub_83D48B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B34"))) PPC_WEAK_FUNC(sub_83D48B34);
PPC_FUNC_IMPL(__imp__sub_83D48B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B38"))) PPC_WEAK_FUNC(sub_83D48B38);
PPC_FUNC_IMPL(__imp__sub_83D48B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B3C"))) PPC_WEAK_FUNC(sub_83D48B3C);
PPC_FUNC_IMPL(__imp__sub_83D48B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B40"))) PPC_WEAK_FUNC(sub_83D48B40);
PPC_FUNC_IMPL(__imp__sub_83D48B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B44"))) PPC_WEAK_FUNC(sub_83D48B44);
PPC_FUNC_IMPL(__imp__sub_83D48B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B48"))) PPC_WEAK_FUNC(sub_83D48B48);
PPC_FUNC_IMPL(__imp__sub_83D48B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B4C"))) PPC_WEAK_FUNC(sub_83D48B4C);
PPC_FUNC_IMPL(__imp__sub_83D48B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B50"))) PPC_WEAK_FUNC(sub_83D48B50);
PPC_FUNC_IMPL(__imp__sub_83D48B50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B54"))) PPC_WEAK_FUNC(sub_83D48B54);
PPC_FUNC_IMPL(__imp__sub_83D48B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B58"))) PPC_WEAK_FUNC(sub_83D48B58);
PPC_FUNC_IMPL(__imp__sub_83D48B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48B5C"))) PPC_WEAK_FUNC(sub_83D48B5C);
PPC_FUNC_IMPL(__imp__sub_83D48B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48B60"))) PPC_WEAK_FUNC(sub_83D48B60);
PPC_FUNC_IMPL(__imp__sub_83D48B60) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-15520
	ctx.r31.s64 = ctx.r11.s64 + -15520;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d48b98
	if (cr6.lt) goto loc_83D48B98;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D48B98;
	sub_825952B8(ctx, base);
loc_83D48B98:
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

__attribute__((alias("__imp__sub_83D48BC4"))) PPC_WEAK_FUNC(sub_83D48BC4);
PPC_FUNC_IMPL(__imp__sub_83D48BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48BC8"))) PPC_WEAK_FUNC(sub_83D48BC8);
PPC_FUNC_IMPL(__imp__sub_83D48BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48BCC"))) PPC_WEAK_FUNC(sub_83D48BCC);
PPC_FUNC_IMPL(__imp__sub_83D48BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48BD0"))) PPC_WEAK_FUNC(sub_83D48BD0);
PPC_FUNC_IMPL(__imp__sub_83D48BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48BD4"))) PPC_WEAK_FUNC(sub_83D48BD4);
PPC_FUNC_IMPL(__imp__sub_83D48BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48BD8"))) PPC_WEAK_FUNC(sub_83D48BD8);
PPC_FUNC_IMPL(__imp__sub_83D48BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48BDC"))) PPC_WEAK_FUNC(sub_83D48BDC);
PPC_FUNC_IMPL(__imp__sub_83D48BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48BE0"))) PPC_WEAK_FUNC(sub_83D48BE0);
PPC_FUNC_IMPL(__imp__sub_83D48BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48BE4"))) PPC_WEAK_FUNC(sub_83D48BE4);
PPC_FUNC_IMPL(__imp__sub_83D48BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48BE8"))) PPC_WEAK_FUNC(sub_83D48BE8);
PPC_FUNC_IMPL(__imp__sub_83D48BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48BEC"))) PPC_WEAK_FUNC(sub_83D48BEC);
PPC_FUNC_IMPL(__imp__sub_83D48BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48BF0"))) PPC_WEAK_FUNC(sub_83D48BF0);
PPC_FUNC_IMPL(__imp__sub_83D48BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48BF4"))) PPC_WEAK_FUNC(sub_83D48BF4);
PPC_FUNC_IMPL(__imp__sub_83D48BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48BF8"))) PPC_WEAK_FUNC(sub_83D48BF8);
PPC_FUNC_IMPL(__imp__sub_83D48BF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48BFC"))) PPC_WEAK_FUNC(sub_83D48BFC);
PPC_FUNC_IMPL(__imp__sub_83D48BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48C00"))) PPC_WEAK_FUNC(sub_83D48C00);
PPC_FUNC_IMPL(__imp__sub_83D48C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48C04"))) PPC_WEAK_FUNC(sub_83D48C04);
PPC_FUNC_IMPL(__imp__sub_83D48C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48C08"))) PPC_WEAK_FUNC(sub_83D48C08);
PPC_FUNC_IMPL(__imp__sub_83D48C08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48C0C"))) PPC_WEAK_FUNC(sub_83D48C0C);
PPC_FUNC_IMPL(__imp__sub_83D48C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48C10"))) PPC_WEAK_FUNC(sub_83D48C10);
PPC_FUNC_IMPL(__imp__sub_83D48C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48C14"))) PPC_WEAK_FUNC(sub_83D48C14);
PPC_FUNC_IMPL(__imp__sub_83D48C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48C18"))) PPC_WEAK_FUNC(sub_83D48C18);
PPC_FUNC_IMPL(__imp__sub_83D48C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48C1C"))) PPC_WEAK_FUNC(sub_83D48C1C);
PPC_FUNC_IMPL(__imp__sub_83D48C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48C20"))) PPC_WEAK_FUNC(sub_83D48C20);
PPC_FUNC_IMPL(__imp__sub_83D48C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D48C24"))) PPC_WEAK_FUNC(sub_83D48C24);
PPC_FUNC_IMPL(__imp__sub_83D48C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D48C28"))) PPC_WEAK_FUNC(sub_83D48C28);
PPC_FUNC_IMPL(__imp__sub_83D48C28) {
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
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r31,r11,-15388
	ctx.r31.s64 = ctx.r11.s64 + -15388;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d48c60
	if (cr6.lt) goto loc_83D48C60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D48C60;
	sub_825952B8(ctx, base);
loc_83D48C60:
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

__attribute__((alias("__imp__sub_83D48C8C"))) PPC_WEAK_FUNC(sub_83D48C8C);
PPC_FUNC_IMPL(__imp__sub_83D48C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

