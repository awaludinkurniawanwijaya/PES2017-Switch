#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C35100"))) PPC_WEAK_FUNC(sub_83C35100);
PPC_FUNC_IMPL(__imp__sub_83C35100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21296
	ctx.r3.s64 = ctx.r11.s64 + 21296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3510C"))) PPC_WEAK_FUNC(sub_83C3510C);
PPC_FUNC_IMPL(__imp__sub_83C3510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35110"))) PPC_WEAK_FUNC(sub_83C35110);
PPC_FUNC_IMPL(__imp__sub_83C35110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21304
	ctx.r3.s64 = ctx.r11.s64 + 21304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3511C"))) PPC_WEAK_FUNC(sub_83C3511C);
PPC_FUNC_IMPL(__imp__sub_83C3511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35120"))) PPC_WEAK_FUNC(sub_83C35120);
PPC_FUNC_IMPL(__imp__sub_83C35120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21312
	ctx.r3.s64 = ctx.r11.s64 + 21312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3512C"))) PPC_WEAK_FUNC(sub_83C3512C);
PPC_FUNC_IMPL(__imp__sub_83C3512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35130"))) PPC_WEAK_FUNC(sub_83C35130);
PPC_FUNC_IMPL(__imp__sub_83C35130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21320
	ctx.r3.s64 = ctx.r11.s64 + 21320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3513C"))) PPC_WEAK_FUNC(sub_83C3513C);
PPC_FUNC_IMPL(__imp__sub_83C3513C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35140"))) PPC_WEAK_FUNC(sub_83C35140);
PPC_FUNC_IMPL(__imp__sub_83C35140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21328
	ctx.r3.s64 = ctx.r11.s64 + 21328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3514C"))) PPC_WEAK_FUNC(sub_83C3514C);
PPC_FUNC_IMPL(__imp__sub_83C3514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35150"))) PPC_WEAK_FUNC(sub_83C35150);
PPC_FUNC_IMPL(__imp__sub_83C35150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3515C"))) PPC_WEAK_FUNC(sub_83C3515C);
PPC_FUNC_IMPL(__imp__sub_83C3515C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35160"))) PPC_WEAK_FUNC(sub_83C35160);
PPC_FUNC_IMPL(__imp__sub_83C35160) {
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
	// addi r3,r11,15976
	ctx.r3.s64 = ctx.r11.s64 + 15976;
	// bl 0x83523120
	ctx.lr = 0x83C35178;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21344
	ctx.r3.s64 = ctx.r10.s64 + 21344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35184;
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

__attribute__((alias("__imp__sub_83C35194"))) PPC_WEAK_FUNC(sub_83C35194);
PPC_FUNC_IMPL(__imp__sub_83C35194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35198"))) PPC_WEAK_FUNC(sub_83C35198);
PPC_FUNC_IMPL(__imp__sub_83C35198) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15980
	ctx.r7.s64 = ctx.r8.s64 + 15980;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15980(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15980);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15980, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C351C0"))) PPC_WEAK_FUNC(sub_83C351C0);
PPC_FUNC_IMPL(__imp__sub_83C351C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-28028
	ctx.r6.s64 = ctx.r7.s64 + -28028;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15980(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15980);
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
	// std r9,-28028(r7)
	PPC_STORE_U64(ctx.r7.u32 + -28028, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35208"))) PPC_WEAK_FUNC(sub_83C35208);
PPC_FUNC_IMPL(__imp__sub_83C35208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21360
	ctx.r3.s64 = ctx.r11.s64 + 21360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35214"))) PPC_WEAK_FUNC(sub_83C35214);
PPC_FUNC_IMPL(__imp__sub_83C35214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35218"))) PPC_WEAK_FUNC(sub_83C35218);
PPC_FUNC_IMPL(__imp__sub_83C35218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35224"))) PPC_WEAK_FUNC(sub_83C35224);
PPC_FUNC_IMPL(__imp__sub_83C35224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35228"))) PPC_WEAK_FUNC(sub_83C35228);
PPC_FUNC_IMPL(__imp__sub_83C35228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21376
	ctx.r3.s64 = ctx.r11.s64 + 21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35234"))) PPC_WEAK_FUNC(sub_83C35234);
PPC_FUNC_IMPL(__imp__sub_83C35234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35238"))) PPC_WEAK_FUNC(sub_83C35238);
PPC_FUNC_IMPL(__imp__sub_83C35238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21384
	ctx.r3.s64 = ctx.r11.s64 + 21384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35244"))) PPC_WEAK_FUNC(sub_83C35244);
PPC_FUNC_IMPL(__imp__sub_83C35244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35248"))) PPC_WEAK_FUNC(sub_83C35248);
PPC_FUNC_IMPL(__imp__sub_83C35248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21392
	ctx.r3.s64 = ctx.r11.s64 + 21392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35254"))) PPC_WEAK_FUNC(sub_83C35254);
PPC_FUNC_IMPL(__imp__sub_83C35254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35258"))) PPC_WEAK_FUNC(sub_83C35258);
PPC_FUNC_IMPL(__imp__sub_83C35258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21400
	ctx.r3.s64 = ctx.r11.s64 + 21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35264"))) PPC_WEAK_FUNC(sub_83C35264);
PPC_FUNC_IMPL(__imp__sub_83C35264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35268"))) PPC_WEAK_FUNC(sub_83C35268);
PPC_FUNC_IMPL(__imp__sub_83C35268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21408
	ctx.r3.s64 = ctx.r11.s64 + 21408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35274"))) PPC_WEAK_FUNC(sub_83C35274);
PPC_FUNC_IMPL(__imp__sub_83C35274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35278"))) PPC_WEAK_FUNC(sub_83C35278);
PPC_FUNC_IMPL(__imp__sub_83C35278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21416
	ctx.r3.s64 = ctx.r11.s64 + 21416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35284"))) PPC_WEAK_FUNC(sub_83C35284);
PPC_FUNC_IMPL(__imp__sub_83C35284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35288"))) PPC_WEAK_FUNC(sub_83C35288);
PPC_FUNC_IMPL(__imp__sub_83C35288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21424
	ctx.r3.s64 = ctx.r11.s64 + 21424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35294"))) PPC_WEAK_FUNC(sub_83C35294);
PPC_FUNC_IMPL(__imp__sub_83C35294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35298"))) PPC_WEAK_FUNC(sub_83C35298);
PPC_FUNC_IMPL(__imp__sub_83C35298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21432
	ctx.r3.s64 = ctx.r11.s64 + 21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C352A4"))) PPC_WEAK_FUNC(sub_83C352A4);
PPC_FUNC_IMPL(__imp__sub_83C352A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C352A8"))) PPC_WEAK_FUNC(sub_83C352A8);
PPC_FUNC_IMPL(__imp__sub_83C352A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C352B4"))) PPC_WEAK_FUNC(sub_83C352B4);
PPC_FUNC_IMPL(__imp__sub_83C352B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C352B8"))) PPC_WEAK_FUNC(sub_83C352B8);
PPC_FUNC_IMPL(__imp__sub_83C352B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21448
	ctx.r3.s64 = ctx.r11.s64 + 21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C352C4"))) PPC_WEAK_FUNC(sub_83C352C4);
PPC_FUNC_IMPL(__imp__sub_83C352C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C352C8"))) PPC_WEAK_FUNC(sub_83C352C8);
PPC_FUNC_IMPL(__imp__sub_83C352C8) {
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
	// addi r3,r11,15988
	ctx.r3.s64 = ctx.r11.s64 + 15988;
	// bl 0x83523120
	ctx.lr = 0x83C352E0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21456
	ctx.r3.s64 = ctx.r10.s64 + 21456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C352EC;
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

__attribute__((alias("__imp__sub_83C352FC"))) PPC_WEAK_FUNC(sub_83C352FC);
PPC_FUNC_IMPL(__imp__sub_83C352FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35300"))) PPC_WEAK_FUNC(sub_83C35300);
PPC_FUNC_IMPL(__imp__sub_83C35300) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15992
	ctx.r7.s64 = ctx.r8.s64 + 15992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35328"))) PPC_WEAK_FUNC(sub_83C35328);
PPC_FUNC_IMPL(__imp__sub_83C35328) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-27904
	ctx.r6.s64 = ctx.r7.s64 + -27904;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15992);
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
	// std r9,-27904(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27904, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35370"))) PPC_WEAK_FUNC(sub_83C35370);
PPC_FUNC_IMPL(__imp__sub_83C35370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21472
	ctx.r3.s64 = ctx.r11.s64 + 21472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3537C"))) PPC_WEAK_FUNC(sub_83C3537C);
PPC_FUNC_IMPL(__imp__sub_83C3537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35380"))) PPC_WEAK_FUNC(sub_83C35380);
PPC_FUNC_IMPL(__imp__sub_83C35380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21480
	ctx.r3.s64 = ctx.r11.s64 + 21480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3538C"))) PPC_WEAK_FUNC(sub_83C3538C);
PPC_FUNC_IMPL(__imp__sub_83C3538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35390"))) PPC_WEAK_FUNC(sub_83C35390);
PPC_FUNC_IMPL(__imp__sub_83C35390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21488
	ctx.r3.s64 = ctx.r11.s64 + 21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3539C"))) PPC_WEAK_FUNC(sub_83C3539C);
PPC_FUNC_IMPL(__imp__sub_83C3539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C353A0"))) PPC_WEAK_FUNC(sub_83C353A0);
PPC_FUNC_IMPL(__imp__sub_83C353A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21496
	ctx.r3.s64 = ctx.r11.s64 + 21496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C353AC"))) PPC_WEAK_FUNC(sub_83C353AC);
PPC_FUNC_IMPL(__imp__sub_83C353AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C353B0"))) PPC_WEAK_FUNC(sub_83C353B0);
PPC_FUNC_IMPL(__imp__sub_83C353B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21504
	ctx.r3.s64 = ctx.r11.s64 + 21504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C353BC"))) PPC_WEAK_FUNC(sub_83C353BC);
PPC_FUNC_IMPL(__imp__sub_83C353BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C353C0"))) PPC_WEAK_FUNC(sub_83C353C0);
PPC_FUNC_IMPL(__imp__sub_83C353C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21512
	ctx.r3.s64 = ctx.r11.s64 + 21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C353CC"))) PPC_WEAK_FUNC(sub_83C353CC);
PPC_FUNC_IMPL(__imp__sub_83C353CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C353D0"))) PPC_WEAK_FUNC(sub_83C353D0);
PPC_FUNC_IMPL(__imp__sub_83C353D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21520
	ctx.r3.s64 = ctx.r11.s64 + 21520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C353DC"))) PPC_WEAK_FUNC(sub_83C353DC);
PPC_FUNC_IMPL(__imp__sub_83C353DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C353E0"))) PPC_WEAK_FUNC(sub_83C353E0);
PPC_FUNC_IMPL(__imp__sub_83C353E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21528
	ctx.r3.s64 = ctx.r11.s64 + 21528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C353EC"))) PPC_WEAK_FUNC(sub_83C353EC);
PPC_FUNC_IMPL(__imp__sub_83C353EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C353F0"))) PPC_WEAK_FUNC(sub_83C353F0);
PPC_FUNC_IMPL(__imp__sub_83C353F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21536
	ctx.r3.s64 = ctx.r11.s64 + 21536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C353FC"))) PPC_WEAK_FUNC(sub_83C353FC);
PPC_FUNC_IMPL(__imp__sub_83C353FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35400"))) PPC_WEAK_FUNC(sub_83C35400);
PPC_FUNC_IMPL(__imp__sub_83C35400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21544
	ctx.r3.s64 = ctx.r11.s64 + 21544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3540C"))) PPC_WEAK_FUNC(sub_83C3540C);
PPC_FUNC_IMPL(__imp__sub_83C3540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35410"))) PPC_WEAK_FUNC(sub_83C35410);
PPC_FUNC_IMPL(__imp__sub_83C35410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21552
	ctx.r3.s64 = ctx.r11.s64 + 21552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3541C"))) PPC_WEAK_FUNC(sub_83C3541C);
PPC_FUNC_IMPL(__imp__sub_83C3541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35420"))) PPC_WEAK_FUNC(sub_83C35420);
PPC_FUNC_IMPL(__imp__sub_83C35420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21560
	ctx.r3.s64 = ctx.r11.s64 + 21560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3542C"))) PPC_WEAK_FUNC(sub_83C3542C);
PPC_FUNC_IMPL(__imp__sub_83C3542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35430"))) PPC_WEAK_FUNC(sub_83C35430);
PPC_FUNC_IMPL(__imp__sub_83C35430) {
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
	// addi r3,r11,16000
	ctx.r3.s64 = ctx.r11.s64 + 16000;
	// bl 0x83523120
	ctx.lr = 0x83C35448;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21568
	ctx.r3.s64 = ctx.r10.s64 + 21568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35454;
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

__attribute__((alias("__imp__sub_83C35464"))) PPC_WEAK_FUNC(sub_83C35464);
PPC_FUNC_IMPL(__imp__sub_83C35464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35468"))) PPC_WEAK_FUNC(sub_83C35468);
PPC_FUNC_IMPL(__imp__sub_83C35468) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16016
	ctx.r7.s64 = ctx.r8.s64 + 16016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16016);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16016, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35490"))) PPC_WEAK_FUNC(sub_83C35490);
PPC_FUNC_IMPL(__imp__sub_83C35490) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-27760
	ctx.r6.s64 = ctx.r7.s64 + -27760;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27832(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27832);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16016);
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
	// std r9,-27760(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27760, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C354D8"))) PPC_WEAK_FUNC(sub_83C354D8);
PPC_FUNC_IMPL(__imp__sub_83C354D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21584
	ctx.r3.s64 = ctx.r11.s64 + 21584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C354E4"))) PPC_WEAK_FUNC(sub_83C354E4);
PPC_FUNC_IMPL(__imp__sub_83C354E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C354E8"))) PPC_WEAK_FUNC(sub_83C354E8);
PPC_FUNC_IMPL(__imp__sub_83C354E8) {
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
	// addi r3,r11,16024
	ctx.r3.s64 = ctx.r11.s64 + 16024;
	// bl 0x8259af80
	ctx.lr = 0x83C35500;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21600
	ctx.r3.s64 = ctx.r10.s64 + 21600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3550C;
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

__attribute__((alias("__imp__sub_83C3551C"))) PPC_WEAK_FUNC(sub_83C3551C);
PPC_FUNC_IMPL(__imp__sub_83C3551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35520"))) PPC_WEAK_FUNC(sub_83C35520);
PPC_FUNC_IMPL(__imp__sub_83C35520) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16004
	ctx.r11.s64 = ctx.r8.s64 + 16004;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-27784(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27784);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21592
	ctx.r3.s64 = ctx.r6.s64 + 21592;
	// stw r10,16004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16004, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35550"))) PPC_WEAK_FUNC(sub_83C35550);
PPC_FUNC_IMPL(__imp__sub_83C35550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21608
	ctx.r3.s64 = ctx.r11.s64 + 21608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3555C"))) PPC_WEAK_FUNC(sub_83C3555C);
PPC_FUNC_IMPL(__imp__sub_83C3555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35560"))) PPC_WEAK_FUNC(sub_83C35560);
PPC_FUNC_IMPL(__imp__sub_83C35560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21616
	ctx.r3.s64 = ctx.r11.s64 + 21616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3556C"))) PPC_WEAK_FUNC(sub_83C3556C);
PPC_FUNC_IMPL(__imp__sub_83C3556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35570"))) PPC_WEAK_FUNC(sub_83C35570);
PPC_FUNC_IMPL(__imp__sub_83C35570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21624
	ctx.r3.s64 = ctx.r11.s64 + 21624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3557C"))) PPC_WEAK_FUNC(sub_83C3557C);
PPC_FUNC_IMPL(__imp__sub_83C3557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35580"))) PPC_WEAK_FUNC(sub_83C35580);
PPC_FUNC_IMPL(__imp__sub_83C35580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21632
	ctx.r3.s64 = ctx.r11.s64 + 21632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3558C"))) PPC_WEAK_FUNC(sub_83C3558C);
PPC_FUNC_IMPL(__imp__sub_83C3558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35590"))) PPC_WEAK_FUNC(sub_83C35590);
PPC_FUNC_IMPL(__imp__sub_83C35590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21640
	ctx.r3.s64 = ctx.r11.s64 + 21640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3559C"))) PPC_WEAK_FUNC(sub_83C3559C);
PPC_FUNC_IMPL(__imp__sub_83C3559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C355A0"))) PPC_WEAK_FUNC(sub_83C355A0);
PPC_FUNC_IMPL(__imp__sub_83C355A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21648
	ctx.r3.s64 = ctx.r11.s64 + 21648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C355AC"))) PPC_WEAK_FUNC(sub_83C355AC);
PPC_FUNC_IMPL(__imp__sub_83C355AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C355B0"))) PPC_WEAK_FUNC(sub_83C355B0);
PPC_FUNC_IMPL(__imp__sub_83C355B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21656
	ctx.r3.s64 = ctx.r11.s64 + 21656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C355BC"))) PPC_WEAK_FUNC(sub_83C355BC);
PPC_FUNC_IMPL(__imp__sub_83C355BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C355C0"))) PPC_WEAK_FUNC(sub_83C355C0);
PPC_FUNC_IMPL(__imp__sub_83C355C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21664
	ctx.r3.s64 = ctx.r11.s64 + 21664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C355CC"))) PPC_WEAK_FUNC(sub_83C355CC);
PPC_FUNC_IMPL(__imp__sub_83C355CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C355D0"))) PPC_WEAK_FUNC(sub_83C355D0);
PPC_FUNC_IMPL(__imp__sub_83C355D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21672
	ctx.r3.s64 = ctx.r11.s64 + 21672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C355DC"))) PPC_WEAK_FUNC(sub_83C355DC);
PPC_FUNC_IMPL(__imp__sub_83C355DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C355E0"))) PPC_WEAK_FUNC(sub_83C355E0);
PPC_FUNC_IMPL(__imp__sub_83C355E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21680
	ctx.r3.s64 = ctx.r11.s64 + 21680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C355EC"))) PPC_WEAK_FUNC(sub_83C355EC);
PPC_FUNC_IMPL(__imp__sub_83C355EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C355F0"))) PPC_WEAK_FUNC(sub_83C355F0);
PPC_FUNC_IMPL(__imp__sub_83C355F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21688
	ctx.r3.s64 = ctx.r11.s64 + 21688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C355FC"))) PPC_WEAK_FUNC(sub_83C355FC);
PPC_FUNC_IMPL(__imp__sub_83C355FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35600"))) PPC_WEAK_FUNC(sub_83C35600);
PPC_FUNC_IMPL(__imp__sub_83C35600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21696
	ctx.r3.s64 = ctx.r11.s64 + 21696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3560C"))) PPC_WEAK_FUNC(sub_83C3560C);
PPC_FUNC_IMPL(__imp__sub_83C3560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35610"))) PPC_WEAK_FUNC(sub_83C35610);
PPC_FUNC_IMPL(__imp__sub_83C35610) {
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
	// addi r3,r11,16368
	ctx.r3.s64 = ctx.r11.s64 + 16368;
	// bl 0x83523120
	ctx.lr = 0x83C35628;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21704
	ctx.r3.s64 = ctx.r10.s64 + 21704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35634;
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

__attribute__((alias("__imp__sub_83C35644"))) PPC_WEAK_FUNC(sub_83C35644);
PPC_FUNC_IMPL(__imp__sub_83C35644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35648"))) PPC_WEAK_FUNC(sub_83C35648);
PPC_FUNC_IMPL(__imp__sub_83C35648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16384
	ctx.r7.s64 = ctx.r8.s64 + 16384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35670"))) PPC_WEAK_FUNC(sub_83C35670);
PPC_FUNC_IMPL(__imp__sub_83C35670) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-27632
	ctx.r6.s64 = ctx.r7.s64 + -27632;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27704(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27704);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16384);
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
	// std r9,-27632(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C356B8"))) PPC_WEAK_FUNC(sub_83C356B8);
PPC_FUNC_IMPL(__imp__sub_83C356B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21720
	ctx.r3.s64 = ctx.r11.s64 + 21720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C356C4"))) PPC_WEAK_FUNC(sub_83C356C4);
PPC_FUNC_IMPL(__imp__sub_83C356C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C356C8"))) PPC_WEAK_FUNC(sub_83C356C8);
PPC_FUNC_IMPL(__imp__sub_83C356C8) {
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
	// addi r3,r11,16392
	ctx.r3.s64 = ctx.r11.s64 + 16392;
	// bl 0x8259af80
	ctx.lr = 0x83C356E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21736
	ctx.r3.s64 = ctx.r10.s64 + 21736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C356EC;
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

__attribute__((alias("__imp__sub_83C356FC"))) PPC_WEAK_FUNC(sub_83C356FC);
PPC_FUNC_IMPL(__imp__sub_83C356FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35700"))) PPC_WEAK_FUNC(sub_83C35700);
PPC_FUNC_IMPL(__imp__sub_83C35700) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16372
	ctx.r11.s64 = ctx.r8.s64 + 16372;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-27656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27656);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21728
	ctx.r3.s64 = ctx.r6.s64 + 21728;
	// stw r10,16372(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16372, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35730"))) PPC_WEAK_FUNC(sub_83C35730);
PPC_FUNC_IMPL(__imp__sub_83C35730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21744
	ctx.r3.s64 = ctx.r11.s64 + 21744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3573C"))) PPC_WEAK_FUNC(sub_83C3573C);
PPC_FUNC_IMPL(__imp__sub_83C3573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35740"))) PPC_WEAK_FUNC(sub_83C35740);
PPC_FUNC_IMPL(__imp__sub_83C35740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21752
	ctx.r3.s64 = ctx.r11.s64 + 21752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3574C"))) PPC_WEAK_FUNC(sub_83C3574C);
PPC_FUNC_IMPL(__imp__sub_83C3574C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35750"))) PPC_WEAK_FUNC(sub_83C35750);
PPC_FUNC_IMPL(__imp__sub_83C35750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21760
	ctx.r3.s64 = ctx.r11.s64 + 21760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3575C"))) PPC_WEAK_FUNC(sub_83C3575C);
PPC_FUNC_IMPL(__imp__sub_83C3575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35760"))) PPC_WEAK_FUNC(sub_83C35760);
PPC_FUNC_IMPL(__imp__sub_83C35760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21768
	ctx.r3.s64 = ctx.r11.s64 + 21768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3576C"))) PPC_WEAK_FUNC(sub_83C3576C);
PPC_FUNC_IMPL(__imp__sub_83C3576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35770"))) PPC_WEAK_FUNC(sub_83C35770);
PPC_FUNC_IMPL(__imp__sub_83C35770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3577C"))) PPC_WEAK_FUNC(sub_83C3577C);
PPC_FUNC_IMPL(__imp__sub_83C3577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35780"))) PPC_WEAK_FUNC(sub_83C35780);
PPC_FUNC_IMPL(__imp__sub_83C35780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21784
	ctx.r3.s64 = ctx.r11.s64 + 21784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3578C"))) PPC_WEAK_FUNC(sub_83C3578C);
PPC_FUNC_IMPL(__imp__sub_83C3578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35790"))) PPC_WEAK_FUNC(sub_83C35790);
PPC_FUNC_IMPL(__imp__sub_83C35790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21792
	ctx.r3.s64 = ctx.r11.s64 + 21792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3579C"))) PPC_WEAK_FUNC(sub_83C3579C);
PPC_FUNC_IMPL(__imp__sub_83C3579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C357A0"))) PPC_WEAK_FUNC(sub_83C357A0);
PPC_FUNC_IMPL(__imp__sub_83C357A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21800
	ctx.r3.s64 = ctx.r11.s64 + 21800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C357AC"))) PPC_WEAK_FUNC(sub_83C357AC);
PPC_FUNC_IMPL(__imp__sub_83C357AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C357B0"))) PPC_WEAK_FUNC(sub_83C357B0);
PPC_FUNC_IMPL(__imp__sub_83C357B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C357BC"))) PPC_WEAK_FUNC(sub_83C357BC);
PPC_FUNC_IMPL(__imp__sub_83C357BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C357C0"))) PPC_WEAK_FUNC(sub_83C357C0);
PPC_FUNC_IMPL(__imp__sub_83C357C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C357CC"))) PPC_WEAK_FUNC(sub_83C357CC);
PPC_FUNC_IMPL(__imp__sub_83C357CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C357D0"))) PPC_WEAK_FUNC(sub_83C357D0);
PPC_FUNC_IMPL(__imp__sub_83C357D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C357DC"))) PPC_WEAK_FUNC(sub_83C357DC);
PPC_FUNC_IMPL(__imp__sub_83C357DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C357E0"))) PPC_WEAK_FUNC(sub_83C357E0);
PPC_FUNC_IMPL(__imp__sub_83C357E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21832
	ctx.r3.s64 = ctx.r11.s64 + 21832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C357EC"))) PPC_WEAK_FUNC(sub_83C357EC);
PPC_FUNC_IMPL(__imp__sub_83C357EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C357F0"))) PPC_WEAK_FUNC(sub_83C357F0);
PPC_FUNC_IMPL(__imp__sub_83C357F0) {
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
	// addi r3,r11,16736
	ctx.r3.s64 = ctx.r11.s64 + 16736;
	// bl 0x83523120
	ctx.lr = 0x83C35808;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21840
	ctx.r3.s64 = ctx.r10.s64 + 21840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35814;
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

__attribute__((alias("__imp__sub_83C35824"))) PPC_WEAK_FUNC(sub_83C35824);
PPC_FUNC_IMPL(__imp__sub_83C35824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35828"))) PPC_WEAK_FUNC(sub_83C35828);
PPC_FUNC_IMPL(__imp__sub_83C35828) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16752
	ctx.r7.s64 = ctx.r8.s64 + 16752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35850"))) PPC_WEAK_FUNC(sub_83C35850);
PPC_FUNC_IMPL(__imp__sub_83C35850) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-27504
	ctx.r6.s64 = ctx.r7.s64 + -27504;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27576(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27576);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16752);
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
	// std r9,-27504(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35898"))) PPC_WEAK_FUNC(sub_83C35898);
PPC_FUNC_IMPL(__imp__sub_83C35898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21856
	ctx.r3.s64 = ctx.r11.s64 + 21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C358A4"))) PPC_WEAK_FUNC(sub_83C358A4);
PPC_FUNC_IMPL(__imp__sub_83C358A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C358A8"))) PPC_WEAK_FUNC(sub_83C358A8);
PPC_FUNC_IMPL(__imp__sub_83C358A8) {
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
	// addi r3,r11,16760
	ctx.r3.s64 = ctx.r11.s64 + 16760;
	// bl 0x8259af80
	ctx.lr = 0x83C358C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21872
	ctx.r3.s64 = ctx.r10.s64 + 21872;
	// bl 0x831cdcc8
	ctx.lr = 0x83C358CC;
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

__attribute__((alias("__imp__sub_83C358DC"))) PPC_WEAK_FUNC(sub_83C358DC);
PPC_FUNC_IMPL(__imp__sub_83C358DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C358E0"))) PPC_WEAK_FUNC(sub_83C358E0);
PPC_FUNC_IMPL(__imp__sub_83C358E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16740
	ctx.r11.s64 = ctx.r8.s64 + 16740;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-27528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27528);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21864
	ctx.r3.s64 = ctx.r6.s64 + 21864;
	// stw r10,16740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16740, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35910"))) PPC_WEAK_FUNC(sub_83C35910);
PPC_FUNC_IMPL(__imp__sub_83C35910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21880
	ctx.r3.s64 = ctx.r11.s64 + 21880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3591C"))) PPC_WEAK_FUNC(sub_83C3591C);
PPC_FUNC_IMPL(__imp__sub_83C3591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35920"))) PPC_WEAK_FUNC(sub_83C35920);
PPC_FUNC_IMPL(__imp__sub_83C35920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21888
	ctx.r3.s64 = ctx.r11.s64 + 21888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3592C"))) PPC_WEAK_FUNC(sub_83C3592C);
PPC_FUNC_IMPL(__imp__sub_83C3592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35930"))) PPC_WEAK_FUNC(sub_83C35930);
PPC_FUNC_IMPL(__imp__sub_83C35930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21896
	ctx.r3.s64 = ctx.r11.s64 + 21896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3593C"))) PPC_WEAK_FUNC(sub_83C3593C);
PPC_FUNC_IMPL(__imp__sub_83C3593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35940"))) PPC_WEAK_FUNC(sub_83C35940);
PPC_FUNC_IMPL(__imp__sub_83C35940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21904
	ctx.r3.s64 = ctx.r11.s64 + 21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3594C"))) PPC_WEAK_FUNC(sub_83C3594C);
PPC_FUNC_IMPL(__imp__sub_83C3594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35950"))) PPC_WEAK_FUNC(sub_83C35950);
PPC_FUNC_IMPL(__imp__sub_83C35950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21912
	ctx.r3.s64 = ctx.r11.s64 + 21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3595C"))) PPC_WEAK_FUNC(sub_83C3595C);
PPC_FUNC_IMPL(__imp__sub_83C3595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35960"))) PPC_WEAK_FUNC(sub_83C35960);
PPC_FUNC_IMPL(__imp__sub_83C35960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21920
	ctx.r3.s64 = ctx.r11.s64 + 21920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3596C"))) PPC_WEAK_FUNC(sub_83C3596C);
PPC_FUNC_IMPL(__imp__sub_83C3596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35970"))) PPC_WEAK_FUNC(sub_83C35970);
PPC_FUNC_IMPL(__imp__sub_83C35970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21928
	ctx.r3.s64 = ctx.r11.s64 + 21928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3597C"))) PPC_WEAK_FUNC(sub_83C3597C);
PPC_FUNC_IMPL(__imp__sub_83C3597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35980"))) PPC_WEAK_FUNC(sub_83C35980);
PPC_FUNC_IMPL(__imp__sub_83C35980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21936
	ctx.r3.s64 = ctx.r11.s64 + 21936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3598C"))) PPC_WEAK_FUNC(sub_83C3598C);
PPC_FUNC_IMPL(__imp__sub_83C3598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35990"))) PPC_WEAK_FUNC(sub_83C35990);
PPC_FUNC_IMPL(__imp__sub_83C35990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21944
	ctx.r3.s64 = ctx.r11.s64 + 21944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3599C"))) PPC_WEAK_FUNC(sub_83C3599C);
PPC_FUNC_IMPL(__imp__sub_83C3599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C359A0"))) PPC_WEAK_FUNC(sub_83C359A0);
PPC_FUNC_IMPL(__imp__sub_83C359A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21952
	ctx.r3.s64 = ctx.r11.s64 + 21952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C359AC"))) PPC_WEAK_FUNC(sub_83C359AC);
PPC_FUNC_IMPL(__imp__sub_83C359AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C359B0"))) PPC_WEAK_FUNC(sub_83C359B0);
PPC_FUNC_IMPL(__imp__sub_83C359B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21960
	ctx.r3.s64 = ctx.r11.s64 + 21960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C359BC"))) PPC_WEAK_FUNC(sub_83C359BC);
PPC_FUNC_IMPL(__imp__sub_83C359BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C359C0"))) PPC_WEAK_FUNC(sub_83C359C0);
PPC_FUNC_IMPL(__imp__sub_83C359C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21968
	ctx.r3.s64 = ctx.r11.s64 + 21968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C359CC"))) PPC_WEAK_FUNC(sub_83C359CC);
PPC_FUNC_IMPL(__imp__sub_83C359CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C359D0"))) PPC_WEAK_FUNC(sub_83C359D0);
PPC_FUNC_IMPL(__imp__sub_83C359D0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r4,r11,11652
	ctx.r4.s64 = ctx.r11.s64 + 11652;
	// addi r3,r10,-27376
	ctx.r3.s64 = ctx.r10.s64 + -27376;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C359F4;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,22016
	ctx.r3.s64 = ctx.r9.s64 + 22016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35A00;
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

__attribute__((alias("__imp__sub_83C35A10"))) PPC_WEAK_FUNC(sub_83C35A10);
PPC_FUNC_IMPL(__imp__sub_83C35A10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17120
	ctx.r7.s64 = ctx.r8.s64 + 17120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35A38"))) PPC_WEAK_FUNC(sub_83C35A38);
PPC_FUNC_IMPL(__imp__sub_83C35A38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-27348
	ctx.r6.s64 = ctx.r7.s64 + -27348;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27448(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27448);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17120);
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
	// std r9,-27348(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27348, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35A80"))) PPC_WEAK_FUNC(sub_83C35A80);
PPC_FUNC_IMPL(__imp__sub_83C35A80) {
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
	// addi r3,r11,17104
	ctx.r3.s64 = ctx.r11.s64 + 17104;
	// bl 0x83523120
	ctx.lr = 0x83C35A98;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,21976
	ctx.r3.s64 = ctx.r10.s64 + 21976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35AA4;
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

__attribute__((alias("__imp__sub_83C35AB4"))) PPC_WEAK_FUNC(sub_83C35AB4);
PPC_FUNC_IMPL(__imp__sub_83C35AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35AB8"))) PPC_WEAK_FUNC(sub_83C35AB8);
PPC_FUNC_IMPL(__imp__sub_83C35AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,21992
	ctx.r3.s64 = ctx.r11.s64 + 21992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35AC4"))) PPC_WEAK_FUNC(sub_83C35AC4);
PPC_FUNC_IMPL(__imp__sub_83C35AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35AC8"))) PPC_WEAK_FUNC(sub_83C35AC8);
PPC_FUNC_IMPL(__imp__sub_83C35AC8) {
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
	// addi r3,r11,17128
	ctx.r3.s64 = ctx.r11.s64 + 17128;
	// bl 0x8259af80
	ctx.lr = 0x83C35AE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22008
	ctx.r3.s64 = ctx.r10.s64 + 22008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35AEC;
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

__attribute__((alias("__imp__sub_83C35AFC"))) PPC_WEAK_FUNC(sub_83C35AFC);
PPC_FUNC_IMPL(__imp__sub_83C35AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35B00"))) PPC_WEAK_FUNC(sub_83C35B00);
PPC_FUNC_IMPL(__imp__sub_83C35B00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17108
	ctx.r11.s64 = ctx.r8.s64 + 17108;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-27400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27400);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22000
	ctx.r3.s64 = ctx.r6.s64 + 22000;
	// stw r10,17108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17108, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35B30"))) PPC_WEAK_FUNC(sub_83C35B30);
PPC_FUNC_IMPL(__imp__sub_83C35B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22120
	ctx.r3.s64 = ctx.r11.s64 + 22120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35B3C"))) PPC_WEAK_FUNC(sub_83C35B3C);
PPC_FUNC_IMPL(__imp__sub_83C35B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35B40"))) PPC_WEAK_FUNC(sub_83C35B40);
PPC_FUNC_IMPL(__imp__sub_83C35B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22128
	ctx.r3.s64 = ctx.r11.s64 + 22128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35B4C"))) PPC_WEAK_FUNC(sub_83C35B4C);
PPC_FUNC_IMPL(__imp__sub_83C35B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35B50"))) PPC_WEAK_FUNC(sub_83C35B50);
PPC_FUNC_IMPL(__imp__sub_83C35B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22136
	ctx.r3.s64 = ctx.r11.s64 + 22136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35B5C"))) PPC_WEAK_FUNC(sub_83C35B5C);
PPC_FUNC_IMPL(__imp__sub_83C35B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35B60"))) PPC_WEAK_FUNC(sub_83C35B60);
PPC_FUNC_IMPL(__imp__sub_83C35B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22144
	ctx.r3.s64 = ctx.r11.s64 + 22144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35B6C"))) PPC_WEAK_FUNC(sub_83C35B6C);
PPC_FUNC_IMPL(__imp__sub_83C35B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35B70"))) PPC_WEAK_FUNC(sub_83C35B70);
PPC_FUNC_IMPL(__imp__sub_83C35B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22152
	ctx.r3.s64 = ctx.r11.s64 + 22152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35B7C"))) PPC_WEAK_FUNC(sub_83C35B7C);
PPC_FUNC_IMPL(__imp__sub_83C35B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35B80"))) PPC_WEAK_FUNC(sub_83C35B80);
PPC_FUNC_IMPL(__imp__sub_83C35B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35B8C"))) PPC_WEAK_FUNC(sub_83C35B8C);
PPC_FUNC_IMPL(__imp__sub_83C35B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35B90"))) PPC_WEAK_FUNC(sub_83C35B90);
PPC_FUNC_IMPL(__imp__sub_83C35B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22168
	ctx.r3.s64 = ctx.r11.s64 + 22168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35B9C"))) PPC_WEAK_FUNC(sub_83C35B9C);
PPC_FUNC_IMPL(__imp__sub_83C35B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35BA0"))) PPC_WEAK_FUNC(sub_83C35BA0);
PPC_FUNC_IMPL(__imp__sub_83C35BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22176
	ctx.r3.s64 = ctx.r11.s64 + 22176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35BAC"))) PPC_WEAK_FUNC(sub_83C35BAC);
PPC_FUNC_IMPL(__imp__sub_83C35BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35BB0"))) PPC_WEAK_FUNC(sub_83C35BB0);
PPC_FUNC_IMPL(__imp__sub_83C35BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22184
	ctx.r3.s64 = ctx.r11.s64 + 22184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35BBC"))) PPC_WEAK_FUNC(sub_83C35BBC);
PPC_FUNC_IMPL(__imp__sub_83C35BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35BC0"))) PPC_WEAK_FUNC(sub_83C35BC0);
PPC_FUNC_IMPL(__imp__sub_83C35BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22192
	ctx.r3.s64 = ctx.r11.s64 + 22192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35BCC"))) PPC_WEAK_FUNC(sub_83C35BCC);
PPC_FUNC_IMPL(__imp__sub_83C35BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35BD0"))) PPC_WEAK_FUNC(sub_83C35BD0);
PPC_FUNC_IMPL(__imp__sub_83C35BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22200
	ctx.r3.s64 = ctx.r11.s64 + 22200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35BDC"))) PPC_WEAK_FUNC(sub_83C35BDC);
PPC_FUNC_IMPL(__imp__sub_83C35BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35BE0"))) PPC_WEAK_FUNC(sub_83C35BE0);
PPC_FUNC_IMPL(__imp__sub_83C35BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22208
	ctx.r3.s64 = ctx.r11.s64 + 22208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35BEC"))) PPC_WEAK_FUNC(sub_83C35BEC);
PPC_FUNC_IMPL(__imp__sub_83C35BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35BF0"))) PPC_WEAK_FUNC(sub_83C35BF0);
PPC_FUNC_IMPL(__imp__sub_83C35BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22216
	ctx.r3.s64 = ctx.r11.s64 + 22216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35BFC"))) PPC_WEAK_FUNC(sub_83C35BFC);
PPC_FUNC_IMPL(__imp__sub_83C35BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C00"))) PPC_WEAK_FUNC(sub_83C35C00);
PPC_FUNC_IMPL(__imp__sub_83C35C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22224
	ctx.r3.s64 = ctx.r11.s64 + 22224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C0C"))) PPC_WEAK_FUNC(sub_83C35C0C);
PPC_FUNC_IMPL(__imp__sub_83C35C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C10"))) PPC_WEAK_FUNC(sub_83C35C10);
PPC_FUNC_IMPL(__imp__sub_83C35C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22232
	ctx.r3.s64 = ctx.r11.s64 + 22232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C1C"))) PPC_WEAK_FUNC(sub_83C35C1C);
PPC_FUNC_IMPL(__imp__sub_83C35C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C20"))) PPC_WEAK_FUNC(sub_83C35C20);
PPC_FUNC_IMPL(__imp__sub_83C35C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22240
	ctx.r3.s64 = ctx.r11.s64 + 22240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C2C"))) PPC_WEAK_FUNC(sub_83C35C2C);
PPC_FUNC_IMPL(__imp__sub_83C35C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C30"))) PPC_WEAK_FUNC(sub_83C35C30);
PPC_FUNC_IMPL(__imp__sub_83C35C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22248
	ctx.r3.s64 = ctx.r11.s64 + 22248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C3C"))) PPC_WEAK_FUNC(sub_83C35C3C);
PPC_FUNC_IMPL(__imp__sub_83C35C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C40"))) PPC_WEAK_FUNC(sub_83C35C40);
PPC_FUNC_IMPL(__imp__sub_83C35C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22256
	ctx.r3.s64 = ctx.r11.s64 + 22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C4C"))) PPC_WEAK_FUNC(sub_83C35C4C);
PPC_FUNC_IMPL(__imp__sub_83C35C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C50"))) PPC_WEAK_FUNC(sub_83C35C50);
PPC_FUNC_IMPL(__imp__sub_83C35C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22264
	ctx.r3.s64 = ctx.r11.s64 + 22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C5C"))) PPC_WEAK_FUNC(sub_83C35C5C);
PPC_FUNC_IMPL(__imp__sub_83C35C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C60"))) PPC_WEAK_FUNC(sub_83C35C60);
PPC_FUNC_IMPL(__imp__sub_83C35C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22272
	ctx.r3.s64 = ctx.r11.s64 + 22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C6C"))) PPC_WEAK_FUNC(sub_83C35C6C);
PPC_FUNC_IMPL(__imp__sub_83C35C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C70"))) PPC_WEAK_FUNC(sub_83C35C70);
PPC_FUNC_IMPL(__imp__sub_83C35C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C7C"))) PPC_WEAK_FUNC(sub_83C35C7C);
PPC_FUNC_IMPL(__imp__sub_83C35C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C80"))) PPC_WEAK_FUNC(sub_83C35C80);
PPC_FUNC_IMPL(__imp__sub_83C35C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22288
	ctx.r3.s64 = ctx.r11.s64 + 22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C8C"))) PPC_WEAK_FUNC(sub_83C35C8C);
PPC_FUNC_IMPL(__imp__sub_83C35C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35C90"))) PPC_WEAK_FUNC(sub_83C35C90);
PPC_FUNC_IMPL(__imp__sub_83C35C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35C9C"))) PPC_WEAK_FUNC(sub_83C35C9C);
PPC_FUNC_IMPL(__imp__sub_83C35C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35CA0"))) PPC_WEAK_FUNC(sub_83C35CA0);
PPC_FUNC_IMPL(__imp__sub_83C35CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35CAC"))) PPC_WEAK_FUNC(sub_83C35CAC);
PPC_FUNC_IMPL(__imp__sub_83C35CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35CB0"))) PPC_WEAK_FUNC(sub_83C35CB0);
PPC_FUNC_IMPL(__imp__sub_83C35CB0) {
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
	// addi r3,r11,17484
	ctx.r3.s64 = ctx.r11.s64 + 17484;
	// bl 0x83523120
	ctx.lr = 0x83C35CC8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22312
	ctx.r3.s64 = ctx.r10.s64 + 22312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35CD4;
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

__attribute__((alias("__imp__sub_83C35CE4"))) PPC_WEAK_FUNC(sub_83C35CE4);
PPC_FUNC_IMPL(__imp__sub_83C35CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35CE8"))) PPC_WEAK_FUNC(sub_83C35CE8);
PPC_FUNC_IMPL(__imp__sub_83C35CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17500
	ctx.r7.s64 = ctx.r8.s64 + 17500;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17500);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17500, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35D10"))) PPC_WEAK_FUNC(sub_83C35D10);
PPC_FUNC_IMPL(__imp__sub_83C35D10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-27116
	ctx.r6.s64 = ctx.r7.s64 + -27116;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27188(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27188);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17500(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17500);
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
	// std r9,-27116(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27116, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35D58"))) PPC_WEAK_FUNC(sub_83C35D58);
PPC_FUNC_IMPL(__imp__sub_83C35D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22328
	ctx.r3.s64 = ctx.r11.s64 + 22328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35D64"))) PPC_WEAK_FUNC(sub_83C35D64);
PPC_FUNC_IMPL(__imp__sub_83C35D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35D68"))) PPC_WEAK_FUNC(sub_83C35D68);
PPC_FUNC_IMPL(__imp__sub_83C35D68) {
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
	// addi r3,r11,17512
	ctx.r3.s64 = ctx.r11.s64 + 17512;
	// bl 0x8259af80
	ctx.lr = 0x83C35D80;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22344
	ctx.r3.s64 = ctx.r10.s64 + 22344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35D8C;
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

__attribute__((alias("__imp__sub_83C35D9C"))) PPC_WEAK_FUNC(sub_83C35D9C);
PPC_FUNC_IMPL(__imp__sub_83C35D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35DA0"))) PPC_WEAK_FUNC(sub_83C35DA0);
PPC_FUNC_IMPL(__imp__sub_83C35DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17488
	ctx.r11.s64 = ctx.r8.s64 + 17488;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-27140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27140);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22336
	ctx.r3.s64 = ctx.r6.s64 + 22336;
	// stw r10,17488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17488, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35DD0"))) PPC_WEAK_FUNC(sub_83C35DD0);
PPC_FUNC_IMPL(__imp__sub_83C35DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22352
	ctx.r3.s64 = ctx.r11.s64 + 22352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35DDC"))) PPC_WEAK_FUNC(sub_83C35DDC);
PPC_FUNC_IMPL(__imp__sub_83C35DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35DE0"))) PPC_WEAK_FUNC(sub_83C35DE0);
PPC_FUNC_IMPL(__imp__sub_83C35DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22360
	ctx.r3.s64 = ctx.r11.s64 + 22360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35DEC"))) PPC_WEAK_FUNC(sub_83C35DEC);
PPC_FUNC_IMPL(__imp__sub_83C35DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35DF0"))) PPC_WEAK_FUNC(sub_83C35DF0);
PPC_FUNC_IMPL(__imp__sub_83C35DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22368
	ctx.r3.s64 = ctx.r11.s64 + 22368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35DFC"))) PPC_WEAK_FUNC(sub_83C35DFC);
PPC_FUNC_IMPL(__imp__sub_83C35DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E00"))) PPC_WEAK_FUNC(sub_83C35E00);
PPC_FUNC_IMPL(__imp__sub_83C35E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22376
	ctx.r3.s64 = ctx.r11.s64 + 22376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E0C"))) PPC_WEAK_FUNC(sub_83C35E0C);
PPC_FUNC_IMPL(__imp__sub_83C35E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E10"))) PPC_WEAK_FUNC(sub_83C35E10);
PPC_FUNC_IMPL(__imp__sub_83C35E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E1C"))) PPC_WEAK_FUNC(sub_83C35E1C);
PPC_FUNC_IMPL(__imp__sub_83C35E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E20"))) PPC_WEAK_FUNC(sub_83C35E20);
PPC_FUNC_IMPL(__imp__sub_83C35E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22392
	ctx.r3.s64 = ctx.r11.s64 + 22392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E2C"))) PPC_WEAK_FUNC(sub_83C35E2C);
PPC_FUNC_IMPL(__imp__sub_83C35E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E30"))) PPC_WEAK_FUNC(sub_83C35E30);
PPC_FUNC_IMPL(__imp__sub_83C35E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22400
	ctx.r3.s64 = ctx.r11.s64 + 22400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E3C"))) PPC_WEAK_FUNC(sub_83C35E3C);
PPC_FUNC_IMPL(__imp__sub_83C35E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E40"))) PPC_WEAK_FUNC(sub_83C35E40);
PPC_FUNC_IMPL(__imp__sub_83C35E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22408
	ctx.r3.s64 = ctx.r11.s64 + 22408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E4C"))) PPC_WEAK_FUNC(sub_83C35E4C);
PPC_FUNC_IMPL(__imp__sub_83C35E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E50"))) PPC_WEAK_FUNC(sub_83C35E50);
PPC_FUNC_IMPL(__imp__sub_83C35E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E5C"))) PPC_WEAK_FUNC(sub_83C35E5C);
PPC_FUNC_IMPL(__imp__sub_83C35E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E60"))) PPC_WEAK_FUNC(sub_83C35E60);
PPC_FUNC_IMPL(__imp__sub_83C35E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22424
	ctx.r3.s64 = ctx.r11.s64 + 22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E6C"))) PPC_WEAK_FUNC(sub_83C35E6C);
PPC_FUNC_IMPL(__imp__sub_83C35E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E70"))) PPC_WEAK_FUNC(sub_83C35E70);
PPC_FUNC_IMPL(__imp__sub_83C35E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22432
	ctx.r3.s64 = ctx.r11.s64 + 22432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E7C"))) PPC_WEAK_FUNC(sub_83C35E7C);
PPC_FUNC_IMPL(__imp__sub_83C35E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

