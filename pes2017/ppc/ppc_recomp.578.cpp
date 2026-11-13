#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B953D8"))) PPC_WEAK_FUNC(sub_83B953D8);
PPC_FUNC_IMPL(__imp__sub_83B953D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4112
	ctx.r3.s64 = ctx.r11.s64 + 4112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B953E4"))) PPC_WEAK_FUNC(sub_83B953E4);
PPC_FUNC_IMPL(__imp__sub_83B953E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B953E8"))) PPC_WEAK_FUNC(sub_83B953E8);
PPC_FUNC_IMPL(__imp__sub_83B953E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4120
	ctx.r3.s64 = ctx.r11.s64 + 4120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B953F4"))) PPC_WEAK_FUNC(sub_83B953F4);
PPC_FUNC_IMPL(__imp__sub_83B953F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B953F8"))) PPC_WEAK_FUNC(sub_83B953F8);
PPC_FUNC_IMPL(__imp__sub_83B953F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4128
	ctx.r3.s64 = ctx.r11.s64 + 4128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95404"))) PPC_WEAK_FUNC(sub_83B95404);
PPC_FUNC_IMPL(__imp__sub_83B95404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95408"))) PPC_WEAK_FUNC(sub_83B95408);
PPC_FUNC_IMPL(__imp__sub_83B95408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4136
	ctx.r3.s64 = ctx.r11.s64 + 4136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95414"))) PPC_WEAK_FUNC(sub_83B95414);
PPC_FUNC_IMPL(__imp__sub_83B95414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95418"))) PPC_WEAK_FUNC(sub_83B95418);
PPC_FUNC_IMPL(__imp__sub_83B95418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4144
	ctx.r3.s64 = ctx.r11.s64 + 4144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95424"))) PPC_WEAK_FUNC(sub_83B95424);
PPC_FUNC_IMPL(__imp__sub_83B95424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95428"))) PPC_WEAK_FUNC(sub_83B95428);
PPC_FUNC_IMPL(__imp__sub_83B95428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4152
	ctx.r3.s64 = ctx.r11.s64 + 4152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95434"))) PPC_WEAK_FUNC(sub_83B95434);
PPC_FUNC_IMPL(__imp__sub_83B95434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95438"))) PPC_WEAK_FUNC(sub_83B95438);
PPC_FUNC_IMPL(__imp__sub_83B95438) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5516
	ctx.r7.s64 = ctx.r8.s64 + -5516;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5516);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5516, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B95460"))) PPC_WEAK_FUNC(sub_83B95460);
PPC_FUNC_IMPL(__imp__sub_83B95460) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5520
	ctx.r3.s64 = ctx.r11.s64 + -5520;
	// bl 0x83523120
	ctx.lr = 0x83B95478;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,4160
	ctx.r3.s64 = ctx.r10.s64 + 4160;
	// bl 0x831cdcc8
	ctx.lr = 0x83B95484;
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

__attribute__((alias("__imp__sub_83B95494"))) PPC_WEAK_FUNC(sub_83B95494);
PPC_FUNC_IMPL(__imp__sub_83B95494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95498"))) PPC_WEAK_FUNC(sub_83B95498);
PPC_FUNC_IMPL(__imp__sub_83B95498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4176
	ctx.r3.s64 = ctx.r11.s64 + 4176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B954A4"))) PPC_WEAK_FUNC(sub_83B954A4);
PPC_FUNC_IMPL(__imp__sub_83B954A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B954A8"))) PPC_WEAK_FUNC(sub_83B954A8);
PPC_FUNC_IMPL(__imp__sub_83B954A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4184
	ctx.r3.s64 = ctx.r11.s64 + 4184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B954B4"))) PPC_WEAK_FUNC(sub_83B954B4);
PPC_FUNC_IMPL(__imp__sub_83B954B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B954B8"))) PPC_WEAK_FUNC(sub_83B954B8);
PPC_FUNC_IMPL(__imp__sub_83B954B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4192
	ctx.r3.s64 = ctx.r11.s64 + 4192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B954C4"))) PPC_WEAK_FUNC(sub_83B954C4);
PPC_FUNC_IMPL(__imp__sub_83B954C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B954C8"))) PPC_WEAK_FUNC(sub_83B954C8);
PPC_FUNC_IMPL(__imp__sub_83B954C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4200
	ctx.r3.s64 = ctx.r11.s64 + 4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B954D4"))) PPC_WEAK_FUNC(sub_83B954D4);
PPC_FUNC_IMPL(__imp__sub_83B954D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B954D8"))) PPC_WEAK_FUNC(sub_83B954D8);
PPC_FUNC_IMPL(__imp__sub_83B954D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4208
	ctx.r3.s64 = ctx.r11.s64 + 4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B954E4"))) PPC_WEAK_FUNC(sub_83B954E4);
PPC_FUNC_IMPL(__imp__sub_83B954E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B954E8"))) PPC_WEAK_FUNC(sub_83B954E8);
PPC_FUNC_IMPL(__imp__sub_83B954E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4216
	ctx.r3.s64 = ctx.r11.s64 + 4216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B954F4"))) PPC_WEAK_FUNC(sub_83B954F4);
PPC_FUNC_IMPL(__imp__sub_83B954F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B954F8"))) PPC_WEAK_FUNC(sub_83B954F8);
PPC_FUNC_IMPL(__imp__sub_83B954F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95504"))) PPC_WEAK_FUNC(sub_83B95504);
PPC_FUNC_IMPL(__imp__sub_83B95504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95508"))) PPC_WEAK_FUNC(sub_83B95508);
PPC_FUNC_IMPL(__imp__sub_83B95508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95514"))) PPC_WEAK_FUNC(sub_83B95514);
PPC_FUNC_IMPL(__imp__sub_83B95514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95518"))) PPC_WEAK_FUNC(sub_83B95518);
PPC_FUNC_IMPL(__imp__sub_83B95518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4240
	ctx.r3.s64 = ctx.r11.s64 + 4240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95524"))) PPC_WEAK_FUNC(sub_83B95524);
PPC_FUNC_IMPL(__imp__sub_83B95524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95528"))) PPC_WEAK_FUNC(sub_83B95528);
PPC_FUNC_IMPL(__imp__sub_83B95528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4248
	ctx.r3.s64 = ctx.r11.s64 + 4248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95534"))) PPC_WEAK_FUNC(sub_83B95534);
PPC_FUNC_IMPL(__imp__sub_83B95534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95538"))) PPC_WEAK_FUNC(sub_83B95538);
PPC_FUNC_IMPL(__imp__sub_83B95538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4256
	ctx.r3.s64 = ctx.r11.s64 + 4256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95544"))) PPC_WEAK_FUNC(sub_83B95544);
PPC_FUNC_IMPL(__imp__sub_83B95544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95548"))) PPC_WEAK_FUNC(sub_83B95548);
PPC_FUNC_IMPL(__imp__sub_83B95548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4264
	ctx.r3.s64 = ctx.r11.s64 + 4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95554"))) PPC_WEAK_FUNC(sub_83B95554);
PPC_FUNC_IMPL(__imp__sub_83B95554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95558"))) PPC_WEAK_FUNC(sub_83B95558);
PPC_FUNC_IMPL(__imp__sub_83B95558) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5504
	ctx.r7.s64 = ctx.r8.s64 + -5504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B95580"))) PPC_WEAK_FUNC(sub_83B95580);
PPC_FUNC_IMPL(__imp__sub_83B95580) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5508
	ctx.r3.s64 = ctx.r11.s64 + -5508;
	// bl 0x83523120
	ctx.lr = 0x83B95598;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,4272
	ctx.r3.s64 = ctx.r10.s64 + 4272;
	// bl 0x831cdcc8
	ctx.lr = 0x83B955A4;
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

__attribute__((alias("__imp__sub_83B955B4"))) PPC_WEAK_FUNC(sub_83B955B4);
PPC_FUNC_IMPL(__imp__sub_83B955B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B955B8"))) PPC_WEAK_FUNC(sub_83B955B8);
PPC_FUNC_IMPL(__imp__sub_83B955B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4288
	ctx.r3.s64 = ctx.r11.s64 + 4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B955C4"))) PPC_WEAK_FUNC(sub_83B955C4);
PPC_FUNC_IMPL(__imp__sub_83B955C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B955C8"))) PPC_WEAK_FUNC(sub_83B955C8);
PPC_FUNC_IMPL(__imp__sub_83B955C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4296
	ctx.r3.s64 = ctx.r11.s64 + 4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B955D4"))) PPC_WEAK_FUNC(sub_83B955D4);
PPC_FUNC_IMPL(__imp__sub_83B955D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B955D8"))) PPC_WEAK_FUNC(sub_83B955D8);
PPC_FUNC_IMPL(__imp__sub_83B955D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4304
	ctx.r3.s64 = ctx.r11.s64 + 4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B955E4"))) PPC_WEAK_FUNC(sub_83B955E4);
PPC_FUNC_IMPL(__imp__sub_83B955E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B955E8"))) PPC_WEAK_FUNC(sub_83B955E8);
PPC_FUNC_IMPL(__imp__sub_83B955E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4312
	ctx.r3.s64 = ctx.r11.s64 + 4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B955F4"))) PPC_WEAK_FUNC(sub_83B955F4);
PPC_FUNC_IMPL(__imp__sub_83B955F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B955F8"))) PPC_WEAK_FUNC(sub_83B955F8);
PPC_FUNC_IMPL(__imp__sub_83B955F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4320
	ctx.r3.s64 = ctx.r11.s64 + 4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95604"))) PPC_WEAK_FUNC(sub_83B95604);
PPC_FUNC_IMPL(__imp__sub_83B95604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95608"))) PPC_WEAK_FUNC(sub_83B95608);
PPC_FUNC_IMPL(__imp__sub_83B95608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4328
	ctx.r3.s64 = ctx.r11.s64 + 4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95614"))) PPC_WEAK_FUNC(sub_83B95614);
PPC_FUNC_IMPL(__imp__sub_83B95614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95618"))) PPC_WEAK_FUNC(sub_83B95618);
PPC_FUNC_IMPL(__imp__sub_83B95618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95624"))) PPC_WEAK_FUNC(sub_83B95624);
PPC_FUNC_IMPL(__imp__sub_83B95624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95628"))) PPC_WEAK_FUNC(sub_83B95628);
PPC_FUNC_IMPL(__imp__sub_83B95628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4344
	ctx.r3.s64 = ctx.r11.s64 + 4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95634"))) PPC_WEAK_FUNC(sub_83B95634);
PPC_FUNC_IMPL(__imp__sub_83B95634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95638"))) PPC_WEAK_FUNC(sub_83B95638);
PPC_FUNC_IMPL(__imp__sub_83B95638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95644"))) PPC_WEAK_FUNC(sub_83B95644);
PPC_FUNC_IMPL(__imp__sub_83B95644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95648"))) PPC_WEAK_FUNC(sub_83B95648);
PPC_FUNC_IMPL(__imp__sub_83B95648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4360
	ctx.r3.s64 = ctx.r11.s64 + 4360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95654"))) PPC_WEAK_FUNC(sub_83B95654);
PPC_FUNC_IMPL(__imp__sub_83B95654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95658"))) PPC_WEAK_FUNC(sub_83B95658);
PPC_FUNC_IMPL(__imp__sub_83B95658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4368
	ctx.r3.s64 = ctx.r11.s64 + 4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95664"))) PPC_WEAK_FUNC(sub_83B95664);
PPC_FUNC_IMPL(__imp__sub_83B95664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95668"))) PPC_WEAK_FUNC(sub_83B95668);
PPC_FUNC_IMPL(__imp__sub_83B95668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4376
	ctx.r3.s64 = ctx.r11.s64 + 4376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95674"))) PPC_WEAK_FUNC(sub_83B95674);
PPC_FUNC_IMPL(__imp__sub_83B95674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95678"))) PPC_WEAK_FUNC(sub_83B95678);
PPC_FUNC_IMPL(__imp__sub_83B95678) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5492
	ctx.r7.s64 = ctx.r8.s64 + -5492;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5492(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5492);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5492, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B956A0"))) PPC_WEAK_FUNC(sub_83B956A0);
PPC_FUNC_IMPL(__imp__sub_83B956A0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5496
	ctx.r3.s64 = ctx.r11.s64 + -5496;
	// bl 0x83523120
	ctx.lr = 0x83B956B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,4384
	ctx.r3.s64 = ctx.r10.s64 + 4384;
	// bl 0x831cdcc8
	ctx.lr = 0x83B956C4;
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

__attribute__((alias("__imp__sub_83B956D4"))) PPC_WEAK_FUNC(sub_83B956D4);
PPC_FUNC_IMPL(__imp__sub_83B956D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B956D8"))) PPC_WEAK_FUNC(sub_83B956D8);
PPC_FUNC_IMPL(__imp__sub_83B956D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4400
	ctx.r3.s64 = ctx.r11.s64 + 4400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B956E4"))) PPC_WEAK_FUNC(sub_83B956E4);
PPC_FUNC_IMPL(__imp__sub_83B956E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B956E8"))) PPC_WEAK_FUNC(sub_83B956E8);
PPC_FUNC_IMPL(__imp__sub_83B956E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4408
	ctx.r3.s64 = ctx.r11.s64 + 4408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B956F4"))) PPC_WEAK_FUNC(sub_83B956F4);
PPC_FUNC_IMPL(__imp__sub_83B956F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B956F8"))) PPC_WEAK_FUNC(sub_83B956F8);
PPC_FUNC_IMPL(__imp__sub_83B956F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95704"))) PPC_WEAK_FUNC(sub_83B95704);
PPC_FUNC_IMPL(__imp__sub_83B95704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95708"))) PPC_WEAK_FUNC(sub_83B95708);
PPC_FUNC_IMPL(__imp__sub_83B95708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95714"))) PPC_WEAK_FUNC(sub_83B95714);
PPC_FUNC_IMPL(__imp__sub_83B95714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95718"))) PPC_WEAK_FUNC(sub_83B95718);
PPC_FUNC_IMPL(__imp__sub_83B95718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95724"))) PPC_WEAK_FUNC(sub_83B95724);
PPC_FUNC_IMPL(__imp__sub_83B95724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95728"))) PPC_WEAK_FUNC(sub_83B95728);
PPC_FUNC_IMPL(__imp__sub_83B95728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4440
	ctx.r3.s64 = ctx.r11.s64 + 4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95734"))) PPC_WEAK_FUNC(sub_83B95734);
PPC_FUNC_IMPL(__imp__sub_83B95734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95738"))) PPC_WEAK_FUNC(sub_83B95738);
PPC_FUNC_IMPL(__imp__sub_83B95738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4448
	ctx.r3.s64 = ctx.r11.s64 + 4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95744"))) PPC_WEAK_FUNC(sub_83B95744);
PPC_FUNC_IMPL(__imp__sub_83B95744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95748"))) PPC_WEAK_FUNC(sub_83B95748);
PPC_FUNC_IMPL(__imp__sub_83B95748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4456
	ctx.r3.s64 = ctx.r11.s64 + 4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95754"))) PPC_WEAK_FUNC(sub_83B95754);
PPC_FUNC_IMPL(__imp__sub_83B95754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95758"))) PPC_WEAK_FUNC(sub_83B95758);
PPC_FUNC_IMPL(__imp__sub_83B95758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95764"))) PPC_WEAK_FUNC(sub_83B95764);
PPC_FUNC_IMPL(__imp__sub_83B95764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95768"))) PPC_WEAK_FUNC(sub_83B95768);
PPC_FUNC_IMPL(__imp__sub_83B95768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4472
	ctx.r3.s64 = ctx.r11.s64 + 4472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95774"))) PPC_WEAK_FUNC(sub_83B95774);
PPC_FUNC_IMPL(__imp__sub_83B95774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95778"))) PPC_WEAK_FUNC(sub_83B95778);
PPC_FUNC_IMPL(__imp__sub_83B95778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4480
	ctx.r3.s64 = ctx.r11.s64 + 4480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95784"))) PPC_WEAK_FUNC(sub_83B95784);
PPC_FUNC_IMPL(__imp__sub_83B95784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95788"))) PPC_WEAK_FUNC(sub_83B95788);
PPC_FUNC_IMPL(__imp__sub_83B95788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4488
	ctx.r3.s64 = ctx.r11.s64 + 4488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95794"))) PPC_WEAK_FUNC(sub_83B95794);
PPC_FUNC_IMPL(__imp__sub_83B95794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95798"))) PPC_WEAK_FUNC(sub_83B95798);
PPC_FUNC_IMPL(__imp__sub_83B95798) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5428
	ctx.r7.s64 = ctx.r8.s64 + -5428;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5428(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5428);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5428(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5428, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B957C0"))) PPC_WEAK_FUNC(sub_83B957C0);
PPC_FUNC_IMPL(__imp__sub_83B957C0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5432
	ctx.r3.s64 = ctx.r11.s64 + -5432;
	// bl 0x83523120
	ctx.lr = 0x83B957D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,4496
	ctx.r3.s64 = ctx.r10.s64 + 4496;
	// bl 0x831cdcc8
	ctx.lr = 0x83B957E4;
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

__attribute__((alias("__imp__sub_83B957F4"))) PPC_WEAK_FUNC(sub_83B957F4);
PPC_FUNC_IMPL(__imp__sub_83B957F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B957F8"))) PPC_WEAK_FUNC(sub_83B957F8);
PPC_FUNC_IMPL(__imp__sub_83B957F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4512
	ctx.r3.s64 = ctx.r11.s64 + 4512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95804"))) PPC_WEAK_FUNC(sub_83B95804);
PPC_FUNC_IMPL(__imp__sub_83B95804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95808"))) PPC_WEAK_FUNC(sub_83B95808);
PPC_FUNC_IMPL(__imp__sub_83B95808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4520
	ctx.r3.s64 = ctx.r11.s64 + 4520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95814"))) PPC_WEAK_FUNC(sub_83B95814);
PPC_FUNC_IMPL(__imp__sub_83B95814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95818"))) PPC_WEAK_FUNC(sub_83B95818);
PPC_FUNC_IMPL(__imp__sub_83B95818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4528
	ctx.r3.s64 = ctx.r11.s64 + 4528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95824"))) PPC_WEAK_FUNC(sub_83B95824);
PPC_FUNC_IMPL(__imp__sub_83B95824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95828"))) PPC_WEAK_FUNC(sub_83B95828);
PPC_FUNC_IMPL(__imp__sub_83B95828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95834"))) PPC_WEAK_FUNC(sub_83B95834);
PPC_FUNC_IMPL(__imp__sub_83B95834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95838"))) PPC_WEAK_FUNC(sub_83B95838);
PPC_FUNC_IMPL(__imp__sub_83B95838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4544
	ctx.r3.s64 = ctx.r11.s64 + 4544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95844"))) PPC_WEAK_FUNC(sub_83B95844);
PPC_FUNC_IMPL(__imp__sub_83B95844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95848"))) PPC_WEAK_FUNC(sub_83B95848);
PPC_FUNC_IMPL(__imp__sub_83B95848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4552
	ctx.r3.s64 = ctx.r11.s64 + 4552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95854"))) PPC_WEAK_FUNC(sub_83B95854);
PPC_FUNC_IMPL(__imp__sub_83B95854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95858"))) PPC_WEAK_FUNC(sub_83B95858);
PPC_FUNC_IMPL(__imp__sub_83B95858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4560
	ctx.r3.s64 = ctx.r11.s64 + 4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95864"))) PPC_WEAK_FUNC(sub_83B95864);
PPC_FUNC_IMPL(__imp__sub_83B95864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95868"))) PPC_WEAK_FUNC(sub_83B95868);
PPC_FUNC_IMPL(__imp__sub_83B95868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4568
	ctx.r3.s64 = ctx.r11.s64 + 4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95874"))) PPC_WEAK_FUNC(sub_83B95874);
PPC_FUNC_IMPL(__imp__sub_83B95874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95878"))) PPC_WEAK_FUNC(sub_83B95878);
PPC_FUNC_IMPL(__imp__sub_83B95878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4576
	ctx.r3.s64 = ctx.r11.s64 + 4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95884"))) PPC_WEAK_FUNC(sub_83B95884);
PPC_FUNC_IMPL(__imp__sub_83B95884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95888"))) PPC_WEAK_FUNC(sub_83B95888);
PPC_FUNC_IMPL(__imp__sub_83B95888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4584
	ctx.r3.s64 = ctx.r11.s64 + 4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95894"))) PPC_WEAK_FUNC(sub_83B95894);
PPC_FUNC_IMPL(__imp__sub_83B95894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95898"))) PPC_WEAK_FUNC(sub_83B95898);
PPC_FUNC_IMPL(__imp__sub_83B95898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4592
	ctx.r3.s64 = ctx.r11.s64 + 4592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B958A4"))) PPC_WEAK_FUNC(sub_83B958A4);
PPC_FUNC_IMPL(__imp__sub_83B958A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B958A8"))) PPC_WEAK_FUNC(sub_83B958A8);
PPC_FUNC_IMPL(__imp__sub_83B958A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4600
	ctx.r3.s64 = ctx.r11.s64 + 4600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B958B4"))) PPC_WEAK_FUNC(sub_83B958B4);
PPC_FUNC_IMPL(__imp__sub_83B958B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B958B8"))) PPC_WEAK_FUNC(sub_83B958B8);
PPC_FUNC_IMPL(__imp__sub_83B958B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5364
	ctx.r7.s64 = ctx.r8.s64 + -5364;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5364(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5364);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5364(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5364, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B958E0"))) PPC_WEAK_FUNC(sub_83B958E0);
PPC_FUNC_IMPL(__imp__sub_83B958E0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5368
	ctx.r3.s64 = ctx.r11.s64 + -5368;
	// bl 0x83523120
	ctx.lr = 0x83B958F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,4608
	ctx.r3.s64 = ctx.r10.s64 + 4608;
	// bl 0x831cdcc8
	ctx.lr = 0x83B95904;
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

__attribute__((alias("__imp__sub_83B95914"))) PPC_WEAK_FUNC(sub_83B95914);
PPC_FUNC_IMPL(__imp__sub_83B95914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95918"))) PPC_WEAK_FUNC(sub_83B95918);
PPC_FUNC_IMPL(__imp__sub_83B95918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4624
	ctx.r3.s64 = ctx.r11.s64 + 4624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95924"))) PPC_WEAK_FUNC(sub_83B95924);
PPC_FUNC_IMPL(__imp__sub_83B95924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95928"))) PPC_WEAK_FUNC(sub_83B95928);
PPC_FUNC_IMPL(__imp__sub_83B95928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4632
	ctx.r3.s64 = ctx.r11.s64 + 4632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95934"))) PPC_WEAK_FUNC(sub_83B95934);
PPC_FUNC_IMPL(__imp__sub_83B95934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95938"))) PPC_WEAK_FUNC(sub_83B95938);
PPC_FUNC_IMPL(__imp__sub_83B95938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4640
	ctx.r3.s64 = ctx.r11.s64 + 4640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95944"))) PPC_WEAK_FUNC(sub_83B95944);
PPC_FUNC_IMPL(__imp__sub_83B95944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95948"))) PPC_WEAK_FUNC(sub_83B95948);
PPC_FUNC_IMPL(__imp__sub_83B95948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4648
	ctx.r3.s64 = ctx.r11.s64 + 4648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95954"))) PPC_WEAK_FUNC(sub_83B95954);
PPC_FUNC_IMPL(__imp__sub_83B95954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95958"))) PPC_WEAK_FUNC(sub_83B95958);
PPC_FUNC_IMPL(__imp__sub_83B95958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4656
	ctx.r3.s64 = ctx.r11.s64 + 4656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95964"))) PPC_WEAK_FUNC(sub_83B95964);
PPC_FUNC_IMPL(__imp__sub_83B95964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95968"))) PPC_WEAK_FUNC(sub_83B95968);
PPC_FUNC_IMPL(__imp__sub_83B95968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4664
	ctx.r3.s64 = ctx.r11.s64 + 4664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95974"))) PPC_WEAK_FUNC(sub_83B95974);
PPC_FUNC_IMPL(__imp__sub_83B95974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95978"))) PPC_WEAK_FUNC(sub_83B95978);
PPC_FUNC_IMPL(__imp__sub_83B95978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4672
	ctx.r3.s64 = ctx.r11.s64 + 4672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95984"))) PPC_WEAK_FUNC(sub_83B95984);
PPC_FUNC_IMPL(__imp__sub_83B95984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95988"))) PPC_WEAK_FUNC(sub_83B95988);
PPC_FUNC_IMPL(__imp__sub_83B95988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4680
	ctx.r3.s64 = ctx.r11.s64 + 4680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95994"))) PPC_WEAK_FUNC(sub_83B95994);
PPC_FUNC_IMPL(__imp__sub_83B95994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95998"))) PPC_WEAK_FUNC(sub_83B95998);
PPC_FUNC_IMPL(__imp__sub_83B95998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B959A4"))) PPC_WEAK_FUNC(sub_83B959A4);
PPC_FUNC_IMPL(__imp__sub_83B959A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B959A8"))) PPC_WEAK_FUNC(sub_83B959A8);
PPC_FUNC_IMPL(__imp__sub_83B959A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4696
	ctx.r3.s64 = ctx.r11.s64 + 4696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B959B4"))) PPC_WEAK_FUNC(sub_83B959B4);
PPC_FUNC_IMPL(__imp__sub_83B959B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B959B8"))) PPC_WEAK_FUNC(sub_83B959B8);
PPC_FUNC_IMPL(__imp__sub_83B959B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4704
	ctx.r3.s64 = ctx.r11.s64 + 4704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B959C4"))) PPC_WEAK_FUNC(sub_83B959C4);
PPC_FUNC_IMPL(__imp__sub_83B959C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B959C8"))) PPC_WEAK_FUNC(sub_83B959C8);
PPC_FUNC_IMPL(__imp__sub_83B959C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4712
	ctx.r3.s64 = ctx.r11.s64 + 4712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B959D4"))) PPC_WEAK_FUNC(sub_83B959D4);
PPC_FUNC_IMPL(__imp__sub_83B959D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B959D8"))) PPC_WEAK_FUNC(sub_83B959D8);
PPC_FUNC_IMPL(__imp__sub_83B959D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5352
	ctx.r7.s64 = ctx.r8.s64 + -5352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5352(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B95A00"))) PPC_WEAK_FUNC(sub_83B95A00);
PPC_FUNC_IMPL(__imp__sub_83B95A00) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5356
	ctx.r3.s64 = ctx.r11.s64 + -5356;
	// bl 0x83523120
	ctx.lr = 0x83B95A18;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,4720
	ctx.r3.s64 = ctx.r10.s64 + 4720;
	// bl 0x831cdcc8
	ctx.lr = 0x83B95A24;
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

__attribute__((alias("__imp__sub_83B95A34"))) PPC_WEAK_FUNC(sub_83B95A34);
PPC_FUNC_IMPL(__imp__sub_83B95A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95A38"))) PPC_WEAK_FUNC(sub_83B95A38);
PPC_FUNC_IMPL(__imp__sub_83B95A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95A44"))) PPC_WEAK_FUNC(sub_83B95A44);
PPC_FUNC_IMPL(__imp__sub_83B95A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95A48"))) PPC_WEAK_FUNC(sub_83B95A48);
PPC_FUNC_IMPL(__imp__sub_83B95A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95A54"))) PPC_WEAK_FUNC(sub_83B95A54);
PPC_FUNC_IMPL(__imp__sub_83B95A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95A58"))) PPC_WEAK_FUNC(sub_83B95A58);
PPC_FUNC_IMPL(__imp__sub_83B95A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4752
	ctx.r3.s64 = ctx.r11.s64 + 4752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95A64"))) PPC_WEAK_FUNC(sub_83B95A64);
PPC_FUNC_IMPL(__imp__sub_83B95A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95A68"))) PPC_WEAK_FUNC(sub_83B95A68);
PPC_FUNC_IMPL(__imp__sub_83B95A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4760
	ctx.r3.s64 = ctx.r11.s64 + 4760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95A74"))) PPC_WEAK_FUNC(sub_83B95A74);
PPC_FUNC_IMPL(__imp__sub_83B95A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95A78"))) PPC_WEAK_FUNC(sub_83B95A78);
PPC_FUNC_IMPL(__imp__sub_83B95A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95A84"))) PPC_WEAK_FUNC(sub_83B95A84);
PPC_FUNC_IMPL(__imp__sub_83B95A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95A88"))) PPC_WEAK_FUNC(sub_83B95A88);
PPC_FUNC_IMPL(__imp__sub_83B95A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4776
	ctx.r3.s64 = ctx.r11.s64 + 4776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95A94"))) PPC_WEAK_FUNC(sub_83B95A94);
PPC_FUNC_IMPL(__imp__sub_83B95A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95A98"))) PPC_WEAK_FUNC(sub_83B95A98);
PPC_FUNC_IMPL(__imp__sub_83B95A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4784
	ctx.r3.s64 = ctx.r11.s64 + 4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95AA4"))) PPC_WEAK_FUNC(sub_83B95AA4);
PPC_FUNC_IMPL(__imp__sub_83B95AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95AA8"))) PPC_WEAK_FUNC(sub_83B95AA8);
PPC_FUNC_IMPL(__imp__sub_83B95AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4792
	ctx.r3.s64 = ctx.r11.s64 + 4792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95AB4"))) PPC_WEAK_FUNC(sub_83B95AB4);
PPC_FUNC_IMPL(__imp__sub_83B95AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95AB8"))) PPC_WEAK_FUNC(sub_83B95AB8);
PPC_FUNC_IMPL(__imp__sub_83B95AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4800
	ctx.r3.s64 = ctx.r11.s64 + 4800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95AC4"))) PPC_WEAK_FUNC(sub_83B95AC4);
PPC_FUNC_IMPL(__imp__sub_83B95AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95AC8"))) PPC_WEAK_FUNC(sub_83B95AC8);
PPC_FUNC_IMPL(__imp__sub_83B95AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4808
	ctx.r3.s64 = ctx.r11.s64 + 4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95AD4"))) PPC_WEAK_FUNC(sub_83B95AD4);
PPC_FUNC_IMPL(__imp__sub_83B95AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95AD8"))) PPC_WEAK_FUNC(sub_83B95AD8);
PPC_FUNC_IMPL(__imp__sub_83B95AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4816
	ctx.r3.s64 = ctx.r11.s64 + 4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95AE4"))) PPC_WEAK_FUNC(sub_83B95AE4);
PPC_FUNC_IMPL(__imp__sub_83B95AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95AE8"))) PPC_WEAK_FUNC(sub_83B95AE8);
PPC_FUNC_IMPL(__imp__sub_83B95AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4824
	ctx.r3.s64 = ctx.r11.s64 + 4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95AF4"))) PPC_WEAK_FUNC(sub_83B95AF4);
PPC_FUNC_IMPL(__imp__sub_83B95AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95AF8"))) PPC_WEAK_FUNC(sub_83B95AF8);
PPC_FUNC_IMPL(__imp__sub_83B95AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5340
	ctx.r7.s64 = ctx.r8.s64 + -5340;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5340(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5340);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5340(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5340, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B95B20"))) PPC_WEAK_FUNC(sub_83B95B20);
PPC_FUNC_IMPL(__imp__sub_83B95B20) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5344
	ctx.r3.s64 = ctx.r11.s64 + -5344;
	// bl 0x83523120
	ctx.lr = 0x83B95B38;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,4832
	ctx.r3.s64 = ctx.r10.s64 + 4832;
	// bl 0x831cdcc8
	ctx.lr = 0x83B95B44;
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

__attribute__((alias("__imp__sub_83B95B54"))) PPC_WEAK_FUNC(sub_83B95B54);
PPC_FUNC_IMPL(__imp__sub_83B95B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95B58"))) PPC_WEAK_FUNC(sub_83B95B58);
PPC_FUNC_IMPL(__imp__sub_83B95B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4848
	ctx.r3.s64 = ctx.r11.s64 + 4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95B64"))) PPC_WEAK_FUNC(sub_83B95B64);
PPC_FUNC_IMPL(__imp__sub_83B95B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95B68"))) PPC_WEAK_FUNC(sub_83B95B68);
PPC_FUNC_IMPL(__imp__sub_83B95B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4856
	ctx.r3.s64 = ctx.r11.s64 + 4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95B74"))) PPC_WEAK_FUNC(sub_83B95B74);
PPC_FUNC_IMPL(__imp__sub_83B95B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95B78"))) PPC_WEAK_FUNC(sub_83B95B78);
PPC_FUNC_IMPL(__imp__sub_83B95B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95B84"))) PPC_WEAK_FUNC(sub_83B95B84);
PPC_FUNC_IMPL(__imp__sub_83B95B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95B88"))) PPC_WEAK_FUNC(sub_83B95B88);
PPC_FUNC_IMPL(__imp__sub_83B95B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4872
	ctx.r3.s64 = ctx.r11.s64 + 4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95B94"))) PPC_WEAK_FUNC(sub_83B95B94);
PPC_FUNC_IMPL(__imp__sub_83B95B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95B98"))) PPC_WEAK_FUNC(sub_83B95B98);
PPC_FUNC_IMPL(__imp__sub_83B95B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95BA4"))) PPC_WEAK_FUNC(sub_83B95BA4);
PPC_FUNC_IMPL(__imp__sub_83B95BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95BA8"))) PPC_WEAK_FUNC(sub_83B95BA8);
PPC_FUNC_IMPL(__imp__sub_83B95BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4888
	ctx.r3.s64 = ctx.r11.s64 + 4888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95BB4"))) PPC_WEAK_FUNC(sub_83B95BB4);
PPC_FUNC_IMPL(__imp__sub_83B95BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95BB8"))) PPC_WEAK_FUNC(sub_83B95BB8);
PPC_FUNC_IMPL(__imp__sub_83B95BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4896
	ctx.r3.s64 = ctx.r11.s64 + 4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95BC4"))) PPC_WEAK_FUNC(sub_83B95BC4);
PPC_FUNC_IMPL(__imp__sub_83B95BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95BC8"))) PPC_WEAK_FUNC(sub_83B95BC8);
PPC_FUNC_IMPL(__imp__sub_83B95BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95BD4"))) PPC_WEAK_FUNC(sub_83B95BD4);
PPC_FUNC_IMPL(__imp__sub_83B95BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95BD8"))) PPC_WEAK_FUNC(sub_83B95BD8);
PPC_FUNC_IMPL(__imp__sub_83B95BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4912
	ctx.r3.s64 = ctx.r11.s64 + 4912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95BE4"))) PPC_WEAK_FUNC(sub_83B95BE4);
PPC_FUNC_IMPL(__imp__sub_83B95BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95BE8"))) PPC_WEAK_FUNC(sub_83B95BE8);
PPC_FUNC_IMPL(__imp__sub_83B95BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4920
	ctx.r3.s64 = ctx.r11.s64 + 4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95BF4"))) PPC_WEAK_FUNC(sub_83B95BF4);
PPC_FUNC_IMPL(__imp__sub_83B95BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95BF8"))) PPC_WEAK_FUNC(sub_83B95BF8);
PPC_FUNC_IMPL(__imp__sub_83B95BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95C04"))) PPC_WEAK_FUNC(sub_83B95C04);
PPC_FUNC_IMPL(__imp__sub_83B95C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95C08"))) PPC_WEAK_FUNC(sub_83B95C08);
PPC_FUNC_IMPL(__imp__sub_83B95C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4936
	ctx.r3.s64 = ctx.r11.s64 + 4936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95C14"))) PPC_WEAK_FUNC(sub_83B95C14);
PPC_FUNC_IMPL(__imp__sub_83B95C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95C18"))) PPC_WEAK_FUNC(sub_83B95C18);
PPC_FUNC_IMPL(__imp__sub_83B95C18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5328
	ctx.r7.s64 = ctx.r8.s64 + -5328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5328);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5328(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5328, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B95C40"))) PPC_WEAK_FUNC(sub_83B95C40);
PPC_FUNC_IMPL(__imp__sub_83B95C40) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5332
	ctx.r3.s64 = ctx.r11.s64 + -5332;
	// bl 0x83523120
	ctx.lr = 0x83B95C58;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,4944
	ctx.r3.s64 = ctx.r10.s64 + 4944;
	// bl 0x831cdcc8
	ctx.lr = 0x83B95C64;
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

__attribute__((alias("__imp__sub_83B95C74"))) PPC_WEAK_FUNC(sub_83B95C74);
PPC_FUNC_IMPL(__imp__sub_83B95C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95C78"))) PPC_WEAK_FUNC(sub_83B95C78);
PPC_FUNC_IMPL(__imp__sub_83B95C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4960
	ctx.r3.s64 = ctx.r11.s64 + 4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95C84"))) PPC_WEAK_FUNC(sub_83B95C84);
PPC_FUNC_IMPL(__imp__sub_83B95C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95C88"))) PPC_WEAK_FUNC(sub_83B95C88);
PPC_FUNC_IMPL(__imp__sub_83B95C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4968
	ctx.r3.s64 = ctx.r11.s64 + 4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95C94"))) PPC_WEAK_FUNC(sub_83B95C94);
PPC_FUNC_IMPL(__imp__sub_83B95C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95C98"))) PPC_WEAK_FUNC(sub_83B95C98);
PPC_FUNC_IMPL(__imp__sub_83B95C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95CA4"))) PPC_WEAK_FUNC(sub_83B95CA4);
PPC_FUNC_IMPL(__imp__sub_83B95CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95CA8"))) PPC_WEAK_FUNC(sub_83B95CA8);
PPC_FUNC_IMPL(__imp__sub_83B95CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4984
	ctx.r3.s64 = ctx.r11.s64 + 4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95CB4"))) PPC_WEAK_FUNC(sub_83B95CB4);
PPC_FUNC_IMPL(__imp__sub_83B95CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95CB8"))) PPC_WEAK_FUNC(sub_83B95CB8);
PPC_FUNC_IMPL(__imp__sub_83B95CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,4992
	ctx.r3.s64 = ctx.r11.s64 + 4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95CC4"))) PPC_WEAK_FUNC(sub_83B95CC4);
PPC_FUNC_IMPL(__imp__sub_83B95CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95CC8"))) PPC_WEAK_FUNC(sub_83B95CC8);
PPC_FUNC_IMPL(__imp__sub_83B95CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5000
	ctx.r3.s64 = ctx.r11.s64 + 5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95CD4"))) PPC_WEAK_FUNC(sub_83B95CD4);
PPC_FUNC_IMPL(__imp__sub_83B95CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95CD8"))) PPC_WEAK_FUNC(sub_83B95CD8);
PPC_FUNC_IMPL(__imp__sub_83B95CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95CE4"))) PPC_WEAK_FUNC(sub_83B95CE4);
PPC_FUNC_IMPL(__imp__sub_83B95CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95CE8"))) PPC_WEAK_FUNC(sub_83B95CE8);
PPC_FUNC_IMPL(__imp__sub_83B95CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5016
	ctx.r3.s64 = ctx.r11.s64 + 5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95CF4"))) PPC_WEAK_FUNC(sub_83B95CF4);
PPC_FUNC_IMPL(__imp__sub_83B95CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95CF8"))) PPC_WEAK_FUNC(sub_83B95CF8);
PPC_FUNC_IMPL(__imp__sub_83B95CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5024
	ctx.r3.s64 = ctx.r11.s64 + 5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95D04"))) PPC_WEAK_FUNC(sub_83B95D04);
PPC_FUNC_IMPL(__imp__sub_83B95D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95D08"))) PPC_WEAK_FUNC(sub_83B95D08);
PPC_FUNC_IMPL(__imp__sub_83B95D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95D14"))) PPC_WEAK_FUNC(sub_83B95D14);
PPC_FUNC_IMPL(__imp__sub_83B95D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95D18"))) PPC_WEAK_FUNC(sub_83B95D18);
PPC_FUNC_IMPL(__imp__sub_83B95D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95D24"))) PPC_WEAK_FUNC(sub_83B95D24);
PPC_FUNC_IMPL(__imp__sub_83B95D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95D28"))) PPC_WEAK_FUNC(sub_83B95D28);
PPC_FUNC_IMPL(__imp__sub_83B95D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5048
	ctx.r3.s64 = ctx.r11.s64 + 5048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95D34"))) PPC_WEAK_FUNC(sub_83B95D34);
PPC_FUNC_IMPL(__imp__sub_83B95D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95D38"))) PPC_WEAK_FUNC(sub_83B95D38);
PPC_FUNC_IMPL(__imp__sub_83B95D38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5316
	ctx.r7.s64 = ctx.r8.s64 + -5316;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5316(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5316);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5316(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5316, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B95D60"))) PPC_WEAK_FUNC(sub_83B95D60);
PPC_FUNC_IMPL(__imp__sub_83B95D60) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-5320
	ctx.r3.s64 = ctx.r11.s64 + -5320;
	// bl 0x83523120
	ctx.lr = 0x83B95D78;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,5056
	ctx.r3.s64 = ctx.r10.s64 + 5056;
	// bl 0x831cdcc8
	ctx.lr = 0x83B95D84;
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

__attribute__((alias("__imp__sub_83B95D94"))) PPC_WEAK_FUNC(sub_83B95D94);
PPC_FUNC_IMPL(__imp__sub_83B95D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95D98"))) PPC_WEAK_FUNC(sub_83B95D98);
PPC_FUNC_IMPL(__imp__sub_83B95D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-6560
	ctx.r4.s64 = ctx.r11.s64 + -6560;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-5308
	ctx.r3.s64 = ctx.r7.s64 + -5308;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95DC8"))) PPC_WEAK_FUNC(sub_83B95DC8);
PPC_FUNC_IMPL(__imp__sub_83B95DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95DD4"))) PPC_WEAK_FUNC(sub_83B95DD4);
PPC_FUNC_IMPL(__imp__sub_83B95DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95DD8"))) PPC_WEAK_FUNC(sub_83B95DD8);
PPC_FUNC_IMPL(__imp__sub_83B95DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5080
	ctx.r3.s64 = ctx.r11.s64 + 5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95DE4"))) PPC_WEAK_FUNC(sub_83B95DE4);
PPC_FUNC_IMPL(__imp__sub_83B95DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95DE8"))) PPC_WEAK_FUNC(sub_83B95DE8);
PPC_FUNC_IMPL(__imp__sub_83B95DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5088
	ctx.r3.s64 = ctx.r11.s64 + 5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95DF4"))) PPC_WEAK_FUNC(sub_83B95DF4);
PPC_FUNC_IMPL(__imp__sub_83B95DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95DF8"))) PPC_WEAK_FUNC(sub_83B95DF8);
PPC_FUNC_IMPL(__imp__sub_83B95DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5096
	ctx.r3.s64 = ctx.r11.s64 + 5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E04"))) PPC_WEAK_FUNC(sub_83B95E04);
PPC_FUNC_IMPL(__imp__sub_83B95E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95E08"))) PPC_WEAK_FUNC(sub_83B95E08);
PPC_FUNC_IMPL(__imp__sub_83B95E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5104
	ctx.r3.s64 = ctx.r11.s64 + 5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E14"))) PPC_WEAK_FUNC(sub_83B95E14);
PPC_FUNC_IMPL(__imp__sub_83B95E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95E18"))) PPC_WEAK_FUNC(sub_83B95E18);
PPC_FUNC_IMPL(__imp__sub_83B95E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5112
	ctx.r3.s64 = ctx.r11.s64 + 5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E24"))) PPC_WEAK_FUNC(sub_83B95E24);
PPC_FUNC_IMPL(__imp__sub_83B95E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95E28"))) PPC_WEAK_FUNC(sub_83B95E28);
PPC_FUNC_IMPL(__imp__sub_83B95E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E34"))) PPC_WEAK_FUNC(sub_83B95E34);
PPC_FUNC_IMPL(__imp__sub_83B95E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95E38"))) PPC_WEAK_FUNC(sub_83B95E38);
PPC_FUNC_IMPL(__imp__sub_83B95E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5128
	ctx.r3.s64 = ctx.r11.s64 + 5128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E44"))) PPC_WEAK_FUNC(sub_83B95E44);
PPC_FUNC_IMPL(__imp__sub_83B95E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95E48"))) PPC_WEAK_FUNC(sub_83B95E48);
PPC_FUNC_IMPL(__imp__sub_83B95E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5136
	ctx.r3.s64 = ctx.r11.s64 + 5136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E54"))) PPC_WEAK_FUNC(sub_83B95E54);
PPC_FUNC_IMPL(__imp__sub_83B95E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95E58"))) PPC_WEAK_FUNC(sub_83B95E58);
PPC_FUNC_IMPL(__imp__sub_83B95E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5144
	ctx.r3.s64 = ctx.r11.s64 + 5144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E64"))) PPC_WEAK_FUNC(sub_83B95E64);
PPC_FUNC_IMPL(__imp__sub_83B95E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95E68"))) PPC_WEAK_FUNC(sub_83B95E68);
PPC_FUNC_IMPL(__imp__sub_83B95E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5152
	ctx.r3.s64 = ctx.r11.s64 + 5152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E74"))) PPC_WEAK_FUNC(sub_83B95E74);
PPC_FUNC_IMPL(__imp__sub_83B95E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B95E78"))) PPC_WEAK_FUNC(sub_83B95E78);
PPC_FUNC_IMPL(__imp__sub_83B95E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,5160
	ctx.r3.s64 = ctx.r11.s64 + 5160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B95E84"))) PPC_WEAK_FUNC(sub_83B95E84);
PPC_FUNC_IMPL(__imp__sub_83B95E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

