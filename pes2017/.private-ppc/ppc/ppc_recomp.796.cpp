#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C53CE0"))) PPC_WEAK_FUNC(sub_83C53CE0);
PPC_FUNC_IMPL(__imp__sub_83C53CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3168
	ctx.r3.s64 = ctx.r11.s64 + -3168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53CEC"))) PPC_WEAK_FUNC(sub_83C53CEC);
PPC_FUNC_IMPL(__imp__sub_83C53CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53CF0"))) PPC_WEAK_FUNC(sub_83C53CF0);
PPC_FUNC_IMPL(__imp__sub_83C53CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3160
	ctx.r3.s64 = ctx.r11.s64 + -3160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53CFC"))) PPC_WEAK_FUNC(sub_83C53CFC);
PPC_FUNC_IMPL(__imp__sub_83C53CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53D00"))) PPC_WEAK_FUNC(sub_83C53D00);
PPC_FUNC_IMPL(__imp__sub_83C53D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3152
	ctx.r3.s64 = ctx.r11.s64 + -3152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53D0C"))) PPC_WEAK_FUNC(sub_83C53D0C);
PPC_FUNC_IMPL(__imp__sub_83C53D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53D10"))) PPC_WEAK_FUNC(sub_83C53D10);
PPC_FUNC_IMPL(__imp__sub_83C53D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3144
	ctx.r3.s64 = ctx.r11.s64 + -3144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53D1C"))) PPC_WEAK_FUNC(sub_83C53D1C);
PPC_FUNC_IMPL(__imp__sub_83C53D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53D20"))) PPC_WEAK_FUNC(sub_83C53D20);
PPC_FUNC_IMPL(__imp__sub_83C53D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29768
	ctx.r7.s64 = ctx.r8.s64 + 29768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53D48"))) PPC_WEAK_FUNC(sub_83C53D48);
PPC_FUNC_IMPL(__imp__sub_83C53D48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,13592
	ctx.r6.s64 = ctx.r7.s64 + 13592;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13520(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13520);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29768);
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
	// std r9,13592(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13592, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53D90"))) PPC_WEAK_FUNC(sub_83C53D90);
PPC_FUNC_IMPL(__imp__sub_83C53D90) {
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
	// addi r3,r11,29752
	ctx.r3.s64 = ctx.r11.s64 + 29752;
	// bl 0x83523120
	ctx.lr = 0x83C53DA8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3136
	ctx.r3.s64 = ctx.r10.s64 + -3136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53DB4;
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

__attribute__((alias("__imp__sub_83C53DC4"))) PPC_WEAK_FUNC(sub_83C53DC4);
PPC_FUNC_IMPL(__imp__sub_83C53DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53DC8"))) PPC_WEAK_FUNC(sub_83C53DC8);
PPC_FUNC_IMPL(__imp__sub_83C53DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3120
	ctx.r3.s64 = ctx.r11.s64 + -3120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53DD4"))) PPC_WEAK_FUNC(sub_83C53DD4);
PPC_FUNC_IMPL(__imp__sub_83C53DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53DD8"))) PPC_WEAK_FUNC(sub_83C53DD8);
PPC_FUNC_IMPL(__imp__sub_83C53DD8) {
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
	// addi r3,r11,29776
	ctx.r3.s64 = ctx.r11.s64 + 29776;
	// bl 0x8259af80
	ctx.lr = 0x83C53DF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3104
	ctx.r3.s64 = ctx.r10.s64 + -3104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53DFC;
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

__attribute__((alias("__imp__sub_83C53E0C"))) PPC_WEAK_FUNC(sub_83C53E0C);
PPC_FUNC_IMPL(__imp__sub_83C53E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53E10"))) PPC_WEAK_FUNC(sub_83C53E10);
PPC_FUNC_IMPL(__imp__sub_83C53E10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29756
	ctx.r11.s64 = ctx.r8.s64 + 29756;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,13568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13568);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3112
	ctx.r3.s64 = ctx.r6.s64 + -3112;
	// stw r10,29756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53E40"))) PPC_WEAK_FUNC(sub_83C53E40);
PPC_FUNC_IMPL(__imp__sub_83C53E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3096
	ctx.r3.s64 = ctx.r11.s64 + -3096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53E4C"))) PPC_WEAK_FUNC(sub_83C53E4C);
PPC_FUNC_IMPL(__imp__sub_83C53E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53E50"))) PPC_WEAK_FUNC(sub_83C53E50);
PPC_FUNC_IMPL(__imp__sub_83C53E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3088
	ctx.r3.s64 = ctx.r11.s64 + -3088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53E5C"))) PPC_WEAK_FUNC(sub_83C53E5C);
PPC_FUNC_IMPL(__imp__sub_83C53E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53E60"))) PPC_WEAK_FUNC(sub_83C53E60);
PPC_FUNC_IMPL(__imp__sub_83C53E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3080
	ctx.r3.s64 = ctx.r11.s64 + -3080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53E6C"))) PPC_WEAK_FUNC(sub_83C53E6C);
PPC_FUNC_IMPL(__imp__sub_83C53E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53E70"))) PPC_WEAK_FUNC(sub_83C53E70);
PPC_FUNC_IMPL(__imp__sub_83C53E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3072
	ctx.r3.s64 = ctx.r11.s64 + -3072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53E7C"))) PPC_WEAK_FUNC(sub_83C53E7C);
PPC_FUNC_IMPL(__imp__sub_83C53E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53E80"))) PPC_WEAK_FUNC(sub_83C53E80);
PPC_FUNC_IMPL(__imp__sub_83C53E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3064
	ctx.r3.s64 = ctx.r11.s64 + -3064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53E8C"))) PPC_WEAK_FUNC(sub_83C53E8C);
PPC_FUNC_IMPL(__imp__sub_83C53E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53E90"))) PPC_WEAK_FUNC(sub_83C53E90);
PPC_FUNC_IMPL(__imp__sub_83C53E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3056
	ctx.r3.s64 = ctx.r11.s64 + -3056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53E9C"))) PPC_WEAK_FUNC(sub_83C53E9C);
PPC_FUNC_IMPL(__imp__sub_83C53E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53EA0"))) PPC_WEAK_FUNC(sub_83C53EA0);
PPC_FUNC_IMPL(__imp__sub_83C53EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3048
	ctx.r3.s64 = ctx.r11.s64 + -3048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53EAC"))) PPC_WEAK_FUNC(sub_83C53EAC);
PPC_FUNC_IMPL(__imp__sub_83C53EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53EB0"))) PPC_WEAK_FUNC(sub_83C53EB0);
PPC_FUNC_IMPL(__imp__sub_83C53EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3040
	ctx.r3.s64 = ctx.r11.s64 + -3040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53EBC"))) PPC_WEAK_FUNC(sub_83C53EBC);
PPC_FUNC_IMPL(__imp__sub_83C53EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53EC0"))) PPC_WEAK_FUNC(sub_83C53EC0);
PPC_FUNC_IMPL(__imp__sub_83C53EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3032
	ctx.r3.s64 = ctx.r11.s64 + -3032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53ECC"))) PPC_WEAK_FUNC(sub_83C53ECC);
PPC_FUNC_IMPL(__imp__sub_83C53ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53ED0"))) PPC_WEAK_FUNC(sub_83C53ED0);
PPC_FUNC_IMPL(__imp__sub_83C53ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3024
	ctx.r3.s64 = ctx.r11.s64 + -3024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53EDC"))) PPC_WEAK_FUNC(sub_83C53EDC);
PPC_FUNC_IMPL(__imp__sub_83C53EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53EE0"))) PPC_WEAK_FUNC(sub_83C53EE0);
PPC_FUNC_IMPL(__imp__sub_83C53EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3016
	ctx.r3.s64 = ctx.r11.s64 + -3016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53EEC"))) PPC_WEAK_FUNC(sub_83C53EEC);
PPC_FUNC_IMPL(__imp__sub_83C53EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53EF0"))) PPC_WEAK_FUNC(sub_83C53EF0);
PPC_FUNC_IMPL(__imp__sub_83C53EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-3008
	ctx.r3.s64 = ctx.r11.s64 + -3008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53EFC"))) PPC_WEAK_FUNC(sub_83C53EFC);
PPC_FUNC_IMPL(__imp__sub_83C53EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53F00"))) PPC_WEAK_FUNC(sub_83C53F00);
PPC_FUNC_IMPL(__imp__sub_83C53F00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30136
	ctx.r7.s64 = ctx.r8.s64 + 30136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53F28"))) PPC_WEAK_FUNC(sub_83C53F28);
PPC_FUNC_IMPL(__imp__sub_83C53F28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,13720
	ctx.r6.s64 = ctx.r7.s64 + 13720;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13648(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13648);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30136);
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
	// std r9,13720(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13720, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C53F70"))) PPC_WEAK_FUNC(sub_83C53F70);
PPC_FUNC_IMPL(__imp__sub_83C53F70) {
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
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// bl 0x83523120
	ctx.lr = 0x83C53F88;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-3000
	ctx.r3.s64 = ctx.r10.s64 + -3000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53F94;
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

__attribute__((alias("__imp__sub_83C53FA4"))) PPC_WEAK_FUNC(sub_83C53FA4);
PPC_FUNC_IMPL(__imp__sub_83C53FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53FA8"))) PPC_WEAK_FUNC(sub_83C53FA8);
PPC_FUNC_IMPL(__imp__sub_83C53FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2984
	ctx.r3.s64 = ctx.r11.s64 + -2984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C53FB4"))) PPC_WEAK_FUNC(sub_83C53FB4);
PPC_FUNC_IMPL(__imp__sub_83C53FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53FB8"))) PPC_WEAK_FUNC(sub_83C53FB8);
PPC_FUNC_IMPL(__imp__sub_83C53FB8) {
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
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// bl 0x8259af80
	ctx.lr = 0x83C53FD0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2968
	ctx.r3.s64 = ctx.r10.s64 + -2968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C53FDC;
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

__attribute__((alias("__imp__sub_83C53FEC"))) PPC_WEAK_FUNC(sub_83C53FEC);
PPC_FUNC_IMPL(__imp__sub_83C53FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C53FF0"))) PPC_WEAK_FUNC(sub_83C53FF0);
PPC_FUNC_IMPL(__imp__sub_83C53FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30124
	ctx.r11.s64 = ctx.r8.s64 + 30124;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,13696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13696);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2976
	ctx.r3.s64 = ctx.r6.s64 + -2976;
	// stw r10,30124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54020"))) PPC_WEAK_FUNC(sub_83C54020);
PPC_FUNC_IMPL(__imp__sub_83C54020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2960
	ctx.r3.s64 = ctx.r11.s64 + -2960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5402C"))) PPC_WEAK_FUNC(sub_83C5402C);
PPC_FUNC_IMPL(__imp__sub_83C5402C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54030"))) PPC_WEAK_FUNC(sub_83C54030);
PPC_FUNC_IMPL(__imp__sub_83C54030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2952
	ctx.r3.s64 = ctx.r11.s64 + -2952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5403C"))) PPC_WEAK_FUNC(sub_83C5403C);
PPC_FUNC_IMPL(__imp__sub_83C5403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54040"))) PPC_WEAK_FUNC(sub_83C54040);
PPC_FUNC_IMPL(__imp__sub_83C54040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2944
	ctx.r3.s64 = ctx.r11.s64 + -2944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5404C"))) PPC_WEAK_FUNC(sub_83C5404C);
PPC_FUNC_IMPL(__imp__sub_83C5404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54050"))) PPC_WEAK_FUNC(sub_83C54050);
PPC_FUNC_IMPL(__imp__sub_83C54050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2936
	ctx.r3.s64 = ctx.r11.s64 + -2936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5405C"))) PPC_WEAK_FUNC(sub_83C5405C);
PPC_FUNC_IMPL(__imp__sub_83C5405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54060"))) PPC_WEAK_FUNC(sub_83C54060);
PPC_FUNC_IMPL(__imp__sub_83C54060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2928
	ctx.r3.s64 = ctx.r11.s64 + -2928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5406C"))) PPC_WEAK_FUNC(sub_83C5406C);
PPC_FUNC_IMPL(__imp__sub_83C5406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54070"))) PPC_WEAK_FUNC(sub_83C54070);
PPC_FUNC_IMPL(__imp__sub_83C54070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2920
	ctx.r3.s64 = ctx.r11.s64 + -2920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5407C"))) PPC_WEAK_FUNC(sub_83C5407C);
PPC_FUNC_IMPL(__imp__sub_83C5407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54080"))) PPC_WEAK_FUNC(sub_83C54080);
PPC_FUNC_IMPL(__imp__sub_83C54080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2912
	ctx.r3.s64 = ctx.r11.s64 + -2912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5408C"))) PPC_WEAK_FUNC(sub_83C5408C);
PPC_FUNC_IMPL(__imp__sub_83C5408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54090"))) PPC_WEAK_FUNC(sub_83C54090);
PPC_FUNC_IMPL(__imp__sub_83C54090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2904
	ctx.r3.s64 = ctx.r11.s64 + -2904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5409C"))) PPC_WEAK_FUNC(sub_83C5409C);
PPC_FUNC_IMPL(__imp__sub_83C5409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C540A0"))) PPC_WEAK_FUNC(sub_83C540A0);
PPC_FUNC_IMPL(__imp__sub_83C540A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2896
	ctx.r3.s64 = ctx.r11.s64 + -2896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C540AC"))) PPC_WEAK_FUNC(sub_83C540AC);
PPC_FUNC_IMPL(__imp__sub_83C540AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C540B0"))) PPC_WEAK_FUNC(sub_83C540B0);
PPC_FUNC_IMPL(__imp__sub_83C540B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2888
	ctx.r3.s64 = ctx.r11.s64 + -2888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C540BC"))) PPC_WEAK_FUNC(sub_83C540BC);
PPC_FUNC_IMPL(__imp__sub_83C540BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C540C0"))) PPC_WEAK_FUNC(sub_83C540C0);
PPC_FUNC_IMPL(__imp__sub_83C540C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2880
	ctx.r3.s64 = ctx.r11.s64 + -2880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C540CC"))) PPC_WEAK_FUNC(sub_83C540CC);
PPC_FUNC_IMPL(__imp__sub_83C540CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C540D0"))) PPC_WEAK_FUNC(sub_83C540D0);
PPC_FUNC_IMPL(__imp__sub_83C540D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2872
	ctx.r3.s64 = ctx.r11.s64 + -2872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C540DC"))) PPC_WEAK_FUNC(sub_83C540DC);
PPC_FUNC_IMPL(__imp__sub_83C540DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C540E0"))) PPC_WEAK_FUNC(sub_83C540E0);
PPC_FUNC_IMPL(__imp__sub_83C540E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30504
	ctx.r7.s64 = ctx.r8.s64 + 30504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C54108"))) PPC_WEAK_FUNC(sub_83C54108);
PPC_FUNC_IMPL(__imp__sub_83C54108) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,13848
	ctx.r6.s64 = ctx.r7.s64 + 13848;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30504);
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
	// std r9,13848(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13848, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C54150"))) PPC_WEAK_FUNC(sub_83C54150);
PPC_FUNC_IMPL(__imp__sub_83C54150) {
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
	// addi r3,r11,30488
	ctx.r3.s64 = ctx.r11.s64 + 30488;
	// bl 0x83523120
	ctx.lr = 0x83C54168;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2864
	ctx.r3.s64 = ctx.r10.s64 + -2864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C54174;
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

__attribute__((alias("__imp__sub_83C54184"))) PPC_WEAK_FUNC(sub_83C54184);
PPC_FUNC_IMPL(__imp__sub_83C54184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54188"))) PPC_WEAK_FUNC(sub_83C54188);
PPC_FUNC_IMPL(__imp__sub_83C54188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2848
	ctx.r3.s64 = ctx.r11.s64 + -2848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54194"))) PPC_WEAK_FUNC(sub_83C54194);
PPC_FUNC_IMPL(__imp__sub_83C54194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54198"))) PPC_WEAK_FUNC(sub_83C54198);
PPC_FUNC_IMPL(__imp__sub_83C54198) {
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
	// addi r3,r11,30512
	ctx.r3.s64 = ctx.r11.s64 + 30512;
	// bl 0x8259af80
	ctx.lr = 0x83C541B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2832
	ctx.r3.s64 = ctx.r10.s64 + -2832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C541BC;
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

__attribute__((alias("__imp__sub_83C541CC"))) PPC_WEAK_FUNC(sub_83C541CC);
PPC_FUNC_IMPL(__imp__sub_83C541CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C541D0"))) PPC_WEAK_FUNC(sub_83C541D0);
PPC_FUNC_IMPL(__imp__sub_83C541D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30492
	ctx.r11.s64 = ctx.r8.s64 + 30492;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,13824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2840
	ctx.r3.s64 = ctx.r6.s64 + -2840;
	// stw r10,30492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54200"))) PPC_WEAK_FUNC(sub_83C54200);
PPC_FUNC_IMPL(__imp__sub_83C54200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2824
	ctx.r3.s64 = ctx.r11.s64 + -2824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5420C"))) PPC_WEAK_FUNC(sub_83C5420C);
PPC_FUNC_IMPL(__imp__sub_83C5420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54210"))) PPC_WEAK_FUNC(sub_83C54210);
PPC_FUNC_IMPL(__imp__sub_83C54210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2816
	ctx.r3.s64 = ctx.r11.s64 + -2816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5421C"))) PPC_WEAK_FUNC(sub_83C5421C);
PPC_FUNC_IMPL(__imp__sub_83C5421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54220"))) PPC_WEAK_FUNC(sub_83C54220);
PPC_FUNC_IMPL(__imp__sub_83C54220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2808
	ctx.r3.s64 = ctx.r11.s64 + -2808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5422C"))) PPC_WEAK_FUNC(sub_83C5422C);
PPC_FUNC_IMPL(__imp__sub_83C5422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54230"))) PPC_WEAK_FUNC(sub_83C54230);
PPC_FUNC_IMPL(__imp__sub_83C54230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2800
	ctx.r3.s64 = ctx.r11.s64 + -2800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5423C"))) PPC_WEAK_FUNC(sub_83C5423C);
PPC_FUNC_IMPL(__imp__sub_83C5423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54240"))) PPC_WEAK_FUNC(sub_83C54240);
PPC_FUNC_IMPL(__imp__sub_83C54240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2792
	ctx.r3.s64 = ctx.r11.s64 + -2792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5424C"))) PPC_WEAK_FUNC(sub_83C5424C);
PPC_FUNC_IMPL(__imp__sub_83C5424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54250"))) PPC_WEAK_FUNC(sub_83C54250);
PPC_FUNC_IMPL(__imp__sub_83C54250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2784
	ctx.r3.s64 = ctx.r11.s64 + -2784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5425C"))) PPC_WEAK_FUNC(sub_83C5425C);
PPC_FUNC_IMPL(__imp__sub_83C5425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54260"))) PPC_WEAK_FUNC(sub_83C54260);
PPC_FUNC_IMPL(__imp__sub_83C54260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2776
	ctx.r3.s64 = ctx.r11.s64 + -2776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5426C"))) PPC_WEAK_FUNC(sub_83C5426C);
PPC_FUNC_IMPL(__imp__sub_83C5426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54270"))) PPC_WEAK_FUNC(sub_83C54270);
PPC_FUNC_IMPL(__imp__sub_83C54270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2768
	ctx.r3.s64 = ctx.r11.s64 + -2768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5427C"))) PPC_WEAK_FUNC(sub_83C5427C);
PPC_FUNC_IMPL(__imp__sub_83C5427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54280"))) PPC_WEAK_FUNC(sub_83C54280);
PPC_FUNC_IMPL(__imp__sub_83C54280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2760
	ctx.r3.s64 = ctx.r11.s64 + -2760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5428C"))) PPC_WEAK_FUNC(sub_83C5428C);
PPC_FUNC_IMPL(__imp__sub_83C5428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54290"))) PPC_WEAK_FUNC(sub_83C54290);
PPC_FUNC_IMPL(__imp__sub_83C54290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2752
	ctx.r3.s64 = ctx.r11.s64 + -2752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5429C"))) PPC_WEAK_FUNC(sub_83C5429C);
PPC_FUNC_IMPL(__imp__sub_83C5429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C542A0"))) PPC_WEAK_FUNC(sub_83C542A0);
PPC_FUNC_IMPL(__imp__sub_83C542A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2744
	ctx.r3.s64 = ctx.r11.s64 + -2744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C542AC"))) PPC_WEAK_FUNC(sub_83C542AC);
PPC_FUNC_IMPL(__imp__sub_83C542AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C542B0"))) PPC_WEAK_FUNC(sub_83C542B0);
PPC_FUNC_IMPL(__imp__sub_83C542B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2736
	ctx.r3.s64 = ctx.r11.s64 + -2736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C542BC"))) PPC_WEAK_FUNC(sub_83C542BC);
PPC_FUNC_IMPL(__imp__sub_83C542BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C542C0"))) PPC_WEAK_FUNC(sub_83C542C0);
PPC_FUNC_IMPL(__imp__sub_83C542C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30872
	ctx.r7.s64 = ctx.r8.s64 + 30872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C542E8"))) PPC_WEAK_FUNC(sub_83C542E8);
PPC_FUNC_IMPL(__imp__sub_83C542E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,13976
	ctx.r6.s64 = ctx.r7.s64 + 13976;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13904(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13904);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30872);
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
	// std r9,13976(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13976, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C54330"))) PPC_WEAK_FUNC(sub_83C54330);
PPC_FUNC_IMPL(__imp__sub_83C54330) {
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
	// addi r3,r11,30856
	ctx.r3.s64 = ctx.r11.s64 + 30856;
	// bl 0x83523120
	ctx.lr = 0x83C54348;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2728
	ctx.r3.s64 = ctx.r10.s64 + -2728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C54354;
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

__attribute__((alias("__imp__sub_83C54364"))) PPC_WEAK_FUNC(sub_83C54364);
PPC_FUNC_IMPL(__imp__sub_83C54364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54368"))) PPC_WEAK_FUNC(sub_83C54368);
PPC_FUNC_IMPL(__imp__sub_83C54368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2712
	ctx.r3.s64 = ctx.r11.s64 + -2712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54374"))) PPC_WEAK_FUNC(sub_83C54374);
PPC_FUNC_IMPL(__imp__sub_83C54374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54378"))) PPC_WEAK_FUNC(sub_83C54378);
PPC_FUNC_IMPL(__imp__sub_83C54378) {
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
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// bl 0x8259af80
	ctx.lr = 0x83C54390;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2696
	ctx.r3.s64 = ctx.r10.s64 + -2696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5439C;
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

__attribute__((alias("__imp__sub_83C543AC"))) PPC_WEAK_FUNC(sub_83C543AC);
PPC_FUNC_IMPL(__imp__sub_83C543AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C543B0"))) PPC_WEAK_FUNC(sub_83C543B0);
PPC_FUNC_IMPL(__imp__sub_83C543B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30860
	ctx.r11.s64 = ctx.r8.s64 + 30860;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,13952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2704
	ctx.r3.s64 = ctx.r6.s64 + -2704;
	// stw r10,30860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C543E0"))) PPC_WEAK_FUNC(sub_83C543E0);
PPC_FUNC_IMPL(__imp__sub_83C543E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2688
	ctx.r3.s64 = ctx.r11.s64 + -2688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C543EC"))) PPC_WEAK_FUNC(sub_83C543EC);
PPC_FUNC_IMPL(__imp__sub_83C543EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C543F0"))) PPC_WEAK_FUNC(sub_83C543F0);
PPC_FUNC_IMPL(__imp__sub_83C543F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2680
	ctx.r3.s64 = ctx.r11.s64 + -2680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C543FC"))) PPC_WEAK_FUNC(sub_83C543FC);
PPC_FUNC_IMPL(__imp__sub_83C543FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54400"))) PPC_WEAK_FUNC(sub_83C54400);
PPC_FUNC_IMPL(__imp__sub_83C54400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2672
	ctx.r3.s64 = ctx.r11.s64 + -2672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5440C"))) PPC_WEAK_FUNC(sub_83C5440C);
PPC_FUNC_IMPL(__imp__sub_83C5440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54410"))) PPC_WEAK_FUNC(sub_83C54410);
PPC_FUNC_IMPL(__imp__sub_83C54410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2664
	ctx.r3.s64 = ctx.r11.s64 + -2664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5441C"))) PPC_WEAK_FUNC(sub_83C5441C);
PPC_FUNC_IMPL(__imp__sub_83C5441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54420"))) PPC_WEAK_FUNC(sub_83C54420);
PPC_FUNC_IMPL(__imp__sub_83C54420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2656
	ctx.r3.s64 = ctx.r11.s64 + -2656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5442C"))) PPC_WEAK_FUNC(sub_83C5442C);
PPC_FUNC_IMPL(__imp__sub_83C5442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54430"))) PPC_WEAK_FUNC(sub_83C54430);
PPC_FUNC_IMPL(__imp__sub_83C54430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2648
	ctx.r3.s64 = ctx.r11.s64 + -2648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5443C"))) PPC_WEAK_FUNC(sub_83C5443C);
PPC_FUNC_IMPL(__imp__sub_83C5443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54440"))) PPC_WEAK_FUNC(sub_83C54440);
PPC_FUNC_IMPL(__imp__sub_83C54440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2640
	ctx.r3.s64 = ctx.r11.s64 + -2640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5444C"))) PPC_WEAK_FUNC(sub_83C5444C);
PPC_FUNC_IMPL(__imp__sub_83C5444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54450"))) PPC_WEAK_FUNC(sub_83C54450);
PPC_FUNC_IMPL(__imp__sub_83C54450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2632
	ctx.r3.s64 = ctx.r11.s64 + -2632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5445C"))) PPC_WEAK_FUNC(sub_83C5445C);
PPC_FUNC_IMPL(__imp__sub_83C5445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54460"))) PPC_WEAK_FUNC(sub_83C54460);
PPC_FUNC_IMPL(__imp__sub_83C54460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2624
	ctx.r3.s64 = ctx.r11.s64 + -2624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5446C"))) PPC_WEAK_FUNC(sub_83C5446C);
PPC_FUNC_IMPL(__imp__sub_83C5446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54470"))) PPC_WEAK_FUNC(sub_83C54470);
PPC_FUNC_IMPL(__imp__sub_83C54470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2616
	ctx.r3.s64 = ctx.r11.s64 + -2616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5447C"))) PPC_WEAK_FUNC(sub_83C5447C);
PPC_FUNC_IMPL(__imp__sub_83C5447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54480"))) PPC_WEAK_FUNC(sub_83C54480);
PPC_FUNC_IMPL(__imp__sub_83C54480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2608
	ctx.r3.s64 = ctx.r11.s64 + -2608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5448C"))) PPC_WEAK_FUNC(sub_83C5448C);
PPC_FUNC_IMPL(__imp__sub_83C5448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54490"))) PPC_WEAK_FUNC(sub_83C54490);
PPC_FUNC_IMPL(__imp__sub_83C54490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2600
	ctx.r3.s64 = ctx.r11.s64 + -2600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5449C"))) PPC_WEAK_FUNC(sub_83C5449C);
PPC_FUNC_IMPL(__imp__sub_83C5449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C544A0"))) PPC_WEAK_FUNC(sub_83C544A0);
PPC_FUNC_IMPL(__imp__sub_83C544A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31240
	ctx.r7.s64 = ctx.r8.s64 + 31240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C544C8"))) PPC_WEAK_FUNC(sub_83C544C8);
PPC_FUNC_IMPL(__imp__sub_83C544C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,14104
	ctx.r6.s64 = ctx.r7.s64 + 14104;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14032(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14032);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31240);
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
	// std r9,14104(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14104, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C54510"))) PPC_WEAK_FUNC(sub_83C54510);
PPC_FUNC_IMPL(__imp__sub_83C54510) {
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
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// bl 0x83523120
	ctx.lr = 0x83C54528;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2592
	ctx.r3.s64 = ctx.r10.s64 + -2592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C54534;
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

__attribute__((alias("__imp__sub_83C54544"))) PPC_WEAK_FUNC(sub_83C54544);
PPC_FUNC_IMPL(__imp__sub_83C54544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54548"))) PPC_WEAK_FUNC(sub_83C54548);
PPC_FUNC_IMPL(__imp__sub_83C54548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2576
	ctx.r3.s64 = ctx.r11.s64 + -2576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54554"))) PPC_WEAK_FUNC(sub_83C54554);
PPC_FUNC_IMPL(__imp__sub_83C54554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54558"))) PPC_WEAK_FUNC(sub_83C54558);
PPC_FUNC_IMPL(__imp__sub_83C54558) {
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
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// bl 0x8259af80
	ctx.lr = 0x83C54570;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2560
	ctx.r3.s64 = ctx.r10.s64 + -2560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5457C;
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

__attribute__((alias("__imp__sub_83C5458C"))) PPC_WEAK_FUNC(sub_83C5458C);
PPC_FUNC_IMPL(__imp__sub_83C5458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54590"))) PPC_WEAK_FUNC(sub_83C54590);
PPC_FUNC_IMPL(__imp__sub_83C54590) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31228
	ctx.r11.s64 = ctx.r8.s64 + 31228;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,14080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14080);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2568
	ctx.r3.s64 = ctx.r6.s64 + -2568;
	// stw r10,31228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C545C0"))) PPC_WEAK_FUNC(sub_83C545C0);
PPC_FUNC_IMPL(__imp__sub_83C545C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2552
	ctx.r3.s64 = ctx.r11.s64 + -2552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C545CC"))) PPC_WEAK_FUNC(sub_83C545CC);
PPC_FUNC_IMPL(__imp__sub_83C545CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C545D0"))) PPC_WEAK_FUNC(sub_83C545D0);
PPC_FUNC_IMPL(__imp__sub_83C545D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2544
	ctx.r3.s64 = ctx.r11.s64 + -2544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C545DC"))) PPC_WEAK_FUNC(sub_83C545DC);
PPC_FUNC_IMPL(__imp__sub_83C545DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C545E0"))) PPC_WEAK_FUNC(sub_83C545E0);
PPC_FUNC_IMPL(__imp__sub_83C545E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2536
	ctx.r3.s64 = ctx.r11.s64 + -2536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C545EC"))) PPC_WEAK_FUNC(sub_83C545EC);
PPC_FUNC_IMPL(__imp__sub_83C545EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C545F0"))) PPC_WEAK_FUNC(sub_83C545F0);
PPC_FUNC_IMPL(__imp__sub_83C545F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2528
	ctx.r3.s64 = ctx.r11.s64 + -2528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C545FC"))) PPC_WEAK_FUNC(sub_83C545FC);
PPC_FUNC_IMPL(__imp__sub_83C545FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54600"))) PPC_WEAK_FUNC(sub_83C54600);
PPC_FUNC_IMPL(__imp__sub_83C54600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2520
	ctx.r3.s64 = ctx.r11.s64 + -2520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5460C"))) PPC_WEAK_FUNC(sub_83C5460C);
PPC_FUNC_IMPL(__imp__sub_83C5460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54610"))) PPC_WEAK_FUNC(sub_83C54610);
PPC_FUNC_IMPL(__imp__sub_83C54610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2512
	ctx.r3.s64 = ctx.r11.s64 + -2512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5461C"))) PPC_WEAK_FUNC(sub_83C5461C);
PPC_FUNC_IMPL(__imp__sub_83C5461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54620"))) PPC_WEAK_FUNC(sub_83C54620);
PPC_FUNC_IMPL(__imp__sub_83C54620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2504
	ctx.r3.s64 = ctx.r11.s64 + -2504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5462C"))) PPC_WEAK_FUNC(sub_83C5462C);
PPC_FUNC_IMPL(__imp__sub_83C5462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54630"))) PPC_WEAK_FUNC(sub_83C54630);
PPC_FUNC_IMPL(__imp__sub_83C54630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2496
	ctx.r3.s64 = ctx.r11.s64 + -2496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5463C"))) PPC_WEAK_FUNC(sub_83C5463C);
PPC_FUNC_IMPL(__imp__sub_83C5463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54640"))) PPC_WEAK_FUNC(sub_83C54640);
PPC_FUNC_IMPL(__imp__sub_83C54640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2488
	ctx.r3.s64 = ctx.r11.s64 + -2488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5464C"))) PPC_WEAK_FUNC(sub_83C5464C);
PPC_FUNC_IMPL(__imp__sub_83C5464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54650"))) PPC_WEAK_FUNC(sub_83C54650);
PPC_FUNC_IMPL(__imp__sub_83C54650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2480
	ctx.r3.s64 = ctx.r11.s64 + -2480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5465C"))) PPC_WEAK_FUNC(sub_83C5465C);
PPC_FUNC_IMPL(__imp__sub_83C5465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54660"))) PPC_WEAK_FUNC(sub_83C54660);
PPC_FUNC_IMPL(__imp__sub_83C54660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2472
	ctx.r3.s64 = ctx.r11.s64 + -2472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5466C"))) PPC_WEAK_FUNC(sub_83C5466C);
PPC_FUNC_IMPL(__imp__sub_83C5466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54670"))) PPC_WEAK_FUNC(sub_83C54670);
PPC_FUNC_IMPL(__imp__sub_83C54670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2464
	ctx.r3.s64 = ctx.r11.s64 + -2464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5467C"))) PPC_WEAK_FUNC(sub_83C5467C);
PPC_FUNC_IMPL(__imp__sub_83C5467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54680"))) PPC_WEAK_FUNC(sub_83C54680);
PPC_FUNC_IMPL(__imp__sub_83C54680) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31608
	ctx.r7.s64 = ctx.r8.s64 + 31608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C546A8"))) PPC_WEAK_FUNC(sub_83C546A8);
PPC_FUNC_IMPL(__imp__sub_83C546A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,14232
	ctx.r6.s64 = ctx.r7.s64 + 14232;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14160(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14160);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31608);
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
	// std r9,14232(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14232, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C546F0"))) PPC_WEAK_FUNC(sub_83C546F0);
PPC_FUNC_IMPL(__imp__sub_83C546F0) {
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
	// addi r3,r11,31592
	ctx.r3.s64 = ctx.r11.s64 + 31592;
	// bl 0x83523120
	ctx.lr = 0x83C54708;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2456
	ctx.r3.s64 = ctx.r10.s64 + -2456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C54714;
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

__attribute__((alias("__imp__sub_83C54724"))) PPC_WEAK_FUNC(sub_83C54724);
PPC_FUNC_IMPL(__imp__sub_83C54724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54728"))) PPC_WEAK_FUNC(sub_83C54728);
PPC_FUNC_IMPL(__imp__sub_83C54728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2440
	ctx.r3.s64 = ctx.r11.s64 + -2440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54734"))) PPC_WEAK_FUNC(sub_83C54734);
PPC_FUNC_IMPL(__imp__sub_83C54734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54738"))) PPC_WEAK_FUNC(sub_83C54738);
PPC_FUNC_IMPL(__imp__sub_83C54738) {
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
	// addi r3,r11,31616
	ctx.r3.s64 = ctx.r11.s64 + 31616;
	// bl 0x8259af80
	ctx.lr = 0x83C54750;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2424
	ctx.r3.s64 = ctx.r10.s64 + -2424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5475C;
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

__attribute__((alias("__imp__sub_83C5476C"))) PPC_WEAK_FUNC(sub_83C5476C);
PPC_FUNC_IMPL(__imp__sub_83C5476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54770"))) PPC_WEAK_FUNC(sub_83C54770);
PPC_FUNC_IMPL(__imp__sub_83C54770) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31596
	ctx.r11.s64 = ctx.r8.s64 + 31596;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,14208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14208);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2432
	ctx.r3.s64 = ctx.r6.s64 + -2432;
	// stw r10,31596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C547A0"))) PPC_WEAK_FUNC(sub_83C547A0);
PPC_FUNC_IMPL(__imp__sub_83C547A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2416
	ctx.r3.s64 = ctx.r11.s64 + -2416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C547AC"))) PPC_WEAK_FUNC(sub_83C547AC);
PPC_FUNC_IMPL(__imp__sub_83C547AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C547B0"))) PPC_WEAK_FUNC(sub_83C547B0);
PPC_FUNC_IMPL(__imp__sub_83C547B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2408
	ctx.r3.s64 = ctx.r11.s64 + -2408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C547BC"))) PPC_WEAK_FUNC(sub_83C547BC);
PPC_FUNC_IMPL(__imp__sub_83C547BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C547C0"))) PPC_WEAK_FUNC(sub_83C547C0);
PPC_FUNC_IMPL(__imp__sub_83C547C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2400
	ctx.r3.s64 = ctx.r11.s64 + -2400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C547CC"))) PPC_WEAK_FUNC(sub_83C547CC);
PPC_FUNC_IMPL(__imp__sub_83C547CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C547D0"))) PPC_WEAK_FUNC(sub_83C547D0);
PPC_FUNC_IMPL(__imp__sub_83C547D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2392
	ctx.r3.s64 = ctx.r11.s64 + -2392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C547DC"))) PPC_WEAK_FUNC(sub_83C547DC);
PPC_FUNC_IMPL(__imp__sub_83C547DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C547E0"))) PPC_WEAK_FUNC(sub_83C547E0);
PPC_FUNC_IMPL(__imp__sub_83C547E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2384
	ctx.r3.s64 = ctx.r11.s64 + -2384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C547EC"))) PPC_WEAK_FUNC(sub_83C547EC);
PPC_FUNC_IMPL(__imp__sub_83C547EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C547F0"))) PPC_WEAK_FUNC(sub_83C547F0);
PPC_FUNC_IMPL(__imp__sub_83C547F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2376
	ctx.r3.s64 = ctx.r11.s64 + -2376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C547FC"))) PPC_WEAK_FUNC(sub_83C547FC);
PPC_FUNC_IMPL(__imp__sub_83C547FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54800"))) PPC_WEAK_FUNC(sub_83C54800);
PPC_FUNC_IMPL(__imp__sub_83C54800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2368
	ctx.r3.s64 = ctx.r11.s64 + -2368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5480C"))) PPC_WEAK_FUNC(sub_83C5480C);
PPC_FUNC_IMPL(__imp__sub_83C5480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54810"))) PPC_WEAK_FUNC(sub_83C54810);
PPC_FUNC_IMPL(__imp__sub_83C54810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2360
	ctx.r3.s64 = ctx.r11.s64 + -2360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5481C"))) PPC_WEAK_FUNC(sub_83C5481C);
PPC_FUNC_IMPL(__imp__sub_83C5481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54820"))) PPC_WEAK_FUNC(sub_83C54820);
PPC_FUNC_IMPL(__imp__sub_83C54820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2352
	ctx.r3.s64 = ctx.r11.s64 + -2352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5482C"))) PPC_WEAK_FUNC(sub_83C5482C);
PPC_FUNC_IMPL(__imp__sub_83C5482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54830"))) PPC_WEAK_FUNC(sub_83C54830);
PPC_FUNC_IMPL(__imp__sub_83C54830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2344
	ctx.r3.s64 = ctx.r11.s64 + -2344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5483C"))) PPC_WEAK_FUNC(sub_83C5483C);
PPC_FUNC_IMPL(__imp__sub_83C5483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54840"))) PPC_WEAK_FUNC(sub_83C54840);
PPC_FUNC_IMPL(__imp__sub_83C54840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2336
	ctx.r3.s64 = ctx.r11.s64 + -2336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5484C"))) PPC_WEAK_FUNC(sub_83C5484C);
PPC_FUNC_IMPL(__imp__sub_83C5484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54850"))) PPC_WEAK_FUNC(sub_83C54850);
PPC_FUNC_IMPL(__imp__sub_83C54850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2328
	ctx.r3.s64 = ctx.r11.s64 + -2328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5485C"))) PPC_WEAK_FUNC(sub_83C5485C);
PPC_FUNC_IMPL(__imp__sub_83C5485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54860"))) PPC_WEAK_FUNC(sub_83C54860);
PPC_FUNC_IMPL(__imp__sub_83C54860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31976
	ctx.r7.s64 = ctx.r8.s64 + 31976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31976(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C54888"))) PPC_WEAK_FUNC(sub_83C54888);
PPC_FUNC_IMPL(__imp__sub_83C54888) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,14360
	ctx.r6.s64 = ctx.r7.s64 + 14360;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14288(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14288);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31976);
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
	// std r9,14360(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14360, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C548D0"))) PPC_WEAK_FUNC(sub_83C548D0);
PPC_FUNC_IMPL(__imp__sub_83C548D0) {
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
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// bl 0x83523120
	ctx.lr = 0x83C548E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2320
	ctx.r3.s64 = ctx.r10.s64 + -2320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C548F4;
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

__attribute__((alias("__imp__sub_83C54904"))) PPC_WEAK_FUNC(sub_83C54904);
PPC_FUNC_IMPL(__imp__sub_83C54904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54908"))) PPC_WEAK_FUNC(sub_83C54908);
PPC_FUNC_IMPL(__imp__sub_83C54908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2304
	ctx.r3.s64 = ctx.r11.s64 + -2304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54914"))) PPC_WEAK_FUNC(sub_83C54914);
PPC_FUNC_IMPL(__imp__sub_83C54914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54918"))) PPC_WEAK_FUNC(sub_83C54918);
PPC_FUNC_IMPL(__imp__sub_83C54918) {
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
	// addi r3,r11,31984
	ctx.r3.s64 = ctx.r11.s64 + 31984;
	// bl 0x8259af80
	ctx.lr = 0x83C54930;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2288
	ctx.r3.s64 = ctx.r10.s64 + -2288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5493C;
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

__attribute__((alias("__imp__sub_83C5494C"))) PPC_WEAK_FUNC(sub_83C5494C);
PPC_FUNC_IMPL(__imp__sub_83C5494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54950"))) PPC_WEAK_FUNC(sub_83C54950);
PPC_FUNC_IMPL(__imp__sub_83C54950) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31964
	ctx.r11.s64 = ctx.r8.s64 + 31964;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,14336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14336);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2296
	ctx.r3.s64 = ctx.r6.s64 + -2296;
	// stw r10,31964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54980"))) PPC_WEAK_FUNC(sub_83C54980);
PPC_FUNC_IMPL(__imp__sub_83C54980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2280
	ctx.r3.s64 = ctx.r11.s64 + -2280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5498C"))) PPC_WEAK_FUNC(sub_83C5498C);
PPC_FUNC_IMPL(__imp__sub_83C5498C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54990"))) PPC_WEAK_FUNC(sub_83C54990);
PPC_FUNC_IMPL(__imp__sub_83C54990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2272
	ctx.r3.s64 = ctx.r11.s64 + -2272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5499C"))) PPC_WEAK_FUNC(sub_83C5499C);
PPC_FUNC_IMPL(__imp__sub_83C5499C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C549A0"))) PPC_WEAK_FUNC(sub_83C549A0);
PPC_FUNC_IMPL(__imp__sub_83C549A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2264
	ctx.r3.s64 = ctx.r11.s64 + -2264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C549AC"))) PPC_WEAK_FUNC(sub_83C549AC);
PPC_FUNC_IMPL(__imp__sub_83C549AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C549B0"))) PPC_WEAK_FUNC(sub_83C549B0);
PPC_FUNC_IMPL(__imp__sub_83C549B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2256
	ctx.r3.s64 = ctx.r11.s64 + -2256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C549BC"))) PPC_WEAK_FUNC(sub_83C549BC);
PPC_FUNC_IMPL(__imp__sub_83C549BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C549C0"))) PPC_WEAK_FUNC(sub_83C549C0);
PPC_FUNC_IMPL(__imp__sub_83C549C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2248
	ctx.r3.s64 = ctx.r11.s64 + -2248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C549CC"))) PPC_WEAK_FUNC(sub_83C549CC);
PPC_FUNC_IMPL(__imp__sub_83C549CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C549D0"))) PPC_WEAK_FUNC(sub_83C549D0);
PPC_FUNC_IMPL(__imp__sub_83C549D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2240
	ctx.r3.s64 = ctx.r11.s64 + -2240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C549DC"))) PPC_WEAK_FUNC(sub_83C549DC);
PPC_FUNC_IMPL(__imp__sub_83C549DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C549E0"))) PPC_WEAK_FUNC(sub_83C549E0);
PPC_FUNC_IMPL(__imp__sub_83C549E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2232
	ctx.r3.s64 = ctx.r11.s64 + -2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C549EC"))) PPC_WEAK_FUNC(sub_83C549EC);
PPC_FUNC_IMPL(__imp__sub_83C549EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C549F0"))) PPC_WEAK_FUNC(sub_83C549F0);
PPC_FUNC_IMPL(__imp__sub_83C549F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2224
	ctx.r3.s64 = ctx.r11.s64 + -2224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C549FC"))) PPC_WEAK_FUNC(sub_83C549FC);
PPC_FUNC_IMPL(__imp__sub_83C549FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54A00"))) PPC_WEAK_FUNC(sub_83C54A00);
PPC_FUNC_IMPL(__imp__sub_83C54A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2216
	ctx.r3.s64 = ctx.r11.s64 + -2216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54A0C"))) PPC_WEAK_FUNC(sub_83C54A0C);
PPC_FUNC_IMPL(__imp__sub_83C54A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54A10"))) PPC_WEAK_FUNC(sub_83C54A10);
PPC_FUNC_IMPL(__imp__sub_83C54A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2208
	ctx.r3.s64 = ctx.r11.s64 + -2208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54A1C"))) PPC_WEAK_FUNC(sub_83C54A1C);
PPC_FUNC_IMPL(__imp__sub_83C54A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54A20"))) PPC_WEAK_FUNC(sub_83C54A20);
PPC_FUNC_IMPL(__imp__sub_83C54A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2200
	ctx.r3.s64 = ctx.r11.s64 + -2200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54A2C"))) PPC_WEAK_FUNC(sub_83C54A2C);
PPC_FUNC_IMPL(__imp__sub_83C54A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54A30"))) PPC_WEAK_FUNC(sub_83C54A30);
PPC_FUNC_IMPL(__imp__sub_83C54A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2192
	ctx.r3.s64 = ctx.r11.s64 + -2192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54A3C"))) PPC_WEAK_FUNC(sub_83C54A3C);
PPC_FUNC_IMPL(__imp__sub_83C54A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54A40"))) PPC_WEAK_FUNC(sub_83C54A40);
PPC_FUNC_IMPL(__imp__sub_83C54A40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32344
	ctx.r7.s64 = ctx.r8.s64 + 32344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C54A68"))) PPC_WEAK_FUNC(sub_83C54A68);
PPC_FUNC_IMPL(__imp__sub_83C54A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,14488
	ctx.r6.s64 = ctx.r7.s64 + 14488;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14416(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14416);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32344);
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
	// std r9,14488(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14488, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C54AB0"))) PPC_WEAK_FUNC(sub_83C54AB0);
PPC_FUNC_IMPL(__imp__sub_83C54AB0) {
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
	// addi r3,r11,32328
	ctx.r3.s64 = ctx.r11.s64 + 32328;
	// bl 0x83523120
	ctx.lr = 0x83C54AC8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2184
	ctx.r3.s64 = ctx.r10.s64 + -2184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C54AD4;
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

__attribute__((alias("__imp__sub_83C54AE4"))) PPC_WEAK_FUNC(sub_83C54AE4);
PPC_FUNC_IMPL(__imp__sub_83C54AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54AE8"))) PPC_WEAK_FUNC(sub_83C54AE8);
PPC_FUNC_IMPL(__imp__sub_83C54AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2168
	ctx.r3.s64 = ctx.r11.s64 + -2168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54AF4"))) PPC_WEAK_FUNC(sub_83C54AF4);
PPC_FUNC_IMPL(__imp__sub_83C54AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54AF8"))) PPC_WEAK_FUNC(sub_83C54AF8);
PPC_FUNC_IMPL(__imp__sub_83C54AF8) {
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
	// addi r3,r11,32352
	ctx.r3.s64 = ctx.r11.s64 + 32352;
	// bl 0x8259af80
	ctx.lr = 0x83C54B10;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-2152
	ctx.r3.s64 = ctx.r10.s64 + -2152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C54B1C;
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

__attribute__((alias("__imp__sub_83C54B2C"))) PPC_WEAK_FUNC(sub_83C54B2C);
PPC_FUNC_IMPL(__imp__sub_83C54B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54B30"))) PPC_WEAK_FUNC(sub_83C54B30);
PPC_FUNC_IMPL(__imp__sub_83C54B30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32332
	ctx.r11.s64 = ctx.r8.s64 + 32332;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,14464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14464);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2160
	ctx.r3.s64 = ctx.r6.s64 + -2160;
	// stw r10,32332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32332, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54B60"))) PPC_WEAK_FUNC(sub_83C54B60);
PPC_FUNC_IMPL(__imp__sub_83C54B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2144
	ctx.r3.s64 = ctx.r11.s64 + -2144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54B6C"))) PPC_WEAK_FUNC(sub_83C54B6C);
PPC_FUNC_IMPL(__imp__sub_83C54B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54B70"))) PPC_WEAK_FUNC(sub_83C54B70);
PPC_FUNC_IMPL(__imp__sub_83C54B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2136
	ctx.r3.s64 = ctx.r11.s64 + -2136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54B7C"))) PPC_WEAK_FUNC(sub_83C54B7C);
PPC_FUNC_IMPL(__imp__sub_83C54B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54B80"))) PPC_WEAK_FUNC(sub_83C54B80);
PPC_FUNC_IMPL(__imp__sub_83C54B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2128
	ctx.r3.s64 = ctx.r11.s64 + -2128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54B8C"))) PPC_WEAK_FUNC(sub_83C54B8C);
PPC_FUNC_IMPL(__imp__sub_83C54B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C54B90"))) PPC_WEAK_FUNC(sub_83C54B90);
PPC_FUNC_IMPL(__imp__sub_83C54B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-2120
	ctx.r3.s64 = ctx.r11.s64 + -2120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C54B9C"))) PPC_WEAK_FUNC(sub_83C54B9C);
PPC_FUNC_IMPL(__imp__sub_83C54B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

