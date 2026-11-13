#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D5611C"))) PPC_WEAK_FUNC(sub_83D5611C);
PPC_FUNC_IMPL(__imp__sub_83D5611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56120"))) PPC_WEAK_FUNC(sub_83D56120);
PPC_FUNC_IMPL(__imp__sub_83D56120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,2248
	ctx.r3.s64 = ctx.r11.s64 + 2248;
	// b 0x831cc470
	sub_831CC470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5612C"))) PPC_WEAK_FUNC(sub_83D5612C);
PPC_FUNC_IMPL(__imp__sub_83D5612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56130"))) PPC_WEAK_FUNC(sub_83D56130);
PPC_FUNC_IMPL(__imp__sub_83D56130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,2284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83d5616c
	if (cr6.eq) goto loc_83D5616C;
	// bl 0x8246b968
	ctx.lr = 0x83D56150;
	sub_8246B968(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83d5616c
	if (cr0.eq) goto loc_83D5616C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83D5616C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83D5616C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5617C"))) PPC_WEAK_FUNC(sub_83D5617C);
PPC_FUNC_IMPL(__imp__sub_83D5617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56180"))) PPC_WEAK_FUNC(sub_83D56180);
PPC_FUNC_IMPL(__imp__sub_83D56180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,2292
	ctx.r3.s64 = ctx.r11.s64 + 2292;
	// b 0x831cc7f8
	sub_831CC7F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5618C"))) PPC_WEAK_FUNC(sub_83D5618C);
PPC_FUNC_IMPL(__imp__sub_83D5618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56190"))) PPC_WEAK_FUNC(sub_83D56190);
PPC_FUNC_IMPL(__imp__sub_83D56190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r11,r11,-280
	ctx.r11.s64 = ctx.r11.s64 + -280;
	// stw r11,-104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D561A4"))) PPC_WEAK_FUNC(sub_83D561A4);
PPC_FUNC_IMPL(__imp__sub_83D561A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D561A8"))) PPC_WEAK_FUNC(sub_83D561A8);
PPC_FUNC_IMPL(__imp__sub_83D561A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r11,r11,-280
	ctx.r11.s64 = ctx.r11.s64 + -280;
	// stw r11,-96(r10)
	PPC_STORE_U32(ctx.r10.u32 + -96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D561BC"))) PPC_WEAK_FUNC(sub_83D561BC);
PPC_FUNC_IMPL(__imp__sub_83D561BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D561C0"))) PPC_WEAK_FUNC(sub_83D561C0);
PPC_FUNC_IMPL(__imp__sub_83D561C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r11,r11,-280
	ctx.r11.s64 = ctx.r11.s64 + -280;
	// stw r11,-88(r10)
	PPC_STORE_U32(ctx.r10.u32 + -88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D561D4"))) PPC_WEAK_FUNC(sub_83D561D4);
PPC_FUNC_IMPL(__imp__sub_83D561D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D561D8"))) PPC_WEAK_FUNC(sub_83D561D8);
PPC_FUNC_IMPL(__imp__sub_83D561D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,2353
	ctx.r3.s64 = ctx.r11.s64 + 2353;
	// b 0x831cc470
	sub_831CC470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D561E4"))) PPC_WEAK_FUNC(sub_83D561E4);
PPC_FUNC_IMPL(__imp__sub_83D561E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D561E8"))) PPC_WEAK_FUNC(sub_83D561E8);
PPC_FUNC_IMPL(__imp__sub_83D561E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r10,2448
	ctx.r11.s64 = ctx.r10.s64 + 2448;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r8,15324
	ctx.r8.s64 = ctx.r8.s64 + 15324;
	// lwz r10,2448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2448);
	// addi r9,r9,15320
	ctx.r9.s64 = ctx.r9.s64 + 15320;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// b 0x831ccf00
	sub_831CCF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56218"))) PPC_WEAK_FUNC(sub_83D56218);
PPC_FUNC_IMPL(__imp__sub_83D56218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,2356
	ctx.r3.s64 = ctx.r11.s64 + 2356;
	// b 0x82477190
	sub_82477190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56224"))) PPC_WEAK_FUNC(sub_83D56224);
PPC_FUNC_IMPL(__imp__sub_83D56224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56228"))) PPC_WEAK_FUNC(sub_83D56228);
PPC_FUNC_IMPL(__imp__sub_83D56228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,2600
	ctx.r3.s64 = ctx.r11.s64 + 2600;
	// b 0x831cc470
	sub_831CC470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56234"))) PPC_WEAK_FUNC(sub_83D56234);
PPC_FUNC_IMPL(__imp__sub_83D56234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56238"))) PPC_WEAK_FUNC(sub_83D56238);
PPC_FUNC_IMPL(__imp__sub_83D56238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,2601
	ctx.r3.s64 = ctx.r11.s64 + 2601;
	// b 0x831cda40
	sub_831CDA40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56244"))) PPC_WEAK_FUNC(sub_83D56244);
PPC_FUNC_IMPL(__imp__sub_83D56244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56248"))) PPC_WEAK_FUNC(sub_83D56248);
PPC_FUNC_IMPL(__imp__sub_83D56248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,-29536
	ctx.r3.s64 = ctx.r11.s64 + -29536;
	// b 0x832c2fb8
	sub_832C2FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56254"))) PPC_WEAK_FUNC(sub_83D56254);
PPC_FUNC_IMPL(__imp__sub_83D56254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56258"))) PPC_WEAK_FUNC(sub_83D56258);
PPC_FUNC_IMPL(__imp__sub_83D56258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// addi r11,r11,-17756
	ctx.r11.s64 = ctx.r11.s64 + -17756;
	// stw r11,1444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5626C"))) PPC_WEAK_FUNC(sub_83D5626C);
PPC_FUNC_IMPL(__imp__sub_83D5626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56270"))) PPC_WEAK_FUNC(sub_83D56270);
PPC_FUNC_IMPL(__imp__sub_83D56270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// b 0x82588208
	sub_82588208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5627C"))) PPC_WEAK_FUNC(sub_83D5627C);
PPC_FUNC_IMPL(__imp__sub_83D5627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56280"))) PPC_WEAK_FUNC(sub_83D56280);
PPC_FUNC_IMPL(__imp__sub_83D56280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,2232
	ctx.r3.s64 = ctx.r11.s64 + 2232;
	// b 0x8330ce78
	sub_8330CE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5628C"))) PPC_WEAK_FUNC(sub_83D5628C);
PPC_FUNC_IMPL(__imp__sub_83D5628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56290"))) PPC_WEAK_FUNC(sub_83D56290);
PPC_FUNC_IMPL(__imp__sub_83D56290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,2248
	ctx.r3.s64 = ctx.r11.s64 + 2248;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5629C"))) PPC_WEAK_FUNC(sub_83D5629C);
PPC_FUNC_IMPL(__imp__sub_83D5629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D562A0"))) PPC_WEAK_FUNC(sub_83D562A0);
PPC_FUNC_IMPL(__imp__sub_83D562A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,2728
	ctx.r3.s64 = ctx.r11.s64 + 2728;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D562AC"))) PPC_WEAK_FUNC(sub_83D562AC);
PPC_FUNC_IMPL(__imp__sub_83D562AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D562B0"))) PPC_WEAK_FUNC(sub_83D562B0);
PPC_FUNC_IMPL(__imp__sub_83D562B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,2488
	ctx.r3.s64 = ctx.r11.s64 + 2488;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D562BC"))) PPC_WEAK_FUNC(sub_83D562BC);
PPC_FUNC_IMPL(__imp__sub_83D562BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D562C0"))) PPC_WEAK_FUNC(sub_83D562C0);
PPC_FUNC_IMPL(__imp__sub_83D562C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,2744
	ctx.r3.s64 = ctx.r11.s64 + 2744;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D562CC"))) PPC_WEAK_FUNC(sub_83D562CC);
PPC_FUNC_IMPL(__imp__sub_83D562CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D562D0"))) PPC_WEAK_FUNC(sub_83D562D0);
PPC_FUNC_IMPL(__imp__sub_83D562D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,2984
	ctx.r3.s64 = ctx.r11.s64 + 2984;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D562DC"))) PPC_WEAK_FUNC(sub_83D562DC);
PPC_FUNC_IMPL(__imp__sub_83D562DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D562E0"))) PPC_WEAK_FUNC(sub_83D562E0);
PPC_FUNC_IMPL(__imp__sub_83D562E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D562EC"))) PPC_WEAK_FUNC(sub_83D562EC);
PPC_FUNC_IMPL(__imp__sub_83D562EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D562F0"))) PPC_WEAK_FUNC(sub_83D562F0);
PPC_FUNC_IMPL(__imp__sub_83D562F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,3488
	ctx.r3.s64 = ctx.r11.s64 + 3488;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D562FC"))) PPC_WEAK_FUNC(sub_83D562FC);
PPC_FUNC_IMPL(__imp__sub_83D562FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56300"))) PPC_WEAK_FUNC(sub_83D56300);
PPC_FUNC_IMPL(__imp__sub_83D56300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,3728
	ctx.r3.s64 = ctx.r11.s64 + 3728;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5630C"))) PPC_WEAK_FUNC(sub_83D5630C);
PPC_FUNC_IMPL(__imp__sub_83D5630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56310"))) PPC_WEAK_FUNC(sub_83D56310);
PPC_FUNC_IMPL(__imp__sub_83D56310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,3968
	ctx.r3.s64 = ctx.r11.s64 + 3968;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5631C"))) PPC_WEAK_FUNC(sub_83D5631C);
PPC_FUNC_IMPL(__imp__sub_83D5631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56320"))) PPC_WEAK_FUNC(sub_83D56320);
PPC_FUNC_IMPL(__imp__sub_83D56320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,4208
	ctx.r3.s64 = ctx.r11.s64 + 4208;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5632C"))) PPC_WEAK_FUNC(sub_83D5632C);
PPC_FUNC_IMPL(__imp__sub_83D5632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56330"))) PPC_WEAK_FUNC(sub_83D56330);
PPC_FUNC_IMPL(__imp__sub_83D56330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,4448
	ctx.r3.s64 = ctx.r11.s64 + 4448;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5633C"))) PPC_WEAK_FUNC(sub_83D5633C);
PPC_FUNC_IMPL(__imp__sub_83D5633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56340"))) PPC_WEAK_FUNC(sub_83D56340);
PPC_FUNC_IMPL(__imp__sub_83D56340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5634C"))) PPC_WEAK_FUNC(sub_83D5634C);
PPC_FUNC_IMPL(__imp__sub_83D5634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56350"))) PPC_WEAK_FUNC(sub_83D56350);
PPC_FUNC_IMPL(__imp__sub_83D56350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5635C"))) PPC_WEAK_FUNC(sub_83D5635C);
PPC_FUNC_IMPL(__imp__sub_83D5635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56360"))) PPC_WEAK_FUNC(sub_83D56360);
PPC_FUNC_IMPL(__imp__sub_83D56360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,5168
	ctx.r3.s64 = ctx.r11.s64 + 5168;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5636C"))) PPC_WEAK_FUNC(sub_83D5636C);
PPC_FUNC_IMPL(__imp__sub_83D5636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56370"))) PPC_WEAK_FUNC(sub_83D56370);
PPC_FUNC_IMPL(__imp__sub_83D56370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5637C"))) PPC_WEAK_FUNC(sub_83D5637C);
PPC_FUNC_IMPL(__imp__sub_83D5637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56380"))) PPC_WEAK_FUNC(sub_83D56380);
PPC_FUNC_IMPL(__imp__sub_83D56380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,5648
	ctx.r3.s64 = ctx.r11.s64 + 5648;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5638C"))) PPC_WEAK_FUNC(sub_83D5638C);
PPC_FUNC_IMPL(__imp__sub_83D5638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56390"))) PPC_WEAK_FUNC(sub_83D56390);
PPC_FUNC_IMPL(__imp__sub_83D56390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r11,r11,23476
	ctx.r11.s64 = ctx.r11.s64 + 23476;
	// stw r11,5884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D563A4"))) PPC_WEAK_FUNC(sub_83D563A4);
PPC_FUNC_IMPL(__imp__sub_83D563A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D563A8"))) PPC_WEAK_FUNC(sub_83D563A8);
PPC_FUNC_IMPL(__imp__sub_83D563A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,5896
	ctx.r3.s64 = ctx.r11.s64 + 5896;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D563B4"))) PPC_WEAK_FUNC(sub_83D563B4);
PPC_FUNC_IMPL(__imp__sub_83D563B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D563B8"))) PPC_WEAK_FUNC(sub_83D563B8);
PPC_FUNC_IMPL(__imp__sub_83D563B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,6136
	ctx.r3.s64 = ctx.r11.s64 + 6136;
	// b 0x8241f7e0
	sub_8241F7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D563C4"))) PPC_WEAK_FUNC(sub_83D563C4);
PPC_FUNC_IMPL(__imp__sub_83D563C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D563C8"))) PPC_WEAK_FUNC(sub_83D563C8);
PPC_FUNC_IMPL(__imp__sub_83D563C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// b 0x82588208
	sub_82588208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D563D4"))) PPC_WEAK_FUNC(sub_83D563D4);
PPC_FUNC_IMPL(__imp__sub_83D563D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D563D8"))) PPC_WEAK_FUNC(sub_83D563D8);
PPC_FUNC_IMPL(__imp__sub_83D563D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,6296
	ctx.r3.s64 = ctx.r11.s64 + 6296;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D563E8"))) PPC_WEAK_FUNC(sub_83D563E8);
PPC_FUNC_IMPL(__imp__sub_83D563E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// addi r11,r11,-10760
	ctx.r11.s64 = ctx.r11.s64 + -10760;
	// stw r11,2712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D563FC"))) PPC_WEAK_FUNC(sub_83D563FC);
PPC_FUNC_IMPL(__imp__sub_83D563FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56400"))) PPC_WEAK_FUNC(sub_83D56400);
PPC_FUNC_IMPL(__imp__sub_83D56400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// addi r11,r11,-12984
	ctx.r11.s64 = ctx.r11.s64 + -12984;
	// stw r11,2756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2756, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D56414"))) PPC_WEAK_FUNC(sub_83D56414);
PPC_FUNC_IMPL(__imp__sub_83D56414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56418"))) PPC_WEAK_FUNC(sub_83D56418);
PPC_FUNC_IMPL(__imp__sub_83D56418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// addi r11,r11,-10560
	ctx.r11.s64 = ctx.r11.s64 + -10560;
	// stw r11,2800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D5642C"))) PPC_WEAK_FUNC(sub_83D5642C);
PPC_FUNC_IMPL(__imp__sub_83D5642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56430"))) PPC_WEAK_FUNC(sub_83D56430);
PPC_FUNC_IMPL(__imp__sub_83D56430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,6408
	ctx.r3.s64 = ctx.r11.s64 + 6408;
	// b 0x83b3f898
	sub_83B3F898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5643C"))) PPC_WEAK_FUNC(sub_83D5643C);
PPC_FUNC_IMPL(__imp__sub_83D5643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56440"))) PPC_WEAK_FUNC(sub_83D56440);
PPC_FUNC_IMPL(__imp__sub_83D56440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,6392
	ctx.r3.s64 = ctx.r11.s64 + 6392;
	// b 0x83397780
	sub_83397780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5644C"))) PPC_WEAK_FUNC(sub_83D5644C);
PPC_FUNC_IMPL(__imp__sub_83D5644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56450"))) PPC_WEAK_FUNC(sub_83D56450);
PPC_FUNC_IMPL(__imp__sub_83D56450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,6464
	ctx.r3.s64 = ctx.r11.s64 + 6464;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5645C"))) PPC_WEAK_FUNC(sub_83D5645C);
PPC_FUNC_IMPL(__imp__sub_83D5645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56460"))) PPC_WEAK_FUNC(sub_83D56460);
PPC_FUNC_IMPL(__imp__sub_83D56460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,6704
	ctx.r3.s64 = ctx.r11.s64 + 6704;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5646C"))) PPC_WEAK_FUNC(sub_83D5646C);
PPC_FUNC_IMPL(__imp__sub_83D5646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56470"))) PPC_WEAK_FUNC(sub_83D56470);
PPC_FUNC_IMPL(__imp__sub_83D56470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,6944
	ctx.r3.s64 = ctx.r11.s64 + 6944;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5647C"))) PPC_WEAK_FUNC(sub_83D5647C);
PPC_FUNC_IMPL(__imp__sub_83D5647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56480"))) PPC_WEAK_FUNC(sub_83D56480);
PPC_FUNC_IMPL(__imp__sub_83D56480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7184
	ctx.r3.s64 = ctx.r11.s64 + 7184;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5648C"))) PPC_WEAK_FUNC(sub_83D5648C);
PPC_FUNC_IMPL(__imp__sub_83D5648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56490"))) PPC_WEAK_FUNC(sub_83D56490);
PPC_FUNC_IMPL(__imp__sub_83D56490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7568
	ctx.r3.s64 = ctx.r11.s64 + 7568;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5649C"))) PPC_WEAK_FUNC(sub_83D5649C);
PPC_FUNC_IMPL(__imp__sub_83D5649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D564A0"))) PPC_WEAK_FUNC(sub_83D564A0);
PPC_FUNC_IMPL(__imp__sub_83D564A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D564AC"))) PPC_WEAK_FUNC(sub_83D564AC);
PPC_FUNC_IMPL(__imp__sub_83D564AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D564B0"))) PPC_WEAK_FUNC(sub_83D564B0);
PPC_FUNC_IMPL(__imp__sub_83D564B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D564BC"))) PPC_WEAK_FUNC(sub_83D564BC);
PPC_FUNC_IMPL(__imp__sub_83D564BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D564C0"))) PPC_WEAK_FUNC(sub_83D564C0);
PPC_FUNC_IMPL(__imp__sub_83D564C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7600
	ctx.r3.s64 = ctx.r11.s64 + 7600;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D564CC"))) PPC_WEAK_FUNC(sub_83D564CC);
PPC_FUNC_IMPL(__imp__sub_83D564CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D564D0"))) PPC_WEAK_FUNC(sub_83D564D0);
PPC_FUNC_IMPL(__imp__sub_83D564D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7680
	ctx.r3.s64 = ctx.r11.s64 + 7680;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D564DC"))) PPC_WEAK_FUNC(sub_83D564DC);
PPC_FUNC_IMPL(__imp__sub_83D564DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D564E0"))) PPC_WEAK_FUNC(sub_83D564E0);
PPC_FUNC_IMPL(__imp__sub_83D564E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7760
	ctx.r3.s64 = ctx.r11.s64 + 7760;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D564EC"))) PPC_WEAK_FUNC(sub_83D564EC);
PPC_FUNC_IMPL(__imp__sub_83D564EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D564F0"))) PPC_WEAK_FUNC(sub_83D564F0);
PPC_FUNC_IMPL(__imp__sub_83D564F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7728
	ctx.r3.s64 = ctx.r11.s64 + 7728;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D564FC"))) PPC_WEAK_FUNC(sub_83D564FC);
PPC_FUNC_IMPL(__imp__sub_83D564FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56500"))) PPC_WEAK_FUNC(sub_83D56500);
PPC_FUNC_IMPL(__imp__sub_83D56500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7776
	ctx.r3.s64 = ctx.r11.s64 + 7776;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5650C"))) PPC_WEAK_FUNC(sub_83D5650C);
PPC_FUNC_IMPL(__imp__sub_83D5650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56510"))) PPC_WEAK_FUNC(sub_83D56510);
PPC_FUNC_IMPL(__imp__sub_83D56510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5651C"))) PPC_WEAK_FUNC(sub_83D5651C);
PPC_FUNC_IMPL(__imp__sub_83D5651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56520"))) PPC_WEAK_FUNC(sub_83D56520);
PPC_FUNC_IMPL(__imp__sub_83D56520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7744
	ctx.r3.s64 = ctx.r11.s64 + 7744;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5652C"))) PPC_WEAK_FUNC(sub_83D5652C);
PPC_FUNC_IMPL(__imp__sub_83D5652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56530"))) PPC_WEAK_FUNC(sub_83D56530);
PPC_FUNC_IMPL(__imp__sub_83D56530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7696
	ctx.r3.s64 = ctx.r11.s64 + 7696;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5653C"))) PPC_WEAK_FUNC(sub_83D5653C);
PPC_FUNC_IMPL(__imp__sub_83D5653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56540"))) PPC_WEAK_FUNC(sub_83D56540);
PPC_FUNC_IMPL(__imp__sub_83D56540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7872
	ctx.r3.s64 = ctx.r11.s64 + 7872;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5654C"))) PPC_WEAK_FUNC(sub_83D5654C);
PPC_FUNC_IMPL(__imp__sub_83D5654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56550"))) PPC_WEAK_FUNC(sub_83D56550);
PPC_FUNC_IMPL(__imp__sub_83D56550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7888
	ctx.r3.s64 = ctx.r11.s64 + 7888;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5655C"))) PPC_WEAK_FUNC(sub_83D5655C);
PPC_FUNC_IMPL(__imp__sub_83D5655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56560"))) PPC_WEAK_FUNC(sub_83D56560);
PPC_FUNC_IMPL(__imp__sub_83D56560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7856
	ctx.r3.s64 = ctx.r11.s64 + 7856;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5656C"))) PPC_WEAK_FUNC(sub_83D5656C);
PPC_FUNC_IMPL(__imp__sub_83D5656C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56570"))) PPC_WEAK_FUNC(sub_83D56570);
PPC_FUNC_IMPL(__imp__sub_83D56570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,8144
	ctx.r3.s64 = ctx.r11.s64 + 8144;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5657C"))) PPC_WEAK_FUNC(sub_83D5657C);
PPC_FUNC_IMPL(__imp__sub_83D5657C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56580"))) PPC_WEAK_FUNC(sub_83D56580);
PPC_FUNC_IMPL(__imp__sub_83D56580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,7904
	ctx.r3.s64 = ctx.r11.s64 + 7904;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5658C"))) PPC_WEAK_FUNC(sub_83D5658C);
PPC_FUNC_IMPL(__imp__sub_83D5658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56590"))) PPC_WEAK_FUNC(sub_83D56590);
PPC_FUNC_IMPL(__imp__sub_83D56590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,8400
	ctx.r3.s64 = ctx.r11.s64 + 8400;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5659C"))) PPC_WEAK_FUNC(sub_83D5659C);
PPC_FUNC_IMPL(__imp__sub_83D5659C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D565A0"))) PPC_WEAK_FUNC(sub_83D565A0);
PPC_FUNC_IMPL(__imp__sub_83D565A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D565AC"))) PPC_WEAK_FUNC(sub_83D565AC);
PPC_FUNC_IMPL(__imp__sub_83D565AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D565B0"))) PPC_WEAK_FUNC(sub_83D565B0);
PPC_FUNC_IMPL(__imp__sub_83D565B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,8656
	ctx.r3.s64 = ctx.r11.s64 + 8656;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D565BC"))) PPC_WEAK_FUNC(sub_83D565BC);
PPC_FUNC_IMPL(__imp__sub_83D565BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D565C0"))) PPC_WEAK_FUNC(sub_83D565C0);
PPC_FUNC_IMPL(__imp__sub_83D565C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,8416
	ctx.r3.s64 = ctx.r11.s64 + 8416;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D565CC"))) PPC_WEAK_FUNC(sub_83D565CC);
PPC_FUNC_IMPL(__imp__sub_83D565CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D565D0"))) PPC_WEAK_FUNC(sub_83D565D0);
PPC_FUNC_IMPL(__imp__sub_83D565D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,8672
	ctx.r3.s64 = ctx.r11.s64 + 8672;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D565DC"))) PPC_WEAK_FUNC(sub_83D565DC);
PPC_FUNC_IMPL(__imp__sub_83D565DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D565E0"))) PPC_WEAK_FUNC(sub_83D565E0);
PPC_FUNC_IMPL(__imp__sub_83D565E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,8912
	ctx.r3.s64 = ctx.r11.s64 + 8912;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D565EC"))) PPC_WEAK_FUNC(sub_83D565EC);
PPC_FUNC_IMPL(__imp__sub_83D565EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D565F0"))) PPC_WEAK_FUNC(sub_83D565F0);
PPC_FUNC_IMPL(__imp__sub_83D565F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9152
	ctx.r3.s64 = ctx.r11.s64 + 9152;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D565FC"))) PPC_WEAK_FUNC(sub_83D565FC);
PPC_FUNC_IMPL(__imp__sub_83D565FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56600"))) PPC_WEAK_FUNC(sub_83D56600);
PPC_FUNC_IMPL(__imp__sub_83D56600) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,9404
	ctx.r31.s64 = ctx.r11.s64 + 9404;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82468978
	ctx.lr = 0x83D5662C;
	sub_82468978(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x83D56634;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_83D56648"))) PPC_WEAK_FUNC(sub_83D56648);
PPC_FUNC_IMPL(__imp__sub_83D56648) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,9388
	ctx.r31.s64 = ctx.r11.s64 + 9388;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8330f7a8
	ctx.lr = 0x83D56674;
	sub_8330F7A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8386d088
	ctx.lr = 0x83D5667C;
	sub_8386D088(ctx, base);
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

__attribute__((alias("__imp__sub_83D56690"))) PPC_WEAK_FUNC(sub_83D56690);
PPC_FUNC_IMPL(__imp__sub_83D56690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,9424
	ctx.r3.s64 = ctx.r11.s64 + 9424;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D566A0"))) PPC_WEAK_FUNC(sub_83D566A0);
PPC_FUNC_IMPL(__imp__sub_83D566A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,9432
	ctx.r3.s64 = ctx.r11.s64 + 9432;
	// b 0x82572fa0
	sub_82572FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D566B0"))) PPC_WEAK_FUNC(sub_83D566B0);
PPC_FUNC_IMPL(__imp__sub_83D566B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9872
	ctx.r3.s64 = ctx.r11.s64 + 9872;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D566BC"))) PPC_WEAK_FUNC(sub_83D566BC);
PPC_FUNC_IMPL(__imp__sub_83D566BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D566C0"))) PPC_WEAK_FUNC(sub_83D566C0);
PPC_FUNC_IMPL(__imp__sub_83D566C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9792
	ctx.r3.s64 = ctx.r11.s64 + 9792;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D566CC"))) PPC_WEAK_FUNC(sub_83D566CC);
PPC_FUNC_IMPL(__imp__sub_83D566CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D566D0"))) PPC_WEAK_FUNC(sub_83D566D0);
PPC_FUNC_IMPL(__imp__sub_83D566D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9472
	ctx.r3.s64 = ctx.r11.s64 + 9472;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D566DC"))) PPC_WEAK_FUNC(sub_83D566DC);
PPC_FUNC_IMPL(__imp__sub_83D566DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D566E0"))) PPC_WEAK_FUNC(sub_83D566E0);
PPC_FUNC_IMPL(__imp__sub_83D566E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9456
	ctx.r3.s64 = ctx.r11.s64 + 9456;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D566EC"))) PPC_WEAK_FUNC(sub_83D566EC);
PPC_FUNC_IMPL(__imp__sub_83D566EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D566F0"))) PPC_WEAK_FUNC(sub_83D566F0);
PPC_FUNC_IMPL(__imp__sub_83D566F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9584
	ctx.r3.s64 = ctx.r11.s64 + 9584;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D566FC"))) PPC_WEAK_FUNC(sub_83D566FC);
PPC_FUNC_IMPL(__imp__sub_83D566FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56700"))) PPC_WEAK_FUNC(sub_83D56700);
PPC_FUNC_IMPL(__imp__sub_83D56700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9696
	ctx.r3.s64 = ctx.r11.s64 + 9696;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5670C"))) PPC_WEAK_FUNC(sub_83D5670C);
PPC_FUNC_IMPL(__imp__sub_83D5670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56710"))) PPC_WEAK_FUNC(sub_83D56710);
PPC_FUNC_IMPL(__imp__sub_83D56710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9744
	ctx.r3.s64 = ctx.r11.s64 + 9744;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5671C"))) PPC_WEAK_FUNC(sub_83D5671C);
PPC_FUNC_IMPL(__imp__sub_83D5671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56720"))) PPC_WEAK_FUNC(sub_83D56720);
PPC_FUNC_IMPL(__imp__sub_83D56720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9712
	ctx.r3.s64 = ctx.r11.s64 + 9712;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5672C"))) PPC_WEAK_FUNC(sub_83D5672C);
PPC_FUNC_IMPL(__imp__sub_83D5672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56730"))) PPC_WEAK_FUNC(sub_83D56730);
PPC_FUNC_IMPL(__imp__sub_83D56730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9600
	ctx.r3.s64 = ctx.r11.s64 + 9600;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5673C"))) PPC_WEAK_FUNC(sub_83D5673C);
PPC_FUNC_IMPL(__imp__sub_83D5673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56740"))) PPC_WEAK_FUNC(sub_83D56740);
PPC_FUNC_IMPL(__imp__sub_83D56740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9536
	ctx.r3.s64 = ctx.r11.s64 + 9536;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5674C"))) PPC_WEAK_FUNC(sub_83D5674C);
PPC_FUNC_IMPL(__imp__sub_83D5674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56750"))) PPC_WEAK_FUNC(sub_83D56750);
PPC_FUNC_IMPL(__imp__sub_83D56750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9520
	ctx.r3.s64 = ctx.r11.s64 + 9520;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5675C"))) PPC_WEAK_FUNC(sub_83D5675C);
PPC_FUNC_IMPL(__imp__sub_83D5675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56760"))) PPC_WEAK_FUNC(sub_83D56760);
PPC_FUNC_IMPL(__imp__sub_83D56760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5676C"))) PPC_WEAK_FUNC(sub_83D5676C);
PPC_FUNC_IMPL(__imp__sub_83D5676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56770"))) PPC_WEAK_FUNC(sub_83D56770);
PPC_FUNC_IMPL(__imp__sub_83D56770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9488
	ctx.r3.s64 = ctx.r11.s64 + 9488;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5677C"))) PPC_WEAK_FUNC(sub_83D5677C);
PPC_FUNC_IMPL(__imp__sub_83D5677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56780"))) PPC_WEAK_FUNC(sub_83D56780);
PPC_FUNC_IMPL(__imp__sub_83D56780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9808
	ctx.r3.s64 = ctx.r11.s64 + 9808;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5678C"))) PPC_WEAK_FUNC(sub_83D5678C);
PPC_FUNC_IMPL(__imp__sub_83D5678C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56790"))) PPC_WEAK_FUNC(sub_83D56790);
PPC_FUNC_IMPL(__imp__sub_83D56790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9776
	ctx.r3.s64 = ctx.r11.s64 + 9776;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5679C"))) PPC_WEAK_FUNC(sub_83D5679C);
PPC_FUNC_IMPL(__imp__sub_83D5679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D567A0"))) PPC_WEAK_FUNC(sub_83D567A0);
PPC_FUNC_IMPL(__imp__sub_83D567A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9680
	ctx.r3.s64 = ctx.r11.s64 + 9680;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D567AC"))) PPC_WEAK_FUNC(sub_83D567AC);
PPC_FUNC_IMPL(__imp__sub_83D567AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D567B0"))) PPC_WEAK_FUNC(sub_83D567B0);
PPC_FUNC_IMPL(__imp__sub_83D567B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9568
	ctx.r3.s64 = ctx.r11.s64 + 9568;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D567BC"))) PPC_WEAK_FUNC(sub_83D567BC);
PPC_FUNC_IMPL(__imp__sub_83D567BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D567C0"))) PPC_WEAK_FUNC(sub_83D567C0);
PPC_FUNC_IMPL(__imp__sub_83D567C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9504
	ctx.r3.s64 = ctx.r11.s64 + 9504;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D567CC"))) PPC_WEAK_FUNC(sub_83D567CC);
PPC_FUNC_IMPL(__imp__sub_83D567CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D567D0"))) PPC_WEAK_FUNC(sub_83D567D0);
PPC_FUNC_IMPL(__imp__sub_83D567D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9840
	ctx.r3.s64 = ctx.r11.s64 + 9840;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D567DC"))) PPC_WEAK_FUNC(sub_83D567DC);
PPC_FUNC_IMPL(__imp__sub_83D567DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D567E0"))) PPC_WEAK_FUNC(sub_83D567E0);
PPC_FUNC_IMPL(__imp__sub_83D567E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9856
	ctx.r3.s64 = ctx.r11.s64 + 9856;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D567EC"))) PPC_WEAK_FUNC(sub_83D567EC);
PPC_FUNC_IMPL(__imp__sub_83D567EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D567F0"))) PPC_WEAK_FUNC(sub_83D567F0);
PPC_FUNC_IMPL(__imp__sub_83D567F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9632
	ctx.r3.s64 = ctx.r11.s64 + 9632;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D567FC"))) PPC_WEAK_FUNC(sub_83D567FC);
PPC_FUNC_IMPL(__imp__sub_83D567FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56800"))) PPC_WEAK_FUNC(sub_83D56800);
PPC_FUNC_IMPL(__imp__sub_83D56800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9616
	ctx.r3.s64 = ctx.r11.s64 + 9616;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5680C"))) PPC_WEAK_FUNC(sub_83D5680C);
PPC_FUNC_IMPL(__imp__sub_83D5680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56810"))) PPC_WEAK_FUNC(sub_83D56810);
PPC_FUNC_IMPL(__imp__sub_83D56810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9728
	ctx.r3.s64 = ctx.r11.s64 + 9728;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5681C"))) PPC_WEAK_FUNC(sub_83D5681C);
PPC_FUNC_IMPL(__imp__sub_83D5681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56820"))) PPC_WEAK_FUNC(sub_83D56820);
PPC_FUNC_IMPL(__imp__sub_83D56820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9824
	ctx.r3.s64 = ctx.r11.s64 + 9824;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5682C"))) PPC_WEAK_FUNC(sub_83D5682C);
PPC_FUNC_IMPL(__imp__sub_83D5682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56830"))) PPC_WEAK_FUNC(sub_83D56830);
PPC_FUNC_IMPL(__imp__sub_83D56830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9648
	ctx.r3.s64 = ctx.r11.s64 + 9648;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5683C"))) PPC_WEAK_FUNC(sub_83D5683C);
PPC_FUNC_IMPL(__imp__sub_83D5683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56840"))) PPC_WEAK_FUNC(sub_83D56840);
PPC_FUNC_IMPL(__imp__sub_83D56840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9760
	ctx.r3.s64 = ctx.r11.s64 + 9760;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5684C"))) PPC_WEAK_FUNC(sub_83D5684C);
PPC_FUNC_IMPL(__imp__sub_83D5684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56850"))) PPC_WEAK_FUNC(sub_83D56850);
PPC_FUNC_IMPL(__imp__sub_83D56850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9664
	ctx.r3.s64 = ctx.r11.s64 + 9664;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5685C"))) PPC_WEAK_FUNC(sub_83D5685C);
PPC_FUNC_IMPL(__imp__sub_83D5685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56860"))) PPC_WEAK_FUNC(sub_83D56860);
PPC_FUNC_IMPL(__imp__sub_83D56860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,9888
	ctx.r3.s64 = ctx.r11.s64 + 9888;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5686C"))) PPC_WEAK_FUNC(sub_83D5686C);
PPC_FUNC_IMPL(__imp__sub_83D5686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56870"))) PPC_WEAK_FUNC(sub_83D56870);
PPC_FUNC_IMPL(__imp__sub_83D56870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,10152
	ctx.r3.s64 = ctx.r11.s64 + 10152;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5687C"))) PPC_WEAK_FUNC(sub_83D5687C);
PPC_FUNC_IMPL(__imp__sub_83D5687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56880"))) PPC_WEAK_FUNC(sub_83D56880);
PPC_FUNC_IMPL(__imp__sub_83D56880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,10136
	ctx.r3.s64 = ctx.r11.s64 + 10136;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5688C"))) PPC_WEAK_FUNC(sub_83D5688C);
PPC_FUNC_IMPL(__imp__sub_83D5688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56890"))) PPC_WEAK_FUNC(sub_83D56890);
PPC_FUNC_IMPL(__imp__sub_83D56890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,10168
	ctx.r3.s64 = ctx.r11.s64 + 10168;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5689C"))) PPC_WEAK_FUNC(sub_83D5689C);
PPC_FUNC_IMPL(__imp__sub_83D5689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D568A0"))) PPC_WEAK_FUNC(sub_83D568A0);
PPC_FUNC_IMPL(__imp__sub_83D568A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,10184
	ctx.r3.s64 = ctx.r11.s64 + 10184;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D568AC"))) PPC_WEAK_FUNC(sub_83D568AC);
PPC_FUNC_IMPL(__imp__sub_83D568AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D568B0"))) PPC_WEAK_FUNC(sub_83D568B0);
PPC_FUNC_IMPL(__imp__sub_83D568B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12136
	ctx.r3.s64 = ctx.r11.s64 + 12136;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D568BC"))) PPC_WEAK_FUNC(sub_83D568BC);
PPC_FUNC_IMPL(__imp__sub_83D568BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D568C0"))) PPC_WEAK_FUNC(sub_83D568C0);
PPC_FUNC_IMPL(__imp__sub_83D568C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12152
	ctx.r3.s64 = ctx.r11.s64 + 12152;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D568CC"))) PPC_WEAK_FUNC(sub_83D568CC);
PPC_FUNC_IMPL(__imp__sub_83D568CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D568D0"))) PPC_WEAK_FUNC(sub_83D568D0);
PPC_FUNC_IMPL(__imp__sub_83D568D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12184
	ctx.r3.s64 = ctx.r11.s64 + 12184;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D568DC"))) PPC_WEAK_FUNC(sub_83D568DC);
PPC_FUNC_IMPL(__imp__sub_83D568DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D568E0"))) PPC_WEAK_FUNC(sub_83D568E0);
PPC_FUNC_IMPL(__imp__sub_83D568E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12104
	ctx.r3.s64 = ctx.r11.s64 + 12104;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D568EC"))) PPC_WEAK_FUNC(sub_83D568EC);
PPC_FUNC_IMPL(__imp__sub_83D568EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D568F0"))) PPC_WEAK_FUNC(sub_83D568F0);
PPC_FUNC_IMPL(__imp__sub_83D568F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12120
	ctx.r3.s64 = ctx.r11.s64 + 12120;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D568FC"))) PPC_WEAK_FUNC(sub_83D568FC);
PPC_FUNC_IMPL(__imp__sub_83D568FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56900"))) PPC_WEAK_FUNC(sub_83D56900);
PPC_FUNC_IMPL(__imp__sub_83D56900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12168
	ctx.r3.s64 = ctx.r11.s64 + 12168;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5690C"))) PPC_WEAK_FUNC(sub_83D5690C);
PPC_FUNC_IMPL(__imp__sub_83D5690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56910"))) PPC_WEAK_FUNC(sub_83D56910);
PPC_FUNC_IMPL(__imp__sub_83D56910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,10424
	ctx.r3.s64 = ctx.r11.s64 + 10424;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5691C"))) PPC_WEAK_FUNC(sub_83D5691C);
PPC_FUNC_IMPL(__imp__sub_83D5691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56920"))) PPC_WEAK_FUNC(sub_83D56920);
PPC_FUNC_IMPL(__imp__sub_83D56920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,10664
	ctx.r3.s64 = ctx.r11.s64 + 10664;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5692C"))) PPC_WEAK_FUNC(sub_83D5692C);
PPC_FUNC_IMPL(__imp__sub_83D5692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56930"))) PPC_WEAK_FUNC(sub_83D56930);
PPC_FUNC_IMPL(__imp__sub_83D56930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,10904
	ctx.r3.s64 = ctx.r11.s64 + 10904;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5693C"))) PPC_WEAK_FUNC(sub_83D5693C);
PPC_FUNC_IMPL(__imp__sub_83D5693C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56940"))) PPC_WEAK_FUNC(sub_83D56940);
PPC_FUNC_IMPL(__imp__sub_83D56940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,11144
	ctx.r3.s64 = ctx.r11.s64 + 11144;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5694C"))) PPC_WEAK_FUNC(sub_83D5694C);
PPC_FUNC_IMPL(__imp__sub_83D5694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56950"))) PPC_WEAK_FUNC(sub_83D56950);
PPC_FUNC_IMPL(__imp__sub_83D56950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,11384
	ctx.r3.s64 = ctx.r11.s64 + 11384;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5695C"))) PPC_WEAK_FUNC(sub_83D5695C);
PPC_FUNC_IMPL(__imp__sub_83D5695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56960"))) PPC_WEAK_FUNC(sub_83D56960);
PPC_FUNC_IMPL(__imp__sub_83D56960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,11624
	ctx.r3.s64 = ctx.r11.s64 + 11624;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5696C"))) PPC_WEAK_FUNC(sub_83D5696C);
PPC_FUNC_IMPL(__imp__sub_83D5696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56970"))) PPC_WEAK_FUNC(sub_83D56970);
PPC_FUNC_IMPL(__imp__sub_83D56970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,11864
	ctx.r3.s64 = ctx.r11.s64 + 11864;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5697C"))) PPC_WEAK_FUNC(sub_83D5697C);
PPC_FUNC_IMPL(__imp__sub_83D5697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56980"))) PPC_WEAK_FUNC(sub_83D56980);
PPC_FUNC_IMPL(__imp__sub_83D56980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5698C"))) PPC_WEAK_FUNC(sub_83D5698C);
PPC_FUNC_IMPL(__imp__sub_83D5698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56990"))) PPC_WEAK_FUNC(sub_83D56990);
PPC_FUNC_IMPL(__imp__sub_83D56990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D5699C"))) PPC_WEAK_FUNC(sub_83D5699C);
PPC_FUNC_IMPL(__imp__sub_83D5699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D569A0"))) PPC_WEAK_FUNC(sub_83D569A0);
PPC_FUNC_IMPL(__imp__sub_83D569A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12248
	ctx.r3.s64 = ctx.r11.s64 + 12248;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D569AC"))) PPC_WEAK_FUNC(sub_83D569AC);
PPC_FUNC_IMPL(__imp__sub_83D569AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D569B0"))) PPC_WEAK_FUNC(sub_83D569B0);
PPC_FUNC_IMPL(__imp__sub_83D569B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12232
	ctx.r3.s64 = ctx.r11.s64 + 12232;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D569BC"))) PPC_WEAK_FUNC(sub_83D569BC);
PPC_FUNC_IMPL(__imp__sub_83D569BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D569C0"))) PPC_WEAK_FUNC(sub_83D569C0);
PPC_FUNC_IMPL(__imp__sub_83D569C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12200
	ctx.r3.s64 = ctx.r11.s64 + 12200;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D569CC"))) PPC_WEAK_FUNC(sub_83D569CC);
PPC_FUNC_IMPL(__imp__sub_83D569CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D569D0"))) PPC_WEAK_FUNC(sub_83D569D0);
PPC_FUNC_IMPL(__imp__sub_83D569D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D569DC"))) PPC_WEAK_FUNC(sub_83D569DC);
PPC_FUNC_IMPL(__imp__sub_83D569DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D569E0"))) PPC_WEAK_FUNC(sub_83D569E0);
PPC_FUNC_IMPL(__imp__sub_83D569E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12520
	ctx.r3.s64 = ctx.r11.s64 + 12520;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D569EC"))) PPC_WEAK_FUNC(sub_83D569EC);
PPC_FUNC_IMPL(__imp__sub_83D569EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D569F0"))) PPC_WEAK_FUNC(sub_83D569F0);
PPC_FUNC_IMPL(__imp__sub_83D569F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D569FC"))) PPC_WEAK_FUNC(sub_83D569FC);
PPC_FUNC_IMPL(__imp__sub_83D569FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56A00"))) PPC_WEAK_FUNC(sub_83D56A00);
PPC_FUNC_IMPL(__imp__sub_83D56A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,12760
	ctx.r3.s64 = ctx.r11.s64 + 12760;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56A0C"))) PPC_WEAK_FUNC(sub_83D56A0C);
PPC_FUNC_IMPL(__imp__sub_83D56A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56A10"))) PPC_WEAK_FUNC(sub_83D56A10);
PPC_FUNC_IMPL(__imp__sub_83D56A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,13256
	ctx.r3.s64 = ctx.r11.s64 + 13256;
	// b 0x82573c50
	sub_82573C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56A1C"))) PPC_WEAK_FUNC(sub_83D56A1C);
PPC_FUNC_IMPL(__imp__sub_83D56A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56A20"))) PPC_WEAK_FUNC(sub_83D56A20);
PPC_FUNC_IMPL(__imp__sub_83D56A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,13016
	ctx.r3.s64 = ctx.r11.s64 + 13016;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56A2C"))) PPC_WEAK_FUNC(sub_83D56A2C);
PPC_FUNC_IMPL(__imp__sub_83D56A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56A30"))) PPC_WEAK_FUNC(sub_83D56A30);
PPC_FUNC_IMPL(__imp__sub_83D56A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,13272
	ctx.r3.s64 = ctx.r11.s64 + 13272;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56A3C"))) PPC_WEAK_FUNC(sub_83D56A3C);
PPC_FUNC_IMPL(__imp__sub_83D56A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56A40"))) PPC_WEAK_FUNC(sub_83D56A40);
PPC_FUNC_IMPL(__imp__sub_83D56A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D56A4C"))) PPC_WEAK_FUNC(sub_83D56A4C);
PPC_FUNC_IMPL(__imp__sub_83D56A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D56A50"))) PPC_WEAK_FUNC(sub_83D56A50);
PPC_FUNC_IMPL(__imp__sub_83D56A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,13752
	ctx.r3.s64 = ctx.r11.s64 + 13752;
	// b 0x824781c8
	sub_824781C8(ctx, base);
	return;
}

