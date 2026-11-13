#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C66720"))) PPC_WEAK_FUNC(sub_83C66720);
PPC_FUNC_IMPL(__imp__sub_83C66720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6672C"))) PPC_WEAK_FUNC(sub_83C6672C);
PPC_FUNC_IMPL(__imp__sub_83C6672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66730"))) PPC_WEAK_FUNC(sub_83C66730);
PPC_FUNC_IMPL(__imp__sub_83C66730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18976
	ctx.r3.s64 = ctx.r11.s64 + 18976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6673C"))) PPC_WEAK_FUNC(sub_83C6673C);
PPC_FUNC_IMPL(__imp__sub_83C6673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66740"))) PPC_WEAK_FUNC(sub_83C66740);
PPC_FUNC_IMPL(__imp__sub_83C66740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18984
	ctx.r3.s64 = ctx.r11.s64 + 18984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6674C"))) PPC_WEAK_FUNC(sub_83C6674C);
PPC_FUNC_IMPL(__imp__sub_83C6674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66750"))) PPC_WEAK_FUNC(sub_83C66750);
PPC_FUNC_IMPL(__imp__sub_83C66750) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,20976
	ctx.r3.s64 = ctx.r11.s64 + 20976;
	// bl 0x83523120
	ctx.lr = 0x83C66768;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18992
	ctx.r3.s64 = ctx.r10.s64 + 18992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66774;
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

__attribute__((alias("__imp__sub_83C66784"))) PPC_WEAK_FUNC(sub_83C66784);
PPC_FUNC_IMPL(__imp__sub_83C66784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66788"))) PPC_WEAK_FUNC(sub_83C66788);
PPC_FUNC_IMPL(__imp__sub_83C66788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20992
	ctx.r7.s64 = ctx.r8.s64 + 20992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C667B0"))) PPC_WEAK_FUNC(sub_83C667B0);
PPC_FUNC_IMPL(__imp__sub_83C667B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-30136
	ctx.r6.s64 = ctx.r7.s64 + -30136;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30208(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30208);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20992);
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
	// std r9,-30136(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30136, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C667F8"))) PPC_WEAK_FUNC(sub_83C667F8);
PPC_FUNC_IMPL(__imp__sub_83C667F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19008
	ctx.r3.s64 = ctx.r11.s64 + 19008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66804"))) PPC_WEAK_FUNC(sub_83C66804);
PPC_FUNC_IMPL(__imp__sub_83C66804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66808"))) PPC_WEAK_FUNC(sub_83C66808);
PPC_FUNC_IMPL(__imp__sub_83C66808) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,21000
	ctx.r3.s64 = ctx.r11.s64 + 21000;
	// bl 0x8259af80
	ctx.lr = 0x83C66820;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19024
	ctx.r3.s64 = ctx.r10.s64 + 19024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6682C;
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

__attribute__((alias("__imp__sub_83C6683C"))) PPC_WEAK_FUNC(sub_83C6683C);
PPC_FUNC_IMPL(__imp__sub_83C6683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66840"))) PPC_WEAK_FUNC(sub_83C66840);
PPC_FUNC_IMPL(__imp__sub_83C66840) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20980
	ctx.r11.s64 = ctx.r8.s64 + 20980;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-30160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30160);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19016
	ctx.r3.s64 = ctx.r6.s64 + 19016;
	// stw r10,20980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66870"))) PPC_WEAK_FUNC(sub_83C66870);
PPC_FUNC_IMPL(__imp__sub_83C66870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19032
	ctx.r3.s64 = ctx.r11.s64 + 19032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6687C"))) PPC_WEAK_FUNC(sub_83C6687C);
PPC_FUNC_IMPL(__imp__sub_83C6687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66880"))) PPC_WEAK_FUNC(sub_83C66880);
PPC_FUNC_IMPL(__imp__sub_83C66880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19040
	ctx.r3.s64 = ctx.r11.s64 + 19040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6688C"))) PPC_WEAK_FUNC(sub_83C6688C);
PPC_FUNC_IMPL(__imp__sub_83C6688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66890"))) PPC_WEAK_FUNC(sub_83C66890);
PPC_FUNC_IMPL(__imp__sub_83C66890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19048
	ctx.r3.s64 = ctx.r11.s64 + 19048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6689C"))) PPC_WEAK_FUNC(sub_83C6689C);
PPC_FUNC_IMPL(__imp__sub_83C6689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C668A0"))) PPC_WEAK_FUNC(sub_83C668A0);
PPC_FUNC_IMPL(__imp__sub_83C668A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19056
	ctx.r3.s64 = ctx.r11.s64 + 19056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C668AC"))) PPC_WEAK_FUNC(sub_83C668AC);
PPC_FUNC_IMPL(__imp__sub_83C668AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C668B0"))) PPC_WEAK_FUNC(sub_83C668B0);
PPC_FUNC_IMPL(__imp__sub_83C668B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19064
	ctx.r3.s64 = ctx.r11.s64 + 19064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C668BC"))) PPC_WEAK_FUNC(sub_83C668BC);
PPC_FUNC_IMPL(__imp__sub_83C668BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C668C0"))) PPC_WEAK_FUNC(sub_83C668C0);
PPC_FUNC_IMPL(__imp__sub_83C668C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19072
	ctx.r3.s64 = ctx.r11.s64 + 19072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C668CC"))) PPC_WEAK_FUNC(sub_83C668CC);
PPC_FUNC_IMPL(__imp__sub_83C668CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C668D0"))) PPC_WEAK_FUNC(sub_83C668D0);
PPC_FUNC_IMPL(__imp__sub_83C668D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19080
	ctx.r3.s64 = ctx.r11.s64 + 19080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C668DC"))) PPC_WEAK_FUNC(sub_83C668DC);
PPC_FUNC_IMPL(__imp__sub_83C668DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C668E0"))) PPC_WEAK_FUNC(sub_83C668E0);
PPC_FUNC_IMPL(__imp__sub_83C668E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19088
	ctx.r3.s64 = ctx.r11.s64 + 19088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C668EC"))) PPC_WEAK_FUNC(sub_83C668EC);
PPC_FUNC_IMPL(__imp__sub_83C668EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C668F0"))) PPC_WEAK_FUNC(sub_83C668F0);
PPC_FUNC_IMPL(__imp__sub_83C668F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19096
	ctx.r3.s64 = ctx.r11.s64 + 19096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C668FC"))) PPC_WEAK_FUNC(sub_83C668FC);
PPC_FUNC_IMPL(__imp__sub_83C668FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66900"))) PPC_WEAK_FUNC(sub_83C66900);
PPC_FUNC_IMPL(__imp__sub_83C66900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19104
	ctx.r3.s64 = ctx.r11.s64 + 19104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6690C"))) PPC_WEAK_FUNC(sub_83C6690C);
PPC_FUNC_IMPL(__imp__sub_83C6690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66910"))) PPC_WEAK_FUNC(sub_83C66910);
PPC_FUNC_IMPL(__imp__sub_83C66910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19112
	ctx.r3.s64 = ctx.r11.s64 + 19112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6691C"))) PPC_WEAK_FUNC(sub_83C6691C);
PPC_FUNC_IMPL(__imp__sub_83C6691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66920"))) PPC_WEAK_FUNC(sub_83C66920);
PPC_FUNC_IMPL(__imp__sub_83C66920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19120
	ctx.r3.s64 = ctx.r11.s64 + 19120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6692C"))) PPC_WEAK_FUNC(sub_83C6692C);
PPC_FUNC_IMPL(__imp__sub_83C6692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66930"))) PPC_WEAK_FUNC(sub_83C66930);
PPC_FUNC_IMPL(__imp__sub_83C66930) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// bl 0x83523120
	ctx.lr = 0x83C66948;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19128
	ctx.r3.s64 = ctx.r10.s64 + 19128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66954;
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

__attribute__((alias("__imp__sub_83C66964"))) PPC_WEAK_FUNC(sub_83C66964);
PPC_FUNC_IMPL(__imp__sub_83C66964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66968"))) PPC_WEAK_FUNC(sub_83C66968);
PPC_FUNC_IMPL(__imp__sub_83C66968) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21360
	ctx.r7.s64 = ctx.r8.s64 + 21360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66990"))) PPC_WEAK_FUNC(sub_83C66990);
PPC_FUNC_IMPL(__imp__sub_83C66990) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-30008
	ctx.r6.s64 = ctx.r7.s64 + -30008;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30080(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30080);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21360);
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
	// std r9,-30008(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30008, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C669D8"))) PPC_WEAK_FUNC(sub_83C669D8);
PPC_FUNC_IMPL(__imp__sub_83C669D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19144
	ctx.r3.s64 = ctx.r11.s64 + 19144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C669E4"))) PPC_WEAK_FUNC(sub_83C669E4);
PPC_FUNC_IMPL(__imp__sub_83C669E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C669E8"))) PPC_WEAK_FUNC(sub_83C669E8);
PPC_FUNC_IMPL(__imp__sub_83C669E8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// bl 0x8259af80
	ctx.lr = 0x83C66A00;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19160
	ctx.r3.s64 = ctx.r10.s64 + 19160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66A0C;
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

__attribute__((alias("__imp__sub_83C66A1C"))) PPC_WEAK_FUNC(sub_83C66A1C);
PPC_FUNC_IMPL(__imp__sub_83C66A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66A20"))) PPC_WEAK_FUNC(sub_83C66A20);
PPC_FUNC_IMPL(__imp__sub_83C66A20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21348
	ctx.r11.s64 = ctx.r8.s64 + 21348;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-30032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30032);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19152
	ctx.r3.s64 = ctx.r6.s64 + 19152;
	// stw r10,21348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66A50"))) PPC_WEAK_FUNC(sub_83C66A50);
PPC_FUNC_IMPL(__imp__sub_83C66A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19168
	ctx.r3.s64 = ctx.r11.s64 + 19168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66A5C"))) PPC_WEAK_FUNC(sub_83C66A5C);
PPC_FUNC_IMPL(__imp__sub_83C66A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66A60"))) PPC_WEAK_FUNC(sub_83C66A60);
PPC_FUNC_IMPL(__imp__sub_83C66A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19176
	ctx.r3.s64 = ctx.r11.s64 + 19176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66A6C"))) PPC_WEAK_FUNC(sub_83C66A6C);
PPC_FUNC_IMPL(__imp__sub_83C66A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66A70"))) PPC_WEAK_FUNC(sub_83C66A70);
PPC_FUNC_IMPL(__imp__sub_83C66A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19184
	ctx.r3.s64 = ctx.r11.s64 + 19184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66A7C"))) PPC_WEAK_FUNC(sub_83C66A7C);
PPC_FUNC_IMPL(__imp__sub_83C66A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66A80"))) PPC_WEAK_FUNC(sub_83C66A80);
PPC_FUNC_IMPL(__imp__sub_83C66A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19192
	ctx.r3.s64 = ctx.r11.s64 + 19192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66A8C"))) PPC_WEAK_FUNC(sub_83C66A8C);
PPC_FUNC_IMPL(__imp__sub_83C66A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66A90"))) PPC_WEAK_FUNC(sub_83C66A90);
PPC_FUNC_IMPL(__imp__sub_83C66A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19200
	ctx.r3.s64 = ctx.r11.s64 + 19200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66A9C"))) PPC_WEAK_FUNC(sub_83C66A9C);
PPC_FUNC_IMPL(__imp__sub_83C66A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66AA0"))) PPC_WEAK_FUNC(sub_83C66AA0);
PPC_FUNC_IMPL(__imp__sub_83C66AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19208
	ctx.r3.s64 = ctx.r11.s64 + 19208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66AAC"))) PPC_WEAK_FUNC(sub_83C66AAC);
PPC_FUNC_IMPL(__imp__sub_83C66AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66AB0"))) PPC_WEAK_FUNC(sub_83C66AB0);
PPC_FUNC_IMPL(__imp__sub_83C66AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19216
	ctx.r3.s64 = ctx.r11.s64 + 19216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66ABC"))) PPC_WEAK_FUNC(sub_83C66ABC);
PPC_FUNC_IMPL(__imp__sub_83C66ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66AC0"))) PPC_WEAK_FUNC(sub_83C66AC0);
PPC_FUNC_IMPL(__imp__sub_83C66AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19224
	ctx.r3.s64 = ctx.r11.s64 + 19224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66ACC"))) PPC_WEAK_FUNC(sub_83C66ACC);
PPC_FUNC_IMPL(__imp__sub_83C66ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66AD0"))) PPC_WEAK_FUNC(sub_83C66AD0);
PPC_FUNC_IMPL(__imp__sub_83C66AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19232
	ctx.r3.s64 = ctx.r11.s64 + 19232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66ADC"))) PPC_WEAK_FUNC(sub_83C66ADC);
PPC_FUNC_IMPL(__imp__sub_83C66ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66AE0"))) PPC_WEAK_FUNC(sub_83C66AE0);
PPC_FUNC_IMPL(__imp__sub_83C66AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19240
	ctx.r3.s64 = ctx.r11.s64 + 19240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66AEC"))) PPC_WEAK_FUNC(sub_83C66AEC);
PPC_FUNC_IMPL(__imp__sub_83C66AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66AF0"))) PPC_WEAK_FUNC(sub_83C66AF0);
PPC_FUNC_IMPL(__imp__sub_83C66AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19248
	ctx.r3.s64 = ctx.r11.s64 + 19248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66AFC"))) PPC_WEAK_FUNC(sub_83C66AFC);
PPC_FUNC_IMPL(__imp__sub_83C66AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66B00"))) PPC_WEAK_FUNC(sub_83C66B00);
PPC_FUNC_IMPL(__imp__sub_83C66B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19256
	ctx.r3.s64 = ctx.r11.s64 + 19256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66B0C"))) PPC_WEAK_FUNC(sub_83C66B0C);
PPC_FUNC_IMPL(__imp__sub_83C66B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66B10"))) PPC_WEAK_FUNC(sub_83C66B10);
PPC_FUNC_IMPL(__imp__sub_83C66B10) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,21712
	ctx.r3.s64 = ctx.r11.s64 + 21712;
	// bl 0x83523120
	ctx.lr = 0x83C66B28;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19264
	ctx.r3.s64 = ctx.r10.s64 + 19264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66B34;
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

__attribute__((alias("__imp__sub_83C66B44"))) PPC_WEAK_FUNC(sub_83C66B44);
PPC_FUNC_IMPL(__imp__sub_83C66B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66B48"))) PPC_WEAK_FUNC(sub_83C66B48);
PPC_FUNC_IMPL(__imp__sub_83C66B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21728
	ctx.r7.s64 = ctx.r8.s64 + 21728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66B70"))) PPC_WEAK_FUNC(sub_83C66B70);
PPC_FUNC_IMPL(__imp__sub_83C66B70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-29880
	ctx.r6.s64 = ctx.r7.s64 + -29880;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21728);
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
	// std r9,-29880(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66BB8"))) PPC_WEAK_FUNC(sub_83C66BB8);
PPC_FUNC_IMPL(__imp__sub_83C66BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19280
	ctx.r3.s64 = ctx.r11.s64 + 19280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66BC4"))) PPC_WEAK_FUNC(sub_83C66BC4);
PPC_FUNC_IMPL(__imp__sub_83C66BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66BC8"))) PPC_WEAK_FUNC(sub_83C66BC8);
PPC_FUNC_IMPL(__imp__sub_83C66BC8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,21736
	ctx.r3.s64 = ctx.r11.s64 + 21736;
	// bl 0x8259af80
	ctx.lr = 0x83C66BE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19296
	ctx.r3.s64 = ctx.r10.s64 + 19296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66BEC;
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

__attribute__((alias("__imp__sub_83C66BFC"))) PPC_WEAK_FUNC(sub_83C66BFC);
PPC_FUNC_IMPL(__imp__sub_83C66BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66C00"))) PPC_WEAK_FUNC(sub_83C66C00);
PPC_FUNC_IMPL(__imp__sub_83C66C00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21716
	ctx.r11.s64 = ctx.r8.s64 + 21716;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-29904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29904);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19288
	ctx.r3.s64 = ctx.r6.s64 + 19288;
	// stw r10,21716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66C30"))) PPC_WEAK_FUNC(sub_83C66C30);
PPC_FUNC_IMPL(__imp__sub_83C66C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19304
	ctx.r3.s64 = ctx.r11.s64 + 19304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66C3C"))) PPC_WEAK_FUNC(sub_83C66C3C);
PPC_FUNC_IMPL(__imp__sub_83C66C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66C40"))) PPC_WEAK_FUNC(sub_83C66C40);
PPC_FUNC_IMPL(__imp__sub_83C66C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19312
	ctx.r3.s64 = ctx.r11.s64 + 19312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66C4C"))) PPC_WEAK_FUNC(sub_83C66C4C);
PPC_FUNC_IMPL(__imp__sub_83C66C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66C50"))) PPC_WEAK_FUNC(sub_83C66C50);
PPC_FUNC_IMPL(__imp__sub_83C66C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19320
	ctx.r3.s64 = ctx.r11.s64 + 19320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66C5C"))) PPC_WEAK_FUNC(sub_83C66C5C);
PPC_FUNC_IMPL(__imp__sub_83C66C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66C60"))) PPC_WEAK_FUNC(sub_83C66C60);
PPC_FUNC_IMPL(__imp__sub_83C66C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19328
	ctx.r3.s64 = ctx.r11.s64 + 19328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66C6C"))) PPC_WEAK_FUNC(sub_83C66C6C);
PPC_FUNC_IMPL(__imp__sub_83C66C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66C70"))) PPC_WEAK_FUNC(sub_83C66C70);
PPC_FUNC_IMPL(__imp__sub_83C66C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19336
	ctx.r3.s64 = ctx.r11.s64 + 19336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66C7C"))) PPC_WEAK_FUNC(sub_83C66C7C);
PPC_FUNC_IMPL(__imp__sub_83C66C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66C80"))) PPC_WEAK_FUNC(sub_83C66C80);
PPC_FUNC_IMPL(__imp__sub_83C66C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19344
	ctx.r3.s64 = ctx.r11.s64 + 19344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66C8C"))) PPC_WEAK_FUNC(sub_83C66C8C);
PPC_FUNC_IMPL(__imp__sub_83C66C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66C90"))) PPC_WEAK_FUNC(sub_83C66C90);
PPC_FUNC_IMPL(__imp__sub_83C66C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19352
	ctx.r3.s64 = ctx.r11.s64 + 19352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66C9C"))) PPC_WEAK_FUNC(sub_83C66C9C);
PPC_FUNC_IMPL(__imp__sub_83C66C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66CA0"))) PPC_WEAK_FUNC(sub_83C66CA0);
PPC_FUNC_IMPL(__imp__sub_83C66CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19360
	ctx.r3.s64 = ctx.r11.s64 + 19360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66CAC"))) PPC_WEAK_FUNC(sub_83C66CAC);
PPC_FUNC_IMPL(__imp__sub_83C66CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66CB0"))) PPC_WEAK_FUNC(sub_83C66CB0);
PPC_FUNC_IMPL(__imp__sub_83C66CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19368
	ctx.r3.s64 = ctx.r11.s64 + 19368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66CBC"))) PPC_WEAK_FUNC(sub_83C66CBC);
PPC_FUNC_IMPL(__imp__sub_83C66CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66CC0"))) PPC_WEAK_FUNC(sub_83C66CC0);
PPC_FUNC_IMPL(__imp__sub_83C66CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19376
	ctx.r3.s64 = ctx.r11.s64 + 19376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66CCC"))) PPC_WEAK_FUNC(sub_83C66CCC);
PPC_FUNC_IMPL(__imp__sub_83C66CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66CD0"))) PPC_WEAK_FUNC(sub_83C66CD0);
PPC_FUNC_IMPL(__imp__sub_83C66CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19384
	ctx.r3.s64 = ctx.r11.s64 + 19384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66CDC"))) PPC_WEAK_FUNC(sub_83C66CDC);
PPC_FUNC_IMPL(__imp__sub_83C66CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66CE0"))) PPC_WEAK_FUNC(sub_83C66CE0);
PPC_FUNC_IMPL(__imp__sub_83C66CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19392
	ctx.r3.s64 = ctx.r11.s64 + 19392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66CEC"))) PPC_WEAK_FUNC(sub_83C66CEC);
PPC_FUNC_IMPL(__imp__sub_83C66CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66CF0"))) PPC_WEAK_FUNC(sub_83C66CF0);
PPC_FUNC_IMPL(__imp__sub_83C66CF0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,22080
	ctx.r3.s64 = ctx.r11.s64 + 22080;
	// bl 0x83523120
	ctx.lr = 0x83C66D08;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19400
	ctx.r3.s64 = ctx.r10.s64 + 19400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66D14;
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

__attribute__((alias("__imp__sub_83C66D24"))) PPC_WEAK_FUNC(sub_83C66D24);
PPC_FUNC_IMPL(__imp__sub_83C66D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66D28"))) PPC_WEAK_FUNC(sub_83C66D28);
PPC_FUNC_IMPL(__imp__sub_83C66D28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22096
	ctx.r7.s64 = ctx.r8.s64 + 22096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66D50"))) PPC_WEAK_FUNC(sub_83C66D50);
PPC_FUNC_IMPL(__imp__sub_83C66D50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-29752
	ctx.r6.s64 = ctx.r7.s64 + -29752;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22096);
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
	// std r9,-29752(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66D98"))) PPC_WEAK_FUNC(sub_83C66D98);
PPC_FUNC_IMPL(__imp__sub_83C66D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19416
	ctx.r3.s64 = ctx.r11.s64 + 19416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66DA4"))) PPC_WEAK_FUNC(sub_83C66DA4);
PPC_FUNC_IMPL(__imp__sub_83C66DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66DA8"))) PPC_WEAK_FUNC(sub_83C66DA8);
PPC_FUNC_IMPL(__imp__sub_83C66DA8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,22104
	ctx.r3.s64 = ctx.r11.s64 + 22104;
	// bl 0x8259af80
	ctx.lr = 0x83C66DC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19432
	ctx.r3.s64 = ctx.r10.s64 + 19432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66DCC;
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

__attribute__((alias("__imp__sub_83C66DDC"))) PPC_WEAK_FUNC(sub_83C66DDC);
PPC_FUNC_IMPL(__imp__sub_83C66DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66DE0"))) PPC_WEAK_FUNC(sub_83C66DE0);
PPC_FUNC_IMPL(__imp__sub_83C66DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22084
	ctx.r11.s64 = ctx.r8.s64 + 22084;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-29776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29776);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19424
	ctx.r3.s64 = ctx.r6.s64 + 19424;
	// stw r10,22084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E10"))) PPC_WEAK_FUNC(sub_83C66E10);
PPC_FUNC_IMPL(__imp__sub_83C66E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19440
	ctx.r3.s64 = ctx.r11.s64 + 19440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E1C"))) PPC_WEAK_FUNC(sub_83C66E1C);
PPC_FUNC_IMPL(__imp__sub_83C66E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66E20"))) PPC_WEAK_FUNC(sub_83C66E20);
PPC_FUNC_IMPL(__imp__sub_83C66E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19448
	ctx.r3.s64 = ctx.r11.s64 + 19448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E2C"))) PPC_WEAK_FUNC(sub_83C66E2C);
PPC_FUNC_IMPL(__imp__sub_83C66E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66E30"))) PPC_WEAK_FUNC(sub_83C66E30);
PPC_FUNC_IMPL(__imp__sub_83C66E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19456
	ctx.r3.s64 = ctx.r11.s64 + 19456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E3C"))) PPC_WEAK_FUNC(sub_83C66E3C);
PPC_FUNC_IMPL(__imp__sub_83C66E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66E40"))) PPC_WEAK_FUNC(sub_83C66E40);
PPC_FUNC_IMPL(__imp__sub_83C66E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19464
	ctx.r3.s64 = ctx.r11.s64 + 19464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E4C"))) PPC_WEAK_FUNC(sub_83C66E4C);
PPC_FUNC_IMPL(__imp__sub_83C66E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66E50"))) PPC_WEAK_FUNC(sub_83C66E50);
PPC_FUNC_IMPL(__imp__sub_83C66E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19472
	ctx.r3.s64 = ctx.r11.s64 + 19472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E5C"))) PPC_WEAK_FUNC(sub_83C66E5C);
PPC_FUNC_IMPL(__imp__sub_83C66E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66E60"))) PPC_WEAK_FUNC(sub_83C66E60);
PPC_FUNC_IMPL(__imp__sub_83C66E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19480
	ctx.r3.s64 = ctx.r11.s64 + 19480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E6C"))) PPC_WEAK_FUNC(sub_83C66E6C);
PPC_FUNC_IMPL(__imp__sub_83C66E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66E70"))) PPC_WEAK_FUNC(sub_83C66E70);
PPC_FUNC_IMPL(__imp__sub_83C66E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19488
	ctx.r3.s64 = ctx.r11.s64 + 19488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E7C"))) PPC_WEAK_FUNC(sub_83C66E7C);
PPC_FUNC_IMPL(__imp__sub_83C66E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66E80"))) PPC_WEAK_FUNC(sub_83C66E80);
PPC_FUNC_IMPL(__imp__sub_83C66E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19496
	ctx.r3.s64 = ctx.r11.s64 + 19496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E8C"))) PPC_WEAK_FUNC(sub_83C66E8C);
PPC_FUNC_IMPL(__imp__sub_83C66E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66E90"))) PPC_WEAK_FUNC(sub_83C66E90);
PPC_FUNC_IMPL(__imp__sub_83C66E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19504
	ctx.r3.s64 = ctx.r11.s64 + 19504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66E9C"))) PPC_WEAK_FUNC(sub_83C66E9C);
PPC_FUNC_IMPL(__imp__sub_83C66E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66EA0"))) PPC_WEAK_FUNC(sub_83C66EA0);
PPC_FUNC_IMPL(__imp__sub_83C66EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19512
	ctx.r3.s64 = ctx.r11.s64 + 19512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66EAC"))) PPC_WEAK_FUNC(sub_83C66EAC);
PPC_FUNC_IMPL(__imp__sub_83C66EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66EB0"))) PPC_WEAK_FUNC(sub_83C66EB0);
PPC_FUNC_IMPL(__imp__sub_83C66EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19520
	ctx.r3.s64 = ctx.r11.s64 + 19520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66EBC"))) PPC_WEAK_FUNC(sub_83C66EBC);
PPC_FUNC_IMPL(__imp__sub_83C66EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66EC0"))) PPC_WEAK_FUNC(sub_83C66EC0);
PPC_FUNC_IMPL(__imp__sub_83C66EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19528
	ctx.r3.s64 = ctx.r11.s64 + 19528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66ECC"))) PPC_WEAK_FUNC(sub_83C66ECC);
PPC_FUNC_IMPL(__imp__sub_83C66ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66ED0"))) PPC_WEAK_FUNC(sub_83C66ED0);
PPC_FUNC_IMPL(__imp__sub_83C66ED0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,22448
	ctx.r3.s64 = ctx.r11.s64 + 22448;
	// bl 0x83523120
	ctx.lr = 0x83C66EE8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19536
	ctx.r3.s64 = ctx.r10.s64 + 19536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66EF4;
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

__attribute__((alias("__imp__sub_83C66F04"))) PPC_WEAK_FUNC(sub_83C66F04);
PPC_FUNC_IMPL(__imp__sub_83C66F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66F08"))) PPC_WEAK_FUNC(sub_83C66F08);
PPC_FUNC_IMPL(__imp__sub_83C66F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22464
	ctx.r7.s64 = ctx.r8.s64 + 22464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66F30"))) PPC_WEAK_FUNC(sub_83C66F30);
PPC_FUNC_IMPL(__imp__sub_83C66F30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-29624
	ctx.r6.s64 = ctx.r7.s64 + -29624;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22464);
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
	// std r9,-29624(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29624, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66F78"))) PPC_WEAK_FUNC(sub_83C66F78);
PPC_FUNC_IMPL(__imp__sub_83C66F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19552
	ctx.r3.s64 = ctx.r11.s64 + 19552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66F84"))) PPC_WEAK_FUNC(sub_83C66F84);
PPC_FUNC_IMPL(__imp__sub_83C66F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66F88"))) PPC_WEAK_FUNC(sub_83C66F88);
PPC_FUNC_IMPL(__imp__sub_83C66F88) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,22472
	ctx.r3.s64 = ctx.r11.s64 + 22472;
	// bl 0x8259af80
	ctx.lr = 0x83C66FA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19568
	ctx.r3.s64 = ctx.r10.s64 + 19568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66FAC;
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

__attribute__((alias("__imp__sub_83C66FBC"))) PPC_WEAK_FUNC(sub_83C66FBC);
PPC_FUNC_IMPL(__imp__sub_83C66FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66FC0"))) PPC_WEAK_FUNC(sub_83C66FC0);
PPC_FUNC_IMPL(__imp__sub_83C66FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22452
	ctx.r11.s64 = ctx.r8.s64 + 22452;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-29648(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29648);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19560
	ctx.r3.s64 = ctx.r6.s64 + 19560;
	// stw r10,22452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66FF0"))) PPC_WEAK_FUNC(sub_83C66FF0);
PPC_FUNC_IMPL(__imp__sub_83C66FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19576
	ctx.r3.s64 = ctx.r11.s64 + 19576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66FFC"))) PPC_WEAK_FUNC(sub_83C66FFC);
PPC_FUNC_IMPL(__imp__sub_83C66FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67000"))) PPC_WEAK_FUNC(sub_83C67000);
PPC_FUNC_IMPL(__imp__sub_83C67000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19584
	ctx.r3.s64 = ctx.r11.s64 + 19584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6700C"))) PPC_WEAK_FUNC(sub_83C6700C);
PPC_FUNC_IMPL(__imp__sub_83C6700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67010"))) PPC_WEAK_FUNC(sub_83C67010);
PPC_FUNC_IMPL(__imp__sub_83C67010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19592
	ctx.r3.s64 = ctx.r11.s64 + 19592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6701C"))) PPC_WEAK_FUNC(sub_83C6701C);
PPC_FUNC_IMPL(__imp__sub_83C6701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67020"))) PPC_WEAK_FUNC(sub_83C67020);
PPC_FUNC_IMPL(__imp__sub_83C67020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19600
	ctx.r3.s64 = ctx.r11.s64 + 19600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6702C"))) PPC_WEAK_FUNC(sub_83C6702C);
PPC_FUNC_IMPL(__imp__sub_83C6702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67030"))) PPC_WEAK_FUNC(sub_83C67030);
PPC_FUNC_IMPL(__imp__sub_83C67030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19608
	ctx.r3.s64 = ctx.r11.s64 + 19608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6703C"))) PPC_WEAK_FUNC(sub_83C6703C);
PPC_FUNC_IMPL(__imp__sub_83C6703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67040"))) PPC_WEAK_FUNC(sub_83C67040);
PPC_FUNC_IMPL(__imp__sub_83C67040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19616
	ctx.r3.s64 = ctx.r11.s64 + 19616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6704C"))) PPC_WEAK_FUNC(sub_83C6704C);
PPC_FUNC_IMPL(__imp__sub_83C6704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67050"))) PPC_WEAK_FUNC(sub_83C67050);
PPC_FUNC_IMPL(__imp__sub_83C67050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19624
	ctx.r3.s64 = ctx.r11.s64 + 19624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6705C"))) PPC_WEAK_FUNC(sub_83C6705C);
PPC_FUNC_IMPL(__imp__sub_83C6705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67060"))) PPC_WEAK_FUNC(sub_83C67060);
PPC_FUNC_IMPL(__imp__sub_83C67060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19632
	ctx.r3.s64 = ctx.r11.s64 + 19632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6706C"))) PPC_WEAK_FUNC(sub_83C6706C);
PPC_FUNC_IMPL(__imp__sub_83C6706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67070"))) PPC_WEAK_FUNC(sub_83C67070);
PPC_FUNC_IMPL(__imp__sub_83C67070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19640
	ctx.r3.s64 = ctx.r11.s64 + 19640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6707C"))) PPC_WEAK_FUNC(sub_83C6707C);
PPC_FUNC_IMPL(__imp__sub_83C6707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67080"))) PPC_WEAK_FUNC(sub_83C67080);
PPC_FUNC_IMPL(__imp__sub_83C67080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6708C"))) PPC_WEAK_FUNC(sub_83C6708C);
PPC_FUNC_IMPL(__imp__sub_83C6708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67090"))) PPC_WEAK_FUNC(sub_83C67090);
PPC_FUNC_IMPL(__imp__sub_83C67090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19656
	ctx.r3.s64 = ctx.r11.s64 + 19656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6709C"))) PPC_WEAK_FUNC(sub_83C6709C);
PPC_FUNC_IMPL(__imp__sub_83C6709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C670A0"))) PPC_WEAK_FUNC(sub_83C670A0);
PPC_FUNC_IMPL(__imp__sub_83C670A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19664
	ctx.r3.s64 = ctx.r11.s64 + 19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C670AC"))) PPC_WEAK_FUNC(sub_83C670AC);
PPC_FUNC_IMPL(__imp__sub_83C670AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C670B0"))) PPC_WEAK_FUNC(sub_83C670B0);
PPC_FUNC_IMPL(__imp__sub_83C670B0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,22816
	ctx.r3.s64 = ctx.r11.s64 + 22816;
	// bl 0x83523120
	ctx.lr = 0x83C670C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19672
	ctx.r3.s64 = ctx.r10.s64 + 19672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C670D4;
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

__attribute__((alias("__imp__sub_83C670E4"))) PPC_WEAK_FUNC(sub_83C670E4);
PPC_FUNC_IMPL(__imp__sub_83C670E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C670E8"))) PPC_WEAK_FUNC(sub_83C670E8);
PPC_FUNC_IMPL(__imp__sub_83C670E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22832
	ctx.r7.s64 = ctx.r8.s64 + 22832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67110"))) PPC_WEAK_FUNC(sub_83C67110);
PPC_FUNC_IMPL(__imp__sub_83C67110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-29496
	ctx.r6.s64 = ctx.r7.s64 + -29496;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29568(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29568);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22832);
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
	// std r9,-29496(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29496, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67158"))) PPC_WEAK_FUNC(sub_83C67158);
PPC_FUNC_IMPL(__imp__sub_83C67158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19688
	ctx.r3.s64 = ctx.r11.s64 + 19688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67164"))) PPC_WEAK_FUNC(sub_83C67164);
PPC_FUNC_IMPL(__imp__sub_83C67164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67168"))) PPC_WEAK_FUNC(sub_83C67168);
PPC_FUNC_IMPL(__imp__sub_83C67168) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,22840
	ctx.r3.s64 = ctx.r11.s64 + 22840;
	// bl 0x8259af80
	ctx.lr = 0x83C67180;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19704
	ctx.r3.s64 = ctx.r10.s64 + 19704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6718C;
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

__attribute__((alias("__imp__sub_83C6719C"))) PPC_WEAK_FUNC(sub_83C6719C);
PPC_FUNC_IMPL(__imp__sub_83C6719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C671A0"))) PPC_WEAK_FUNC(sub_83C671A0);
PPC_FUNC_IMPL(__imp__sub_83C671A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22820
	ctx.r11.s64 = ctx.r8.s64 + 22820;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-29520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29520);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19696
	ctx.r3.s64 = ctx.r6.s64 + 19696;
	// stw r10,22820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22820, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C671D0"))) PPC_WEAK_FUNC(sub_83C671D0);
PPC_FUNC_IMPL(__imp__sub_83C671D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19712
	ctx.r3.s64 = ctx.r11.s64 + 19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C671DC"))) PPC_WEAK_FUNC(sub_83C671DC);
PPC_FUNC_IMPL(__imp__sub_83C671DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C671E0"))) PPC_WEAK_FUNC(sub_83C671E0);
PPC_FUNC_IMPL(__imp__sub_83C671E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19720
	ctx.r3.s64 = ctx.r11.s64 + 19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C671EC"))) PPC_WEAK_FUNC(sub_83C671EC);
PPC_FUNC_IMPL(__imp__sub_83C671EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C671F0"))) PPC_WEAK_FUNC(sub_83C671F0);
PPC_FUNC_IMPL(__imp__sub_83C671F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19728
	ctx.r3.s64 = ctx.r11.s64 + 19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C671FC"))) PPC_WEAK_FUNC(sub_83C671FC);
PPC_FUNC_IMPL(__imp__sub_83C671FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67200"))) PPC_WEAK_FUNC(sub_83C67200);
PPC_FUNC_IMPL(__imp__sub_83C67200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19736
	ctx.r3.s64 = ctx.r11.s64 + 19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6720C"))) PPC_WEAK_FUNC(sub_83C6720C);
PPC_FUNC_IMPL(__imp__sub_83C6720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67210"))) PPC_WEAK_FUNC(sub_83C67210);
PPC_FUNC_IMPL(__imp__sub_83C67210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19744
	ctx.r3.s64 = ctx.r11.s64 + 19744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6721C"))) PPC_WEAK_FUNC(sub_83C6721C);
PPC_FUNC_IMPL(__imp__sub_83C6721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67220"))) PPC_WEAK_FUNC(sub_83C67220);
PPC_FUNC_IMPL(__imp__sub_83C67220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19752
	ctx.r3.s64 = ctx.r11.s64 + 19752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6722C"))) PPC_WEAK_FUNC(sub_83C6722C);
PPC_FUNC_IMPL(__imp__sub_83C6722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67230"))) PPC_WEAK_FUNC(sub_83C67230);
PPC_FUNC_IMPL(__imp__sub_83C67230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19760
	ctx.r3.s64 = ctx.r11.s64 + 19760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6723C"))) PPC_WEAK_FUNC(sub_83C6723C);
PPC_FUNC_IMPL(__imp__sub_83C6723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67240"))) PPC_WEAK_FUNC(sub_83C67240);
PPC_FUNC_IMPL(__imp__sub_83C67240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19768
	ctx.r3.s64 = ctx.r11.s64 + 19768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6724C"))) PPC_WEAK_FUNC(sub_83C6724C);
PPC_FUNC_IMPL(__imp__sub_83C6724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67250"))) PPC_WEAK_FUNC(sub_83C67250);
PPC_FUNC_IMPL(__imp__sub_83C67250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19776
	ctx.r3.s64 = ctx.r11.s64 + 19776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6725C"))) PPC_WEAK_FUNC(sub_83C6725C);
PPC_FUNC_IMPL(__imp__sub_83C6725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67260"))) PPC_WEAK_FUNC(sub_83C67260);
PPC_FUNC_IMPL(__imp__sub_83C67260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19784
	ctx.r3.s64 = ctx.r11.s64 + 19784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6726C"))) PPC_WEAK_FUNC(sub_83C6726C);
PPC_FUNC_IMPL(__imp__sub_83C6726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67270"))) PPC_WEAK_FUNC(sub_83C67270);
PPC_FUNC_IMPL(__imp__sub_83C67270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19792
	ctx.r3.s64 = ctx.r11.s64 + 19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6727C"))) PPC_WEAK_FUNC(sub_83C6727C);
PPC_FUNC_IMPL(__imp__sub_83C6727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67280"))) PPC_WEAK_FUNC(sub_83C67280);
PPC_FUNC_IMPL(__imp__sub_83C67280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6728C"))) PPC_WEAK_FUNC(sub_83C6728C);
PPC_FUNC_IMPL(__imp__sub_83C6728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67290"))) PPC_WEAK_FUNC(sub_83C67290);
PPC_FUNC_IMPL(__imp__sub_83C67290) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,23184
	ctx.r3.s64 = ctx.r11.s64 + 23184;
	// bl 0x83523120
	ctx.lr = 0x83C672A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19808
	ctx.r3.s64 = ctx.r10.s64 + 19808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C672B4;
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

__attribute__((alias("__imp__sub_83C672C4"))) PPC_WEAK_FUNC(sub_83C672C4);
PPC_FUNC_IMPL(__imp__sub_83C672C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C672C8"))) PPC_WEAK_FUNC(sub_83C672C8);
PPC_FUNC_IMPL(__imp__sub_83C672C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23200
	ctx.r7.s64 = ctx.r8.s64 + 23200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C672F0"))) PPC_WEAK_FUNC(sub_83C672F0);
PPC_FUNC_IMPL(__imp__sub_83C672F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-29344
	ctx.r6.s64 = ctx.r7.s64 + -29344;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29416(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29416);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23200);
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
	// std r9,-29344(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29344, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67338"))) PPC_WEAK_FUNC(sub_83C67338);
PPC_FUNC_IMPL(__imp__sub_83C67338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19824
	ctx.r3.s64 = ctx.r11.s64 + 19824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67344"))) PPC_WEAK_FUNC(sub_83C67344);
PPC_FUNC_IMPL(__imp__sub_83C67344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67348"))) PPC_WEAK_FUNC(sub_83C67348);
PPC_FUNC_IMPL(__imp__sub_83C67348) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// bl 0x8259af80
	ctx.lr = 0x83C67360;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19840
	ctx.r3.s64 = ctx.r10.s64 + 19840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6736C;
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

__attribute__((alias("__imp__sub_83C6737C"))) PPC_WEAK_FUNC(sub_83C6737C);
PPC_FUNC_IMPL(__imp__sub_83C6737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67380"))) PPC_WEAK_FUNC(sub_83C67380);
PPC_FUNC_IMPL(__imp__sub_83C67380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23188
	ctx.r11.s64 = ctx.r8.s64 + 23188;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-29368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29368);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19832
	ctx.r3.s64 = ctx.r6.s64 + 19832;
	// stw r10,23188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23188, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C673B0"))) PPC_WEAK_FUNC(sub_83C673B0);
PPC_FUNC_IMPL(__imp__sub_83C673B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19848
	ctx.r3.s64 = ctx.r11.s64 + 19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C673BC"))) PPC_WEAK_FUNC(sub_83C673BC);
PPC_FUNC_IMPL(__imp__sub_83C673BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C673C0"))) PPC_WEAK_FUNC(sub_83C673C0);
PPC_FUNC_IMPL(__imp__sub_83C673C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19856
	ctx.r3.s64 = ctx.r11.s64 + 19856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C673CC"))) PPC_WEAK_FUNC(sub_83C673CC);
PPC_FUNC_IMPL(__imp__sub_83C673CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C673D0"))) PPC_WEAK_FUNC(sub_83C673D0);
PPC_FUNC_IMPL(__imp__sub_83C673D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19864
	ctx.r3.s64 = ctx.r11.s64 + 19864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C673DC"))) PPC_WEAK_FUNC(sub_83C673DC);
PPC_FUNC_IMPL(__imp__sub_83C673DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C673E0"))) PPC_WEAK_FUNC(sub_83C673E0);
PPC_FUNC_IMPL(__imp__sub_83C673E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19872
	ctx.r3.s64 = ctx.r11.s64 + 19872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C673EC"))) PPC_WEAK_FUNC(sub_83C673EC);
PPC_FUNC_IMPL(__imp__sub_83C673EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C673F0"))) PPC_WEAK_FUNC(sub_83C673F0);
PPC_FUNC_IMPL(__imp__sub_83C673F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19880
	ctx.r3.s64 = ctx.r11.s64 + 19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C673FC"))) PPC_WEAK_FUNC(sub_83C673FC);
PPC_FUNC_IMPL(__imp__sub_83C673FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67400"))) PPC_WEAK_FUNC(sub_83C67400);
PPC_FUNC_IMPL(__imp__sub_83C67400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6740C"))) PPC_WEAK_FUNC(sub_83C6740C);
PPC_FUNC_IMPL(__imp__sub_83C6740C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67410"))) PPC_WEAK_FUNC(sub_83C67410);
PPC_FUNC_IMPL(__imp__sub_83C67410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6741C"))) PPC_WEAK_FUNC(sub_83C6741C);
PPC_FUNC_IMPL(__imp__sub_83C6741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67420"))) PPC_WEAK_FUNC(sub_83C67420);
PPC_FUNC_IMPL(__imp__sub_83C67420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19904
	ctx.r3.s64 = ctx.r11.s64 + 19904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6742C"))) PPC_WEAK_FUNC(sub_83C6742C);
PPC_FUNC_IMPL(__imp__sub_83C6742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67430"))) PPC_WEAK_FUNC(sub_83C67430);
PPC_FUNC_IMPL(__imp__sub_83C67430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19912
	ctx.r3.s64 = ctx.r11.s64 + 19912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6743C"))) PPC_WEAK_FUNC(sub_83C6743C);
PPC_FUNC_IMPL(__imp__sub_83C6743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67440"))) PPC_WEAK_FUNC(sub_83C67440);
PPC_FUNC_IMPL(__imp__sub_83C67440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19920
	ctx.r3.s64 = ctx.r11.s64 + 19920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6744C"))) PPC_WEAK_FUNC(sub_83C6744C);
PPC_FUNC_IMPL(__imp__sub_83C6744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67450"))) PPC_WEAK_FUNC(sub_83C67450);
PPC_FUNC_IMPL(__imp__sub_83C67450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6745C"))) PPC_WEAK_FUNC(sub_83C6745C);
PPC_FUNC_IMPL(__imp__sub_83C6745C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67460"))) PPC_WEAK_FUNC(sub_83C67460);
PPC_FUNC_IMPL(__imp__sub_83C67460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6746C"))) PPC_WEAK_FUNC(sub_83C6746C);
PPC_FUNC_IMPL(__imp__sub_83C6746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67470"))) PPC_WEAK_FUNC(sub_83C67470);
PPC_FUNC_IMPL(__imp__sub_83C67470) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// bl 0x83523120
	ctx.lr = 0x83C67488;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19944
	ctx.r3.s64 = ctx.r10.s64 + 19944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C67494;
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

__attribute__((alias("__imp__sub_83C674A4"))) PPC_WEAK_FUNC(sub_83C674A4);
PPC_FUNC_IMPL(__imp__sub_83C674A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C674A8"))) PPC_WEAK_FUNC(sub_83C674A8);
PPC_FUNC_IMPL(__imp__sub_83C674A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23568
	ctx.r7.s64 = ctx.r8.s64 + 23568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C674D0"))) PPC_WEAK_FUNC(sub_83C674D0);
PPC_FUNC_IMPL(__imp__sub_83C674D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-29216
	ctx.r6.s64 = ctx.r7.s64 + -29216;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29288(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29288);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23568);
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
	// std r9,-29216(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29216, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C67518"))) PPC_WEAK_FUNC(sub_83C67518);
PPC_FUNC_IMPL(__imp__sub_83C67518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67524"))) PPC_WEAK_FUNC(sub_83C67524);
PPC_FUNC_IMPL(__imp__sub_83C67524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67528"))) PPC_WEAK_FUNC(sub_83C67528);
PPC_FUNC_IMPL(__imp__sub_83C67528) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,23576
	ctx.r3.s64 = ctx.r11.s64 + 23576;
	// bl 0x8259af80
	ctx.lr = 0x83C67540;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,19976
	ctx.r3.s64 = ctx.r10.s64 + 19976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6754C;
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

__attribute__((alias("__imp__sub_83C6755C"))) PPC_WEAK_FUNC(sub_83C6755C);
PPC_FUNC_IMPL(__imp__sub_83C6755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C67560"))) PPC_WEAK_FUNC(sub_83C67560);
PPC_FUNC_IMPL(__imp__sub_83C67560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23556
	ctx.r11.s64 = ctx.r8.s64 + 23556;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-29240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29240);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19968
	ctx.r3.s64 = ctx.r6.s64 + 19968;
	// stw r10,23556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C67590"))) PPC_WEAK_FUNC(sub_83C67590);
PPC_FUNC_IMPL(__imp__sub_83C67590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19984
	ctx.r3.s64 = ctx.r11.s64 + 19984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6759C"))) PPC_WEAK_FUNC(sub_83C6759C);
PPC_FUNC_IMPL(__imp__sub_83C6759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C675A0"))) PPC_WEAK_FUNC(sub_83C675A0);
PPC_FUNC_IMPL(__imp__sub_83C675A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,19992
	ctx.r3.s64 = ctx.r11.s64 + 19992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C675AC"))) PPC_WEAK_FUNC(sub_83C675AC);
PPC_FUNC_IMPL(__imp__sub_83C675AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C675B0"))) PPC_WEAK_FUNC(sub_83C675B0);
PPC_FUNC_IMPL(__imp__sub_83C675B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C675BC"))) PPC_WEAK_FUNC(sub_83C675BC);
PPC_FUNC_IMPL(__imp__sub_83C675BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C675C0"))) PPC_WEAK_FUNC(sub_83C675C0);
PPC_FUNC_IMPL(__imp__sub_83C675C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20008
	ctx.r3.s64 = ctx.r11.s64 + 20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C675CC"))) PPC_WEAK_FUNC(sub_83C675CC);
PPC_FUNC_IMPL(__imp__sub_83C675CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C675D0"))) PPC_WEAK_FUNC(sub_83C675D0);
PPC_FUNC_IMPL(__imp__sub_83C675D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C675DC"))) PPC_WEAK_FUNC(sub_83C675DC);
PPC_FUNC_IMPL(__imp__sub_83C675DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

