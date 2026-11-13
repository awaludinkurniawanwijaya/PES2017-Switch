#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D243B8"))) PPC_WEAK_FUNC(sub_83D243B8);
PPC_FUNC_IMPL(__imp__sub_83D243B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D243BC"))) PPC_WEAK_FUNC(sub_83D243BC);
PPC_FUNC_IMPL(__imp__sub_83D243BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D243C0"))) PPC_WEAK_FUNC(sub_83D243C0);
PPC_FUNC_IMPL(__imp__sub_83D243C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D243C4"))) PPC_WEAK_FUNC(sub_83D243C4);
PPC_FUNC_IMPL(__imp__sub_83D243C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D243C8"))) PPC_WEAK_FUNC(sub_83D243C8);
PPC_FUNC_IMPL(__imp__sub_83D243C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D243CC"))) PPC_WEAK_FUNC(sub_83D243CC);
PPC_FUNC_IMPL(__imp__sub_83D243CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D243D0"))) PPC_WEAK_FUNC(sub_83D243D0);
PPC_FUNC_IMPL(__imp__sub_83D243D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-5816
	ctx.r3.s64 = ctx.r11.s64 + -5816;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D243DC"))) PPC_WEAK_FUNC(sub_83D243DC);
PPC_FUNC_IMPL(__imp__sub_83D243DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D243E0"))) PPC_WEAK_FUNC(sub_83D243E0);
PPC_FUNC_IMPL(__imp__sub_83D243E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D243E4"))) PPC_WEAK_FUNC(sub_83D243E4);
PPC_FUNC_IMPL(__imp__sub_83D243E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D243E8"))) PPC_WEAK_FUNC(sub_83D243E8);
PPC_FUNC_IMPL(__imp__sub_83D243E8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r31,r11,-5808
	ctx.r31.s64 = ctx.r11.s64 + -5808;
	// lwz r3,-5808(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5808);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83d24420
	if (cr6.eq) goto loc_83D24420;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d465d8
	ctx.lr = 0x83D24418;
	sub_82D465D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x83D24420;
	sub_82416268(ctx, base);
loc_83D24420:
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

__attribute__((alias("__imp__sub_83D2444C"))) PPC_WEAK_FUNC(sub_83D2444C);
PPC_FUNC_IMPL(__imp__sub_83D2444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24450"))) PPC_WEAK_FUNC(sub_83D24450);
PPC_FUNC_IMPL(__imp__sub_83D24450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24454"))) PPC_WEAK_FUNC(sub_83D24454);
PPC_FUNC_IMPL(__imp__sub_83D24454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24458"))) PPC_WEAK_FUNC(sub_83D24458);
PPC_FUNC_IMPL(__imp__sub_83D24458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2445C"))) PPC_WEAK_FUNC(sub_83D2445C);
PPC_FUNC_IMPL(__imp__sub_83D2445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24460"))) PPC_WEAK_FUNC(sub_83D24460);
PPC_FUNC_IMPL(__imp__sub_83D24460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24464"))) PPC_WEAK_FUNC(sub_83D24464);
PPC_FUNC_IMPL(__imp__sub_83D24464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24468"))) PPC_WEAK_FUNC(sub_83D24468);
PPC_FUNC_IMPL(__imp__sub_83D24468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2446C"))) PPC_WEAK_FUNC(sub_83D2446C);
PPC_FUNC_IMPL(__imp__sub_83D2446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24470"))) PPC_WEAK_FUNC(sub_83D24470);
PPC_FUNC_IMPL(__imp__sub_83D24470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24474"))) PPC_WEAK_FUNC(sub_83D24474);
PPC_FUNC_IMPL(__imp__sub_83D24474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24478"))) PPC_WEAK_FUNC(sub_83D24478);
PPC_FUNC_IMPL(__imp__sub_83D24478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2447C"))) PPC_WEAK_FUNC(sub_83D2447C);
PPC_FUNC_IMPL(__imp__sub_83D2447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24480"))) PPC_WEAK_FUNC(sub_83D24480);
PPC_FUNC_IMPL(__imp__sub_83D24480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24484"))) PPC_WEAK_FUNC(sub_83D24484);
PPC_FUNC_IMPL(__imp__sub_83D24484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24488"))) PPC_WEAK_FUNC(sub_83D24488);
PPC_FUNC_IMPL(__imp__sub_83D24488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2448C"))) PPC_WEAK_FUNC(sub_83D2448C);
PPC_FUNC_IMPL(__imp__sub_83D2448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24490"))) PPC_WEAK_FUNC(sub_83D24490);
PPC_FUNC_IMPL(__imp__sub_83D24490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24494"))) PPC_WEAK_FUNC(sub_83D24494);
PPC_FUNC_IMPL(__imp__sub_83D24494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24498"))) PPC_WEAK_FUNC(sub_83D24498);
PPC_FUNC_IMPL(__imp__sub_83D24498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2449C"))) PPC_WEAK_FUNC(sub_83D2449C);
PPC_FUNC_IMPL(__imp__sub_83D2449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244A0"))) PPC_WEAK_FUNC(sub_83D244A0);
PPC_FUNC_IMPL(__imp__sub_83D244A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244A4"))) PPC_WEAK_FUNC(sub_83D244A4);
PPC_FUNC_IMPL(__imp__sub_83D244A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244A8"))) PPC_WEAK_FUNC(sub_83D244A8);
PPC_FUNC_IMPL(__imp__sub_83D244A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244AC"))) PPC_WEAK_FUNC(sub_83D244AC);
PPC_FUNC_IMPL(__imp__sub_83D244AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244B0"))) PPC_WEAK_FUNC(sub_83D244B0);
PPC_FUNC_IMPL(__imp__sub_83D244B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-5792
	ctx.r3.s64 = ctx.r11.s64 + -5792;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D244BC"))) PPC_WEAK_FUNC(sub_83D244BC);
PPC_FUNC_IMPL(__imp__sub_83D244BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244C0"))) PPC_WEAK_FUNC(sub_83D244C0);
PPC_FUNC_IMPL(__imp__sub_83D244C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244C4"))) PPC_WEAK_FUNC(sub_83D244C4);
PPC_FUNC_IMPL(__imp__sub_83D244C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244C8"))) PPC_WEAK_FUNC(sub_83D244C8);
PPC_FUNC_IMPL(__imp__sub_83D244C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244CC"))) PPC_WEAK_FUNC(sub_83D244CC);
PPC_FUNC_IMPL(__imp__sub_83D244CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244D0"))) PPC_WEAK_FUNC(sub_83D244D0);
PPC_FUNC_IMPL(__imp__sub_83D244D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244D4"))) PPC_WEAK_FUNC(sub_83D244D4);
PPC_FUNC_IMPL(__imp__sub_83D244D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244D8"))) PPC_WEAK_FUNC(sub_83D244D8);
PPC_FUNC_IMPL(__imp__sub_83D244D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244DC"))) PPC_WEAK_FUNC(sub_83D244DC);
PPC_FUNC_IMPL(__imp__sub_83D244DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244E0"))) PPC_WEAK_FUNC(sub_83D244E0);
PPC_FUNC_IMPL(__imp__sub_83D244E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244E4"))) PPC_WEAK_FUNC(sub_83D244E4);
PPC_FUNC_IMPL(__imp__sub_83D244E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244E8"))) PPC_WEAK_FUNC(sub_83D244E8);
PPC_FUNC_IMPL(__imp__sub_83D244E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244EC"))) PPC_WEAK_FUNC(sub_83D244EC);
PPC_FUNC_IMPL(__imp__sub_83D244EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244F0"))) PPC_WEAK_FUNC(sub_83D244F0);
PPC_FUNC_IMPL(__imp__sub_83D244F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244F4"))) PPC_WEAK_FUNC(sub_83D244F4);
PPC_FUNC_IMPL(__imp__sub_83D244F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D244F8"))) PPC_WEAK_FUNC(sub_83D244F8);
PPC_FUNC_IMPL(__imp__sub_83D244F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D244FC"))) PPC_WEAK_FUNC(sub_83D244FC);
PPC_FUNC_IMPL(__imp__sub_83D244FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24500"))) PPC_WEAK_FUNC(sub_83D24500);
PPC_FUNC_IMPL(__imp__sub_83D24500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24504"))) PPC_WEAK_FUNC(sub_83D24504);
PPC_FUNC_IMPL(__imp__sub_83D24504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24508"))) PPC_WEAK_FUNC(sub_83D24508);
PPC_FUNC_IMPL(__imp__sub_83D24508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2450C"))) PPC_WEAK_FUNC(sub_83D2450C);
PPC_FUNC_IMPL(__imp__sub_83D2450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24510"))) PPC_WEAK_FUNC(sub_83D24510);
PPC_FUNC_IMPL(__imp__sub_83D24510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24514"))) PPC_WEAK_FUNC(sub_83D24514);
PPC_FUNC_IMPL(__imp__sub_83D24514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24518"))) PPC_WEAK_FUNC(sub_83D24518);
PPC_FUNC_IMPL(__imp__sub_83D24518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2451C"))) PPC_WEAK_FUNC(sub_83D2451C);
PPC_FUNC_IMPL(__imp__sub_83D2451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24520"))) PPC_WEAK_FUNC(sub_83D24520);
PPC_FUNC_IMPL(__imp__sub_83D24520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-5784
	ctx.r3.s64 = ctx.r11.s64 + -5784;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2452C"))) PPC_WEAK_FUNC(sub_83D2452C);
PPC_FUNC_IMPL(__imp__sub_83D2452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24530"))) PPC_WEAK_FUNC(sub_83D24530);
PPC_FUNC_IMPL(__imp__sub_83D24530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24534"))) PPC_WEAK_FUNC(sub_83D24534);
PPC_FUNC_IMPL(__imp__sub_83D24534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24538"))) PPC_WEAK_FUNC(sub_83D24538);
PPC_FUNC_IMPL(__imp__sub_83D24538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2453C"))) PPC_WEAK_FUNC(sub_83D2453C);
PPC_FUNC_IMPL(__imp__sub_83D2453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24540"))) PPC_WEAK_FUNC(sub_83D24540);
PPC_FUNC_IMPL(__imp__sub_83D24540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24544"))) PPC_WEAK_FUNC(sub_83D24544);
PPC_FUNC_IMPL(__imp__sub_83D24544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24548"))) PPC_WEAK_FUNC(sub_83D24548);
PPC_FUNC_IMPL(__imp__sub_83D24548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2454C"))) PPC_WEAK_FUNC(sub_83D2454C);
PPC_FUNC_IMPL(__imp__sub_83D2454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24550"))) PPC_WEAK_FUNC(sub_83D24550);
PPC_FUNC_IMPL(__imp__sub_83D24550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24554"))) PPC_WEAK_FUNC(sub_83D24554);
PPC_FUNC_IMPL(__imp__sub_83D24554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24558"))) PPC_WEAK_FUNC(sub_83D24558);
PPC_FUNC_IMPL(__imp__sub_83D24558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2455C"))) PPC_WEAK_FUNC(sub_83D2455C);
PPC_FUNC_IMPL(__imp__sub_83D2455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24560"))) PPC_WEAK_FUNC(sub_83D24560);
PPC_FUNC_IMPL(__imp__sub_83D24560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24564"))) PPC_WEAK_FUNC(sub_83D24564);
PPC_FUNC_IMPL(__imp__sub_83D24564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24568"))) PPC_WEAK_FUNC(sub_83D24568);
PPC_FUNC_IMPL(__imp__sub_83D24568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2456C"))) PPC_WEAK_FUNC(sub_83D2456C);
PPC_FUNC_IMPL(__imp__sub_83D2456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24570"))) PPC_WEAK_FUNC(sub_83D24570);
PPC_FUNC_IMPL(__imp__sub_83D24570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24574"))) PPC_WEAK_FUNC(sub_83D24574);
PPC_FUNC_IMPL(__imp__sub_83D24574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24578"))) PPC_WEAK_FUNC(sub_83D24578);
PPC_FUNC_IMPL(__imp__sub_83D24578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2457C"))) PPC_WEAK_FUNC(sub_83D2457C);
PPC_FUNC_IMPL(__imp__sub_83D2457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24580"))) PPC_WEAK_FUNC(sub_83D24580);
PPC_FUNC_IMPL(__imp__sub_83D24580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24584"))) PPC_WEAK_FUNC(sub_83D24584);
PPC_FUNC_IMPL(__imp__sub_83D24584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24588"))) PPC_WEAK_FUNC(sub_83D24588);
PPC_FUNC_IMPL(__imp__sub_83D24588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2458C"))) PPC_WEAK_FUNC(sub_83D2458C);
PPC_FUNC_IMPL(__imp__sub_83D2458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24590"))) PPC_WEAK_FUNC(sub_83D24590);
PPC_FUNC_IMPL(__imp__sub_83D24590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24594"))) PPC_WEAK_FUNC(sub_83D24594);
PPC_FUNC_IMPL(__imp__sub_83D24594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24598"))) PPC_WEAK_FUNC(sub_83D24598);
PPC_FUNC_IMPL(__imp__sub_83D24598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2459C"))) PPC_WEAK_FUNC(sub_83D2459C);
PPC_FUNC_IMPL(__imp__sub_83D2459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245A0"))) PPC_WEAK_FUNC(sub_83D245A0);
PPC_FUNC_IMPL(__imp__sub_83D245A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245A4"))) PPC_WEAK_FUNC(sub_83D245A4);
PPC_FUNC_IMPL(__imp__sub_83D245A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245A8"))) PPC_WEAK_FUNC(sub_83D245A8);
PPC_FUNC_IMPL(__imp__sub_83D245A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-5416
	ctx.r3.s64 = ctx.r11.s64 + -5416;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D245B4"))) PPC_WEAK_FUNC(sub_83D245B4);
PPC_FUNC_IMPL(__imp__sub_83D245B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245B8"))) PPC_WEAK_FUNC(sub_83D245B8);
PPC_FUNC_IMPL(__imp__sub_83D245B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245BC"))) PPC_WEAK_FUNC(sub_83D245BC);
PPC_FUNC_IMPL(__imp__sub_83D245BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245C0"))) PPC_WEAK_FUNC(sub_83D245C0);
PPC_FUNC_IMPL(__imp__sub_83D245C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245C4"))) PPC_WEAK_FUNC(sub_83D245C4);
PPC_FUNC_IMPL(__imp__sub_83D245C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245C8"))) PPC_WEAK_FUNC(sub_83D245C8);
PPC_FUNC_IMPL(__imp__sub_83D245C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245CC"))) PPC_WEAK_FUNC(sub_83D245CC);
PPC_FUNC_IMPL(__imp__sub_83D245CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245D0"))) PPC_WEAK_FUNC(sub_83D245D0);
PPC_FUNC_IMPL(__imp__sub_83D245D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245D4"))) PPC_WEAK_FUNC(sub_83D245D4);
PPC_FUNC_IMPL(__imp__sub_83D245D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245D8"))) PPC_WEAK_FUNC(sub_83D245D8);
PPC_FUNC_IMPL(__imp__sub_83D245D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245DC"))) PPC_WEAK_FUNC(sub_83D245DC);
PPC_FUNC_IMPL(__imp__sub_83D245DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245E0"))) PPC_WEAK_FUNC(sub_83D245E0);
PPC_FUNC_IMPL(__imp__sub_83D245E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245E4"))) PPC_WEAK_FUNC(sub_83D245E4);
PPC_FUNC_IMPL(__imp__sub_83D245E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245E8"))) PPC_WEAK_FUNC(sub_83D245E8);
PPC_FUNC_IMPL(__imp__sub_83D245E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245EC"))) PPC_WEAK_FUNC(sub_83D245EC);
PPC_FUNC_IMPL(__imp__sub_83D245EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245F0"))) PPC_WEAK_FUNC(sub_83D245F0);
PPC_FUNC_IMPL(__imp__sub_83D245F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245F4"))) PPC_WEAK_FUNC(sub_83D245F4);
PPC_FUNC_IMPL(__imp__sub_83D245F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D245F8"))) PPC_WEAK_FUNC(sub_83D245F8);
PPC_FUNC_IMPL(__imp__sub_83D245F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D245FC"))) PPC_WEAK_FUNC(sub_83D245FC);
PPC_FUNC_IMPL(__imp__sub_83D245FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24600"))) PPC_WEAK_FUNC(sub_83D24600);
PPC_FUNC_IMPL(__imp__sub_83D24600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24604"))) PPC_WEAK_FUNC(sub_83D24604);
PPC_FUNC_IMPL(__imp__sub_83D24604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24608"))) PPC_WEAK_FUNC(sub_83D24608);
PPC_FUNC_IMPL(__imp__sub_83D24608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2460C"))) PPC_WEAK_FUNC(sub_83D2460C);
PPC_FUNC_IMPL(__imp__sub_83D2460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24610"))) PPC_WEAK_FUNC(sub_83D24610);
PPC_FUNC_IMPL(__imp__sub_83D24610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24614"))) PPC_WEAK_FUNC(sub_83D24614);
PPC_FUNC_IMPL(__imp__sub_83D24614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24618"))) PPC_WEAK_FUNC(sub_83D24618);
PPC_FUNC_IMPL(__imp__sub_83D24618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-5408
	ctx.r3.s64 = ctx.r11.s64 + -5408;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D24624"))) PPC_WEAK_FUNC(sub_83D24624);
PPC_FUNC_IMPL(__imp__sub_83D24624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24628"))) PPC_WEAK_FUNC(sub_83D24628);
PPC_FUNC_IMPL(__imp__sub_83D24628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2462C"))) PPC_WEAK_FUNC(sub_83D2462C);
PPC_FUNC_IMPL(__imp__sub_83D2462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24630"))) PPC_WEAK_FUNC(sub_83D24630);
PPC_FUNC_IMPL(__imp__sub_83D24630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24634"))) PPC_WEAK_FUNC(sub_83D24634);
PPC_FUNC_IMPL(__imp__sub_83D24634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24638"))) PPC_WEAK_FUNC(sub_83D24638);
PPC_FUNC_IMPL(__imp__sub_83D24638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2463C"))) PPC_WEAK_FUNC(sub_83D2463C);
PPC_FUNC_IMPL(__imp__sub_83D2463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24640"))) PPC_WEAK_FUNC(sub_83D24640);
PPC_FUNC_IMPL(__imp__sub_83D24640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24644"))) PPC_WEAK_FUNC(sub_83D24644);
PPC_FUNC_IMPL(__imp__sub_83D24644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24648"))) PPC_WEAK_FUNC(sub_83D24648);
PPC_FUNC_IMPL(__imp__sub_83D24648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2464C"))) PPC_WEAK_FUNC(sub_83D2464C);
PPC_FUNC_IMPL(__imp__sub_83D2464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24650"))) PPC_WEAK_FUNC(sub_83D24650);
PPC_FUNC_IMPL(__imp__sub_83D24650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24654"))) PPC_WEAK_FUNC(sub_83D24654);
PPC_FUNC_IMPL(__imp__sub_83D24654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24658"))) PPC_WEAK_FUNC(sub_83D24658);
PPC_FUNC_IMPL(__imp__sub_83D24658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2465C"))) PPC_WEAK_FUNC(sub_83D2465C);
PPC_FUNC_IMPL(__imp__sub_83D2465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24660"))) PPC_WEAK_FUNC(sub_83D24660);
PPC_FUNC_IMPL(__imp__sub_83D24660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24664"))) PPC_WEAK_FUNC(sub_83D24664);
PPC_FUNC_IMPL(__imp__sub_83D24664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24668"))) PPC_WEAK_FUNC(sub_83D24668);
PPC_FUNC_IMPL(__imp__sub_83D24668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2466C"))) PPC_WEAK_FUNC(sub_83D2466C);
PPC_FUNC_IMPL(__imp__sub_83D2466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24670"))) PPC_WEAK_FUNC(sub_83D24670);
PPC_FUNC_IMPL(__imp__sub_83D24670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24674"))) PPC_WEAK_FUNC(sub_83D24674);
PPC_FUNC_IMPL(__imp__sub_83D24674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24678"))) PPC_WEAK_FUNC(sub_83D24678);
PPC_FUNC_IMPL(__imp__sub_83D24678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2467C"))) PPC_WEAK_FUNC(sub_83D2467C);
PPC_FUNC_IMPL(__imp__sub_83D2467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24680"))) PPC_WEAK_FUNC(sub_83D24680);
PPC_FUNC_IMPL(__imp__sub_83D24680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24684"))) PPC_WEAK_FUNC(sub_83D24684);
PPC_FUNC_IMPL(__imp__sub_83D24684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24688"))) PPC_WEAK_FUNC(sub_83D24688);
PPC_FUNC_IMPL(__imp__sub_83D24688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-5392
	ctx.r3.s64 = ctx.r11.s64 + -5392;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D24694"))) PPC_WEAK_FUNC(sub_83D24694);
PPC_FUNC_IMPL(__imp__sub_83D24694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24698"))) PPC_WEAK_FUNC(sub_83D24698);
PPC_FUNC_IMPL(__imp__sub_83D24698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2469C"))) PPC_WEAK_FUNC(sub_83D2469C);
PPC_FUNC_IMPL(__imp__sub_83D2469C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246A0"))) PPC_WEAK_FUNC(sub_83D246A0);
PPC_FUNC_IMPL(__imp__sub_83D246A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246A4"))) PPC_WEAK_FUNC(sub_83D246A4);
PPC_FUNC_IMPL(__imp__sub_83D246A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246A8"))) PPC_WEAK_FUNC(sub_83D246A8);
PPC_FUNC_IMPL(__imp__sub_83D246A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246AC"))) PPC_WEAK_FUNC(sub_83D246AC);
PPC_FUNC_IMPL(__imp__sub_83D246AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246B0"))) PPC_WEAK_FUNC(sub_83D246B0);
PPC_FUNC_IMPL(__imp__sub_83D246B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246B4"))) PPC_WEAK_FUNC(sub_83D246B4);
PPC_FUNC_IMPL(__imp__sub_83D246B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246B8"))) PPC_WEAK_FUNC(sub_83D246B8);
PPC_FUNC_IMPL(__imp__sub_83D246B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246BC"))) PPC_WEAK_FUNC(sub_83D246BC);
PPC_FUNC_IMPL(__imp__sub_83D246BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246C0"))) PPC_WEAK_FUNC(sub_83D246C0);
PPC_FUNC_IMPL(__imp__sub_83D246C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246C4"))) PPC_WEAK_FUNC(sub_83D246C4);
PPC_FUNC_IMPL(__imp__sub_83D246C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246C8"))) PPC_WEAK_FUNC(sub_83D246C8);
PPC_FUNC_IMPL(__imp__sub_83D246C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246CC"))) PPC_WEAK_FUNC(sub_83D246CC);
PPC_FUNC_IMPL(__imp__sub_83D246CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246D0"))) PPC_WEAK_FUNC(sub_83D246D0);
PPC_FUNC_IMPL(__imp__sub_83D246D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246D4"))) PPC_WEAK_FUNC(sub_83D246D4);
PPC_FUNC_IMPL(__imp__sub_83D246D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246D8"))) PPC_WEAK_FUNC(sub_83D246D8);
PPC_FUNC_IMPL(__imp__sub_83D246D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246DC"))) PPC_WEAK_FUNC(sub_83D246DC);
PPC_FUNC_IMPL(__imp__sub_83D246DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246E0"))) PPC_WEAK_FUNC(sub_83D246E0);
PPC_FUNC_IMPL(__imp__sub_83D246E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246E4"))) PPC_WEAK_FUNC(sub_83D246E4);
PPC_FUNC_IMPL(__imp__sub_83D246E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246E8"))) PPC_WEAK_FUNC(sub_83D246E8);
PPC_FUNC_IMPL(__imp__sub_83D246E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246EC"))) PPC_WEAK_FUNC(sub_83D246EC);
PPC_FUNC_IMPL(__imp__sub_83D246EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246F0"))) PPC_WEAK_FUNC(sub_83D246F0);
PPC_FUNC_IMPL(__imp__sub_83D246F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246F4"))) PPC_WEAK_FUNC(sub_83D246F4);
PPC_FUNC_IMPL(__imp__sub_83D246F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D246F8"))) PPC_WEAK_FUNC(sub_83D246F8);
PPC_FUNC_IMPL(__imp__sub_83D246F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D246FC"))) PPC_WEAK_FUNC(sub_83D246FC);
PPC_FUNC_IMPL(__imp__sub_83D246FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24700"))) PPC_WEAK_FUNC(sub_83D24700);
PPC_FUNC_IMPL(__imp__sub_83D24700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24704"))) PPC_WEAK_FUNC(sub_83D24704);
PPC_FUNC_IMPL(__imp__sub_83D24704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24708"))) PPC_WEAK_FUNC(sub_83D24708);
PPC_FUNC_IMPL(__imp__sub_83D24708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2470C"))) PPC_WEAK_FUNC(sub_83D2470C);
PPC_FUNC_IMPL(__imp__sub_83D2470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24710"))) PPC_WEAK_FUNC(sub_83D24710);
PPC_FUNC_IMPL(__imp__sub_83D24710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-5020
	ctx.r3.s64 = ctx.r11.s64 + -5020;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2471C"))) PPC_WEAK_FUNC(sub_83D2471C);
PPC_FUNC_IMPL(__imp__sub_83D2471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24720"))) PPC_WEAK_FUNC(sub_83D24720);
PPC_FUNC_IMPL(__imp__sub_83D24720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24724"))) PPC_WEAK_FUNC(sub_83D24724);
PPC_FUNC_IMPL(__imp__sub_83D24724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24728"))) PPC_WEAK_FUNC(sub_83D24728);
PPC_FUNC_IMPL(__imp__sub_83D24728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2472C"))) PPC_WEAK_FUNC(sub_83D2472C);
PPC_FUNC_IMPL(__imp__sub_83D2472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24730"))) PPC_WEAK_FUNC(sub_83D24730);
PPC_FUNC_IMPL(__imp__sub_83D24730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24734"))) PPC_WEAK_FUNC(sub_83D24734);
PPC_FUNC_IMPL(__imp__sub_83D24734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24738"))) PPC_WEAK_FUNC(sub_83D24738);
PPC_FUNC_IMPL(__imp__sub_83D24738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2473C"))) PPC_WEAK_FUNC(sub_83D2473C);
PPC_FUNC_IMPL(__imp__sub_83D2473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24740"))) PPC_WEAK_FUNC(sub_83D24740);
PPC_FUNC_IMPL(__imp__sub_83D24740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24744"))) PPC_WEAK_FUNC(sub_83D24744);
PPC_FUNC_IMPL(__imp__sub_83D24744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24748"))) PPC_WEAK_FUNC(sub_83D24748);
PPC_FUNC_IMPL(__imp__sub_83D24748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2474C"))) PPC_WEAK_FUNC(sub_83D2474C);
PPC_FUNC_IMPL(__imp__sub_83D2474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24750"))) PPC_WEAK_FUNC(sub_83D24750);
PPC_FUNC_IMPL(__imp__sub_83D24750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24754"))) PPC_WEAK_FUNC(sub_83D24754);
PPC_FUNC_IMPL(__imp__sub_83D24754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24758"))) PPC_WEAK_FUNC(sub_83D24758);
PPC_FUNC_IMPL(__imp__sub_83D24758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2475C"))) PPC_WEAK_FUNC(sub_83D2475C);
PPC_FUNC_IMPL(__imp__sub_83D2475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24760"))) PPC_WEAK_FUNC(sub_83D24760);
PPC_FUNC_IMPL(__imp__sub_83D24760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24764"))) PPC_WEAK_FUNC(sub_83D24764);
PPC_FUNC_IMPL(__imp__sub_83D24764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24768"))) PPC_WEAK_FUNC(sub_83D24768);
PPC_FUNC_IMPL(__imp__sub_83D24768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2476C"))) PPC_WEAK_FUNC(sub_83D2476C);
PPC_FUNC_IMPL(__imp__sub_83D2476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24770"))) PPC_WEAK_FUNC(sub_83D24770);
PPC_FUNC_IMPL(__imp__sub_83D24770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24774"))) PPC_WEAK_FUNC(sub_83D24774);
PPC_FUNC_IMPL(__imp__sub_83D24774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24778"))) PPC_WEAK_FUNC(sub_83D24778);
PPC_FUNC_IMPL(__imp__sub_83D24778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2477C"))) PPC_WEAK_FUNC(sub_83D2477C);
PPC_FUNC_IMPL(__imp__sub_83D2477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24780"))) PPC_WEAK_FUNC(sub_83D24780);
PPC_FUNC_IMPL(__imp__sub_83D24780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-5008
	ctx.r3.s64 = ctx.r11.s64 + -5008;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D2478C"))) PPC_WEAK_FUNC(sub_83D2478C);
PPC_FUNC_IMPL(__imp__sub_83D2478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24790"))) PPC_WEAK_FUNC(sub_83D24790);
PPC_FUNC_IMPL(__imp__sub_83D24790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24794"))) PPC_WEAK_FUNC(sub_83D24794);
PPC_FUNC_IMPL(__imp__sub_83D24794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24798"))) PPC_WEAK_FUNC(sub_83D24798);
PPC_FUNC_IMPL(__imp__sub_83D24798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2479C"))) PPC_WEAK_FUNC(sub_83D2479C);
PPC_FUNC_IMPL(__imp__sub_83D2479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247A0"))) PPC_WEAK_FUNC(sub_83D247A0);
PPC_FUNC_IMPL(__imp__sub_83D247A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247A4"))) PPC_WEAK_FUNC(sub_83D247A4);
PPC_FUNC_IMPL(__imp__sub_83D247A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247A8"))) PPC_WEAK_FUNC(sub_83D247A8);
PPC_FUNC_IMPL(__imp__sub_83D247A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247AC"))) PPC_WEAK_FUNC(sub_83D247AC);
PPC_FUNC_IMPL(__imp__sub_83D247AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247B0"))) PPC_WEAK_FUNC(sub_83D247B0);
PPC_FUNC_IMPL(__imp__sub_83D247B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247B4"))) PPC_WEAK_FUNC(sub_83D247B4);
PPC_FUNC_IMPL(__imp__sub_83D247B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247B8"))) PPC_WEAK_FUNC(sub_83D247B8);
PPC_FUNC_IMPL(__imp__sub_83D247B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247BC"))) PPC_WEAK_FUNC(sub_83D247BC);
PPC_FUNC_IMPL(__imp__sub_83D247BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247C0"))) PPC_WEAK_FUNC(sub_83D247C0);
PPC_FUNC_IMPL(__imp__sub_83D247C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247C4"))) PPC_WEAK_FUNC(sub_83D247C4);
PPC_FUNC_IMPL(__imp__sub_83D247C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247C8"))) PPC_WEAK_FUNC(sub_83D247C8);
PPC_FUNC_IMPL(__imp__sub_83D247C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247CC"))) PPC_WEAK_FUNC(sub_83D247CC);
PPC_FUNC_IMPL(__imp__sub_83D247CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247D0"))) PPC_WEAK_FUNC(sub_83D247D0);
PPC_FUNC_IMPL(__imp__sub_83D247D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247D4"))) PPC_WEAK_FUNC(sub_83D247D4);
PPC_FUNC_IMPL(__imp__sub_83D247D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247D8"))) PPC_WEAK_FUNC(sub_83D247D8);
PPC_FUNC_IMPL(__imp__sub_83D247D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247DC"))) PPC_WEAK_FUNC(sub_83D247DC);
PPC_FUNC_IMPL(__imp__sub_83D247DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247E0"))) PPC_WEAK_FUNC(sub_83D247E0);
PPC_FUNC_IMPL(__imp__sub_83D247E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247E4"))) PPC_WEAK_FUNC(sub_83D247E4);
PPC_FUNC_IMPL(__imp__sub_83D247E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247E8"))) PPC_WEAK_FUNC(sub_83D247E8);
PPC_FUNC_IMPL(__imp__sub_83D247E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D247EC"))) PPC_WEAK_FUNC(sub_83D247EC);
PPC_FUNC_IMPL(__imp__sub_83D247EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D247F0"))) PPC_WEAK_FUNC(sub_83D247F0);
PPC_FUNC_IMPL(__imp__sub_83D247F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-4996
	ctx.r3.s64 = ctx.r11.s64 + -4996;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D247FC"))) PPC_WEAK_FUNC(sub_83D247FC);
PPC_FUNC_IMPL(__imp__sub_83D247FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24800"))) PPC_WEAK_FUNC(sub_83D24800);
PPC_FUNC_IMPL(__imp__sub_83D24800) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-4988
	ctx.r11.s64 = ctx.r11.s64 + -4988;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
loc_83D24824:
	// lwzu r6,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d494f8
	ctx.lr = 0x83D24838;
	sub_82D494F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x83D24840;
	sub_82416268(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83d24824
	if (!cr0.lt) goto loc_83D24824;
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

__attribute__((alias("__imp__sub_83D24860"))) PPC_WEAK_FUNC(sub_83D24860);
PPC_FUNC_IMPL(__imp__sub_83D24860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24864"))) PPC_WEAK_FUNC(sub_83D24864);
PPC_FUNC_IMPL(__imp__sub_83D24864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24868"))) PPC_WEAK_FUNC(sub_83D24868);
PPC_FUNC_IMPL(__imp__sub_83D24868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2486C"))) PPC_WEAK_FUNC(sub_83D2486C);
PPC_FUNC_IMPL(__imp__sub_83D2486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24870"))) PPC_WEAK_FUNC(sub_83D24870);
PPC_FUNC_IMPL(__imp__sub_83D24870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24874"))) PPC_WEAK_FUNC(sub_83D24874);
PPC_FUNC_IMPL(__imp__sub_83D24874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24878"))) PPC_WEAK_FUNC(sub_83D24878);
PPC_FUNC_IMPL(__imp__sub_83D24878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2487C"))) PPC_WEAK_FUNC(sub_83D2487C);
PPC_FUNC_IMPL(__imp__sub_83D2487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24880"))) PPC_WEAK_FUNC(sub_83D24880);
PPC_FUNC_IMPL(__imp__sub_83D24880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24884"))) PPC_WEAK_FUNC(sub_83D24884);
PPC_FUNC_IMPL(__imp__sub_83D24884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24888"))) PPC_WEAK_FUNC(sub_83D24888);
PPC_FUNC_IMPL(__imp__sub_83D24888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2488C"))) PPC_WEAK_FUNC(sub_83D2488C);
PPC_FUNC_IMPL(__imp__sub_83D2488C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24890"))) PPC_WEAK_FUNC(sub_83D24890);
PPC_FUNC_IMPL(__imp__sub_83D24890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D24894"))) PPC_WEAK_FUNC(sub_83D24894);
PPC_FUNC_IMPL(__imp__sub_83D24894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D24898"))) PPC_WEAK_FUNC(sub_83D24898);
PPC_FUNC_IMPL(__imp__sub_83D24898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D2489C"))) PPC_WEAK_FUNC(sub_83D2489C);
PPC_FUNC_IMPL(__imp__sub_83D2489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D248A0"))) PPC_WEAK_FUNC(sub_83D248A0);
PPC_FUNC_IMPL(__imp__sub_83D248A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D248A4"))) PPC_WEAK_FUNC(sub_83D248A4);
PPC_FUNC_IMPL(__imp__sub_83D248A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D248A8"))) PPC_WEAK_FUNC(sub_83D248A8);
PPC_FUNC_IMPL(__imp__sub_83D248A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D248AC"))) PPC_WEAK_FUNC(sub_83D248AC);
PPC_FUNC_IMPL(__imp__sub_83D248AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D248B0"))) PPC_WEAK_FUNC(sub_83D248B0);
PPC_FUNC_IMPL(__imp__sub_83D248B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D248B4"))) PPC_WEAK_FUNC(sub_83D248B4);
PPC_FUNC_IMPL(__imp__sub_83D248B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D248B8"))) PPC_WEAK_FUNC(sub_83D248B8);
PPC_FUNC_IMPL(__imp__sub_83D248B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

