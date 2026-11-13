#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B8E12C"))) PPC_WEAK_FUNC(sub_83B8E12C);
PPC_FUNC_IMPL(__imp__sub_83B8E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E130"))) PPC_WEAK_FUNC(sub_83B8E130);
PPC_FUNC_IMPL(__imp__sub_83B8E130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7472
	ctx.r3.s64 = ctx.r11.s64 + -7472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E13C"))) PPC_WEAK_FUNC(sub_83B8E13C);
PPC_FUNC_IMPL(__imp__sub_83B8E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E140"))) PPC_WEAK_FUNC(sub_83B8E140);
PPC_FUNC_IMPL(__imp__sub_83B8E140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7464
	ctx.r3.s64 = ctx.r11.s64 + -7464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E14C"))) PPC_WEAK_FUNC(sub_83B8E14C);
PPC_FUNC_IMPL(__imp__sub_83B8E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E150"))) PPC_WEAK_FUNC(sub_83B8E150);
PPC_FUNC_IMPL(__imp__sub_83B8E150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7456
	ctx.r3.s64 = ctx.r11.s64 + -7456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E15C"))) PPC_WEAK_FUNC(sub_83B8E15C);
PPC_FUNC_IMPL(__imp__sub_83B8E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E160"))) PPC_WEAK_FUNC(sub_83B8E160);
PPC_FUNC_IMPL(__imp__sub_83B8E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7448
	ctx.r3.s64 = ctx.r11.s64 + -7448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E16C"))) PPC_WEAK_FUNC(sub_83B8E16C);
PPC_FUNC_IMPL(__imp__sub_83B8E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E170"))) PPC_WEAK_FUNC(sub_83B8E170);
PPC_FUNC_IMPL(__imp__sub_83B8E170) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7156
	ctx.r7.s64 = ctx.r8.s64 + -7156;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7156(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7156);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7156, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8E198"))) PPC_WEAK_FUNC(sub_83B8E198);
PPC_FUNC_IMPL(__imp__sub_83B8E198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7440
	ctx.r3.s64 = ctx.r11.s64 + -7440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E1A4"))) PPC_WEAK_FUNC(sub_83B8E1A4);
PPC_FUNC_IMPL(__imp__sub_83B8E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E1A8"))) PPC_WEAK_FUNC(sub_83B8E1A8);
PPC_FUNC_IMPL(__imp__sub_83B8E1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7432
	ctx.r3.s64 = ctx.r11.s64 + -7432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E1B4"))) PPC_WEAK_FUNC(sub_83B8E1B4);
PPC_FUNC_IMPL(__imp__sub_83B8E1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E1B8"))) PPC_WEAK_FUNC(sub_83B8E1B8);
PPC_FUNC_IMPL(__imp__sub_83B8E1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7424
	ctx.r3.s64 = ctx.r11.s64 + -7424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E1C4"))) PPC_WEAK_FUNC(sub_83B8E1C4);
PPC_FUNC_IMPL(__imp__sub_83B8E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E1C8"))) PPC_WEAK_FUNC(sub_83B8E1C8);
PPC_FUNC_IMPL(__imp__sub_83B8E1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7416
	ctx.r3.s64 = ctx.r11.s64 + -7416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E1D4"))) PPC_WEAK_FUNC(sub_83B8E1D4);
PPC_FUNC_IMPL(__imp__sub_83B8E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E1D8"))) PPC_WEAK_FUNC(sub_83B8E1D8);
PPC_FUNC_IMPL(__imp__sub_83B8E1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7408
	ctx.r3.s64 = ctx.r11.s64 + -7408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E1E4"))) PPC_WEAK_FUNC(sub_83B8E1E4);
PPC_FUNC_IMPL(__imp__sub_83B8E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E1E8"))) PPC_WEAK_FUNC(sub_83B8E1E8);
PPC_FUNC_IMPL(__imp__sub_83B8E1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7400
	ctx.r3.s64 = ctx.r11.s64 + -7400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E1F4"))) PPC_WEAK_FUNC(sub_83B8E1F4);
PPC_FUNC_IMPL(__imp__sub_83B8E1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E1F8"))) PPC_WEAK_FUNC(sub_83B8E1F8);
PPC_FUNC_IMPL(__imp__sub_83B8E1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7392
	ctx.r3.s64 = ctx.r11.s64 + -7392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E204"))) PPC_WEAK_FUNC(sub_83B8E204);
PPC_FUNC_IMPL(__imp__sub_83B8E204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E208"))) PPC_WEAK_FUNC(sub_83B8E208);
PPC_FUNC_IMPL(__imp__sub_83B8E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E214"))) PPC_WEAK_FUNC(sub_83B8E214);
PPC_FUNC_IMPL(__imp__sub_83B8E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E218"))) PPC_WEAK_FUNC(sub_83B8E218);
PPC_FUNC_IMPL(__imp__sub_83B8E218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7376
	ctx.r3.s64 = ctx.r11.s64 + -7376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E224"))) PPC_WEAK_FUNC(sub_83B8E224);
PPC_FUNC_IMPL(__imp__sub_83B8E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E228"))) PPC_WEAK_FUNC(sub_83B8E228);
PPC_FUNC_IMPL(__imp__sub_83B8E228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7368
	ctx.r3.s64 = ctx.r11.s64 + -7368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E234"))) PPC_WEAK_FUNC(sub_83B8E234);
PPC_FUNC_IMPL(__imp__sub_83B8E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E238"))) PPC_WEAK_FUNC(sub_83B8E238);
PPC_FUNC_IMPL(__imp__sub_83B8E238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7360
	ctx.r3.s64 = ctx.r11.s64 + -7360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E244"))) PPC_WEAK_FUNC(sub_83B8E244);
PPC_FUNC_IMPL(__imp__sub_83B8E244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E248"))) PPC_WEAK_FUNC(sub_83B8E248);
PPC_FUNC_IMPL(__imp__sub_83B8E248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7352
	ctx.r3.s64 = ctx.r11.s64 + -7352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E254"))) PPC_WEAK_FUNC(sub_83B8E254);
PPC_FUNC_IMPL(__imp__sub_83B8E254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E258"))) PPC_WEAK_FUNC(sub_83B8E258);
PPC_FUNC_IMPL(__imp__sub_83B8E258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r9,58
	ctx.r9.s64 = 58;
	// addi r11,r11,-7136
	ctx.r11.s64 = ctx.r11.s64 + -7136;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83B8E270:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83b8e270
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B8E270;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8E298"))) PPC_WEAK_FUNC(sub_83B8E298);
PPC_FUNC_IMPL(__imp__sub_83B8E298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7344
	ctx.r3.s64 = ctx.r11.s64 + -7344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E2A4"))) PPC_WEAK_FUNC(sub_83B8E2A4);
PPC_FUNC_IMPL(__imp__sub_83B8E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E2A8"))) PPC_WEAK_FUNC(sub_83B8E2A8);
PPC_FUNC_IMPL(__imp__sub_83B8E2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7336
	ctx.r3.s64 = ctx.r11.s64 + -7336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E2B4"))) PPC_WEAK_FUNC(sub_83B8E2B4);
PPC_FUNC_IMPL(__imp__sub_83B8E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E2B8"))) PPC_WEAK_FUNC(sub_83B8E2B8);
PPC_FUNC_IMPL(__imp__sub_83B8E2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7328
	ctx.r3.s64 = ctx.r11.s64 + -7328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E2C4"))) PPC_WEAK_FUNC(sub_83B8E2C4);
PPC_FUNC_IMPL(__imp__sub_83B8E2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E2C8"))) PPC_WEAK_FUNC(sub_83B8E2C8);
PPC_FUNC_IMPL(__imp__sub_83B8E2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E2D4"))) PPC_WEAK_FUNC(sub_83B8E2D4);
PPC_FUNC_IMPL(__imp__sub_83B8E2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E2D8"))) PPC_WEAK_FUNC(sub_83B8E2D8);
PPC_FUNC_IMPL(__imp__sub_83B8E2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7312
	ctx.r3.s64 = ctx.r11.s64 + -7312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E2E4"))) PPC_WEAK_FUNC(sub_83B8E2E4);
PPC_FUNC_IMPL(__imp__sub_83B8E2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E2E8"))) PPC_WEAK_FUNC(sub_83B8E2E8);
PPC_FUNC_IMPL(__imp__sub_83B8E2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7304
	ctx.r3.s64 = ctx.r11.s64 + -7304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E2F4"))) PPC_WEAK_FUNC(sub_83B8E2F4);
PPC_FUNC_IMPL(__imp__sub_83B8E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E2F8"))) PPC_WEAK_FUNC(sub_83B8E2F8);
PPC_FUNC_IMPL(__imp__sub_83B8E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7296
	ctx.r3.s64 = ctx.r11.s64 + -7296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E304"))) PPC_WEAK_FUNC(sub_83B8E304);
PPC_FUNC_IMPL(__imp__sub_83B8E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E308"))) PPC_WEAK_FUNC(sub_83B8E308);
PPC_FUNC_IMPL(__imp__sub_83B8E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7288
	ctx.r3.s64 = ctx.r11.s64 + -7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E314"))) PPC_WEAK_FUNC(sub_83B8E314);
PPC_FUNC_IMPL(__imp__sub_83B8E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E318"))) PPC_WEAK_FUNC(sub_83B8E318);
PPC_FUNC_IMPL(__imp__sub_83B8E318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7280
	ctx.r3.s64 = ctx.r11.s64 + -7280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E324"))) PPC_WEAK_FUNC(sub_83B8E324);
PPC_FUNC_IMPL(__imp__sub_83B8E324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E328"))) PPC_WEAK_FUNC(sub_83B8E328);
PPC_FUNC_IMPL(__imp__sub_83B8E328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7272
	ctx.r3.s64 = ctx.r11.s64 + -7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E334"))) PPC_WEAK_FUNC(sub_83B8E334);
PPC_FUNC_IMPL(__imp__sub_83B8E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E338"))) PPC_WEAK_FUNC(sub_83B8E338);
PPC_FUNC_IMPL(__imp__sub_83B8E338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E344"))) PPC_WEAK_FUNC(sub_83B8E344);
PPC_FUNC_IMPL(__imp__sub_83B8E344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E348"))) PPC_WEAK_FUNC(sub_83B8E348);
PPC_FUNC_IMPL(__imp__sub_83B8E348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E354"))) PPC_WEAK_FUNC(sub_83B8E354);
PPC_FUNC_IMPL(__imp__sub_83B8E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E358"))) PPC_WEAK_FUNC(sub_83B8E358);
PPC_FUNC_IMPL(__imp__sub_83B8E358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7248
	ctx.r3.s64 = ctx.r11.s64 + -7248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E364"))) PPC_WEAK_FUNC(sub_83B8E364);
PPC_FUNC_IMPL(__imp__sub_83B8E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E368"))) PPC_WEAK_FUNC(sub_83B8E368);
PPC_FUNC_IMPL(__imp__sub_83B8E368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7240
	ctx.r3.s64 = ctx.r11.s64 + -7240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E374"))) PPC_WEAK_FUNC(sub_83B8E374);
PPC_FUNC_IMPL(__imp__sub_83B8E374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E378"))) PPC_WEAK_FUNC(sub_83B8E378);
PPC_FUNC_IMPL(__imp__sub_83B8E378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7232
	ctx.r3.s64 = ctx.r11.s64 + -7232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E384"))) PPC_WEAK_FUNC(sub_83B8E384);
PPC_FUNC_IMPL(__imp__sub_83B8E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E388"))) PPC_WEAK_FUNC(sub_83B8E388);
PPC_FUNC_IMPL(__imp__sub_83B8E388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E394"))) PPC_WEAK_FUNC(sub_83B8E394);
PPC_FUNC_IMPL(__imp__sub_83B8E394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E398"))) PPC_WEAK_FUNC(sub_83B8E398);
PPC_FUNC_IMPL(__imp__sub_83B8E398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7216
	ctx.r3.s64 = ctx.r11.s64 + -7216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E3A4"))) PPC_WEAK_FUNC(sub_83B8E3A4);
PPC_FUNC_IMPL(__imp__sub_83B8E3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E3A8"))) PPC_WEAK_FUNC(sub_83B8E3A8);
PPC_FUNC_IMPL(__imp__sub_83B8E3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E3B4"))) PPC_WEAK_FUNC(sub_83B8E3B4);
PPC_FUNC_IMPL(__imp__sub_83B8E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E3B8"))) PPC_WEAK_FUNC(sub_83B8E3B8);
PPC_FUNC_IMPL(__imp__sub_83B8E3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7200
	ctx.r3.s64 = ctx.r11.s64 + -7200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E3C4"))) PPC_WEAK_FUNC(sub_83B8E3C4);
PPC_FUNC_IMPL(__imp__sub_83B8E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E3C8"))) PPC_WEAK_FUNC(sub_83B8E3C8);
PPC_FUNC_IMPL(__imp__sub_83B8E3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7192
	ctx.r3.s64 = ctx.r11.s64 + -7192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E3D4"))) PPC_WEAK_FUNC(sub_83B8E3D4);
PPC_FUNC_IMPL(__imp__sub_83B8E3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E3D8"))) PPC_WEAK_FUNC(sub_83B8E3D8);
PPC_FUNC_IMPL(__imp__sub_83B8E3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7184
	ctx.r3.s64 = ctx.r11.s64 + -7184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E3E4"))) PPC_WEAK_FUNC(sub_83B8E3E4);
PPC_FUNC_IMPL(__imp__sub_83B8E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E3E8"))) PPC_WEAK_FUNC(sub_83B8E3E8);
PPC_FUNC_IMPL(__imp__sub_83B8E3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7176
	ctx.r3.s64 = ctx.r11.s64 + -7176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E3F4"))) PPC_WEAK_FUNC(sub_83B8E3F4);
PPC_FUNC_IMPL(__imp__sub_83B8E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E3F8"))) PPC_WEAK_FUNC(sub_83B8E3F8);
PPC_FUNC_IMPL(__imp__sub_83B8E3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7168
	ctx.r3.s64 = ctx.r11.s64 + -7168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E404"))) PPC_WEAK_FUNC(sub_83B8E404);
PPC_FUNC_IMPL(__imp__sub_83B8E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E408"))) PPC_WEAK_FUNC(sub_83B8E408);
PPC_FUNC_IMPL(__imp__sub_83B8E408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7160
	ctx.r3.s64 = ctx.r11.s64 + -7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E414"))) PPC_WEAK_FUNC(sub_83B8E414);
PPC_FUNC_IMPL(__imp__sub_83B8E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E418"))) PPC_WEAK_FUNC(sub_83B8E418);
PPC_FUNC_IMPL(__imp__sub_83B8E418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7152
	ctx.r3.s64 = ctx.r11.s64 + -7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E424"))) PPC_WEAK_FUNC(sub_83B8E424);
PPC_FUNC_IMPL(__imp__sub_83B8E424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E428"))) PPC_WEAK_FUNC(sub_83B8E428);
PPC_FUNC_IMPL(__imp__sub_83B8E428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E434"))) PPC_WEAK_FUNC(sub_83B8E434);
PPC_FUNC_IMPL(__imp__sub_83B8E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E438"))) PPC_WEAK_FUNC(sub_83B8E438);
PPC_FUNC_IMPL(__imp__sub_83B8E438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7136
	ctx.r3.s64 = ctx.r11.s64 + -7136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E444"))) PPC_WEAK_FUNC(sub_83B8E444);
PPC_FUNC_IMPL(__imp__sub_83B8E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E448"))) PPC_WEAK_FUNC(sub_83B8E448);
PPC_FUNC_IMPL(__imp__sub_83B8E448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7128
	ctx.r3.s64 = ctx.r11.s64 + -7128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E454"))) PPC_WEAK_FUNC(sub_83B8E454);
PPC_FUNC_IMPL(__imp__sub_83B8E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E458"))) PPC_WEAK_FUNC(sub_83B8E458);
PPC_FUNC_IMPL(__imp__sub_83B8E458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7120
	ctx.r3.s64 = ctx.r11.s64 + -7120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E464"))) PPC_WEAK_FUNC(sub_83B8E464);
PPC_FUNC_IMPL(__imp__sub_83B8E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E468"))) PPC_WEAK_FUNC(sub_83B8E468);
PPC_FUNC_IMPL(__imp__sub_83B8E468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7112
	ctx.r3.s64 = ctx.r11.s64 + -7112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E474"))) PPC_WEAK_FUNC(sub_83B8E474);
PPC_FUNC_IMPL(__imp__sub_83B8E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E478"))) PPC_WEAK_FUNC(sub_83B8E478);
PPC_FUNC_IMPL(__imp__sub_83B8E478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7104
	ctx.r3.s64 = ctx.r11.s64 + -7104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E484"))) PPC_WEAK_FUNC(sub_83B8E484);
PPC_FUNC_IMPL(__imp__sub_83B8E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E488"))) PPC_WEAK_FUNC(sub_83B8E488);
PPC_FUNC_IMPL(__imp__sub_83B8E488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7096
	ctx.r3.s64 = ctx.r11.s64 + -7096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E494"))) PPC_WEAK_FUNC(sub_83B8E494);
PPC_FUNC_IMPL(__imp__sub_83B8E494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E498"))) PPC_WEAK_FUNC(sub_83B8E498);
PPC_FUNC_IMPL(__imp__sub_83B8E498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7088
	ctx.r3.s64 = ctx.r11.s64 + -7088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E4A4"))) PPC_WEAK_FUNC(sub_83B8E4A4);
PPC_FUNC_IMPL(__imp__sub_83B8E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E4A8"))) PPC_WEAK_FUNC(sub_83B8E4A8);
PPC_FUNC_IMPL(__imp__sub_83B8E4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7080
	ctx.r3.s64 = ctx.r11.s64 + -7080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E4B4"))) PPC_WEAK_FUNC(sub_83B8E4B4);
PPC_FUNC_IMPL(__imp__sub_83B8E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E4B8"))) PPC_WEAK_FUNC(sub_83B8E4B8);
PPC_FUNC_IMPL(__imp__sub_83B8E4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E4C4"))) PPC_WEAK_FUNC(sub_83B8E4C4);
PPC_FUNC_IMPL(__imp__sub_83B8E4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E4C8"))) PPC_WEAK_FUNC(sub_83B8E4C8);
PPC_FUNC_IMPL(__imp__sub_83B8E4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7064
	ctx.r3.s64 = ctx.r11.s64 + -7064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E4D4"))) PPC_WEAK_FUNC(sub_83B8E4D4);
PPC_FUNC_IMPL(__imp__sub_83B8E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E4D8"))) PPC_WEAK_FUNC(sub_83B8E4D8);
PPC_FUNC_IMPL(__imp__sub_83B8E4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7056
	ctx.r3.s64 = ctx.r11.s64 + -7056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E4E4"))) PPC_WEAK_FUNC(sub_83B8E4E4);
PPC_FUNC_IMPL(__imp__sub_83B8E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E4E8"))) PPC_WEAK_FUNC(sub_83B8E4E8);
PPC_FUNC_IMPL(__imp__sub_83B8E4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7048
	ctx.r3.s64 = ctx.r11.s64 + -7048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E4F4"))) PPC_WEAK_FUNC(sub_83B8E4F4);
PPC_FUNC_IMPL(__imp__sub_83B8E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E4F8"))) PPC_WEAK_FUNC(sub_83B8E4F8);
PPC_FUNC_IMPL(__imp__sub_83B8E4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7040
	ctx.r3.s64 = ctx.r11.s64 + -7040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E504"))) PPC_WEAK_FUNC(sub_83B8E504);
PPC_FUNC_IMPL(__imp__sub_83B8E504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E508"))) PPC_WEAK_FUNC(sub_83B8E508);
PPC_FUNC_IMPL(__imp__sub_83B8E508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7032
	ctx.r3.s64 = ctx.r11.s64 + -7032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E514"))) PPC_WEAK_FUNC(sub_83B8E514);
PPC_FUNC_IMPL(__imp__sub_83B8E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E518"))) PPC_WEAK_FUNC(sub_83B8E518);
PPC_FUNC_IMPL(__imp__sub_83B8E518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E524"))) PPC_WEAK_FUNC(sub_83B8E524);
PPC_FUNC_IMPL(__imp__sub_83B8E524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E528"))) PPC_WEAK_FUNC(sub_83B8E528);
PPC_FUNC_IMPL(__imp__sub_83B8E528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7016
	ctx.r3.s64 = ctx.r11.s64 + -7016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E534"))) PPC_WEAK_FUNC(sub_83B8E534);
PPC_FUNC_IMPL(__imp__sub_83B8E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E538"))) PPC_WEAK_FUNC(sub_83B8E538);
PPC_FUNC_IMPL(__imp__sub_83B8E538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7008
	ctx.r3.s64 = ctx.r11.s64 + -7008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E544"))) PPC_WEAK_FUNC(sub_83B8E544);
PPC_FUNC_IMPL(__imp__sub_83B8E544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E548"))) PPC_WEAK_FUNC(sub_83B8E548);
PPC_FUNC_IMPL(__imp__sub_83B8E548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E554"))) PPC_WEAK_FUNC(sub_83B8E554);
PPC_FUNC_IMPL(__imp__sub_83B8E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E558"))) PPC_WEAK_FUNC(sub_83B8E558);
PPC_FUNC_IMPL(__imp__sub_83B8E558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6992
	ctx.r3.s64 = ctx.r11.s64 + -6992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E564"))) PPC_WEAK_FUNC(sub_83B8E564);
PPC_FUNC_IMPL(__imp__sub_83B8E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E568"))) PPC_WEAK_FUNC(sub_83B8E568);
PPC_FUNC_IMPL(__imp__sub_83B8E568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6984
	ctx.r3.s64 = ctx.r11.s64 + -6984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E574"))) PPC_WEAK_FUNC(sub_83B8E574);
PPC_FUNC_IMPL(__imp__sub_83B8E574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E578"))) PPC_WEAK_FUNC(sub_83B8E578);
PPC_FUNC_IMPL(__imp__sub_83B8E578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6976
	ctx.r3.s64 = ctx.r11.s64 + -6976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E584"))) PPC_WEAK_FUNC(sub_83B8E584);
PPC_FUNC_IMPL(__imp__sub_83B8E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E588"))) PPC_WEAK_FUNC(sub_83B8E588);
PPC_FUNC_IMPL(__imp__sub_83B8E588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6968
	ctx.r3.s64 = ctx.r11.s64 + -6968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E594"))) PPC_WEAK_FUNC(sub_83B8E594);
PPC_FUNC_IMPL(__imp__sub_83B8E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E598"))) PPC_WEAK_FUNC(sub_83B8E598);
PPC_FUNC_IMPL(__imp__sub_83B8E598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6960
	ctx.r3.s64 = ctx.r11.s64 + -6960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E5A4"))) PPC_WEAK_FUNC(sub_83B8E5A4);
PPC_FUNC_IMPL(__imp__sub_83B8E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E5A8"))) PPC_WEAK_FUNC(sub_83B8E5A8);
PPC_FUNC_IMPL(__imp__sub_83B8E5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6952
	ctx.r3.s64 = ctx.r11.s64 + -6952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E5B4"))) PPC_WEAK_FUNC(sub_83B8E5B4);
PPC_FUNC_IMPL(__imp__sub_83B8E5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E5B8"))) PPC_WEAK_FUNC(sub_83B8E5B8);
PPC_FUNC_IMPL(__imp__sub_83B8E5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6944
	ctx.r3.s64 = ctx.r11.s64 + -6944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E5C4"))) PPC_WEAK_FUNC(sub_83B8E5C4);
PPC_FUNC_IMPL(__imp__sub_83B8E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E5C8"))) PPC_WEAK_FUNC(sub_83B8E5C8);
PPC_FUNC_IMPL(__imp__sub_83B8E5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6936
	ctx.r3.s64 = ctx.r11.s64 + -6936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E5D4"))) PPC_WEAK_FUNC(sub_83B8E5D4);
PPC_FUNC_IMPL(__imp__sub_83B8E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E5D8"))) PPC_WEAK_FUNC(sub_83B8E5D8);
PPC_FUNC_IMPL(__imp__sub_83B8E5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6928
	ctx.r3.s64 = ctx.r11.s64 + -6928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E5E4"))) PPC_WEAK_FUNC(sub_83B8E5E4);
PPC_FUNC_IMPL(__imp__sub_83B8E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E5E8"))) PPC_WEAK_FUNC(sub_83B8E5E8);
PPC_FUNC_IMPL(__imp__sub_83B8E5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6920
	ctx.r3.s64 = ctx.r11.s64 + -6920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E5F4"))) PPC_WEAK_FUNC(sub_83B8E5F4);
PPC_FUNC_IMPL(__imp__sub_83B8E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E5F8"))) PPC_WEAK_FUNC(sub_83B8E5F8);
PPC_FUNC_IMPL(__imp__sub_83B8E5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6912
	ctx.r3.s64 = ctx.r11.s64 + -6912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E604"))) PPC_WEAK_FUNC(sub_83B8E604);
PPC_FUNC_IMPL(__imp__sub_83B8E604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E608"))) PPC_WEAK_FUNC(sub_83B8E608);
PPC_FUNC_IMPL(__imp__sub_83B8E608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6904
	ctx.r3.s64 = ctx.r11.s64 + -6904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E614"))) PPC_WEAK_FUNC(sub_83B8E614);
PPC_FUNC_IMPL(__imp__sub_83B8E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E618"))) PPC_WEAK_FUNC(sub_83B8E618);
PPC_FUNC_IMPL(__imp__sub_83B8E618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6896
	ctx.r3.s64 = ctx.r11.s64 + -6896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E624"))) PPC_WEAK_FUNC(sub_83B8E624);
PPC_FUNC_IMPL(__imp__sub_83B8E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E628"))) PPC_WEAK_FUNC(sub_83B8E628);
PPC_FUNC_IMPL(__imp__sub_83B8E628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6888
	ctx.r3.s64 = ctx.r11.s64 + -6888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E634"))) PPC_WEAK_FUNC(sub_83B8E634);
PPC_FUNC_IMPL(__imp__sub_83B8E634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E638"))) PPC_WEAK_FUNC(sub_83B8E638);
PPC_FUNC_IMPL(__imp__sub_83B8E638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6880
	ctx.r3.s64 = ctx.r11.s64 + -6880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E644"))) PPC_WEAK_FUNC(sub_83B8E644);
PPC_FUNC_IMPL(__imp__sub_83B8E644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E648"))) PPC_WEAK_FUNC(sub_83B8E648);
PPC_FUNC_IMPL(__imp__sub_83B8E648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6872
	ctx.r3.s64 = ctx.r11.s64 + -6872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E654"))) PPC_WEAK_FUNC(sub_83B8E654);
PPC_FUNC_IMPL(__imp__sub_83B8E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E658"))) PPC_WEAK_FUNC(sub_83B8E658);
PPC_FUNC_IMPL(__imp__sub_83B8E658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6864
	ctx.r3.s64 = ctx.r11.s64 + -6864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E664"))) PPC_WEAK_FUNC(sub_83B8E664);
PPC_FUNC_IMPL(__imp__sub_83B8E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E668"))) PPC_WEAK_FUNC(sub_83B8E668);
PPC_FUNC_IMPL(__imp__sub_83B8E668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6856
	ctx.r3.s64 = ctx.r11.s64 + -6856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E674"))) PPC_WEAK_FUNC(sub_83B8E674);
PPC_FUNC_IMPL(__imp__sub_83B8E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E678"))) PPC_WEAK_FUNC(sub_83B8E678);
PPC_FUNC_IMPL(__imp__sub_83B8E678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6848
	ctx.r3.s64 = ctx.r11.s64 + -6848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E684"))) PPC_WEAK_FUNC(sub_83B8E684);
PPC_FUNC_IMPL(__imp__sub_83B8E684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E688"))) PPC_WEAK_FUNC(sub_83B8E688);
PPC_FUNC_IMPL(__imp__sub_83B8E688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6840
	ctx.r3.s64 = ctx.r11.s64 + -6840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E694"))) PPC_WEAK_FUNC(sub_83B8E694);
PPC_FUNC_IMPL(__imp__sub_83B8E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E698"))) PPC_WEAK_FUNC(sub_83B8E698);
PPC_FUNC_IMPL(__imp__sub_83B8E698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6832
	ctx.r3.s64 = ctx.r11.s64 + -6832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E6A4"))) PPC_WEAK_FUNC(sub_83B8E6A4);
PPC_FUNC_IMPL(__imp__sub_83B8E6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E6A8"))) PPC_WEAK_FUNC(sub_83B8E6A8);
PPC_FUNC_IMPL(__imp__sub_83B8E6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6824
	ctx.r3.s64 = ctx.r11.s64 + -6824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E6B4"))) PPC_WEAK_FUNC(sub_83B8E6B4);
PPC_FUNC_IMPL(__imp__sub_83B8E6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E6B8"))) PPC_WEAK_FUNC(sub_83B8E6B8);
PPC_FUNC_IMPL(__imp__sub_83B8E6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6816
	ctx.r3.s64 = ctx.r11.s64 + -6816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E6C4"))) PPC_WEAK_FUNC(sub_83B8E6C4);
PPC_FUNC_IMPL(__imp__sub_83B8E6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E6C8"))) PPC_WEAK_FUNC(sub_83B8E6C8);
PPC_FUNC_IMPL(__imp__sub_83B8E6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6808
	ctx.r3.s64 = ctx.r11.s64 + -6808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E6D4"))) PPC_WEAK_FUNC(sub_83B8E6D4);
PPC_FUNC_IMPL(__imp__sub_83B8E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E6D8"))) PPC_WEAK_FUNC(sub_83B8E6D8);
PPC_FUNC_IMPL(__imp__sub_83B8E6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6800
	ctx.r3.s64 = ctx.r11.s64 + -6800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E6E4"))) PPC_WEAK_FUNC(sub_83B8E6E4);
PPC_FUNC_IMPL(__imp__sub_83B8E6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E6E8"))) PPC_WEAK_FUNC(sub_83B8E6E8);
PPC_FUNC_IMPL(__imp__sub_83B8E6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E6F4"))) PPC_WEAK_FUNC(sub_83B8E6F4);
PPC_FUNC_IMPL(__imp__sub_83B8E6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E6F8"))) PPC_WEAK_FUNC(sub_83B8E6F8);
PPC_FUNC_IMPL(__imp__sub_83B8E6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6784
	ctx.r3.s64 = ctx.r11.s64 + -6784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E704"))) PPC_WEAK_FUNC(sub_83B8E704);
PPC_FUNC_IMPL(__imp__sub_83B8E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E708"))) PPC_WEAK_FUNC(sub_83B8E708);
PPC_FUNC_IMPL(__imp__sub_83B8E708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E714"))) PPC_WEAK_FUNC(sub_83B8E714);
PPC_FUNC_IMPL(__imp__sub_83B8E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E718"))) PPC_WEAK_FUNC(sub_83B8E718);
PPC_FUNC_IMPL(__imp__sub_83B8E718) {
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
	// addi r3,r11,-7044
	ctx.r3.s64 = ctx.r11.s64 + -7044;
	// bl 0x83523120
	ctx.lr = 0x83B8E730;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-6768
	ctx.r3.s64 = ctx.r10.s64 + -6768;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8E73C;
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

__attribute__((alias("__imp__sub_83B8E74C"))) PPC_WEAK_FUNC(sub_83B8E74C);
PPC_FUNC_IMPL(__imp__sub_83B8E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E750"))) PPC_WEAK_FUNC(sub_83B8E750);
PPC_FUNC_IMPL(__imp__sub_83B8E750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E75C"))) PPC_WEAK_FUNC(sub_83B8E75C);
PPC_FUNC_IMPL(__imp__sub_83B8E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E760"))) PPC_WEAK_FUNC(sub_83B8E760);
PPC_FUNC_IMPL(__imp__sub_83B8E760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E76C"))) PPC_WEAK_FUNC(sub_83B8E76C);
PPC_FUNC_IMPL(__imp__sub_83B8E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E770"))) PPC_WEAK_FUNC(sub_83B8E770);
PPC_FUNC_IMPL(__imp__sub_83B8E770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E77C"))) PPC_WEAK_FUNC(sub_83B8E77C);
PPC_FUNC_IMPL(__imp__sub_83B8E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E780"))) PPC_WEAK_FUNC(sub_83B8E780);
PPC_FUNC_IMPL(__imp__sub_83B8E780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E78C"))) PPC_WEAK_FUNC(sub_83B8E78C);
PPC_FUNC_IMPL(__imp__sub_83B8E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E790"))) PPC_WEAK_FUNC(sub_83B8E790);
PPC_FUNC_IMPL(__imp__sub_83B8E790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E79C"))) PPC_WEAK_FUNC(sub_83B8E79C);
PPC_FUNC_IMPL(__imp__sub_83B8E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E7A0"))) PPC_WEAK_FUNC(sub_83B8E7A0);
PPC_FUNC_IMPL(__imp__sub_83B8E7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6712
	ctx.r3.s64 = ctx.r11.s64 + -6712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E7AC"))) PPC_WEAK_FUNC(sub_83B8E7AC);
PPC_FUNC_IMPL(__imp__sub_83B8E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E7B0"))) PPC_WEAK_FUNC(sub_83B8E7B0);
PPC_FUNC_IMPL(__imp__sub_83B8E7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E7BC"))) PPC_WEAK_FUNC(sub_83B8E7BC);
PPC_FUNC_IMPL(__imp__sub_83B8E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E7C0"))) PPC_WEAK_FUNC(sub_83B8E7C0);
PPC_FUNC_IMPL(__imp__sub_83B8E7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6696
	ctx.r3.s64 = ctx.r11.s64 + -6696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E7CC"))) PPC_WEAK_FUNC(sub_83B8E7CC);
PPC_FUNC_IMPL(__imp__sub_83B8E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E7D0"))) PPC_WEAK_FUNC(sub_83B8E7D0);
PPC_FUNC_IMPL(__imp__sub_83B8E7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6688
	ctx.r3.s64 = ctx.r11.s64 + -6688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E7DC"))) PPC_WEAK_FUNC(sub_83B8E7DC);
PPC_FUNC_IMPL(__imp__sub_83B8E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E7E0"))) PPC_WEAK_FUNC(sub_83B8E7E0);
PPC_FUNC_IMPL(__imp__sub_83B8E7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6680
	ctx.r3.s64 = ctx.r11.s64 + -6680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E7EC"))) PPC_WEAK_FUNC(sub_83B8E7EC);
PPC_FUNC_IMPL(__imp__sub_83B8E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E7F0"))) PPC_WEAK_FUNC(sub_83B8E7F0);
PPC_FUNC_IMPL(__imp__sub_83B8E7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6672
	ctx.r3.s64 = ctx.r11.s64 + -6672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E7FC"))) PPC_WEAK_FUNC(sub_83B8E7FC);
PPC_FUNC_IMPL(__imp__sub_83B8E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E800"))) PPC_WEAK_FUNC(sub_83B8E800);
PPC_FUNC_IMPL(__imp__sub_83B8E800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6664
	ctx.r3.s64 = ctx.r11.s64 + -6664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E80C"))) PPC_WEAK_FUNC(sub_83B8E80C);
PPC_FUNC_IMPL(__imp__sub_83B8E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E810"))) PPC_WEAK_FUNC(sub_83B8E810);
PPC_FUNC_IMPL(__imp__sub_83B8E810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6656
	ctx.r3.s64 = ctx.r11.s64 + -6656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E81C"))) PPC_WEAK_FUNC(sub_83B8E81C);
PPC_FUNC_IMPL(__imp__sub_83B8E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E820"))) PPC_WEAK_FUNC(sub_83B8E820);
PPC_FUNC_IMPL(__imp__sub_83B8E820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E82C"))) PPC_WEAK_FUNC(sub_83B8E82C);
PPC_FUNC_IMPL(__imp__sub_83B8E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E830"))) PPC_WEAK_FUNC(sub_83B8E830);
PPC_FUNC_IMPL(__imp__sub_83B8E830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6640
	ctx.r3.s64 = ctx.r11.s64 + -6640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E83C"))) PPC_WEAK_FUNC(sub_83B8E83C);
PPC_FUNC_IMPL(__imp__sub_83B8E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E840"))) PPC_WEAK_FUNC(sub_83B8E840);
PPC_FUNC_IMPL(__imp__sub_83B8E840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6632
	ctx.r3.s64 = ctx.r11.s64 + -6632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E84C"))) PPC_WEAK_FUNC(sub_83B8E84C);
PPC_FUNC_IMPL(__imp__sub_83B8E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E850"))) PPC_WEAK_FUNC(sub_83B8E850);
PPC_FUNC_IMPL(__imp__sub_83B8E850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E85C"))) PPC_WEAK_FUNC(sub_83B8E85C);
PPC_FUNC_IMPL(__imp__sub_83B8E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E860"))) PPC_WEAK_FUNC(sub_83B8E860);
PPC_FUNC_IMPL(__imp__sub_83B8E860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6616
	ctx.r3.s64 = ctx.r11.s64 + -6616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E86C"))) PPC_WEAK_FUNC(sub_83B8E86C);
PPC_FUNC_IMPL(__imp__sub_83B8E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E870"))) PPC_WEAK_FUNC(sub_83B8E870);
PPC_FUNC_IMPL(__imp__sub_83B8E870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6608
	ctx.r3.s64 = ctx.r11.s64 + -6608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E87C"))) PPC_WEAK_FUNC(sub_83B8E87C);
PPC_FUNC_IMPL(__imp__sub_83B8E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E880"))) PPC_WEAK_FUNC(sub_83B8E880);
PPC_FUNC_IMPL(__imp__sub_83B8E880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6600
	ctx.r3.s64 = ctx.r11.s64 + -6600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E88C"))) PPC_WEAK_FUNC(sub_83B8E88C);
PPC_FUNC_IMPL(__imp__sub_83B8E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E890"))) PPC_WEAK_FUNC(sub_83B8E890);
PPC_FUNC_IMPL(__imp__sub_83B8E890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6592
	ctx.r3.s64 = ctx.r11.s64 + -6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E89C"))) PPC_WEAK_FUNC(sub_83B8E89C);
PPC_FUNC_IMPL(__imp__sub_83B8E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E8A0"))) PPC_WEAK_FUNC(sub_83B8E8A0);
PPC_FUNC_IMPL(__imp__sub_83B8E8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E8AC"))) PPC_WEAK_FUNC(sub_83B8E8AC);
PPC_FUNC_IMPL(__imp__sub_83B8E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E8B0"))) PPC_WEAK_FUNC(sub_83B8E8B0);
PPC_FUNC_IMPL(__imp__sub_83B8E8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6576
	ctx.r3.s64 = ctx.r11.s64 + -6576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E8BC"))) PPC_WEAK_FUNC(sub_83B8E8BC);
PPC_FUNC_IMPL(__imp__sub_83B8E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E8C0"))) PPC_WEAK_FUNC(sub_83B8E8C0);
PPC_FUNC_IMPL(__imp__sub_83B8E8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E8CC"))) PPC_WEAK_FUNC(sub_83B8E8CC);
PPC_FUNC_IMPL(__imp__sub_83B8E8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E8D0"))) PPC_WEAK_FUNC(sub_83B8E8D0);
PPC_FUNC_IMPL(__imp__sub_83B8E8D0) {
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
	// addi r3,r11,-7032
	ctx.r3.s64 = ctx.r11.s64 + -7032;
	// bl 0x83523120
	ctx.lr = 0x83B8E8E8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-6560
	ctx.r3.s64 = ctx.r10.s64 + -6560;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8E8F4;
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

__attribute__((alias("__imp__sub_83B8E904"))) PPC_WEAK_FUNC(sub_83B8E904);
PPC_FUNC_IMPL(__imp__sub_83B8E904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E908"))) PPC_WEAK_FUNC(sub_83B8E908);
PPC_FUNC_IMPL(__imp__sub_83B8E908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6544
	ctx.r3.s64 = ctx.r11.s64 + -6544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E914"))) PPC_WEAK_FUNC(sub_83B8E914);
PPC_FUNC_IMPL(__imp__sub_83B8E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E918"))) PPC_WEAK_FUNC(sub_83B8E918);
PPC_FUNC_IMPL(__imp__sub_83B8E918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6536
	ctx.r3.s64 = ctx.r11.s64 + -6536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E924"))) PPC_WEAK_FUNC(sub_83B8E924);
PPC_FUNC_IMPL(__imp__sub_83B8E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E928"))) PPC_WEAK_FUNC(sub_83B8E928);
PPC_FUNC_IMPL(__imp__sub_83B8E928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6528
	ctx.r3.s64 = ctx.r11.s64 + -6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E934"))) PPC_WEAK_FUNC(sub_83B8E934);
PPC_FUNC_IMPL(__imp__sub_83B8E934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E938"))) PPC_WEAK_FUNC(sub_83B8E938);
PPC_FUNC_IMPL(__imp__sub_83B8E938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E944"))) PPC_WEAK_FUNC(sub_83B8E944);
PPC_FUNC_IMPL(__imp__sub_83B8E944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E948"))) PPC_WEAK_FUNC(sub_83B8E948);
PPC_FUNC_IMPL(__imp__sub_83B8E948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6512
	ctx.r3.s64 = ctx.r11.s64 + -6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E954"))) PPC_WEAK_FUNC(sub_83B8E954);
PPC_FUNC_IMPL(__imp__sub_83B8E954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E958"))) PPC_WEAK_FUNC(sub_83B8E958);
PPC_FUNC_IMPL(__imp__sub_83B8E958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6504
	ctx.r3.s64 = ctx.r11.s64 + -6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E964"))) PPC_WEAK_FUNC(sub_83B8E964);
PPC_FUNC_IMPL(__imp__sub_83B8E964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E968"))) PPC_WEAK_FUNC(sub_83B8E968);
PPC_FUNC_IMPL(__imp__sub_83B8E968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E974"))) PPC_WEAK_FUNC(sub_83B8E974);
PPC_FUNC_IMPL(__imp__sub_83B8E974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E978"))) PPC_WEAK_FUNC(sub_83B8E978);
PPC_FUNC_IMPL(__imp__sub_83B8E978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6488
	ctx.r3.s64 = ctx.r11.s64 + -6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E984"))) PPC_WEAK_FUNC(sub_83B8E984);
PPC_FUNC_IMPL(__imp__sub_83B8E984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E988"))) PPC_WEAK_FUNC(sub_83B8E988);
PPC_FUNC_IMPL(__imp__sub_83B8E988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6480
	ctx.r3.s64 = ctx.r11.s64 + -6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E994"))) PPC_WEAK_FUNC(sub_83B8E994);
PPC_FUNC_IMPL(__imp__sub_83B8E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E998"))) PPC_WEAK_FUNC(sub_83B8E998);
PPC_FUNC_IMPL(__imp__sub_83B8E998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E9A4"))) PPC_WEAK_FUNC(sub_83B8E9A4);
PPC_FUNC_IMPL(__imp__sub_83B8E9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E9A8"))) PPC_WEAK_FUNC(sub_83B8E9A8);
PPC_FUNC_IMPL(__imp__sub_83B8E9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6464
	ctx.r3.s64 = ctx.r11.s64 + -6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E9B4"))) PPC_WEAK_FUNC(sub_83B8E9B4);
PPC_FUNC_IMPL(__imp__sub_83B8E9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E9B8"))) PPC_WEAK_FUNC(sub_83B8E9B8);
PPC_FUNC_IMPL(__imp__sub_83B8E9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6456
	ctx.r3.s64 = ctx.r11.s64 + -6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E9C4"))) PPC_WEAK_FUNC(sub_83B8E9C4);
PPC_FUNC_IMPL(__imp__sub_83B8E9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E9C8"))) PPC_WEAK_FUNC(sub_83B8E9C8);
PPC_FUNC_IMPL(__imp__sub_83B8E9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7020
	ctx.r7.s64 = ctx.r8.s64 + -7020;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7020(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7020);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7020(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7020, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

