#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CA4140"))) PPC_WEAK_FUNC(sub_83CA4140);
PPC_FUNC_IMPL(__imp__sub_83CA4140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18496
	ctx.r3.s64 = ctx.r11.s64 + -18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA414C"))) PPC_WEAK_FUNC(sub_83CA414C);
PPC_FUNC_IMPL(__imp__sub_83CA414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4150"))) PPC_WEAK_FUNC(sub_83CA4150);
PPC_FUNC_IMPL(__imp__sub_83CA4150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA415C"))) PPC_WEAK_FUNC(sub_83CA415C);
PPC_FUNC_IMPL(__imp__sub_83CA415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4160"))) PPC_WEAK_FUNC(sub_83CA4160);
PPC_FUNC_IMPL(__imp__sub_83CA4160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18480
	ctx.r3.s64 = ctx.r11.s64 + -18480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA416C"))) PPC_WEAK_FUNC(sub_83CA416C);
PPC_FUNC_IMPL(__imp__sub_83CA416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4170"))) PPC_WEAK_FUNC(sub_83CA4170);
PPC_FUNC_IMPL(__imp__sub_83CA4170) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19060
	ctx.r3.s64 = ctx.r11.s64 + 19060;
	// bl 0x83523120
	ctx.lr = 0x83CA4188;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18472
	ctx.r3.s64 = ctx.r10.s64 + -18472;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA4194;
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

__attribute__((alias("__imp__sub_83CA41A4"))) PPC_WEAK_FUNC(sub_83CA41A4);
PPC_FUNC_IMPL(__imp__sub_83CA41A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA41A8"))) PPC_WEAK_FUNC(sub_83CA41A8);
PPC_FUNC_IMPL(__imp__sub_83CA41A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23444
	ctx.r4.s64 = ctx.r11.s64 + 23444;
	// lis r7,-31744
	ctx.r7.s64 = -2080374784;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,19068
	ctx.r3.s64 = ctx.r7.s64 + 19068;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA41D8"))) PPC_WEAK_FUNC(sub_83CA41D8);
PPC_FUNC_IMPL(__imp__sub_83CA41D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18456
	ctx.r3.s64 = ctx.r11.s64 + -18456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA41E4"))) PPC_WEAK_FUNC(sub_83CA41E4);
PPC_FUNC_IMPL(__imp__sub_83CA41E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA41E8"))) PPC_WEAK_FUNC(sub_83CA41E8);
PPC_FUNC_IMPL(__imp__sub_83CA41E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18448
	ctx.r3.s64 = ctx.r11.s64 + -18448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA41F4"))) PPC_WEAK_FUNC(sub_83CA41F4);
PPC_FUNC_IMPL(__imp__sub_83CA41F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA41F8"))) PPC_WEAK_FUNC(sub_83CA41F8);
PPC_FUNC_IMPL(__imp__sub_83CA41F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18440
	ctx.r3.s64 = ctx.r11.s64 + -18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4204"))) PPC_WEAK_FUNC(sub_83CA4204);
PPC_FUNC_IMPL(__imp__sub_83CA4204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4208"))) PPC_WEAK_FUNC(sub_83CA4208);
PPC_FUNC_IMPL(__imp__sub_83CA4208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18432
	ctx.r3.s64 = ctx.r11.s64 + -18432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4214"))) PPC_WEAK_FUNC(sub_83CA4214);
PPC_FUNC_IMPL(__imp__sub_83CA4214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4218"))) PPC_WEAK_FUNC(sub_83CA4218);
PPC_FUNC_IMPL(__imp__sub_83CA4218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18424
	ctx.r3.s64 = ctx.r11.s64 + -18424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4224"))) PPC_WEAK_FUNC(sub_83CA4224);
PPC_FUNC_IMPL(__imp__sub_83CA4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4228"))) PPC_WEAK_FUNC(sub_83CA4228);
PPC_FUNC_IMPL(__imp__sub_83CA4228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18416
	ctx.r3.s64 = ctx.r11.s64 + -18416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4234"))) PPC_WEAK_FUNC(sub_83CA4234);
PPC_FUNC_IMPL(__imp__sub_83CA4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4238"))) PPC_WEAK_FUNC(sub_83CA4238);
PPC_FUNC_IMPL(__imp__sub_83CA4238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18408
	ctx.r3.s64 = ctx.r11.s64 + -18408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4244"))) PPC_WEAK_FUNC(sub_83CA4244);
PPC_FUNC_IMPL(__imp__sub_83CA4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4248"))) PPC_WEAK_FUNC(sub_83CA4248);
PPC_FUNC_IMPL(__imp__sub_83CA4248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18400
	ctx.r3.s64 = ctx.r11.s64 + -18400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4254"))) PPC_WEAK_FUNC(sub_83CA4254);
PPC_FUNC_IMPL(__imp__sub_83CA4254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4258"))) PPC_WEAK_FUNC(sub_83CA4258);
PPC_FUNC_IMPL(__imp__sub_83CA4258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18392
	ctx.r3.s64 = ctx.r11.s64 + -18392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4264"))) PPC_WEAK_FUNC(sub_83CA4264);
PPC_FUNC_IMPL(__imp__sub_83CA4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4268"))) PPC_WEAK_FUNC(sub_83CA4268);
PPC_FUNC_IMPL(__imp__sub_83CA4268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18384
	ctx.r3.s64 = ctx.r11.s64 + -18384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4274"))) PPC_WEAK_FUNC(sub_83CA4274);
PPC_FUNC_IMPL(__imp__sub_83CA4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4278"))) PPC_WEAK_FUNC(sub_83CA4278);
PPC_FUNC_IMPL(__imp__sub_83CA4278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18376
	ctx.r3.s64 = ctx.r11.s64 + -18376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4284"))) PPC_WEAK_FUNC(sub_83CA4284);
PPC_FUNC_IMPL(__imp__sub_83CA4284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4288"))) PPC_WEAK_FUNC(sub_83CA4288);
PPC_FUNC_IMPL(__imp__sub_83CA4288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18368
	ctx.r3.s64 = ctx.r11.s64 + -18368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4294"))) PPC_WEAK_FUNC(sub_83CA4294);
PPC_FUNC_IMPL(__imp__sub_83CA4294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4298"))) PPC_WEAK_FUNC(sub_83CA4298);
PPC_FUNC_IMPL(__imp__sub_83CA4298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,23780
	ctx.r4.s64 = ctx.r11.s64 + 23780;
	// lis r7,-31744
	ctx.r7.s64 = -2080374784;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,19084
	ctx.r3.s64 = ctx.r7.s64 + 19084;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA42C8"))) PPC_WEAK_FUNC(sub_83CA42C8);
PPC_FUNC_IMPL(__imp__sub_83CA42C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18360
	ctx.r3.s64 = ctx.r11.s64 + -18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA42D4"))) PPC_WEAK_FUNC(sub_83CA42D4);
PPC_FUNC_IMPL(__imp__sub_83CA42D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA42D8"))) PPC_WEAK_FUNC(sub_83CA42D8);
PPC_FUNC_IMPL(__imp__sub_83CA42D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA42E4"))) PPC_WEAK_FUNC(sub_83CA42E4);
PPC_FUNC_IMPL(__imp__sub_83CA42E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA42E8"))) PPC_WEAK_FUNC(sub_83CA42E8);
PPC_FUNC_IMPL(__imp__sub_83CA42E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA42F4"))) PPC_WEAK_FUNC(sub_83CA42F4);
PPC_FUNC_IMPL(__imp__sub_83CA42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA42F8"))) PPC_WEAK_FUNC(sub_83CA42F8);
PPC_FUNC_IMPL(__imp__sub_83CA42F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18336
	ctx.r3.s64 = ctx.r11.s64 + -18336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4304"))) PPC_WEAK_FUNC(sub_83CA4304);
PPC_FUNC_IMPL(__imp__sub_83CA4304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4308"))) PPC_WEAK_FUNC(sub_83CA4308);
PPC_FUNC_IMPL(__imp__sub_83CA4308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4314"))) PPC_WEAK_FUNC(sub_83CA4314);
PPC_FUNC_IMPL(__imp__sub_83CA4314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4318"))) PPC_WEAK_FUNC(sub_83CA4318);
PPC_FUNC_IMPL(__imp__sub_83CA4318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18320
	ctx.r3.s64 = ctx.r11.s64 + -18320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4324"))) PPC_WEAK_FUNC(sub_83CA4324);
PPC_FUNC_IMPL(__imp__sub_83CA4324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4328"))) PPC_WEAK_FUNC(sub_83CA4328);
PPC_FUNC_IMPL(__imp__sub_83CA4328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18312
	ctx.r3.s64 = ctx.r11.s64 + -18312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4334"))) PPC_WEAK_FUNC(sub_83CA4334);
PPC_FUNC_IMPL(__imp__sub_83CA4334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4338"))) PPC_WEAK_FUNC(sub_83CA4338);
PPC_FUNC_IMPL(__imp__sub_83CA4338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18304
	ctx.r3.s64 = ctx.r11.s64 + -18304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4344"))) PPC_WEAK_FUNC(sub_83CA4344);
PPC_FUNC_IMPL(__imp__sub_83CA4344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4348"))) PPC_WEAK_FUNC(sub_83CA4348);
PPC_FUNC_IMPL(__imp__sub_83CA4348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18296
	ctx.r3.s64 = ctx.r11.s64 + -18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4354"))) PPC_WEAK_FUNC(sub_83CA4354);
PPC_FUNC_IMPL(__imp__sub_83CA4354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4358"))) PPC_WEAK_FUNC(sub_83CA4358);
PPC_FUNC_IMPL(__imp__sub_83CA4358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18288
	ctx.r3.s64 = ctx.r11.s64 + -18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4364"))) PPC_WEAK_FUNC(sub_83CA4364);
PPC_FUNC_IMPL(__imp__sub_83CA4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4368"))) PPC_WEAK_FUNC(sub_83CA4368);
PPC_FUNC_IMPL(__imp__sub_83CA4368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18280
	ctx.r3.s64 = ctx.r11.s64 + -18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4374"))) PPC_WEAK_FUNC(sub_83CA4374);
PPC_FUNC_IMPL(__imp__sub_83CA4374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4378"))) PPC_WEAK_FUNC(sub_83CA4378);
PPC_FUNC_IMPL(__imp__sub_83CA4378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18272
	ctx.r3.s64 = ctx.r11.s64 + -18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4384"))) PPC_WEAK_FUNC(sub_83CA4384);
PPC_FUNC_IMPL(__imp__sub_83CA4384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4388"))) PPC_WEAK_FUNC(sub_83CA4388);
PPC_FUNC_IMPL(__imp__sub_83CA4388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18264
	ctx.r3.s64 = ctx.r11.s64 + -18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4394"))) PPC_WEAK_FUNC(sub_83CA4394);
PPC_FUNC_IMPL(__imp__sub_83CA4394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4398"))) PPC_WEAK_FUNC(sub_83CA4398);
PPC_FUNC_IMPL(__imp__sub_83CA4398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18256
	ctx.r3.s64 = ctx.r11.s64 + -18256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA43A4"))) PPC_WEAK_FUNC(sub_83CA43A4);
PPC_FUNC_IMPL(__imp__sub_83CA43A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA43A8"))) PPC_WEAK_FUNC(sub_83CA43A8);
PPC_FUNC_IMPL(__imp__sub_83CA43A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18248
	ctx.r3.s64 = ctx.r11.s64 + -18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA43B4"))) PPC_WEAK_FUNC(sub_83CA43B4);
PPC_FUNC_IMPL(__imp__sub_83CA43B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA43B8"))) PPC_WEAK_FUNC(sub_83CA43B8);
PPC_FUNC_IMPL(__imp__sub_83CA43B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18240
	ctx.r3.s64 = ctx.r11.s64 + -18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA43C4"))) PPC_WEAK_FUNC(sub_83CA43C4);
PPC_FUNC_IMPL(__imp__sub_83CA43C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA43C8"))) PPC_WEAK_FUNC(sub_83CA43C8);
PPC_FUNC_IMPL(__imp__sub_83CA43C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18232
	ctx.r3.s64 = ctx.r11.s64 + -18232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA43D4"))) PPC_WEAK_FUNC(sub_83CA43D4);
PPC_FUNC_IMPL(__imp__sub_83CA43D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA43D8"))) PPC_WEAK_FUNC(sub_83CA43D8);
PPC_FUNC_IMPL(__imp__sub_83CA43D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18224
	ctx.r3.s64 = ctx.r11.s64 + -18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA43E4"))) PPC_WEAK_FUNC(sub_83CA43E4);
PPC_FUNC_IMPL(__imp__sub_83CA43E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA43E8"))) PPC_WEAK_FUNC(sub_83CA43E8);
PPC_FUNC_IMPL(__imp__sub_83CA43E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18216
	ctx.r3.s64 = ctx.r11.s64 + -18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA43F4"))) PPC_WEAK_FUNC(sub_83CA43F4);
PPC_FUNC_IMPL(__imp__sub_83CA43F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA43F8"))) PPC_WEAK_FUNC(sub_83CA43F8);
PPC_FUNC_IMPL(__imp__sub_83CA43F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18208
	ctx.r3.s64 = ctx.r11.s64 + -18208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4404"))) PPC_WEAK_FUNC(sub_83CA4404);
PPC_FUNC_IMPL(__imp__sub_83CA4404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4408"))) PPC_WEAK_FUNC(sub_83CA4408);
PPC_FUNC_IMPL(__imp__sub_83CA4408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18200
	ctx.r3.s64 = ctx.r11.s64 + -18200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4414"))) PPC_WEAK_FUNC(sub_83CA4414);
PPC_FUNC_IMPL(__imp__sub_83CA4414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4418"))) PPC_WEAK_FUNC(sub_83CA4418);
PPC_FUNC_IMPL(__imp__sub_83CA4418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18192
	ctx.r3.s64 = ctx.r11.s64 + -18192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4424"))) PPC_WEAK_FUNC(sub_83CA4424);
PPC_FUNC_IMPL(__imp__sub_83CA4424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4428"))) PPC_WEAK_FUNC(sub_83CA4428);
PPC_FUNC_IMPL(__imp__sub_83CA4428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18184
	ctx.r3.s64 = ctx.r11.s64 + -18184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4434"))) PPC_WEAK_FUNC(sub_83CA4434);
PPC_FUNC_IMPL(__imp__sub_83CA4434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4438"))) PPC_WEAK_FUNC(sub_83CA4438);
PPC_FUNC_IMPL(__imp__sub_83CA4438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18176
	ctx.r3.s64 = ctx.r11.s64 + -18176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4444"))) PPC_WEAK_FUNC(sub_83CA4444);
PPC_FUNC_IMPL(__imp__sub_83CA4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4448"))) PPC_WEAK_FUNC(sub_83CA4448);
PPC_FUNC_IMPL(__imp__sub_83CA4448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18168
	ctx.r3.s64 = ctx.r11.s64 + -18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4454"))) PPC_WEAK_FUNC(sub_83CA4454);
PPC_FUNC_IMPL(__imp__sub_83CA4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4458"))) PPC_WEAK_FUNC(sub_83CA4458);
PPC_FUNC_IMPL(__imp__sub_83CA4458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18160
	ctx.r3.s64 = ctx.r11.s64 + -18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4464"))) PPC_WEAK_FUNC(sub_83CA4464);
PPC_FUNC_IMPL(__imp__sub_83CA4464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4468"))) PPC_WEAK_FUNC(sub_83CA4468);
PPC_FUNC_IMPL(__imp__sub_83CA4468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18152
	ctx.r3.s64 = ctx.r11.s64 + -18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4474"))) PPC_WEAK_FUNC(sub_83CA4474);
PPC_FUNC_IMPL(__imp__sub_83CA4474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4478"))) PPC_WEAK_FUNC(sub_83CA4478);
PPC_FUNC_IMPL(__imp__sub_83CA4478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18144
	ctx.r3.s64 = ctx.r11.s64 + -18144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4484"))) PPC_WEAK_FUNC(sub_83CA4484);
PPC_FUNC_IMPL(__imp__sub_83CA4484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4488"))) PPC_WEAK_FUNC(sub_83CA4488);
PPC_FUNC_IMPL(__imp__sub_83CA4488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18136
	ctx.r3.s64 = ctx.r11.s64 + -18136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4494"))) PPC_WEAK_FUNC(sub_83CA4494);
PPC_FUNC_IMPL(__imp__sub_83CA4494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4498"))) PPC_WEAK_FUNC(sub_83CA4498);
PPC_FUNC_IMPL(__imp__sub_83CA4498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA44A4"))) PPC_WEAK_FUNC(sub_83CA44A4);
PPC_FUNC_IMPL(__imp__sub_83CA44A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA44A8"))) PPC_WEAK_FUNC(sub_83CA44A8);
PPC_FUNC_IMPL(__imp__sub_83CA44A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18120
	ctx.r3.s64 = ctx.r11.s64 + -18120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA44B4"))) PPC_WEAK_FUNC(sub_83CA44B4);
PPC_FUNC_IMPL(__imp__sub_83CA44B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA44B8"))) PPC_WEAK_FUNC(sub_83CA44B8);
PPC_FUNC_IMPL(__imp__sub_83CA44B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18112
	ctx.r3.s64 = ctx.r11.s64 + -18112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA44C4"))) PPC_WEAK_FUNC(sub_83CA44C4);
PPC_FUNC_IMPL(__imp__sub_83CA44C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA44C8"))) PPC_WEAK_FUNC(sub_83CA44C8);
PPC_FUNC_IMPL(__imp__sub_83CA44C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18104
	ctx.r3.s64 = ctx.r11.s64 + -18104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA44D4"))) PPC_WEAK_FUNC(sub_83CA44D4);
PPC_FUNC_IMPL(__imp__sub_83CA44D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA44D8"))) PPC_WEAK_FUNC(sub_83CA44D8);
PPC_FUNC_IMPL(__imp__sub_83CA44D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18096
	ctx.r3.s64 = ctx.r11.s64 + -18096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA44E4"))) PPC_WEAK_FUNC(sub_83CA44E4);
PPC_FUNC_IMPL(__imp__sub_83CA44E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA44E8"))) PPC_WEAK_FUNC(sub_83CA44E8);
PPC_FUNC_IMPL(__imp__sub_83CA44E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18088
	ctx.r3.s64 = ctx.r11.s64 + -18088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA44F4"))) PPC_WEAK_FUNC(sub_83CA44F4);
PPC_FUNC_IMPL(__imp__sub_83CA44F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA44F8"))) PPC_WEAK_FUNC(sub_83CA44F8);
PPC_FUNC_IMPL(__imp__sub_83CA44F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18080
	ctx.r3.s64 = ctx.r11.s64 + -18080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4504"))) PPC_WEAK_FUNC(sub_83CA4504);
PPC_FUNC_IMPL(__imp__sub_83CA4504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4508"))) PPC_WEAK_FUNC(sub_83CA4508);
PPC_FUNC_IMPL(__imp__sub_83CA4508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,24340
	ctx.r4.s64 = ctx.r11.s64 + 24340;
	// lis r7,-31744
	ctx.r7.s64 = -2080374784;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,19112
	ctx.r3.s64 = ctx.r7.s64 + 19112;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4538"))) PPC_WEAK_FUNC(sub_83CA4538);
PPC_FUNC_IMPL(__imp__sub_83CA4538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18072
	ctx.r3.s64 = ctx.r11.s64 + -18072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4544"))) PPC_WEAK_FUNC(sub_83CA4544);
PPC_FUNC_IMPL(__imp__sub_83CA4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4548"))) PPC_WEAK_FUNC(sub_83CA4548);
PPC_FUNC_IMPL(__imp__sub_83CA4548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18064
	ctx.r3.s64 = ctx.r11.s64 + -18064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4554"))) PPC_WEAK_FUNC(sub_83CA4554);
PPC_FUNC_IMPL(__imp__sub_83CA4554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4558"))) PPC_WEAK_FUNC(sub_83CA4558);
PPC_FUNC_IMPL(__imp__sub_83CA4558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18056
	ctx.r3.s64 = ctx.r11.s64 + -18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4564"))) PPC_WEAK_FUNC(sub_83CA4564);
PPC_FUNC_IMPL(__imp__sub_83CA4564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4568"))) PPC_WEAK_FUNC(sub_83CA4568);
PPC_FUNC_IMPL(__imp__sub_83CA4568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18048
	ctx.r3.s64 = ctx.r11.s64 + -18048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4574"))) PPC_WEAK_FUNC(sub_83CA4574);
PPC_FUNC_IMPL(__imp__sub_83CA4574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4578"))) PPC_WEAK_FUNC(sub_83CA4578);
PPC_FUNC_IMPL(__imp__sub_83CA4578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18040
	ctx.r3.s64 = ctx.r11.s64 + -18040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4584"))) PPC_WEAK_FUNC(sub_83CA4584);
PPC_FUNC_IMPL(__imp__sub_83CA4584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4588"))) PPC_WEAK_FUNC(sub_83CA4588);
PPC_FUNC_IMPL(__imp__sub_83CA4588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18032
	ctx.r3.s64 = ctx.r11.s64 + -18032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA4594"))) PPC_WEAK_FUNC(sub_83CA4594);
PPC_FUNC_IMPL(__imp__sub_83CA4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4598"))) PPC_WEAK_FUNC(sub_83CA4598);
PPC_FUNC_IMPL(__imp__sub_83CA4598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18024
	ctx.r3.s64 = ctx.r11.s64 + -18024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA45A4"))) PPC_WEAK_FUNC(sub_83CA45A4);
PPC_FUNC_IMPL(__imp__sub_83CA45A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA45A8"))) PPC_WEAK_FUNC(sub_83CA45A8);
PPC_FUNC_IMPL(__imp__sub_83CA45A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18016
	ctx.r3.s64 = ctx.r11.s64 + -18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA45B4"))) PPC_WEAK_FUNC(sub_83CA45B4);
PPC_FUNC_IMPL(__imp__sub_83CA45B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA45B8"))) PPC_WEAK_FUNC(sub_83CA45B8);
PPC_FUNC_IMPL(__imp__sub_83CA45B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18008
	ctx.r3.s64 = ctx.r11.s64 + -18008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA45C4"))) PPC_WEAK_FUNC(sub_83CA45C4);
PPC_FUNC_IMPL(__imp__sub_83CA45C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA45C8"))) PPC_WEAK_FUNC(sub_83CA45C8);
PPC_FUNC_IMPL(__imp__sub_83CA45C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18000
	ctx.r3.s64 = ctx.r11.s64 + -18000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA45D4"))) PPC_WEAK_FUNC(sub_83CA45D4);
PPC_FUNC_IMPL(__imp__sub_83CA45D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA45D8"))) PPC_WEAK_FUNC(sub_83CA45D8);
PPC_FUNC_IMPL(__imp__sub_83CA45D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA45E4"))) PPC_WEAK_FUNC(sub_83CA45E4);
PPC_FUNC_IMPL(__imp__sub_83CA45E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA45E8"))) PPC_WEAK_FUNC(sub_83CA45E8);
PPC_FUNC_IMPL(__imp__sub_83CA45E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17984
	ctx.r3.s64 = ctx.r11.s64 + -17984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA45F4"))) PPC_WEAK_FUNC(sub_83CA45F4);
PPC_FUNC_IMPL(__imp__sub_83CA45F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA45F8"))) PPC_WEAK_FUNC(sub_83CA45F8);
PPC_FUNC_IMPL(__imp__sub_83CA45F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,24604
	ctx.r31.s64 = ctx.r11.s64 + 24604;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4620;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fd908
	ctx.lr = 0x83CA462C;
	sub_835FD908(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4634;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA463C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4648;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fd908
	ctx.lr = 0x83CA4654;
	sub_835FD908(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA465C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA4664;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4670;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fd908
	ctx.lr = 0x83CA467C;
	sub_835FD908(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4684;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA468C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4698;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fd908
	ctx.lr = 0x83CA46A4;
	sub_835FD908(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA46AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA46B4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA46C0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd908
	ctx.lr = 0x83CA46CC;
	sub_835FD908(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA46D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA46DC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fd908
	ctx.lr = 0x83CA46E4;
	sub_835FD908(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25320
	ctx.r3.s64 = ctx.r10.s64 + -25320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA4714;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA472C"))) PPC_WEAK_FUNC(sub_83CA472C);
PPC_FUNC_IMPL(__imp__sub_83CA472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4730"))) PPC_WEAK_FUNC(sub_83CA4730);
PPC_FUNC_IMPL(__imp__sub_83CA4730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r31,r11,24756
	ctx.r31.s64 = ctx.r11.s64 + 24756;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4758;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA4764;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA476C;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CA4774;
	sub_82573C50(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4780;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA478C;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4794;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA479C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CA47A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA47B4;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA47BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CA47C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA47D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA47DC;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA47E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA47EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CA47F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA4804;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA480C;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CA4814;
	sub_82573C50(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4820;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA482C;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4834;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA483C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4848;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA4854;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA485C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA4864;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4870;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA487C;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4884;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA488C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4898;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA48A4;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA48AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CA48B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CA48C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA48CC;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA48D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CA48DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CA48E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA48F4;
	sub_835F9CA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA48FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CA4904;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4910;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA491C;
	sub_835F9CA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4924;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CA492C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9ca8
	ctx.lr = 0x83CA4934;
	sub_835F9CA8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r8,r10,-25326
	ctx.r8.s64 = ctx.r10.s64 + -25326;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA49A0;
	sub_825731E0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA49B8"))) PPC_WEAK_FUNC(sub_83CA49B8);
PPC_FUNC_IMPL(__imp__sub_83CA49B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,24788
	ctx.r31.s64 = ctx.r11.s64 + 24788;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CA49E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9d18
	ctx.lr = 0x83CA49EC;
	sub_835F9D18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA49F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA49FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4A08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9d18
	ctx.lr = 0x83CA4A14;
	sub_835F9D18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4A1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA4A24;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4A30;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9d18
	ctx.lr = 0x83CA4A3C;
	sub_835F9D18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4A44;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA4A4C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9d18
	ctx.lr = 0x83CA4A54;
	sub_835F9D18(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25308
	ctx.r3.s64 = ctx.r10.s64 + -25308;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA4A78;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA4A90"))) PPC_WEAK_FUNC(sub_83CA4A90);
PPC_FUNC_IMPL(__imp__sub_83CA4A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,24804
	ctx.r31.s64 = ctx.r11.s64 + 24804;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4AB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9d88
	ctx.lr = 0x83CA4AC4;
	sub_835F9D88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4ACC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA4AD4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4AE0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9d88
	ctx.lr = 0x83CA4AEC;
	sub_835F9D88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4AF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA4AFC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9d88
	ctx.lr = 0x83CA4B04;
	sub_835F9D88(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25203
	ctx.r3.s64 = ctx.r10.s64 + -25203;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA4B24;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA4B3C"))) PPC_WEAK_FUNC(sub_83CA4B3C);
PPC_FUNC_IMPL(__imp__sub_83CA4B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4B40"))) PPC_WEAK_FUNC(sub_83CA4B40);
PPC_FUNC_IMPL(__imp__sub_83CA4B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,24968
	ctx.r31.s64 = ctx.r11.s64 + 24968;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4B68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4B74;
	sub_835F9DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4B7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA4B84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4B90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4B9C;
	sub_835F9DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4BA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA4BAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4BB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4BC4;
	sub_835F9DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4BCC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA4BD4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4BE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4BEC;
	sub_835F9DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4BF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CA4BFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4C08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4C14;
	sub_835F9DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4C1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA4C24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4C30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4C3C;
	sub_835F9DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4C44;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA4C4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4C58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4C64;
	sub_835F9DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4C6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA4C74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4C80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4C8C;
	sub_835F9DF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4C94;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CA4C9C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4CA8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4CB4;
	sub_835F9DF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4CBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CA4CC4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9df8
	ctx.lr = 0x83CA4CCC;
	sub_835F9DF8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r3,r10,-25265
	ctx.r3.s64 = ctx.r10.s64 + -25265;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA4D1C;
	sub_825731E0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA4D34"))) PPC_WEAK_FUNC(sub_83CA4D34);
PPC_FUNC_IMPL(__imp__sub_83CA4D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4D38"))) PPC_WEAK_FUNC(sub_83CA4D38);
PPC_FUNC_IMPL(__imp__sub_83CA4D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,25004
	ctx.r31.s64 = ctx.r11.s64 + 25004;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4D60;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835f9e68
	ctx.lr = 0x83CA4D6C;
	sub_835F9E68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4D74;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA4D7C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4D88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9e68
	ctx.lr = 0x83CA4D94;
	sub_835F9E68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4D9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA4DA4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4DB0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9e68
	ctx.lr = 0x83CA4DBC;
	sub_835F9E68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4DC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA4DCC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4DD8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9e68
	ctx.lr = 0x83CA4DE4;
	sub_835F9E68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4DEC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA4DF4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9e68
	ctx.lr = 0x83CA4DFC;
	sub_835F9E68(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25315
	ctx.r3.s64 = ctx.r10.s64 + -25315;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA4E24;
	sub_825731E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA4E3C"))) PPC_WEAK_FUNC(sub_83CA4E3C);
PPC_FUNC_IMPL(__imp__sub_83CA4E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4E40"))) PPC_WEAK_FUNC(sub_83CA4E40);
PPC_FUNC_IMPL(__imp__sub_83CA4E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2096(r1)
	ea = -2096 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// addi r31,r11,26496
	ctx.r31.s64 = ctx.r11.s64 + 26496;
	// addi r4,r31,-1484
	ctx.r4.s64 = ctx.r31.s64 + -1484;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4E68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4E74;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4E7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82573c50
	ctx.lr = 0x83CA4E84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1460
	ctx.r4.s64 = ctx.r31.s64 + -1460;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4E90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,82
	ctx.r3.s64 = 82;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4E9C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4EA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82573c50
	ctx.lr = 0x83CA4EAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1436
	ctx.r4.s64 = ctx.r31.s64 + -1436;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4EB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,81
	ctx.r3.s64 = 81;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4EC4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4ECC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82573c50
	ctx.lr = 0x83CA4ED4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1408
	ctx.r4.s64 = ctx.r31.s64 + -1408;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4EE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4EEC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4EF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82573c50
	ctx.lr = 0x83CA4EFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1384
	ctx.r4.s64 = ctx.r31.s64 + -1384;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4F08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,79
	ctx.r3.s64 = 79;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4F14;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4F1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82573c50
	ctx.lr = 0x83CA4F24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1360
	ctx.r4.s64 = ctx.r31.s64 + -1360;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4F30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4F3C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4F44;
	sub_82573D70(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82573c50
	ctx.lr = 0x83CA4F4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1336
	ctx.r4.s64 = ctx.r31.s64 + -1336;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4F58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,77
	ctx.r3.s64 = 77;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4F64;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4F6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82573c50
	ctx.lr = 0x83CA4F74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1312
	ctx.r4.s64 = ctx.r31.s64 + -1312;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4F80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4F8C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4F94;
	sub_82573D70(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82573c50
	ctx.lr = 0x83CA4F9C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1304
	ctx.r4.s64 = ctx.r31.s64 + -1304;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4FA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4FB4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4FBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82573c50
	ctx.lr = 0x83CA4FC4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1284
	ctx.r4.s64 = ctx.r31.s64 + -1284;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4FD0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,74
	ctx.r3.s64 = 74;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA4FDC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA4FE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82573c50
	ctx.lr = 0x83CA4FEC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1268
	ctx.r4.s64 = ctx.r31.s64 + -1268;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82573ce0
	ctx.lr = 0x83CA4FF8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5004;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA500C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82573c50
	ctx.lr = 0x83CA5014;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1248
	ctx.r4.s64 = ctx.r31.s64 + -1248;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5020;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA502C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5034;
	sub_82573D70(ctx, base);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82573c50
	ctx.lr = 0x83CA503C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1236
	ctx.r4.s64 = ctx.r31.s64 + -1236;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5048;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5054;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA505C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82573c50
	ctx.lr = 0x83CA5064;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1220
	ctx.r4.s64 = ctx.r31.s64 + -1220;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5070;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA507C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5084;
	sub_82573D70(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82573c50
	ctx.lr = 0x83CA508C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1200
	ctx.r4.s64 = ctx.r31.s64 + -1200;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5098;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA50A4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA50AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82573c50
	ctx.lr = 0x83CA50B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1180
	ctx.r4.s64 = ctx.r31.s64 + -1180;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82573ce0
	ctx.lr = 0x83CA50C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA50CC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA50D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82573c50
	ctx.lr = 0x83CA50DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1156
	ctx.r4.s64 = ctx.r31.s64 + -1156;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82573ce0
	ctx.lr = 0x83CA50E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA50F4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA50FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82573c50
	ctx.lr = 0x83CA5104;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1132
	ctx.r4.s64 = ctx.r31.s64 + -1132;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5110;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA511C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5124;
	sub_82573D70(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82573c50
	ctx.lr = 0x83CA512C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1108
	ctx.r4.s64 = ctx.r31.s64 + -1108;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5138;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,65
	ctx.r3.s64 = 65;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5144;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA514C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82573c50
	ctx.lr = 0x83CA5154;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1092
	ctx.r4.s64 = ctx.r31.s64 + -1092;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5160;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA516C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5174;
	sub_82573D70(ctx, base);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82573c50
	ctx.lr = 0x83CA517C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1076
	ctx.r4.s64 = ctx.r31.s64 + -1076;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5188;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5194;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA519C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82573c50
	ctx.lr = 0x83CA51A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1052
	ctx.r4.s64 = ctx.r31.s64 + -1052;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82573ce0
	ctx.lr = 0x83CA51B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA51BC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA51C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82573c50
	ctx.lr = 0x83CA51CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1032
	ctx.r4.s64 = ctx.r31.s64 + -1032;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82573ce0
	ctx.lr = 0x83CA51D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,61
	ctx.r3.s64 = 61;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA51E4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA51EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82573c50
	ctx.lr = 0x83CA51F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1016
	ctx.r4.s64 = ctx.r31.s64 + -1016;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5200;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA520C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5214;
	sub_82573D70(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82573c50
	ctx.lr = 0x83CA521C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1000
	ctx.r4.s64 = ctx.r31.s64 + -1000;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5228;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,59
	ctx.r3.s64 = 59;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5234;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA523C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82573c50
	ctx.lr = 0x83CA5244;
	sub_82573C50(ctx, base);
	// addi r4,r31,-976
	ctx.r4.s64 = ctx.r31.s64 + -976;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5250;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA525C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5264;
	sub_82573D70(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82573c50
	ctx.lr = 0x83CA526C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-956
	ctx.r4.s64 = ctx.r31.s64 + -956;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5278;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5284;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA528C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82573c50
	ctx.lr = 0x83CA5294;
	sub_82573C50(ctx, base);
	// addi r4,r31,-936
	ctx.r4.s64 = ctx.r31.s64 + -936;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82573ce0
	ctx.lr = 0x83CA52A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA52AC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA52B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82573c50
	ctx.lr = 0x83CA52BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-916
	ctx.r4.s64 = ctx.r31.s64 + -916;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82573ce0
	ctx.lr = 0x83CA52C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA52D4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA52DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82573c50
	ctx.lr = 0x83CA52E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-896
	ctx.r4.s64 = ctx.r31.s64 + -896;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82573ce0
	ctx.lr = 0x83CA52F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,54
	ctx.r3.s64 = 54;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA52FC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5304;
	sub_82573D70(ctx, base);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82573c50
	ctx.lr = 0x83CA530C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-876
	ctx.r4.s64 = ctx.r31.s64 + -876;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5318;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,53
	ctx.r3.s64 = 53;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5324;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA532C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x82573c50
	ctx.lr = 0x83CA5334;
	sub_82573C50(ctx, base);
	// addi r4,r31,-856
	ctx.r4.s64 = ctx.r31.s64 + -856;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5340;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA534C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5354;
	sub_82573D70(ctx, base);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82573c50
	ctx.lr = 0x83CA535C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-836
	ctx.r4.s64 = ctx.r31.s64 + -836;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5368;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5374;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA537C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82573c50
	ctx.lr = 0x83CA5384;
	sub_82573C50(ctx, base);
	// addi r4,r31,-820
	ctx.r4.s64 = ctx.r31.s64 + -820;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5390;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA539C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA53A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82573c50
	ctx.lr = 0x83CA53AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-804
	ctx.r4.s64 = ctx.r31.s64 + -804;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82573ce0
	ctx.lr = 0x83CA53B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA53C4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA53CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82573c50
	ctx.lr = 0x83CA53D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-788
	ctx.r4.s64 = ctx.r31.s64 + -788;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82573ce0
	ctx.lr = 0x83CA53E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA53EC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA53F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82573c50
	ctx.lr = 0x83CA53FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-768
	ctx.r4.s64 = ctx.r31.s64 + -768;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5408;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5414;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA541C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82573c50
	ctx.lr = 0x83CA5424;
	sub_82573C50(ctx, base);
	// addi r4,r31,-740
	ctx.r4.s64 = ctx.r31.s64 + -740;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5430;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA543C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5444;
	sub_82573D70(ctx, base);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82573c50
	ctx.lr = 0x83CA544C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-716
	ctx.r4.s64 = ctx.r31.s64 + -716;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5458;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5464;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA546C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x82573c50
	ctx.lr = 0x83CA5474;
	sub_82573C50(ctx, base);
	// addi r4,r31,-700
	ctx.r4.s64 = ctx.r31.s64 + -700;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5480;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA548C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5494;
	sub_82573D70(ctx, base);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82573c50
	ctx.lr = 0x83CA549C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-684
	ctx.r4.s64 = ctx.r31.s64 + -684;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82573ce0
	ctx.lr = 0x83CA54A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA54B4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA54BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82573c50
	ctx.lr = 0x83CA54C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-660
	ctx.r4.s64 = ctx.r31.s64 + -660;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82573ce0
	ctx.lr = 0x83CA54D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA54DC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA54E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82573c50
	ctx.lr = 0x83CA54EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-640
	ctx.r4.s64 = ctx.r31.s64 + -640;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82573ce0
	ctx.lr = 0x83CA54F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5504;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA550C;
	sub_82573D70(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82573c50
	ctx.lr = 0x83CA5514;
	sub_82573C50(ctx, base);
	// addi r4,r31,-624
	ctx.r4.s64 = ctx.r31.s64 + -624;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5520;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA552C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5534;
	sub_82573D70(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82573c50
	ctx.lr = 0x83CA553C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-604
	ctx.r4.s64 = ctx.r31.s64 + -604;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5548;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5554;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA555C;
	sub_82573D70(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82573c50
	ctx.lr = 0x83CA5564;
	sub_82573C50(ctx, base);
	// addi r4,r31,-584
	ctx.r4.s64 = ctx.r31.s64 + -584;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5570;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA557C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5584;
	sub_82573D70(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82573c50
	ctx.lr = 0x83CA558C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-568
	ctx.r4.s64 = ctx.r31.s64 + -568;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5598;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA55A4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA55AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82573c50
	ctx.lr = 0x83CA55B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-544
	ctx.r4.s64 = ctx.r31.s64 + -544;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82573ce0
	ctx.lr = 0x83CA55C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA55CC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA55D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82573c50
	ctx.lr = 0x83CA55DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82573ce0
	ctx.lr = 0x83CA55E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA55F4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA55FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82573c50
	ctx.lr = 0x83CA5604;
	sub_82573C50(ctx, base);
	// addi r4,r31,-508
	ctx.r4.s64 = ctx.r31.s64 + -508;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5610;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA561C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5624;
	sub_82573D70(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82573c50
	ctx.lr = 0x83CA562C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5638;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5644;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA564C;
	sub_82573D70(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82573c50
	ctx.lr = 0x83CA5654;
	sub_82573C50(ctx, base);
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5660;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA566C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5674;
	sub_82573D70(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82573c50
	ctx.lr = 0x83CA567C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5688;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5694;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA569C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82573c50
	ctx.lr = 0x83CA56A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-432
	ctx.r4.s64 = ctx.r31.s64 + -432;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82573ce0
	ctx.lr = 0x83CA56B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA56BC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA56C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82573c50
	ctx.lr = 0x83CA56CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82573ce0
	ctx.lr = 0x83CA56D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA56E4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA56EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82573c50
	ctx.lr = 0x83CA56F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-396
	ctx.r4.s64 = ctx.r31.s64 + -396;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5700;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA570C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5714;
	sub_82573D70(ctx, base);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82573c50
	ctx.lr = 0x83CA571C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-380
	ctx.r4.s64 = ctx.r31.s64 + -380;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5728;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5734;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA573C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82573c50
	ctx.lr = 0x83CA5744;
	sub_82573C50(ctx, base);
	// addi r4,r31,-364
	ctx.r4.s64 = ctx.r31.s64 + -364;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5750;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA575C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5764;
	sub_82573D70(ctx, base);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82573c50
	ctx.lr = 0x83CA576C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-352
	ctx.r4.s64 = ctx.r31.s64 + -352;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5778;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5784;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA578C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82573c50
	ctx.lr = 0x83CA5794;
	sub_82573C50(ctx, base);
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82573ce0
	ctx.lr = 0x83CA57A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA57AC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA57B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82573c50
	ctx.lr = 0x83CA57BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-320
	ctx.r4.s64 = ctx.r31.s64 + -320;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82573ce0
	ctx.lr = 0x83CA57C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA57D4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA57DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82573c50
	ctx.lr = 0x83CA57E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82573ce0
	ctx.lr = 0x83CA57F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA57FC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5804;
	sub_82573D70(ctx, base);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82573c50
	ctx.lr = 0x83CA580C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5818;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5824;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA582C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82573c50
	ctx.lr = 0x83CA5834;
	sub_82573C50(ctx, base);
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5840;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA584C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5854;
	sub_82573D70(ctx, base);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82573c50
	ctx.lr = 0x83CA585C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-256
	ctx.r4.s64 = ctx.r31.s64 + -256;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5868;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5874;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA587C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82573c50
	ctx.lr = 0x83CA5884;
	sub_82573C50(ctx, base);
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5890;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA589C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA58A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82573c50
	ctx.lr = 0x83CA58AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-228
	ctx.r4.s64 = ctx.r31.s64 + -228;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x82573ce0
	ctx.lr = 0x83CA58B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA58C4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA58CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x82573c50
	ctx.lr = 0x83CA58D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// bl 0x82573ce0
	ctx.lr = 0x83CA58E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA58EC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA58F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// bl 0x82573c50
	ctx.lr = 0x83CA58FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5908;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5914;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA591C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// bl 0x82573c50
	ctx.lr = 0x83CA5924;
	sub_82573C50(ctx, base);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5930;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA593C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5944;
	sub_82573D70(ctx, base);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82573c50
	ctx.lr = 0x83CA594C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5958;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5964;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA596C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82573c50
	ctx.lr = 0x83CA5974;
	sub_82573C50(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5980;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA598C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5994;
	sub_82573D70(ctx, base);
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x82573c50
	ctx.lr = 0x83CA599C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// bl 0x82573ce0
	ctx.lr = 0x83CA59A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA59B4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA59BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// bl 0x82573c50
	ctx.lr = 0x83CA59C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// bl 0x82573ce0
	ctx.lr = 0x83CA59D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA59DC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA59E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// bl 0x82573c50
	ctx.lr = 0x83CA59EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// bl 0x82573ce0
	ctx.lr = 0x83CA59F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5A04;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5A0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// bl 0x82573c50
	ctx.lr = 0x83CA5A14;
	sub_82573C50(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5A20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5A2C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5A34;
	sub_82573D70(ctx, base);
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// bl 0x82573c50
	ctx.lr = 0x83CA5A3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5A48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5A54;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5A5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// bl 0x82573c50
	ctx.lr = 0x83CA5A64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5A70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5A7C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5A84;
	sub_82573D70(ctx, base);
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// bl 0x82573c50
	ctx.lr = 0x83CA5A8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5A98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5AA4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5AAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// bl 0x82573c50
	ctx.lr = 0x83CA5AB4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5AC0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5ACC;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5AD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x82573c50
	ctx.lr = 0x83CA5ADC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5AE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5AF4;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5AFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// bl 0x82573c50
	ctx.lr = 0x83CA5B04;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5B10;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5B1C;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5B24;
	sub_82573D70(ctx, base);
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82573c50
	ctx.lr = 0x83CA5B2C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5B38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5B44;
	sub_835F9ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5B4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x82573c50
	ctx.lr = 0x83CA5B54;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5B60;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5B6C;
	sub_835F9ED8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5B74;
	sub_82573D70(ctx, base);
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x82573c50
	ctx.lr = 0x83CA5B7C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9ed8
	ctx.lr = 0x83CA5B84;
	sub_835F9ED8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r8,r10,-25325
	ctx.r8.s64 = ctx.r10.s64 + -25325;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r31,23
	ctx.r31.s64 = 23;
	// li r30,24
	ctx.r30.s64 = 24;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// li r31,26
	ctx.r31.s64 = 26;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// li r31,29
	ctx.r31.s64 = 29;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// li r30,27
	ctx.r30.s64 = 27;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// li r31,32
	ctx.r31.s64 = 32;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// li r30,30
	ctx.r30.s64 = 30;
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// li r31,35
	ctx.r31.s64 = 35;
	// stw r30,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r30.u32);
	// li r30,33
	ctx.r30.s64 = 33;
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// li r31,38
	ctx.r31.s64 = 38;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// li r30,36
	ctx.r30.s64 = 36;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// li r31,41
	ctx.r31.s64 = 41;
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// li r30,39
	ctx.r30.s64 = 39;
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r31.u32);
	// li r31,44
	ctx.r31.s64 = 44;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// li r30,42
	ctx.r30.s64 = 42;
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r31.u32);
	// li r31,47
	ctx.r31.s64 = 47;
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// li r30,45
	ctx.r30.s64 = 45;
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// li r11,49
	ctx.r11.s64 = 49;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// li r31,50
	ctx.r31.s64 = 50;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// li r30,48
	ctx.r30.s64 = 48;
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r31.u32);
	// li r31,53
	ctx.r31.s64 = 53;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// li r30,51
	ctx.r30.s64 = 51;
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r31,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r31.u32);
	// li r31,56
	ctx.r31.s64 = 56;
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// li r30,54
	ctx.r30.s64 = 54;
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// li r11,58
	ctx.r11.s64 = 58;
	// stw r31,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r31.u32);
	// li r31,59
	ctx.r31.s64 = 59;
	// stw r30,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r30.u32);
	// li r30,57
	ctx.r30.s64 = 57;
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// li r11,61
	ctx.r11.s64 = 61;
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// li r31,62
	ctx.r31.s64 = 62;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// li r30,60
	ctx.r30.s64 = 60;
	// stw r11,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r11.u32);
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// li r31,64
	ctx.r31.s64 = 64;
	// stw r30,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r30.u32);
	// stw r11,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r11.u32);
	// li r30,65
	ctx.r30.s64 = 65;
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r31.u32);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// li r31,67
	ctx.r31.s64 = 67;
	// stw r11,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// li r30,68
	ctx.r30.s64 = 68;
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// stw r30,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r30.u32);
	// li r31,70
	ctx.r31.s64 = 70;
	// stw r11,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r11.u32);
	// li r30,71
	ctx.r30.s64 = 71;
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r31,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r31.u32);
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// li r31,73
	ctx.r31.s64 = 73;
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r11.u32);
	// li r30,74
	ctx.r30.s64 = 74;
	// li r11,75
	ctx.r11.s64 = 75;
	// stw r31,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r31.u32);
	// stw r30,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r30.u32);
	// li r31,76
	ctx.r31.s64 = 76;
	// stw r11,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r11.u32);
	// li r30,77
	ctx.r30.s64 = 77;
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r31,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r31.u32);
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// li r31,79
	ctx.r31.s64 = 79;
	// stw r11,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r11.u32);
	// li r30,80
	ctx.r30.s64 = 80;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r30.u32);
	// li r31,82
	ctx.r31.s64 = 82;
	// stw r11,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,83
	ctx.r30.s64 = 83;
	// stw r31,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r31.u32);
	// stw r11,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r11.u32);
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// bl 0x825731e0
	ctx.lr = 0x83CA5E30;
	sub_825731E0(ctx, base);
	// addi r1,r1,2096
	ctx.r1.s64 = ctx.r1.s64 + 2096;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA5E48"))) PPC_WEAK_FUNC(sub_83CA5E48);
PPC_FUNC_IMPL(__imp__sub_83CA5E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,26520
	ctx.r31.s64 = ctx.r11.s64 + 26520;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5E70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9f48
	ctx.lr = 0x83CA5E7C;
	sub_835F9F48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5E84;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA5E8C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5E98;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9f48
	ctx.lr = 0x83CA5EA4;
	sub_835F9F48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5EAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA5EB4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9f48
	ctx.lr = 0x83CA5EBC;
	sub_835F9F48(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25224
	ctx.r3.s64 = ctx.r10.s64 + -25224;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA5EDC;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA5EF4"))) PPC_WEAK_FUNC(sub_83CA5EF4);
PPC_FUNC_IMPL(__imp__sub_83CA5EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA5EF8"))) PPC_WEAK_FUNC(sub_83CA5EF8);
PPC_FUNC_IMPL(__imp__sub_83CA5EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,26584
	ctx.r31.s64 = ctx.r11.s64 + 26584;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5F20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835f9fb8
	ctx.lr = 0x83CA5F2C;
	sub_835F9FB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5F34;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA5F3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5F48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835f9fb8
	ctx.lr = 0x83CA5F54;
	sub_835F9FB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5F5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA5F64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5F70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835f9fb8
	ctx.lr = 0x83CA5F7C;
	sub_835F9FB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5F84;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA5F8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5F98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835f9fb8
	ctx.lr = 0x83CA5FA4;
	sub_835F9FB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5FAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA5FB4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA5FC0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9fb8
	ctx.lr = 0x83CA5FCC;
	sub_835F9FB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA5FD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA5FDC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835f9fb8
	ctx.lr = 0x83CA5FE4;
	sub_835F9FB8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25330
	ctx.r3.s64 = ctx.r10.s64 + -25330;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA6014;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA602C"))) PPC_WEAK_FUNC(sub_83CA602C);
PPC_FUNC_IMPL(__imp__sub_83CA602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA6030"))) PPC_WEAK_FUNC(sub_83CA6030);
PPC_FUNC_IMPL(__imp__sub_83CA6030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,26604
	ctx.r31.s64 = ctx.r11.s64 + 26604;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6058;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa028
	ctx.lr = 0x83CA6064;
	sub_835FA028(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA606C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA6074;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6080;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa028
	ctx.lr = 0x83CA608C;
	sub_835FA028(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6094;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA609C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa028
	ctx.lr = 0x83CA60A4;
	sub_835FA028(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25239
	ctx.r3.s64 = ctx.r10.s64 + -25239;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA60C4;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA60DC"))) PPC_WEAK_FUNC(sub_83CA60DC);
PPC_FUNC_IMPL(__imp__sub_83CA60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA60E0"))) PPC_WEAK_FUNC(sub_83CA60E0);
PPC_FUNC_IMPL(__imp__sub_83CA60E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r31,r11,26768
	ctx.r31.s64 = ctx.r11.s64 + 26768;
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6108;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835fa098
	ctx.lr = 0x83CA6114;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA611C;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CA6124;
	sub_82573C50(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6130;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fa098
	ctx.lr = 0x83CA613C;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6144;
	sub_82573D70(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573c50
	ctx.lr = 0x83CA614C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6158;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fa098
	ctx.lr = 0x83CA6164;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA616C;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CA6174;
	sub_82573C50(ctx, base);
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6180;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fa098
	ctx.lr = 0x83CA618C;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6194;
	sub_82573D70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x83CA619C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CA61A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fa098
	ctx.lr = 0x83CA61B4;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA61BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CA61C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573ce0
	ctx.lr = 0x83CA61D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fa098
	ctx.lr = 0x83CA61DC;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA61E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573c50
	ctx.lr = 0x83CA61EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CA61F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fa098
	ctx.lr = 0x83CA6204;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA620C;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CA6214;
	sub_82573C50(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6220;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fa098
	ctx.lr = 0x83CA622C;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6234;
	sub_82573D70(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x83CA623C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6248;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fa098
	ctx.lr = 0x83CA6254;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA625C;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CA6264;
	sub_82573C50(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6270;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fa098
	ctx.lr = 0x83CA627C;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6284;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA628C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6298;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fa098
	ctx.lr = 0x83CA62A4;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA62AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CA62B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CA62C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fa098
	ctx.lr = 0x83CA62CC;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA62D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CA62DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CA62E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fa098
	ctx.lr = 0x83CA62F4;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA62FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CA6304;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6310;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa098
	ctx.lr = 0x83CA631C;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6324;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CA632C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6338;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa098
	ctx.lr = 0x83CA6344;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA634C;
	sub_82573D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x83CA6354;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6360;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa098
	ctx.lr = 0x83CA636C;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6374;
	sub_82573D70(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x83CA637C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6388;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa098
	ctx.lr = 0x83CA6394;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA639C;
	sub_82573D70(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573c50
	ctx.lr = 0x83CA63A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573ce0
	ctx.lr = 0x83CA63B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa098
	ctx.lr = 0x83CA63BC;
	sub_835FA098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA63C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573c50
	ctx.lr = 0x83CA63CC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573ce0
	ctx.lr = 0x83CA63D8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa098
	ctx.lr = 0x83CA63E4;
	sub_835FA098(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA63EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573c50
	ctx.lr = 0x83CA63F4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa098
	ctx.lr = 0x83CA63FC;
	sub_835FA098(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r8,r10,-25194
	ctx.r8.s64 = ctx.r10.s64 + -25194;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r31,15
	ctx.r31.s64 = 15;
	// li r30,16
	ctx.r30.s64 = 16;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r31,18
	ctx.r31.s64 = 18;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA64A0;
	sub_825731E0(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA64B8"))) PPC_WEAK_FUNC(sub_83CA64B8);
PPC_FUNC_IMPL(__imp__sub_83CA64B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,26812
	ctx.r31.s64 = ctx.r11.s64 + 26812;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82573ce0
	ctx.lr = 0x83CA64E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa108
	ctx.lr = 0x83CA64EC;
	sub_835FA108(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA64F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA64FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6508;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa108
	ctx.lr = 0x83CA6514;
	sub_835FA108(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA651C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA6524;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6530;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa108
	ctx.lr = 0x83CA653C;
	sub_835FA108(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6544;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA654C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6558;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa108
	ctx.lr = 0x83CA6564;
	sub_835FA108(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA656C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA6574;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6580;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa108
	ctx.lr = 0x83CA658C;
	sub_835FA108(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6594;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA659C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa108
	ctx.lr = 0x83CA65A4;
	sub_835FA108(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25240
	ctx.r3.s64 = ctx.r10.s64 + -25240;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA65D4;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA65EC"))) PPC_WEAK_FUNC(sub_83CA65EC);
PPC_FUNC_IMPL(__imp__sub_83CA65EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA65F0"))) PPC_WEAK_FUNC(sub_83CA65F0);
PPC_FUNC_IMPL(__imp__sub_83CA65F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,26912
	ctx.r31.s64 = ctx.r11.s64 + 26912;
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6618;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fa178
	ctx.lr = 0x83CA6624;
	sub_835FA178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA662C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA6634;
	sub_82573C50(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6640;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fa178
	ctx.lr = 0x83CA664C;
	sub_835FA178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6654;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA665C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6668;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa178
	ctx.lr = 0x83CA6674;
	sub_835FA178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA667C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA6684;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6690;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa178
	ctx.lr = 0x83CA669C;
	sub_835FA178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA66A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA66AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA66B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa178
	ctx.lr = 0x83CA66C4;
	sub_835FA178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA66CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA66D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA66E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa178
	ctx.lr = 0x83CA66EC;
	sub_835FA178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA66F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA66FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6708;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa178
	ctx.lr = 0x83CA6714;
	sub_835FA178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA671C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA6724;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6730;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa178
	ctx.lr = 0x83CA673C;
	sub_835FA178(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6744;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CA674C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa178
	ctx.lr = 0x83CA6754;
	sub_835FA178(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r3,r10,-25331
	ctx.r3.s64 = ctx.r10.s64 + -25331;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA6798;
	sub_825731E0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA67B0"))) PPC_WEAK_FUNC(sub_83CA67B0);
PPC_FUNC_IMPL(__imp__sub_83CA67B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,26956
	ctx.r31.s64 = ctx.r11.s64 + 26956;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82573ce0
	ctx.lr = 0x83CA67D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa1e8
	ctx.lr = 0x83CA67E4;
	sub_835FA1E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA67EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA67F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6800;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa1e8
	ctx.lr = 0x83CA680C;
	sub_835FA1E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6814;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA681C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6828;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa1e8
	ctx.lr = 0x83CA6834;
	sub_835FA1E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA683C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA6844;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa1e8
	ctx.lr = 0x83CA684C;
	sub_835FA1E8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25259
	ctx.r3.s64 = ctx.r10.s64 + -25259;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA6870;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA6888"))) PPC_WEAK_FUNC(sub_83CA6888);
PPC_FUNC_IMPL(__imp__sub_83CA6888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,26992
	ctx.r31.s64 = ctx.r11.s64 + 26992;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82573ce0
	ctx.lr = 0x83CA68B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa258
	ctx.lr = 0x83CA68BC;
	sub_835FA258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA68C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA68CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA68D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa258
	ctx.lr = 0x83CA68E4;
	sub_835FA258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA68EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA68F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6900;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa258
	ctx.lr = 0x83CA690C;
	sub_835FA258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6914;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA691C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6928;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa258
	ctx.lr = 0x83CA6934;
	sub_835FA258(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA693C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA6944;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa258
	ctx.lr = 0x83CA694C;
	sub_835FA258(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25244
	ctx.r3.s64 = ctx.r10.s64 + -25244;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA6974;
	sub_825731E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA698C"))) PPC_WEAK_FUNC(sub_83CA698C);
PPC_FUNC_IMPL(__imp__sub_83CA698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA6990"))) PPC_WEAK_FUNC(sub_83CA6990);
PPC_FUNC_IMPL(__imp__sub_83CA6990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,27016
	ctx.r31.s64 = ctx.r11.s64 + 27016;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CA69B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa2c8
	ctx.lr = 0x83CA69C4;
	sub_835FA2C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA69CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA69D4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA69E0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa2c8
	ctx.lr = 0x83CA69EC;
	sub_835FA2C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA69F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA69FC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa2c8
	ctx.lr = 0x83CA6A04;
	sub_835FA2C8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25227
	ctx.r3.s64 = ctx.r10.s64 + -25227;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA6A24;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA6A3C"))) PPC_WEAK_FUNC(sub_83CA6A3C);
PPC_FUNC_IMPL(__imp__sub_83CA6A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA6A40"))) PPC_WEAK_FUNC(sub_83CA6A40);
PPC_FUNC_IMPL(__imp__sub_83CA6A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,27036
	ctx.r31.s64 = ctx.r11.s64 + 27036;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6A68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa338
	ctx.lr = 0x83CA6A74;
	sub_835FA338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6A7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA6A84;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6A90;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa338
	ctx.lr = 0x83CA6A9C;
	sub_835FA338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6AA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA6AAC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa338
	ctx.lr = 0x83CA6AB4;
	sub_835FA338(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25324
	ctx.r3.s64 = ctx.r10.s64 + -25324;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA6AD4;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA6AEC"))) PPC_WEAK_FUNC(sub_83CA6AEC);
PPC_FUNC_IMPL(__imp__sub_83CA6AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA6AF0"))) PPC_WEAK_FUNC(sub_83CA6AF0);
PPC_FUNC_IMPL(__imp__sub_83CA6AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,27056
	ctx.r31.s64 = ctx.r11.s64 + 27056;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6B18;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa3a8
	ctx.lr = 0x83CA6B24;
	sub_835FA3A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6B2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA6B34;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6B40;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa3a8
	ctx.lr = 0x83CA6B4C;
	sub_835FA3A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6B54;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA6B5C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6B68;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa3a8
	ctx.lr = 0x83CA6B74;
	sub_835FA3A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6B7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA6B84;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa3a8
	ctx.lr = 0x83CA6B8C;
	sub_835FA3A8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25319
	ctx.r3.s64 = ctx.r10.s64 + -25319;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA6BB0;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA6BC8"))) PPC_WEAK_FUNC(sub_83CA6BC8);
PPC_FUNC_IMPL(__imp__sub_83CA6BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83CA6BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// addi r31,r11,27904
	ctx.r31.s64 = ctx.r11.s64 + 27904;
	// addi r4,r31,-844
	ctx.r4.s64 = ctx.r31.s64 + -844;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6BE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,59
	ctx.r3.s64 = 59;
	// bl 0x835fa418
	ctx.lr = 0x83CA6BF4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6BFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82573c50
	ctx.lr = 0x83CA6C04;
	sub_82573C50(ctx, base);
	// addi r4,r31,-824
	ctx.r4.s64 = ctx.r31.s64 + -824;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6C10;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x835fa418
	ctx.lr = 0x83CA6C1C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6C24;
	sub_82573D70(ctx, base);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82573c50
	ctx.lr = 0x83CA6C2C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-808
	ctx.r4.s64 = ctx.r31.s64 + -808;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6C38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x835fa418
	ctx.lr = 0x83CA6C44;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6C4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82573c50
	ctx.lr = 0x83CA6C54;
	sub_82573C50(ctx, base);
	// addi r4,r31,-792
	ctx.r4.s64 = ctx.r31.s64 + -792;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6C60;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x835fa418
	ctx.lr = 0x83CA6C6C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6C74;
	sub_82573D70(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82573c50
	ctx.lr = 0x83CA6C7C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-772
	ctx.r4.s64 = ctx.r31.s64 + -772;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6C88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x835fa418
	ctx.lr = 0x83CA6C94;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6C9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82573c50
	ctx.lr = 0x83CA6CA4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-760
	ctx.r4.s64 = ctx.r31.s64 + -760;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6CB0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,54
	ctx.r3.s64 = 54;
	// bl 0x835fa418
	ctx.lr = 0x83CA6CBC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6CC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82573c50
	ctx.lr = 0x83CA6CCC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-748
	ctx.r4.s64 = ctx.r31.s64 + -748;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6CD8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,53
	ctx.r3.s64 = 53;
	// bl 0x835fa418
	ctx.lr = 0x83CA6CE4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6CEC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82573c50
	ctx.lr = 0x83CA6CF4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-736
	ctx.r4.s64 = ctx.r31.s64 + -736;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6D00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x835fa418
	ctx.lr = 0x83CA6D0C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6D14;
	sub_82573D70(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82573c50
	ctx.lr = 0x83CA6D1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-724
	ctx.r4.s64 = ctx.r31.s64 + -724;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6D28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x835fa418
	ctx.lr = 0x83CA6D34;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6D3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82573c50
	ctx.lr = 0x83CA6D44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-716
	ctx.r4.s64 = ctx.r31.s64 + -716;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6D50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x835fa418
	ctx.lr = 0x83CA6D5C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6D64;
	sub_82573D70(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82573c50
	ctx.lr = 0x83CA6D6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-696
	ctx.r4.s64 = ctx.r31.s64 + -696;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6D78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x835fa418
	ctx.lr = 0x83CA6D84;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6D8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82573c50
	ctx.lr = 0x83CA6D94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-684
	ctx.r4.s64 = ctx.r31.s64 + -684;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6DA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x835fa418
	ctx.lr = 0x83CA6DAC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6DB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82573c50
	ctx.lr = 0x83CA6DBC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-664
	ctx.r4.s64 = ctx.r31.s64 + -664;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6DC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x835fa418
	ctx.lr = 0x83CA6DD4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6DDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82573c50
	ctx.lr = 0x83CA6DE4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-648
	ctx.r4.s64 = ctx.r31.s64 + -648;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6DF0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x835fa418
	ctx.lr = 0x83CA6DFC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6E04;
	sub_82573D70(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82573c50
	ctx.lr = 0x83CA6E0C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-636
	ctx.r4.s64 = ctx.r31.s64 + -636;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6E18;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x835fa418
	ctx.lr = 0x83CA6E24;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6E2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82573c50
	ctx.lr = 0x83CA6E34;
	sub_82573C50(ctx, base);
	// addi r4,r31,-628
	ctx.r4.s64 = ctx.r31.s64 + -628;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6E40;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x835fa418
	ctx.lr = 0x83CA6E4C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6E54;
	sub_82573D70(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x82573c50
	ctx.lr = 0x83CA6E5C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-608
	ctx.r4.s64 = ctx.r31.s64 + -608;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6E68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x835fa418
	ctx.lr = 0x83CA6E74;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6E7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82573c50
	ctx.lr = 0x83CA6E84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-592
	ctx.r4.s64 = ctx.r31.s64 + -592;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6E90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x835fa418
	ctx.lr = 0x83CA6E9C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6EA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82573c50
	ctx.lr = 0x83CA6EAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-568
	ctx.r4.s64 = ctx.r31.s64 + -568;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6EB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x835fa418
	ctx.lr = 0x83CA6EC4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6ECC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82573c50
	ctx.lr = 0x83CA6ED4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-556
	ctx.r4.s64 = ctx.r31.s64 + -556;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6EE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x835fa418
	ctx.lr = 0x83CA6EEC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6EF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82573c50
	ctx.lr = 0x83CA6EFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-544
	ctx.r4.s64 = ctx.r31.s64 + -544;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6F08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x835fa418
	ctx.lr = 0x83CA6F14;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6F1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82573c50
	ctx.lr = 0x83CA6F24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-536
	ctx.r4.s64 = ctx.r31.s64 + -536;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6F30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x835fa418
	ctx.lr = 0x83CA6F3C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6F44;
	sub_82573D70(ctx, base);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x82573c50
	ctx.lr = 0x83CA6F4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-528
	ctx.r4.s64 = ctx.r31.s64 + -528;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6F58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x835fa418
	ctx.lr = 0x83CA6F64;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6F6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82573c50
	ctx.lr = 0x83CA6F74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-520
	ctx.r4.s64 = ctx.r31.s64 + -520;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6F80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x835fa418
	ctx.lr = 0x83CA6F8C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6F94;
	sub_82573D70(ctx, base);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82573c50
	ctx.lr = 0x83CA6F9C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-512
	ctx.r4.s64 = ctx.r31.s64 + -512;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6FA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x835fa418
	ctx.lr = 0x83CA6FB4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6FBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82573c50
	ctx.lr = 0x83CA6FC4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6FD0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x835fa418
	ctx.lr = 0x83CA6FDC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA6FE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82573c50
	ctx.lr = 0x83CA6FEC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-488
	ctx.r4.s64 = ctx.r31.s64 + -488;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82573ce0
	ctx.lr = 0x83CA6FF8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x835fa418
	ctx.lr = 0x83CA7004;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA700C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82573c50
	ctx.lr = 0x83CA7014;
	sub_82573C50(ctx, base);
	// addi r4,r31,-480
	ctx.r4.s64 = ctx.r31.s64 + -480;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7020;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x835fa418
	ctx.lr = 0x83CA702C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7034;
	sub_82573D70(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82573c50
	ctx.lr = 0x83CA703C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-472
	ctx.r4.s64 = ctx.r31.s64 + -472;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7048;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x835fa418
	ctx.lr = 0x83CA7054;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA705C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82573c50
	ctx.lr = 0x83CA7064;
	sub_82573C50(ctx, base);
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7070;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x835fa418
	ctx.lr = 0x83CA707C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7084;
	sub_82573D70(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82573c50
	ctx.lr = 0x83CA708C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-444
	ctx.r4.s64 = ctx.r31.s64 + -444;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7098;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x835fa418
	ctx.lr = 0x83CA70A4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA70AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82573c50
	ctx.lr = 0x83CA70B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573ce0
	ctx.lr = 0x83CA70C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x835fa418
	ctx.lr = 0x83CA70CC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA70D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82573c50
	ctx.lr = 0x83CA70DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573ce0
	ctx.lr = 0x83CA70E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x835fa418
	ctx.lr = 0x83CA70F4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA70FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82573c50
	ctx.lr = 0x83CA7104;
	sub_82573C50(ctx, base);
	// addi r4,r31,-376
	ctx.r4.s64 = ctx.r31.s64 + -376;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7110;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x835fa418
	ctx.lr = 0x83CA711C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7124;
	sub_82573D70(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82573c50
	ctx.lr = 0x83CA712C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7138;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x835fa418
	ctx.lr = 0x83CA7144;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA714C;
	sub_82573D70(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82573c50
	ctx.lr = 0x83CA7154;
	sub_82573C50(ctx, base);
	// addi r4,r31,-344
	ctx.r4.s64 = ctx.r31.s64 + -344;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7160;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x835fa418
	ctx.lr = 0x83CA716C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7174;
	sub_82573D70(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82573c50
	ctx.lr = 0x83CA717C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-320
	ctx.r4.s64 = ctx.r31.s64 + -320;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7188;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x835fa418
	ctx.lr = 0x83CA7194;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA719C;
	sub_82573D70(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82573c50
	ctx.lr = 0x83CA71A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-300
	ctx.r4.s64 = ctx.r31.s64 + -300;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82573ce0
	ctx.lr = 0x83CA71B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x835fa418
	ctx.lr = 0x83CA71BC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA71C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82573c50
	ctx.lr = 0x83CA71CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-284
	ctx.r4.s64 = ctx.r31.s64 + -284;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82573ce0
	ctx.lr = 0x83CA71D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x835fa418
	ctx.lr = 0x83CA71E4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA71EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82573c50
	ctx.lr = 0x83CA71F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-264
	ctx.r4.s64 = ctx.r31.s64 + -264;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7200;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x835fa418
	ctx.lr = 0x83CA720C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7214;
	sub_82573D70(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82573c50
	ctx.lr = 0x83CA721C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7228;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x835fa418
	ctx.lr = 0x83CA7234;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA723C;
	sub_82573D70(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82573c50
	ctx.lr = 0x83CA7244;
	sub_82573C50(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7250;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835fa418
	ctx.lr = 0x83CA725C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7264;
	sub_82573D70(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82573c50
	ctx.lr = 0x83CA726C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7278;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fa418
	ctx.lr = 0x83CA7284;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA728C;
	sub_82573D70(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82573c50
	ctx.lr = 0x83CA7294;
	sub_82573C50(ctx, base);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82573ce0
	ctx.lr = 0x83CA72A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fa418
	ctx.lr = 0x83CA72AC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA72B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82573c50
	ctx.lr = 0x83CA72BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82573ce0
	ctx.lr = 0x83CA72C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fa418
	ctx.lr = 0x83CA72D4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA72DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82573c50
	ctx.lr = 0x83CA72E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82573ce0
	ctx.lr = 0x83CA72F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fa418
	ctx.lr = 0x83CA72FC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7304;
	sub_82573D70(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82573c50
	ctx.lr = 0x83CA730C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7318;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fa418
	ctx.lr = 0x83CA7324;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA732C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82573c50
	ctx.lr = 0x83CA7334;
	sub_82573C50(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7340;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fa418
	ctx.lr = 0x83CA734C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7354;
	sub_82573D70(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82573c50
	ctx.lr = 0x83CA735C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7368;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fa418
	ctx.lr = 0x83CA7374;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA737C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82573c50
	ctx.lr = 0x83CA7384;
	sub_82573C50(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7390;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fa418
	ctx.lr = 0x83CA739C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA73A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82573c50
	ctx.lr = 0x83CA73AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82573ce0
	ctx.lr = 0x83CA73B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fa418
	ctx.lr = 0x83CA73C4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA73CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82573c50
	ctx.lr = 0x83CA73D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82573ce0
	ctx.lr = 0x83CA73E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fa418
	ctx.lr = 0x83CA73EC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA73F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82573c50
	ctx.lr = 0x83CA73FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7408;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fa418
	ctx.lr = 0x83CA7414;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA741C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82573c50
	ctx.lr = 0x83CA7424;
	sub_82573C50(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7430;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fa418
	ctx.lr = 0x83CA743C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7444;
	sub_82573D70(ctx, base);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82573c50
	ctx.lr = 0x83CA744C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7458;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa418
	ctx.lr = 0x83CA7464;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA746C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82573c50
	ctx.lr = 0x83CA7474;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7480;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa418
	ctx.lr = 0x83CA748C;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7494;
	sub_82573D70(ctx, base);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82573c50
	ctx.lr = 0x83CA749C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82573ce0
	ctx.lr = 0x83CA74A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa418
	ctx.lr = 0x83CA74B4;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA74BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82573c50
	ctx.lr = 0x83CA74C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82573ce0
	ctx.lr = 0x83CA74D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa418
	ctx.lr = 0x83CA74DC;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA74E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82573c50
	ctx.lr = 0x83CA74EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82573ce0
	ctx.lr = 0x83CA74F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa418
	ctx.lr = 0x83CA7504;
	sub_835FA418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA750C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82573c50
	ctx.lr = 0x83CA7514;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7520;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa418
	ctx.lr = 0x83CA752C;
	sub_835FA418(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7534;
	sub_82573D70(ctx, base);
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82573c50
	ctx.lr = 0x83CA753C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa418
	ctx.lr = 0x83CA7544;
	sub_835FA418(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r8,r10,-25212
	ctx.r8.s64 = ctx.r10.s64 + -25212;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// li r4,23
	ctx.r4.s64 = 23;
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// li r31,35
	ctx.r31.s64 = 35;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// li r9,37
	ctx.r9.s64 = 37;
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// li r31,39
	ctx.r31.s64 = 39;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// li r10,43
	ctx.r10.s64 = 43;
	// stw r9,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// li r31,45
	ctx.r31.s64 = 45;
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r9,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r9.u32);
	// li r10,47
	ctx.r10.s64 = 47;
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r31.u32);
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// li r31,49
	ctx.r31.s64 = 49;
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r9,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r9.u32);
	// li r10,51
	ctx.r10.s64 = 51;
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// stw r11,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r9,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r9.u32);
	// li r31,53
	ctx.r31.s64 = 53;
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// li r7,27
	ctx.r7.s64 = 27;
	// stw r31,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r31.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r9,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r9.u32);
	// li r11,58
	ctx.r11.s64 = 58;
	// li r31,57
	ctx.r31.s64 = 57;
	// li r30,59
	ctx.r30.s64 = 59;
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r31,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r31.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// stw r30,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA7730;
	sub_825731E0(ctx, base);
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA7738"))) PPC_WEAK_FUNC(sub_83CA7738);
PPC_FUNC_IMPL(__imp__sub_83CA7738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,27928
	ctx.r31.s64 = ctx.r11.s64 + 27928;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7760;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa488
	ctx.lr = 0x83CA776C;
	sub_835FA488(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7774;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA777C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7788;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa488
	ctx.lr = 0x83CA7794;
	sub_835FA488(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA779C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA77A4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA77B0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa488
	ctx.lr = 0x83CA77BC;
	sub_835FA488(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA77C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA77CC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa488
	ctx.lr = 0x83CA77D4;
	sub_835FA488(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25280
	ctx.r3.s64 = ctx.r10.s64 + -25280;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA77F8;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA7810"))) PPC_WEAK_FUNC(sub_83CA7810);
PPC_FUNC_IMPL(__imp__sub_83CA7810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,27956
	ctx.r31.s64 = ctx.r11.s64 + 27956;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7838;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa4f8
	ctx.lr = 0x83CA7844;
	sub_835FA4F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA784C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA7854;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7860;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa4f8
	ctx.lr = 0x83CA786C;
	sub_835FA4F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7874;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA787C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7888;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa4f8
	ctx.lr = 0x83CA7894;
	sub_835FA4F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA789C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA78A4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa4f8
	ctx.lr = 0x83CA78AC;
	sub_835FA4F8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25273
	ctx.r3.s64 = ctx.r10.s64 + -25273;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA78D0;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA78E8"))) PPC_WEAK_FUNC(sub_83CA78E8);
PPC_FUNC_IMPL(__imp__sub_83CA78E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,28000
	ctx.r31.s64 = ctx.r11.s64 + 28000;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7910;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fa568
	ctx.lr = 0x83CA791C;
	sub_835FA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7924;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA792C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7938;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa568
	ctx.lr = 0x83CA7944;
	sub_835FA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA794C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA7954;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7960;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa568
	ctx.lr = 0x83CA796C;
	sub_835FA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7974;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA797C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7988;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa568
	ctx.lr = 0x83CA7994;
	sub_835FA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA799C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA79A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA79B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa568
	ctx.lr = 0x83CA79BC;
	sub_835FA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA79C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA79CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA79D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa568
	ctx.lr = 0x83CA79E4;
	sub_835FA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA79EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA79F4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7A00;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa568
	ctx.lr = 0x83CA7A0C;
	sub_835FA568(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7A14;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA7A1C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa568
	ctx.lr = 0x83CA7A24;
	sub_835FA568(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25318
	ctx.r3.s64 = ctx.r10.s64 + -25318;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA7A64;
	sub_825731E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA7A7C"))) PPC_WEAK_FUNC(sub_83CA7A7C);
PPC_FUNC_IMPL(__imp__sub_83CA7A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA7A80"))) PPC_WEAK_FUNC(sub_83CA7A80);
PPC_FUNC_IMPL(__imp__sub_83CA7A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r31,r11,28040
	ctx.r31.s64 = ctx.r11.s64 + 28040;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7AA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7AB4;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7ABC;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CA7AC4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7AD0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7ADC;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7AE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA7AEC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7AF8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7B04;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7B0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CA7B14;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7B20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7B2C;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7B34;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA7B3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7B48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7B54;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7B5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA7B64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7B70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7B7C;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7B84;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA7B8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7B98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7BA4;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7BAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA7BB4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7BC0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7BCC;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7BD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA7BDC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7BE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7BF4;
	sub_835FA5D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7BFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CA7C04;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7C10;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7C1C;
	sub_835FA5D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7C24;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CA7C2C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa5d8
	ctx.lr = 0x83CA7C34;
	sub_835FA5D8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25214
	ctx.r3.s64 = ctx.r10.s64 + -25214;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA7C8C;
	sub_825731E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA7CA4"))) PPC_WEAK_FUNC(sub_83CA7CA4);
PPC_FUNC_IMPL(__imp__sub_83CA7CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA7CA8"))) PPC_WEAK_FUNC(sub_83CA7CA8);
PPC_FUNC_IMPL(__imp__sub_83CA7CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,28128
	ctx.r31.s64 = ctx.r11.s64 + 28128;
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7CD0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa648
	ctx.lr = 0x83CA7CDC;
	sub_835FA648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7CE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA7CEC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7CF8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa648
	ctx.lr = 0x83CA7D04;
	sub_835FA648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7D0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA7D14;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7D20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa648
	ctx.lr = 0x83CA7D2C;
	sub_835FA648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7D34;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA7D3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7D48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa648
	ctx.lr = 0x83CA7D54;
	sub_835FA648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7D5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA7D64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7D70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa648
	ctx.lr = 0x83CA7D7C;
	sub_835FA648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7D84;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA7D8C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7D98;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa648
	ctx.lr = 0x83CA7DA4;
	sub_835FA648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7DAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA7DB4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa648
	ctx.lr = 0x83CA7DBC;
	sub_835FA648(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25246
	ctx.r3.s64 = ctx.r10.s64 + -25246;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA7DF4;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA7E0C"))) PPC_WEAK_FUNC(sub_83CA7E0C);
PPC_FUNC_IMPL(__imp__sub_83CA7E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA7E10"))) PPC_WEAK_FUNC(sub_83CA7E10);
PPC_FUNC_IMPL(__imp__sub_83CA7E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,28216
	ctx.r31.s64 = ctx.r11.s64 + 28216;
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7E38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa6b8
	ctx.lr = 0x83CA7E44;
	sub_835FA6B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7E4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA7E54;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7E60;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa6b8
	ctx.lr = 0x83CA7E6C;
	sub_835FA6B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7E74;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA7E7C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7E88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa6b8
	ctx.lr = 0x83CA7E94;
	sub_835FA6B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7E9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA7EA4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7EB0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa6b8
	ctx.lr = 0x83CA7EBC;
	sub_835FA6B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7EC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA7ECC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7ED8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa6b8
	ctx.lr = 0x83CA7EE4;
	sub_835FA6B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7EEC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA7EF4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7F00;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa6b8
	ctx.lr = 0x83CA7F0C;
	sub_835FA6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7F14;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA7F1C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa6b8
	ctx.lr = 0x83CA7F24;
	sub_835FA6B8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25283
	ctx.r3.s64 = ctx.r10.s64 + -25283;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA7F5C;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA7F74"))) PPC_WEAK_FUNC(sub_83CA7F74);
PPC_FUNC_IMPL(__imp__sub_83CA7F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA7F78"))) PPC_WEAK_FUNC(sub_83CA7F78);
PPC_FUNC_IMPL(__imp__sub_83CA7F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28244
	ctx.r31.s64 = ctx.r11.s64 + 28244;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7FA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa728
	ctx.lr = 0x83CA7FAC;
	sub_835FA728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7FB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA7FBC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA7FC8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa728
	ctx.lr = 0x83CA7FD4;
	sub_835FA728(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA7FDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA7FE4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa728
	ctx.lr = 0x83CA7FEC;
	sub_835FA728(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25217
	ctx.r3.s64 = ctx.r10.s64 + -25217;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA800C;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8024"))) PPC_WEAK_FUNC(sub_83CA8024);
PPC_FUNC_IMPL(__imp__sub_83CA8024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA8028"))) PPC_WEAK_FUNC(sub_83CA8028);
PPC_FUNC_IMPL(__imp__sub_83CA8028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28260
	ctx.r31.s64 = ctx.r11.s64 + 28260;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8050;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa798
	ctx.lr = 0x83CA805C;
	sub_835FA798(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8064;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA806C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8078;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa798
	ctx.lr = 0x83CA8084;
	sub_835FA798(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA808C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8094;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa798
	ctx.lr = 0x83CA809C;
	sub_835FA798(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25230
	ctx.r3.s64 = ctx.r10.s64 + -25230;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA80BC;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA80D4"))) PPC_WEAK_FUNC(sub_83CA80D4);
PPC_FUNC_IMPL(__imp__sub_83CA80D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA80D8"))) PPC_WEAK_FUNC(sub_83CA80D8);
PPC_FUNC_IMPL(__imp__sub_83CA80D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,28368
	ctx.r31.s64 = ctx.r11.s64 + 28368;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8100;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa808
	ctx.lr = 0x83CA810C;
	sub_835FA808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8114;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA811C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8128;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa808
	ctx.lr = 0x83CA8134;
	sub_835FA808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA813C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA8144;
	sub_82573C50(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8150;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa808
	ctx.lr = 0x83CA815C;
	sub_835FA808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8164;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA816C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8178;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa808
	ctx.lr = 0x83CA8184;
	sub_835FA808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA818C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA8194;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA81A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa808
	ctx.lr = 0x83CA81AC;
	sub_835FA808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA81B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA81BC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA81C8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa808
	ctx.lr = 0x83CA81D4;
	sub_835FA808(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA81DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA81E4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa808
	ctx.lr = 0x83CA81EC;
	sub_835FA808(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25261
	ctx.r3.s64 = ctx.r10.s64 + -25261;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA8224;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA823C"))) PPC_WEAK_FUNC(sub_83CA823C);
PPC_FUNC_IMPL(__imp__sub_83CA823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA8240"))) PPC_WEAK_FUNC(sub_83CA8240);
PPC_FUNC_IMPL(__imp__sub_83CA8240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,28484
	ctx.r31.s64 = ctx.r11.s64 + 28484;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8268;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fa878
	ctx.lr = 0x83CA8274;
	sub_835FA878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA827C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA8284;
	sub_82573C50(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8290;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa878
	ctx.lr = 0x83CA829C;
	sub_835FA878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA82A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA82AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA82B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa878
	ctx.lr = 0x83CA82C4;
	sub_835FA878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA82CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA82D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA82E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa878
	ctx.lr = 0x83CA82EC;
	sub_835FA878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA82F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA82FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8308;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa878
	ctx.lr = 0x83CA8314;
	sub_835FA878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA831C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA8324;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8330;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa878
	ctx.lr = 0x83CA833C;
	sub_835FA878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8344;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA834C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8358;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa878
	ctx.lr = 0x83CA8364;
	sub_835FA878(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA836C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA8374;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa878
	ctx.lr = 0x83CA837C;
	sub_835FA878(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25293
	ctx.r3.s64 = ctx.r10.s64 + -25293;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA83BC;
	sub_825731E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA83D4"))) PPC_WEAK_FUNC(sub_83CA83D4);
PPC_FUNC_IMPL(__imp__sub_83CA83D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA83D8"))) PPC_WEAK_FUNC(sub_83CA83D8);
PPC_FUNC_IMPL(__imp__sub_83CA83D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28528
	ctx.r31.s64 = ctx.r11.s64 + 28528;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8400;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa8e8
	ctx.lr = 0x83CA840C;
	sub_835FA8E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8414;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA841C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8428;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa8e8
	ctx.lr = 0x83CA8434;
	sub_835FA8E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA843C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8444;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8450;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa8e8
	ctx.lr = 0x83CA845C;
	sub_835FA8E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8464;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA846C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8478;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa8e8
	ctx.lr = 0x83CA8484;
	sub_835FA8E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA848C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA8494;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa8e8
	ctx.lr = 0x83CA849C;
	sub_835FA8E8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25220
	ctx.r3.s64 = ctx.r10.s64 + -25220;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA84C4;
	sub_825731E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA84DC"))) PPC_WEAK_FUNC(sub_83CA84DC);
PPC_FUNC_IMPL(__imp__sub_83CA84DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA84E0"))) PPC_WEAK_FUNC(sub_83CA84E0);
PPC_FUNC_IMPL(__imp__sub_83CA84E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,28604
	ctx.r31.s64 = ctx.r11.s64 + 28604;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8508;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fa958
	ctx.lr = 0x83CA8514;
	sub_835FA958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA851C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8524;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8530;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fa958
	ctx.lr = 0x83CA853C;
	sub_835FA958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8544;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA854C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8558;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fa958
	ctx.lr = 0x83CA8564;
	sub_835FA958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA856C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA8574;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8580;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa958
	ctx.lr = 0x83CA858C;
	sub_835FA958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8594;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA859C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA85A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa958
	ctx.lr = 0x83CA85B4;
	sub_835FA958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA85BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA85C4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA85D0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa958
	ctx.lr = 0x83CA85DC;
	sub_835FA958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA85E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA85EC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa958
	ctx.lr = 0x83CA85F4;
	sub_835FA958(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25207
	ctx.r3.s64 = ctx.r10.s64 + -25207;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA862C;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8644"))) PPC_WEAK_FUNC(sub_83CA8644);
PPC_FUNC_IMPL(__imp__sub_83CA8644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA8648"))) PPC_WEAK_FUNC(sub_83CA8648);
PPC_FUNC_IMPL(__imp__sub_83CA8648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28640
	ctx.r31.s64 = ctx.r11.s64 + 28640;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8670;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fa9c8
	ctx.lr = 0x83CA867C;
	sub_835FA9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8684;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA868C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8698;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fa9c8
	ctx.lr = 0x83CA86A4;
	sub_835FA9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA86AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA86B4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA86C0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa9c8
	ctx.lr = 0x83CA86CC;
	sub_835FA9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA86D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA86DC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fa9c8
	ctx.lr = 0x83CA86E4;
	sub_835FA9C8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25210
	ctx.r3.s64 = ctx.r10.s64 + -25210;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA8708;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8720"))) PPC_WEAK_FUNC(sub_83CA8720);
PPC_FUNC_IMPL(__imp__sub_83CA8720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28704
	ctx.r31.s64 = ctx.r11.s64 + 28704;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8748;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835faa38
	ctx.lr = 0x83CA8754;
	sub_835FAA38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA875C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA8764;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8770;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835faa38
	ctx.lr = 0x83CA877C;
	sub_835FAA38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8784;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA878C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8798;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835faa38
	ctx.lr = 0x83CA87A4;
	sub_835FAA38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA87AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA87B4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835faa38
	ctx.lr = 0x83CA87BC;
	sub_835FAA38(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25298
	ctx.r3.s64 = ctx.r10.s64 + -25298;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA87E0;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA87F8"))) PPC_WEAK_FUNC(sub_83CA87F8);
PPC_FUNC_IMPL(__imp__sub_83CA87F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28752
	ctx.r31.s64 = ctx.r11.s64 + 28752;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8820;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835faaa8
	ctx.lr = 0x83CA882C;
	sub_835FAAA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8834;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA883C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8848;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835faaa8
	ctx.lr = 0x83CA8854;
	sub_835FAAA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA885C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8864;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8870;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835faaa8
	ctx.lr = 0x83CA887C;
	sub_835FAAA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8884;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA888C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835faaa8
	ctx.lr = 0x83CA8894;
	sub_835FAAA8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25311
	ctx.r3.s64 = ctx.r10.s64 + -25311;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA88B8;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA88D0"))) PPC_WEAK_FUNC(sub_83CA88D0);
PPC_FUNC_IMPL(__imp__sub_83CA88D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,28808
	ctx.r31.s64 = ctx.r11.s64 + 28808;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82573ce0
	ctx.lr = 0x83CA88F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fab18
	ctx.lr = 0x83CA8904;
	sub_835FAB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA890C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8914;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8920;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fab18
	ctx.lr = 0x83CA892C;
	sub_835FAB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8934;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA893C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8948;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fab18
	ctx.lr = 0x83CA8954;
	sub_835FAB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA895C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA8964;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8970;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fab18
	ctx.lr = 0x83CA897C;
	sub_835FAB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8984;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA898C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8998;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fab18
	ctx.lr = 0x83CA89A4;
	sub_835FAB18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA89AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA89B4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fab18
	ctx.lr = 0x83CA89BC;
	sub_835FAB18(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25204
	ctx.r3.s64 = ctx.r10.s64 + -25204;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA89EC;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8A04"))) PPC_WEAK_FUNC(sub_83CA8A04);
PPC_FUNC_IMPL(__imp__sub_83CA8A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA8A08"))) PPC_WEAK_FUNC(sub_83CA8A08);
PPC_FUNC_IMPL(__imp__sub_83CA8A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28828
	ctx.r31.s64 = ctx.r11.s64 + 28828;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8A30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fab88
	ctx.lr = 0x83CA8A3C;
	sub_835FAB88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8A44;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA8A4C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8A58;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fab88
	ctx.lr = 0x83CA8A64;
	sub_835FAB88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8A6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8A74;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fab88
	ctx.lr = 0x83CA8A7C;
	sub_835FAB88(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25234
	ctx.r3.s64 = ctx.r10.s64 + -25234;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA8A9C;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8AB4"))) PPC_WEAK_FUNC(sub_83CA8AB4);
PPC_FUNC_IMPL(__imp__sub_83CA8AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA8AB8"))) PPC_WEAK_FUNC(sub_83CA8AB8);
PPC_FUNC_IMPL(__imp__sub_83CA8AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28880
	ctx.r31.s64 = ctx.r11.s64 + 28880;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8AE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fabf8
	ctx.lr = 0x83CA8AEC;
	sub_835FABF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8AF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA8AFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8B08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fabf8
	ctx.lr = 0x83CA8B14;
	sub_835FABF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8B1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8B24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8B30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fabf8
	ctx.lr = 0x83CA8B3C;
	sub_835FABF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8B44;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA8B4C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8B58;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fabf8
	ctx.lr = 0x83CA8B64;
	sub_835FABF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8B6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA8B74;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fabf8
	ctx.lr = 0x83CA8B7C;
	sub_835FABF8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25279
	ctx.r3.s64 = ctx.r10.s64 + -25279;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA8BA4;
	sub_825731E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8BBC"))) PPC_WEAK_FUNC(sub_83CA8BBC);
PPC_FUNC_IMPL(__imp__sub_83CA8BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA8BC0"))) PPC_WEAK_FUNC(sub_83CA8BC0);
PPC_FUNC_IMPL(__imp__sub_83CA8BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28912
	ctx.r31.s64 = ctx.r11.s64 + 28912;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8BE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fac68
	ctx.lr = 0x83CA8BF4;
	sub_835FAC68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8BFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA8C04;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8C10;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fac68
	ctx.lr = 0x83CA8C1C;
	sub_835FAC68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8C24;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8C2C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fac68
	ctx.lr = 0x83CA8C34;
	sub_835FAC68(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25288
	ctx.r3.s64 = ctx.r10.s64 + -25288;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA8C54;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8C6C"))) PPC_WEAK_FUNC(sub_83CA8C6C);
PPC_FUNC_IMPL(__imp__sub_83CA8C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA8C70"))) PPC_WEAK_FUNC(sub_83CA8C70);
PPC_FUNC_IMPL(__imp__sub_83CA8C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28936
	ctx.r31.s64 = ctx.r11.s64 + 28936;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8C98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835facd8
	ctx.lr = 0x83CA8CA4;
	sub_835FACD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8CAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA8CB4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8CC0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835facd8
	ctx.lr = 0x83CA8CCC;
	sub_835FACD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8CD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8CDC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8CE8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835facd8
	ctx.lr = 0x83CA8CF4;
	sub_835FACD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8CFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA8D04;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835facd8
	ctx.lr = 0x83CA8D0C;
	sub_835FACD8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25322
	ctx.r3.s64 = ctx.r10.s64 + -25322;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA8D30;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8D48"))) PPC_WEAK_FUNC(sub_83CA8D48);
PPC_FUNC_IMPL(__imp__sub_83CA8D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28952
	ctx.r31.s64 = ctx.r11.s64 + 28952;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8D70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fad48
	ctx.lr = 0x83CA8D7C;
	sub_835FAD48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8D84;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA8D8C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8D98;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fad48
	ctx.lr = 0x83CA8DA4;
	sub_835FAD48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8DAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8DB4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fad48
	ctx.lr = 0x83CA8DBC;
	sub_835FAD48(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25248
	ctx.r3.s64 = ctx.r10.s64 + -25248;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA8DDC;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8DF4"))) PPC_WEAK_FUNC(sub_83CA8DF4);
PPC_FUNC_IMPL(__imp__sub_83CA8DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA8DF8"))) PPC_WEAK_FUNC(sub_83CA8DF8);
PPC_FUNC_IMPL(__imp__sub_83CA8DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28976
	ctx.r31.s64 = ctx.r11.s64 + 28976;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8E20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fadb8
	ctx.lr = 0x83CA8E2C;
	sub_835FADB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8E34;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA8E3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8E48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fadb8
	ctx.lr = 0x83CA8E54;
	sub_835FADB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8E5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8E64;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8E70;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fadb8
	ctx.lr = 0x83CA8E7C;
	sub_835FADB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8E84;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA8E8C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fadb8
	ctx.lr = 0x83CA8E94;
	sub_835FADB8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25226
	ctx.r3.s64 = ctx.r10.s64 + -25226;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA8EB8;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA8ED0"))) PPC_WEAK_FUNC(sub_83CA8ED0);
PPC_FUNC_IMPL(__imp__sub_83CA8ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,29040
	ctx.r31.s64 = ctx.r11.s64 + 29040;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8EF8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fae28
	ctx.lr = 0x83CA8F04;
	sub_835FAE28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8F0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA8F14;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8F20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fae28
	ctx.lr = 0x83CA8F2C;
	sub_835FAE28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8F34;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA8F3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8F48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fae28
	ctx.lr = 0x83CA8F54;
	sub_835FAE28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8F5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA8F64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8F70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fae28
	ctx.lr = 0x83CA8F7C;
	sub_835FAE28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8F84;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA8F8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8F98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fae28
	ctx.lr = 0x83CA8FA4;
	sub_835FAE28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8FAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA8FB4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA8FC0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fae28
	ctx.lr = 0x83CA8FCC;
	sub_835FAE28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA8FD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA8FDC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fae28
	ctx.lr = 0x83CA8FE4;
	sub_835FAE28(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25305
	ctx.r3.s64 = ctx.r10.s64 + -25305;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA901C;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA9034"))) PPC_WEAK_FUNC(sub_83CA9034);
PPC_FUNC_IMPL(__imp__sub_83CA9034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9038"))) PPC_WEAK_FUNC(sub_83CA9038);
PPC_FUNC_IMPL(__imp__sub_83CA9038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,29116
	ctx.r31.s64 = ctx.r11.s64 + 29116;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9060;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fae98
	ctx.lr = 0x83CA906C;
	sub_835FAE98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9074;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA907C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9088;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fae98
	ctx.lr = 0x83CA9094;
	sub_835FAE98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA909C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA90A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA90B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fae98
	ctx.lr = 0x83CA90BC;
	sub_835FAE98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA90C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA90CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA90D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fae98
	ctx.lr = 0x83CA90E4;
	sub_835FAE98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA90EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA90F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9100;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fae98
	ctx.lr = 0x83CA910C;
	sub_835FAE98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9114;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA911C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9128;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fae98
	ctx.lr = 0x83CA9134;
	sub_835FAE98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA913C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA9144;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fae98
	ctx.lr = 0x83CA914C;
	sub_835FAE98(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25209
	ctx.r3.s64 = ctx.r10.s64 + -25209;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA9184;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA919C"))) PPC_WEAK_FUNC(sub_83CA919C);
PPC_FUNC_IMPL(__imp__sub_83CA919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA91A0"))) PPC_WEAK_FUNC(sub_83CA91A0);
PPC_FUNC_IMPL(__imp__sub_83CA91A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,29144
	ctx.r31.s64 = ctx.r11.s64 + 29144;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82573ce0
	ctx.lr = 0x83CA91C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835faf08
	ctx.lr = 0x83CA91D4;
	sub_835FAF08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA91DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA91E4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA91F0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835faf08
	ctx.lr = 0x83CA91FC;
	sub_835FAF08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9204;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA920C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835faf08
	ctx.lr = 0x83CA9214;
	sub_835FAF08(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25205
	ctx.r3.s64 = ctx.r10.s64 + -25205;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA9234;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA924C"))) PPC_WEAK_FUNC(sub_83CA924C);
PPC_FUNC_IMPL(__imp__sub_83CA924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9250"))) PPC_WEAK_FUNC(sub_83CA9250);
PPC_FUNC_IMPL(__imp__sub_83CA9250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,29168
	ctx.r31.s64 = ctx.r11.s64 + 29168;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9278;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835faf78
	ctx.lr = 0x83CA9284;
	sub_835FAF78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA928C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA9294;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA92A0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835faf78
	ctx.lr = 0x83CA92AC;
	sub_835FAF78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA92B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA92BC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835faf78
	ctx.lr = 0x83CA92C4;
	sub_835FAF78(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25317
	ctx.r3.s64 = ctx.r10.s64 + -25317;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA92E4;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA92FC"))) PPC_WEAK_FUNC(sub_83CA92FC);
PPC_FUNC_IMPL(__imp__sub_83CA92FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9300"))) PPC_WEAK_FUNC(sub_83CA9300);
PPC_FUNC_IMPL(__imp__sub_83CA9300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,29228
	ctx.r31.s64 = ctx.r11.s64 + 29228;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9328;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fafe8
	ctx.lr = 0x83CA9334;
	sub_835FAFE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA933C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA9344;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9350;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fafe8
	ctx.lr = 0x83CA935C;
	sub_835FAFE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9364;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA936C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9378;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fafe8
	ctx.lr = 0x83CA9384;
	sub_835FAFE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA938C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA9394;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA93A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fafe8
	ctx.lr = 0x83CA93AC;
	sub_835FAFE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA93B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA93BC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA93C8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fafe8
	ctx.lr = 0x83CA93D4;
	sub_835FAFE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA93DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA93E4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fafe8
	ctx.lr = 0x83CA93EC;
	sub_835FAFE8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25228
	ctx.r3.s64 = ctx.r10.s64 + -25228;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA941C;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA9434"))) PPC_WEAK_FUNC(sub_83CA9434);
PPC_FUNC_IMPL(__imp__sub_83CA9434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9438"))) PPC_WEAK_FUNC(sub_83CA9438);
PPC_FUNC_IMPL(__imp__sub_83CA9438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,29280
	ctx.r31.s64 = ctx.r11.s64 + 29280;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9460;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb058
	ctx.lr = 0x83CA946C;
	sub_835FB058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9474;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA947C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9488;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb058
	ctx.lr = 0x83CA9494;
	sub_835FB058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA949C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA94A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA94B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb058
	ctx.lr = 0x83CA94BC;
	sub_835FB058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA94C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA94CC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA94D8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb058
	ctx.lr = 0x83CA94E4;
	sub_835FB058(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA94EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA94F4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb058
	ctx.lr = 0x83CA94FC;
	sub_835FB058(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25199
	ctx.r3.s64 = ctx.r10.s64 + -25199;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA9524;
	sub_825731E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA953C"))) PPC_WEAK_FUNC(sub_83CA953C);
PPC_FUNC_IMPL(__imp__sub_83CA953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9540"))) PPC_WEAK_FUNC(sub_83CA9540);
PPC_FUNC_IMPL(__imp__sub_83CA9540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,29384
	ctx.r31.s64 = ctx.r11.s64 + 29384;
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9568;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA9574;
	sub_835FB0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA957C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA9584;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9590;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA959C;
	sub_835FB0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA95A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA95AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA95B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA95C4;
	sub_835FB0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA95CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA95D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CA95E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA95EC;
	sub_835FB0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA95F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CA95FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9608;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA9614;
	sub_835FB0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA961C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA9624;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9630;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA963C;
	sub_835FB0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9644;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA964C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9658;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA9664;
	sub_835FB0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA966C;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA9674;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9680;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA968C;
	sub_835FB0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9694;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CA969C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CA96A8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA96B4;
	sub_835FB0C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA96BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CA96C4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb0c8
	ctx.lr = 0x83CA96CC;
	sub_835FB0C8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r3,r10,-25296
	ctx.r3.s64 = ctx.r10.s64 + -25296;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA971C;
	sub_825731E0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA9734"))) PPC_WEAK_FUNC(sub_83CA9734);
PPC_FUNC_IMPL(__imp__sub_83CA9734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9738"))) PPC_WEAK_FUNC(sub_83CA9738);
PPC_FUNC_IMPL(__imp__sub_83CA9738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,29404
	ctx.r31.s64 = ctx.r11.s64 + 29404;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9760;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb138
	ctx.lr = 0x83CA976C;
	sub_835FB138(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9774;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA977C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9788;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb138
	ctx.lr = 0x83CA9794;
	sub_835FB138(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA979C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA97A4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA97B0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb138
	ctx.lr = 0x83CA97BC;
	sub_835FB138(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA97C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA97CC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb138
	ctx.lr = 0x83CA97D4;
	sub_835FB138(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25206
	ctx.r3.s64 = ctx.r10.s64 + -25206;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA97F8;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA9810"))) PPC_WEAK_FUNC(sub_83CA9810);
PPC_FUNC_IMPL(__imp__sub_83CA9810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,29460
	ctx.r31.s64 = ctx.r11.s64 + 29460;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9838;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb1a8
	ctx.lr = 0x83CA9844;
	sub_835FB1A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA984C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA9854;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9860;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb1a8
	ctx.lr = 0x83CA986C;
	sub_835FB1A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9874;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA987C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9888;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb1a8
	ctx.lr = 0x83CA9894;
	sub_835FB1A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA989C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA98A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA98B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb1a8
	ctx.lr = 0x83CA98BC;
	sub_835FB1A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA98C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA98CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA98D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb1a8
	ctx.lr = 0x83CA98E4;
	sub_835FB1A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA98EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA98F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9900;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb1a8
	ctx.lr = 0x83CA990C;
	sub_835FB1A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9914;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA991C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9928;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb1a8
	ctx.lr = 0x83CA9934;
	sub_835FB1A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA993C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA9944;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb1a8
	ctx.lr = 0x83CA994C;
	sub_835FB1A8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25299
	ctx.r3.s64 = ctx.r10.s64 + -25299;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA998C;
	sub_825731E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA99A4"))) PPC_WEAK_FUNC(sub_83CA99A4);
PPC_FUNC_IMPL(__imp__sub_83CA99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA99A8"))) PPC_WEAK_FUNC(sub_83CA99A8);
PPC_FUNC_IMPL(__imp__sub_83CA99A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,29548
	ctx.r31.s64 = ctx.r11.s64 + 29548;
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// bl 0x82573ce0
	ctx.lr = 0x83CA99D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb218
	ctx.lr = 0x83CA99DC;
	sub_835FB218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA99E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA99EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA99F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb218
	ctx.lr = 0x83CA9A04;
	sub_835FB218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9A0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA9A14;
	sub_82573C50(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9A20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb218
	ctx.lr = 0x83CA9A2C;
	sub_835FB218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9A34;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA9A3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9A48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb218
	ctx.lr = 0x83CA9A54;
	sub_835FB218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9A5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA9A64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9A70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb218
	ctx.lr = 0x83CA9A7C;
	sub_835FB218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9A84;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CA9A8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9A98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb218
	ctx.lr = 0x83CA9AA4;
	sub_835FB218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9AAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CA9AB4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9AC0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb218
	ctx.lr = 0x83CA9ACC;
	sub_835FB218(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9AD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CA9ADC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb218
	ctx.lr = 0x83CA9AE4;
	sub_835FB218(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25260
	ctx.r3.s64 = ctx.r10.s64 + -25260;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA9B24;
	sub_825731E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA9B3C"))) PPC_WEAK_FUNC(sub_83CA9B3C);
PPC_FUNC_IMPL(__imp__sub_83CA9B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9B40"))) PPC_WEAK_FUNC(sub_83CA9B40);
PPC_FUNC_IMPL(__imp__sub_83CA9B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,29592
	ctx.r31.s64 = ctx.r11.s64 + 29592;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9B68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb288
	ctx.lr = 0x83CA9B74;
	sub_835FB288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9B7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA9B84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9B90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb288
	ctx.lr = 0x83CA9B9C;
	sub_835FB288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9BA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA9BAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9BB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb288
	ctx.lr = 0x83CA9BC4;
	sub_835FB288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9BCC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CA9BD4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9BE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb288
	ctx.lr = 0x83CA9BEC;
	sub_835FB288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9BF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CA9BFC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9C08;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb288
	ctx.lr = 0x83CA9C14;
	sub_835FB288(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9C1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CA9C24;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb288
	ctx.lr = 0x83CA9C2C;
	sub_835FB288(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25306
	ctx.r3.s64 = ctx.r10.s64 + -25306;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CA9C5C;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA9C74"))) PPC_WEAK_FUNC(sub_83CA9C74);
PPC_FUNC_IMPL(__imp__sub_83CA9C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9C78"))) PPC_WEAK_FUNC(sub_83CA9C78);
PPC_FUNC_IMPL(__imp__sub_83CA9C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,29612
	ctx.r31.s64 = ctx.r11.s64 + 29612;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9CA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb2f8
	ctx.lr = 0x83CA9CAC;
	sub_835FB2F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9CB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA9CBC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9CC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb2f8
	ctx.lr = 0x83CA9CD4;
	sub_835FB2F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9CDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA9CE4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9CF0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb2f8
	ctx.lr = 0x83CA9CFC;
	sub_835FB2F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9D04;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CA9D0C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb2f8
	ctx.lr = 0x83CA9D14;
	sub_835FB2F8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25257
	ctx.r3.s64 = ctx.r10.s64 + -25257;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA9D38;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA9D50"))) PPC_WEAK_FUNC(sub_83CA9D50);
PPC_FUNC_IMPL(__imp__sub_83CA9D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,29624
	ctx.r31.s64 = ctx.r11.s64 + 29624;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9D78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb368
	ctx.lr = 0x83CA9D84;
	sub_835FB368(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9D8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CA9D94;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9DA0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb368
	ctx.lr = 0x83CA9DAC;
	sub_835FB368(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9DB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CA9DBC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb368
	ctx.lr = 0x83CA9DC4;
	sub_835FB368(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25232
	ctx.r3.s64 = ctx.r10.s64 + -25232;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CA9DE4;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA9DFC"))) PPC_WEAK_FUNC(sub_83CA9DFC);
PPC_FUNC_IMPL(__imp__sub_83CA9DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA9E00"))) PPC_WEAK_FUNC(sub_83CA9E00);
PPC_FUNC_IMPL(__imp__sub_83CA9E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83CA9E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2656
	ctx.r3.s64 = ctx.r1.s64 + 2656;
	// addi r31,r11,31524
	ctx.r31.s64 = ctx.r11.s64 + 31524;
	// addi r4,r31,-1892
	ctx.r4.s64 = ctx.r31.s64 + -1892;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9E20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,113
	ctx.r3.s64 = 113;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9E2C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9E34;
	sub_82573D70(ctx, base);
	// addi r3,r1,2656
	ctx.r3.s64 = ctx.r1.s64 + 2656;
	// bl 0x82573c50
	ctx.lr = 0x83CA9E3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1876
	ctx.r4.s64 = ctx.r31.s64 + -1876;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9E48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9E54;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9E5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82573c50
	ctx.lr = 0x83CA9E64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1860
	ctx.r4.s64 = ctx.r31.s64 + -1860;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9E70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,111
	ctx.r3.s64 = 111;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9E7C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9E84;
	sub_82573D70(ctx, base);
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// bl 0x82573c50
	ctx.lr = 0x83CA9E8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1844
	ctx.r4.s64 = ctx.r31.s64 + -1844;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9E98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9EA4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9EAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82573c50
	ctx.lr = 0x83CA9EB4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1828
	ctx.r4.s64 = ctx.r31.s64 + -1828;
	// addi r3,r1,2336
	ctx.r3.s64 = ctx.r1.s64 + 2336;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9EC0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,109
	ctx.r3.s64 = 109;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9ECC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9ED4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2336
	ctx.r3.s64 = ctx.r1.s64 + 2336;
	// bl 0x82573c50
	ctx.lr = 0x83CA9EDC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1812
	ctx.r4.s64 = ctx.r31.s64 + -1812;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9EE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9EF4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9EFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82573c50
	ctx.lr = 0x83CA9F04;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1796
	ctx.r4.s64 = ctx.r31.s64 + -1796;
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9F10;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,107
	ctx.r3.s64 = 107;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9F1C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9F24;
	sub_82573D70(ctx, base);
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x82573c50
	ctx.lr = 0x83CA9F2C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1780
	ctx.r4.s64 = ctx.r31.s64 + -1780;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9F38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,106
	ctx.r3.s64 = 106;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9F44;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9F4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82573c50
	ctx.lr = 0x83CA9F54;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1764
	ctx.r4.s64 = ctx.r31.s64 + -1764;
	// addi r3,r1,2560
	ctx.r3.s64 = ctx.r1.s64 + 2560;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9F60;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,105
	ctx.r3.s64 = 105;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9F6C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9F74;
	sub_82573D70(ctx, base);
	// addi r3,r1,2560
	ctx.r3.s64 = ctx.r1.s64 + 2560;
	// bl 0x82573c50
	ctx.lr = 0x83CA9F7C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1748
	ctx.r4.s64 = ctx.r31.s64 + -1748;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9F88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9F94;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9F9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82573c50
	ctx.lr = 0x83CA9FA4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1732
	ctx.r4.s64 = ctx.r31.s64 + -1732;
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9FB0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,103
	ctx.r3.s64 = 103;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9FBC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9FC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// bl 0x82573c50
	ctx.lr = 0x83CA9FCC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1716
	ctx.r4.s64 = ctx.r31.s64 + -1716;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82573ce0
	ctx.lr = 0x83CA9FD8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,102
	ctx.r3.s64 = 102;
	// bl 0x835fb3d8
	ctx.lr = 0x83CA9FE4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CA9FEC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82573c50
	ctx.lr = 0x83CA9FF4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1700
	ctx.r4.s64 = ctx.r31.s64 + -1700;
	// addi r3,r1,2368
	ctx.r3.s64 = ctx.r1.s64 + 2368;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA000;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA00C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA014;
	sub_82573D70(ctx, base);
	// addi r3,r1,2368
	ctx.r3.s64 = ctx.r1.s64 + 2368;
	// bl 0x82573c50
	ctx.lr = 0x83CAA01C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1684
	ctx.r4.s64 = ctx.r31.s64 + -1684;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA028;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA034;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA03C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82573c50
	ctx.lr = 0x83CAA044;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1668
	ctx.r4.s64 = ctx.r31.s64 + -1668;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA050;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,99
	ctx.r3.s64 = 99;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA05C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA064;
	sub_82573D70(ctx, base);
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82573c50
	ctx.lr = 0x83CAA06C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1652
	ctx.r4.s64 = ctx.r31.s64 + -1652;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA078;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,98
	ctx.r3.s64 = 98;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA084;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA08C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82573c50
	ctx.lr = 0x83CAA094;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1636
	ctx.r4.s64 = ctx.r31.s64 + -1636;
	// addi r3,r1,2720
	ctx.r3.s64 = ctx.r1.s64 + 2720;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA0A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,97
	ctx.r3.s64 = 97;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA0AC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA0B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2720
	ctx.r3.s64 = ctx.r1.s64 + 2720;
	// bl 0x82573c50
	ctx.lr = 0x83CAA0BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1620
	ctx.r4.s64 = ctx.r31.s64 + -1620;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA0C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA0D4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA0DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82573c50
	ctx.lr = 0x83CAA0E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1604
	ctx.r4.s64 = ctx.r31.s64 + -1604;
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA0F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,95
	ctx.r3.s64 = 95;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA0FC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA104;
	sub_82573D70(ctx, base);
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x82573c50
	ctx.lr = 0x83CAA10C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1588
	ctx.r4.s64 = ctx.r31.s64 + -1588;
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA118;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,94
	ctx.r3.s64 = 94;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA124;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA12C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82573c50
	ctx.lr = 0x83CAA134;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1572
	ctx.r4.s64 = ctx.r31.s64 + -1572;
	// addi r3,r1,2400
	ctx.r3.s64 = ctx.r1.s64 + 2400;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA140;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,93
	ctx.r3.s64 = 93;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA14C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA154;
	sub_82573D70(ctx, base);
	// addi r3,r1,2400
	ctx.r3.s64 = ctx.r1.s64 + 2400;
	// bl 0x82573c50
	ctx.lr = 0x83CAA15C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1556
	ctx.r4.s64 = ctx.r31.s64 + -1556;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA168;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA174;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA17C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82573c50
	ctx.lr = 0x83CAA184;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1540
	ctx.r4.s64 = ctx.r31.s64 + -1540;
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA190;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,91
	ctx.r3.s64 = 91;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA19C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA1A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x82573c50
	ctx.lr = 0x83CAA1AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1524
	ctx.r4.s64 = ctx.r31.s64 + -1524;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA1B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,90
	ctx.r3.s64 = 90;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA1C4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA1CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82573c50
	ctx.lr = 0x83CAA1D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1508
	ctx.r4.s64 = ctx.r31.s64 + -1508;
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA1E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,89
	ctx.r3.s64 = 89;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA1EC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA1F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// bl 0x82573c50
	ctx.lr = 0x83CAA1FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1492
	ctx.r4.s64 = ctx.r31.s64 + -1492;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA208;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA214;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA21C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82573c50
	ctx.lr = 0x83CAA224;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1476
	ctx.r4.s64 = ctx.r31.s64 + -1476;
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA230;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,87
	ctx.r3.s64 = 87;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA23C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA244;
	sub_82573D70(ctx, base);
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// bl 0x82573c50
	ctx.lr = 0x83CAA24C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1460
	ctx.r4.s64 = ctx.r31.s64 + -1460;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA258;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,86
	ctx.r3.s64 = 86;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA264;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA26C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82573c50
	ctx.lr = 0x83CAA274;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1444
	ctx.r4.s64 = ctx.r31.s64 + -1444;
	// addi r3,r1,2432
	ctx.r3.s64 = ctx.r1.s64 + 2432;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA280;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,85
	ctx.r3.s64 = 85;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA28C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA294;
	sub_82573D70(ctx, base);
	// addi r3,r1,2432
	ctx.r3.s64 = ctx.r1.s64 + 2432;
	// bl 0x82573c50
	ctx.lr = 0x83CAA29C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1428
	ctx.r4.s64 = ctx.r31.s64 + -1428;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA2A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA2B4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA2BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82573c50
	ctx.lr = 0x83CAA2C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1412
	ctx.r4.s64 = ctx.r31.s64 + -1412;
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA2D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA2DC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA2E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// bl 0x82573c50
	ctx.lr = 0x83CAA2EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1396
	ctx.r4.s64 = ctx.r31.s64 + -1396;
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA2F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,82
	ctx.r3.s64 = 82;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA304;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA30C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82573c50
	ctx.lr = 0x83CAA314;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1380
	ctx.r4.s64 = ctx.r31.s64 + -1380;
	// addi r3,r1,2688
	ctx.r3.s64 = ctx.r1.s64 + 2688;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA320;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,81
	ctx.r3.s64 = 81;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA32C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA334;
	sub_82573D70(ctx, base);
	// addi r3,r1,2688
	ctx.r3.s64 = ctx.r1.s64 + 2688;
	// bl 0x82573c50
	ctx.lr = 0x83CAA33C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1364
	ctx.r4.s64 = ctx.r31.s64 + -1364;
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA348;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA354;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA35C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1504
	ctx.r3.s64 = ctx.r1.s64 + 1504;
	// bl 0x82573c50
	ctx.lr = 0x83CAA364;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1348
	ctx.r4.s64 = ctx.r31.s64 + -1348;
	// addi r3,r1,2144
	ctx.r3.s64 = ctx.r1.s64 + 2144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA370;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,79
	ctx.r3.s64 = 79;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA37C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA384;
	sub_82573D70(ctx, base);
	// addi r3,r1,2144
	ctx.r3.s64 = ctx.r1.s64 + 2144;
	// bl 0x82573c50
	ctx.lr = 0x83CAA38C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1332
	ctx.r4.s64 = ctx.r31.s64 + -1332;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA398;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA3A4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA3AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// bl 0x82573c50
	ctx.lr = 0x83CAA3B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1316
	ctx.r4.s64 = ctx.r31.s64 + -1316;
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA3C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,77
	ctx.r3.s64 = 77;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA3CC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA3D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x82573c50
	ctx.lr = 0x83CAA3DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1300
	ctx.r4.s64 = ctx.r31.s64 + -1300;
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA3E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA3F4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA3FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// bl 0x82573c50
	ctx.lr = 0x83CAA404;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1284
	ctx.r4.s64 = ctx.r31.s64 + -1284;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA410;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA41C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA424;
	sub_82573D70(ctx, base);
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82573c50
	ctx.lr = 0x83CAA42C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1268
	ctx.r4.s64 = ctx.r31.s64 + -1268;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA438;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,74
	ctx.r3.s64 = 74;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA444;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA44C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82573c50
	ctx.lr = 0x83CAA454;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1252
	ctx.r4.s64 = ctx.r31.s64 + -1252;
	// addi r3,r1,2624
	ctx.r3.s64 = ctx.r1.s64 + 2624;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA460;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA46C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA474;
	sub_82573D70(ctx, base);
	// addi r3,r1,2624
	ctx.r3.s64 = ctx.r1.s64 + 2624;
	// bl 0x82573c50
	ctx.lr = 0x83CAA47C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1236
	ctx.r4.s64 = ctx.r31.s64 + -1236;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA488;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA494;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA49C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82573c50
	ctx.lr = 0x83CAA4A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1220
	ctx.r4.s64 = ctx.r31.s64 + -1220;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA4B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA4BC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA4C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x82573c50
	ctx.lr = 0x83CAA4CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1204
	ctx.r4.s64 = ctx.r31.s64 + -1204;
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA4D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,70
	ctx.r3.s64 = 70;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA4E4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA4EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x82573c50
	ctx.lr = 0x83CAA4F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1188
	ctx.r4.s64 = ctx.r31.s64 + -1188;
	// addi r3,r1,2496
	ctx.r3.s64 = ctx.r1.s64 + 2496;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA500;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA50C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA514;
	sub_82573D70(ctx, base);
	// addi r3,r1,2496
	ctx.r3.s64 = ctx.r1.s64 + 2496;
	// bl 0x82573c50
	ctx.lr = 0x83CAA51C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1172
	ctx.r4.s64 = ctx.r31.s64 + -1172;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA528;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA534;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA53C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// bl 0x82573c50
	ctx.lr = 0x83CAA544;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1156
	ctx.r4.s64 = ctx.r31.s64 + -1156;
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA550;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA55C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA564;
	sub_82573D70(ctx, base);
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// bl 0x82573c50
	ctx.lr = 0x83CAA56C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1140
	ctx.r4.s64 = ctx.r31.s64 + -1140;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA578;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA584;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA58C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// bl 0x82573c50
	ctx.lr = 0x83CAA594;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1124
	ctx.r4.s64 = ctx.r31.s64 + -1124;
	// addi r3,r1,2752
	ctx.r3.s64 = ctx.r1.s64 + 2752;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA5A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,65
	ctx.r3.s64 = 65;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA5AC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA5B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2752
	ctx.r3.s64 = ctx.r1.s64 + 2752;
	// bl 0x82573c50
	ctx.lr = 0x83CAA5BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1108
	ctx.r4.s64 = ctx.r31.s64 + -1108;
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA5C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA5D4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA5DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// bl 0x82573c50
	ctx.lr = 0x83CAA5E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1092
	ctx.r4.s64 = ctx.r31.s64 + -1092;
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA5F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA5FC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA604;
	sub_82573D70(ctx, base);
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// bl 0x82573c50
	ctx.lr = 0x83CAA60C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1076
	ctx.r4.s64 = ctx.r31.s64 + -1076;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA618;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA624;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA62C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// bl 0x82573c50
	ctx.lr = 0x83CAA634;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1060
	ctx.r4.s64 = ctx.r31.s64 + -1060;
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA640;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,61
	ctx.r3.s64 = 61;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA64C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA654;
	sub_82573D70(ctx, base);
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// bl 0x82573c50
	ctx.lr = 0x83CAA65C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1044
	ctx.r4.s64 = ctx.r31.s64 + -1044;
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA668;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA674;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA67C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// bl 0x82573c50
	ctx.lr = 0x83CAA684;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1028
	ctx.r4.s64 = ctx.r31.s64 + -1028;
	// addi r3,r1,2304
	ctx.r3.s64 = ctx.r1.s64 + 2304;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA690;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,59
	ctx.r3.s64 = 59;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA69C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA6A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2304
	ctx.r3.s64 = ctx.r1.s64 + 2304;
	// bl 0x82573c50
	ctx.lr = 0x83CAA6AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-1012
	ctx.r4.s64 = ctx.r31.s64 + -1012;
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA6B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA6C4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA6CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// bl 0x82573c50
	ctx.lr = 0x83CAA6D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-996
	ctx.r4.s64 = ctx.r31.s64 + -996;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA6E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA6EC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA6F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82573c50
	ctx.lr = 0x83CAA6FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-980
	ctx.r4.s64 = ctx.r31.s64 + -980;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA708;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA714;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA71C;
	sub_82573D70(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82573c50
	ctx.lr = 0x83CAA724;
	sub_82573C50(ctx, base);
	// addi r4,r31,-964
	ctx.r4.s64 = ctx.r31.s64 + -964;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA730;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA73C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA744;
	sub_82573D70(ctx, base);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x82573c50
	ctx.lr = 0x83CAA74C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-948
	ctx.r4.s64 = ctx.r31.s64 + -948;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA758;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,54
	ctx.r3.s64 = 54;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA764;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA76C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82573c50
	ctx.lr = 0x83CAA774;
	sub_82573C50(ctx, base);
	// addi r4,r31,-932
	ctx.r4.s64 = ctx.r31.s64 + -932;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA780;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,53
	ctx.r3.s64 = 53;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA78C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA794;
	sub_82573D70(ctx, base);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82573c50
	ctx.lr = 0x83CAA79C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-916
	ctx.r4.s64 = ctx.r31.s64 + -916;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA7A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA7B4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA7BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x82573c50
	ctx.lr = 0x83CAA7C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-900
	ctx.r4.s64 = ctx.r31.s64 + -900;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA7D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA7DC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA7E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x82573c50
	ctx.lr = 0x83CAA7EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-884
	ctx.r4.s64 = ctx.r31.s64 + -884;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA7F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA804;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA80C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x82573c50
	ctx.lr = 0x83CAA814;
	sub_82573C50(ctx, base);
	// addi r4,r31,-868
	ctx.r4.s64 = ctx.r31.s64 + -868;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA820;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA82C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA834;
	sub_82573D70(ctx, base);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x82573c50
	ctx.lr = 0x83CAA83C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-852
	ctx.r4.s64 = ctx.r31.s64 + -852;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA848;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA854;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA85C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82573c50
	ctx.lr = 0x83CAA864;
	sub_82573C50(ctx, base);
	// addi r4,r31,-836
	ctx.r4.s64 = ctx.r31.s64 + -836;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA870;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA87C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA884;
	sub_82573D70(ctx, base);
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// bl 0x82573c50
	ctx.lr = 0x83CAA88C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-820
	ctx.r4.s64 = ctx.r31.s64 + -820;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA898;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA8A4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA8AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82573c50
	ctx.lr = 0x83CAA8B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-804
	ctx.r4.s64 = ctx.r31.s64 + -804;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA8C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA8CC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA8D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82573c50
	ctx.lr = 0x83CAA8DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-788
	ctx.r4.s64 = ctx.r31.s64 + -788;
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA8E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA8F4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA8FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1360
	ctx.r3.s64 = ctx.r1.s64 + 1360;
	// bl 0x82573c50
	ctx.lr = 0x83CAA904;
	sub_82573C50(ctx, base);
	// addi r4,r31,-772
	ctx.r4.s64 = ctx.r31.s64 + -772;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA910;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA91C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA924;
	sub_82573D70(ctx, base);
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82573c50
	ctx.lr = 0x83CAA92C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-756
	ctx.r4.s64 = ctx.r31.s64 + -756;
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA938;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA944;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA94C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// bl 0x82573c50
	ctx.lr = 0x83CAA954;
	sub_82573C50(ctx, base);
	// addi r4,r31,-740
	ctx.r4.s64 = ctx.r31.s64 + -740;
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA960;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA96C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA974;
	sub_82573D70(ctx, base);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// bl 0x82573c50
	ctx.lr = 0x83CAA97C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-724
	ctx.r4.s64 = ctx.r31.s64 + -724;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA988;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA994;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA99C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82573c50
	ctx.lr = 0x83CAA9A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-708
	ctx.r4.s64 = ctx.r31.s64 + -708;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA9B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA9BC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA9C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x82573c50
	ctx.lr = 0x83CAA9CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-692
	ctx.r4.s64 = ctx.r31.s64 + -692;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82573ce0
	ctx.lr = 0x83CAA9D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAA9E4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAA9EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82573c50
	ctx.lr = 0x83CAA9F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-676
	ctx.r4.s64 = ctx.r31.s64 + -676;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAA00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,37
	ctx.r3.s64 = 37;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAA0C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAA14;
	sub_82573D70(ctx, base);
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// bl 0x82573c50
	ctx.lr = 0x83CAAA1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-660
	ctx.r4.s64 = ctx.r31.s64 + -660;
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAA28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAA34;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAA3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1616
	ctx.r3.s64 = ctx.r1.s64 + 1616;
	// bl 0x82573c50
	ctx.lr = 0x83CAAA44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-644
	ctx.r4.s64 = ctx.r31.s64 + -644;
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAA50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAA5C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAA64;
	sub_82573D70(ctx, base);
	// addi r3,r1,1648
	ctx.r3.s64 = ctx.r1.s64 + 1648;
	// bl 0x82573c50
	ctx.lr = 0x83CAAA6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-628
	ctx.r4.s64 = ctx.r31.s64 + -628;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAA78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAA84;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAA8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x82573c50
	ctx.lr = 0x83CAAA94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-612
	ctx.r4.s64 = ctx.r31.s64 + -612;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAAA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAAAC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAAB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// bl 0x82573c50
	ctx.lr = 0x83CAAABC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-596
	ctx.r4.s64 = ctx.r31.s64 + -596;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAAC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAAD4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAADC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x82573c50
	ctx.lr = 0x83CAAAE4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-580
	ctx.r4.s64 = ctx.r31.s64 + -580;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAAF0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAAFC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAB04;
	sub_82573D70(ctx, base);
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82573c50
	ctx.lr = 0x83CAAB0C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAB18;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAB24;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAB2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x82573c50
	ctx.lr = 0x83CAAB34;
	sub_82573C50(ctx, base);
	// addi r4,r31,-548
	ctx.r4.s64 = ctx.r31.s64 + -548;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAB40;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAB4C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAB54;
	sub_82573D70(ctx, base);
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// bl 0x82573c50
	ctx.lr = 0x83CAAB5C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-532
	ctx.r4.s64 = ctx.r31.s64 + -532;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAB68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAB74;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAB7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x82573c50
	ctx.lr = 0x83CAAB84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-516
	ctx.r4.s64 = ctx.r31.s64 + -516;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAB90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAB9C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAABA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82573c50
	ctx.lr = 0x83CAABAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82573ce0
	ctx.lr = 0x83CAABB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAABC4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAABCC;
	sub_82573D70(ctx, base);
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x82573c50
	ctx.lr = 0x83CAABD4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-484
	ctx.r4.s64 = ctx.r31.s64 + -484;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82573ce0
	ctx.lr = 0x83CAABE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAABEC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAABF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82573c50
	ctx.lr = 0x83CAABFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-468
	ctx.r4.s64 = ctx.r31.s64 + -468;
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAC08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAC14;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAC1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82573c50
	ctx.lr = 0x83CAAC24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAC30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAC3C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAC44;
	sub_82573D70(ctx, base);
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82573c50
	ctx.lr = 0x83CAAC4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-436
	ctx.r4.s64 = ctx.r31.s64 + -436;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAC58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAC64;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAC6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82573c50
	ctx.lr = 0x83CAAC74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-420
	ctx.r4.s64 = ctx.r31.s64 + -420;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAC80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAC8C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAC94;
	sub_82573D70(ctx, base);
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// bl 0x82573c50
	ctx.lr = 0x83CAAC9C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-404
	ctx.r4.s64 = ctx.r31.s64 + -404;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAACA8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAACB4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAACBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// bl 0x82573c50
	ctx.lr = 0x83CAACC4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-388
	ctx.r4.s64 = ctx.r31.s64 + -388;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAACD0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAACDC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAACE4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82573c50
	ctx.lr = 0x83CAACEC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-372
	ctx.r4.s64 = ctx.r31.s64 + -372;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAACF8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAD04;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAD0C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x82573c50
	ctx.lr = 0x83CAAD14;
	sub_82573C50(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAD20;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAD2C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAD34;
	sub_82573D70(ctx, base);
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82573c50
	ctx.lr = 0x83CAAD3C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAD48;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAD54;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAD5C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x82573c50
	ctx.lr = 0x83CAAD64;
	sub_82573C50(ctx, base);
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAD70;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAD7C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAD84;
	sub_82573D70(ctx, base);
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x82573c50
	ctx.lr = 0x83CAAD8C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-308
	ctx.r4.s64 = ctx.r31.s64 + -308;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAD98;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAADA4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAADAC;
	sub_82573D70(ctx, base);
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82573c50
	ctx.lr = 0x83CAADB4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// bl 0x82573ce0
	ctx.lr = 0x83CAADC0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAADCC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAADD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// bl 0x82573c50
	ctx.lr = 0x83CAADDC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-272
	ctx.r4.s64 = ctx.r31.s64 + -272;
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x82573ce0
	ctx.lr = 0x83CAADE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAADF4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAADFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// bl 0x82573c50
	ctx.lr = 0x83CAAE04;
	sub_82573C50(ctx, base);
	// addi r4,r31,-248
	ctx.r4.s64 = ctx.r31.s64 + -248;
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAE10;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAE1C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAE24;
	sub_82573D70(ctx, base);
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// bl 0x82573c50
	ctx.lr = 0x83CAAE2C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAE38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAE44;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAE4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x82573c50
	ctx.lr = 0x83CAAE54;
	sub_82573C50(ctx, base);
	// addi r4,r31,-224
	ctx.r4.s64 = ctx.r31.s64 + -224;
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAE60;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAE6C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAE74;
	sub_82573D70(ctx, base);
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x82573c50
	ctx.lr = 0x83CAAE7C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-204
	ctx.r4.s64 = ctx.r31.s64 + -204;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAE88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAE94;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAE9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// bl 0x82573c50
	ctx.lr = 0x83CAAEA4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAEB0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAEBC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAEC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// bl 0x82573c50
	ctx.lr = 0x83CAAECC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAED8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAEE4;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAEEC;
	sub_82573D70(ctx, base);
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x82573c50
	ctx.lr = 0x83CAAEF4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAF00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAF0C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAF14;
	sub_82573D70(ctx, base);
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x82573c50
	ctx.lr = 0x83CAAF1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAF28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAF34;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAF3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x82573c50
	ctx.lr = 0x83CAAF44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAF50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAF5C;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAF64;
	sub_82573D70(ctx, base);
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// bl 0x82573c50
	ctx.lr = 0x83CAAF6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAF78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAF84;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAF8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x82573c50
	ctx.lr = 0x83CAAF94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAFA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAFAC;
	sub_835FB3D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAFB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82573c50
	ctx.lr = 0x83CAAFBC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// bl 0x82573ce0
	ctx.lr = 0x83CAAFC8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAFD4;
	sub_835FB3D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAAFDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,2768
	ctx.r3.s64 = ctx.r1.s64 + 2768;
	// bl 0x82573c50
	ctx.lr = 0x83CAAFE4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb3d8
	ctx.lr = 0x83CAAFEC;
	sub_835FB3D8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,-25310
	ctx.r8.s64 = ctx.r10.s64 + -25310;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r10,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r10,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r9,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r9.u32);
	// li r4,114
	ctx.r4.s64 = 114;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r11,35
	ctx.r11.s64 = 35;
	// li r10,36
	ctx.r10.s64 = 36;
	// li r9,37
	ctx.r9.s64 = 37;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r11.u32);
	// li r11,47
	ctx.r11.s64 = 47;
	// stw r9,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// li r9,43
	ctx.r9.s64 = 43;
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// li r31,57
	ctx.r31.s64 = 57;
	// stw r10,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// stw r11,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r9,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r31,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r31.u32);
	// li r9,46
	ctx.r9.s64 = 46;
	// stw r11,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r11.u32);
	// li r11,58
	ctx.r11.s64 = 58;
	// li r31,59
	ctx.r31.s64 = 59;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// li r30,60
	ctx.r30.s64 = 60;
	// stw r9,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r9.u32);
	// li r29,61
	ctx.r29.s64 = 61;
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// stw r31,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r31.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r30,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r30.u32);
	// li r9,49
	ctx.r9.s64 = 49;
	// stw r29,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r29.u32);
	// li r11,62
	ctx.r11.s64 = 62;
	// li r31,63
	ctx.r31.s64 = 63;
	// stw r10,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r10.u32);
	// li r30,64
	ctx.r30.s64 = 64;
	// stw r9,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// li r29,65
	ctx.r29.s64 = 65;
	// stw r11,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r11.u32);
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// li r10,51
	ctx.r10.s64 = 51;
	// stw r30,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r30.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r29,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r29.u32);
	// li r11,66
	ctx.r11.s64 = 66;
	// li r31,67
	ctx.r31.s64 = 67;
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// li r30,68
	ctx.r30.s64 = 68;
	// stw r9,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r9.u32);
	// li r29,69
	ctx.r29.s64 = 69;
	// stw r11,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// li r10,54
	ctx.r10.s64 = 54;
	// stw r30,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r30.u32);
	// li r9,55
	ctx.r9.s64 = 55;
	// stw r29,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r29.u32);
	// li r11,70
	ctx.r11.s64 = 70;
	// li r31,71
	ctx.r31.s64 = 71;
	// stw r10,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r10.u32);
	// li r30,72
	ctx.r30.s64 = 72;
	// stw r9,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r9.u32);
	// li r29,73
	ctx.r29.s64 = 73;
	// stw r11,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r11.u32);
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r30,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r29,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r29.u32);
	// li r11,74
	ctx.r11.s64 = 74;
	// li r31,75
	ctx.r31.s64 = 75;
	// li r30,76
	ctx.r30.s64 = 76;
	// li r29,77
	ctx.r29.s64 = 77;
	// stw r11,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r11.u32);
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// li r31,79
	ctx.r31.s64 = 79;
	// stw r30,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r30.u32);
	// li r30,80
	ctx.r30.s64 = 80;
	// stw r11,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r11.u32);
	// li r11,82
	ctx.r11.s64 = 82;
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// li r31,83
	ctx.r31.s64 = 83;
	// stw r30,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r30.u32);
	// li r30,84
	ctx.r30.s64 = 84;
	// stw r11,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r11.u32);
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// li r31,87
	ctx.r31.s64 = 87;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// li r30,88
	ctx.r30.s64 = 88;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// li r11,90
	ctx.r11.s64 = 90;
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// li r31,91
	ctx.r31.s64 = 91;
	// stw r30,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r30.u32);
	// li r30,92
	ctx.r30.s64 = 92;
	// stw r11,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r11.u32);
	// li r11,94
	ctx.r11.s64 = 94;
	// stw r31,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r31.u32);
	// li r31,95
	ctx.r31.s64 = 95;
	// stw r30,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r30.u32);
	// li r30,96
	ctx.r30.s64 = 96;
	// stw r11,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r11.u32);
	// li r11,98
	ctx.r11.s64 = 98;
	// stw r31,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r31.u32);
	// li r31,99
	ctx.r31.s64 = 99;
	// stw r29,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r29.u32);
	// li r29,81
	ctx.r29.s64 = 81;
	// stw r30,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r30.u32);
	// li r30,100
	ctx.r30.s64 = 100;
	// stw r11,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r11.u32);
	// li r11,101
	ctx.r11.s64 = 101;
	// stw r31,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r31.u32);
	// li r31,102
	ctx.r31.s64 = 102;
	// stw r29,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r29.u32);
	// li r29,85
	ctx.r29.s64 = 85;
	// stw r30,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r30.u32);
	// li r30,103
	ctx.r30.s64 = 103;
	// stw r11,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r11.u32);
	// li r11,104
	ctx.r11.s64 = 104;
	// stw r31,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r31.u32);
	// li r31,105
	ctx.r31.s64 = 105;
	// stw r29,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r29.u32);
	// li r29,89
	ctx.r29.s64 = 89;
	// stw r30,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r30.u32);
	// li r30,106
	ctx.r30.s64 = 106;
	// stw r11,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r11.u32);
	// li r11,107
	ctx.r11.s64 = 107;
	// stw r31,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r31.u32);
	// li r31,108
	ctx.r31.s64 = 108;
	// stw r29,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r29.u32);
	// li r29,93
	ctx.r29.s64 = 93;
	// stw r30,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r30.u32);
	// li r30,109
	ctx.r30.s64 = 109;
	// stw r11,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r11.u32);
	// li r11,110
	ctx.r11.s64 = 110;
	// stw r31,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r31.u32);
	// li r31,111
	ctx.r31.s64 = 111;
	// stw r29,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r29.u32);
	// li r29,97
	ctx.r29.s64 = 97;
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// li r30,112
	ctx.r30.s64 = 112;
	// stw r11,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r11.u32);
	// li r11,113
	ctx.r11.s64 = 113;
	// stw r31,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r29.u32);
	// stw r30,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r30.u32);
	// stw r11,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r11.u32);
	// stw r31,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r31.u32);
	// bl 0x825731e0
	ctx.lr = 0x83CAB388;
	sub_825731E0(ctx, base);
	// addi r1,r1,2816
	ctx.r1.s64 = ctx.r1.s64 + 2816;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CAB390"))) PPC_WEAK_FUNC(sub_83CAB390);
PPC_FUNC_IMPL(__imp__sub_83CAB390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,31620
	ctx.r31.s64 = ctx.r11.s64 + 31620;
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB3B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fb448
	ctx.lr = 0x83CAB3C4;
	sub_835FB448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB3CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAB3D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB3E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb448
	ctx.lr = 0x83CAB3EC;
	sub_835FB448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB3F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAB3FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB408;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb448
	ctx.lr = 0x83CAB414;
	sub_835FB448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB41C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAB424;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB430;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb448
	ctx.lr = 0x83CAB43C;
	sub_835FB448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB444;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAB44C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB458;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb448
	ctx.lr = 0x83CAB464;
	sub_835FB448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB46C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAB474;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB480;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb448
	ctx.lr = 0x83CAB48C;
	sub_835FB448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB494;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAB49C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB4A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb448
	ctx.lr = 0x83CAB4B4;
	sub_835FB448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB4BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAB4C4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB4D0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb448
	ctx.lr = 0x83CAB4DC;
	sub_835FB448(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB4E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CAB4EC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb448
	ctx.lr = 0x83CAB4F4;
	sub_835FB448(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r3,r10,-25270
	ctx.r3.s64 = ctx.r10.s64 + -25270;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAB538;
	sub_825731E0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAB550"))) PPC_WEAK_FUNC(sub_83CAB550);
PPC_FUNC_IMPL(__imp__sub_83CAB550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,31648
	ctx.r31.s64 = ctx.r11.s64 + 31648;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB578;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb4b8
	ctx.lr = 0x83CAB584;
	sub_835FB4B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB58C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAB594;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB5A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb4b8
	ctx.lr = 0x83CAB5AC;
	sub_835FB4B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB5B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAB5BC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB5C8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb4b8
	ctx.lr = 0x83CAB5D4;
	sub_835FB4B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB5DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAB5E4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb4b8
	ctx.lr = 0x83CAB5EC;
	sub_835FB4B8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25245
	ctx.r3.s64 = ctx.r10.s64 + -25245;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAB610;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAB628"))) PPC_WEAK_FUNC(sub_83CAB628);
PPC_FUNC_IMPL(__imp__sub_83CAB628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,31820
	ctx.r31.s64 = ctx.r11.s64 + 31820;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB650;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb528
	ctx.lr = 0x83CAB65C;
	sub_835FB528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB664;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAB66C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB678;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb528
	ctx.lr = 0x83CAB684;
	sub_835FB528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB68C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAB694;
	sub_82573C50(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB6A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb528
	ctx.lr = 0x83CAB6AC;
	sub_835FB528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB6B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAB6BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB6C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb528
	ctx.lr = 0x83CAB6D4;
	sub_835FB528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB6DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAB6E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB6F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb528
	ctx.lr = 0x83CAB6FC;
	sub_835FB528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB704;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAB70C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB718;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb528
	ctx.lr = 0x83CAB724;
	sub_835FB528(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB72C;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAB734;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB740;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb528
	ctx.lr = 0x83CAB74C;
	sub_835FB528(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB754;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAB75C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb528
	ctx.lr = 0x83CAB764;
	sub_835FB528(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25303
	ctx.r3.s64 = ctx.r10.s64 + -25303;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAB7A4;
	sub_825731E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAB7BC"))) PPC_WEAK_FUNC(sub_83CAB7BC);
PPC_FUNC_IMPL(__imp__sub_83CAB7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAB7C0"))) PPC_WEAK_FUNC(sub_83CAB7C0);
PPC_FUNC_IMPL(__imp__sub_83CAB7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,31884
	ctx.r31.s64 = ctx.r11.s64 + 31884;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB7E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb598
	ctx.lr = 0x83CAB7F4;
	sub_835FB598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB7FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAB804;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB810;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb598
	ctx.lr = 0x83CAB81C;
	sub_835FB598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB824;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAB82C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB838;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb598
	ctx.lr = 0x83CAB844;
	sub_835FB598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB84C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAB854;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB860;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb598
	ctx.lr = 0x83CAB86C;
	sub_835FB598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB874;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAB87C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB888;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb598
	ctx.lr = 0x83CAB894;
	sub_835FB598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB89C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAB8A4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb598
	ctx.lr = 0x83CAB8AC;
	sub_835FB598(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25250
	ctx.r3.s64 = ctx.r10.s64 + -25250;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAB8DC;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAB8F4"))) PPC_WEAK_FUNC(sub_83CAB8F4);
PPC_FUNC_IMPL(__imp__sub_83CAB8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAB8F8"))) PPC_WEAK_FUNC(sub_83CAB8F8);
PPC_FUNC_IMPL(__imp__sub_83CAB8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,31992
	ctx.r31.s64 = ctx.r11.s64 + 31992;
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB920;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb608
	ctx.lr = 0x83CAB92C;
	sub_835FB608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB934;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAB93C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB948;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb608
	ctx.lr = 0x83CAB954;
	sub_835FB608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB95C;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAB964;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB970;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb608
	ctx.lr = 0x83CAB97C;
	sub_835FB608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB984;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAB98C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB998;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb608
	ctx.lr = 0x83CAB9A4;
	sub_835FB608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB9AC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAB9B4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB9C0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb608
	ctx.lr = 0x83CAB9CC;
	sub_835FB608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB9D4;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAB9DC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAB9E8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb608
	ctx.lr = 0x83CAB9F4;
	sub_835FB608(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAB9FC;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CABA04;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CABA10;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb608
	ctx.lr = 0x83CABA1C;
	sub_835FB608(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABA24;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CABA2C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb608
	ctx.lr = 0x83CABA34;
	sub_835FB608(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25309
	ctx.r3.s64 = ctx.r10.s64 + -25309;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CABA74;
	sub_825731E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CABA8C"))) PPC_WEAK_FUNC(sub_83CABA8C);
PPC_FUNC_IMPL(__imp__sub_83CABA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CABA90"))) PPC_WEAK_FUNC(sub_83CABA90);
PPC_FUNC_IMPL(__imp__sub_83CABA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,32076
	ctx.r31.s64 = ctx.r11.s64 + 32076;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82573ce0
	ctx.lr = 0x83CABAB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb678
	ctx.lr = 0x83CABAC4;
	sub_835FB678(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABACC;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CABAD4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CABAE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb678
	ctx.lr = 0x83CABAEC;
	sub_835FB678(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABAF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CABAFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CABB08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb678
	ctx.lr = 0x83CABB14;
	sub_835FB678(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABB1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CABB24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CABB30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb678
	ctx.lr = 0x83CABB3C;
	sub_835FB678(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABB44;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CABB4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CABB58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb678
	ctx.lr = 0x83CABB64;
	sub_835FB678(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABB6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CABB74;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CABB80;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb678
	ctx.lr = 0x83CABB8C;
	sub_835FB678(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABB94;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CABB9C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CABBA8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb678
	ctx.lr = 0x83CABBB4;
	sub_835FB678(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABBBC;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CABBC4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb678
	ctx.lr = 0x83CABBCC;
	sub_835FB678(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25197
	ctx.r3.s64 = ctx.r10.s64 + -25197;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CABC0C;
	sub_825731E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CABC24"))) PPC_WEAK_FUNC(sub_83CABC24);
PPC_FUNC_IMPL(__imp__sub_83CABC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CABC28"))) PPC_WEAK_FUNC(sub_83CABC28);
PPC_FUNC_IMPL(__imp__sub_83CABC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,32132
	ctx.r31.s64 = ctx.r11.s64 + 32132;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x82573ce0
	ctx.lr = 0x83CABC50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb6e8
	ctx.lr = 0x83CABC5C;
	sub_835FB6E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABC64;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CABC6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CABC78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb6e8
	ctx.lr = 0x83CABC84;
	sub_835FB6E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABC8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CABC94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CABCA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb6e8
	ctx.lr = 0x83CABCAC;
	sub_835FB6E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABCB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CABCBC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CABCC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb6e8
	ctx.lr = 0x83CABCD4;
	sub_835FB6E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABCDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CABCE4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CABCF0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb6e8
	ctx.lr = 0x83CABCFC;
	sub_835FB6E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABD04;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CABD0C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb6e8
	ctx.lr = 0x83CABD14;
	sub_835FB6E8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25216
	ctx.r3.s64 = ctx.r10.s64 + -25216;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CABD44;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CABD5C"))) PPC_WEAK_FUNC(sub_83CABD5C);
PPC_FUNC_IMPL(__imp__sub_83CABD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CABD60"))) PPC_WEAK_FUNC(sub_83CABD60);
PPC_FUNC_IMPL(__imp__sub_83CABD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,32152
	ctx.r31.s64 = ctx.r11.s64 + 32152;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CABD88;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb758
	ctx.lr = 0x83CABD94;
	sub_835FB758(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABD9C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CABDA4;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CABDB0;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb758
	ctx.lr = 0x83CABDBC;
	sub_835FB758(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABDC4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CABDCC;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb758
	ctx.lr = 0x83CABDD4;
	sub_835FB758(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25215
	ctx.r3.s64 = ctx.r10.s64 + -25215;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CABDF4;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CABE0C"))) PPC_WEAK_FUNC(sub_83CABE0C);
PPC_FUNC_IMPL(__imp__sub_83CABE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CABE10"))) PPC_WEAK_FUNC(sub_83CABE10);
PPC_FUNC_IMPL(__imp__sub_83CABE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,32164
	ctx.r31.s64 = ctx.r11.s64 + 32164;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CABE38;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb7c8
	ctx.lr = 0x83CABE44;
	sub_835FB7C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABE4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CABE54;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CABE60;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb7c8
	ctx.lr = 0x83CABE6C;
	sub_835FB7C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABE74;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CABE7C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb7c8
	ctx.lr = 0x83CABE84;
	sub_835FB7C8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25328
	ctx.r3.s64 = ctx.r10.s64 + -25328;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CABEA4;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CABEBC"))) PPC_WEAK_FUNC(sub_83CABEBC);
PPC_FUNC_IMPL(__imp__sub_83CABEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CABEC0"))) PPC_WEAK_FUNC(sub_83CABEC0);
PPC_FUNC_IMPL(__imp__sub_83CABEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,32188
	ctx.r31.s64 = ctx.r11.s64 + 32188;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CABEE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb838
	ctx.lr = 0x83CABEF4;
	sub_835FB838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABEFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CABF04;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CABF10;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb838
	ctx.lr = 0x83CABF1C;
	sub_835FB838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABF24;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CABF2C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CABF38;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb838
	ctx.lr = 0x83CABF44;
	sub_835FB838(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABF4C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CABF54;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb838
	ctx.lr = 0x83CABF5C;
	sub_835FB838(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25233
	ctx.r3.s64 = ctx.r10.s64 + -25233;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CABF80;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CABF98"))) PPC_WEAK_FUNC(sub_83CABF98);
PPC_FUNC_IMPL(__imp__sub_83CABF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r31,r11,32600
	ctx.r31.s64 = ctx.r11.s64 + 32600;
	// addi r4,r31,-404
	ctx.r4.s64 = ctx.r31.s64 + -404;
	// bl 0x82573ce0
	ctx.lr = 0x83CABFC0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fb8a8
	ctx.lr = 0x83CABFCC;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABFD4;
	sub_82573D70(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573c50
	ctx.lr = 0x83CABFDC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-380
	ctx.r4.s64 = ctx.r31.s64 + -380;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CABFE8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fb8a8
	ctx.lr = 0x83CABFF4;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CABFFC;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CAC004;
	sub_82573C50(ctx, base);
	// addi r4,r31,-356
	ctx.r4.s64 = ctx.r31.s64 + -356;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC010;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC01C;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC024;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CAC02C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC038;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC044;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC04C;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CAC054;
	sub_82573C50(ctx, base);
	// addi r4,r31,-312
	ctx.r4.s64 = ctx.r31.s64 + -312;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC060;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC06C;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC074;
	sub_82573D70(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x83CAC07C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-288
	ctx.r4.s64 = ctx.r31.s64 + -288;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC088;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC094;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC09C;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CAC0A4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-264
	ctx.r4.s64 = ctx.r31.s64 + -264;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC0B0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC0BC;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC0C4;
	sub_82573D70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x83CAC0CC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-240
	ctx.r4.s64 = ctx.r31.s64 + -240;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC0D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC0E4;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC0EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CAC0F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC100;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC10C;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC114;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAC11C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC128;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC134;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC13C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAC144;
	sub_82573C50(ctx, base);
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC150;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC15C;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC164;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CAC16C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC178;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC184;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC18C;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CAC194;
	sub_82573C50(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC1A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC1AC;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC1B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CAC1BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC1C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC1D4;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC1DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CAC1E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC1F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC1FC;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC204;
	sub_82573D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x83CAC20C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC218;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC224;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC22C;
	sub_82573D70(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x83CAC234;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC240;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC24C;
	sub_835FB8A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC254;
	sub_82573D70(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573c50
	ctx.lr = 0x83CAC25C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC268;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC274;
	sub_835FB8A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC27C;
	sub_82573D70(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573c50
	ctx.lr = 0x83CAC284;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb8a8
	ctx.lr = 0x83CAC28C;
	sub_835FB8A8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r3,r8,-25275
	ctx.r3.s64 = ctx.r8.s64 + -25275;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAC324;
	sub_825731E0(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAC33C"))) PPC_WEAK_FUNC(sub_83CAC33C);
PPC_FUNC_IMPL(__imp__sub_83CAC33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAC340"))) PPC_WEAK_FUNC(sub_83CAC340);
PPC_FUNC_IMPL(__imp__sub_83CAC340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-32740
	ctx.r31.s64 = ctx.r11.s64 + -32740;
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC368;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb918
	ctx.lr = 0x83CAC374;
	sub_835FB918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC37C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAC384;
	sub_82573C50(ctx, base);
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC390;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb918
	ctx.lr = 0x83CAC39C;
	sub_835FB918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC3A4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAC3AC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC3B8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb918
	ctx.lr = 0x83CAC3C4;
	sub_835FB918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC3CC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAC3D4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC3E0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb918
	ctx.lr = 0x83CAC3EC;
	sub_835FB918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC3F4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAC3FC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC408;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb918
	ctx.lr = 0x83CAC414;
	sub_835FB918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC41C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAC424;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC430;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb918
	ctx.lr = 0x83CAC43C;
	sub_835FB918(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC444;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAC44C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb918
	ctx.lr = 0x83CAC454;
	sub_835FB918(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25295
	ctx.r3.s64 = ctx.r10.s64 + -25295;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAC48C;
	sub_825731E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAC4A4"))) PPC_WEAK_FUNC(sub_83CAC4A4);
PPC_FUNC_IMPL(__imp__sub_83CAC4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAC4A8"))) PPC_WEAK_FUNC(sub_83CAC4A8);
PPC_FUNC_IMPL(__imp__sub_83CAC4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-32680
	ctx.r31.s64 = ctx.r11.s64 + -32680;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC4D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb988
	ctx.lr = 0x83CAC4DC;
	sub_835FB988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC4E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAC4EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC4F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb988
	ctx.lr = 0x83CAC504;
	sub_835FB988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC50C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAC514;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC520;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb988
	ctx.lr = 0x83CAC52C;
	sub_835FB988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC534;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAC53C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC548;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb988
	ctx.lr = 0x83CAC554;
	sub_835FB988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC55C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAC564;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC570;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb988
	ctx.lr = 0x83CAC57C;
	sub_835FB988(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC584;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAC58C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb988
	ctx.lr = 0x83CAC594;
	sub_835FB988(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25254
	ctx.r3.s64 = ctx.r10.s64 + -25254;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAC5C4;
	sub_825731E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAC5DC"))) PPC_WEAK_FUNC(sub_83CAC5DC);
PPC_FUNC_IMPL(__imp__sub_83CAC5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAC5E0"))) PPC_WEAK_FUNC(sub_83CAC5E0);
PPC_FUNC_IMPL(__imp__sub_83CAC5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,-32588
	ctx.r31.s64 = ctx.r11.s64 + -32588;
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC608;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC614;
	sub_835FB9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC61C;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CAC624;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC630;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC63C;
	sub_835FB9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC644;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAC64C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC658;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC664;
	sub_835FB9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC66C;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAC674;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC680;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC68C;
	sub_835FB9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC694;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CAC69C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC6A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC6B4;
	sub_835FB9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC6BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CAC6C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC6D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC6DC;
	sub_835FB9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC6E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAC6EC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC6F8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC704;
	sub_835FB9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC70C;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CAC714;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC720;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC72C;
	sub_835FB9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC734;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CAC73C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC748;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC754;
	sub_835FB9F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC75C;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CAC764;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fb9f8
	ctx.lr = 0x83CAC76C;
	sub_835FB9F8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r3,r10,-25231
	ctx.r3.s64 = ctx.r10.s64 + -25231;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAC7BC;
	sub_825731E0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAC7D4"))) PPC_WEAK_FUNC(sub_83CAC7D4);
PPC_FUNC_IMPL(__imp__sub_83CAC7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAC7D8"))) PPC_WEAK_FUNC(sub_83CAC7D8);
PPC_FUNC_IMPL(__imp__sub_83CAC7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-32552
	ctx.r31.s64 = ctx.r11.s64 + -32552;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC800;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fba68
	ctx.lr = 0x83CAC80C;
	sub_835FBA68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC814;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAC81C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC828;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fba68
	ctx.lr = 0x83CAC834;
	sub_835FBA68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC83C;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAC844;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC850;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fba68
	ctx.lr = 0x83CAC85C;
	sub_835FBA68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC864;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CAC86C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fba68
	ctx.lr = 0x83CAC874;
	sub_835FBA68(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25268
	ctx.r3.s64 = ctx.r10.s64 + -25268;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAC898;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAC8B0"))) PPC_WEAK_FUNC(sub_83CAC8B0);
PPC_FUNC_IMPL(__imp__sub_83CAC8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r31,r11,-32492
	ctx.r31.s64 = ctx.r11.s64 + -32492;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC8D8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fbad8
	ctx.lr = 0x83CAC8E4;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC8EC;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CAC8F4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC900;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fbad8
	ctx.lr = 0x83CAC90C;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC914;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CAC91C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC928;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fbad8
	ctx.lr = 0x83CAC934;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC93C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CAC944;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC950;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fbad8
	ctx.lr = 0x83CAC95C;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC964;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CAC96C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC978;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fbad8
	ctx.lr = 0x83CAC984;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC98C;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CAC994;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC9A0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fbad8
	ctx.lr = 0x83CAC9AC;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC9B4;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CAC9BC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC9C8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fbad8
	ctx.lr = 0x83CAC9D4;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAC9DC;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CAC9E4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CAC9F0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbad8
	ctx.lr = 0x83CAC9FC;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACA04;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CACA0C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CACA18;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fbad8
	ctx.lr = 0x83CACA24;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACA2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CACA34;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CACA40;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbad8
	ctx.lr = 0x83CACA4C;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACA54;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CACA5C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CACA68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbad8
	ctx.lr = 0x83CACA74;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACA7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CACA84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CACA90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbad8
	ctx.lr = 0x83CACA9C;
	sub_835FBAD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACAA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CACAAC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CACAB8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbad8
	ctx.lr = 0x83CACAC4;
	sub_835FBAD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACACC;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CACAD4;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbad8
	ctx.lr = 0x83CACADC;
	sub_835FBAD8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,-25247
	ctx.r8.s64 = ctx.r10.s64 + -25247;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CACB50;
	sub_825731E0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CACB68"))) PPC_WEAK_FUNC(sub_83CACB68);
PPC_FUNC_IMPL(__imp__sub_83CACB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-32432
	ctx.r31.s64 = ctx.r11.s64 + -32432;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82573ce0
	ctx.lr = 0x83CACB90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fbb48
	ctx.lr = 0x83CACB9C;
	sub_835FBB48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACBA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CACBAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573ce0
	ctx.lr = 0x83CACBB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbb48
	ctx.lr = 0x83CACBC4;
	sub_835FBB48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACBCC;
	sub_82573D70(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x83CACBD4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573ce0
	ctx.lr = 0x83CACBE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fbb48
	ctx.lr = 0x83CACBEC;
	sub_835FBB48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACBF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82573c50
	ctx.lr = 0x83CACBFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573ce0
	ctx.lr = 0x83CACC08;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbb48
	ctx.lr = 0x83CACC14;
	sub_835FBB48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACC1C;
	sub_82573D70(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82573c50
	ctx.lr = 0x83CACC24;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573ce0
	ctx.lr = 0x83CACC30;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbb48
	ctx.lr = 0x83CACC3C;
	sub_835FBB48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACC44;
	sub_82573D70(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82573c50
	ctx.lr = 0x83CACC4C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573ce0
	ctx.lr = 0x83CACC58;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbb48
	ctx.lr = 0x83CACC64;
	sub_835FBB48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACC6C;
	sub_82573D70(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82573c50
	ctx.lr = 0x83CACC74;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CACC80;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbb48
	ctx.lr = 0x83CACC8C;
	sub_835FBB48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACC94;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CACC9C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbb48
	ctx.lr = 0x83CACCA4;
	sub_835FBB48(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25269
	ctx.r3.s64 = ctx.r10.s64 + -25269;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CACCE4;
	sub_825731E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CACCFC"))) PPC_WEAK_FUNC(sub_83CACCFC);
PPC_FUNC_IMPL(__imp__sub_83CACCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CACD00"))) PPC_WEAK_FUNC(sub_83CACD00);
PPC_FUNC_IMPL(__imp__sub_83CACD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-32408
	ctx.r31.s64 = ctx.r11.s64 + -32408;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82573ce0
	ctx.lr = 0x83CACD28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbbb8
	ctx.lr = 0x83CACD34;
	sub_835FBBB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACD3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CACD44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CACD50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbbb8
	ctx.lr = 0x83CACD5C;
	sub_835FBBB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACD64;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CACD6C;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573ce0
	ctx.lr = 0x83CACD78;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbbb8
	ctx.lr = 0x83CACD84;
	sub_835FBBB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACD8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x83CACD94;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbbb8
	ctx.lr = 0x83CACD9C;
	sub_835FBBB8(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25287
	ctx.r3.s64 = ctx.r10.s64 + -25287;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CACDC0;
	sub_825731E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CACDD8"))) PPC_WEAK_FUNC(sub_83CACDD8);
PPC_FUNC_IMPL(__imp__sub_83CACDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r31,r11,-32324
	ctx.r31.s64 = ctx.r11.s64 + -32324;
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// bl 0x82573ce0
	ctx.lr = 0x83CACE00;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x835fbc28
	ctx.lr = 0x83CACE0C;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACE14;
	sub_82573D70(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82573c50
	ctx.lr = 0x83CACE1C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573ce0
	ctx.lr = 0x83CACE28;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x835fbc28
	ctx.lr = 0x83CACE34;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACE3C;
	sub_82573D70(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82573c50
	ctx.lr = 0x83CACE44;
	sub_82573C50(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573ce0
	ctx.lr = 0x83CACE50;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x835fbc28
	ctx.lr = 0x83CACE5C;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACE64;
	sub_82573D70(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82573c50
	ctx.lr = 0x83CACE6C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573ce0
	ctx.lr = 0x83CACE78;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x835fbc28
	ctx.lr = 0x83CACE84;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACE8C;
	sub_82573D70(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82573c50
	ctx.lr = 0x83CACE94;
	sub_82573C50(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573ce0
	ctx.lr = 0x83CACEA0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x835fbc28
	ctx.lr = 0x83CACEAC;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACEB4;
	sub_82573D70(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82573c50
	ctx.lr = 0x83CACEBC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573ce0
	ctx.lr = 0x83CACEC8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835fbc28
	ctx.lr = 0x83CACED4;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACEDC;
	sub_82573D70(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82573c50
	ctx.lr = 0x83CACEE4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573ce0
	ctx.lr = 0x83CACEF0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835fbc28
	ctx.lr = 0x83CACEFC;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACF04;
	sub_82573D70(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82573c50
	ctx.lr = 0x83CACF0C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573ce0
	ctx.lr = 0x83CACF18;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835fbc28
	ctx.lr = 0x83CACF24;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACF2C;
	sub_82573D70(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82573c50
	ctx.lr = 0x83CACF34;
	sub_82573C50(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573ce0
	ctx.lr = 0x83CACF40;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835fbc28
	ctx.lr = 0x83CACF4C;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACF54;
	sub_82573D70(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82573c50
	ctx.lr = 0x83CACF5C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573ce0
	ctx.lr = 0x83CACF68;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x835fbc28
	ctx.lr = 0x83CACF74;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACF7C;
	sub_82573D70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82573c50
	ctx.lr = 0x83CACF84;
	sub_82573C50(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573ce0
	ctx.lr = 0x83CACF90;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x835fbc28
	ctx.lr = 0x83CACF9C;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACFA4;
	sub_82573D70(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82573c50
	ctx.lr = 0x83CACFAC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573ce0
	ctx.lr = 0x83CACFB8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x835fbc28
	ctx.lr = 0x83CACFC4;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACFCC;
	sub_82573D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82573c50
	ctx.lr = 0x83CACFD4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573ce0
	ctx.lr = 0x83CACFE0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x835fbc28
	ctx.lr = 0x83CACFEC;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CACFF4;
	sub_82573D70(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82573c50
	ctx.lr = 0x83CACFFC;
	sub_82573C50(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD008;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x835fbc28
	ctx.lr = 0x83CAD014;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD01C;
	sub_82573D70(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82573c50
	ctx.lr = 0x83CAD024;
	sub_82573C50(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD030;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbc28
	ctx.lr = 0x83CAD03C;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD044;
	sub_82573D70(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82573c50
	ctx.lr = 0x83CAD04C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD058;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x835fbc28
	ctx.lr = 0x83CAD064;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD06C;
	sub_82573D70(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82573c50
	ctx.lr = 0x83CAD074;
	sub_82573C50(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD080;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x835fbc28
	ctx.lr = 0x83CAD08C;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD094;
	sub_82573D70(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82573c50
	ctx.lr = 0x83CAD09C;
	sub_82573C50(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD0A8;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x835fbc28
	ctx.lr = 0x83CAD0B4;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD0BC;
	sub_82573D70(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82573c50
	ctx.lr = 0x83CAD0C4;
	sub_82573C50(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD0D0;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbc28
	ctx.lr = 0x83CAD0DC;
	sub_835FBC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD0E4;
	sub_82573D70(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82573c50
	ctx.lr = 0x83CAD0EC;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD0F8;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbc28
	ctx.lr = 0x83CAD104;
	sub_835FBC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD10C;
	sub_82573D70(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82573c50
	ctx.lr = 0x83CAD114;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbc28
	ctx.lr = 0x83CAD11C;
	sub_835FBC28(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r3,r8,-25294
	ctx.r3.s64 = ctx.r8.s64 + -25294;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// li r8,14
	ctx.r8.s64 = 14;
	// li r7,15
	ctx.r7.s64 = 15;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// bl 0x825731e0
	ctx.lr = 0x83CAD1C4;
	sub_825731E0(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CAD1DC"))) PPC_WEAK_FUNC(sub_83CAD1DC);
PPC_FUNC_IMPL(__imp__sub_83CAD1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CAD1E0"))) PPC_WEAK_FUNC(sub_83CAD1E0);
PPC_FUNC_IMPL(__imp__sub_83CAD1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-32312
	ctx.r31.s64 = ctx.r11.s64 + -32312;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD208;
	sub_82573CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835fbc98
	ctx.lr = 0x83CAD214;
	sub_835FBC98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD21C;
	sub_82573D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573c50
	ctx.lr = 0x83CAD224;
	sub_82573C50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573ce0
	ctx.lr = 0x83CAD230;
	sub_82573CE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbc98
	ctx.lr = 0x83CAD23C;
	sub_835FBC98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82573d70
	ctx.lr = 0x83CAD244;
	sub_82573D70(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83CAD24C;
	sub_82573C50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835fbc98
	ctx.lr = 0x83CAD254;
	sub_835FBC98(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r10,-25302
	ctx.r3.s64 = ctx.r10.s64 + -25302;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x825731e0
	ctx.lr = 0x83CAD274;
	sub_825731E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

