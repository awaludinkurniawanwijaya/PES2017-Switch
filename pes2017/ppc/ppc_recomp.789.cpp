#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C4DAD4"))) PPC_WEAK_FUNC(sub_83C4DAD4);
PPC_FUNC_IMPL(__imp__sub_83C4DAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DAD8"))) PPC_WEAK_FUNC(sub_83C4DAD8);
PPC_FUNC_IMPL(__imp__sub_83C4DAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11048
	ctx.r3.s64 = ctx.r11.s64 + -11048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DAE4"))) PPC_WEAK_FUNC(sub_83C4DAE4);
PPC_FUNC_IMPL(__imp__sub_83C4DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DAE8"))) PPC_WEAK_FUNC(sub_83C4DAE8);
PPC_FUNC_IMPL(__imp__sub_83C4DAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11040
	ctx.r3.s64 = ctx.r11.s64 + -11040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DAF4"))) PPC_WEAK_FUNC(sub_83C4DAF4);
PPC_FUNC_IMPL(__imp__sub_83C4DAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DAF8"))) PPC_WEAK_FUNC(sub_83C4DAF8);
PPC_FUNC_IMPL(__imp__sub_83C4DAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11032
	ctx.r3.s64 = ctx.r11.s64 + -11032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DB04"))) PPC_WEAK_FUNC(sub_83C4DB04);
PPC_FUNC_IMPL(__imp__sub_83C4DB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DB08"))) PPC_WEAK_FUNC(sub_83C4DB08);
PPC_FUNC_IMPL(__imp__sub_83C4DB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11024
	ctx.r3.s64 = ctx.r11.s64 + -11024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DB14"))) PPC_WEAK_FUNC(sub_83C4DB14);
PPC_FUNC_IMPL(__imp__sub_83C4DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DB18"))) PPC_WEAK_FUNC(sub_83C4DB18);
PPC_FUNC_IMPL(__imp__sub_83C4DB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11016
	ctx.r3.s64 = ctx.r11.s64 + -11016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DB24"))) PPC_WEAK_FUNC(sub_83C4DB24);
PPC_FUNC_IMPL(__imp__sub_83C4DB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DB28"))) PPC_WEAK_FUNC(sub_83C4DB28);
PPC_FUNC_IMPL(__imp__sub_83C4DB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DB34"))) PPC_WEAK_FUNC(sub_83C4DB34);
PPC_FUNC_IMPL(__imp__sub_83C4DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DB38"))) PPC_WEAK_FUNC(sub_83C4DB38);
PPC_FUNC_IMPL(__imp__sub_83C4DB38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12032
	ctx.r7.s64 = ctx.r8.s64 + 12032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4DB60"))) PPC_WEAK_FUNC(sub_83C4DB60);
PPC_FUNC_IMPL(__imp__sub_83C4DB60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,5992
	ctx.r6.s64 = ctx.r7.s64 + 5992;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5920(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5920);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12032);
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
	// std r9,5992(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5992, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4DBA8"))) PPC_WEAK_FUNC(sub_83C4DBA8);
PPC_FUNC_IMPL(__imp__sub_83C4DBA8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,12016
	ctx.r3.s64 = ctx.r11.s64 + 12016;
	// bl 0x83523120
	ctx.lr = 0x83C4DBC0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11000
	ctx.r3.s64 = ctx.r10.s64 + -11000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4DBCC;
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

__attribute__((alias("__imp__sub_83C4DBDC"))) PPC_WEAK_FUNC(sub_83C4DBDC);
PPC_FUNC_IMPL(__imp__sub_83C4DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DBE0"))) PPC_WEAK_FUNC(sub_83C4DBE0);
PPC_FUNC_IMPL(__imp__sub_83C4DBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10984
	ctx.r3.s64 = ctx.r11.s64 + -10984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DBEC"))) PPC_WEAK_FUNC(sub_83C4DBEC);
PPC_FUNC_IMPL(__imp__sub_83C4DBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DBF0"))) PPC_WEAK_FUNC(sub_83C4DBF0);
PPC_FUNC_IMPL(__imp__sub_83C4DBF0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,12040
	ctx.r3.s64 = ctx.r11.s64 + 12040;
	// bl 0x8259af80
	ctx.lr = 0x83C4DC08;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10968
	ctx.r3.s64 = ctx.r10.s64 + -10968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4DC14;
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

__attribute__((alias("__imp__sub_83C4DC24"))) PPC_WEAK_FUNC(sub_83C4DC24);
PPC_FUNC_IMPL(__imp__sub_83C4DC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DC28"))) PPC_WEAK_FUNC(sub_83C4DC28);
PPC_FUNC_IMPL(__imp__sub_83C4DC28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12020
	ctx.r11.s64 = ctx.r8.s64 + 12020;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,5968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5968);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10976
	ctx.r3.s64 = ctx.r6.s64 + -10976;
	// stw r10,12020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DC58"))) PPC_WEAK_FUNC(sub_83C4DC58);
PPC_FUNC_IMPL(__imp__sub_83C4DC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10960
	ctx.r3.s64 = ctx.r11.s64 + -10960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DC64"))) PPC_WEAK_FUNC(sub_83C4DC64);
PPC_FUNC_IMPL(__imp__sub_83C4DC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DC68"))) PPC_WEAK_FUNC(sub_83C4DC68);
PPC_FUNC_IMPL(__imp__sub_83C4DC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10952
	ctx.r3.s64 = ctx.r11.s64 + -10952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DC74"))) PPC_WEAK_FUNC(sub_83C4DC74);
PPC_FUNC_IMPL(__imp__sub_83C4DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DC78"))) PPC_WEAK_FUNC(sub_83C4DC78);
PPC_FUNC_IMPL(__imp__sub_83C4DC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DC84"))) PPC_WEAK_FUNC(sub_83C4DC84);
PPC_FUNC_IMPL(__imp__sub_83C4DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DC88"))) PPC_WEAK_FUNC(sub_83C4DC88);
PPC_FUNC_IMPL(__imp__sub_83C4DC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10936
	ctx.r3.s64 = ctx.r11.s64 + -10936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DC94"))) PPC_WEAK_FUNC(sub_83C4DC94);
PPC_FUNC_IMPL(__imp__sub_83C4DC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DC98"))) PPC_WEAK_FUNC(sub_83C4DC98);
PPC_FUNC_IMPL(__imp__sub_83C4DC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DCA4"))) PPC_WEAK_FUNC(sub_83C4DCA4);
PPC_FUNC_IMPL(__imp__sub_83C4DCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DCA8"))) PPC_WEAK_FUNC(sub_83C4DCA8);
PPC_FUNC_IMPL(__imp__sub_83C4DCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10920
	ctx.r3.s64 = ctx.r11.s64 + -10920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DCB4"))) PPC_WEAK_FUNC(sub_83C4DCB4);
PPC_FUNC_IMPL(__imp__sub_83C4DCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DCB8"))) PPC_WEAK_FUNC(sub_83C4DCB8);
PPC_FUNC_IMPL(__imp__sub_83C4DCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10912
	ctx.r3.s64 = ctx.r11.s64 + -10912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DCC4"))) PPC_WEAK_FUNC(sub_83C4DCC4);
PPC_FUNC_IMPL(__imp__sub_83C4DCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DCC8"))) PPC_WEAK_FUNC(sub_83C4DCC8);
PPC_FUNC_IMPL(__imp__sub_83C4DCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10904
	ctx.r3.s64 = ctx.r11.s64 + -10904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DCD4"))) PPC_WEAK_FUNC(sub_83C4DCD4);
PPC_FUNC_IMPL(__imp__sub_83C4DCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DCD8"))) PPC_WEAK_FUNC(sub_83C4DCD8);
PPC_FUNC_IMPL(__imp__sub_83C4DCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10896
	ctx.r3.s64 = ctx.r11.s64 + -10896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DCE4"))) PPC_WEAK_FUNC(sub_83C4DCE4);
PPC_FUNC_IMPL(__imp__sub_83C4DCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DCE8"))) PPC_WEAK_FUNC(sub_83C4DCE8);
PPC_FUNC_IMPL(__imp__sub_83C4DCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10888
	ctx.r3.s64 = ctx.r11.s64 + -10888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DCF4"))) PPC_WEAK_FUNC(sub_83C4DCF4);
PPC_FUNC_IMPL(__imp__sub_83C4DCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DCF8"))) PPC_WEAK_FUNC(sub_83C4DCF8);
PPC_FUNC_IMPL(__imp__sub_83C4DCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10880
	ctx.r3.s64 = ctx.r11.s64 + -10880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DD04"))) PPC_WEAK_FUNC(sub_83C4DD04);
PPC_FUNC_IMPL(__imp__sub_83C4DD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DD08"))) PPC_WEAK_FUNC(sub_83C4DD08);
PPC_FUNC_IMPL(__imp__sub_83C4DD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10872
	ctx.r3.s64 = ctx.r11.s64 + -10872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DD14"))) PPC_WEAK_FUNC(sub_83C4DD14);
PPC_FUNC_IMPL(__imp__sub_83C4DD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DD18"))) PPC_WEAK_FUNC(sub_83C4DD18);
PPC_FUNC_IMPL(__imp__sub_83C4DD18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12400
	ctx.r7.s64 = ctx.r8.s64 + 12400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4DD40"))) PPC_WEAK_FUNC(sub_83C4DD40);
PPC_FUNC_IMPL(__imp__sub_83C4DD40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,6120
	ctx.r6.s64 = ctx.r7.s64 + 6120;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6048(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6048);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12400);
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
	// std r9,6120(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6120, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4DD88"))) PPC_WEAK_FUNC(sub_83C4DD88);
PPC_FUNC_IMPL(__imp__sub_83C4DD88) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,12384
	ctx.r3.s64 = ctx.r11.s64 + 12384;
	// bl 0x83523120
	ctx.lr = 0x83C4DDA0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10864
	ctx.r3.s64 = ctx.r10.s64 + -10864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4DDAC;
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

__attribute__((alias("__imp__sub_83C4DDBC"))) PPC_WEAK_FUNC(sub_83C4DDBC);
PPC_FUNC_IMPL(__imp__sub_83C4DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DDC0"))) PPC_WEAK_FUNC(sub_83C4DDC0);
PPC_FUNC_IMPL(__imp__sub_83C4DDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DDCC"))) PPC_WEAK_FUNC(sub_83C4DDCC);
PPC_FUNC_IMPL(__imp__sub_83C4DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DDD0"))) PPC_WEAK_FUNC(sub_83C4DDD0);
PPC_FUNC_IMPL(__imp__sub_83C4DDD0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,12408
	ctx.r3.s64 = ctx.r11.s64 + 12408;
	// bl 0x8259af80
	ctx.lr = 0x83C4DDE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10832
	ctx.r3.s64 = ctx.r10.s64 + -10832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4DDF4;
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

__attribute__((alias("__imp__sub_83C4DE04"))) PPC_WEAK_FUNC(sub_83C4DE04);
PPC_FUNC_IMPL(__imp__sub_83C4DE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DE08"))) PPC_WEAK_FUNC(sub_83C4DE08);
PPC_FUNC_IMPL(__imp__sub_83C4DE08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12388
	ctx.r11.s64 = ctx.r8.s64 + 12388;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,6096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6096);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10840
	ctx.r3.s64 = ctx.r6.s64 + -10840;
	// stw r10,12388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DE38"))) PPC_WEAK_FUNC(sub_83C4DE38);
PPC_FUNC_IMPL(__imp__sub_83C4DE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10824
	ctx.r3.s64 = ctx.r11.s64 + -10824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DE44"))) PPC_WEAK_FUNC(sub_83C4DE44);
PPC_FUNC_IMPL(__imp__sub_83C4DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DE48"))) PPC_WEAK_FUNC(sub_83C4DE48);
PPC_FUNC_IMPL(__imp__sub_83C4DE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10816
	ctx.r3.s64 = ctx.r11.s64 + -10816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DE54"))) PPC_WEAK_FUNC(sub_83C4DE54);
PPC_FUNC_IMPL(__imp__sub_83C4DE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DE58"))) PPC_WEAK_FUNC(sub_83C4DE58);
PPC_FUNC_IMPL(__imp__sub_83C4DE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10808
	ctx.r3.s64 = ctx.r11.s64 + -10808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DE64"))) PPC_WEAK_FUNC(sub_83C4DE64);
PPC_FUNC_IMPL(__imp__sub_83C4DE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DE68"))) PPC_WEAK_FUNC(sub_83C4DE68);
PPC_FUNC_IMPL(__imp__sub_83C4DE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10800
	ctx.r3.s64 = ctx.r11.s64 + -10800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DE74"))) PPC_WEAK_FUNC(sub_83C4DE74);
PPC_FUNC_IMPL(__imp__sub_83C4DE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DE78"))) PPC_WEAK_FUNC(sub_83C4DE78);
PPC_FUNC_IMPL(__imp__sub_83C4DE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10792
	ctx.r3.s64 = ctx.r11.s64 + -10792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DE84"))) PPC_WEAK_FUNC(sub_83C4DE84);
PPC_FUNC_IMPL(__imp__sub_83C4DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DE88"))) PPC_WEAK_FUNC(sub_83C4DE88);
PPC_FUNC_IMPL(__imp__sub_83C4DE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10784
	ctx.r3.s64 = ctx.r11.s64 + -10784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DE94"))) PPC_WEAK_FUNC(sub_83C4DE94);
PPC_FUNC_IMPL(__imp__sub_83C4DE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DE98"))) PPC_WEAK_FUNC(sub_83C4DE98);
PPC_FUNC_IMPL(__imp__sub_83C4DE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10776
	ctx.r3.s64 = ctx.r11.s64 + -10776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DEA4"))) PPC_WEAK_FUNC(sub_83C4DEA4);
PPC_FUNC_IMPL(__imp__sub_83C4DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DEA8"))) PPC_WEAK_FUNC(sub_83C4DEA8);
PPC_FUNC_IMPL(__imp__sub_83C4DEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DEB4"))) PPC_WEAK_FUNC(sub_83C4DEB4);
PPC_FUNC_IMPL(__imp__sub_83C4DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DEB8"))) PPC_WEAK_FUNC(sub_83C4DEB8);
PPC_FUNC_IMPL(__imp__sub_83C4DEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10760
	ctx.r3.s64 = ctx.r11.s64 + -10760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DEC4"))) PPC_WEAK_FUNC(sub_83C4DEC4);
PPC_FUNC_IMPL(__imp__sub_83C4DEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DEC8"))) PPC_WEAK_FUNC(sub_83C4DEC8);
PPC_FUNC_IMPL(__imp__sub_83C4DEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10752
	ctx.r3.s64 = ctx.r11.s64 + -10752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DED4"))) PPC_WEAK_FUNC(sub_83C4DED4);
PPC_FUNC_IMPL(__imp__sub_83C4DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DED8"))) PPC_WEAK_FUNC(sub_83C4DED8);
PPC_FUNC_IMPL(__imp__sub_83C4DED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10744
	ctx.r3.s64 = ctx.r11.s64 + -10744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DEE4"))) PPC_WEAK_FUNC(sub_83C4DEE4);
PPC_FUNC_IMPL(__imp__sub_83C4DEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DEE8"))) PPC_WEAK_FUNC(sub_83C4DEE8);
PPC_FUNC_IMPL(__imp__sub_83C4DEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DEF4"))) PPC_WEAK_FUNC(sub_83C4DEF4);
PPC_FUNC_IMPL(__imp__sub_83C4DEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DEF8"))) PPC_WEAK_FUNC(sub_83C4DEF8);
PPC_FUNC_IMPL(__imp__sub_83C4DEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12768
	ctx.r7.s64 = ctx.r8.s64 + 12768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4DF20"))) PPC_WEAK_FUNC(sub_83C4DF20);
PPC_FUNC_IMPL(__imp__sub_83C4DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,6248
	ctx.r6.s64 = ctx.r7.s64 + 6248;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6176(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6176);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12768);
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
	// std r9,6248(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6248, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4DF68"))) PPC_WEAK_FUNC(sub_83C4DF68);
PPC_FUNC_IMPL(__imp__sub_83C4DF68) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,12752
	ctx.r3.s64 = ctx.r11.s64 + 12752;
	// bl 0x83523120
	ctx.lr = 0x83C4DF80;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10728
	ctx.r3.s64 = ctx.r10.s64 + -10728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4DF8C;
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

__attribute__((alias("__imp__sub_83C4DF9C"))) PPC_WEAK_FUNC(sub_83C4DF9C);
PPC_FUNC_IMPL(__imp__sub_83C4DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DFA0"))) PPC_WEAK_FUNC(sub_83C4DFA0);
PPC_FUNC_IMPL(__imp__sub_83C4DFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10712
	ctx.r3.s64 = ctx.r11.s64 + -10712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DFAC"))) PPC_WEAK_FUNC(sub_83C4DFAC);
PPC_FUNC_IMPL(__imp__sub_83C4DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DFB0"))) PPC_WEAK_FUNC(sub_83C4DFB0);
PPC_FUNC_IMPL(__imp__sub_83C4DFB0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,12776
	ctx.r3.s64 = ctx.r11.s64 + 12776;
	// bl 0x8259af80
	ctx.lr = 0x83C4DFC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10696
	ctx.r3.s64 = ctx.r10.s64 + -10696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4DFD4;
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

__attribute__((alias("__imp__sub_83C4DFE4"))) PPC_WEAK_FUNC(sub_83C4DFE4);
PPC_FUNC_IMPL(__imp__sub_83C4DFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DFE8"))) PPC_WEAK_FUNC(sub_83C4DFE8);
PPC_FUNC_IMPL(__imp__sub_83C4DFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12756
	ctx.r11.s64 = ctx.r8.s64 + 12756;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,6224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6224);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10704
	ctx.r3.s64 = ctx.r6.s64 + -10704;
	// stw r10,12756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E018"))) PPC_WEAK_FUNC(sub_83C4E018);
PPC_FUNC_IMPL(__imp__sub_83C4E018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E024"))) PPC_WEAK_FUNC(sub_83C4E024);
PPC_FUNC_IMPL(__imp__sub_83C4E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E028"))) PPC_WEAK_FUNC(sub_83C4E028);
PPC_FUNC_IMPL(__imp__sub_83C4E028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10680
	ctx.r3.s64 = ctx.r11.s64 + -10680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E034"))) PPC_WEAK_FUNC(sub_83C4E034);
PPC_FUNC_IMPL(__imp__sub_83C4E034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E038"))) PPC_WEAK_FUNC(sub_83C4E038);
PPC_FUNC_IMPL(__imp__sub_83C4E038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10672
	ctx.r3.s64 = ctx.r11.s64 + -10672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E044"))) PPC_WEAK_FUNC(sub_83C4E044);
PPC_FUNC_IMPL(__imp__sub_83C4E044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E048"))) PPC_WEAK_FUNC(sub_83C4E048);
PPC_FUNC_IMPL(__imp__sub_83C4E048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E054"))) PPC_WEAK_FUNC(sub_83C4E054);
PPC_FUNC_IMPL(__imp__sub_83C4E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E058"))) PPC_WEAK_FUNC(sub_83C4E058);
PPC_FUNC_IMPL(__imp__sub_83C4E058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10656
	ctx.r3.s64 = ctx.r11.s64 + -10656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E064"))) PPC_WEAK_FUNC(sub_83C4E064);
PPC_FUNC_IMPL(__imp__sub_83C4E064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E068"))) PPC_WEAK_FUNC(sub_83C4E068);
PPC_FUNC_IMPL(__imp__sub_83C4E068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10648
	ctx.r3.s64 = ctx.r11.s64 + -10648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E074"))) PPC_WEAK_FUNC(sub_83C4E074);
PPC_FUNC_IMPL(__imp__sub_83C4E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E078"))) PPC_WEAK_FUNC(sub_83C4E078);
PPC_FUNC_IMPL(__imp__sub_83C4E078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10640
	ctx.r3.s64 = ctx.r11.s64 + -10640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E084"))) PPC_WEAK_FUNC(sub_83C4E084);
PPC_FUNC_IMPL(__imp__sub_83C4E084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E088"))) PPC_WEAK_FUNC(sub_83C4E088);
PPC_FUNC_IMPL(__imp__sub_83C4E088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10632
	ctx.r3.s64 = ctx.r11.s64 + -10632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E094"))) PPC_WEAK_FUNC(sub_83C4E094);
PPC_FUNC_IMPL(__imp__sub_83C4E094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E098"))) PPC_WEAK_FUNC(sub_83C4E098);
PPC_FUNC_IMPL(__imp__sub_83C4E098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10624
	ctx.r3.s64 = ctx.r11.s64 + -10624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E0A4"))) PPC_WEAK_FUNC(sub_83C4E0A4);
PPC_FUNC_IMPL(__imp__sub_83C4E0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E0A8"))) PPC_WEAK_FUNC(sub_83C4E0A8);
PPC_FUNC_IMPL(__imp__sub_83C4E0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E0B4"))) PPC_WEAK_FUNC(sub_83C4E0B4);
PPC_FUNC_IMPL(__imp__sub_83C4E0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E0B8"))) PPC_WEAK_FUNC(sub_83C4E0B8);
PPC_FUNC_IMPL(__imp__sub_83C4E0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10608
	ctx.r3.s64 = ctx.r11.s64 + -10608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E0C4"))) PPC_WEAK_FUNC(sub_83C4E0C4);
PPC_FUNC_IMPL(__imp__sub_83C4E0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E0C8"))) PPC_WEAK_FUNC(sub_83C4E0C8);
PPC_FUNC_IMPL(__imp__sub_83C4E0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10600
	ctx.r3.s64 = ctx.r11.s64 + -10600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E0D4"))) PPC_WEAK_FUNC(sub_83C4E0D4);
PPC_FUNC_IMPL(__imp__sub_83C4E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E0D8"))) PPC_WEAK_FUNC(sub_83C4E0D8);
PPC_FUNC_IMPL(__imp__sub_83C4E0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13136
	ctx.r7.s64 = ctx.r8.s64 + 13136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E100"))) PPC_WEAK_FUNC(sub_83C4E100);
PPC_FUNC_IMPL(__imp__sub_83C4E100) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,6384
	ctx.r6.s64 = ctx.r7.s64 + 6384;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13136);
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
	// std r9,6384(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E148"))) PPC_WEAK_FUNC(sub_83C4E148);
PPC_FUNC_IMPL(__imp__sub_83C4E148) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,13120
	ctx.r3.s64 = ctx.r11.s64 + 13120;
	// bl 0x83523120
	ctx.lr = 0x83C4E160;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10592
	ctx.r3.s64 = ctx.r10.s64 + -10592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E16C;
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

__attribute__((alias("__imp__sub_83C4E17C"))) PPC_WEAK_FUNC(sub_83C4E17C);
PPC_FUNC_IMPL(__imp__sub_83C4E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E180"))) PPC_WEAK_FUNC(sub_83C4E180);
PPC_FUNC_IMPL(__imp__sub_83C4E180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E18C"))) PPC_WEAK_FUNC(sub_83C4E18C);
PPC_FUNC_IMPL(__imp__sub_83C4E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E190"))) PPC_WEAK_FUNC(sub_83C4E190);
PPC_FUNC_IMPL(__imp__sub_83C4E190) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,13144
	ctx.r3.s64 = ctx.r11.s64 + 13144;
	// bl 0x8259af80
	ctx.lr = 0x83C4E1A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10560
	ctx.r3.s64 = ctx.r10.s64 + -10560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E1B4;
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

__attribute__((alias("__imp__sub_83C4E1C4"))) PPC_WEAK_FUNC(sub_83C4E1C4);
PPC_FUNC_IMPL(__imp__sub_83C4E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E1C8"))) PPC_WEAK_FUNC(sub_83C4E1C8);
PPC_FUNC_IMPL(__imp__sub_83C4E1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13124
	ctx.r11.s64 = ctx.r8.s64 + 13124;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,6360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6360);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10568
	ctx.r3.s64 = ctx.r6.s64 + -10568;
	// stw r10,13124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E1F8"))) PPC_WEAK_FUNC(sub_83C4E1F8);
PPC_FUNC_IMPL(__imp__sub_83C4E1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10552
	ctx.r3.s64 = ctx.r11.s64 + -10552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E204"))) PPC_WEAK_FUNC(sub_83C4E204);
PPC_FUNC_IMPL(__imp__sub_83C4E204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E208"))) PPC_WEAK_FUNC(sub_83C4E208);
PPC_FUNC_IMPL(__imp__sub_83C4E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10544
	ctx.r3.s64 = ctx.r11.s64 + -10544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E214"))) PPC_WEAK_FUNC(sub_83C4E214);
PPC_FUNC_IMPL(__imp__sub_83C4E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E218"))) PPC_WEAK_FUNC(sub_83C4E218);
PPC_FUNC_IMPL(__imp__sub_83C4E218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10536
	ctx.r3.s64 = ctx.r11.s64 + -10536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E224"))) PPC_WEAK_FUNC(sub_83C4E224);
PPC_FUNC_IMPL(__imp__sub_83C4E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E228"))) PPC_WEAK_FUNC(sub_83C4E228);
PPC_FUNC_IMPL(__imp__sub_83C4E228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E234"))) PPC_WEAK_FUNC(sub_83C4E234);
PPC_FUNC_IMPL(__imp__sub_83C4E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E238"))) PPC_WEAK_FUNC(sub_83C4E238);
PPC_FUNC_IMPL(__imp__sub_83C4E238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E244"))) PPC_WEAK_FUNC(sub_83C4E244);
PPC_FUNC_IMPL(__imp__sub_83C4E244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E248"))) PPC_WEAK_FUNC(sub_83C4E248);
PPC_FUNC_IMPL(__imp__sub_83C4E248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10512
	ctx.r3.s64 = ctx.r11.s64 + -10512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E254"))) PPC_WEAK_FUNC(sub_83C4E254);
PPC_FUNC_IMPL(__imp__sub_83C4E254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E258"))) PPC_WEAK_FUNC(sub_83C4E258);
PPC_FUNC_IMPL(__imp__sub_83C4E258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10504
	ctx.r3.s64 = ctx.r11.s64 + -10504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E264"))) PPC_WEAK_FUNC(sub_83C4E264);
PPC_FUNC_IMPL(__imp__sub_83C4E264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E268"))) PPC_WEAK_FUNC(sub_83C4E268);
PPC_FUNC_IMPL(__imp__sub_83C4E268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E274"))) PPC_WEAK_FUNC(sub_83C4E274);
PPC_FUNC_IMPL(__imp__sub_83C4E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E278"))) PPC_WEAK_FUNC(sub_83C4E278);
PPC_FUNC_IMPL(__imp__sub_83C4E278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10488
	ctx.r3.s64 = ctx.r11.s64 + -10488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E284"))) PPC_WEAK_FUNC(sub_83C4E284);
PPC_FUNC_IMPL(__imp__sub_83C4E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E288"))) PPC_WEAK_FUNC(sub_83C4E288);
PPC_FUNC_IMPL(__imp__sub_83C4E288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10480
	ctx.r3.s64 = ctx.r11.s64 + -10480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E294"))) PPC_WEAK_FUNC(sub_83C4E294);
PPC_FUNC_IMPL(__imp__sub_83C4E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E298"))) PPC_WEAK_FUNC(sub_83C4E298);
PPC_FUNC_IMPL(__imp__sub_83C4E298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10472
	ctx.r3.s64 = ctx.r11.s64 + -10472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E2A4"))) PPC_WEAK_FUNC(sub_83C4E2A4);
PPC_FUNC_IMPL(__imp__sub_83C4E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E2A8"))) PPC_WEAK_FUNC(sub_83C4E2A8);
PPC_FUNC_IMPL(__imp__sub_83C4E2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10464
	ctx.r3.s64 = ctx.r11.s64 + -10464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E2B4"))) PPC_WEAK_FUNC(sub_83C4E2B4);
PPC_FUNC_IMPL(__imp__sub_83C4E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E2B8"))) PPC_WEAK_FUNC(sub_83C4E2B8);
PPC_FUNC_IMPL(__imp__sub_83C4E2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13504
	ctx.r7.s64 = ctx.r8.s64 + 13504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E2E0"))) PPC_WEAK_FUNC(sub_83C4E2E0);
PPC_FUNC_IMPL(__imp__sub_83C4E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,6524
	ctx.r6.s64 = ctx.r7.s64 + 6524;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6452(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6452);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13504);
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
	// std r9,6524(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6524, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E328"))) PPC_WEAK_FUNC(sub_83C4E328);
PPC_FUNC_IMPL(__imp__sub_83C4E328) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,13488
	ctx.r3.s64 = ctx.r11.s64 + 13488;
	// bl 0x83523120
	ctx.lr = 0x83C4E340;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10456
	ctx.r3.s64 = ctx.r10.s64 + -10456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E34C;
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

__attribute__((alias("__imp__sub_83C4E35C"))) PPC_WEAK_FUNC(sub_83C4E35C);
PPC_FUNC_IMPL(__imp__sub_83C4E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E360"))) PPC_WEAK_FUNC(sub_83C4E360);
PPC_FUNC_IMPL(__imp__sub_83C4E360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E36C"))) PPC_WEAK_FUNC(sub_83C4E36C);
PPC_FUNC_IMPL(__imp__sub_83C4E36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E370"))) PPC_WEAK_FUNC(sub_83C4E370);
PPC_FUNC_IMPL(__imp__sub_83C4E370) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// bl 0x8259af80
	ctx.lr = 0x83C4E388;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10424
	ctx.r3.s64 = ctx.r10.s64 + -10424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E394;
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

__attribute__((alias("__imp__sub_83C4E3A4"))) PPC_WEAK_FUNC(sub_83C4E3A4);
PPC_FUNC_IMPL(__imp__sub_83C4E3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E3A8"))) PPC_WEAK_FUNC(sub_83C4E3A8);
PPC_FUNC_IMPL(__imp__sub_83C4E3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13492
	ctx.r11.s64 = ctx.r8.s64 + 13492;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,6500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6500);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10432
	ctx.r3.s64 = ctx.r6.s64 + -10432;
	// stw r10,13492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E3D8"))) PPC_WEAK_FUNC(sub_83C4E3D8);
PPC_FUNC_IMPL(__imp__sub_83C4E3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10416
	ctx.r3.s64 = ctx.r11.s64 + -10416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E3E4"))) PPC_WEAK_FUNC(sub_83C4E3E4);
PPC_FUNC_IMPL(__imp__sub_83C4E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E3E8"))) PPC_WEAK_FUNC(sub_83C4E3E8);
PPC_FUNC_IMPL(__imp__sub_83C4E3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10408
	ctx.r3.s64 = ctx.r11.s64 + -10408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E3F4"))) PPC_WEAK_FUNC(sub_83C4E3F4);
PPC_FUNC_IMPL(__imp__sub_83C4E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E3F8"))) PPC_WEAK_FUNC(sub_83C4E3F8);
PPC_FUNC_IMPL(__imp__sub_83C4E3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10400
	ctx.r3.s64 = ctx.r11.s64 + -10400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E404"))) PPC_WEAK_FUNC(sub_83C4E404);
PPC_FUNC_IMPL(__imp__sub_83C4E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E408"))) PPC_WEAK_FUNC(sub_83C4E408);
PPC_FUNC_IMPL(__imp__sub_83C4E408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10392
	ctx.r3.s64 = ctx.r11.s64 + -10392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E414"))) PPC_WEAK_FUNC(sub_83C4E414);
PPC_FUNC_IMPL(__imp__sub_83C4E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E418"))) PPC_WEAK_FUNC(sub_83C4E418);
PPC_FUNC_IMPL(__imp__sub_83C4E418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10384
	ctx.r3.s64 = ctx.r11.s64 + -10384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E424"))) PPC_WEAK_FUNC(sub_83C4E424);
PPC_FUNC_IMPL(__imp__sub_83C4E424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E428"))) PPC_WEAK_FUNC(sub_83C4E428);
PPC_FUNC_IMPL(__imp__sub_83C4E428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10376
	ctx.r3.s64 = ctx.r11.s64 + -10376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E434"))) PPC_WEAK_FUNC(sub_83C4E434);
PPC_FUNC_IMPL(__imp__sub_83C4E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E438"))) PPC_WEAK_FUNC(sub_83C4E438);
PPC_FUNC_IMPL(__imp__sub_83C4E438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10368
	ctx.r3.s64 = ctx.r11.s64 + -10368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E444"))) PPC_WEAK_FUNC(sub_83C4E444);
PPC_FUNC_IMPL(__imp__sub_83C4E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E448"))) PPC_WEAK_FUNC(sub_83C4E448);
PPC_FUNC_IMPL(__imp__sub_83C4E448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10360
	ctx.r3.s64 = ctx.r11.s64 + -10360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E454"))) PPC_WEAK_FUNC(sub_83C4E454);
PPC_FUNC_IMPL(__imp__sub_83C4E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E458"))) PPC_WEAK_FUNC(sub_83C4E458);
PPC_FUNC_IMPL(__imp__sub_83C4E458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10352
	ctx.r3.s64 = ctx.r11.s64 + -10352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E464"))) PPC_WEAK_FUNC(sub_83C4E464);
PPC_FUNC_IMPL(__imp__sub_83C4E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E468"))) PPC_WEAK_FUNC(sub_83C4E468);
PPC_FUNC_IMPL(__imp__sub_83C4E468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10344
	ctx.r3.s64 = ctx.r11.s64 + -10344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E474"))) PPC_WEAK_FUNC(sub_83C4E474);
PPC_FUNC_IMPL(__imp__sub_83C4E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E478"))) PPC_WEAK_FUNC(sub_83C4E478);
PPC_FUNC_IMPL(__imp__sub_83C4E478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10336
	ctx.r3.s64 = ctx.r11.s64 + -10336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E484"))) PPC_WEAK_FUNC(sub_83C4E484);
PPC_FUNC_IMPL(__imp__sub_83C4E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E488"))) PPC_WEAK_FUNC(sub_83C4E488);
PPC_FUNC_IMPL(__imp__sub_83C4E488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10328
	ctx.r3.s64 = ctx.r11.s64 + -10328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E494"))) PPC_WEAK_FUNC(sub_83C4E494);
PPC_FUNC_IMPL(__imp__sub_83C4E494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E498"))) PPC_WEAK_FUNC(sub_83C4E498);
PPC_FUNC_IMPL(__imp__sub_83C4E498) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13872
	ctx.r7.s64 = ctx.r8.s64 + 13872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E4C0"))) PPC_WEAK_FUNC(sub_83C4E4C0);
PPC_FUNC_IMPL(__imp__sub_83C4E4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,6652
	ctx.r6.s64 = ctx.r7.s64 + 6652;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6580(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6580);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13872);
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
	// std r9,6652(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6652, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E508"))) PPC_WEAK_FUNC(sub_83C4E508);
PPC_FUNC_IMPL(__imp__sub_83C4E508) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,13856
	ctx.r3.s64 = ctx.r11.s64 + 13856;
	// bl 0x83523120
	ctx.lr = 0x83C4E520;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10320
	ctx.r3.s64 = ctx.r10.s64 + -10320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E52C;
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

__attribute__((alias("__imp__sub_83C4E53C"))) PPC_WEAK_FUNC(sub_83C4E53C);
PPC_FUNC_IMPL(__imp__sub_83C4E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E540"))) PPC_WEAK_FUNC(sub_83C4E540);
PPC_FUNC_IMPL(__imp__sub_83C4E540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10304
	ctx.r3.s64 = ctx.r11.s64 + -10304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E54C"))) PPC_WEAK_FUNC(sub_83C4E54C);
PPC_FUNC_IMPL(__imp__sub_83C4E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E550"))) PPC_WEAK_FUNC(sub_83C4E550);
PPC_FUNC_IMPL(__imp__sub_83C4E550) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,13880
	ctx.r3.s64 = ctx.r11.s64 + 13880;
	// bl 0x8259af80
	ctx.lr = 0x83C4E568;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10288
	ctx.r3.s64 = ctx.r10.s64 + -10288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E574;
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

__attribute__((alias("__imp__sub_83C4E584"))) PPC_WEAK_FUNC(sub_83C4E584);
PPC_FUNC_IMPL(__imp__sub_83C4E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E588"))) PPC_WEAK_FUNC(sub_83C4E588);
PPC_FUNC_IMPL(__imp__sub_83C4E588) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13860
	ctx.r11.s64 = ctx.r8.s64 + 13860;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,6628(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6628);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10296
	ctx.r3.s64 = ctx.r6.s64 + -10296;
	// stw r10,13860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E5B8"))) PPC_WEAK_FUNC(sub_83C4E5B8);
PPC_FUNC_IMPL(__imp__sub_83C4E5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10280
	ctx.r3.s64 = ctx.r11.s64 + -10280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E5C4"))) PPC_WEAK_FUNC(sub_83C4E5C4);
PPC_FUNC_IMPL(__imp__sub_83C4E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E5C8"))) PPC_WEAK_FUNC(sub_83C4E5C8);
PPC_FUNC_IMPL(__imp__sub_83C4E5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10272
	ctx.r3.s64 = ctx.r11.s64 + -10272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E5D4"))) PPC_WEAK_FUNC(sub_83C4E5D4);
PPC_FUNC_IMPL(__imp__sub_83C4E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E5D8"))) PPC_WEAK_FUNC(sub_83C4E5D8);
PPC_FUNC_IMPL(__imp__sub_83C4E5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10264
	ctx.r3.s64 = ctx.r11.s64 + -10264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E5E4"))) PPC_WEAK_FUNC(sub_83C4E5E4);
PPC_FUNC_IMPL(__imp__sub_83C4E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E5E8"))) PPC_WEAK_FUNC(sub_83C4E5E8);
PPC_FUNC_IMPL(__imp__sub_83C4E5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10256
	ctx.r3.s64 = ctx.r11.s64 + -10256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E5F4"))) PPC_WEAK_FUNC(sub_83C4E5F4);
PPC_FUNC_IMPL(__imp__sub_83C4E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E5F8"))) PPC_WEAK_FUNC(sub_83C4E5F8);
PPC_FUNC_IMPL(__imp__sub_83C4E5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10248
	ctx.r3.s64 = ctx.r11.s64 + -10248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E604"))) PPC_WEAK_FUNC(sub_83C4E604);
PPC_FUNC_IMPL(__imp__sub_83C4E604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E608"))) PPC_WEAK_FUNC(sub_83C4E608);
PPC_FUNC_IMPL(__imp__sub_83C4E608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E614"))) PPC_WEAK_FUNC(sub_83C4E614);
PPC_FUNC_IMPL(__imp__sub_83C4E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E618"))) PPC_WEAK_FUNC(sub_83C4E618);
PPC_FUNC_IMPL(__imp__sub_83C4E618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10232
	ctx.r3.s64 = ctx.r11.s64 + -10232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E624"))) PPC_WEAK_FUNC(sub_83C4E624);
PPC_FUNC_IMPL(__imp__sub_83C4E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E628"))) PPC_WEAK_FUNC(sub_83C4E628);
PPC_FUNC_IMPL(__imp__sub_83C4E628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10224
	ctx.r3.s64 = ctx.r11.s64 + -10224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E634"))) PPC_WEAK_FUNC(sub_83C4E634);
PPC_FUNC_IMPL(__imp__sub_83C4E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E638"))) PPC_WEAK_FUNC(sub_83C4E638);
PPC_FUNC_IMPL(__imp__sub_83C4E638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E644"))) PPC_WEAK_FUNC(sub_83C4E644);
PPC_FUNC_IMPL(__imp__sub_83C4E644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E648"))) PPC_WEAK_FUNC(sub_83C4E648);
PPC_FUNC_IMPL(__imp__sub_83C4E648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10208
	ctx.r3.s64 = ctx.r11.s64 + -10208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E654"))) PPC_WEAK_FUNC(sub_83C4E654);
PPC_FUNC_IMPL(__imp__sub_83C4E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E658"))) PPC_WEAK_FUNC(sub_83C4E658);
PPC_FUNC_IMPL(__imp__sub_83C4E658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10200
	ctx.r3.s64 = ctx.r11.s64 + -10200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E664"))) PPC_WEAK_FUNC(sub_83C4E664);
PPC_FUNC_IMPL(__imp__sub_83C4E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E668"))) PPC_WEAK_FUNC(sub_83C4E668);
PPC_FUNC_IMPL(__imp__sub_83C4E668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E674"))) PPC_WEAK_FUNC(sub_83C4E674);
PPC_FUNC_IMPL(__imp__sub_83C4E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E678"))) PPC_WEAK_FUNC(sub_83C4E678);
PPC_FUNC_IMPL(__imp__sub_83C4E678) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14240
	ctx.r7.s64 = ctx.r8.s64 + 14240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E6A0"))) PPC_WEAK_FUNC(sub_83C4E6A0);
PPC_FUNC_IMPL(__imp__sub_83C4E6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,6780
	ctx.r6.s64 = ctx.r7.s64 + 6780;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6708(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6708);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14240);
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
	// std r9,6780(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6780, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E6E8"))) PPC_WEAK_FUNC(sub_83C4E6E8);
PPC_FUNC_IMPL(__imp__sub_83C4E6E8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,14224
	ctx.r3.s64 = ctx.r11.s64 + 14224;
	// bl 0x83523120
	ctx.lr = 0x83C4E700;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10184
	ctx.r3.s64 = ctx.r10.s64 + -10184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E70C;
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

__attribute__((alias("__imp__sub_83C4E71C"))) PPC_WEAK_FUNC(sub_83C4E71C);
PPC_FUNC_IMPL(__imp__sub_83C4E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E720"))) PPC_WEAK_FUNC(sub_83C4E720);
PPC_FUNC_IMPL(__imp__sub_83C4E720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E72C"))) PPC_WEAK_FUNC(sub_83C4E72C);
PPC_FUNC_IMPL(__imp__sub_83C4E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E730"))) PPC_WEAK_FUNC(sub_83C4E730);
PPC_FUNC_IMPL(__imp__sub_83C4E730) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,14248
	ctx.r3.s64 = ctx.r11.s64 + 14248;
	// bl 0x8259af80
	ctx.lr = 0x83C4E748;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10152
	ctx.r3.s64 = ctx.r10.s64 + -10152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E754;
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

__attribute__((alias("__imp__sub_83C4E764"))) PPC_WEAK_FUNC(sub_83C4E764);
PPC_FUNC_IMPL(__imp__sub_83C4E764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E768"))) PPC_WEAK_FUNC(sub_83C4E768);
PPC_FUNC_IMPL(__imp__sub_83C4E768) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14228
	ctx.r11.s64 = ctx.r8.s64 + 14228;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,6756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6756);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10160
	ctx.r3.s64 = ctx.r6.s64 + -10160;
	// stw r10,14228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E798"))) PPC_WEAK_FUNC(sub_83C4E798);
PPC_FUNC_IMPL(__imp__sub_83C4E798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10144
	ctx.r3.s64 = ctx.r11.s64 + -10144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E7A4"))) PPC_WEAK_FUNC(sub_83C4E7A4);
PPC_FUNC_IMPL(__imp__sub_83C4E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E7A8"))) PPC_WEAK_FUNC(sub_83C4E7A8);
PPC_FUNC_IMPL(__imp__sub_83C4E7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10136
	ctx.r3.s64 = ctx.r11.s64 + -10136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E7B4"))) PPC_WEAK_FUNC(sub_83C4E7B4);
PPC_FUNC_IMPL(__imp__sub_83C4E7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E7B8"))) PPC_WEAK_FUNC(sub_83C4E7B8);
PPC_FUNC_IMPL(__imp__sub_83C4E7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E7C4"))) PPC_WEAK_FUNC(sub_83C4E7C4);
PPC_FUNC_IMPL(__imp__sub_83C4E7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E7C8"))) PPC_WEAK_FUNC(sub_83C4E7C8);
PPC_FUNC_IMPL(__imp__sub_83C4E7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10120
	ctx.r3.s64 = ctx.r11.s64 + -10120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E7D4"))) PPC_WEAK_FUNC(sub_83C4E7D4);
PPC_FUNC_IMPL(__imp__sub_83C4E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E7D8"))) PPC_WEAK_FUNC(sub_83C4E7D8);
PPC_FUNC_IMPL(__imp__sub_83C4E7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10112
	ctx.r3.s64 = ctx.r11.s64 + -10112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E7E4"))) PPC_WEAK_FUNC(sub_83C4E7E4);
PPC_FUNC_IMPL(__imp__sub_83C4E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E7E8"))) PPC_WEAK_FUNC(sub_83C4E7E8);
PPC_FUNC_IMPL(__imp__sub_83C4E7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10104
	ctx.r3.s64 = ctx.r11.s64 + -10104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E7F4"))) PPC_WEAK_FUNC(sub_83C4E7F4);
PPC_FUNC_IMPL(__imp__sub_83C4E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E7F8"))) PPC_WEAK_FUNC(sub_83C4E7F8);
PPC_FUNC_IMPL(__imp__sub_83C4E7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10096
	ctx.r3.s64 = ctx.r11.s64 + -10096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E804"))) PPC_WEAK_FUNC(sub_83C4E804);
PPC_FUNC_IMPL(__imp__sub_83C4E804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E808"))) PPC_WEAK_FUNC(sub_83C4E808);
PPC_FUNC_IMPL(__imp__sub_83C4E808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10088
	ctx.r3.s64 = ctx.r11.s64 + -10088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E814"))) PPC_WEAK_FUNC(sub_83C4E814);
PPC_FUNC_IMPL(__imp__sub_83C4E814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E818"))) PPC_WEAK_FUNC(sub_83C4E818);
PPC_FUNC_IMPL(__imp__sub_83C4E818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10080
	ctx.r3.s64 = ctx.r11.s64 + -10080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E824"))) PPC_WEAK_FUNC(sub_83C4E824);
PPC_FUNC_IMPL(__imp__sub_83C4E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E828"))) PPC_WEAK_FUNC(sub_83C4E828);
PPC_FUNC_IMPL(__imp__sub_83C4E828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10072
	ctx.r3.s64 = ctx.r11.s64 + -10072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E834"))) PPC_WEAK_FUNC(sub_83C4E834);
PPC_FUNC_IMPL(__imp__sub_83C4E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E838"))) PPC_WEAK_FUNC(sub_83C4E838);
PPC_FUNC_IMPL(__imp__sub_83C4E838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10064
	ctx.r3.s64 = ctx.r11.s64 + -10064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E844"))) PPC_WEAK_FUNC(sub_83C4E844);
PPC_FUNC_IMPL(__imp__sub_83C4E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E848"))) PPC_WEAK_FUNC(sub_83C4E848);
PPC_FUNC_IMPL(__imp__sub_83C4E848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10056
	ctx.r3.s64 = ctx.r11.s64 + -10056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E854"))) PPC_WEAK_FUNC(sub_83C4E854);
PPC_FUNC_IMPL(__imp__sub_83C4E854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E858"))) PPC_WEAK_FUNC(sub_83C4E858);
PPC_FUNC_IMPL(__imp__sub_83C4E858) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14608
	ctx.r7.s64 = ctx.r8.s64 + 14608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E880"))) PPC_WEAK_FUNC(sub_83C4E880);
PPC_FUNC_IMPL(__imp__sub_83C4E880) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,6908
	ctx.r6.s64 = ctx.r7.s64 + 6908;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,6836(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 6836);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14608);
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
	// std r9,6908(r7)
	PPC_STORE_U64(ctx.r7.u32 + 6908, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4E8C8"))) PPC_WEAK_FUNC(sub_83C4E8C8);
PPC_FUNC_IMPL(__imp__sub_83C4E8C8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,14592
	ctx.r3.s64 = ctx.r11.s64 + 14592;
	// bl 0x83523120
	ctx.lr = 0x83C4E8E0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10048
	ctx.r3.s64 = ctx.r10.s64 + -10048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E8EC;
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

__attribute__((alias("__imp__sub_83C4E8FC"))) PPC_WEAK_FUNC(sub_83C4E8FC);
PPC_FUNC_IMPL(__imp__sub_83C4E8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E900"))) PPC_WEAK_FUNC(sub_83C4E900);
PPC_FUNC_IMPL(__imp__sub_83C4E900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10032
	ctx.r3.s64 = ctx.r11.s64 + -10032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E90C"))) PPC_WEAK_FUNC(sub_83C4E90C);
PPC_FUNC_IMPL(__imp__sub_83C4E90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E910"))) PPC_WEAK_FUNC(sub_83C4E910);
PPC_FUNC_IMPL(__imp__sub_83C4E910) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,14616
	ctx.r3.s64 = ctx.r11.s64 + 14616;
	// bl 0x8259af80
	ctx.lr = 0x83C4E928;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-10016
	ctx.r3.s64 = ctx.r10.s64 + -10016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4E934;
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

__attribute__((alias("__imp__sub_83C4E944"))) PPC_WEAK_FUNC(sub_83C4E944);
PPC_FUNC_IMPL(__imp__sub_83C4E944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E948"))) PPC_WEAK_FUNC(sub_83C4E948);
PPC_FUNC_IMPL(__imp__sub_83C4E948) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14596
	ctx.r11.s64 = ctx.r8.s64 + 14596;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,6884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6884);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10024
	ctx.r3.s64 = ctx.r6.s64 + -10024;
	// stw r10,14596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E978"))) PPC_WEAK_FUNC(sub_83C4E978);
PPC_FUNC_IMPL(__imp__sub_83C4E978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10008
	ctx.r3.s64 = ctx.r11.s64 + -10008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4E984"))) PPC_WEAK_FUNC(sub_83C4E984);
PPC_FUNC_IMPL(__imp__sub_83C4E984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4E988"))) PPC_WEAK_FUNC(sub_83C4E988);
PPC_FUNC_IMPL(__imp__sub_83C4E988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-10000
	ctx.r3.s64 = ctx.r11.s64 + -10000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

