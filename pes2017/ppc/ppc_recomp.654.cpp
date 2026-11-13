#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BD9570"))) PPC_WEAK_FUNC(sub_83BD9570);
PPC_FUNC_IMPL(__imp__sub_83BD9570) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-27544
	ctx.r3.s64 = ctx.r11.s64 + -27544;
	// bl 0x83523120
	ctx.lr = 0x83BD9588;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24640
	ctx.r3.s64 = ctx.r10.s64 + 24640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9594;
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

__attribute__((alias("__imp__sub_83BD95A4"))) PPC_WEAK_FUNC(sub_83BD95A4);
PPC_FUNC_IMPL(__imp__sub_83BD95A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD95A8"))) PPC_WEAK_FUNC(sub_83BD95A8);
PPC_FUNC_IMPL(__imp__sub_83BD95A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27528
	ctx.r7.s64 = ctx.r8.s64 + -27528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27528(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD95D0"))) PPC_WEAK_FUNC(sub_83BD95D0);
PPC_FUNC_IMPL(__imp__sub_83BD95D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-30064
	ctx.r6.s64 = ctx.r7.s64 + -30064;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30144(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30144);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27528);
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
	// std r9,-30064(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30064, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9618"))) PPC_WEAK_FUNC(sub_83BD9618);
PPC_FUNC_IMPL(__imp__sub_83BD9618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9624"))) PPC_WEAK_FUNC(sub_83BD9624);
PPC_FUNC_IMPL(__imp__sub_83BD9624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9628"))) PPC_WEAK_FUNC(sub_83BD9628);
PPC_FUNC_IMPL(__imp__sub_83BD9628) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-27520
	ctx.r3.s64 = ctx.r11.s64 + -27520;
	// bl 0x8259af80
	ctx.lr = 0x83BD9640;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24672
	ctx.r3.s64 = ctx.r10.s64 + 24672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD964C;
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

__attribute__((alias("__imp__sub_83BD965C"))) PPC_WEAK_FUNC(sub_83BD965C);
PPC_FUNC_IMPL(__imp__sub_83BD965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9660"))) PPC_WEAK_FUNC(sub_83BD9660);
PPC_FUNC_IMPL(__imp__sub_83BD9660) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27540
	ctx.r11.s64 = ctx.r8.s64 + -27540;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-30096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30096);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24664
	ctx.r3.s64 = ctx.r6.s64 + 24664;
	// stw r10,-27540(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27540, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9690"))) PPC_WEAK_FUNC(sub_83BD9690);
PPC_FUNC_IMPL(__imp__sub_83BD9690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24680
	ctx.r3.s64 = ctx.r11.s64 + 24680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD969C"))) PPC_WEAK_FUNC(sub_83BD969C);
PPC_FUNC_IMPL(__imp__sub_83BD969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD96A0"))) PPC_WEAK_FUNC(sub_83BD96A0);
PPC_FUNC_IMPL(__imp__sub_83BD96A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24688
	ctx.r3.s64 = ctx.r11.s64 + 24688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD96AC"))) PPC_WEAK_FUNC(sub_83BD96AC);
PPC_FUNC_IMPL(__imp__sub_83BD96AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD96B0"))) PPC_WEAK_FUNC(sub_83BD96B0);
PPC_FUNC_IMPL(__imp__sub_83BD96B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24696
	ctx.r3.s64 = ctx.r11.s64 + 24696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD96BC"))) PPC_WEAK_FUNC(sub_83BD96BC);
PPC_FUNC_IMPL(__imp__sub_83BD96BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD96C0"))) PPC_WEAK_FUNC(sub_83BD96C0);
PPC_FUNC_IMPL(__imp__sub_83BD96C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24704
	ctx.r3.s64 = ctx.r11.s64 + 24704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD96CC"))) PPC_WEAK_FUNC(sub_83BD96CC);
PPC_FUNC_IMPL(__imp__sub_83BD96CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD96D0"))) PPC_WEAK_FUNC(sub_83BD96D0);
PPC_FUNC_IMPL(__imp__sub_83BD96D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24712
	ctx.r3.s64 = ctx.r11.s64 + 24712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD96DC"))) PPC_WEAK_FUNC(sub_83BD96DC);
PPC_FUNC_IMPL(__imp__sub_83BD96DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD96E0"))) PPC_WEAK_FUNC(sub_83BD96E0);
PPC_FUNC_IMPL(__imp__sub_83BD96E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24720
	ctx.r3.s64 = ctx.r11.s64 + 24720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD96EC"))) PPC_WEAK_FUNC(sub_83BD96EC);
PPC_FUNC_IMPL(__imp__sub_83BD96EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD96F0"))) PPC_WEAK_FUNC(sub_83BD96F0);
PPC_FUNC_IMPL(__imp__sub_83BD96F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24728
	ctx.r3.s64 = ctx.r11.s64 + 24728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD96FC"))) PPC_WEAK_FUNC(sub_83BD96FC);
PPC_FUNC_IMPL(__imp__sub_83BD96FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9700"))) PPC_WEAK_FUNC(sub_83BD9700);
PPC_FUNC_IMPL(__imp__sub_83BD9700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24736
	ctx.r3.s64 = ctx.r11.s64 + 24736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD970C"))) PPC_WEAK_FUNC(sub_83BD970C);
PPC_FUNC_IMPL(__imp__sub_83BD970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9710"))) PPC_WEAK_FUNC(sub_83BD9710);
PPC_FUNC_IMPL(__imp__sub_83BD9710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24744
	ctx.r3.s64 = ctx.r11.s64 + 24744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD971C"))) PPC_WEAK_FUNC(sub_83BD971C);
PPC_FUNC_IMPL(__imp__sub_83BD971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9720"))) PPC_WEAK_FUNC(sub_83BD9720);
PPC_FUNC_IMPL(__imp__sub_83BD9720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24752
	ctx.r3.s64 = ctx.r11.s64 + 24752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD972C"))) PPC_WEAK_FUNC(sub_83BD972C);
PPC_FUNC_IMPL(__imp__sub_83BD972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9730"))) PPC_WEAK_FUNC(sub_83BD9730);
PPC_FUNC_IMPL(__imp__sub_83BD9730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD973C"))) PPC_WEAK_FUNC(sub_83BD973C);
PPC_FUNC_IMPL(__imp__sub_83BD973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9740"))) PPC_WEAK_FUNC(sub_83BD9740);
PPC_FUNC_IMPL(__imp__sub_83BD9740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24768
	ctx.r3.s64 = ctx.r11.s64 + 24768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD974C"))) PPC_WEAK_FUNC(sub_83BD974C);
PPC_FUNC_IMPL(__imp__sub_83BD974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9750"))) PPC_WEAK_FUNC(sub_83BD9750);
PPC_FUNC_IMPL(__imp__sub_83BD9750) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-27172
	ctx.r3.s64 = ctx.r11.s64 + -27172;
	// bl 0x83523120
	ctx.lr = 0x83BD9768;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24776
	ctx.r3.s64 = ctx.r10.s64 + 24776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9774;
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

__attribute__((alias("__imp__sub_83BD9784"))) PPC_WEAK_FUNC(sub_83BD9784);
PPC_FUNC_IMPL(__imp__sub_83BD9784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9788"))) PPC_WEAK_FUNC(sub_83BD9788);
PPC_FUNC_IMPL(__imp__sub_83BD9788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27156
	ctx.r7.s64 = ctx.r8.s64 + -27156;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27156(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27156);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27156, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD97B0"))) PPC_WEAK_FUNC(sub_83BD97B0);
PPC_FUNC_IMPL(__imp__sub_83BD97B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-29744
	ctx.r6.s64 = ctx.r7.s64 + -29744;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29816(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29816);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27156(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27156);
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
	// std r9,-29744(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29744, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD97F8"))) PPC_WEAK_FUNC(sub_83BD97F8);
PPC_FUNC_IMPL(__imp__sub_83BD97F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24792
	ctx.r3.s64 = ctx.r11.s64 + 24792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9804"))) PPC_WEAK_FUNC(sub_83BD9804);
PPC_FUNC_IMPL(__imp__sub_83BD9804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9808"))) PPC_WEAK_FUNC(sub_83BD9808);
PPC_FUNC_IMPL(__imp__sub_83BD9808) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-27144
	ctx.r3.s64 = ctx.r11.s64 + -27144;
	// bl 0x8259af80
	ctx.lr = 0x83BD9820;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24808
	ctx.r3.s64 = ctx.r10.s64 + 24808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD982C;
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

__attribute__((alias("__imp__sub_83BD983C"))) PPC_WEAK_FUNC(sub_83BD983C);
PPC_FUNC_IMPL(__imp__sub_83BD983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9840"))) PPC_WEAK_FUNC(sub_83BD9840);
PPC_FUNC_IMPL(__imp__sub_83BD9840) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27168
	ctx.r11.s64 = ctx.r8.s64 + -27168;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29768);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24800
	ctx.r3.s64 = ctx.r6.s64 + 24800;
	// stw r10,-27168(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27168, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9870"))) PPC_WEAK_FUNC(sub_83BD9870);
PPC_FUNC_IMPL(__imp__sub_83BD9870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24816
	ctx.r3.s64 = ctx.r11.s64 + 24816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD987C"))) PPC_WEAK_FUNC(sub_83BD987C);
PPC_FUNC_IMPL(__imp__sub_83BD987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9880"))) PPC_WEAK_FUNC(sub_83BD9880);
PPC_FUNC_IMPL(__imp__sub_83BD9880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24824
	ctx.r3.s64 = ctx.r11.s64 + 24824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD988C"))) PPC_WEAK_FUNC(sub_83BD988C);
PPC_FUNC_IMPL(__imp__sub_83BD988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9890"))) PPC_WEAK_FUNC(sub_83BD9890);
PPC_FUNC_IMPL(__imp__sub_83BD9890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24832
	ctx.r3.s64 = ctx.r11.s64 + 24832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD989C"))) PPC_WEAK_FUNC(sub_83BD989C);
PPC_FUNC_IMPL(__imp__sub_83BD989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD98A0"))) PPC_WEAK_FUNC(sub_83BD98A0);
PPC_FUNC_IMPL(__imp__sub_83BD98A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24840
	ctx.r3.s64 = ctx.r11.s64 + 24840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD98AC"))) PPC_WEAK_FUNC(sub_83BD98AC);
PPC_FUNC_IMPL(__imp__sub_83BD98AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD98B0"))) PPC_WEAK_FUNC(sub_83BD98B0);
PPC_FUNC_IMPL(__imp__sub_83BD98B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24848
	ctx.r3.s64 = ctx.r11.s64 + 24848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD98BC"))) PPC_WEAK_FUNC(sub_83BD98BC);
PPC_FUNC_IMPL(__imp__sub_83BD98BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD98C0"))) PPC_WEAK_FUNC(sub_83BD98C0);
PPC_FUNC_IMPL(__imp__sub_83BD98C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD98CC"))) PPC_WEAK_FUNC(sub_83BD98CC);
PPC_FUNC_IMPL(__imp__sub_83BD98CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD98D0"))) PPC_WEAK_FUNC(sub_83BD98D0);
PPC_FUNC_IMPL(__imp__sub_83BD98D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24864
	ctx.r3.s64 = ctx.r11.s64 + 24864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD98DC"))) PPC_WEAK_FUNC(sub_83BD98DC);
PPC_FUNC_IMPL(__imp__sub_83BD98DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD98E0"))) PPC_WEAK_FUNC(sub_83BD98E0);
PPC_FUNC_IMPL(__imp__sub_83BD98E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24872
	ctx.r3.s64 = ctx.r11.s64 + 24872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD98EC"))) PPC_WEAK_FUNC(sub_83BD98EC);
PPC_FUNC_IMPL(__imp__sub_83BD98EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD98F0"))) PPC_WEAK_FUNC(sub_83BD98F0);
PPC_FUNC_IMPL(__imp__sub_83BD98F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24880
	ctx.r3.s64 = ctx.r11.s64 + 24880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD98FC"))) PPC_WEAK_FUNC(sub_83BD98FC);
PPC_FUNC_IMPL(__imp__sub_83BD98FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9900"))) PPC_WEAK_FUNC(sub_83BD9900);
PPC_FUNC_IMPL(__imp__sub_83BD9900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24888
	ctx.r3.s64 = ctx.r11.s64 + 24888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD990C"))) PPC_WEAK_FUNC(sub_83BD990C);
PPC_FUNC_IMPL(__imp__sub_83BD990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9910"))) PPC_WEAK_FUNC(sub_83BD9910);
PPC_FUNC_IMPL(__imp__sub_83BD9910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24896
	ctx.r3.s64 = ctx.r11.s64 + 24896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD991C"))) PPC_WEAK_FUNC(sub_83BD991C);
PPC_FUNC_IMPL(__imp__sub_83BD991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9920"))) PPC_WEAK_FUNC(sub_83BD9920);
PPC_FUNC_IMPL(__imp__sub_83BD9920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24904
	ctx.r3.s64 = ctx.r11.s64 + 24904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD992C"))) PPC_WEAK_FUNC(sub_83BD992C);
PPC_FUNC_IMPL(__imp__sub_83BD992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9930"))) PPC_WEAK_FUNC(sub_83BD9930);
PPC_FUNC_IMPL(__imp__sub_83BD9930) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-26800
	ctx.r3.s64 = ctx.r11.s64 + -26800;
	// bl 0x83523120
	ctx.lr = 0x83BD9948;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24912
	ctx.r3.s64 = ctx.r10.s64 + 24912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9954;
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

__attribute__((alias("__imp__sub_83BD9964"))) PPC_WEAK_FUNC(sub_83BD9964);
PPC_FUNC_IMPL(__imp__sub_83BD9964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9968"))) PPC_WEAK_FUNC(sub_83BD9968);
PPC_FUNC_IMPL(__imp__sub_83BD9968) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26784
	ctx.r7.s64 = ctx.r8.s64 + -26784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26784(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9990"))) PPC_WEAK_FUNC(sub_83BD9990);
PPC_FUNC_IMPL(__imp__sub_83BD9990) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-29560
	ctx.r6.s64 = ctx.r7.s64 + -29560;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26784);
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
	// std r9,-29560(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29560, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD99D8"))) PPC_WEAK_FUNC(sub_83BD99D8);
PPC_FUNC_IMPL(__imp__sub_83BD99D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24928
	ctx.r3.s64 = ctx.r11.s64 + 24928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD99E4"))) PPC_WEAK_FUNC(sub_83BD99E4);
PPC_FUNC_IMPL(__imp__sub_83BD99E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD99E8"))) PPC_WEAK_FUNC(sub_83BD99E8);
PPC_FUNC_IMPL(__imp__sub_83BD99E8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-26776
	ctx.r3.s64 = ctx.r11.s64 + -26776;
	// bl 0x8259af80
	ctx.lr = 0x83BD9A00;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,24944
	ctx.r3.s64 = ctx.r10.s64 + 24944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9A0C;
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

__attribute__((alias("__imp__sub_83BD9A1C"))) PPC_WEAK_FUNC(sub_83BD9A1C);
PPC_FUNC_IMPL(__imp__sub_83BD9A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9A20"))) PPC_WEAK_FUNC(sub_83BD9A20);
PPC_FUNC_IMPL(__imp__sub_83BD9A20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26796
	ctx.r11.s64 = ctx.r8.s64 + -26796;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-29584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24936
	ctx.r3.s64 = ctx.r6.s64 + 24936;
	// stw r10,-26796(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26796, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9A50"))) PPC_WEAK_FUNC(sub_83BD9A50);
PPC_FUNC_IMPL(__imp__sub_83BD9A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24952
	ctx.r3.s64 = ctx.r11.s64 + 24952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9A5C"))) PPC_WEAK_FUNC(sub_83BD9A5C);
PPC_FUNC_IMPL(__imp__sub_83BD9A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9A60"))) PPC_WEAK_FUNC(sub_83BD9A60);
PPC_FUNC_IMPL(__imp__sub_83BD9A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24960
	ctx.r3.s64 = ctx.r11.s64 + 24960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9A6C"))) PPC_WEAK_FUNC(sub_83BD9A6C);
PPC_FUNC_IMPL(__imp__sub_83BD9A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9A70"))) PPC_WEAK_FUNC(sub_83BD9A70);
PPC_FUNC_IMPL(__imp__sub_83BD9A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24968
	ctx.r3.s64 = ctx.r11.s64 + 24968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9A7C"))) PPC_WEAK_FUNC(sub_83BD9A7C);
PPC_FUNC_IMPL(__imp__sub_83BD9A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9A80"))) PPC_WEAK_FUNC(sub_83BD9A80);
PPC_FUNC_IMPL(__imp__sub_83BD9A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24976
	ctx.r3.s64 = ctx.r11.s64 + 24976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9A8C"))) PPC_WEAK_FUNC(sub_83BD9A8C);
PPC_FUNC_IMPL(__imp__sub_83BD9A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9A90"))) PPC_WEAK_FUNC(sub_83BD9A90);
PPC_FUNC_IMPL(__imp__sub_83BD9A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24984
	ctx.r3.s64 = ctx.r11.s64 + 24984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9A9C"))) PPC_WEAK_FUNC(sub_83BD9A9C);
PPC_FUNC_IMPL(__imp__sub_83BD9A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9AA0"))) PPC_WEAK_FUNC(sub_83BD9AA0);
PPC_FUNC_IMPL(__imp__sub_83BD9AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,24992
	ctx.r3.s64 = ctx.r11.s64 + 24992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9AAC"))) PPC_WEAK_FUNC(sub_83BD9AAC);
PPC_FUNC_IMPL(__imp__sub_83BD9AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9AB0"))) PPC_WEAK_FUNC(sub_83BD9AB0);
PPC_FUNC_IMPL(__imp__sub_83BD9AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9ABC"))) PPC_WEAK_FUNC(sub_83BD9ABC);
PPC_FUNC_IMPL(__imp__sub_83BD9ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9AC0"))) PPC_WEAK_FUNC(sub_83BD9AC0);
PPC_FUNC_IMPL(__imp__sub_83BD9AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25008
	ctx.r3.s64 = ctx.r11.s64 + 25008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9ACC"))) PPC_WEAK_FUNC(sub_83BD9ACC);
PPC_FUNC_IMPL(__imp__sub_83BD9ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9AD0"))) PPC_WEAK_FUNC(sub_83BD9AD0);
PPC_FUNC_IMPL(__imp__sub_83BD9AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25016
	ctx.r3.s64 = ctx.r11.s64 + 25016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9ADC"))) PPC_WEAK_FUNC(sub_83BD9ADC);
PPC_FUNC_IMPL(__imp__sub_83BD9ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9AE0"))) PPC_WEAK_FUNC(sub_83BD9AE0);
PPC_FUNC_IMPL(__imp__sub_83BD9AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9AEC"))) PPC_WEAK_FUNC(sub_83BD9AEC);
PPC_FUNC_IMPL(__imp__sub_83BD9AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9AF0"))) PPC_WEAK_FUNC(sub_83BD9AF0);
PPC_FUNC_IMPL(__imp__sub_83BD9AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25032
	ctx.r3.s64 = ctx.r11.s64 + 25032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9AFC"))) PPC_WEAK_FUNC(sub_83BD9AFC);
PPC_FUNC_IMPL(__imp__sub_83BD9AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9B00"))) PPC_WEAK_FUNC(sub_83BD9B00);
PPC_FUNC_IMPL(__imp__sub_83BD9B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25040
	ctx.r3.s64 = ctx.r11.s64 + 25040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9B0C"))) PPC_WEAK_FUNC(sub_83BD9B0C);
PPC_FUNC_IMPL(__imp__sub_83BD9B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9B10"))) PPC_WEAK_FUNC(sub_83BD9B10);
PPC_FUNC_IMPL(__imp__sub_83BD9B10) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// bl 0x83523120
	ctx.lr = 0x83BD9B28;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25048
	ctx.r3.s64 = ctx.r10.s64 + 25048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9B34;
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

__attribute__((alias("__imp__sub_83BD9B44"))) PPC_WEAK_FUNC(sub_83BD9B44);
PPC_FUNC_IMPL(__imp__sub_83BD9B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9B48"))) PPC_WEAK_FUNC(sub_83BD9B48);
PPC_FUNC_IMPL(__imp__sub_83BD9B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26416
	ctx.r7.s64 = ctx.r8.s64 + -26416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9B70"))) PPC_WEAK_FUNC(sub_83BD9B70);
PPC_FUNC_IMPL(__imp__sub_83BD9B70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-29412
	ctx.r6.s64 = ctx.r7.s64 + -29412;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29484(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29484);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26416);
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
	// std r9,-29412(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29412, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9BB8"))) PPC_WEAK_FUNC(sub_83BD9BB8);
PPC_FUNC_IMPL(__imp__sub_83BD9BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25064
	ctx.r3.s64 = ctx.r11.s64 + 25064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9BC4"))) PPC_WEAK_FUNC(sub_83BD9BC4);
PPC_FUNC_IMPL(__imp__sub_83BD9BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9BC8"))) PPC_WEAK_FUNC(sub_83BD9BC8);
PPC_FUNC_IMPL(__imp__sub_83BD9BC8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-26408
	ctx.r3.s64 = ctx.r11.s64 + -26408;
	// bl 0x8259af80
	ctx.lr = 0x83BD9BE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25080
	ctx.r3.s64 = ctx.r10.s64 + 25080;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9BEC;
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

__attribute__((alias("__imp__sub_83BD9BFC"))) PPC_WEAK_FUNC(sub_83BD9BFC);
PPC_FUNC_IMPL(__imp__sub_83BD9BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9C00"))) PPC_WEAK_FUNC(sub_83BD9C00);
PPC_FUNC_IMPL(__imp__sub_83BD9C00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26428
	ctx.r11.s64 = ctx.r8.s64 + -26428;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-29436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29436);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25072
	ctx.r3.s64 = ctx.r6.s64 + 25072;
	// stw r10,-26428(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26428, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9C30"))) PPC_WEAK_FUNC(sub_83BD9C30);
PPC_FUNC_IMPL(__imp__sub_83BD9C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25088
	ctx.r3.s64 = ctx.r11.s64 + 25088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9C3C"))) PPC_WEAK_FUNC(sub_83BD9C3C);
PPC_FUNC_IMPL(__imp__sub_83BD9C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9C40"))) PPC_WEAK_FUNC(sub_83BD9C40);
PPC_FUNC_IMPL(__imp__sub_83BD9C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9C4C"))) PPC_WEAK_FUNC(sub_83BD9C4C);
PPC_FUNC_IMPL(__imp__sub_83BD9C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9C50"))) PPC_WEAK_FUNC(sub_83BD9C50);
PPC_FUNC_IMPL(__imp__sub_83BD9C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25104
	ctx.r3.s64 = ctx.r11.s64 + 25104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9C5C"))) PPC_WEAK_FUNC(sub_83BD9C5C);
PPC_FUNC_IMPL(__imp__sub_83BD9C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9C60"))) PPC_WEAK_FUNC(sub_83BD9C60);
PPC_FUNC_IMPL(__imp__sub_83BD9C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25112
	ctx.r3.s64 = ctx.r11.s64 + 25112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9C6C"))) PPC_WEAK_FUNC(sub_83BD9C6C);
PPC_FUNC_IMPL(__imp__sub_83BD9C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9C70"))) PPC_WEAK_FUNC(sub_83BD9C70);
PPC_FUNC_IMPL(__imp__sub_83BD9C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25120
	ctx.r3.s64 = ctx.r11.s64 + 25120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9C7C"))) PPC_WEAK_FUNC(sub_83BD9C7C);
PPC_FUNC_IMPL(__imp__sub_83BD9C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9C80"))) PPC_WEAK_FUNC(sub_83BD9C80);
PPC_FUNC_IMPL(__imp__sub_83BD9C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25128
	ctx.r3.s64 = ctx.r11.s64 + 25128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9C8C"))) PPC_WEAK_FUNC(sub_83BD9C8C);
PPC_FUNC_IMPL(__imp__sub_83BD9C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9C90"))) PPC_WEAK_FUNC(sub_83BD9C90);
PPC_FUNC_IMPL(__imp__sub_83BD9C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25136
	ctx.r3.s64 = ctx.r11.s64 + 25136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9C9C"))) PPC_WEAK_FUNC(sub_83BD9C9C);
PPC_FUNC_IMPL(__imp__sub_83BD9C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9CA0"))) PPC_WEAK_FUNC(sub_83BD9CA0);
PPC_FUNC_IMPL(__imp__sub_83BD9CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9CAC"))) PPC_WEAK_FUNC(sub_83BD9CAC);
PPC_FUNC_IMPL(__imp__sub_83BD9CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9CB0"))) PPC_WEAK_FUNC(sub_83BD9CB0);
PPC_FUNC_IMPL(__imp__sub_83BD9CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25152
	ctx.r3.s64 = ctx.r11.s64 + 25152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9CBC"))) PPC_WEAK_FUNC(sub_83BD9CBC);
PPC_FUNC_IMPL(__imp__sub_83BD9CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9CC0"))) PPC_WEAK_FUNC(sub_83BD9CC0);
PPC_FUNC_IMPL(__imp__sub_83BD9CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25160
	ctx.r3.s64 = ctx.r11.s64 + 25160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9CCC"))) PPC_WEAK_FUNC(sub_83BD9CCC);
PPC_FUNC_IMPL(__imp__sub_83BD9CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9CD0"))) PPC_WEAK_FUNC(sub_83BD9CD0);
PPC_FUNC_IMPL(__imp__sub_83BD9CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25168
	ctx.r3.s64 = ctx.r11.s64 + 25168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9CDC"))) PPC_WEAK_FUNC(sub_83BD9CDC);
PPC_FUNC_IMPL(__imp__sub_83BD9CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9CE0"))) PPC_WEAK_FUNC(sub_83BD9CE0);
PPC_FUNC_IMPL(__imp__sub_83BD9CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25176
	ctx.r3.s64 = ctx.r11.s64 + 25176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9CEC"))) PPC_WEAK_FUNC(sub_83BD9CEC);
PPC_FUNC_IMPL(__imp__sub_83BD9CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9CF0"))) PPC_WEAK_FUNC(sub_83BD9CF0);
PPC_FUNC_IMPL(__imp__sub_83BD9CF0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// bl 0x83523120
	ctx.lr = 0x83BD9D08;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25184
	ctx.r3.s64 = ctx.r10.s64 + 25184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9D14;
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

__attribute__((alias("__imp__sub_83BD9D24"))) PPC_WEAK_FUNC(sub_83BD9D24);
PPC_FUNC_IMPL(__imp__sub_83BD9D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9D28"))) PPC_WEAK_FUNC(sub_83BD9D28);
PPC_FUNC_IMPL(__imp__sub_83BD9D28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-26048
	ctx.r7.s64 = ctx.r8.s64 + -26048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-26048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -26048);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-26048(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26048, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9D50"))) PPC_WEAK_FUNC(sub_83BD9D50);
PPC_FUNC_IMPL(__imp__sub_83BD9D50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-29280
	ctx.r6.s64 = ctx.r7.s64 + -29280;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29352(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29352);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-26048(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26048);
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
	// std r9,-29280(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29280, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9D98"))) PPC_WEAK_FUNC(sub_83BD9D98);
PPC_FUNC_IMPL(__imp__sub_83BD9D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25200
	ctx.r3.s64 = ctx.r11.s64 + 25200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9DA4"))) PPC_WEAK_FUNC(sub_83BD9DA4);
PPC_FUNC_IMPL(__imp__sub_83BD9DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9DA8"))) PPC_WEAK_FUNC(sub_83BD9DA8);
PPC_FUNC_IMPL(__imp__sub_83BD9DA8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-26040
	ctx.r3.s64 = ctx.r11.s64 + -26040;
	// bl 0x8259af80
	ctx.lr = 0x83BD9DC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25216
	ctx.r3.s64 = ctx.r10.s64 + 25216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9DCC;
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

__attribute__((alias("__imp__sub_83BD9DDC"))) PPC_WEAK_FUNC(sub_83BD9DDC);
PPC_FUNC_IMPL(__imp__sub_83BD9DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9DE0"))) PPC_WEAK_FUNC(sub_83BD9DE0);
PPC_FUNC_IMPL(__imp__sub_83BD9DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26060
	ctx.r11.s64 = ctx.r8.s64 + -26060;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-29304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29304);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25208
	ctx.r3.s64 = ctx.r6.s64 + 25208;
	// stw r10,-26060(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26060, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E10"))) PPC_WEAK_FUNC(sub_83BD9E10);
PPC_FUNC_IMPL(__imp__sub_83BD9E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25224
	ctx.r3.s64 = ctx.r11.s64 + 25224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E1C"))) PPC_WEAK_FUNC(sub_83BD9E1C);
PPC_FUNC_IMPL(__imp__sub_83BD9E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9E20"))) PPC_WEAK_FUNC(sub_83BD9E20);
PPC_FUNC_IMPL(__imp__sub_83BD9E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25232
	ctx.r3.s64 = ctx.r11.s64 + 25232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E2C"))) PPC_WEAK_FUNC(sub_83BD9E2C);
PPC_FUNC_IMPL(__imp__sub_83BD9E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9E30"))) PPC_WEAK_FUNC(sub_83BD9E30);
PPC_FUNC_IMPL(__imp__sub_83BD9E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25240
	ctx.r3.s64 = ctx.r11.s64 + 25240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E3C"))) PPC_WEAK_FUNC(sub_83BD9E3C);
PPC_FUNC_IMPL(__imp__sub_83BD9E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9E40"))) PPC_WEAK_FUNC(sub_83BD9E40);
PPC_FUNC_IMPL(__imp__sub_83BD9E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25248
	ctx.r3.s64 = ctx.r11.s64 + 25248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E4C"))) PPC_WEAK_FUNC(sub_83BD9E4C);
PPC_FUNC_IMPL(__imp__sub_83BD9E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9E50"))) PPC_WEAK_FUNC(sub_83BD9E50);
PPC_FUNC_IMPL(__imp__sub_83BD9E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25256
	ctx.r3.s64 = ctx.r11.s64 + 25256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E5C"))) PPC_WEAK_FUNC(sub_83BD9E5C);
PPC_FUNC_IMPL(__imp__sub_83BD9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9E60"))) PPC_WEAK_FUNC(sub_83BD9E60);
PPC_FUNC_IMPL(__imp__sub_83BD9E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25264
	ctx.r3.s64 = ctx.r11.s64 + 25264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E6C"))) PPC_WEAK_FUNC(sub_83BD9E6C);
PPC_FUNC_IMPL(__imp__sub_83BD9E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9E70"))) PPC_WEAK_FUNC(sub_83BD9E70);
PPC_FUNC_IMPL(__imp__sub_83BD9E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25272
	ctx.r3.s64 = ctx.r11.s64 + 25272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E7C"))) PPC_WEAK_FUNC(sub_83BD9E7C);
PPC_FUNC_IMPL(__imp__sub_83BD9E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9E80"))) PPC_WEAK_FUNC(sub_83BD9E80);
PPC_FUNC_IMPL(__imp__sub_83BD9E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25280
	ctx.r3.s64 = ctx.r11.s64 + 25280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E8C"))) PPC_WEAK_FUNC(sub_83BD9E8C);
PPC_FUNC_IMPL(__imp__sub_83BD9E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9E90"))) PPC_WEAK_FUNC(sub_83BD9E90);
PPC_FUNC_IMPL(__imp__sub_83BD9E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25288
	ctx.r3.s64 = ctx.r11.s64 + 25288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9E9C"))) PPC_WEAK_FUNC(sub_83BD9E9C);
PPC_FUNC_IMPL(__imp__sub_83BD9E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9EA0"))) PPC_WEAK_FUNC(sub_83BD9EA0);
PPC_FUNC_IMPL(__imp__sub_83BD9EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25296
	ctx.r3.s64 = ctx.r11.s64 + 25296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9EAC"))) PPC_WEAK_FUNC(sub_83BD9EAC);
PPC_FUNC_IMPL(__imp__sub_83BD9EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9EB0"))) PPC_WEAK_FUNC(sub_83BD9EB0);
PPC_FUNC_IMPL(__imp__sub_83BD9EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25304
	ctx.r3.s64 = ctx.r11.s64 + 25304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9EBC"))) PPC_WEAK_FUNC(sub_83BD9EBC);
PPC_FUNC_IMPL(__imp__sub_83BD9EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9EC0"))) PPC_WEAK_FUNC(sub_83BD9EC0);
PPC_FUNC_IMPL(__imp__sub_83BD9EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25312
	ctx.r3.s64 = ctx.r11.s64 + 25312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9ECC"))) PPC_WEAK_FUNC(sub_83BD9ECC);
PPC_FUNC_IMPL(__imp__sub_83BD9ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9ED0"))) PPC_WEAK_FUNC(sub_83BD9ED0);
PPC_FUNC_IMPL(__imp__sub_83BD9ED0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-25696
	ctx.r3.s64 = ctx.r11.s64 + -25696;
	// bl 0x83523120
	ctx.lr = 0x83BD9EE8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25320
	ctx.r3.s64 = ctx.r10.s64 + 25320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9EF4;
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

__attribute__((alias("__imp__sub_83BD9F04"))) PPC_WEAK_FUNC(sub_83BD9F04);
PPC_FUNC_IMPL(__imp__sub_83BD9F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9F08"))) PPC_WEAK_FUNC(sub_83BD9F08);
PPC_FUNC_IMPL(__imp__sub_83BD9F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25680
	ctx.r7.s64 = ctx.r8.s64 + -25680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25680(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25680);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25680(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25680, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9F30"))) PPC_WEAK_FUNC(sub_83BD9F30);
PPC_FUNC_IMPL(__imp__sub_83BD9F30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-29044
	ctx.r6.s64 = ctx.r7.s64 + -29044;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25680(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25680);
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
	// std r9,-29044(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29044, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD9F78"))) PPC_WEAK_FUNC(sub_83BD9F78);
PPC_FUNC_IMPL(__imp__sub_83BD9F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25336
	ctx.r3.s64 = ctx.r11.s64 + 25336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9F84"))) PPC_WEAK_FUNC(sub_83BD9F84);
PPC_FUNC_IMPL(__imp__sub_83BD9F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9F88"))) PPC_WEAK_FUNC(sub_83BD9F88);
PPC_FUNC_IMPL(__imp__sub_83BD9F88) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-25672
	ctx.r3.s64 = ctx.r11.s64 + -25672;
	// bl 0x8259af80
	ctx.lr = 0x83BD9FA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25352
	ctx.r3.s64 = ctx.r10.s64 + 25352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD9FAC;
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

__attribute__((alias("__imp__sub_83BD9FBC"))) PPC_WEAK_FUNC(sub_83BD9FBC);
PPC_FUNC_IMPL(__imp__sub_83BD9FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD9FC0"))) PPC_WEAK_FUNC(sub_83BD9FC0);
PPC_FUNC_IMPL(__imp__sub_83BD9FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25692
	ctx.r11.s64 = ctx.r8.s64 + -25692;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-29068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29068);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25344
	ctx.r3.s64 = ctx.r6.s64 + 25344;
	// stw r10,-25692(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9FF0"))) PPC_WEAK_FUNC(sub_83BD9FF0);
PPC_FUNC_IMPL(__imp__sub_83BD9FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25360
	ctx.r3.s64 = ctx.r11.s64 + 25360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD9FFC"))) PPC_WEAK_FUNC(sub_83BD9FFC);
PPC_FUNC_IMPL(__imp__sub_83BD9FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA000"))) PPC_WEAK_FUNC(sub_83BDA000);
PPC_FUNC_IMPL(__imp__sub_83BDA000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25368
	ctx.r3.s64 = ctx.r11.s64 + 25368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA00C"))) PPC_WEAK_FUNC(sub_83BDA00C);
PPC_FUNC_IMPL(__imp__sub_83BDA00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA010"))) PPC_WEAK_FUNC(sub_83BDA010);
PPC_FUNC_IMPL(__imp__sub_83BDA010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25376
	ctx.r3.s64 = ctx.r11.s64 + 25376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA01C"))) PPC_WEAK_FUNC(sub_83BDA01C);
PPC_FUNC_IMPL(__imp__sub_83BDA01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA020"))) PPC_WEAK_FUNC(sub_83BDA020);
PPC_FUNC_IMPL(__imp__sub_83BDA020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25384
	ctx.r3.s64 = ctx.r11.s64 + 25384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA02C"))) PPC_WEAK_FUNC(sub_83BDA02C);
PPC_FUNC_IMPL(__imp__sub_83BDA02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA030"))) PPC_WEAK_FUNC(sub_83BDA030);
PPC_FUNC_IMPL(__imp__sub_83BDA030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25392
	ctx.r3.s64 = ctx.r11.s64 + 25392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA03C"))) PPC_WEAK_FUNC(sub_83BDA03C);
PPC_FUNC_IMPL(__imp__sub_83BDA03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA040"))) PPC_WEAK_FUNC(sub_83BDA040);
PPC_FUNC_IMPL(__imp__sub_83BDA040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25400
	ctx.r3.s64 = ctx.r11.s64 + 25400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA04C"))) PPC_WEAK_FUNC(sub_83BDA04C);
PPC_FUNC_IMPL(__imp__sub_83BDA04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA050"))) PPC_WEAK_FUNC(sub_83BDA050);
PPC_FUNC_IMPL(__imp__sub_83BDA050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25408
	ctx.r3.s64 = ctx.r11.s64 + 25408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA05C"))) PPC_WEAK_FUNC(sub_83BDA05C);
PPC_FUNC_IMPL(__imp__sub_83BDA05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA060"))) PPC_WEAK_FUNC(sub_83BDA060);
PPC_FUNC_IMPL(__imp__sub_83BDA060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25416
	ctx.r3.s64 = ctx.r11.s64 + 25416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA06C"))) PPC_WEAK_FUNC(sub_83BDA06C);
PPC_FUNC_IMPL(__imp__sub_83BDA06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA070"))) PPC_WEAK_FUNC(sub_83BDA070);
PPC_FUNC_IMPL(__imp__sub_83BDA070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25424
	ctx.r3.s64 = ctx.r11.s64 + 25424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA07C"))) PPC_WEAK_FUNC(sub_83BDA07C);
PPC_FUNC_IMPL(__imp__sub_83BDA07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA080"))) PPC_WEAK_FUNC(sub_83BDA080);
PPC_FUNC_IMPL(__imp__sub_83BDA080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25432
	ctx.r3.s64 = ctx.r11.s64 + 25432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA08C"))) PPC_WEAK_FUNC(sub_83BDA08C);
PPC_FUNC_IMPL(__imp__sub_83BDA08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA090"))) PPC_WEAK_FUNC(sub_83BDA090);
PPC_FUNC_IMPL(__imp__sub_83BDA090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25440
	ctx.r3.s64 = ctx.r11.s64 + 25440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA09C"))) PPC_WEAK_FUNC(sub_83BDA09C);
PPC_FUNC_IMPL(__imp__sub_83BDA09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA0A0"))) PPC_WEAK_FUNC(sub_83BDA0A0);
PPC_FUNC_IMPL(__imp__sub_83BDA0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25448
	ctx.r3.s64 = ctx.r11.s64 + 25448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA0AC"))) PPC_WEAK_FUNC(sub_83BDA0AC);
PPC_FUNC_IMPL(__imp__sub_83BDA0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA0B0"))) PPC_WEAK_FUNC(sub_83BDA0B0);
PPC_FUNC_IMPL(__imp__sub_83BDA0B0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-25328
	ctx.r3.s64 = ctx.r11.s64 + -25328;
	// bl 0x83523120
	ctx.lr = 0x83BDA0C8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25456
	ctx.r3.s64 = ctx.r10.s64 + 25456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA0D4;
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

__attribute__((alias("__imp__sub_83BDA0E4"))) PPC_WEAK_FUNC(sub_83BDA0E4);
PPC_FUNC_IMPL(__imp__sub_83BDA0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA0E8"))) PPC_WEAK_FUNC(sub_83BDA0E8);
PPC_FUNC_IMPL(__imp__sub_83BDA0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25312
	ctx.r7.s64 = ctx.r8.s64 + -25312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25312);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25312(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25312, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA110"))) PPC_WEAK_FUNC(sub_83BDA110);
PPC_FUNC_IMPL(__imp__sub_83BDA110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-28900
	ctx.r6.s64 = ctx.r7.s64 + -28900;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28972(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28972);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25312);
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
	// std r9,-28900(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28900, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA158"))) PPC_WEAK_FUNC(sub_83BDA158);
PPC_FUNC_IMPL(__imp__sub_83BDA158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25472
	ctx.r3.s64 = ctx.r11.s64 + 25472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA164"))) PPC_WEAK_FUNC(sub_83BDA164);
PPC_FUNC_IMPL(__imp__sub_83BDA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA168"))) PPC_WEAK_FUNC(sub_83BDA168);
PPC_FUNC_IMPL(__imp__sub_83BDA168) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-25304
	ctx.r3.s64 = ctx.r11.s64 + -25304;
	// bl 0x8259af80
	ctx.lr = 0x83BDA180;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25488
	ctx.r3.s64 = ctx.r10.s64 + 25488;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA18C;
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

__attribute__((alias("__imp__sub_83BDA19C"))) PPC_WEAK_FUNC(sub_83BDA19C);
PPC_FUNC_IMPL(__imp__sub_83BDA19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA1A0"))) PPC_WEAK_FUNC(sub_83BDA1A0);
PPC_FUNC_IMPL(__imp__sub_83BDA1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25324
	ctx.r11.s64 = ctx.r8.s64 + -25324;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28924);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25480
	ctx.r3.s64 = ctx.r6.s64 + 25480;
	// stw r10,-25324(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25324, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA1D0"))) PPC_WEAK_FUNC(sub_83BDA1D0);
PPC_FUNC_IMPL(__imp__sub_83BDA1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25496
	ctx.r3.s64 = ctx.r11.s64 + 25496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA1DC"))) PPC_WEAK_FUNC(sub_83BDA1DC);
PPC_FUNC_IMPL(__imp__sub_83BDA1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA1E0"))) PPC_WEAK_FUNC(sub_83BDA1E0);
PPC_FUNC_IMPL(__imp__sub_83BDA1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25504
	ctx.r3.s64 = ctx.r11.s64 + 25504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA1EC"))) PPC_WEAK_FUNC(sub_83BDA1EC);
PPC_FUNC_IMPL(__imp__sub_83BDA1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA1F0"))) PPC_WEAK_FUNC(sub_83BDA1F0);
PPC_FUNC_IMPL(__imp__sub_83BDA1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25512
	ctx.r3.s64 = ctx.r11.s64 + 25512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA1FC"))) PPC_WEAK_FUNC(sub_83BDA1FC);
PPC_FUNC_IMPL(__imp__sub_83BDA1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA200"))) PPC_WEAK_FUNC(sub_83BDA200);
PPC_FUNC_IMPL(__imp__sub_83BDA200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25520
	ctx.r3.s64 = ctx.r11.s64 + 25520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA20C"))) PPC_WEAK_FUNC(sub_83BDA20C);
PPC_FUNC_IMPL(__imp__sub_83BDA20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA210"))) PPC_WEAK_FUNC(sub_83BDA210);
PPC_FUNC_IMPL(__imp__sub_83BDA210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25528
	ctx.r3.s64 = ctx.r11.s64 + 25528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA21C"))) PPC_WEAK_FUNC(sub_83BDA21C);
PPC_FUNC_IMPL(__imp__sub_83BDA21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA220"))) PPC_WEAK_FUNC(sub_83BDA220);
PPC_FUNC_IMPL(__imp__sub_83BDA220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25536
	ctx.r3.s64 = ctx.r11.s64 + 25536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA22C"))) PPC_WEAK_FUNC(sub_83BDA22C);
PPC_FUNC_IMPL(__imp__sub_83BDA22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA230"))) PPC_WEAK_FUNC(sub_83BDA230);
PPC_FUNC_IMPL(__imp__sub_83BDA230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25544
	ctx.r3.s64 = ctx.r11.s64 + 25544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA23C"))) PPC_WEAK_FUNC(sub_83BDA23C);
PPC_FUNC_IMPL(__imp__sub_83BDA23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA240"))) PPC_WEAK_FUNC(sub_83BDA240);
PPC_FUNC_IMPL(__imp__sub_83BDA240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25552
	ctx.r3.s64 = ctx.r11.s64 + 25552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA24C"))) PPC_WEAK_FUNC(sub_83BDA24C);
PPC_FUNC_IMPL(__imp__sub_83BDA24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA250"))) PPC_WEAK_FUNC(sub_83BDA250);
PPC_FUNC_IMPL(__imp__sub_83BDA250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25560
	ctx.r3.s64 = ctx.r11.s64 + 25560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA25C"))) PPC_WEAK_FUNC(sub_83BDA25C);
PPC_FUNC_IMPL(__imp__sub_83BDA25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA260"))) PPC_WEAK_FUNC(sub_83BDA260);
PPC_FUNC_IMPL(__imp__sub_83BDA260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25568
	ctx.r3.s64 = ctx.r11.s64 + 25568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA26C"))) PPC_WEAK_FUNC(sub_83BDA26C);
PPC_FUNC_IMPL(__imp__sub_83BDA26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA270"))) PPC_WEAK_FUNC(sub_83BDA270);
PPC_FUNC_IMPL(__imp__sub_83BDA270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25576
	ctx.r3.s64 = ctx.r11.s64 + 25576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA27C"))) PPC_WEAK_FUNC(sub_83BDA27C);
PPC_FUNC_IMPL(__imp__sub_83BDA27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA280"))) PPC_WEAK_FUNC(sub_83BDA280);
PPC_FUNC_IMPL(__imp__sub_83BDA280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA28C"))) PPC_WEAK_FUNC(sub_83BDA28C);
PPC_FUNC_IMPL(__imp__sub_83BDA28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA290"))) PPC_WEAK_FUNC(sub_83BDA290);
PPC_FUNC_IMPL(__imp__sub_83BDA290) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-24960
	ctx.r3.s64 = ctx.r11.s64 + -24960;
	// bl 0x83523120
	ctx.lr = 0x83BDA2A8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25592
	ctx.r3.s64 = ctx.r10.s64 + 25592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA2B4;
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

__attribute__((alias("__imp__sub_83BDA2C4"))) PPC_WEAK_FUNC(sub_83BDA2C4);
PPC_FUNC_IMPL(__imp__sub_83BDA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA2C8"))) PPC_WEAK_FUNC(sub_83BDA2C8);
PPC_FUNC_IMPL(__imp__sub_83BDA2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24944
	ctx.r7.s64 = ctx.r8.s64 + -24944;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24944(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24944);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24944, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA2F0"))) PPC_WEAK_FUNC(sub_83BDA2F0);
PPC_FUNC_IMPL(__imp__sub_83BDA2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-28764
	ctx.r6.s64 = ctx.r7.s64 + -28764;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28836(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28836);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24944(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24944);
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
	// std r9,-28764(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28764, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDA338"))) PPC_WEAK_FUNC(sub_83BDA338);
PPC_FUNC_IMPL(__imp__sub_83BDA338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25608
	ctx.r3.s64 = ctx.r11.s64 + 25608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA344"))) PPC_WEAK_FUNC(sub_83BDA344);
PPC_FUNC_IMPL(__imp__sub_83BDA344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA348"))) PPC_WEAK_FUNC(sub_83BDA348);
PPC_FUNC_IMPL(__imp__sub_83BDA348) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x8259af80
	ctx.lr = 0x83BDA360;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,25624
	ctx.r3.s64 = ctx.r10.s64 + 25624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDA36C;
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

__attribute__((alias("__imp__sub_83BDA37C"))) PPC_WEAK_FUNC(sub_83BDA37C);
PPC_FUNC_IMPL(__imp__sub_83BDA37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA380"))) PPC_WEAK_FUNC(sub_83BDA380);
PPC_FUNC_IMPL(__imp__sub_83BDA380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24956
	ctx.r11.s64 = ctx.r8.s64 + -24956;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28788);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25616
	ctx.r3.s64 = ctx.r6.s64 + 25616;
	// stw r10,-24956(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24956, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA3B0"))) PPC_WEAK_FUNC(sub_83BDA3B0);
PPC_FUNC_IMPL(__imp__sub_83BDA3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25632
	ctx.r3.s64 = ctx.r11.s64 + 25632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA3BC"))) PPC_WEAK_FUNC(sub_83BDA3BC);
PPC_FUNC_IMPL(__imp__sub_83BDA3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA3C0"))) PPC_WEAK_FUNC(sub_83BDA3C0);
PPC_FUNC_IMPL(__imp__sub_83BDA3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25640
	ctx.r3.s64 = ctx.r11.s64 + 25640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA3CC"))) PPC_WEAK_FUNC(sub_83BDA3CC);
PPC_FUNC_IMPL(__imp__sub_83BDA3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA3D0"))) PPC_WEAK_FUNC(sub_83BDA3D0);
PPC_FUNC_IMPL(__imp__sub_83BDA3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25648
	ctx.r3.s64 = ctx.r11.s64 + 25648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA3DC"))) PPC_WEAK_FUNC(sub_83BDA3DC);
PPC_FUNC_IMPL(__imp__sub_83BDA3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA3E0"))) PPC_WEAK_FUNC(sub_83BDA3E0);
PPC_FUNC_IMPL(__imp__sub_83BDA3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25656
	ctx.r3.s64 = ctx.r11.s64 + 25656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA3EC"))) PPC_WEAK_FUNC(sub_83BDA3EC);
PPC_FUNC_IMPL(__imp__sub_83BDA3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA3F0"))) PPC_WEAK_FUNC(sub_83BDA3F0);
PPC_FUNC_IMPL(__imp__sub_83BDA3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25664
	ctx.r3.s64 = ctx.r11.s64 + 25664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA3FC"))) PPC_WEAK_FUNC(sub_83BDA3FC);
PPC_FUNC_IMPL(__imp__sub_83BDA3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA400"))) PPC_WEAK_FUNC(sub_83BDA400);
PPC_FUNC_IMPL(__imp__sub_83BDA400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25672
	ctx.r3.s64 = ctx.r11.s64 + 25672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA40C"))) PPC_WEAK_FUNC(sub_83BDA40C);
PPC_FUNC_IMPL(__imp__sub_83BDA40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA410"))) PPC_WEAK_FUNC(sub_83BDA410);
PPC_FUNC_IMPL(__imp__sub_83BDA410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25680
	ctx.r3.s64 = ctx.r11.s64 + 25680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA41C"))) PPC_WEAK_FUNC(sub_83BDA41C);
PPC_FUNC_IMPL(__imp__sub_83BDA41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDA420"))) PPC_WEAK_FUNC(sub_83BDA420);
PPC_FUNC_IMPL(__imp__sub_83BDA420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,25688
	ctx.r3.s64 = ctx.r11.s64 + 25688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDA42C"))) PPC_WEAK_FUNC(sub_83BDA42C);
PPC_FUNC_IMPL(__imp__sub_83BDA42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

