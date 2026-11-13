#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CE4FD4"))) PPC_WEAK_FUNC(sub_83CE4FD4);
PPC_FUNC_IMPL(__imp__sub_83CE4FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4FD8"))) PPC_WEAK_FUNC(sub_83CE4FD8);
PPC_FUNC_IMPL(__imp__sub_83CE4FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5568
	ctx.r3.s64 = ctx.r11.s64 + 5568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4FE4"))) PPC_WEAK_FUNC(sub_83CE4FE4);
PPC_FUNC_IMPL(__imp__sub_83CE4FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4FE8"))) PPC_WEAK_FUNC(sub_83CE4FE8);
PPC_FUNC_IMPL(__imp__sub_83CE4FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5576
	ctx.r3.s64 = ctx.r11.s64 + 5576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4FF4"))) PPC_WEAK_FUNC(sub_83CE4FF4);
PPC_FUNC_IMPL(__imp__sub_83CE4FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4FF8"))) PPC_WEAK_FUNC(sub_83CE4FF8);
PPC_FUNC_IMPL(__imp__sub_83CE4FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15520
	ctx.r7.s64 = ctx.r8.s64 + -15520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15520(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5020"))) PPC_WEAK_FUNC(sub_83CE5020);
PPC_FUNC_IMPL(__imp__sub_83CE5020) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,25896
	ctx.r6.s64 = ctx.r7.s64 + 25896;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15520);
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
	// std r9,25896(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25896, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5068"))) PPC_WEAK_FUNC(sub_83CE5068);
PPC_FUNC_IMPL(__imp__sub_83CE5068) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-15536
	ctx.r3.s64 = ctx.r11.s64 + -15536;
	// bl 0x83523120
	ctx.lr = 0x83CE5080;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5584
	ctx.r3.s64 = ctx.r10.s64 + 5584;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE508C;
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

__attribute__((alias("__imp__sub_83CE509C"))) PPC_WEAK_FUNC(sub_83CE509C);
PPC_FUNC_IMPL(__imp__sub_83CE509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE50A0"))) PPC_WEAK_FUNC(sub_83CE50A0);
PPC_FUNC_IMPL(__imp__sub_83CE50A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5600
	ctx.r3.s64 = ctx.r11.s64 + 5600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE50AC"))) PPC_WEAK_FUNC(sub_83CE50AC);
PPC_FUNC_IMPL(__imp__sub_83CE50AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE50B0"))) PPC_WEAK_FUNC(sub_83CE50B0);
PPC_FUNC_IMPL(__imp__sub_83CE50B0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-15512
	ctx.r3.s64 = ctx.r11.s64 + -15512;
	// bl 0x8259af80
	ctx.lr = 0x83CE50C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5616
	ctx.r3.s64 = ctx.r10.s64 + 5616;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE50D4;
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

__attribute__((alias("__imp__sub_83CE50E4"))) PPC_WEAK_FUNC(sub_83CE50E4);
PPC_FUNC_IMPL(__imp__sub_83CE50E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE50E8"))) PPC_WEAK_FUNC(sub_83CE50E8);
PPC_FUNC_IMPL(__imp__sub_83CE50E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15532
	ctx.r11.s64 = ctx.r8.s64 + -15532;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,25872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25872);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5608
	ctx.r3.s64 = ctx.r6.s64 + 5608;
	// stw r10,-15532(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15532, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5118"))) PPC_WEAK_FUNC(sub_83CE5118);
PPC_FUNC_IMPL(__imp__sub_83CE5118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5624
	ctx.r3.s64 = ctx.r11.s64 + 5624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5124"))) PPC_WEAK_FUNC(sub_83CE5124);
PPC_FUNC_IMPL(__imp__sub_83CE5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5128"))) PPC_WEAK_FUNC(sub_83CE5128);
PPC_FUNC_IMPL(__imp__sub_83CE5128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5632
	ctx.r3.s64 = ctx.r11.s64 + 5632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5134"))) PPC_WEAK_FUNC(sub_83CE5134);
PPC_FUNC_IMPL(__imp__sub_83CE5134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5138"))) PPC_WEAK_FUNC(sub_83CE5138);
PPC_FUNC_IMPL(__imp__sub_83CE5138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5144"))) PPC_WEAK_FUNC(sub_83CE5144);
PPC_FUNC_IMPL(__imp__sub_83CE5144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5148"))) PPC_WEAK_FUNC(sub_83CE5148);
PPC_FUNC_IMPL(__imp__sub_83CE5148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5648
	ctx.r3.s64 = ctx.r11.s64 + 5648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5154"))) PPC_WEAK_FUNC(sub_83CE5154);
PPC_FUNC_IMPL(__imp__sub_83CE5154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5158"))) PPC_WEAK_FUNC(sub_83CE5158);
PPC_FUNC_IMPL(__imp__sub_83CE5158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5656
	ctx.r3.s64 = ctx.r11.s64 + 5656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5164"))) PPC_WEAK_FUNC(sub_83CE5164);
PPC_FUNC_IMPL(__imp__sub_83CE5164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5168"))) PPC_WEAK_FUNC(sub_83CE5168);
PPC_FUNC_IMPL(__imp__sub_83CE5168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5174"))) PPC_WEAK_FUNC(sub_83CE5174);
PPC_FUNC_IMPL(__imp__sub_83CE5174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5178"))) PPC_WEAK_FUNC(sub_83CE5178);
PPC_FUNC_IMPL(__imp__sub_83CE5178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5184"))) PPC_WEAK_FUNC(sub_83CE5184);
PPC_FUNC_IMPL(__imp__sub_83CE5184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5188"))) PPC_WEAK_FUNC(sub_83CE5188);
PPC_FUNC_IMPL(__imp__sub_83CE5188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5680
	ctx.r3.s64 = ctx.r11.s64 + 5680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5194"))) PPC_WEAK_FUNC(sub_83CE5194);
PPC_FUNC_IMPL(__imp__sub_83CE5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5198"))) PPC_WEAK_FUNC(sub_83CE5198);
PPC_FUNC_IMPL(__imp__sub_83CE5198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5688
	ctx.r3.s64 = ctx.r11.s64 + 5688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE51A4"))) PPC_WEAK_FUNC(sub_83CE51A4);
PPC_FUNC_IMPL(__imp__sub_83CE51A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE51A8"))) PPC_WEAK_FUNC(sub_83CE51A8);
PPC_FUNC_IMPL(__imp__sub_83CE51A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5696
	ctx.r3.s64 = ctx.r11.s64 + 5696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE51B4"))) PPC_WEAK_FUNC(sub_83CE51B4);
PPC_FUNC_IMPL(__imp__sub_83CE51B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE51B8"))) PPC_WEAK_FUNC(sub_83CE51B8);
PPC_FUNC_IMPL(__imp__sub_83CE51B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5704
	ctx.r3.s64 = ctx.r11.s64 + 5704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE51C4"))) PPC_WEAK_FUNC(sub_83CE51C4);
PPC_FUNC_IMPL(__imp__sub_83CE51C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE51C8"))) PPC_WEAK_FUNC(sub_83CE51C8);
PPC_FUNC_IMPL(__imp__sub_83CE51C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5712
	ctx.r3.s64 = ctx.r11.s64 + 5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE51D4"))) PPC_WEAK_FUNC(sub_83CE51D4);
PPC_FUNC_IMPL(__imp__sub_83CE51D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE51D8"))) PPC_WEAK_FUNC(sub_83CE51D8);
PPC_FUNC_IMPL(__imp__sub_83CE51D8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-15168
	ctx.r3.s64 = ctx.r11.s64 + -15168;
	// bl 0x83523120
	ctx.lr = 0x83CE51F0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5720
	ctx.r3.s64 = ctx.r10.s64 + 5720;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE51FC;
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

__attribute__((alias("__imp__sub_83CE520C"))) PPC_WEAK_FUNC(sub_83CE520C);
PPC_FUNC_IMPL(__imp__sub_83CE520C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5210"))) PPC_WEAK_FUNC(sub_83CE5210);
PPC_FUNC_IMPL(__imp__sub_83CE5210) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15152
	ctx.r7.s64 = ctx.r8.s64 + -15152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15152(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5238"))) PPC_WEAK_FUNC(sub_83CE5238);
PPC_FUNC_IMPL(__imp__sub_83CE5238) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,26040
	ctx.r6.s64 = ctx.r7.s64 + 26040;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25968(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25968);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15152);
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
	// std r9,26040(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26040, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5280"))) PPC_WEAK_FUNC(sub_83CE5280);
PPC_FUNC_IMPL(__imp__sub_83CE5280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5736
	ctx.r3.s64 = ctx.r11.s64 + 5736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE528C"))) PPC_WEAK_FUNC(sub_83CE528C);
PPC_FUNC_IMPL(__imp__sub_83CE528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5290"))) PPC_WEAK_FUNC(sub_83CE5290);
PPC_FUNC_IMPL(__imp__sub_83CE5290) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-15144
	ctx.r3.s64 = ctx.r11.s64 + -15144;
	// bl 0x8259af80
	ctx.lr = 0x83CE52A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5752
	ctx.r3.s64 = ctx.r10.s64 + 5752;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE52B4;
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

__attribute__((alias("__imp__sub_83CE52C4"))) PPC_WEAK_FUNC(sub_83CE52C4);
PPC_FUNC_IMPL(__imp__sub_83CE52C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE52C8"))) PPC_WEAK_FUNC(sub_83CE52C8);
PPC_FUNC_IMPL(__imp__sub_83CE52C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15164
	ctx.r11.s64 = ctx.r8.s64 + -15164;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,26016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26016);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5744
	ctx.r3.s64 = ctx.r6.s64 + 5744;
	// stw r10,-15164(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15164, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE52F8"))) PPC_WEAK_FUNC(sub_83CE52F8);
PPC_FUNC_IMPL(__imp__sub_83CE52F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5760
	ctx.r3.s64 = ctx.r11.s64 + 5760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5304"))) PPC_WEAK_FUNC(sub_83CE5304);
PPC_FUNC_IMPL(__imp__sub_83CE5304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5308"))) PPC_WEAK_FUNC(sub_83CE5308);
PPC_FUNC_IMPL(__imp__sub_83CE5308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5768
	ctx.r3.s64 = ctx.r11.s64 + 5768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5314"))) PPC_WEAK_FUNC(sub_83CE5314);
PPC_FUNC_IMPL(__imp__sub_83CE5314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5318"))) PPC_WEAK_FUNC(sub_83CE5318);
PPC_FUNC_IMPL(__imp__sub_83CE5318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5776
	ctx.r3.s64 = ctx.r11.s64 + 5776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5324"))) PPC_WEAK_FUNC(sub_83CE5324);
PPC_FUNC_IMPL(__imp__sub_83CE5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5328"))) PPC_WEAK_FUNC(sub_83CE5328);
PPC_FUNC_IMPL(__imp__sub_83CE5328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5784
	ctx.r3.s64 = ctx.r11.s64 + 5784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5334"))) PPC_WEAK_FUNC(sub_83CE5334);
PPC_FUNC_IMPL(__imp__sub_83CE5334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5338"))) PPC_WEAK_FUNC(sub_83CE5338);
PPC_FUNC_IMPL(__imp__sub_83CE5338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5792
	ctx.r3.s64 = ctx.r11.s64 + 5792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5344"))) PPC_WEAK_FUNC(sub_83CE5344);
PPC_FUNC_IMPL(__imp__sub_83CE5344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5348"))) PPC_WEAK_FUNC(sub_83CE5348);
PPC_FUNC_IMPL(__imp__sub_83CE5348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5354"))) PPC_WEAK_FUNC(sub_83CE5354);
PPC_FUNC_IMPL(__imp__sub_83CE5354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5358"))) PPC_WEAK_FUNC(sub_83CE5358);
PPC_FUNC_IMPL(__imp__sub_83CE5358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5808
	ctx.r3.s64 = ctx.r11.s64 + 5808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5364"))) PPC_WEAK_FUNC(sub_83CE5364);
PPC_FUNC_IMPL(__imp__sub_83CE5364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5368"))) PPC_WEAK_FUNC(sub_83CE5368);
PPC_FUNC_IMPL(__imp__sub_83CE5368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5374"))) PPC_WEAK_FUNC(sub_83CE5374);
PPC_FUNC_IMPL(__imp__sub_83CE5374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5378"))) PPC_WEAK_FUNC(sub_83CE5378);
PPC_FUNC_IMPL(__imp__sub_83CE5378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5824
	ctx.r3.s64 = ctx.r11.s64 + 5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5384"))) PPC_WEAK_FUNC(sub_83CE5384);
PPC_FUNC_IMPL(__imp__sub_83CE5384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5388"))) PPC_WEAK_FUNC(sub_83CE5388);
PPC_FUNC_IMPL(__imp__sub_83CE5388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5832
	ctx.r3.s64 = ctx.r11.s64 + 5832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5394"))) PPC_WEAK_FUNC(sub_83CE5394);
PPC_FUNC_IMPL(__imp__sub_83CE5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5398"))) PPC_WEAK_FUNC(sub_83CE5398);
PPC_FUNC_IMPL(__imp__sub_83CE5398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5840
	ctx.r3.s64 = ctx.r11.s64 + 5840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE53A4"))) PPC_WEAK_FUNC(sub_83CE53A4);
PPC_FUNC_IMPL(__imp__sub_83CE53A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE53A8"))) PPC_WEAK_FUNC(sub_83CE53A8);
PPC_FUNC_IMPL(__imp__sub_83CE53A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE53B4"))) PPC_WEAK_FUNC(sub_83CE53B4);
PPC_FUNC_IMPL(__imp__sub_83CE53B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE53B8"))) PPC_WEAK_FUNC(sub_83CE53B8);
PPC_FUNC_IMPL(__imp__sub_83CE53B8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-14800
	ctx.r3.s64 = ctx.r11.s64 + -14800;
	// bl 0x83523120
	ctx.lr = 0x83CE53D0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5856
	ctx.r3.s64 = ctx.r10.s64 + 5856;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE53DC;
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

__attribute__((alias("__imp__sub_83CE53EC"))) PPC_WEAK_FUNC(sub_83CE53EC);
PPC_FUNC_IMPL(__imp__sub_83CE53EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE53F0"))) PPC_WEAK_FUNC(sub_83CE53F0);
PPC_FUNC_IMPL(__imp__sub_83CE53F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14784
	ctx.r7.s64 = ctx.r8.s64 + -14784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14784(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5418"))) PPC_WEAK_FUNC(sub_83CE5418);
PPC_FUNC_IMPL(__imp__sub_83CE5418) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,26200
	ctx.r6.s64 = ctx.r7.s64 + 26200;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26128(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26128);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14784);
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
	// std r9,26200(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26200, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5460"))) PPC_WEAK_FUNC(sub_83CE5460);
PPC_FUNC_IMPL(__imp__sub_83CE5460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5872
	ctx.r3.s64 = ctx.r11.s64 + 5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE546C"))) PPC_WEAK_FUNC(sub_83CE546C);
PPC_FUNC_IMPL(__imp__sub_83CE546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5470"))) PPC_WEAK_FUNC(sub_83CE5470);
PPC_FUNC_IMPL(__imp__sub_83CE5470) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-14776
	ctx.r3.s64 = ctx.r11.s64 + -14776;
	// bl 0x8259af80
	ctx.lr = 0x83CE5488;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5888
	ctx.r3.s64 = ctx.r10.s64 + 5888;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5494;
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

__attribute__((alias("__imp__sub_83CE54A4"))) PPC_WEAK_FUNC(sub_83CE54A4);
PPC_FUNC_IMPL(__imp__sub_83CE54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE54A8"))) PPC_WEAK_FUNC(sub_83CE54A8);
PPC_FUNC_IMPL(__imp__sub_83CE54A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14796
	ctx.r11.s64 = ctx.r8.s64 + -14796;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,26176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26176);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5880
	ctx.r3.s64 = ctx.r6.s64 + 5880;
	// stw r10,-14796(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14796, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE54D8"))) PPC_WEAK_FUNC(sub_83CE54D8);
PPC_FUNC_IMPL(__imp__sub_83CE54D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5896
	ctx.r3.s64 = ctx.r11.s64 + 5896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE54E4"))) PPC_WEAK_FUNC(sub_83CE54E4);
PPC_FUNC_IMPL(__imp__sub_83CE54E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE54E8"))) PPC_WEAK_FUNC(sub_83CE54E8);
PPC_FUNC_IMPL(__imp__sub_83CE54E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5904
	ctx.r3.s64 = ctx.r11.s64 + 5904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE54F4"))) PPC_WEAK_FUNC(sub_83CE54F4);
PPC_FUNC_IMPL(__imp__sub_83CE54F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE54F8"))) PPC_WEAK_FUNC(sub_83CE54F8);
PPC_FUNC_IMPL(__imp__sub_83CE54F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5912
	ctx.r3.s64 = ctx.r11.s64 + 5912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5504"))) PPC_WEAK_FUNC(sub_83CE5504);
PPC_FUNC_IMPL(__imp__sub_83CE5504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5508"))) PPC_WEAK_FUNC(sub_83CE5508);
PPC_FUNC_IMPL(__imp__sub_83CE5508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5920
	ctx.r3.s64 = ctx.r11.s64 + 5920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5514"))) PPC_WEAK_FUNC(sub_83CE5514);
PPC_FUNC_IMPL(__imp__sub_83CE5514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5518"))) PPC_WEAK_FUNC(sub_83CE5518);
PPC_FUNC_IMPL(__imp__sub_83CE5518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5928
	ctx.r3.s64 = ctx.r11.s64 + 5928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5524"))) PPC_WEAK_FUNC(sub_83CE5524);
PPC_FUNC_IMPL(__imp__sub_83CE5524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5528"))) PPC_WEAK_FUNC(sub_83CE5528);
PPC_FUNC_IMPL(__imp__sub_83CE5528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5936
	ctx.r3.s64 = ctx.r11.s64 + 5936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5534"))) PPC_WEAK_FUNC(sub_83CE5534);
PPC_FUNC_IMPL(__imp__sub_83CE5534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5538"))) PPC_WEAK_FUNC(sub_83CE5538);
PPC_FUNC_IMPL(__imp__sub_83CE5538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5944
	ctx.r3.s64 = ctx.r11.s64 + 5944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5544"))) PPC_WEAK_FUNC(sub_83CE5544);
PPC_FUNC_IMPL(__imp__sub_83CE5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5548"))) PPC_WEAK_FUNC(sub_83CE5548);
PPC_FUNC_IMPL(__imp__sub_83CE5548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5952
	ctx.r3.s64 = ctx.r11.s64 + 5952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5554"))) PPC_WEAK_FUNC(sub_83CE5554);
PPC_FUNC_IMPL(__imp__sub_83CE5554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5558"))) PPC_WEAK_FUNC(sub_83CE5558);
PPC_FUNC_IMPL(__imp__sub_83CE5558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5960
	ctx.r3.s64 = ctx.r11.s64 + 5960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5564"))) PPC_WEAK_FUNC(sub_83CE5564);
PPC_FUNC_IMPL(__imp__sub_83CE5564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5568"))) PPC_WEAK_FUNC(sub_83CE5568);
PPC_FUNC_IMPL(__imp__sub_83CE5568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5968
	ctx.r3.s64 = ctx.r11.s64 + 5968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5574"))) PPC_WEAK_FUNC(sub_83CE5574);
PPC_FUNC_IMPL(__imp__sub_83CE5574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5578"))) PPC_WEAK_FUNC(sub_83CE5578);
PPC_FUNC_IMPL(__imp__sub_83CE5578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5976
	ctx.r3.s64 = ctx.r11.s64 + 5976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5584"))) PPC_WEAK_FUNC(sub_83CE5584);
PPC_FUNC_IMPL(__imp__sub_83CE5584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5588"))) PPC_WEAK_FUNC(sub_83CE5588);
PPC_FUNC_IMPL(__imp__sub_83CE5588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,5984
	ctx.r3.s64 = ctx.r11.s64 + 5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5594"))) PPC_WEAK_FUNC(sub_83CE5594);
PPC_FUNC_IMPL(__imp__sub_83CE5594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5598"))) PPC_WEAK_FUNC(sub_83CE5598);
PPC_FUNC_IMPL(__imp__sub_83CE5598) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-14432
	ctx.r3.s64 = ctx.r11.s64 + -14432;
	// bl 0x83523120
	ctx.lr = 0x83CE55B0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,5992
	ctx.r3.s64 = ctx.r10.s64 + 5992;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE55BC;
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

__attribute__((alias("__imp__sub_83CE55CC"))) PPC_WEAK_FUNC(sub_83CE55CC);
PPC_FUNC_IMPL(__imp__sub_83CE55CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE55D0"))) PPC_WEAK_FUNC(sub_83CE55D0);
PPC_FUNC_IMPL(__imp__sub_83CE55D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14416
	ctx.r7.s64 = ctx.r8.s64 + -14416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE55F8"))) PPC_WEAK_FUNC(sub_83CE55F8);
PPC_FUNC_IMPL(__imp__sub_83CE55F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,26396
	ctx.r6.s64 = ctx.r7.s64 + 26396;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26324(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26324);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14416);
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
	// std r9,26396(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26396, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5640"))) PPC_WEAK_FUNC(sub_83CE5640);
PPC_FUNC_IMPL(__imp__sub_83CE5640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE564C"))) PPC_WEAK_FUNC(sub_83CE564C);
PPC_FUNC_IMPL(__imp__sub_83CE564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5650"))) PPC_WEAK_FUNC(sub_83CE5650);
PPC_FUNC_IMPL(__imp__sub_83CE5650) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// bl 0x8259af80
	ctx.lr = 0x83CE5668;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6024
	ctx.r3.s64 = ctx.r10.s64 + 6024;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5674;
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

__attribute__((alias("__imp__sub_83CE5684"))) PPC_WEAK_FUNC(sub_83CE5684);
PPC_FUNC_IMPL(__imp__sub_83CE5684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5688"))) PPC_WEAK_FUNC(sub_83CE5688);
PPC_FUNC_IMPL(__imp__sub_83CE5688) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14428
	ctx.r11.s64 = ctx.r8.s64 + -14428;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,26372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26372);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6016
	ctx.r3.s64 = ctx.r6.s64 + 6016;
	// stw r10,-14428(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14428, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE56B8"))) PPC_WEAK_FUNC(sub_83CE56B8);
PPC_FUNC_IMPL(__imp__sub_83CE56B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6032
	ctx.r3.s64 = ctx.r11.s64 + 6032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE56C4"))) PPC_WEAK_FUNC(sub_83CE56C4);
PPC_FUNC_IMPL(__imp__sub_83CE56C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE56C8"))) PPC_WEAK_FUNC(sub_83CE56C8);
PPC_FUNC_IMPL(__imp__sub_83CE56C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6040
	ctx.r3.s64 = ctx.r11.s64 + 6040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE56D4"))) PPC_WEAK_FUNC(sub_83CE56D4);
PPC_FUNC_IMPL(__imp__sub_83CE56D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE56D8"))) PPC_WEAK_FUNC(sub_83CE56D8);
PPC_FUNC_IMPL(__imp__sub_83CE56D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6048
	ctx.r3.s64 = ctx.r11.s64 + 6048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE56E4"))) PPC_WEAK_FUNC(sub_83CE56E4);
PPC_FUNC_IMPL(__imp__sub_83CE56E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE56E8"))) PPC_WEAK_FUNC(sub_83CE56E8);
PPC_FUNC_IMPL(__imp__sub_83CE56E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6056
	ctx.r3.s64 = ctx.r11.s64 + 6056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE56F4"))) PPC_WEAK_FUNC(sub_83CE56F4);
PPC_FUNC_IMPL(__imp__sub_83CE56F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE56F8"))) PPC_WEAK_FUNC(sub_83CE56F8);
PPC_FUNC_IMPL(__imp__sub_83CE56F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6064
	ctx.r3.s64 = ctx.r11.s64 + 6064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5704"))) PPC_WEAK_FUNC(sub_83CE5704);
PPC_FUNC_IMPL(__imp__sub_83CE5704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5708"))) PPC_WEAK_FUNC(sub_83CE5708);
PPC_FUNC_IMPL(__imp__sub_83CE5708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6072
	ctx.r3.s64 = ctx.r11.s64 + 6072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5714"))) PPC_WEAK_FUNC(sub_83CE5714);
PPC_FUNC_IMPL(__imp__sub_83CE5714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5718"))) PPC_WEAK_FUNC(sub_83CE5718);
PPC_FUNC_IMPL(__imp__sub_83CE5718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6080
	ctx.r3.s64 = ctx.r11.s64 + 6080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5724"))) PPC_WEAK_FUNC(sub_83CE5724);
PPC_FUNC_IMPL(__imp__sub_83CE5724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5728"))) PPC_WEAK_FUNC(sub_83CE5728);
PPC_FUNC_IMPL(__imp__sub_83CE5728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6088
	ctx.r3.s64 = ctx.r11.s64 + 6088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5734"))) PPC_WEAK_FUNC(sub_83CE5734);
PPC_FUNC_IMPL(__imp__sub_83CE5734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5738"))) PPC_WEAK_FUNC(sub_83CE5738);
PPC_FUNC_IMPL(__imp__sub_83CE5738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6096
	ctx.r3.s64 = ctx.r11.s64 + 6096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5744"))) PPC_WEAK_FUNC(sub_83CE5744);
PPC_FUNC_IMPL(__imp__sub_83CE5744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5748"))) PPC_WEAK_FUNC(sub_83CE5748);
PPC_FUNC_IMPL(__imp__sub_83CE5748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6104
	ctx.r3.s64 = ctx.r11.s64 + 6104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5754"))) PPC_WEAK_FUNC(sub_83CE5754);
PPC_FUNC_IMPL(__imp__sub_83CE5754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5758"))) PPC_WEAK_FUNC(sub_83CE5758);
PPC_FUNC_IMPL(__imp__sub_83CE5758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6112
	ctx.r3.s64 = ctx.r11.s64 + 6112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5764"))) PPC_WEAK_FUNC(sub_83CE5764);
PPC_FUNC_IMPL(__imp__sub_83CE5764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5768"))) PPC_WEAK_FUNC(sub_83CE5768);
PPC_FUNC_IMPL(__imp__sub_83CE5768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5774"))) PPC_WEAK_FUNC(sub_83CE5774);
PPC_FUNC_IMPL(__imp__sub_83CE5774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5778"))) PPC_WEAK_FUNC(sub_83CE5778);
PPC_FUNC_IMPL(__imp__sub_83CE5778) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-14064
	ctx.r3.s64 = ctx.r11.s64 + -14064;
	// bl 0x83523120
	ctx.lr = 0x83CE5790;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6128
	ctx.r3.s64 = ctx.r10.s64 + 6128;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE579C;
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

__attribute__((alias("__imp__sub_83CE57AC"))) PPC_WEAK_FUNC(sub_83CE57AC);
PPC_FUNC_IMPL(__imp__sub_83CE57AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE57B0"))) PPC_WEAK_FUNC(sub_83CE57B0);
PPC_FUNC_IMPL(__imp__sub_83CE57B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14048
	ctx.r7.s64 = ctx.r8.s64 + -14048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14048);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14048(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14048, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE57D8"))) PPC_WEAK_FUNC(sub_83CE57D8);
PPC_FUNC_IMPL(__imp__sub_83CE57D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,26560
	ctx.r6.s64 = ctx.r7.s64 + 26560;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26488(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26488);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14048(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14048);
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
	// std r9,26560(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26560, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5820"))) PPC_WEAK_FUNC(sub_83CE5820);
PPC_FUNC_IMPL(__imp__sub_83CE5820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE582C"))) PPC_WEAK_FUNC(sub_83CE582C);
PPC_FUNC_IMPL(__imp__sub_83CE582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5830"))) PPC_WEAK_FUNC(sub_83CE5830);
PPC_FUNC_IMPL(__imp__sub_83CE5830) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-14040
	ctx.r3.s64 = ctx.r11.s64 + -14040;
	// bl 0x8259af80
	ctx.lr = 0x83CE5848;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6160
	ctx.r3.s64 = ctx.r10.s64 + 6160;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5854;
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

__attribute__((alias("__imp__sub_83CE5864"))) PPC_WEAK_FUNC(sub_83CE5864);
PPC_FUNC_IMPL(__imp__sub_83CE5864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5868"))) PPC_WEAK_FUNC(sub_83CE5868);
PPC_FUNC_IMPL(__imp__sub_83CE5868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14060
	ctx.r11.s64 = ctx.r8.s64 + -14060;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,26536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26536);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6152
	ctx.r3.s64 = ctx.r6.s64 + 6152;
	// stw r10,-14060(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14060, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5898"))) PPC_WEAK_FUNC(sub_83CE5898);
PPC_FUNC_IMPL(__imp__sub_83CE5898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6168
	ctx.r3.s64 = ctx.r11.s64 + 6168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE58A4"))) PPC_WEAK_FUNC(sub_83CE58A4);
PPC_FUNC_IMPL(__imp__sub_83CE58A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE58A8"))) PPC_WEAK_FUNC(sub_83CE58A8);
PPC_FUNC_IMPL(__imp__sub_83CE58A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6176
	ctx.r3.s64 = ctx.r11.s64 + 6176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE58B4"))) PPC_WEAK_FUNC(sub_83CE58B4);
PPC_FUNC_IMPL(__imp__sub_83CE58B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE58B8"))) PPC_WEAK_FUNC(sub_83CE58B8);
PPC_FUNC_IMPL(__imp__sub_83CE58B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6184
	ctx.r3.s64 = ctx.r11.s64 + 6184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE58C4"))) PPC_WEAK_FUNC(sub_83CE58C4);
PPC_FUNC_IMPL(__imp__sub_83CE58C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE58C8"))) PPC_WEAK_FUNC(sub_83CE58C8);
PPC_FUNC_IMPL(__imp__sub_83CE58C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6192
	ctx.r3.s64 = ctx.r11.s64 + 6192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE58D4"))) PPC_WEAK_FUNC(sub_83CE58D4);
PPC_FUNC_IMPL(__imp__sub_83CE58D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE58D8"))) PPC_WEAK_FUNC(sub_83CE58D8);
PPC_FUNC_IMPL(__imp__sub_83CE58D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6200
	ctx.r3.s64 = ctx.r11.s64 + 6200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE58E4"))) PPC_WEAK_FUNC(sub_83CE58E4);
PPC_FUNC_IMPL(__imp__sub_83CE58E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE58E8"))) PPC_WEAK_FUNC(sub_83CE58E8);
PPC_FUNC_IMPL(__imp__sub_83CE58E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6208
	ctx.r3.s64 = ctx.r11.s64 + 6208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE58F4"))) PPC_WEAK_FUNC(sub_83CE58F4);
PPC_FUNC_IMPL(__imp__sub_83CE58F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE58F8"))) PPC_WEAK_FUNC(sub_83CE58F8);
PPC_FUNC_IMPL(__imp__sub_83CE58F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6216
	ctx.r3.s64 = ctx.r11.s64 + 6216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5904"))) PPC_WEAK_FUNC(sub_83CE5904);
PPC_FUNC_IMPL(__imp__sub_83CE5904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5908"))) PPC_WEAK_FUNC(sub_83CE5908);
PPC_FUNC_IMPL(__imp__sub_83CE5908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6224
	ctx.r3.s64 = ctx.r11.s64 + 6224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5914"))) PPC_WEAK_FUNC(sub_83CE5914);
PPC_FUNC_IMPL(__imp__sub_83CE5914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5918"))) PPC_WEAK_FUNC(sub_83CE5918);
PPC_FUNC_IMPL(__imp__sub_83CE5918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6232
	ctx.r3.s64 = ctx.r11.s64 + 6232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5924"))) PPC_WEAK_FUNC(sub_83CE5924);
PPC_FUNC_IMPL(__imp__sub_83CE5924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5928"))) PPC_WEAK_FUNC(sub_83CE5928);
PPC_FUNC_IMPL(__imp__sub_83CE5928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6240
	ctx.r3.s64 = ctx.r11.s64 + 6240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5934"))) PPC_WEAK_FUNC(sub_83CE5934);
PPC_FUNC_IMPL(__imp__sub_83CE5934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5938"))) PPC_WEAK_FUNC(sub_83CE5938);
PPC_FUNC_IMPL(__imp__sub_83CE5938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6248
	ctx.r3.s64 = ctx.r11.s64 + 6248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5944"))) PPC_WEAK_FUNC(sub_83CE5944);
PPC_FUNC_IMPL(__imp__sub_83CE5944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5948"))) PPC_WEAK_FUNC(sub_83CE5948);
PPC_FUNC_IMPL(__imp__sub_83CE5948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6256
	ctx.r3.s64 = ctx.r11.s64 + 6256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5954"))) PPC_WEAK_FUNC(sub_83CE5954);
PPC_FUNC_IMPL(__imp__sub_83CE5954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5958"))) PPC_WEAK_FUNC(sub_83CE5958);
PPC_FUNC_IMPL(__imp__sub_83CE5958) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-13696
	ctx.r3.s64 = ctx.r11.s64 + -13696;
	// bl 0x83523120
	ctx.lr = 0x83CE5970;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6264
	ctx.r3.s64 = ctx.r10.s64 + 6264;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE597C;
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

__attribute__((alias("__imp__sub_83CE598C"))) PPC_WEAK_FUNC(sub_83CE598C);
PPC_FUNC_IMPL(__imp__sub_83CE598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5990"))) PPC_WEAK_FUNC(sub_83CE5990);
PPC_FUNC_IMPL(__imp__sub_83CE5990) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13680
	ctx.r7.s64 = ctx.r8.s64 + -13680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13680(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13680);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13680(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13680, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE59B8"))) PPC_WEAK_FUNC(sub_83CE59B8);
PPC_FUNC_IMPL(__imp__sub_83CE59B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,26736
	ctx.r6.s64 = ctx.r7.s64 + 26736;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13680(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13680);
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
	// std r9,26736(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5A00"))) PPC_WEAK_FUNC(sub_83CE5A00);
PPC_FUNC_IMPL(__imp__sub_83CE5A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6280
	ctx.r3.s64 = ctx.r11.s64 + 6280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5A0C"))) PPC_WEAK_FUNC(sub_83CE5A0C);
PPC_FUNC_IMPL(__imp__sub_83CE5A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5A10"))) PPC_WEAK_FUNC(sub_83CE5A10);
PPC_FUNC_IMPL(__imp__sub_83CE5A10) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-13672
	ctx.r3.s64 = ctx.r11.s64 + -13672;
	// bl 0x8259af80
	ctx.lr = 0x83CE5A28;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6296
	ctx.r3.s64 = ctx.r10.s64 + 6296;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5A34;
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

__attribute__((alias("__imp__sub_83CE5A44"))) PPC_WEAK_FUNC(sub_83CE5A44);
PPC_FUNC_IMPL(__imp__sub_83CE5A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5A48"))) PPC_WEAK_FUNC(sub_83CE5A48);
PPC_FUNC_IMPL(__imp__sub_83CE5A48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13692
	ctx.r11.s64 = ctx.r8.s64 + -13692;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,26712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6288
	ctx.r3.s64 = ctx.r6.s64 + 6288;
	// stw r10,-13692(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5A78"))) PPC_WEAK_FUNC(sub_83CE5A78);
PPC_FUNC_IMPL(__imp__sub_83CE5A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6304
	ctx.r3.s64 = ctx.r11.s64 + 6304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5A84"))) PPC_WEAK_FUNC(sub_83CE5A84);
PPC_FUNC_IMPL(__imp__sub_83CE5A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5A88"))) PPC_WEAK_FUNC(sub_83CE5A88);
PPC_FUNC_IMPL(__imp__sub_83CE5A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6312
	ctx.r3.s64 = ctx.r11.s64 + 6312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5A94"))) PPC_WEAK_FUNC(sub_83CE5A94);
PPC_FUNC_IMPL(__imp__sub_83CE5A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5A98"))) PPC_WEAK_FUNC(sub_83CE5A98);
PPC_FUNC_IMPL(__imp__sub_83CE5A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6320
	ctx.r3.s64 = ctx.r11.s64 + 6320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5AA4"))) PPC_WEAK_FUNC(sub_83CE5AA4);
PPC_FUNC_IMPL(__imp__sub_83CE5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5AA8"))) PPC_WEAK_FUNC(sub_83CE5AA8);
PPC_FUNC_IMPL(__imp__sub_83CE5AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6328
	ctx.r3.s64 = ctx.r11.s64 + 6328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5AB4"))) PPC_WEAK_FUNC(sub_83CE5AB4);
PPC_FUNC_IMPL(__imp__sub_83CE5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5AB8"))) PPC_WEAK_FUNC(sub_83CE5AB8);
PPC_FUNC_IMPL(__imp__sub_83CE5AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6336
	ctx.r3.s64 = ctx.r11.s64 + 6336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5AC4"))) PPC_WEAK_FUNC(sub_83CE5AC4);
PPC_FUNC_IMPL(__imp__sub_83CE5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5AC8"))) PPC_WEAK_FUNC(sub_83CE5AC8);
PPC_FUNC_IMPL(__imp__sub_83CE5AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6344
	ctx.r3.s64 = ctx.r11.s64 + 6344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5AD4"))) PPC_WEAK_FUNC(sub_83CE5AD4);
PPC_FUNC_IMPL(__imp__sub_83CE5AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5AD8"))) PPC_WEAK_FUNC(sub_83CE5AD8);
PPC_FUNC_IMPL(__imp__sub_83CE5AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6352
	ctx.r3.s64 = ctx.r11.s64 + 6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5AE4"))) PPC_WEAK_FUNC(sub_83CE5AE4);
PPC_FUNC_IMPL(__imp__sub_83CE5AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5AE8"))) PPC_WEAK_FUNC(sub_83CE5AE8);
PPC_FUNC_IMPL(__imp__sub_83CE5AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6360
	ctx.r3.s64 = ctx.r11.s64 + 6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5AF4"))) PPC_WEAK_FUNC(sub_83CE5AF4);
PPC_FUNC_IMPL(__imp__sub_83CE5AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5AF8"))) PPC_WEAK_FUNC(sub_83CE5AF8);
PPC_FUNC_IMPL(__imp__sub_83CE5AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6368
	ctx.r3.s64 = ctx.r11.s64 + 6368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5B04"))) PPC_WEAK_FUNC(sub_83CE5B04);
PPC_FUNC_IMPL(__imp__sub_83CE5B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5B08"))) PPC_WEAK_FUNC(sub_83CE5B08);
PPC_FUNC_IMPL(__imp__sub_83CE5B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6376
	ctx.r3.s64 = ctx.r11.s64 + 6376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5B14"))) PPC_WEAK_FUNC(sub_83CE5B14);
PPC_FUNC_IMPL(__imp__sub_83CE5B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5B18"))) PPC_WEAK_FUNC(sub_83CE5B18);
PPC_FUNC_IMPL(__imp__sub_83CE5B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6384
	ctx.r3.s64 = ctx.r11.s64 + 6384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5B24"))) PPC_WEAK_FUNC(sub_83CE5B24);
PPC_FUNC_IMPL(__imp__sub_83CE5B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5B28"))) PPC_WEAK_FUNC(sub_83CE5B28);
PPC_FUNC_IMPL(__imp__sub_83CE5B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6392
	ctx.r3.s64 = ctx.r11.s64 + 6392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5B34"))) PPC_WEAK_FUNC(sub_83CE5B34);
PPC_FUNC_IMPL(__imp__sub_83CE5B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5B38"))) PPC_WEAK_FUNC(sub_83CE5B38);
PPC_FUNC_IMPL(__imp__sub_83CE5B38) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-13328
	ctx.r3.s64 = ctx.r11.s64 + -13328;
	// bl 0x83523120
	ctx.lr = 0x83CE5B50;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6400
	ctx.r3.s64 = ctx.r10.s64 + 6400;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5B5C;
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

__attribute__((alias("__imp__sub_83CE5B6C"))) PPC_WEAK_FUNC(sub_83CE5B6C);
PPC_FUNC_IMPL(__imp__sub_83CE5B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5B70"))) PPC_WEAK_FUNC(sub_83CE5B70);
PPC_FUNC_IMPL(__imp__sub_83CE5B70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13312
	ctx.r7.s64 = ctx.r8.s64 + -13312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13312);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13312(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13312, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5B98"))) PPC_WEAK_FUNC(sub_83CE5B98);
PPC_FUNC_IMPL(__imp__sub_83CE5B98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,26884
	ctx.r6.s64 = ctx.r7.s64 + 26884;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26812(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26812);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13312);
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
	// std r9,26884(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26884, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5BE0"))) PPC_WEAK_FUNC(sub_83CE5BE0);
PPC_FUNC_IMPL(__imp__sub_83CE5BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6416
	ctx.r3.s64 = ctx.r11.s64 + 6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5BEC"))) PPC_WEAK_FUNC(sub_83CE5BEC);
PPC_FUNC_IMPL(__imp__sub_83CE5BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5BF0"))) PPC_WEAK_FUNC(sub_83CE5BF0);
PPC_FUNC_IMPL(__imp__sub_83CE5BF0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// bl 0x8259af80
	ctx.lr = 0x83CE5C08;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6432
	ctx.r3.s64 = ctx.r10.s64 + 6432;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5C14;
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

__attribute__((alias("__imp__sub_83CE5C24"))) PPC_WEAK_FUNC(sub_83CE5C24);
PPC_FUNC_IMPL(__imp__sub_83CE5C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5C28"))) PPC_WEAK_FUNC(sub_83CE5C28);
PPC_FUNC_IMPL(__imp__sub_83CE5C28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13324
	ctx.r11.s64 = ctx.r8.s64 + -13324;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,26860(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26860);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6424
	ctx.r3.s64 = ctx.r6.s64 + 6424;
	// stw r10,-13324(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13324, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5C58"))) PPC_WEAK_FUNC(sub_83CE5C58);
PPC_FUNC_IMPL(__imp__sub_83CE5C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6440
	ctx.r3.s64 = ctx.r11.s64 + 6440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5C64"))) PPC_WEAK_FUNC(sub_83CE5C64);
PPC_FUNC_IMPL(__imp__sub_83CE5C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5C68"))) PPC_WEAK_FUNC(sub_83CE5C68);
PPC_FUNC_IMPL(__imp__sub_83CE5C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6448
	ctx.r3.s64 = ctx.r11.s64 + 6448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5C74"))) PPC_WEAK_FUNC(sub_83CE5C74);
PPC_FUNC_IMPL(__imp__sub_83CE5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5C78"))) PPC_WEAK_FUNC(sub_83CE5C78);
PPC_FUNC_IMPL(__imp__sub_83CE5C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6456
	ctx.r3.s64 = ctx.r11.s64 + 6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5C84"))) PPC_WEAK_FUNC(sub_83CE5C84);
PPC_FUNC_IMPL(__imp__sub_83CE5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5C88"))) PPC_WEAK_FUNC(sub_83CE5C88);
PPC_FUNC_IMPL(__imp__sub_83CE5C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6464
	ctx.r3.s64 = ctx.r11.s64 + 6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5C94"))) PPC_WEAK_FUNC(sub_83CE5C94);
PPC_FUNC_IMPL(__imp__sub_83CE5C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5C98"))) PPC_WEAK_FUNC(sub_83CE5C98);
PPC_FUNC_IMPL(__imp__sub_83CE5C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6472
	ctx.r3.s64 = ctx.r11.s64 + 6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5CA4"))) PPC_WEAK_FUNC(sub_83CE5CA4);
PPC_FUNC_IMPL(__imp__sub_83CE5CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5CA8"))) PPC_WEAK_FUNC(sub_83CE5CA8);
PPC_FUNC_IMPL(__imp__sub_83CE5CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6480
	ctx.r3.s64 = ctx.r11.s64 + 6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5CB4"))) PPC_WEAK_FUNC(sub_83CE5CB4);
PPC_FUNC_IMPL(__imp__sub_83CE5CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5CB8"))) PPC_WEAK_FUNC(sub_83CE5CB8);
PPC_FUNC_IMPL(__imp__sub_83CE5CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6488
	ctx.r3.s64 = ctx.r11.s64 + 6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5CC4"))) PPC_WEAK_FUNC(sub_83CE5CC4);
PPC_FUNC_IMPL(__imp__sub_83CE5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5CC8"))) PPC_WEAK_FUNC(sub_83CE5CC8);
PPC_FUNC_IMPL(__imp__sub_83CE5CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6496
	ctx.r3.s64 = ctx.r11.s64 + 6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5CD4"))) PPC_WEAK_FUNC(sub_83CE5CD4);
PPC_FUNC_IMPL(__imp__sub_83CE5CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5CD8"))) PPC_WEAK_FUNC(sub_83CE5CD8);
PPC_FUNC_IMPL(__imp__sub_83CE5CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6504
	ctx.r3.s64 = ctx.r11.s64 + 6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5CE4"))) PPC_WEAK_FUNC(sub_83CE5CE4);
PPC_FUNC_IMPL(__imp__sub_83CE5CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5CE8"))) PPC_WEAK_FUNC(sub_83CE5CE8);
PPC_FUNC_IMPL(__imp__sub_83CE5CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6512
	ctx.r3.s64 = ctx.r11.s64 + 6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5CF4"))) PPC_WEAK_FUNC(sub_83CE5CF4);
PPC_FUNC_IMPL(__imp__sub_83CE5CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5CF8"))) PPC_WEAK_FUNC(sub_83CE5CF8);
PPC_FUNC_IMPL(__imp__sub_83CE5CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6520
	ctx.r3.s64 = ctx.r11.s64 + 6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5D04"))) PPC_WEAK_FUNC(sub_83CE5D04);
PPC_FUNC_IMPL(__imp__sub_83CE5D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5D08"))) PPC_WEAK_FUNC(sub_83CE5D08);
PPC_FUNC_IMPL(__imp__sub_83CE5D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6528
	ctx.r3.s64 = ctx.r11.s64 + 6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5D14"))) PPC_WEAK_FUNC(sub_83CE5D14);
PPC_FUNC_IMPL(__imp__sub_83CE5D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5D18"))) PPC_WEAK_FUNC(sub_83CE5D18);
PPC_FUNC_IMPL(__imp__sub_83CE5D18) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// bl 0x83523120
	ctx.lr = 0x83CE5D30;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6536
	ctx.r3.s64 = ctx.r10.s64 + 6536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5D3C;
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

__attribute__((alias("__imp__sub_83CE5D4C"))) PPC_WEAK_FUNC(sub_83CE5D4C);
PPC_FUNC_IMPL(__imp__sub_83CE5D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5D50"))) PPC_WEAK_FUNC(sub_83CE5D50);
PPC_FUNC_IMPL(__imp__sub_83CE5D50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12944
	ctx.r7.s64 = ctx.r8.s64 + -12944;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12944(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12944);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12944, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5D78"))) PPC_WEAK_FUNC(sub_83CE5D78);
PPC_FUNC_IMPL(__imp__sub_83CE5D78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,27028
	ctx.r6.s64 = ctx.r7.s64 + 27028;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,26956(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 26956);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12944(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12944);
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
	// std r9,27028(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27028, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5DC0"))) PPC_WEAK_FUNC(sub_83CE5DC0);
PPC_FUNC_IMPL(__imp__sub_83CE5DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6552
	ctx.r3.s64 = ctx.r11.s64 + 6552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5DCC"))) PPC_WEAK_FUNC(sub_83CE5DCC);
PPC_FUNC_IMPL(__imp__sub_83CE5DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5DD0"))) PPC_WEAK_FUNC(sub_83CE5DD0);
PPC_FUNC_IMPL(__imp__sub_83CE5DD0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// bl 0x8259af80
	ctx.lr = 0x83CE5DE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6568
	ctx.r3.s64 = ctx.r10.s64 + 6568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5DF4;
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

__attribute__((alias("__imp__sub_83CE5E04"))) PPC_WEAK_FUNC(sub_83CE5E04);
PPC_FUNC_IMPL(__imp__sub_83CE5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5E08"))) PPC_WEAK_FUNC(sub_83CE5E08);
PPC_FUNC_IMPL(__imp__sub_83CE5E08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12956
	ctx.r11.s64 = ctx.r8.s64 + -12956;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,27004(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27004);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6560
	ctx.r3.s64 = ctx.r6.s64 + 6560;
	// stw r10,-12956(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12956, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5E38"))) PPC_WEAK_FUNC(sub_83CE5E38);
PPC_FUNC_IMPL(__imp__sub_83CE5E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6576
	ctx.r3.s64 = ctx.r11.s64 + 6576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5E44"))) PPC_WEAK_FUNC(sub_83CE5E44);
PPC_FUNC_IMPL(__imp__sub_83CE5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5E48"))) PPC_WEAK_FUNC(sub_83CE5E48);
PPC_FUNC_IMPL(__imp__sub_83CE5E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6584
	ctx.r3.s64 = ctx.r11.s64 + 6584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5E54"))) PPC_WEAK_FUNC(sub_83CE5E54);
PPC_FUNC_IMPL(__imp__sub_83CE5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5E58"))) PPC_WEAK_FUNC(sub_83CE5E58);
PPC_FUNC_IMPL(__imp__sub_83CE5E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5E64"))) PPC_WEAK_FUNC(sub_83CE5E64);
PPC_FUNC_IMPL(__imp__sub_83CE5E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5E68"))) PPC_WEAK_FUNC(sub_83CE5E68);
PPC_FUNC_IMPL(__imp__sub_83CE5E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6600
	ctx.r3.s64 = ctx.r11.s64 + 6600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5E74"))) PPC_WEAK_FUNC(sub_83CE5E74);
PPC_FUNC_IMPL(__imp__sub_83CE5E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5E78"))) PPC_WEAK_FUNC(sub_83CE5E78);
PPC_FUNC_IMPL(__imp__sub_83CE5E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6608
	ctx.r3.s64 = ctx.r11.s64 + 6608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5E84"))) PPC_WEAK_FUNC(sub_83CE5E84);
PPC_FUNC_IMPL(__imp__sub_83CE5E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5E88"))) PPC_WEAK_FUNC(sub_83CE5E88);
PPC_FUNC_IMPL(__imp__sub_83CE5E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6616
	ctx.r3.s64 = ctx.r11.s64 + 6616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

