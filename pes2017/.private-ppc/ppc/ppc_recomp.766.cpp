#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C3AF7C"))) PPC_WEAK_FUNC(sub_83C3AF7C);
PPC_FUNC_IMPL(__imp__sub_83C3AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3AF80"))) PPC_WEAK_FUNC(sub_83C3AF80);
PPC_FUNC_IMPL(__imp__sub_83C3AF80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28208
	ctx.r7.s64 = ctx.r8.s64 + 28208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3AFA8"))) PPC_WEAK_FUNC(sub_83C3AFA8);
PPC_FUNC_IMPL(__imp__sub_83C3AFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-19300
	ctx.r6.s64 = ctx.r7.s64 + -19300;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28208);
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
	// std r9,-19300(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3AFF0"))) PPC_WEAK_FUNC(sub_83C3AFF0);
PPC_FUNC_IMPL(__imp__sub_83C3AFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3AFFC"))) PPC_WEAK_FUNC(sub_83C3AFFC);
PPC_FUNC_IMPL(__imp__sub_83C3AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B000"))) PPC_WEAK_FUNC(sub_83C3B000);
PPC_FUNC_IMPL(__imp__sub_83C3B000) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,28216
	ctx.r3.s64 = ctx.r11.s64 + 28216;
	// bl 0x8259af80
	ctx.lr = 0x83C3B018;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,30096
	ctx.r3.s64 = ctx.r10.s64 + 30096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3B024;
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

__attribute__((alias("__imp__sub_83C3B034"))) PPC_WEAK_FUNC(sub_83C3B034);
PPC_FUNC_IMPL(__imp__sub_83C3B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B038"))) PPC_WEAK_FUNC(sub_83C3B038);
PPC_FUNC_IMPL(__imp__sub_83C3B038) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28196
	ctx.r11.s64 = ctx.r8.s64 + 28196;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-19324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30088
	ctx.r3.s64 = ctx.r6.s64 + 30088;
	// stw r10,28196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B068"))) PPC_WEAK_FUNC(sub_83C3B068);
PPC_FUNC_IMPL(__imp__sub_83C3B068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30104
	ctx.r3.s64 = ctx.r11.s64 + 30104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B074"))) PPC_WEAK_FUNC(sub_83C3B074);
PPC_FUNC_IMPL(__imp__sub_83C3B074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B078"))) PPC_WEAK_FUNC(sub_83C3B078);
PPC_FUNC_IMPL(__imp__sub_83C3B078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30112
	ctx.r3.s64 = ctx.r11.s64 + 30112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B084"))) PPC_WEAK_FUNC(sub_83C3B084);
PPC_FUNC_IMPL(__imp__sub_83C3B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B088"))) PPC_WEAK_FUNC(sub_83C3B088);
PPC_FUNC_IMPL(__imp__sub_83C3B088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B094"))) PPC_WEAK_FUNC(sub_83C3B094);
PPC_FUNC_IMPL(__imp__sub_83C3B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B098"))) PPC_WEAK_FUNC(sub_83C3B098);
PPC_FUNC_IMPL(__imp__sub_83C3B098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B0A4"))) PPC_WEAK_FUNC(sub_83C3B0A4);
PPC_FUNC_IMPL(__imp__sub_83C3B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B0A8"))) PPC_WEAK_FUNC(sub_83C3B0A8);
PPC_FUNC_IMPL(__imp__sub_83C3B0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30136
	ctx.r3.s64 = ctx.r11.s64 + 30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B0B4"))) PPC_WEAK_FUNC(sub_83C3B0B4);
PPC_FUNC_IMPL(__imp__sub_83C3B0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B0B8"))) PPC_WEAK_FUNC(sub_83C3B0B8);
PPC_FUNC_IMPL(__imp__sub_83C3B0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B0C4"))) PPC_WEAK_FUNC(sub_83C3B0C4);
PPC_FUNC_IMPL(__imp__sub_83C3B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B0C8"))) PPC_WEAK_FUNC(sub_83C3B0C8);
PPC_FUNC_IMPL(__imp__sub_83C3B0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30152
	ctx.r3.s64 = ctx.r11.s64 + 30152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B0D4"))) PPC_WEAK_FUNC(sub_83C3B0D4);
PPC_FUNC_IMPL(__imp__sub_83C3B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B0D8"))) PPC_WEAK_FUNC(sub_83C3B0D8);
PPC_FUNC_IMPL(__imp__sub_83C3B0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30160
	ctx.r3.s64 = ctx.r11.s64 + 30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B0E4"))) PPC_WEAK_FUNC(sub_83C3B0E4);
PPC_FUNC_IMPL(__imp__sub_83C3B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B0E8"))) PPC_WEAK_FUNC(sub_83C3B0E8);
PPC_FUNC_IMPL(__imp__sub_83C3B0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B0F4"))) PPC_WEAK_FUNC(sub_83C3B0F4);
PPC_FUNC_IMPL(__imp__sub_83C3B0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B0F8"))) PPC_WEAK_FUNC(sub_83C3B0F8);
PPC_FUNC_IMPL(__imp__sub_83C3B0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30176
	ctx.r3.s64 = ctx.r11.s64 + 30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B104"))) PPC_WEAK_FUNC(sub_83C3B104);
PPC_FUNC_IMPL(__imp__sub_83C3B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B108"))) PPC_WEAK_FUNC(sub_83C3B108);
PPC_FUNC_IMPL(__imp__sub_83C3B108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30184
	ctx.r3.s64 = ctx.r11.s64 + 30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B114"))) PPC_WEAK_FUNC(sub_83C3B114);
PPC_FUNC_IMPL(__imp__sub_83C3B114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B118"))) PPC_WEAK_FUNC(sub_83C3B118);
PPC_FUNC_IMPL(__imp__sub_83C3B118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B124"))) PPC_WEAK_FUNC(sub_83C3B124);
PPC_FUNC_IMPL(__imp__sub_83C3B124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B128"))) PPC_WEAK_FUNC(sub_83C3B128);
PPC_FUNC_IMPL(__imp__sub_83C3B128) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,28560
	ctx.r3.s64 = ctx.r11.s64 + 28560;
	// bl 0x83523120
	ctx.lr = 0x83C3B140;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,30200
	ctx.r3.s64 = ctx.r10.s64 + 30200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3B14C;
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

__attribute__((alias("__imp__sub_83C3B15C"))) PPC_WEAK_FUNC(sub_83C3B15C);
PPC_FUNC_IMPL(__imp__sub_83C3B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B160"))) PPC_WEAK_FUNC(sub_83C3B160);
PPC_FUNC_IMPL(__imp__sub_83C3B160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28576
	ctx.r7.s64 = ctx.r8.s64 + 28576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3B188"))) PPC_WEAK_FUNC(sub_83C3B188);
PPC_FUNC_IMPL(__imp__sub_83C3B188) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-19172
	ctx.r6.s64 = ctx.r7.s64 + -19172;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19244(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19244);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28576);
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
	// std r9,-19172(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19172, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3B1D0"))) PPC_WEAK_FUNC(sub_83C3B1D0);
PPC_FUNC_IMPL(__imp__sub_83C3B1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30216
	ctx.r3.s64 = ctx.r11.s64 + 30216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B1DC"))) PPC_WEAK_FUNC(sub_83C3B1DC);
PPC_FUNC_IMPL(__imp__sub_83C3B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B1E0"))) PPC_WEAK_FUNC(sub_83C3B1E0);
PPC_FUNC_IMPL(__imp__sub_83C3B1E0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,28584
	ctx.r3.s64 = ctx.r11.s64 + 28584;
	// bl 0x8259af80
	ctx.lr = 0x83C3B1F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,30232
	ctx.r3.s64 = ctx.r10.s64 + 30232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3B204;
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

__attribute__((alias("__imp__sub_83C3B214"))) PPC_WEAK_FUNC(sub_83C3B214);
PPC_FUNC_IMPL(__imp__sub_83C3B214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B218"))) PPC_WEAK_FUNC(sub_83C3B218);
PPC_FUNC_IMPL(__imp__sub_83C3B218) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28564
	ctx.r11.s64 = ctx.r8.s64 + 28564;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-19196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19196);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30224
	ctx.r3.s64 = ctx.r6.s64 + 30224;
	// stw r10,28564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B248"))) PPC_WEAK_FUNC(sub_83C3B248);
PPC_FUNC_IMPL(__imp__sub_83C3B248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30240
	ctx.r3.s64 = ctx.r11.s64 + 30240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B254"))) PPC_WEAK_FUNC(sub_83C3B254);
PPC_FUNC_IMPL(__imp__sub_83C3B254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B258"))) PPC_WEAK_FUNC(sub_83C3B258);
PPC_FUNC_IMPL(__imp__sub_83C3B258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30248
	ctx.r3.s64 = ctx.r11.s64 + 30248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B264"))) PPC_WEAK_FUNC(sub_83C3B264);
PPC_FUNC_IMPL(__imp__sub_83C3B264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B268"))) PPC_WEAK_FUNC(sub_83C3B268);
PPC_FUNC_IMPL(__imp__sub_83C3B268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30256
	ctx.r3.s64 = ctx.r11.s64 + 30256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B274"))) PPC_WEAK_FUNC(sub_83C3B274);
PPC_FUNC_IMPL(__imp__sub_83C3B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B278"))) PPC_WEAK_FUNC(sub_83C3B278);
PPC_FUNC_IMPL(__imp__sub_83C3B278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30264
	ctx.r3.s64 = ctx.r11.s64 + 30264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B284"))) PPC_WEAK_FUNC(sub_83C3B284);
PPC_FUNC_IMPL(__imp__sub_83C3B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B288"))) PPC_WEAK_FUNC(sub_83C3B288);
PPC_FUNC_IMPL(__imp__sub_83C3B288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30272
	ctx.r3.s64 = ctx.r11.s64 + 30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B294"))) PPC_WEAK_FUNC(sub_83C3B294);
PPC_FUNC_IMPL(__imp__sub_83C3B294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B298"))) PPC_WEAK_FUNC(sub_83C3B298);
PPC_FUNC_IMPL(__imp__sub_83C3B298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30280
	ctx.r3.s64 = ctx.r11.s64 + 30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B2A4"))) PPC_WEAK_FUNC(sub_83C3B2A4);
PPC_FUNC_IMPL(__imp__sub_83C3B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B2A8"))) PPC_WEAK_FUNC(sub_83C3B2A8);
PPC_FUNC_IMPL(__imp__sub_83C3B2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B2B4"))) PPC_WEAK_FUNC(sub_83C3B2B4);
PPC_FUNC_IMPL(__imp__sub_83C3B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B2B8"))) PPC_WEAK_FUNC(sub_83C3B2B8);
PPC_FUNC_IMPL(__imp__sub_83C3B2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30296
	ctx.r3.s64 = ctx.r11.s64 + 30296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B2C4"))) PPC_WEAK_FUNC(sub_83C3B2C4);
PPC_FUNC_IMPL(__imp__sub_83C3B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B2C8"))) PPC_WEAK_FUNC(sub_83C3B2C8);
PPC_FUNC_IMPL(__imp__sub_83C3B2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30304
	ctx.r3.s64 = ctx.r11.s64 + 30304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B2D4"))) PPC_WEAK_FUNC(sub_83C3B2D4);
PPC_FUNC_IMPL(__imp__sub_83C3B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B2D8"))) PPC_WEAK_FUNC(sub_83C3B2D8);
PPC_FUNC_IMPL(__imp__sub_83C3B2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B2E4"))) PPC_WEAK_FUNC(sub_83C3B2E4);
PPC_FUNC_IMPL(__imp__sub_83C3B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B2E8"))) PPC_WEAK_FUNC(sub_83C3B2E8);
PPC_FUNC_IMPL(__imp__sub_83C3B2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30320
	ctx.r3.s64 = ctx.r11.s64 + 30320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B2F4"))) PPC_WEAK_FUNC(sub_83C3B2F4);
PPC_FUNC_IMPL(__imp__sub_83C3B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B2F8"))) PPC_WEAK_FUNC(sub_83C3B2F8);
PPC_FUNC_IMPL(__imp__sub_83C3B2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30328
	ctx.r3.s64 = ctx.r11.s64 + 30328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B304"))) PPC_WEAK_FUNC(sub_83C3B304);
PPC_FUNC_IMPL(__imp__sub_83C3B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B308"))) PPC_WEAK_FUNC(sub_83C3B308);
PPC_FUNC_IMPL(__imp__sub_83C3B308) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,28932
	ctx.r3.s64 = ctx.r11.s64 + 28932;
	// bl 0x83523120
	ctx.lr = 0x83C3B320;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,30336
	ctx.r3.s64 = ctx.r10.s64 + 30336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3B32C;
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

__attribute__((alias("__imp__sub_83C3B33C"))) PPC_WEAK_FUNC(sub_83C3B33C);
PPC_FUNC_IMPL(__imp__sub_83C3B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B340"))) PPC_WEAK_FUNC(sub_83C3B340);
PPC_FUNC_IMPL(__imp__sub_83C3B340) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28948
	ctx.r7.s64 = ctx.r8.s64 + 28948;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28948(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28948);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28948, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3B368"))) PPC_WEAK_FUNC(sub_83C3B368);
PPC_FUNC_IMPL(__imp__sub_83C3B368) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-19044
	ctx.r6.s64 = ctx.r7.s64 + -19044;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28948(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28948);
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
	// std r9,-19044(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19044, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3B3B0"))) PPC_WEAK_FUNC(sub_83C3B3B0);
PPC_FUNC_IMPL(__imp__sub_83C3B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30352
	ctx.r3.s64 = ctx.r11.s64 + 30352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B3BC"))) PPC_WEAK_FUNC(sub_83C3B3BC);
PPC_FUNC_IMPL(__imp__sub_83C3B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B3C0"))) PPC_WEAK_FUNC(sub_83C3B3C0);
PPC_FUNC_IMPL(__imp__sub_83C3B3C0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,28960
	ctx.r3.s64 = ctx.r11.s64 + 28960;
	// bl 0x8259af80
	ctx.lr = 0x83C3B3D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,30368
	ctx.r3.s64 = ctx.r10.s64 + 30368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3B3E4;
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

__attribute__((alias("__imp__sub_83C3B3F4"))) PPC_WEAK_FUNC(sub_83C3B3F4);
PPC_FUNC_IMPL(__imp__sub_83C3B3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B3F8"))) PPC_WEAK_FUNC(sub_83C3B3F8);
PPC_FUNC_IMPL(__imp__sub_83C3B3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28936
	ctx.r11.s64 = ctx.r8.s64 + 28936;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-19068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19068);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30360
	ctx.r3.s64 = ctx.r6.s64 + 30360;
	// stw r10,28936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28936, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B428"))) PPC_WEAK_FUNC(sub_83C3B428);
PPC_FUNC_IMPL(__imp__sub_83C3B428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30376
	ctx.r3.s64 = ctx.r11.s64 + 30376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B434"))) PPC_WEAK_FUNC(sub_83C3B434);
PPC_FUNC_IMPL(__imp__sub_83C3B434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B438"))) PPC_WEAK_FUNC(sub_83C3B438);
PPC_FUNC_IMPL(__imp__sub_83C3B438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30384
	ctx.r3.s64 = ctx.r11.s64 + 30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B444"))) PPC_WEAK_FUNC(sub_83C3B444);
PPC_FUNC_IMPL(__imp__sub_83C3B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B448"))) PPC_WEAK_FUNC(sub_83C3B448);
PPC_FUNC_IMPL(__imp__sub_83C3B448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30392
	ctx.r3.s64 = ctx.r11.s64 + 30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B454"))) PPC_WEAK_FUNC(sub_83C3B454);
PPC_FUNC_IMPL(__imp__sub_83C3B454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B458"))) PPC_WEAK_FUNC(sub_83C3B458);
PPC_FUNC_IMPL(__imp__sub_83C3B458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B464"))) PPC_WEAK_FUNC(sub_83C3B464);
PPC_FUNC_IMPL(__imp__sub_83C3B464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B468"))) PPC_WEAK_FUNC(sub_83C3B468);
PPC_FUNC_IMPL(__imp__sub_83C3B468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30408
	ctx.r3.s64 = ctx.r11.s64 + 30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B474"))) PPC_WEAK_FUNC(sub_83C3B474);
PPC_FUNC_IMPL(__imp__sub_83C3B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B478"))) PPC_WEAK_FUNC(sub_83C3B478);
PPC_FUNC_IMPL(__imp__sub_83C3B478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30416
	ctx.r3.s64 = ctx.r11.s64 + 30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B484"))) PPC_WEAK_FUNC(sub_83C3B484);
PPC_FUNC_IMPL(__imp__sub_83C3B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B488"))) PPC_WEAK_FUNC(sub_83C3B488);
PPC_FUNC_IMPL(__imp__sub_83C3B488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30424
	ctx.r3.s64 = ctx.r11.s64 + 30424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B494"))) PPC_WEAK_FUNC(sub_83C3B494);
PPC_FUNC_IMPL(__imp__sub_83C3B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B498"))) PPC_WEAK_FUNC(sub_83C3B498);
PPC_FUNC_IMPL(__imp__sub_83C3B498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30432
	ctx.r3.s64 = ctx.r11.s64 + 30432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B4A4"))) PPC_WEAK_FUNC(sub_83C3B4A4);
PPC_FUNC_IMPL(__imp__sub_83C3B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B4A8"))) PPC_WEAK_FUNC(sub_83C3B4A8);
PPC_FUNC_IMPL(__imp__sub_83C3B4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30440
	ctx.r3.s64 = ctx.r11.s64 + 30440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B4B4"))) PPC_WEAK_FUNC(sub_83C3B4B4);
PPC_FUNC_IMPL(__imp__sub_83C3B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B4B8"))) PPC_WEAK_FUNC(sub_83C3B4B8);
PPC_FUNC_IMPL(__imp__sub_83C3B4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30448
	ctx.r3.s64 = ctx.r11.s64 + 30448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B4C4"))) PPC_WEAK_FUNC(sub_83C3B4C4);
PPC_FUNC_IMPL(__imp__sub_83C3B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B4C8"))) PPC_WEAK_FUNC(sub_83C3B4C8);
PPC_FUNC_IMPL(__imp__sub_83C3B4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B4D4"))) PPC_WEAK_FUNC(sub_83C3B4D4);
PPC_FUNC_IMPL(__imp__sub_83C3B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B4D8"))) PPC_WEAK_FUNC(sub_83C3B4D8);
PPC_FUNC_IMPL(__imp__sub_83C3B4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B4E4"))) PPC_WEAK_FUNC(sub_83C3B4E4);
PPC_FUNC_IMPL(__imp__sub_83C3B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B4E8"))) PPC_WEAK_FUNC(sub_83C3B4E8);
PPC_FUNC_IMPL(__imp__sub_83C3B4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30472
	ctx.r3.s64 = ctx.r11.s64 + 30472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B4F4"))) PPC_WEAK_FUNC(sub_83C3B4F4);
PPC_FUNC_IMPL(__imp__sub_83C3B4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B4F8"))) PPC_WEAK_FUNC(sub_83C3B4F8);
PPC_FUNC_IMPL(__imp__sub_83C3B4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30480
	ctx.r3.s64 = ctx.r11.s64 + 30480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B504"))) PPC_WEAK_FUNC(sub_83C3B504);
PPC_FUNC_IMPL(__imp__sub_83C3B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B508"))) PPC_WEAK_FUNC(sub_83C3B508);
PPC_FUNC_IMPL(__imp__sub_83C3B508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30488
	ctx.r3.s64 = ctx.r11.s64 + 30488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B514"))) PPC_WEAK_FUNC(sub_83C3B514);
PPC_FUNC_IMPL(__imp__sub_83C3B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B518"))) PPC_WEAK_FUNC(sub_83C3B518);
PPC_FUNC_IMPL(__imp__sub_83C3B518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30496
	ctx.r3.s64 = ctx.r11.s64 + 30496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B524"))) PPC_WEAK_FUNC(sub_83C3B524);
PPC_FUNC_IMPL(__imp__sub_83C3B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B528"))) PPC_WEAK_FUNC(sub_83C3B528);
PPC_FUNC_IMPL(__imp__sub_83C3B528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30504
	ctx.r3.s64 = ctx.r11.s64 + 30504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B534"))) PPC_WEAK_FUNC(sub_83C3B534);
PPC_FUNC_IMPL(__imp__sub_83C3B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B538"))) PPC_WEAK_FUNC(sub_83C3B538);
PPC_FUNC_IMPL(__imp__sub_83C3B538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30512
	ctx.r3.s64 = ctx.r11.s64 + 30512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B544"))) PPC_WEAK_FUNC(sub_83C3B544);
PPC_FUNC_IMPL(__imp__sub_83C3B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B548"))) PPC_WEAK_FUNC(sub_83C3B548);
PPC_FUNC_IMPL(__imp__sub_83C3B548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B554"))) PPC_WEAK_FUNC(sub_83C3B554);
PPC_FUNC_IMPL(__imp__sub_83C3B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B558"))) PPC_WEAK_FUNC(sub_83C3B558);
PPC_FUNC_IMPL(__imp__sub_83C3B558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B564"))) PPC_WEAK_FUNC(sub_83C3B564);
PPC_FUNC_IMPL(__imp__sub_83C3B564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B568"))) PPC_WEAK_FUNC(sub_83C3B568);
PPC_FUNC_IMPL(__imp__sub_83C3B568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B574"))) PPC_WEAK_FUNC(sub_83C3B574);
PPC_FUNC_IMPL(__imp__sub_83C3B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B578"))) PPC_WEAK_FUNC(sub_83C3B578);
PPC_FUNC_IMPL(__imp__sub_83C3B578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B584"))) PPC_WEAK_FUNC(sub_83C3B584);
PPC_FUNC_IMPL(__imp__sub_83C3B584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B588"))) PPC_WEAK_FUNC(sub_83C3B588);
PPC_FUNC_IMPL(__imp__sub_83C3B588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30552
	ctx.r3.s64 = ctx.r11.s64 + 30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B594"))) PPC_WEAK_FUNC(sub_83C3B594);
PPC_FUNC_IMPL(__imp__sub_83C3B594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B598"))) PPC_WEAK_FUNC(sub_83C3B598);
PPC_FUNC_IMPL(__imp__sub_83C3B598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B5A4"))) PPC_WEAK_FUNC(sub_83C3B5A4);
PPC_FUNC_IMPL(__imp__sub_83C3B5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B5A8"))) PPC_WEAK_FUNC(sub_83C3B5A8);
PPC_FUNC_IMPL(__imp__sub_83C3B5A8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,29312
	ctx.r3.s64 = ctx.r11.s64 + 29312;
	// bl 0x83523120
	ctx.lr = 0x83C3B5C0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,30568
	ctx.r3.s64 = ctx.r10.s64 + 30568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3B5CC;
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

__attribute__((alias("__imp__sub_83C3B5DC"))) PPC_WEAK_FUNC(sub_83C3B5DC);
PPC_FUNC_IMPL(__imp__sub_83C3B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B5E0"))) PPC_WEAK_FUNC(sub_83C3B5E0);
PPC_FUNC_IMPL(__imp__sub_83C3B5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29328
	ctx.r7.s64 = ctx.r8.s64 + 29328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29328);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29328, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3B608"))) PPC_WEAK_FUNC(sub_83C3B608);
PPC_FUNC_IMPL(__imp__sub_83C3B608) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-18812
	ctx.r6.s64 = ctx.r7.s64 + -18812;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18884(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18884);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29328);
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
	// std r9,-18812(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18812, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3B650"))) PPC_WEAK_FUNC(sub_83C3B650);
PPC_FUNC_IMPL(__imp__sub_83C3B650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30584
	ctx.r3.s64 = ctx.r11.s64 + 30584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B65C"))) PPC_WEAK_FUNC(sub_83C3B65C);
PPC_FUNC_IMPL(__imp__sub_83C3B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B660"))) PPC_WEAK_FUNC(sub_83C3B660);
PPC_FUNC_IMPL(__imp__sub_83C3B660) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,29336
	ctx.r3.s64 = ctx.r11.s64 + 29336;
	// bl 0x8259af80
	ctx.lr = 0x83C3B678;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,30600
	ctx.r3.s64 = ctx.r10.s64 + 30600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3B684;
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

__attribute__((alias("__imp__sub_83C3B694"))) PPC_WEAK_FUNC(sub_83C3B694);
PPC_FUNC_IMPL(__imp__sub_83C3B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B698"))) PPC_WEAK_FUNC(sub_83C3B698);
PPC_FUNC_IMPL(__imp__sub_83C3B698) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29316
	ctx.r11.s64 = ctx.r8.s64 + 29316;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-18836(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18836);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30592
	ctx.r3.s64 = ctx.r6.s64 + 30592;
	// stw r10,29316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B6C8"))) PPC_WEAK_FUNC(sub_83C3B6C8);
PPC_FUNC_IMPL(__imp__sub_83C3B6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30608
	ctx.r3.s64 = ctx.r11.s64 + 30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B6D4"))) PPC_WEAK_FUNC(sub_83C3B6D4);
PPC_FUNC_IMPL(__imp__sub_83C3B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B6D8"))) PPC_WEAK_FUNC(sub_83C3B6D8);
PPC_FUNC_IMPL(__imp__sub_83C3B6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30616
	ctx.r3.s64 = ctx.r11.s64 + 30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B6E4"))) PPC_WEAK_FUNC(sub_83C3B6E4);
PPC_FUNC_IMPL(__imp__sub_83C3B6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B6E8"))) PPC_WEAK_FUNC(sub_83C3B6E8);
PPC_FUNC_IMPL(__imp__sub_83C3B6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30624
	ctx.r3.s64 = ctx.r11.s64 + 30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B6F4"))) PPC_WEAK_FUNC(sub_83C3B6F4);
PPC_FUNC_IMPL(__imp__sub_83C3B6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B6F8"))) PPC_WEAK_FUNC(sub_83C3B6F8);
PPC_FUNC_IMPL(__imp__sub_83C3B6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30632
	ctx.r3.s64 = ctx.r11.s64 + 30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B704"))) PPC_WEAK_FUNC(sub_83C3B704);
PPC_FUNC_IMPL(__imp__sub_83C3B704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B708"))) PPC_WEAK_FUNC(sub_83C3B708);
PPC_FUNC_IMPL(__imp__sub_83C3B708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30640
	ctx.r3.s64 = ctx.r11.s64 + 30640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B714"))) PPC_WEAK_FUNC(sub_83C3B714);
PPC_FUNC_IMPL(__imp__sub_83C3B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B718"))) PPC_WEAK_FUNC(sub_83C3B718);
PPC_FUNC_IMPL(__imp__sub_83C3B718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30648
	ctx.r3.s64 = ctx.r11.s64 + 30648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B724"))) PPC_WEAK_FUNC(sub_83C3B724);
PPC_FUNC_IMPL(__imp__sub_83C3B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B728"))) PPC_WEAK_FUNC(sub_83C3B728);
PPC_FUNC_IMPL(__imp__sub_83C3B728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B734"))) PPC_WEAK_FUNC(sub_83C3B734);
PPC_FUNC_IMPL(__imp__sub_83C3B734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B738"))) PPC_WEAK_FUNC(sub_83C3B738);
PPC_FUNC_IMPL(__imp__sub_83C3B738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30664
	ctx.r3.s64 = ctx.r11.s64 + 30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B744"))) PPC_WEAK_FUNC(sub_83C3B744);
PPC_FUNC_IMPL(__imp__sub_83C3B744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B748"))) PPC_WEAK_FUNC(sub_83C3B748);
PPC_FUNC_IMPL(__imp__sub_83C3B748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30672
	ctx.r3.s64 = ctx.r11.s64 + 30672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B754"))) PPC_WEAK_FUNC(sub_83C3B754);
PPC_FUNC_IMPL(__imp__sub_83C3B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B758"))) PPC_WEAK_FUNC(sub_83C3B758);
PPC_FUNC_IMPL(__imp__sub_83C3B758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B764"))) PPC_WEAK_FUNC(sub_83C3B764);
PPC_FUNC_IMPL(__imp__sub_83C3B764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B768"))) PPC_WEAK_FUNC(sub_83C3B768);
PPC_FUNC_IMPL(__imp__sub_83C3B768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30688
	ctx.r3.s64 = ctx.r11.s64 + 30688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B774"))) PPC_WEAK_FUNC(sub_83C3B774);
PPC_FUNC_IMPL(__imp__sub_83C3B774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B778"))) PPC_WEAK_FUNC(sub_83C3B778);
PPC_FUNC_IMPL(__imp__sub_83C3B778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30696
	ctx.r3.s64 = ctx.r11.s64 + 30696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B784"))) PPC_WEAK_FUNC(sub_83C3B784);
PPC_FUNC_IMPL(__imp__sub_83C3B784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B788"))) PPC_WEAK_FUNC(sub_83C3B788);
PPC_FUNC_IMPL(__imp__sub_83C3B788) {
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
	// bl 0x8242a638
	ctx.lr = 0x83C3B798;
	sub_8242A638(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// stw r3,29680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3B7B0"))) PPC_WEAK_FUNC(sub_83C3B7B0);
PPC_FUNC_IMPL(__imp__sub_83C3B7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30704
	ctx.r3.s64 = ctx.r11.s64 + 30704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B7BC"))) PPC_WEAK_FUNC(sub_83C3B7BC);
PPC_FUNC_IMPL(__imp__sub_83C3B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B7C0"))) PPC_WEAK_FUNC(sub_83C3B7C0);
PPC_FUNC_IMPL(__imp__sub_83C3B7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30712
	ctx.r3.s64 = ctx.r11.s64 + 30712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B7CC"))) PPC_WEAK_FUNC(sub_83C3B7CC);
PPC_FUNC_IMPL(__imp__sub_83C3B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B7D0"))) PPC_WEAK_FUNC(sub_83C3B7D0);
PPC_FUNC_IMPL(__imp__sub_83C3B7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30720
	ctx.r3.s64 = ctx.r11.s64 + 30720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B7DC"))) PPC_WEAK_FUNC(sub_83C3B7DC);
PPC_FUNC_IMPL(__imp__sub_83C3B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B7E0"))) PPC_WEAK_FUNC(sub_83C3B7E0);
PPC_FUNC_IMPL(__imp__sub_83C3B7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30728
	ctx.r3.s64 = ctx.r11.s64 + 30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B7EC"))) PPC_WEAK_FUNC(sub_83C3B7EC);
PPC_FUNC_IMPL(__imp__sub_83C3B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B7F0"))) PPC_WEAK_FUNC(sub_83C3B7F0);
PPC_FUNC_IMPL(__imp__sub_83C3B7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30736
	ctx.r3.s64 = ctx.r11.s64 + 30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B7FC"))) PPC_WEAK_FUNC(sub_83C3B7FC);
PPC_FUNC_IMPL(__imp__sub_83C3B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B800"))) PPC_WEAK_FUNC(sub_83C3B800);
PPC_FUNC_IMPL(__imp__sub_83C3B800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30744
	ctx.r3.s64 = ctx.r11.s64 + 30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B80C"))) PPC_WEAK_FUNC(sub_83C3B80C);
PPC_FUNC_IMPL(__imp__sub_83C3B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B810"))) PPC_WEAK_FUNC(sub_83C3B810);
PPC_FUNC_IMPL(__imp__sub_83C3B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B81C"))) PPC_WEAK_FUNC(sub_83C3B81C);
PPC_FUNC_IMPL(__imp__sub_83C3B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B820"))) PPC_WEAK_FUNC(sub_83C3B820);
PPC_FUNC_IMPL(__imp__sub_83C3B820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30760
	ctx.r3.s64 = ctx.r11.s64 + 30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B82C"))) PPC_WEAK_FUNC(sub_83C3B82C);
PPC_FUNC_IMPL(__imp__sub_83C3B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B830"))) PPC_WEAK_FUNC(sub_83C3B830);
PPC_FUNC_IMPL(__imp__sub_83C3B830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B83C"))) PPC_WEAK_FUNC(sub_83C3B83C);
PPC_FUNC_IMPL(__imp__sub_83C3B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B840"))) PPC_WEAK_FUNC(sub_83C3B840);
PPC_FUNC_IMPL(__imp__sub_83C3B840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B84C"))) PPC_WEAK_FUNC(sub_83C3B84C);
PPC_FUNC_IMPL(__imp__sub_83C3B84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B850"))) PPC_WEAK_FUNC(sub_83C3B850);
PPC_FUNC_IMPL(__imp__sub_83C3B850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30784
	ctx.r3.s64 = ctx.r11.s64 + 30784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B85C"))) PPC_WEAK_FUNC(sub_83C3B85C);
PPC_FUNC_IMPL(__imp__sub_83C3B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B860"))) PPC_WEAK_FUNC(sub_83C3B860);
PPC_FUNC_IMPL(__imp__sub_83C3B860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30792
	ctx.r3.s64 = ctx.r11.s64 + 30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B86C"))) PPC_WEAK_FUNC(sub_83C3B86C);
PPC_FUNC_IMPL(__imp__sub_83C3B86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B870"))) PPC_WEAK_FUNC(sub_83C3B870);
PPC_FUNC_IMPL(__imp__sub_83C3B870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30800
	ctx.r3.s64 = ctx.r11.s64 + 30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B87C"))) PPC_WEAK_FUNC(sub_83C3B87C);
PPC_FUNC_IMPL(__imp__sub_83C3B87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B880"))) PPC_WEAK_FUNC(sub_83C3B880);
PPC_FUNC_IMPL(__imp__sub_83C3B880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30808
	ctx.r3.s64 = ctx.r11.s64 + 30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B88C"))) PPC_WEAK_FUNC(sub_83C3B88C);
PPC_FUNC_IMPL(__imp__sub_83C3B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B890"))) PPC_WEAK_FUNC(sub_83C3B890);
PPC_FUNC_IMPL(__imp__sub_83C3B890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B89C"))) PPC_WEAK_FUNC(sub_83C3B89C);
PPC_FUNC_IMPL(__imp__sub_83C3B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B8A0"))) PPC_WEAK_FUNC(sub_83C3B8A0);
PPC_FUNC_IMPL(__imp__sub_83C3B8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30824
	ctx.r3.s64 = ctx.r11.s64 + 30824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B8AC"))) PPC_WEAK_FUNC(sub_83C3B8AC);
PPC_FUNC_IMPL(__imp__sub_83C3B8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B8B0"))) PPC_WEAK_FUNC(sub_83C3B8B0);
PPC_FUNC_IMPL(__imp__sub_83C3B8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30832
	ctx.r3.s64 = ctx.r11.s64 + 30832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B8BC"))) PPC_WEAK_FUNC(sub_83C3B8BC);
PPC_FUNC_IMPL(__imp__sub_83C3B8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B8C0"))) PPC_WEAK_FUNC(sub_83C3B8C0);
PPC_FUNC_IMPL(__imp__sub_83C3B8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B8CC"))) PPC_WEAK_FUNC(sub_83C3B8CC);
PPC_FUNC_IMPL(__imp__sub_83C3B8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B8D0"))) PPC_WEAK_FUNC(sub_83C3B8D0);
PPC_FUNC_IMPL(__imp__sub_83C3B8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30848
	ctx.r3.s64 = ctx.r11.s64 + 30848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B8DC"))) PPC_WEAK_FUNC(sub_83C3B8DC);
PPC_FUNC_IMPL(__imp__sub_83C3B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B8E0"))) PPC_WEAK_FUNC(sub_83C3B8E0);
PPC_FUNC_IMPL(__imp__sub_83C3B8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30856
	ctx.r3.s64 = ctx.r11.s64 + 30856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B8EC"))) PPC_WEAK_FUNC(sub_83C3B8EC);
PPC_FUNC_IMPL(__imp__sub_83C3B8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B8F0"))) PPC_WEAK_FUNC(sub_83C3B8F0);
PPC_FUNC_IMPL(__imp__sub_83C3B8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30864
	ctx.r3.s64 = ctx.r11.s64 + 30864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B8FC"))) PPC_WEAK_FUNC(sub_83C3B8FC);
PPC_FUNC_IMPL(__imp__sub_83C3B8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B900"))) PPC_WEAK_FUNC(sub_83C3B900);
PPC_FUNC_IMPL(__imp__sub_83C3B900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30872
	ctx.r3.s64 = ctx.r11.s64 + 30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B90C"))) PPC_WEAK_FUNC(sub_83C3B90C);
PPC_FUNC_IMPL(__imp__sub_83C3B90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B910"))) PPC_WEAK_FUNC(sub_83C3B910);
PPC_FUNC_IMPL(__imp__sub_83C3B910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B91C"))) PPC_WEAK_FUNC(sub_83C3B91C);
PPC_FUNC_IMPL(__imp__sub_83C3B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B920"))) PPC_WEAK_FUNC(sub_83C3B920);
PPC_FUNC_IMPL(__imp__sub_83C3B920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30888
	ctx.r3.s64 = ctx.r11.s64 + 30888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B92C"))) PPC_WEAK_FUNC(sub_83C3B92C);
PPC_FUNC_IMPL(__imp__sub_83C3B92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B930"))) PPC_WEAK_FUNC(sub_83C3B930);
PPC_FUNC_IMPL(__imp__sub_83C3B930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30896
	ctx.r3.s64 = ctx.r11.s64 + 30896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B93C"))) PPC_WEAK_FUNC(sub_83C3B93C);
PPC_FUNC_IMPL(__imp__sub_83C3B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B940"))) PPC_WEAK_FUNC(sub_83C3B940);
PPC_FUNC_IMPL(__imp__sub_83C3B940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30904
	ctx.r3.s64 = ctx.r11.s64 + 30904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B94C"))) PPC_WEAK_FUNC(sub_83C3B94C);
PPC_FUNC_IMPL(__imp__sub_83C3B94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B950"))) PPC_WEAK_FUNC(sub_83C3B950);
PPC_FUNC_IMPL(__imp__sub_83C3B950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30912
	ctx.r3.s64 = ctx.r11.s64 + 30912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B95C"))) PPC_WEAK_FUNC(sub_83C3B95C);
PPC_FUNC_IMPL(__imp__sub_83C3B95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B960"))) PPC_WEAK_FUNC(sub_83C3B960);
PPC_FUNC_IMPL(__imp__sub_83C3B960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30920
	ctx.r3.s64 = ctx.r11.s64 + 30920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B96C"))) PPC_WEAK_FUNC(sub_83C3B96C);
PPC_FUNC_IMPL(__imp__sub_83C3B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B970"))) PPC_WEAK_FUNC(sub_83C3B970);
PPC_FUNC_IMPL(__imp__sub_83C3B970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30928
	ctx.r3.s64 = ctx.r11.s64 + 30928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B97C"))) PPC_WEAK_FUNC(sub_83C3B97C);
PPC_FUNC_IMPL(__imp__sub_83C3B97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B980"))) PPC_WEAK_FUNC(sub_83C3B980);
PPC_FUNC_IMPL(__imp__sub_83C3B980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30936
	ctx.r3.s64 = ctx.r11.s64 + 30936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B98C"))) PPC_WEAK_FUNC(sub_83C3B98C);
PPC_FUNC_IMPL(__imp__sub_83C3B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B990"))) PPC_WEAK_FUNC(sub_83C3B990);
PPC_FUNC_IMPL(__imp__sub_83C3B990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30944
	ctx.r3.s64 = ctx.r11.s64 + 30944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B99C"))) PPC_WEAK_FUNC(sub_83C3B99C);
PPC_FUNC_IMPL(__imp__sub_83C3B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B9A0"))) PPC_WEAK_FUNC(sub_83C3B9A0);
PPC_FUNC_IMPL(__imp__sub_83C3B9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30952
	ctx.r3.s64 = ctx.r11.s64 + 30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B9AC"))) PPC_WEAK_FUNC(sub_83C3B9AC);
PPC_FUNC_IMPL(__imp__sub_83C3B9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B9B0"))) PPC_WEAK_FUNC(sub_83C3B9B0);
PPC_FUNC_IMPL(__imp__sub_83C3B9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30960
	ctx.r3.s64 = ctx.r11.s64 + 30960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B9BC"))) PPC_WEAK_FUNC(sub_83C3B9BC);
PPC_FUNC_IMPL(__imp__sub_83C3B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B9C0"))) PPC_WEAK_FUNC(sub_83C3B9C0);
PPC_FUNC_IMPL(__imp__sub_83C3B9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30968
	ctx.r3.s64 = ctx.r11.s64 + 30968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B9CC"))) PPC_WEAK_FUNC(sub_83C3B9CC);
PPC_FUNC_IMPL(__imp__sub_83C3B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B9D0"))) PPC_WEAK_FUNC(sub_83C3B9D0);
PPC_FUNC_IMPL(__imp__sub_83C3B9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30976
	ctx.r3.s64 = ctx.r11.s64 + 30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B9DC"))) PPC_WEAK_FUNC(sub_83C3B9DC);
PPC_FUNC_IMPL(__imp__sub_83C3B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B9E0"))) PPC_WEAK_FUNC(sub_83C3B9E0);
PPC_FUNC_IMPL(__imp__sub_83C3B9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B9EC"))) PPC_WEAK_FUNC(sub_83C3B9EC);
PPC_FUNC_IMPL(__imp__sub_83C3B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3B9F0"))) PPC_WEAK_FUNC(sub_83C3B9F0);
PPC_FUNC_IMPL(__imp__sub_83C3B9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,30992
	ctx.r3.s64 = ctx.r11.s64 + 30992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3B9FC"))) PPC_WEAK_FUNC(sub_83C3B9FC);
PPC_FUNC_IMPL(__imp__sub_83C3B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA00"))) PPC_WEAK_FUNC(sub_83C3BA00);
PPC_FUNC_IMPL(__imp__sub_83C3BA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31000
	ctx.r3.s64 = ctx.r11.s64 + 31000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA0C"))) PPC_WEAK_FUNC(sub_83C3BA0C);
PPC_FUNC_IMPL(__imp__sub_83C3BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA10"))) PPC_WEAK_FUNC(sub_83C3BA10);
PPC_FUNC_IMPL(__imp__sub_83C3BA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31008
	ctx.r3.s64 = ctx.r11.s64 + 31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA1C"))) PPC_WEAK_FUNC(sub_83C3BA1C);
PPC_FUNC_IMPL(__imp__sub_83C3BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA20"))) PPC_WEAK_FUNC(sub_83C3BA20);
PPC_FUNC_IMPL(__imp__sub_83C3BA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31016
	ctx.r3.s64 = ctx.r11.s64 + 31016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA2C"))) PPC_WEAK_FUNC(sub_83C3BA2C);
PPC_FUNC_IMPL(__imp__sub_83C3BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA30"))) PPC_WEAK_FUNC(sub_83C3BA30);
PPC_FUNC_IMPL(__imp__sub_83C3BA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31024
	ctx.r3.s64 = ctx.r11.s64 + 31024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA3C"))) PPC_WEAK_FUNC(sub_83C3BA3C);
PPC_FUNC_IMPL(__imp__sub_83C3BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA40"))) PPC_WEAK_FUNC(sub_83C3BA40);
PPC_FUNC_IMPL(__imp__sub_83C3BA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31032
	ctx.r3.s64 = ctx.r11.s64 + 31032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA4C"))) PPC_WEAK_FUNC(sub_83C3BA4C);
PPC_FUNC_IMPL(__imp__sub_83C3BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA50"))) PPC_WEAK_FUNC(sub_83C3BA50);
PPC_FUNC_IMPL(__imp__sub_83C3BA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31040
	ctx.r3.s64 = ctx.r11.s64 + 31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA5C"))) PPC_WEAK_FUNC(sub_83C3BA5C);
PPC_FUNC_IMPL(__imp__sub_83C3BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA60"))) PPC_WEAK_FUNC(sub_83C3BA60);
PPC_FUNC_IMPL(__imp__sub_83C3BA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31048
	ctx.r3.s64 = ctx.r11.s64 + 31048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA6C"))) PPC_WEAK_FUNC(sub_83C3BA6C);
PPC_FUNC_IMPL(__imp__sub_83C3BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA70"))) PPC_WEAK_FUNC(sub_83C3BA70);
PPC_FUNC_IMPL(__imp__sub_83C3BA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31056
	ctx.r3.s64 = ctx.r11.s64 + 31056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA7C"))) PPC_WEAK_FUNC(sub_83C3BA7C);
PPC_FUNC_IMPL(__imp__sub_83C3BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA80"))) PPC_WEAK_FUNC(sub_83C3BA80);
PPC_FUNC_IMPL(__imp__sub_83C3BA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31064
	ctx.r3.s64 = ctx.r11.s64 + 31064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA8C"))) PPC_WEAK_FUNC(sub_83C3BA8C);
PPC_FUNC_IMPL(__imp__sub_83C3BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BA90"))) PPC_WEAK_FUNC(sub_83C3BA90);
PPC_FUNC_IMPL(__imp__sub_83C3BA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31072
	ctx.r3.s64 = ctx.r11.s64 + 31072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BA9C"))) PPC_WEAK_FUNC(sub_83C3BA9C);
PPC_FUNC_IMPL(__imp__sub_83C3BA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BAA0"))) PPC_WEAK_FUNC(sub_83C3BAA0);
PPC_FUNC_IMPL(__imp__sub_83C3BAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,31080
	ctx.r3.s64 = ctx.r11.s64 + 31080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3BAAC"))) PPC_WEAK_FUNC(sub_83C3BAAC);
PPC_FUNC_IMPL(__imp__sub_83C3BAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BAB0"))) PPC_WEAK_FUNC(sub_83C3BAB0);
PPC_FUNC_IMPL(__imp__sub_83C3BAB0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,29708
	ctx.r3.s64 = ctx.r11.s64 + 29708;
	// bl 0x83523120
	ctx.lr = 0x83C3BAC8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,31088
	ctx.r3.s64 = ctx.r10.s64 + 31088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3BAD4;
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

__attribute__((alias("__imp__sub_83C3BAE4"))) PPC_WEAK_FUNC(sub_83C3BAE4);
PPC_FUNC_IMPL(__imp__sub_83C3BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3BAE8"))) PPC_WEAK_FUNC(sub_83C3BAE8);
PPC_FUNC_IMPL(__imp__sub_83C3BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29724
	ctx.r7.s64 = ctx.r8.s64 + 29724;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29724(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29724);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29724, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3BB10"))) PPC_WEAK_FUNC(sub_83C3BB10);
PPC_FUNC_IMPL(__imp__sub_83C3BB10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-18268
	ctx.r6.s64 = ctx.r7.s64 + -18268;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18340(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18340);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29724(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29724);
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
	// std r9,-18268(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18268, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

