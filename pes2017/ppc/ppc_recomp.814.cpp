#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C63BBC"))) PPC_WEAK_FUNC(sub_83C63BBC);
PPC_FUNC_IMPL(__imp__sub_83C63BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63BC0"))) PPC_WEAK_FUNC(sub_83C63BC0);
PPC_FUNC_IMPL(__imp__sub_83C63BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15808
	ctx.r3.s64 = ctx.r11.s64 + 15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63BCC"))) PPC_WEAK_FUNC(sub_83C63BCC);
PPC_FUNC_IMPL(__imp__sub_83C63BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63BD0"))) PPC_WEAK_FUNC(sub_83C63BD0);
PPC_FUNC_IMPL(__imp__sub_83C63BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15816
	ctx.r3.s64 = ctx.r11.s64 + 15816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63BDC"))) PPC_WEAK_FUNC(sub_83C63BDC);
PPC_FUNC_IMPL(__imp__sub_83C63BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63BE0"))) PPC_WEAK_FUNC(sub_83C63BE0);
PPC_FUNC_IMPL(__imp__sub_83C63BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15824
	ctx.r3.s64 = ctx.r11.s64 + 15824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63BEC"))) PPC_WEAK_FUNC(sub_83C63BEC);
PPC_FUNC_IMPL(__imp__sub_83C63BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63BF0"))) PPC_WEAK_FUNC(sub_83C63BF0);
PPC_FUNC_IMPL(__imp__sub_83C63BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15832
	ctx.r3.s64 = ctx.r11.s64 + 15832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63BFC"))) PPC_WEAK_FUNC(sub_83C63BFC);
PPC_FUNC_IMPL(__imp__sub_83C63BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63C00"))) PPC_WEAK_FUNC(sub_83C63C00);
PPC_FUNC_IMPL(__imp__sub_83C63C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63C0C"))) PPC_WEAK_FUNC(sub_83C63C0C);
PPC_FUNC_IMPL(__imp__sub_83C63C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63C10"))) PPC_WEAK_FUNC(sub_83C63C10);
PPC_FUNC_IMPL(__imp__sub_83C63C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15848
	ctx.r3.s64 = ctx.r11.s64 + 15848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63C1C"))) PPC_WEAK_FUNC(sub_83C63C1C);
PPC_FUNC_IMPL(__imp__sub_83C63C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63C20"))) PPC_WEAK_FUNC(sub_83C63C20);
PPC_FUNC_IMPL(__imp__sub_83C63C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15856
	ctx.r3.s64 = ctx.r11.s64 + 15856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63C2C"))) PPC_WEAK_FUNC(sub_83C63C2C);
PPC_FUNC_IMPL(__imp__sub_83C63C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63C30"))) PPC_WEAK_FUNC(sub_83C63C30);
PPC_FUNC_IMPL(__imp__sub_83C63C30) {
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
	// addi r3,r11,12512
	ctx.r3.s64 = ctx.r11.s64 + 12512;
	// bl 0x83523120
	ctx.lr = 0x83C63C48;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,15864
	ctx.r3.s64 = ctx.r10.s64 + 15864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C63C54;
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

__attribute__((alias("__imp__sub_83C63C64"))) PPC_WEAK_FUNC(sub_83C63C64);
PPC_FUNC_IMPL(__imp__sub_83C63C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63C68"))) PPC_WEAK_FUNC(sub_83C63C68);
PPC_FUNC_IMPL(__imp__sub_83C63C68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12528
	ctx.r7.s64 = ctx.r8.s64 + 12528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C63C90"))) PPC_WEAK_FUNC(sub_83C63C90);
PPC_FUNC_IMPL(__imp__sub_83C63C90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,32436
	ctx.r6.s64 = ctx.r7.s64 + 32436;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32364(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32364);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12528);
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
	// std r9,32436(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32436, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C63CD8"))) PPC_WEAK_FUNC(sub_83C63CD8);
PPC_FUNC_IMPL(__imp__sub_83C63CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15880
	ctx.r3.s64 = ctx.r11.s64 + 15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63CE4"))) PPC_WEAK_FUNC(sub_83C63CE4);
PPC_FUNC_IMPL(__imp__sub_83C63CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63CE8"))) PPC_WEAK_FUNC(sub_83C63CE8);
PPC_FUNC_IMPL(__imp__sub_83C63CE8) {
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
	// addi r3,r11,12536
	ctx.r3.s64 = ctx.r11.s64 + 12536;
	// bl 0x8259af80
	ctx.lr = 0x83C63D00;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,15896
	ctx.r3.s64 = ctx.r10.s64 + 15896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C63D0C;
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

__attribute__((alias("__imp__sub_83C63D1C"))) PPC_WEAK_FUNC(sub_83C63D1C);
PPC_FUNC_IMPL(__imp__sub_83C63D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63D20"))) PPC_WEAK_FUNC(sub_83C63D20);
PPC_FUNC_IMPL(__imp__sub_83C63D20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12516
	ctx.r11.s64 = ctx.r8.s64 + 12516;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,32412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32412);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15888
	ctx.r3.s64 = ctx.r6.s64 + 15888;
	// stw r10,12516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63D50"))) PPC_WEAK_FUNC(sub_83C63D50);
PPC_FUNC_IMPL(__imp__sub_83C63D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15904
	ctx.r3.s64 = ctx.r11.s64 + 15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63D5C"))) PPC_WEAK_FUNC(sub_83C63D5C);
PPC_FUNC_IMPL(__imp__sub_83C63D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63D60"))) PPC_WEAK_FUNC(sub_83C63D60);
PPC_FUNC_IMPL(__imp__sub_83C63D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15912
	ctx.r3.s64 = ctx.r11.s64 + 15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63D6C"))) PPC_WEAK_FUNC(sub_83C63D6C);
PPC_FUNC_IMPL(__imp__sub_83C63D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63D70"))) PPC_WEAK_FUNC(sub_83C63D70);
PPC_FUNC_IMPL(__imp__sub_83C63D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63D7C"))) PPC_WEAK_FUNC(sub_83C63D7C);
PPC_FUNC_IMPL(__imp__sub_83C63D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63D80"))) PPC_WEAK_FUNC(sub_83C63D80);
PPC_FUNC_IMPL(__imp__sub_83C63D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15928
	ctx.r3.s64 = ctx.r11.s64 + 15928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63D8C"))) PPC_WEAK_FUNC(sub_83C63D8C);
PPC_FUNC_IMPL(__imp__sub_83C63D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63D90"))) PPC_WEAK_FUNC(sub_83C63D90);
PPC_FUNC_IMPL(__imp__sub_83C63D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63D9C"))) PPC_WEAK_FUNC(sub_83C63D9C);
PPC_FUNC_IMPL(__imp__sub_83C63D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63DA0"))) PPC_WEAK_FUNC(sub_83C63DA0);
PPC_FUNC_IMPL(__imp__sub_83C63DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15944
	ctx.r3.s64 = ctx.r11.s64 + 15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63DAC"))) PPC_WEAK_FUNC(sub_83C63DAC);
PPC_FUNC_IMPL(__imp__sub_83C63DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63DB0"))) PPC_WEAK_FUNC(sub_83C63DB0);
PPC_FUNC_IMPL(__imp__sub_83C63DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63DBC"))) PPC_WEAK_FUNC(sub_83C63DBC);
PPC_FUNC_IMPL(__imp__sub_83C63DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63DC0"))) PPC_WEAK_FUNC(sub_83C63DC0);
PPC_FUNC_IMPL(__imp__sub_83C63DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63DCC"))) PPC_WEAK_FUNC(sub_83C63DCC);
PPC_FUNC_IMPL(__imp__sub_83C63DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63DD0"))) PPC_WEAK_FUNC(sub_83C63DD0);
PPC_FUNC_IMPL(__imp__sub_83C63DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15968
	ctx.r3.s64 = ctx.r11.s64 + 15968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63DDC"))) PPC_WEAK_FUNC(sub_83C63DDC);
PPC_FUNC_IMPL(__imp__sub_83C63DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63DE0"))) PPC_WEAK_FUNC(sub_83C63DE0);
PPC_FUNC_IMPL(__imp__sub_83C63DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15976
	ctx.r3.s64 = ctx.r11.s64 + 15976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63DEC"))) PPC_WEAK_FUNC(sub_83C63DEC);
PPC_FUNC_IMPL(__imp__sub_83C63DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63DF0"))) PPC_WEAK_FUNC(sub_83C63DF0);
PPC_FUNC_IMPL(__imp__sub_83C63DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15984
	ctx.r3.s64 = ctx.r11.s64 + 15984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63DFC"))) PPC_WEAK_FUNC(sub_83C63DFC);
PPC_FUNC_IMPL(__imp__sub_83C63DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63E00"))) PPC_WEAK_FUNC(sub_83C63E00);
PPC_FUNC_IMPL(__imp__sub_83C63E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,15992
	ctx.r3.s64 = ctx.r11.s64 + 15992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63E0C"))) PPC_WEAK_FUNC(sub_83C63E0C);
PPC_FUNC_IMPL(__imp__sub_83C63E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63E10"))) PPC_WEAK_FUNC(sub_83C63E10);
PPC_FUNC_IMPL(__imp__sub_83C63E10) {
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
	// addi r3,r11,12880
	ctx.r3.s64 = ctx.r11.s64 + 12880;
	// bl 0x83523120
	ctx.lr = 0x83C63E28;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16000
	ctx.r3.s64 = ctx.r10.s64 + 16000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C63E34;
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

__attribute__((alias("__imp__sub_83C63E44"))) PPC_WEAK_FUNC(sub_83C63E44);
PPC_FUNC_IMPL(__imp__sub_83C63E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63E48"))) PPC_WEAK_FUNC(sub_83C63E48);
PPC_FUNC_IMPL(__imp__sub_83C63E48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12896
	ctx.r7.s64 = ctx.r8.s64 + 12896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C63E70"))) PPC_WEAK_FUNC(sub_83C63E70);
PPC_FUNC_IMPL(__imp__sub_83C63E70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,32564
	ctx.r6.s64 = ctx.r7.s64 + 32564;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32492(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32492);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12896(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12896);
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
	// std r9,32564(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32564, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C63EB8"))) PPC_WEAK_FUNC(sub_83C63EB8);
PPC_FUNC_IMPL(__imp__sub_83C63EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63EC4"))) PPC_WEAK_FUNC(sub_83C63EC4);
PPC_FUNC_IMPL(__imp__sub_83C63EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63EC8"))) PPC_WEAK_FUNC(sub_83C63EC8);
PPC_FUNC_IMPL(__imp__sub_83C63EC8) {
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
	// addi r3,r11,12904
	ctx.r3.s64 = ctx.r11.s64 + 12904;
	// bl 0x8259af80
	ctx.lr = 0x83C63EE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16032
	ctx.r3.s64 = ctx.r10.s64 + 16032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C63EEC;
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

__attribute__((alias("__imp__sub_83C63EFC"))) PPC_WEAK_FUNC(sub_83C63EFC);
PPC_FUNC_IMPL(__imp__sub_83C63EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63F00"))) PPC_WEAK_FUNC(sub_83C63F00);
PPC_FUNC_IMPL(__imp__sub_83C63F00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12884
	ctx.r11.s64 = ctx.r8.s64 + 12884;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,32540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32540);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16024
	ctx.r3.s64 = ctx.r6.s64 + 16024;
	// stw r10,12884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63F30"))) PPC_WEAK_FUNC(sub_83C63F30);
PPC_FUNC_IMPL(__imp__sub_83C63F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63F3C"))) PPC_WEAK_FUNC(sub_83C63F3C);
PPC_FUNC_IMPL(__imp__sub_83C63F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63F40"))) PPC_WEAK_FUNC(sub_83C63F40);
PPC_FUNC_IMPL(__imp__sub_83C63F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16048
	ctx.r3.s64 = ctx.r11.s64 + 16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63F4C"))) PPC_WEAK_FUNC(sub_83C63F4C);
PPC_FUNC_IMPL(__imp__sub_83C63F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63F50"))) PPC_WEAK_FUNC(sub_83C63F50);
PPC_FUNC_IMPL(__imp__sub_83C63F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16056
	ctx.r3.s64 = ctx.r11.s64 + 16056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63F5C"))) PPC_WEAK_FUNC(sub_83C63F5C);
PPC_FUNC_IMPL(__imp__sub_83C63F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63F60"))) PPC_WEAK_FUNC(sub_83C63F60);
PPC_FUNC_IMPL(__imp__sub_83C63F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16064
	ctx.r3.s64 = ctx.r11.s64 + 16064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63F6C"))) PPC_WEAK_FUNC(sub_83C63F6C);
PPC_FUNC_IMPL(__imp__sub_83C63F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63F70"))) PPC_WEAK_FUNC(sub_83C63F70);
PPC_FUNC_IMPL(__imp__sub_83C63F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16072
	ctx.r3.s64 = ctx.r11.s64 + 16072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63F7C"))) PPC_WEAK_FUNC(sub_83C63F7C);
PPC_FUNC_IMPL(__imp__sub_83C63F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63F80"))) PPC_WEAK_FUNC(sub_83C63F80);
PPC_FUNC_IMPL(__imp__sub_83C63F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16080
	ctx.r3.s64 = ctx.r11.s64 + 16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63F8C"))) PPC_WEAK_FUNC(sub_83C63F8C);
PPC_FUNC_IMPL(__imp__sub_83C63F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63F90"))) PPC_WEAK_FUNC(sub_83C63F90);
PPC_FUNC_IMPL(__imp__sub_83C63F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16088
	ctx.r3.s64 = ctx.r11.s64 + 16088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63F9C"))) PPC_WEAK_FUNC(sub_83C63F9C);
PPC_FUNC_IMPL(__imp__sub_83C63F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63FA0"))) PPC_WEAK_FUNC(sub_83C63FA0);
PPC_FUNC_IMPL(__imp__sub_83C63FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16096
	ctx.r3.s64 = ctx.r11.s64 + 16096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63FAC"))) PPC_WEAK_FUNC(sub_83C63FAC);
PPC_FUNC_IMPL(__imp__sub_83C63FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63FB0"))) PPC_WEAK_FUNC(sub_83C63FB0);
PPC_FUNC_IMPL(__imp__sub_83C63FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16104
	ctx.r3.s64 = ctx.r11.s64 + 16104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63FBC"))) PPC_WEAK_FUNC(sub_83C63FBC);
PPC_FUNC_IMPL(__imp__sub_83C63FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63FC0"))) PPC_WEAK_FUNC(sub_83C63FC0);
PPC_FUNC_IMPL(__imp__sub_83C63FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16112
	ctx.r3.s64 = ctx.r11.s64 + 16112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63FCC"))) PPC_WEAK_FUNC(sub_83C63FCC);
PPC_FUNC_IMPL(__imp__sub_83C63FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63FD0"))) PPC_WEAK_FUNC(sub_83C63FD0);
PPC_FUNC_IMPL(__imp__sub_83C63FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16120
	ctx.r3.s64 = ctx.r11.s64 + 16120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63FDC"))) PPC_WEAK_FUNC(sub_83C63FDC);
PPC_FUNC_IMPL(__imp__sub_83C63FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63FE0"))) PPC_WEAK_FUNC(sub_83C63FE0);
PPC_FUNC_IMPL(__imp__sub_83C63FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16128
	ctx.r3.s64 = ctx.r11.s64 + 16128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C63FEC"))) PPC_WEAK_FUNC(sub_83C63FEC);
PPC_FUNC_IMPL(__imp__sub_83C63FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C63FF0"))) PPC_WEAK_FUNC(sub_83C63FF0);
PPC_FUNC_IMPL(__imp__sub_83C63FF0) {
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
	// addi r3,r11,13248
	ctx.r3.s64 = ctx.r11.s64 + 13248;
	// bl 0x83523120
	ctx.lr = 0x83C64008;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16136
	ctx.r3.s64 = ctx.r10.s64 + 16136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C64014;
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

__attribute__((alias("__imp__sub_83C64024"))) PPC_WEAK_FUNC(sub_83C64024);
PPC_FUNC_IMPL(__imp__sub_83C64024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64028"))) PPC_WEAK_FUNC(sub_83C64028);
PPC_FUNC_IMPL(__imp__sub_83C64028) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13264
	ctx.r7.s64 = ctx.r8.s64 + 13264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13264);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13264, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C64050"))) PPC_WEAK_FUNC(sub_83C64050);
PPC_FUNC_IMPL(__imp__sub_83C64050) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,32692
	ctx.r6.s64 = ctx.r7.s64 + 32692;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13264);
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
	// std r9,32692(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32692, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C64098"))) PPC_WEAK_FUNC(sub_83C64098);
PPC_FUNC_IMPL(__imp__sub_83C64098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16152
	ctx.r3.s64 = ctx.r11.s64 + 16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C640A4"))) PPC_WEAK_FUNC(sub_83C640A4);
PPC_FUNC_IMPL(__imp__sub_83C640A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C640A8"))) PPC_WEAK_FUNC(sub_83C640A8);
PPC_FUNC_IMPL(__imp__sub_83C640A8) {
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
	// addi r3,r11,13272
	ctx.r3.s64 = ctx.r11.s64 + 13272;
	// bl 0x8259af80
	ctx.lr = 0x83C640C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16168
	ctx.r3.s64 = ctx.r10.s64 + 16168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C640CC;
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

__attribute__((alias("__imp__sub_83C640DC"))) PPC_WEAK_FUNC(sub_83C640DC);
PPC_FUNC_IMPL(__imp__sub_83C640DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C640E0"))) PPC_WEAK_FUNC(sub_83C640E0);
PPC_FUNC_IMPL(__imp__sub_83C640E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13252
	ctx.r11.s64 = ctx.r8.s64 + 13252;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,32668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32668);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16160
	ctx.r3.s64 = ctx.r6.s64 + 16160;
	// stw r10,13252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C64110"))) PPC_WEAK_FUNC(sub_83C64110);
PPC_FUNC_IMPL(__imp__sub_83C64110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16176
	ctx.r3.s64 = ctx.r11.s64 + 16176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6411C"))) PPC_WEAK_FUNC(sub_83C6411C);
PPC_FUNC_IMPL(__imp__sub_83C6411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64120"))) PPC_WEAK_FUNC(sub_83C64120);
PPC_FUNC_IMPL(__imp__sub_83C64120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16184
	ctx.r3.s64 = ctx.r11.s64 + 16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6412C"))) PPC_WEAK_FUNC(sub_83C6412C);
PPC_FUNC_IMPL(__imp__sub_83C6412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64130"))) PPC_WEAK_FUNC(sub_83C64130);
PPC_FUNC_IMPL(__imp__sub_83C64130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16192
	ctx.r3.s64 = ctx.r11.s64 + 16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6413C"))) PPC_WEAK_FUNC(sub_83C6413C);
PPC_FUNC_IMPL(__imp__sub_83C6413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64140"))) PPC_WEAK_FUNC(sub_83C64140);
PPC_FUNC_IMPL(__imp__sub_83C64140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16200
	ctx.r3.s64 = ctx.r11.s64 + 16200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6414C"))) PPC_WEAK_FUNC(sub_83C6414C);
PPC_FUNC_IMPL(__imp__sub_83C6414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64150"))) PPC_WEAK_FUNC(sub_83C64150);
PPC_FUNC_IMPL(__imp__sub_83C64150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16208
	ctx.r3.s64 = ctx.r11.s64 + 16208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6415C"))) PPC_WEAK_FUNC(sub_83C6415C);
PPC_FUNC_IMPL(__imp__sub_83C6415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64160"))) PPC_WEAK_FUNC(sub_83C64160);
PPC_FUNC_IMPL(__imp__sub_83C64160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16216
	ctx.r3.s64 = ctx.r11.s64 + 16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6416C"))) PPC_WEAK_FUNC(sub_83C6416C);
PPC_FUNC_IMPL(__imp__sub_83C6416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64170"))) PPC_WEAK_FUNC(sub_83C64170);
PPC_FUNC_IMPL(__imp__sub_83C64170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16224
	ctx.r3.s64 = ctx.r11.s64 + 16224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6417C"))) PPC_WEAK_FUNC(sub_83C6417C);
PPC_FUNC_IMPL(__imp__sub_83C6417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64180"))) PPC_WEAK_FUNC(sub_83C64180);
PPC_FUNC_IMPL(__imp__sub_83C64180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6418C"))) PPC_WEAK_FUNC(sub_83C6418C);
PPC_FUNC_IMPL(__imp__sub_83C6418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64190"))) PPC_WEAK_FUNC(sub_83C64190);
PPC_FUNC_IMPL(__imp__sub_83C64190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16240
	ctx.r3.s64 = ctx.r11.s64 + 16240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6419C"))) PPC_WEAK_FUNC(sub_83C6419C);
PPC_FUNC_IMPL(__imp__sub_83C6419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C641A0"))) PPC_WEAK_FUNC(sub_83C641A0);
PPC_FUNC_IMPL(__imp__sub_83C641A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16248
	ctx.r3.s64 = ctx.r11.s64 + 16248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C641AC"))) PPC_WEAK_FUNC(sub_83C641AC);
PPC_FUNC_IMPL(__imp__sub_83C641AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C641B0"))) PPC_WEAK_FUNC(sub_83C641B0);
PPC_FUNC_IMPL(__imp__sub_83C641B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16256
	ctx.r3.s64 = ctx.r11.s64 + 16256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C641BC"))) PPC_WEAK_FUNC(sub_83C641BC);
PPC_FUNC_IMPL(__imp__sub_83C641BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C641C0"))) PPC_WEAK_FUNC(sub_83C641C0);
PPC_FUNC_IMPL(__imp__sub_83C641C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16264
	ctx.r3.s64 = ctx.r11.s64 + 16264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C641CC"))) PPC_WEAK_FUNC(sub_83C641CC);
PPC_FUNC_IMPL(__imp__sub_83C641CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C641D0"))) PPC_WEAK_FUNC(sub_83C641D0);
PPC_FUNC_IMPL(__imp__sub_83C641D0) {
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
	// addi r3,r11,13616
	ctx.r3.s64 = ctx.r11.s64 + 13616;
	// bl 0x83523120
	ctx.lr = 0x83C641E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16272
	ctx.r3.s64 = ctx.r10.s64 + 16272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C641F4;
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

__attribute__((alias("__imp__sub_83C64204"))) PPC_WEAK_FUNC(sub_83C64204);
PPC_FUNC_IMPL(__imp__sub_83C64204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64208"))) PPC_WEAK_FUNC(sub_83C64208);
PPC_FUNC_IMPL(__imp__sub_83C64208) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13632
	ctx.r7.s64 = ctx.r8.s64 + 13632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C64230"))) PPC_WEAK_FUNC(sub_83C64230);
PPC_FUNC_IMPL(__imp__sub_83C64230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-32716
	ctx.r6.s64 = ctx.r7.s64 + -32716;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32748(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32748);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13632(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13632);
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
	// std r9,-32716(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32716, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C64278"))) PPC_WEAK_FUNC(sub_83C64278);
PPC_FUNC_IMPL(__imp__sub_83C64278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C64284"))) PPC_WEAK_FUNC(sub_83C64284);
PPC_FUNC_IMPL(__imp__sub_83C64284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64288"))) PPC_WEAK_FUNC(sub_83C64288);
PPC_FUNC_IMPL(__imp__sub_83C64288) {
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
	// addi r3,r11,13640
	ctx.r3.s64 = ctx.r11.s64 + 13640;
	// bl 0x8259af80
	ctx.lr = 0x83C642A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16304
	ctx.r3.s64 = ctx.r10.s64 + 16304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C642AC;
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

__attribute__((alias("__imp__sub_83C642BC"))) PPC_WEAK_FUNC(sub_83C642BC);
PPC_FUNC_IMPL(__imp__sub_83C642BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C642C0"))) PPC_WEAK_FUNC(sub_83C642C0);
PPC_FUNC_IMPL(__imp__sub_83C642C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13620
	ctx.r11.s64 = ctx.r8.s64 + 13620;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-32740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32740);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16296
	ctx.r3.s64 = ctx.r6.s64 + 16296;
	// stw r10,13620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C642F0"))) PPC_WEAK_FUNC(sub_83C642F0);
PPC_FUNC_IMPL(__imp__sub_83C642F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16312
	ctx.r3.s64 = ctx.r11.s64 + 16312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C642FC"))) PPC_WEAK_FUNC(sub_83C642FC);
PPC_FUNC_IMPL(__imp__sub_83C642FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64300"))) PPC_WEAK_FUNC(sub_83C64300);
PPC_FUNC_IMPL(__imp__sub_83C64300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16320
	ctx.r3.s64 = ctx.r11.s64 + 16320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6430C"))) PPC_WEAK_FUNC(sub_83C6430C);
PPC_FUNC_IMPL(__imp__sub_83C6430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64310"))) PPC_WEAK_FUNC(sub_83C64310);
PPC_FUNC_IMPL(__imp__sub_83C64310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16328
	ctx.r3.s64 = ctx.r11.s64 + 16328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6431C"))) PPC_WEAK_FUNC(sub_83C6431C);
PPC_FUNC_IMPL(__imp__sub_83C6431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64320"))) PPC_WEAK_FUNC(sub_83C64320);
PPC_FUNC_IMPL(__imp__sub_83C64320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16336
	ctx.r3.s64 = ctx.r11.s64 + 16336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6432C"))) PPC_WEAK_FUNC(sub_83C6432C);
PPC_FUNC_IMPL(__imp__sub_83C6432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64330"))) PPC_WEAK_FUNC(sub_83C64330);
PPC_FUNC_IMPL(__imp__sub_83C64330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16344
	ctx.r3.s64 = ctx.r11.s64 + 16344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6433C"))) PPC_WEAK_FUNC(sub_83C6433C);
PPC_FUNC_IMPL(__imp__sub_83C6433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64340"))) PPC_WEAK_FUNC(sub_83C64340);
PPC_FUNC_IMPL(__imp__sub_83C64340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16352
	ctx.r3.s64 = ctx.r11.s64 + 16352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6434C"))) PPC_WEAK_FUNC(sub_83C6434C);
PPC_FUNC_IMPL(__imp__sub_83C6434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64350"))) PPC_WEAK_FUNC(sub_83C64350);
PPC_FUNC_IMPL(__imp__sub_83C64350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6435C"))) PPC_WEAK_FUNC(sub_83C6435C);
PPC_FUNC_IMPL(__imp__sub_83C6435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64360"))) PPC_WEAK_FUNC(sub_83C64360);
PPC_FUNC_IMPL(__imp__sub_83C64360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16368
	ctx.r3.s64 = ctx.r11.s64 + 16368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6436C"))) PPC_WEAK_FUNC(sub_83C6436C);
PPC_FUNC_IMPL(__imp__sub_83C6436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64370"))) PPC_WEAK_FUNC(sub_83C64370);
PPC_FUNC_IMPL(__imp__sub_83C64370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16376
	ctx.r3.s64 = ctx.r11.s64 + 16376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6437C"))) PPC_WEAK_FUNC(sub_83C6437C);
PPC_FUNC_IMPL(__imp__sub_83C6437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64380"))) PPC_WEAK_FUNC(sub_83C64380);
PPC_FUNC_IMPL(__imp__sub_83C64380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16384
	ctx.r3.s64 = ctx.r11.s64 + 16384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6438C"))) PPC_WEAK_FUNC(sub_83C6438C);
PPC_FUNC_IMPL(__imp__sub_83C6438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64390"))) PPC_WEAK_FUNC(sub_83C64390);
PPC_FUNC_IMPL(__imp__sub_83C64390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16392
	ctx.r3.s64 = ctx.r11.s64 + 16392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6439C"))) PPC_WEAK_FUNC(sub_83C6439C);
PPC_FUNC_IMPL(__imp__sub_83C6439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C643A0"))) PPC_WEAK_FUNC(sub_83C643A0);
PPC_FUNC_IMPL(__imp__sub_83C643A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16400
	ctx.r3.s64 = ctx.r11.s64 + 16400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C643AC"))) PPC_WEAK_FUNC(sub_83C643AC);
PPC_FUNC_IMPL(__imp__sub_83C643AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C643B0"))) PPC_WEAK_FUNC(sub_83C643B0);
PPC_FUNC_IMPL(__imp__sub_83C643B0) {
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
	// addi r3,r11,13984
	ctx.r3.s64 = ctx.r11.s64 + 13984;
	// bl 0x83523120
	ctx.lr = 0x83C643C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16408
	ctx.r3.s64 = ctx.r10.s64 + 16408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C643D4;
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

__attribute__((alias("__imp__sub_83C643E4"))) PPC_WEAK_FUNC(sub_83C643E4);
PPC_FUNC_IMPL(__imp__sub_83C643E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C643E8"))) PPC_WEAK_FUNC(sub_83C643E8);
PPC_FUNC_IMPL(__imp__sub_83C643E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14000
	ctx.r7.s64 = ctx.r8.s64 + 14000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C64410"))) PPC_WEAK_FUNC(sub_83C64410);
PPC_FUNC_IMPL(__imp__sub_83C64410) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-32588
	ctx.r6.s64 = ctx.r7.s64 + -32588;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32660(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32660);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14000);
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
	// std r9,-32588(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32588, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C64458"))) PPC_WEAK_FUNC(sub_83C64458);
PPC_FUNC_IMPL(__imp__sub_83C64458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16424
	ctx.r3.s64 = ctx.r11.s64 + 16424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C64464"))) PPC_WEAK_FUNC(sub_83C64464);
PPC_FUNC_IMPL(__imp__sub_83C64464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64468"))) PPC_WEAK_FUNC(sub_83C64468);
PPC_FUNC_IMPL(__imp__sub_83C64468) {
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
	// addi r3,r11,14008
	ctx.r3.s64 = ctx.r11.s64 + 14008;
	// bl 0x8259af80
	ctx.lr = 0x83C64480;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16440
	ctx.r3.s64 = ctx.r10.s64 + 16440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6448C;
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

__attribute__((alias("__imp__sub_83C6449C"))) PPC_WEAK_FUNC(sub_83C6449C);
PPC_FUNC_IMPL(__imp__sub_83C6449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C644A0"))) PPC_WEAK_FUNC(sub_83C644A0);
PPC_FUNC_IMPL(__imp__sub_83C644A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13988
	ctx.r11.s64 = ctx.r8.s64 + 13988;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-32612(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32612);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16432
	ctx.r3.s64 = ctx.r6.s64 + 16432;
	// stw r10,13988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C644D0"))) PPC_WEAK_FUNC(sub_83C644D0);
PPC_FUNC_IMPL(__imp__sub_83C644D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16448
	ctx.r3.s64 = ctx.r11.s64 + 16448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C644DC"))) PPC_WEAK_FUNC(sub_83C644DC);
PPC_FUNC_IMPL(__imp__sub_83C644DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C644E0"))) PPC_WEAK_FUNC(sub_83C644E0);
PPC_FUNC_IMPL(__imp__sub_83C644E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16456
	ctx.r3.s64 = ctx.r11.s64 + 16456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C644EC"))) PPC_WEAK_FUNC(sub_83C644EC);
PPC_FUNC_IMPL(__imp__sub_83C644EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C644F0"))) PPC_WEAK_FUNC(sub_83C644F0);
PPC_FUNC_IMPL(__imp__sub_83C644F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C644FC"))) PPC_WEAK_FUNC(sub_83C644FC);
PPC_FUNC_IMPL(__imp__sub_83C644FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64500"))) PPC_WEAK_FUNC(sub_83C64500);
PPC_FUNC_IMPL(__imp__sub_83C64500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16472
	ctx.r3.s64 = ctx.r11.s64 + 16472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6450C"))) PPC_WEAK_FUNC(sub_83C6450C);
PPC_FUNC_IMPL(__imp__sub_83C6450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64510"))) PPC_WEAK_FUNC(sub_83C64510);
PPC_FUNC_IMPL(__imp__sub_83C64510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16480
	ctx.r3.s64 = ctx.r11.s64 + 16480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6451C"))) PPC_WEAK_FUNC(sub_83C6451C);
PPC_FUNC_IMPL(__imp__sub_83C6451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64520"))) PPC_WEAK_FUNC(sub_83C64520);
PPC_FUNC_IMPL(__imp__sub_83C64520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16488
	ctx.r3.s64 = ctx.r11.s64 + 16488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6452C"))) PPC_WEAK_FUNC(sub_83C6452C);
PPC_FUNC_IMPL(__imp__sub_83C6452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64530"))) PPC_WEAK_FUNC(sub_83C64530);
PPC_FUNC_IMPL(__imp__sub_83C64530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16496
	ctx.r3.s64 = ctx.r11.s64 + 16496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6453C"))) PPC_WEAK_FUNC(sub_83C6453C);
PPC_FUNC_IMPL(__imp__sub_83C6453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64540"))) PPC_WEAK_FUNC(sub_83C64540);
PPC_FUNC_IMPL(__imp__sub_83C64540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16504
	ctx.r3.s64 = ctx.r11.s64 + 16504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6454C"))) PPC_WEAK_FUNC(sub_83C6454C);
PPC_FUNC_IMPL(__imp__sub_83C6454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64550"))) PPC_WEAK_FUNC(sub_83C64550);
PPC_FUNC_IMPL(__imp__sub_83C64550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6455C"))) PPC_WEAK_FUNC(sub_83C6455C);
PPC_FUNC_IMPL(__imp__sub_83C6455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64560"))) PPC_WEAK_FUNC(sub_83C64560);
PPC_FUNC_IMPL(__imp__sub_83C64560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16520
	ctx.r3.s64 = ctx.r11.s64 + 16520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6456C"))) PPC_WEAK_FUNC(sub_83C6456C);
PPC_FUNC_IMPL(__imp__sub_83C6456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64570"))) PPC_WEAK_FUNC(sub_83C64570);
PPC_FUNC_IMPL(__imp__sub_83C64570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16528
	ctx.r3.s64 = ctx.r11.s64 + 16528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6457C"))) PPC_WEAK_FUNC(sub_83C6457C);
PPC_FUNC_IMPL(__imp__sub_83C6457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64580"))) PPC_WEAK_FUNC(sub_83C64580);
PPC_FUNC_IMPL(__imp__sub_83C64580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16536
	ctx.r3.s64 = ctx.r11.s64 + 16536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6458C"))) PPC_WEAK_FUNC(sub_83C6458C);
PPC_FUNC_IMPL(__imp__sub_83C6458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64590"))) PPC_WEAK_FUNC(sub_83C64590);
PPC_FUNC_IMPL(__imp__sub_83C64590) {
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
	// addi r3,r11,14352
	ctx.r3.s64 = ctx.r11.s64 + 14352;
	// bl 0x83523120
	ctx.lr = 0x83C645A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16544
	ctx.r3.s64 = ctx.r10.s64 + 16544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C645B4;
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

__attribute__((alias("__imp__sub_83C645C4"))) PPC_WEAK_FUNC(sub_83C645C4);
PPC_FUNC_IMPL(__imp__sub_83C645C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C645C8"))) PPC_WEAK_FUNC(sub_83C645C8);
PPC_FUNC_IMPL(__imp__sub_83C645C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14368
	ctx.r7.s64 = ctx.r8.s64 + 14368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C645F0"))) PPC_WEAK_FUNC(sub_83C645F0);
PPC_FUNC_IMPL(__imp__sub_83C645F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-32460
	ctx.r6.s64 = ctx.r7.s64 + -32460;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32532(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32532);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14368);
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
	// std r9,-32460(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32460, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C64638"))) PPC_WEAK_FUNC(sub_83C64638);
PPC_FUNC_IMPL(__imp__sub_83C64638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16560
	ctx.r3.s64 = ctx.r11.s64 + 16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C64644"))) PPC_WEAK_FUNC(sub_83C64644);
PPC_FUNC_IMPL(__imp__sub_83C64644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64648"))) PPC_WEAK_FUNC(sub_83C64648);
PPC_FUNC_IMPL(__imp__sub_83C64648) {
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
	// addi r3,r11,14376
	ctx.r3.s64 = ctx.r11.s64 + 14376;
	// bl 0x8259af80
	ctx.lr = 0x83C64660;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16576
	ctx.r3.s64 = ctx.r10.s64 + 16576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6466C;
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

__attribute__((alias("__imp__sub_83C6467C"))) PPC_WEAK_FUNC(sub_83C6467C);
PPC_FUNC_IMPL(__imp__sub_83C6467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64680"))) PPC_WEAK_FUNC(sub_83C64680);
PPC_FUNC_IMPL(__imp__sub_83C64680) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14356
	ctx.r11.s64 = ctx.r8.s64 + 14356;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-32484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32484);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16568
	ctx.r3.s64 = ctx.r6.s64 + 16568;
	// stw r10,14356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C646B0"))) PPC_WEAK_FUNC(sub_83C646B0);
PPC_FUNC_IMPL(__imp__sub_83C646B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C646BC"))) PPC_WEAK_FUNC(sub_83C646BC);
PPC_FUNC_IMPL(__imp__sub_83C646BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C646C0"))) PPC_WEAK_FUNC(sub_83C646C0);
PPC_FUNC_IMPL(__imp__sub_83C646C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16592
	ctx.r3.s64 = ctx.r11.s64 + 16592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C646CC"))) PPC_WEAK_FUNC(sub_83C646CC);
PPC_FUNC_IMPL(__imp__sub_83C646CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C646D0"))) PPC_WEAK_FUNC(sub_83C646D0);
PPC_FUNC_IMPL(__imp__sub_83C646D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16600
	ctx.r3.s64 = ctx.r11.s64 + 16600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C646DC"))) PPC_WEAK_FUNC(sub_83C646DC);
PPC_FUNC_IMPL(__imp__sub_83C646DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C646E0"))) PPC_WEAK_FUNC(sub_83C646E0);
PPC_FUNC_IMPL(__imp__sub_83C646E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16608
	ctx.r3.s64 = ctx.r11.s64 + 16608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C646EC"))) PPC_WEAK_FUNC(sub_83C646EC);
PPC_FUNC_IMPL(__imp__sub_83C646EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C646F0"))) PPC_WEAK_FUNC(sub_83C646F0);
PPC_FUNC_IMPL(__imp__sub_83C646F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16616
	ctx.r3.s64 = ctx.r11.s64 + 16616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C646FC"))) PPC_WEAK_FUNC(sub_83C646FC);
PPC_FUNC_IMPL(__imp__sub_83C646FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64700"))) PPC_WEAK_FUNC(sub_83C64700);
PPC_FUNC_IMPL(__imp__sub_83C64700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16624
	ctx.r3.s64 = ctx.r11.s64 + 16624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6470C"))) PPC_WEAK_FUNC(sub_83C6470C);
PPC_FUNC_IMPL(__imp__sub_83C6470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64710"))) PPC_WEAK_FUNC(sub_83C64710);
PPC_FUNC_IMPL(__imp__sub_83C64710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16632
	ctx.r3.s64 = ctx.r11.s64 + 16632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6471C"))) PPC_WEAK_FUNC(sub_83C6471C);
PPC_FUNC_IMPL(__imp__sub_83C6471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64720"))) PPC_WEAK_FUNC(sub_83C64720);
PPC_FUNC_IMPL(__imp__sub_83C64720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6472C"))) PPC_WEAK_FUNC(sub_83C6472C);
PPC_FUNC_IMPL(__imp__sub_83C6472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64730"))) PPC_WEAK_FUNC(sub_83C64730);
PPC_FUNC_IMPL(__imp__sub_83C64730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16648
	ctx.r3.s64 = ctx.r11.s64 + 16648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6473C"))) PPC_WEAK_FUNC(sub_83C6473C);
PPC_FUNC_IMPL(__imp__sub_83C6473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64740"))) PPC_WEAK_FUNC(sub_83C64740);
PPC_FUNC_IMPL(__imp__sub_83C64740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16656
	ctx.r3.s64 = ctx.r11.s64 + 16656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6474C"))) PPC_WEAK_FUNC(sub_83C6474C);
PPC_FUNC_IMPL(__imp__sub_83C6474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64750"))) PPC_WEAK_FUNC(sub_83C64750);
PPC_FUNC_IMPL(__imp__sub_83C64750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16664
	ctx.r3.s64 = ctx.r11.s64 + 16664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6475C"))) PPC_WEAK_FUNC(sub_83C6475C);
PPC_FUNC_IMPL(__imp__sub_83C6475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64760"))) PPC_WEAK_FUNC(sub_83C64760);
PPC_FUNC_IMPL(__imp__sub_83C64760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16672
	ctx.r3.s64 = ctx.r11.s64 + 16672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6476C"))) PPC_WEAK_FUNC(sub_83C6476C);
PPC_FUNC_IMPL(__imp__sub_83C6476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64770"))) PPC_WEAK_FUNC(sub_83C64770);
PPC_FUNC_IMPL(__imp__sub_83C64770) {
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
	// addi r3,r11,14720
	ctx.r3.s64 = ctx.r11.s64 + 14720;
	// bl 0x83523120
	ctx.lr = 0x83C64788;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16680
	ctx.r3.s64 = ctx.r10.s64 + 16680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C64794;
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

__attribute__((alias("__imp__sub_83C647A4"))) PPC_WEAK_FUNC(sub_83C647A4);
PPC_FUNC_IMPL(__imp__sub_83C647A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C647A8"))) PPC_WEAK_FUNC(sub_83C647A8);
PPC_FUNC_IMPL(__imp__sub_83C647A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14736
	ctx.r7.s64 = ctx.r8.s64 + 14736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C647D0"))) PPC_WEAK_FUNC(sub_83C647D0);
PPC_FUNC_IMPL(__imp__sub_83C647D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-32332
	ctx.r6.s64 = ctx.r7.s64 + -32332;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32404(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32404);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14736);
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
	// std r9,-32332(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32332, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C64818"))) PPC_WEAK_FUNC(sub_83C64818);
PPC_FUNC_IMPL(__imp__sub_83C64818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C64824"))) PPC_WEAK_FUNC(sub_83C64824);
PPC_FUNC_IMPL(__imp__sub_83C64824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64828"))) PPC_WEAK_FUNC(sub_83C64828);
PPC_FUNC_IMPL(__imp__sub_83C64828) {
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
	// addi r3,r11,14744
	ctx.r3.s64 = ctx.r11.s64 + 14744;
	// bl 0x8259af80
	ctx.lr = 0x83C64840;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16712
	ctx.r3.s64 = ctx.r10.s64 + 16712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6484C;
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

__attribute__((alias("__imp__sub_83C6485C"))) PPC_WEAK_FUNC(sub_83C6485C);
PPC_FUNC_IMPL(__imp__sub_83C6485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64860"))) PPC_WEAK_FUNC(sub_83C64860);
PPC_FUNC_IMPL(__imp__sub_83C64860) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14724
	ctx.r11.s64 = ctx.r8.s64 + 14724;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-32356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32356);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16704
	ctx.r3.s64 = ctx.r6.s64 + 16704;
	// stw r10,14724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C64890"))) PPC_WEAK_FUNC(sub_83C64890);
PPC_FUNC_IMPL(__imp__sub_83C64890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16720
	ctx.r3.s64 = ctx.r11.s64 + 16720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6489C"))) PPC_WEAK_FUNC(sub_83C6489C);
PPC_FUNC_IMPL(__imp__sub_83C6489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C648A0"))) PPC_WEAK_FUNC(sub_83C648A0);
PPC_FUNC_IMPL(__imp__sub_83C648A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16728
	ctx.r3.s64 = ctx.r11.s64 + 16728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C648AC"))) PPC_WEAK_FUNC(sub_83C648AC);
PPC_FUNC_IMPL(__imp__sub_83C648AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C648B0"))) PPC_WEAK_FUNC(sub_83C648B0);
PPC_FUNC_IMPL(__imp__sub_83C648B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16736
	ctx.r3.s64 = ctx.r11.s64 + 16736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C648BC"))) PPC_WEAK_FUNC(sub_83C648BC);
PPC_FUNC_IMPL(__imp__sub_83C648BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C648C0"))) PPC_WEAK_FUNC(sub_83C648C0);
PPC_FUNC_IMPL(__imp__sub_83C648C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16744
	ctx.r3.s64 = ctx.r11.s64 + 16744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C648CC"))) PPC_WEAK_FUNC(sub_83C648CC);
PPC_FUNC_IMPL(__imp__sub_83C648CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C648D0"))) PPC_WEAK_FUNC(sub_83C648D0);
PPC_FUNC_IMPL(__imp__sub_83C648D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16752
	ctx.r3.s64 = ctx.r11.s64 + 16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C648DC"))) PPC_WEAK_FUNC(sub_83C648DC);
PPC_FUNC_IMPL(__imp__sub_83C648DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C648E0"))) PPC_WEAK_FUNC(sub_83C648E0);
PPC_FUNC_IMPL(__imp__sub_83C648E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16760
	ctx.r3.s64 = ctx.r11.s64 + 16760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C648EC"))) PPC_WEAK_FUNC(sub_83C648EC);
PPC_FUNC_IMPL(__imp__sub_83C648EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C648F0"))) PPC_WEAK_FUNC(sub_83C648F0);
PPC_FUNC_IMPL(__imp__sub_83C648F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16768
	ctx.r3.s64 = ctx.r11.s64 + 16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C648FC"))) PPC_WEAK_FUNC(sub_83C648FC);
PPC_FUNC_IMPL(__imp__sub_83C648FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64900"))) PPC_WEAK_FUNC(sub_83C64900);
PPC_FUNC_IMPL(__imp__sub_83C64900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16776
	ctx.r3.s64 = ctx.r11.s64 + 16776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6490C"))) PPC_WEAK_FUNC(sub_83C6490C);
PPC_FUNC_IMPL(__imp__sub_83C6490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64910"))) PPC_WEAK_FUNC(sub_83C64910);
PPC_FUNC_IMPL(__imp__sub_83C64910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16784
	ctx.r3.s64 = ctx.r11.s64 + 16784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6491C"))) PPC_WEAK_FUNC(sub_83C6491C);
PPC_FUNC_IMPL(__imp__sub_83C6491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64920"))) PPC_WEAK_FUNC(sub_83C64920);
PPC_FUNC_IMPL(__imp__sub_83C64920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16792
	ctx.r3.s64 = ctx.r11.s64 + 16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6492C"))) PPC_WEAK_FUNC(sub_83C6492C);
PPC_FUNC_IMPL(__imp__sub_83C6492C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64930"))) PPC_WEAK_FUNC(sub_83C64930);
PPC_FUNC_IMPL(__imp__sub_83C64930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16800
	ctx.r3.s64 = ctx.r11.s64 + 16800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6493C"))) PPC_WEAK_FUNC(sub_83C6493C);
PPC_FUNC_IMPL(__imp__sub_83C6493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64940"))) PPC_WEAK_FUNC(sub_83C64940);
PPC_FUNC_IMPL(__imp__sub_83C64940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16808
	ctx.r3.s64 = ctx.r11.s64 + 16808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6494C"))) PPC_WEAK_FUNC(sub_83C6494C);
PPC_FUNC_IMPL(__imp__sub_83C6494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64950"))) PPC_WEAK_FUNC(sub_83C64950);
PPC_FUNC_IMPL(__imp__sub_83C64950) {
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
	// addi r3,r11,15088
	ctx.r3.s64 = ctx.r11.s64 + 15088;
	// bl 0x83523120
	ctx.lr = 0x83C64968;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16816
	ctx.r3.s64 = ctx.r10.s64 + 16816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C64974;
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

__attribute__((alias("__imp__sub_83C64984"))) PPC_WEAK_FUNC(sub_83C64984);
PPC_FUNC_IMPL(__imp__sub_83C64984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64988"))) PPC_WEAK_FUNC(sub_83C64988);
PPC_FUNC_IMPL(__imp__sub_83C64988) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15104
	ctx.r7.s64 = ctx.r8.s64 + 15104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C649B0"))) PPC_WEAK_FUNC(sub_83C649B0);
PPC_FUNC_IMPL(__imp__sub_83C649B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-32204
	ctx.r6.s64 = ctx.r7.s64 + -32204;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32276(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32276);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15104);
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
	// std r9,-32204(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32204, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C649F8"))) PPC_WEAK_FUNC(sub_83C649F8);
PPC_FUNC_IMPL(__imp__sub_83C649F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16832
	ctx.r3.s64 = ctx.r11.s64 + 16832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C64A04"))) PPC_WEAK_FUNC(sub_83C64A04);
PPC_FUNC_IMPL(__imp__sub_83C64A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64A08"))) PPC_WEAK_FUNC(sub_83C64A08);
PPC_FUNC_IMPL(__imp__sub_83C64A08) {
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
	// addi r3,r11,15112
	ctx.r3.s64 = ctx.r11.s64 + 15112;
	// bl 0x8259af80
	ctx.lr = 0x83C64A20;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,16848
	ctx.r3.s64 = ctx.r10.s64 + 16848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C64A2C;
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

__attribute__((alias("__imp__sub_83C64A3C"))) PPC_WEAK_FUNC(sub_83C64A3C);
PPC_FUNC_IMPL(__imp__sub_83C64A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C64A40"))) PPC_WEAK_FUNC(sub_83C64A40);
PPC_FUNC_IMPL(__imp__sub_83C64A40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15092
	ctx.r11.s64 = ctx.r8.s64 + 15092;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-32228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32228);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16840
	ctx.r3.s64 = ctx.r6.s64 + 16840;
	// stw r10,15092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C64A70"))) PPC_WEAK_FUNC(sub_83C64A70);
PPC_FUNC_IMPL(__imp__sub_83C64A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,16856
	ctx.r3.s64 = ctx.r11.s64 + 16856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

