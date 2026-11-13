#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D6D54C"))) PPC_WEAK_FUNC(sub_83D6D54C);
PPC_FUNC_IMPL(__imp__sub_83D6D54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D550"))) PPC_WEAK_FUNC(sub_83D6D550);
PPC_FUNC_IMPL(__imp__sub_83D6D550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D554"))) PPC_WEAK_FUNC(sub_83D6D554);
PPC_FUNC_IMPL(__imp__sub_83D6D554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D558"))) PPC_WEAK_FUNC(sub_83D6D558);
PPC_FUNC_IMPL(__imp__sub_83D6D558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D55C"))) PPC_WEAK_FUNC(sub_83D6D55C);
PPC_FUNC_IMPL(__imp__sub_83D6D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D560"))) PPC_WEAK_FUNC(sub_83D6D560);
PPC_FUNC_IMPL(__imp__sub_83D6D560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D564"))) PPC_WEAK_FUNC(sub_83D6D564);
PPC_FUNC_IMPL(__imp__sub_83D6D564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D568"))) PPC_WEAK_FUNC(sub_83D6D568);
PPC_FUNC_IMPL(__imp__sub_83D6D568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D56C"))) PPC_WEAK_FUNC(sub_83D6D56C);
PPC_FUNC_IMPL(__imp__sub_83D6D56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D570"))) PPC_WEAK_FUNC(sub_83D6D570);
PPC_FUNC_IMPL(__imp__sub_83D6D570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D574"))) PPC_WEAK_FUNC(sub_83D6D574);
PPC_FUNC_IMPL(__imp__sub_83D6D574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D578"))) PPC_WEAK_FUNC(sub_83D6D578);
PPC_FUNC_IMPL(__imp__sub_83D6D578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,12425
	ctx.r3.s64 = ctx.r11.s64 + 12425;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D584"))) PPC_WEAK_FUNC(sub_83D6D584);
PPC_FUNC_IMPL(__imp__sub_83D6D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D588"))) PPC_WEAK_FUNC(sub_83D6D588);
PPC_FUNC_IMPL(__imp__sub_83D6D588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D58C"))) PPC_WEAK_FUNC(sub_83D6D58C);
PPC_FUNC_IMPL(__imp__sub_83D6D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D590"))) PPC_WEAK_FUNC(sub_83D6D590);
PPC_FUNC_IMPL(__imp__sub_83D6D590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D594"))) PPC_WEAK_FUNC(sub_83D6D594);
PPC_FUNC_IMPL(__imp__sub_83D6D594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D598"))) PPC_WEAK_FUNC(sub_83D6D598);
PPC_FUNC_IMPL(__imp__sub_83D6D598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D59C"))) PPC_WEAK_FUNC(sub_83D6D59C);
PPC_FUNC_IMPL(__imp__sub_83D6D59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D5A0"))) PPC_WEAK_FUNC(sub_83D6D5A0);
PPC_FUNC_IMPL(__imp__sub_83D6D5A0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,15324
	ctx.r31.s64 = ctx.r11.s64 + 15324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8387ccf8
	ctx.lr = 0x83D6D5CC;
	sub_8387CCF8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D6D5E0;
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

__attribute__((alias("__imp__sub_83D6D5F4"))) PPC_WEAK_FUNC(sub_83D6D5F4);
PPC_FUNC_IMPL(__imp__sub_83D6D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D5F8"))) PPC_WEAK_FUNC(sub_83D6D5F8);
PPC_FUNC_IMPL(__imp__sub_83D6D5F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D5FC"))) PPC_WEAK_FUNC(sub_83D6D5FC);
PPC_FUNC_IMPL(__imp__sub_83D6D5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D600"))) PPC_WEAK_FUNC(sub_83D6D600);
PPC_FUNC_IMPL(__imp__sub_83D6D600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D604"))) PPC_WEAK_FUNC(sub_83D6D604);
PPC_FUNC_IMPL(__imp__sub_83D6D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D608"))) PPC_WEAK_FUNC(sub_83D6D608);
PPC_FUNC_IMPL(__imp__sub_83D6D608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D60C"))) PPC_WEAK_FUNC(sub_83D6D60C);
PPC_FUNC_IMPL(__imp__sub_83D6D60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D610"))) PPC_WEAK_FUNC(sub_83D6D610);
PPC_FUNC_IMPL(__imp__sub_83D6D610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D614"))) PPC_WEAK_FUNC(sub_83D6D614);
PPC_FUNC_IMPL(__imp__sub_83D6D614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D618"))) PPC_WEAK_FUNC(sub_83D6D618);
PPC_FUNC_IMPL(__imp__sub_83D6D618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D61C"))) PPC_WEAK_FUNC(sub_83D6D61C);
PPC_FUNC_IMPL(__imp__sub_83D6D61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D620"))) PPC_WEAK_FUNC(sub_83D6D620);
PPC_FUNC_IMPL(__imp__sub_83D6D620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D624"))) PPC_WEAK_FUNC(sub_83D6D624);
PPC_FUNC_IMPL(__imp__sub_83D6D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D628"))) PPC_WEAK_FUNC(sub_83D6D628);
PPC_FUNC_IMPL(__imp__sub_83D6D628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D62C"))) PPC_WEAK_FUNC(sub_83D6D62C);
PPC_FUNC_IMPL(__imp__sub_83D6D62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D630"))) PPC_WEAK_FUNC(sub_83D6D630);
PPC_FUNC_IMPL(__imp__sub_83D6D630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D634"))) PPC_WEAK_FUNC(sub_83D6D634);
PPC_FUNC_IMPL(__imp__sub_83D6D634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D638"))) PPC_WEAK_FUNC(sub_83D6D638);
PPC_FUNC_IMPL(__imp__sub_83D6D638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D63C"))) PPC_WEAK_FUNC(sub_83D6D63C);
PPC_FUNC_IMPL(__imp__sub_83D6D63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D640"))) PPC_WEAK_FUNC(sub_83D6D640);
PPC_FUNC_IMPL(__imp__sub_83D6D640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D644"))) PPC_WEAK_FUNC(sub_83D6D644);
PPC_FUNC_IMPL(__imp__sub_83D6D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D648"))) PPC_WEAK_FUNC(sub_83D6D648);
PPC_FUNC_IMPL(__imp__sub_83D6D648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D64C"))) PPC_WEAK_FUNC(sub_83D6D64C);
PPC_FUNC_IMPL(__imp__sub_83D6D64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D650"))) PPC_WEAK_FUNC(sub_83D6D650);
PPC_FUNC_IMPL(__imp__sub_83D6D650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D654"))) PPC_WEAK_FUNC(sub_83D6D654);
PPC_FUNC_IMPL(__imp__sub_83D6D654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D658"))) PPC_WEAK_FUNC(sub_83D6D658);
PPC_FUNC_IMPL(__imp__sub_83D6D658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,15396
	ctx.r3.s64 = ctx.r11.s64 + 15396;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D664"))) PPC_WEAK_FUNC(sub_83D6D664);
PPC_FUNC_IMPL(__imp__sub_83D6D664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D668"))) PPC_WEAK_FUNC(sub_83D6D668);
PPC_FUNC_IMPL(__imp__sub_83D6D668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D66C"))) PPC_WEAK_FUNC(sub_83D6D66C);
PPC_FUNC_IMPL(__imp__sub_83D6D66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D670"))) PPC_WEAK_FUNC(sub_83D6D670);
PPC_FUNC_IMPL(__imp__sub_83D6D670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D674"))) PPC_WEAK_FUNC(sub_83D6D674);
PPC_FUNC_IMPL(__imp__sub_83D6D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D678"))) PPC_WEAK_FUNC(sub_83D6D678);
PPC_FUNC_IMPL(__imp__sub_83D6D678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D67C"))) PPC_WEAK_FUNC(sub_83D6D67C);
PPC_FUNC_IMPL(__imp__sub_83D6D67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D680"))) PPC_WEAK_FUNC(sub_83D6D680);
PPC_FUNC_IMPL(__imp__sub_83D6D680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D684"))) PPC_WEAK_FUNC(sub_83D6D684);
PPC_FUNC_IMPL(__imp__sub_83D6D684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D688"))) PPC_WEAK_FUNC(sub_83D6D688);
PPC_FUNC_IMPL(__imp__sub_83D6D688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D68C"))) PPC_WEAK_FUNC(sub_83D6D68C);
PPC_FUNC_IMPL(__imp__sub_83D6D68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D690"))) PPC_WEAK_FUNC(sub_83D6D690);
PPC_FUNC_IMPL(__imp__sub_83D6D690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D694"))) PPC_WEAK_FUNC(sub_83D6D694);
PPC_FUNC_IMPL(__imp__sub_83D6D694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D698"))) PPC_WEAK_FUNC(sub_83D6D698);
PPC_FUNC_IMPL(__imp__sub_83D6D698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D69C"))) PPC_WEAK_FUNC(sub_83D6D69C);
PPC_FUNC_IMPL(__imp__sub_83D6D69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6A0"))) PPC_WEAK_FUNC(sub_83D6D6A0);
PPC_FUNC_IMPL(__imp__sub_83D6D6A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6A4"))) PPC_WEAK_FUNC(sub_83D6D6A4);
PPC_FUNC_IMPL(__imp__sub_83D6D6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6A8"))) PPC_WEAK_FUNC(sub_83D6D6A8);
PPC_FUNC_IMPL(__imp__sub_83D6D6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6AC"))) PPC_WEAK_FUNC(sub_83D6D6AC);
PPC_FUNC_IMPL(__imp__sub_83D6D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6B0"))) PPC_WEAK_FUNC(sub_83D6D6B0);
PPC_FUNC_IMPL(__imp__sub_83D6D6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6B4"))) PPC_WEAK_FUNC(sub_83D6D6B4);
PPC_FUNC_IMPL(__imp__sub_83D6D6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6B8"))) PPC_WEAK_FUNC(sub_83D6D6B8);
PPC_FUNC_IMPL(__imp__sub_83D6D6B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6BC"))) PPC_WEAK_FUNC(sub_83D6D6BC);
PPC_FUNC_IMPL(__imp__sub_83D6D6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6C0"))) PPC_WEAK_FUNC(sub_83D6D6C0);
PPC_FUNC_IMPL(__imp__sub_83D6D6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6C4"))) PPC_WEAK_FUNC(sub_83D6D6C4);
PPC_FUNC_IMPL(__imp__sub_83D6D6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6C8"))) PPC_WEAK_FUNC(sub_83D6D6C8);
PPC_FUNC_IMPL(__imp__sub_83D6D6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,15408
	ctx.r3.s64 = ctx.r11.s64 + 15408;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D6D4"))) PPC_WEAK_FUNC(sub_83D6D6D4);
PPC_FUNC_IMPL(__imp__sub_83D6D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6D8"))) PPC_WEAK_FUNC(sub_83D6D6D8);
PPC_FUNC_IMPL(__imp__sub_83D6D6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6DC"))) PPC_WEAK_FUNC(sub_83D6D6DC);
PPC_FUNC_IMPL(__imp__sub_83D6D6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6E0"))) PPC_WEAK_FUNC(sub_83D6D6E0);
PPC_FUNC_IMPL(__imp__sub_83D6D6E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6E4"))) PPC_WEAK_FUNC(sub_83D6D6E4);
PPC_FUNC_IMPL(__imp__sub_83D6D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6E8"))) PPC_WEAK_FUNC(sub_83D6D6E8);
PPC_FUNC_IMPL(__imp__sub_83D6D6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6EC"))) PPC_WEAK_FUNC(sub_83D6D6EC);
PPC_FUNC_IMPL(__imp__sub_83D6D6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6F0"))) PPC_WEAK_FUNC(sub_83D6D6F0);
PPC_FUNC_IMPL(__imp__sub_83D6D6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6F4"))) PPC_WEAK_FUNC(sub_83D6D6F4);
PPC_FUNC_IMPL(__imp__sub_83D6D6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D6F8"))) PPC_WEAK_FUNC(sub_83D6D6F8);
PPC_FUNC_IMPL(__imp__sub_83D6D6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D6FC"))) PPC_WEAK_FUNC(sub_83D6D6FC);
PPC_FUNC_IMPL(__imp__sub_83D6D6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D700"))) PPC_WEAK_FUNC(sub_83D6D700);
PPC_FUNC_IMPL(__imp__sub_83D6D700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D704"))) PPC_WEAK_FUNC(sub_83D6D704);
PPC_FUNC_IMPL(__imp__sub_83D6D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D708"))) PPC_WEAK_FUNC(sub_83D6D708);
PPC_FUNC_IMPL(__imp__sub_83D6D708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D70C"))) PPC_WEAK_FUNC(sub_83D6D70C);
PPC_FUNC_IMPL(__imp__sub_83D6D70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D710"))) PPC_WEAK_FUNC(sub_83D6D710);
PPC_FUNC_IMPL(__imp__sub_83D6D710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D714"))) PPC_WEAK_FUNC(sub_83D6D714);
PPC_FUNC_IMPL(__imp__sub_83D6D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D718"))) PPC_WEAK_FUNC(sub_83D6D718);
PPC_FUNC_IMPL(__imp__sub_83D6D718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D71C"))) PPC_WEAK_FUNC(sub_83D6D71C);
PPC_FUNC_IMPL(__imp__sub_83D6D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D720"))) PPC_WEAK_FUNC(sub_83D6D720);
PPC_FUNC_IMPL(__imp__sub_83D6D720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D724"))) PPC_WEAK_FUNC(sub_83D6D724);
PPC_FUNC_IMPL(__imp__sub_83D6D724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D728"))) PPC_WEAK_FUNC(sub_83D6D728);
PPC_FUNC_IMPL(__imp__sub_83D6D728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D72C"))) PPC_WEAK_FUNC(sub_83D6D72C);
PPC_FUNC_IMPL(__imp__sub_83D6D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D730"))) PPC_WEAK_FUNC(sub_83D6D730);
PPC_FUNC_IMPL(__imp__sub_83D6D730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D734"))) PPC_WEAK_FUNC(sub_83D6D734);
PPC_FUNC_IMPL(__imp__sub_83D6D734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D738"))) PPC_WEAK_FUNC(sub_83D6D738);
PPC_FUNC_IMPL(__imp__sub_83D6D738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D73C"))) PPC_WEAK_FUNC(sub_83D6D73C);
PPC_FUNC_IMPL(__imp__sub_83D6D73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D740"))) PPC_WEAK_FUNC(sub_83D6D740);
PPC_FUNC_IMPL(__imp__sub_83D6D740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D744"))) PPC_WEAK_FUNC(sub_83D6D744);
PPC_FUNC_IMPL(__imp__sub_83D6D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D748"))) PPC_WEAK_FUNC(sub_83D6D748);
PPC_FUNC_IMPL(__imp__sub_83D6D748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D74C"))) PPC_WEAK_FUNC(sub_83D6D74C);
PPC_FUNC_IMPL(__imp__sub_83D6D74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D750"))) PPC_WEAK_FUNC(sub_83D6D750);
PPC_FUNC_IMPL(__imp__sub_83D6D750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,15776
	ctx.r3.s64 = ctx.r11.s64 + 15776;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D75C"))) PPC_WEAK_FUNC(sub_83D6D75C);
PPC_FUNC_IMPL(__imp__sub_83D6D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D760"))) PPC_WEAK_FUNC(sub_83D6D760);
PPC_FUNC_IMPL(__imp__sub_83D6D760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D764"))) PPC_WEAK_FUNC(sub_83D6D764);
PPC_FUNC_IMPL(__imp__sub_83D6D764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D768"))) PPC_WEAK_FUNC(sub_83D6D768);
PPC_FUNC_IMPL(__imp__sub_83D6D768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D76C"))) PPC_WEAK_FUNC(sub_83D6D76C);
PPC_FUNC_IMPL(__imp__sub_83D6D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D770"))) PPC_WEAK_FUNC(sub_83D6D770);
PPC_FUNC_IMPL(__imp__sub_83D6D770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D774"))) PPC_WEAK_FUNC(sub_83D6D774);
PPC_FUNC_IMPL(__imp__sub_83D6D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D778"))) PPC_WEAK_FUNC(sub_83D6D778);
PPC_FUNC_IMPL(__imp__sub_83D6D778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D77C"))) PPC_WEAK_FUNC(sub_83D6D77C);
PPC_FUNC_IMPL(__imp__sub_83D6D77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D780"))) PPC_WEAK_FUNC(sub_83D6D780);
PPC_FUNC_IMPL(__imp__sub_83D6D780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D784"))) PPC_WEAK_FUNC(sub_83D6D784);
PPC_FUNC_IMPL(__imp__sub_83D6D784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D788"))) PPC_WEAK_FUNC(sub_83D6D788);
PPC_FUNC_IMPL(__imp__sub_83D6D788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D78C"))) PPC_WEAK_FUNC(sub_83D6D78C);
PPC_FUNC_IMPL(__imp__sub_83D6D78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D790"))) PPC_WEAK_FUNC(sub_83D6D790);
PPC_FUNC_IMPL(__imp__sub_83D6D790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D794"))) PPC_WEAK_FUNC(sub_83D6D794);
PPC_FUNC_IMPL(__imp__sub_83D6D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D798"))) PPC_WEAK_FUNC(sub_83D6D798);
PPC_FUNC_IMPL(__imp__sub_83D6D798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D79C"))) PPC_WEAK_FUNC(sub_83D6D79C);
PPC_FUNC_IMPL(__imp__sub_83D6D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7A0"))) PPC_WEAK_FUNC(sub_83D6D7A0);
PPC_FUNC_IMPL(__imp__sub_83D6D7A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7A4"))) PPC_WEAK_FUNC(sub_83D6D7A4);
PPC_FUNC_IMPL(__imp__sub_83D6D7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7A8"))) PPC_WEAK_FUNC(sub_83D6D7A8);
PPC_FUNC_IMPL(__imp__sub_83D6D7A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7AC"))) PPC_WEAK_FUNC(sub_83D6D7AC);
PPC_FUNC_IMPL(__imp__sub_83D6D7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7B0"))) PPC_WEAK_FUNC(sub_83D6D7B0);
PPC_FUNC_IMPL(__imp__sub_83D6D7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7B4"))) PPC_WEAK_FUNC(sub_83D6D7B4);
PPC_FUNC_IMPL(__imp__sub_83D6D7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7B8"))) PPC_WEAK_FUNC(sub_83D6D7B8);
PPC_FUNC_IMPL(__imp__sub_83D6D7B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7BC"))) PPC_WEAK_FUNC(sub_83D6D7BC);
PPC_FUNC_IMPL(__imp__sub_83D6D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7C0"))) PPC_WEAK_FUNC(sub_83D6D7C0);
PPC_FUNC_IMPL(__imp__sub_83D6D7C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7C4"))) PPC_WEAK_FUNC(sub_83D6D7C4);
PPC_FUNC_IMPL(__imp__sub_83D6D7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7C8"))) PPC_WEAK_FUNC(sub_83D6D7C8);
PPC_FUNC_IMPL(__imp__sub_83D6D7C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7CC"))) PPC_WEAK_FUNC(sub_83D6D7CC);
PPC_FUNC_IMPL(__imp__sub_83D6D7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7D0"))) PPC_WEAK_FUNC(sub_83D6D7D0);
PPC_FUNC_IMPL(__imp__sub_83D6D7D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7D4"))) PPC_WEAK_FUNC(sub_83D6D7D4);
PPC_FUNC_IMPL(__imp__sub_83D6D7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7D8"))) PPC_WEAK_FUNC(sub_83D6D7D8);
PPC_FUNC_IMPL(__imp__sub_83D6D7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16144
	ctx.r3.s64 = ctx.r11.s64 + 16144;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D7E4"))) PPC_WEAK_FUNC(sub_83D6D7E4);
PPC_FUNC_IMPL(__imp__sub_83D6D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7E8"))) PPC_WEAK_FUNC(sub_83D6D7E8);
PPC_FUNC_IMPL(__imp__sub_83D6D7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7EC"))) PPC_WEAK_FUNC(sub_83D6D7EC);
PPC_FUNC_IMPL(__imp__sub_83D6D7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7F0"))) PPC_WEAK_FUNC(sub_83D6D7F0);
PPC_FUNC_IMPL(__imp__sub_83D6D7F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7F4"))) PPC_WEAK_FUNC(sub_83D6D7F4);
PPC_FUNC_IMPL(__imp__sub_83D6D7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D7F8"))) PPC_WEAK_FUNC(sub_83D6D7F8);
PPC_FUNC_IMPL(__imp__sub_83D6D7F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D7FC"))) PPC_WEAK_FUNC(sub_83D6D7FC);
PPC_FUNC_IMPL(__imp__sub_83D6D7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D800"))) PPC_WEAK_FUNC(sub_83D6D800);
PPC_FUNC_IMPL(__imp__sub_83D6D800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D804"))) PPC_WEAK_FUNC(sub_83D6D804);
PPC_FUNC_IMPL(__imp__sub_83D6D804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D808"))) PPC_WEAK_FUNC(sub_83D6D808);
PPC_FUNC_IMPL(__imp__sub_83D6D808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D80C"))) PPC_WEAK_FUNC(sub_83D6D80C);
PPC_FUNC_IMPL(__imp__sub_83D6D80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D810"))) PPC_WEAK_FUNC(sub_83D6D810);
PPC_FUNC_IMPL(__imp__sub_83D6D810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D814"))) PPC_WEAK_FUNC(sub_83D6D814);
PPC_FUNC_IMPL(__imp__sub_83D6D814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D818"))) PPC_WEAK_FUNC(sub_83D6D818);
PPC_FUNC_IMPL(__imp__sub_83D6D818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D81C"))) PPC_WEAK_FUNC(sub_83D6D81C);
PPC_FUNC_IMPL(__imp__sub_83D6D81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D820"))) PPC_WEAK_FUNC(sub_83D6D820);
PPC_FUNC_IMPL(__imp__sub_83D6D820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D824"))) PPC_WEAK_FUNC(sub_83D6D824);
PPC_FUNC_IMPL(__imp__sub_83D6D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D828"))) PPC_WEAK_FUNC(sub_83D6D828);
PPC_FUNC_IMPL(__imp__sub_83D6D828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D82C"))) PPC_WEAK_FUNC(sub_83D6D82C);
PPC_FUNC_IMPL(__imp__sub_83D6D82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D830"))) PPC_WEAK_FUNC(sub_83D6D830);
PPC_FUNC_IMPL(__imp__sub_83D6D830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D834"))) PPC_WEAK_FUNC(sub_83D6D834);
PPC_FUNC_IMPL(__imp__sub_83D6D834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D838"))) PPC_WEAK_FUNC(sub_83D6D838);
PPC_FUNC_IMPL(__imp__sub_83D6D838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D83C"))) PPC_WEAK_FUNC(sub_83D6D83C);
PPC_FUNC_IMPL(__imp__sub_83D6D83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D840"))) PPC_WEAK_FUNC(sub_83D6D840);
PPC_FUNC_IMPL(__imp__sub_83D6D840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D844"))) PPC_WEAK_FUNC(sub_83D6D844);
PPC_FUNC_IMPL(__imp__sub_83D6D844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D848"))) PPC_WEAK_FUNC(sub_83D6D848);
PPC_FUNC_IMPL(__imp__sub_83D6D848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D84C"))) PPC_WEAK_FUNC(sub_83D6D84C);
PPC_FUNC_IMPL(__imp__sub_83D6D84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D850"))) PPC_WEAK_FUNC(sub_83D6D850);
PPC_FUNC_IMPL(__imp__sub_83D6D850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D854"))) PPC_WEAK_FUNC(sub_83D6D854);
PPC_FUNC_IMPL(__imp__sub_83D6D854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D858"))) PPC_WEAK_FUNC(sub_83D6D858);
PPC_FUNC_IMPL(__imp__sub_83D6D858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D85C"))) PPC_WEAK_FUNC(sub_83D6D85C);
PPC_FUNC_IMPL(__imp__sub_83D6D85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D860"))) PPC_WEAK_FUNC(sub_83D6D860);
PPC_FUNC_IMPL(__imp__sub_83D6D860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D86C"))) PPC_WEAK_FUNC(sub_83D6D86C);
PPC_FUNC_IMPL(__imp__sub_83D6D86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D870"))) PPC_WEAK_FUNC(sub_83D6D870);
PPC_FUNC_IMPL(__imp__sub_83D6D870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D874"))) PPC_WEAK_FUNC(sub_83D6D874);
PPC_FUNC_IMPL(__imp__sub_83D6D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D878"))) PPC_WEAK_FUNC(sub_83D6D878);
PPC_FUNC_IMPL(__imp__sub_83D6D878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D87C"))) PPC_WEAK_FUNC(sub_83D6D87C);
PPC_FUNC_IMPL(__imp__sub_83D6D87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D880"))) PPC_WEAK_FUNC(sub_83D6D880);
PPC_FUNC_IMPL(__imp__sub_83D6D880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D884"))) PPC_WEAK_FUNC(sub_83D6D884);
PPC_FUNC_IMPL(__imp__sub_83D6D884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D888"))) PPC_WEAK_FUNC(sub_83D6D888);
PPC_FUNC_IMPL(__imp__sub_83D6D888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D88C"))) PPC_WEAK_FUNC(sub_83D6D88C);
PPC_FUNC_IMPL(__imp__sub_83D6D88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D890"))) PPC_WEAK_FUNC(sub_83D6D890);
PPC_FUNC_IMPL(__imp__sub_83D6D890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D894"))) PPC_WEAK_FUNC(sub_83D6D894);
PPC_FUNC_IMPL(__imp__sub_83D6D894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D898"))) PPC_WEAK_FUNC(sub_83D6D898);
PPC_FUNC_IMPL(__imp__sub_83D6D898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D89C"))) PPC_WEAK_FUNC(sub_83D6D89C);
PPC_FUNC_IMPL(__imp__sub_83D6D89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8A0"))) PPC_WEAK_FUNC(sub_83D6D8A0);
PPC_FUNC_IMPL(__imp__sub_83D6D8A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8A4"))) PPC_WEAK_FUNC(sub_83D6D8A4);
PPC_FUNC_IMPL(__imp__sub_83D6D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8A8"))) PPC_WEAK_FUNC(sub_83D6D8A8);
PPC_FUNC_IMPL(__imp__sub_83D6D8A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8AC"))) PPC_WEAK_FUNC(sub_83D6D8AC);
PPC_FUNC_IMPL(__imp__sub_83D6D8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8B0"))) PPC_WEAK_FUNC(sub_83D6D8B0);
PPC_FUNC_IMPL(__imp__sub_83D6D8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8B4"))) PPC_WEAK_FUNC(sub_83D6D8B4);
PPC_FUNC_IMPL(__imp__sub_83D6D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8B8"))) PPC_WEAK_FUNC(sub_83D6D8B8);
PPC_FUNC_IMPL(__imp__sub_83D6D8B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8BC"))) PPC_WEAK_FUNC(sub_83D6D8BC);
PPC_FUNC_IMPL(__imp__sub_83D6D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8C0"))) PPC_WEAK_FUNC(sub_83D6D8C0);
PPC_FUNC_IMPL(__imp__sub_83D6D8C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8C4"))) PPC_WEAK_FUNC(sub_83D6D8C4);
PPC_FUNC_IMPL(__imp__sub_83D6D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8C8"))) PPC_WEAK_FUNC(sub_83D6D8C8);
PPC_FUNC_IMPL(__imp__sub_83D6D8C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8CC"))) PPC_WEAK_FUNC(sub_83D6D8CC);
PPC_FUNC_IMPL(__imp__sub_83D6D8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8D0"))) PPC_WEAK_FUNC(sub_83D6D8D0);
PPC_FUNC_IMPL(__imp__sub_83D6D8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8D4"))) PPC_WEAK_FUNC(sub_83D6D8D4);
PPC_FUNC_IMPL(__imp__sub_83D6D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8D8"))) PPC_WEAK_FUNC(sub_83D6D8D8);
PPC_FUNC_IMPL(__imp__sub_83D6D8D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8DC"))) PPC_WEAK_FUNC(sub_83D6D8DC);
PPC_FUNC_IMPL(__imp__sub_83D6D8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8E0"))) PPC_WEAK_FUNC(sub_83D6D8E0);
PPC_FUNC_IMPL(__imp__sub_83D6D8E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8E4"))) PPC_WEAK_FUNC(sub_83D6D8E4);
PPC_FUNC_IMPL(__imp__sub_83D6D8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8E8"))) PPC_WEAK_FUNC(sub_83D6D8E8);
PPC_FUNC_IMPL(__imp__sub_83D6D8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16880
	ctx.r3.s64 = ctx.r11.s64 + 16880;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D8F4"))) PPC_WEAK_FUNC(sub_83D6D8F4);
PPC_FUNC_IMPL(__imp__sub_83D6D8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D8F8"))) PPC_WEAK_FUNC(sub_83D6D8F8);
PPC_FUNC_IMPL(__imp__sub_83D6D8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D8FC"))) PPC_WEAK_FUNC(sub_83D6D8FC);
PPC_FUNC_IMPL(__imp__sub_83D6D8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D900"))) PPC_WEAK_FUNC(sub_83D6D900);
PPC_FUNC_IMPL(__imp__sub_83D6D900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D904"))) PPC_WEAK_FUNC(sub_83D6D904);
PPC_FUNC_IMPL(__imp__sub_83D6D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D908"))) PPC_WEAK_FUNC(sub_83D6D908);
PPC_FUNC_IMPL(__imp__sub_83D6D908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D90C"))) PPC_WEAK_FUNC(sub_83D6D90C);
PPC_FUNC_IMPL(__imp__sub_83D6D90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D910"))) PPC_WEAK_FUNC(sub_83D6D910);
PPC_FUNC_IMPL(__imp__sub_83D6D910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D914"))) PPC_WEAK_FUNC(sub_83D6D914);
PPC_FUNC_IMPL(__imp__sub_83D6D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D918"))) PPC_WEAK_FUNC(sub_83D6D918);
PPC_FUNC_IMPL(__imp__sub_83D6D918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D91C"))) PPC_WEAK_FUNC(sub_83D6D91C);
PPC_FUNC_IMPL(__imp__sub_83D6D91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D920"))) PPC_WEAK_FUNC(sub_83D6D920);
PPC_FUNC_IMPL(__imp__sub_83D6D920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D924"))) PPC_WEAK_FUNC(sub_83D6D924);
PPC_FUNC_IMPL(__imp__sub_83D6D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D928"))) PPC_WEAK_FUNC(sub_83D6D928);
PPC_FUNC_IMPL(__imp__sub_83D6D928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D92C"))) PPC_WEAK_FUNC(sub_83D6D92C);
PPC_FUNC_IMPL(__imp__sub_83D6D92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D930"))) PPC_WEAK_FUNC(sub_83D6D930);
PPC_FUNC_IMPL(__imp__sub_83D6D930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D934"))) PPC_WEAK_FUNC(sub_83D6D934);
PPC_FUNC_IMPL(__imp__sub_83D6D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D938"))) PPC_WEAK_FUNC(sub_83D6D938);
PPC_FUNC_IMPL(__imp__sub_83D6D938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D93C"))) PPC_WEAK_FUNC(sub_83D6D93C);
PPC_FUNC_IMPL(__imp__sub_83D6D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D940"))) PPC_WEAK_FUNC(sub_83D6D940);
PPC_FUNC_IMPL(__imp__sub_83D6D940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D944"))) PPC_WEAK_FUNC(sub_83D6D944);
PPC_FUNC_IMPL(__imp__sub_83D6D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D948"))) PPC_WEAK_FUNC(sub_83D6D948);
PPC_FUNC_IMPL(__imp__sub_83D6D948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D94C"))) PPC_WEAK_FUNC(sub_83D6D94C);
PPC_FUNC_IMPL(__imp__sub_83D6D94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D950"))) PPC_WEAK_FUNC(sub_83D6D950);
PPC_FUNC_IMPL(__imp__sub_83D6D950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D954"))) PPC_WEAK_FUNC(sub_83D6D954);
PPC_FUNC_IMPL(__imp__sub_83D6D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D958"))) PPC_WEAK_FUNC(sub_83D6D958);
PPC_FUNC_IMPL(__imp__sub_83D6D958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16892
	ctx.r3.s64 = ctx.r11.s64 + 16892;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D964"))) PPC_WEAK_FUNC(sub_83D6D964);
PPC_FUNC_IMPL(__imp__sub_83D6D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D968"))) PPC_WEAK_FUNC(sub_83D6D968);
PPC_FUNC_IMPL(__imp__sub_83D6D968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D96C"))) PPC_WEAK_FUNC(sub_83D6D96C);
PPC_FUNC_IMPL(__imp__sub_83D6D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D970"))) PPC_WEAK_FUNC(sub_83D6D970);
PPC_FUNC_IMPL(__imp__sub_83D6D970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D974"))) PPC_WEAK_FUNC(sub_83D6D974);
PPC_FUNC_IMPL(__imp__sub_83D6D974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D978"))) PPC_WEAK_FUNC(sub_83D6D978);
PPC_FUNC_IMPL(__imp__sub_83D6D978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D97C"))) PPC_WEAK_FUNC(sub_83D6D97C);
PPC_FUNC_IMPL(__imp__sub_83D6D97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D980"))) PPC_WEAK_FUNC(sub_83D6D980);
PPC_FUNC_IMPL(__imp__sub_83D6D980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D984"))) PPC_WEAK_FUNC(sub_83D6D984);
PPC_FUNC_IMPL(__imp__sub_83D6D984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D988"))) PPC_WEAK_FUNC(sub_83D6D988);
PPC_FUNC_IMPL(__imp__sub_83D6D988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D98C"))) PPC_WEAK_FUNC(sub_83D6D98C);
PPC_FUNC_IMPL(__imp__sub_83D6D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D990"))) PPC_WEAK_FUNC(sub_83D6D990);
PPC_FUNC_IMPL(__imp__sub_83D6D990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D994"))) PPC_WEAK_FUNC(sub_83D6D994);
PPC_FUNC_IMPL(__imp__sub_83D6D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D998"))) PPC_WEAK_FUNC(sub_83D6D998);
PPC_FUNC_IMPL(__imp__sub_83D6D998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D99C"))) PPC_WEAK_FUNC(sub_83D6D99C);
PPC_FUNC_IMPL(__imp__sub_83D6D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D9A0"))) PPC_WEAK_FUNC(sub_83D6D9A0);
PPC_FUNC_IMPL(__imp__sub_83D6D9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D9A4"))) PPC_WEAK_FUNC(sub_83D6D9A4);
PPC_FUNC_IMPL(__imp__sub_83D6D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D9A8"))) PPC_WEAK_FUNC(sub_83D6D9A8);
PPC_FUNC_IMPL(__imp__sub_83D6D9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D9AC"))) PPC_WEAK_FUNC(sub_83D6D9AC);
PPC_FUNC_IMPL(__imp__sub_83D6D9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D9B0"))) PPC_WEAK_FUNC(sub_83D6D9B0);
PPC_FUNC_IMPL(__imp__sub_83D6D9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D9B4"))) PPC_WEAK_FUNC(sub_83D6D9B4);
PPC_FUNC_IMPL(__imp__sub_83D6D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D9B8"))) PPC_WEAK_FUNC(sub_83D6D9B8);
PPC_FUNC_IMPL(__imp__sub_83D6D9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D9BC"))) PPC_WEAK_FUNC(sub_83D6D9BC);
PPC_FUNC_IMPL(__imp__sub_83D6D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D9C0"))) PPC_WEAK_FUNC(sub_83D6D9C0);
PPC_FUNC_IMPL(__imp__sub_83D6D9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D9C4"))) PPC_WEAK_FUNC(sub_83D6D9C4);
PPC_FUNC_IMPL(__imp__sub_83D6D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D9C8"))) PPC_WEAK_FUNC(sub_83D6D9C8);
PPC_FUNC_IMPL(__imp__sub_83D6D9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,16904
	ctx.r3.s64 = ctx.r11.s64 + 16904;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D6D9D4"))) PPC_WEAK_FUNC(sub_83D6D9D4);
PPC_FUNC_IMPL(__imp__sub_83D6D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D9D8"))) PPC_WEAK_FUNC(sub_83D6D9D8);
PPC_FUNC_IMPL(__imp__sub_83D6D9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D6D9DC"))) PPC_WEAK_FUNC(sub_83D6D9DC);
PPC_FUNC_IMPL(__imp__sub_83D6D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D6D9E0"))) PPC_WEAK_FUNC(sub_83D6D9E0);
PPC_FUNC_IMPL(__imp__sub_83D6D9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

