#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B92904"))) PPC_WEAK_FUNC(sub_83B92904);
PPC_FUNC_IMPL(__imp__sub_83B92904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92908"))) PPC_WEAK_FUNC(sub_83B92908);
PPC_FUNC_IMPL(__imp__sub_83B92908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92914"))) PPC_WEAK_FUNC(sub_83B92914);
PPC_FUNC_IMPL(__imp__sub_83B92914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92918"))) PPC_WEAK_FUNC(sub_83B92918);
PPC_FUNC_IMPL(__imp__sub_83B92918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92924"))) PPC_WEAK_FUNC(sub_83B92924);
PPC_FUNC_IMPL(__imp__sub_83B92924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92928"))) PPC_WEAK_FUNC(sub_83B92928);
PPC_FUNC_IMPL(__imp__sub_83B92928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92934"))) PPC_WEAK_FUNC(sub_83B92934);
PPC_FUNC_IMPL(__imp__sub_83B92934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92938"))) PPC_WEAK_FUNC(sub_83B92938);
PPC_FUNC_IMPL(__imp__sub_83B92938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-104
	ctx.r3.s64 = ctx.r11.s64 + -104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92944"))) PPC_WEAK_FUNC(sub_83B92944);
PPC_FUNC_IMPL(__imp__sub_83B92944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92948"))) PPC_WEAK_FUNC(sub_83B92948);
PPC_FUNC_IMPL(__imp__sub_83B92948) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5984
	ctx.r7.s64 = ctx.r8.s64 + -5984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5984(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B92970"))) PPC_WEAK_FUNC(sub_83B92970);
PPC_FUNC_IMPL(__imp__sub_83B92970) {
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
	// addi r3,r11,-5988
	ctx.r3.s64 = ctx.r11.s64 + -5988;
	// bl 0x83523120
	ctx.lr = 0x83B92988;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-96
	ctx.r3.s64 = ctx.r10.s64 + -96;
	// bl 0x831cdcc8
	ctx.lr = 0x83B92994;
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

__attribute__((alias("__imp__sub_83B929A4"))) PPC_WEAK_FUNC(sub_83B929A4);
PPC_FUNC_IMPL(__imp__sub_83B929A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B929A8"))) PPC_WEAK_FUNC(sub_83B929A8);
PPC_FUNC_IMPL(__imp__sub_83B929A8) {
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
	// addi r4,r11,-14384
	ctx.r4.s64 = ctx.r11.s64 + -14384;
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
	// addi r3,r7,-5976
	ctx.r3.s64 = ctx.r7.s64 + -5976;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B929D8"))) PPC_WEAK_FUNC(sub_83B929D8);
PPC_FUNC_IMPL(__imp__sub_83B929D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B929E4"))) PPC_WEAK_FUNC(sub_83B929E4);
PPC_FUNC_IMPL(__imp__sub_83B929E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B929E8"))) PPC_WEAK_FUNC(sub_83B929E8);
PPC_FUNC_IMPL(__imp__sub_83B929E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B929F4"))) PPC_WEAK_FUNC(sub_83B929F4);
PPC_FUNC_IMPL(__imp__sub_83B929F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B929F8"))) PPC_WEAK_FUNC(sub_83B929F8);
PPC_FUNC_IMPL(__imp__sub_83B929F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A04"))) PPC_WEAK_FUNC(sub_83B92A04);
PPC_FUNC_IMPL(__imp__sub_83B92A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A08"))) PPC_WEAK_FUNC(sub_83B92A08);
PPC_FUNC_IMPL(__imp__sub_83B92A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A14"))) PPC_WEAK_FUNC(sub_83B92A14);
PPC_FUNC_IMPL(__imp__sub_83B92A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A18"))) PPC_WEAK_FUNC(sub_83B92A18);
PPC_FUNC_IMPL(__imp__sub_83B92A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A24"))) PPC_WEAK_FUNC(sub_83B92A24);
PPC_FUNC_IMPL(__imp__sub_83B92A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A28"))) PPC_WEAK_FUNC(sub_83B92A28);
PPC_FUNC_IMPL(__imp__sub_83B92A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A34"))) PPC_WEAK_FUNC(sub_83B92A34);
PPC_FUNC_IMPL(__imp__sub_83B92A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A38"))) PPC_WEAK_FUNC(sub_83B92A38);
PPC_FUNC_IMPL(__imp__sub_83B92A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A44"))) PPC_WEAK_FUNC(sub_83B92A44);
PPC_FUNC_IMPL(__imp__sub_83B92A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A48"))) PPC_WEAK_FUNC(sub_83B92A48);
PPC_FUNC_IMPL(__imp__sub_83B92A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A54"))) PPC_WEAK_FUNC(sub_83B92A54);
PPC_FUNC_IMPL(__imp__sub_83B92A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A58"))) PPC_WEAK_FUNC(sub_83B92A58);
PPC_FUNC_IMPL(__imp__sub_83B92A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A64"))) PPC_WEAK_FUNC(sub_83B92A64);
PPC_FUNC_IMPL(__imp__sub_83B92A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A68"))) PPC_WEAK_FUNC(sub_83B92A68);
PPC_FUNC_IMPL(__imp__sub_83B92A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A74"))) PPC_WEAK_FUNC(sub_83B92A74);
PPC_FUNC_IMPL(__imp__sub_83B92A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A78"))) PPC_WEAK_FUNC(sub_83B92A78);
PPC_FUNC_IMPL(__imp__sub_83B92A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,0
	ctx.r3.s64 = ctx.r11.s64 + 0;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A84"))) PPC_WEAK_FUNC(sub_83B92A84);
PPC_FUNC_IMPL(__imp__sub_83B92A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A88"))) PPC_WEAK_FUNC(sub_83B92A88);
PPC_FUNC_IMPL(__imp__sub_83B92A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92A94"))) PPC_WEAK_FUNC(sub_83B92A94);
PPC_FUNC_IMPL(__imp__sub_83B92A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92A98"))) PPC_WEAK_FUNC(sub_83B92A98);
PPC_FUNC_IMPL(__imp__sub_83B92A98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5960
	ctx.r7.s64 = ctx.r8.s64 + -5960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5960(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B92AC0"))) PPC_WEAK_FUNC(sub_83B92AC0);
PPC_FUNC_IMPL(__imp__sub_83B92AC0) {
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
	// addi r3,r11,-5964
	ctx.r3.s64 = ctx.r11.s64 + -5964;
	// bl 0x83523120
	ctx.lr = 0x83B92AD8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x831cdcc8
	ctx.lr = 0x83B92AE4;
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

__attribute__((alias("__imp__sub_83B92AF4"))) PPC_WEAK_FUNC(sub_83B92AF4);
PPC_FUNC_IMPL(__imp__sub_83B92AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92AF8"))) PPC_WEAK_FUNC(sub_83B92AF8);
PPC_FUNC_IMPL(__imp__sub_83B92AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B04"))) PPC_WEAK_FUNC(sub_83B92B04);
PPC_FUNC_IMPL(__imp__sub_83B92B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B08"))) PPC_WEAK_FUNC(sub_83B92B08);
PPC_FUNC_IMPL(__imp__sub_83B92B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B14"))) PPC_WEAK_FUNC(sub_83B92B14);
PPC_FUNC_IMPL(__imp__sub_83B92B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B18"))) PPC_WEAK_FUNC(sub_83B92B18);
PPC_FUNC_IMPL(__imp__sub_83B92B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B24"))) PPC_WEAK_FUNC(sub_83B92B24);
PPC_FUNC_IMPL(__imp__sub_83B92B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B28"))) PPC_WEAK_FUNC(sub_83B92B28);
PPC_FUNC_IMPL(__imp__sub_83B92B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B34"))) PPC_WEAK_FUNC(sub_83B92B34);
PPC_FUNC_IMPL(__imp__sub_83B92B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B38"))) PPC_WEAK_FUNC(sub_83B92B38);
PPC_FUNC_IMPL(__imp__sub_83B92B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B44"))) PPC_WEAK_FUNC(sub_83B92B44);
PPC_FUNC_IMPL(__imp__sub_83B92B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B48"))) PPC_WEAK_FUNC(sub_83B92B48);
PPC_FUNC_IMPL(__imp__sub_83B92B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B54"))) PPC_WEAK_FUNC(sub_83B92B54);
PPC_FUNC_IMPL(__imp__sub_83B92B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B58"))) PPC_WEAK_FUNC(sub_83B92B58);
PPC_FUNC_IMPL(__imp__sub_83B92B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B64"))) PPC_WEAK_FUNC(sub_83B92B64);
PPC_FUNC_IMPL(__imp__sub_83B92B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B68"))) PPC_WEAK_FUNC(sub_83B92B68);
PPC_FUNC_IMPL(__imp__sub_83B92B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B74"))) PPC_WEAK_FUNC(sub_83B92B74);
PPC_FUNC_IMPL(__imp__sub_83B92B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B78"))) PPC_WEAK_FUNC(sub_83B92B78);
PPC_FUNC_IMPL(__imp__sub_83B92B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B84"))) PPC_WEAK_FUNC(sub_83B92B84);
PPC_FUNC_IMPL(__imp__sub_83B92B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B88"))) PPC_WEAK_FUNC(sub_83B92B88);
PPC_FUNC_IMPL(__imp__sub_83B92B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92B94"))) PPC_WEAK_FUNC(sub_83B92B94);
PPC_FUNC_IMPL(__imp__sub_83B92B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92B98"))) PPC_WEAK_FUNC(sub_83B92B98);
PPC_FUNC_IMPL(__imp__sub_83B92B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92BA4"))) PPC_WEAK_FUNC(sub_83B92BA4);
PPC_FUNC_IMPL(__imp__sub_83B92BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92BA8"))) PPC_WEAK_FUNC(sub_83B92BA8);
PPC_FUNC_IMPL(__imp__sub_83B92BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92BB4"))) PPC_WEAK_FUNC(sub_83B92BB4);
PPC_FUNC_IMPL(__imp__sub_83B92BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92BB8"))) PPC_WEAK_FUNC(sub_83B92BB8);
PPC_FUNC_IMPL(__imp__sub_83B92BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5948
	ctx.r7.s64 = ctx.r8.s64 + -5948;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5948(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5948);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5948(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5948, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B92BE0"))) PPC_WEAK_FUNC(sub_83B92BE0);
PPC_FUNC_IMPL(__imp__sub_83B92BE0) {
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
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// bl 0x83523120
	ctx.lr = 0x83B92BF8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// bl 0x831cdcc8
	ctx.lr = 0x83B92C04;
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

__attribute__((alias("__imp__sub_83B92C14"))) PPC_WEAK_FUNC(sub_83B92C14);
PPC_FUNC_IMPL(__imp__sub_83B92C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C18"))) PPC_WEAK_FUNC(sub_83B92C18);
PPC_FUNC_IMPL(__imp__sub_83B92C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92C24"))) PPC_WEAK_FUNC(sub_83B92C24);
PPC_FUNC_IMPL(__imp__sub_83B92C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C28"))) PPC_WEAK_FUNC(sub_83B92C28);
PPC_FUNC_IMPL(__imp__sub_83B92C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92C34"))) PPC_WEAK_FUNC(sub_83B92C34);
PPC_FUNC_IMPL(__imp__sub_83B92C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C38"))) PPC_WEAK_FUNC(sub_83B92C38);
PPC_FUNC_IMPL(__imp__sub_83B92C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92C44"))) PPC_WEAK_FUNC(sub_83B92C44);
PPC_FUNC_IMPL(__imp__sub_83B92C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C48"))) PPC_WEAK_FUNC(sub_83B92C48);
PPC_FUNC_IMPL(__imp__sub_83B92C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92C54"))) PPC_WEAK_FUNC(sub_83B92C54);
PPC_FUNC_IMPL(__imp__sub_83B92C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C58"))) PPC_WEAK_FUNC(sub_83B92C58);
PPC_FUNC_IMPL(__imp__sub_83B92C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92C64"))) PPC_WEAK_FUNC(sub_83B92C64);
PPC_FUNC_IMPL(__imp__sub_83B92C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C68"))) PPC_WEAK_FUNC(sub_83B92C68);
PPC_FUNC_IMPL(__imp__sub_83B92C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92C74"))) PPC_WEAK_FUNC(sub_83B92C74);
PPC_FUNC_IMPL(__imp__sub_83B92C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C78"))) PPC_WEAK_FUNC(sub_83B92C78);
PPC_FUNC_IMPL(__imp__sub_83B92C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92C84"))) PPC_WEAK_FUNC(sub_83B92C84);
PPC_FUNC_IMPL(__imp__sub_83B92C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C88"))) PPC_WEAK_FUNC(sub_83B92C88);
PPC_FUNC_IMPL(__imp__sub_83B92C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92C94"))) PPC_WEAK_FUNC(sub_83B92C94);
PPC_FUNC_IMPL(__imp__sub_83B92C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92C98"))) PPC_WEAK_FUNC(sub_83B92C98);
PPC_FUNC_IMPL(__imp__sub_83B92C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92CA4"))) PPC_WEAK_FUNC(sub_83B92CA4);
PPC_FUNC_IMPL(__imp__sub_83B92CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92CA8"))) PPC_WEAK_FUNC(sub_83B92CA8);
PPC_FUNC_IMPL(__imp__sub_83B92CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92CB4"))) PPC_WEAK_FUNC(sub_83B92CB4);
PPC_FUNC_IMPL(__imp__sub_83B92CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92CB8"))) PPC_WEAK_FUNC(sub_83B92CB8);
PPC_FUNC_IMPL(__imp__sub_83B92CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92CC4"))) PPC_WEAK_FUNC(sub_83B92CC4);
PPC_FUNC_IMPL(__imp__sub_83B92CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92CC8"))) PPC_WEAK_FUNC(sub_83B92CC8);
PPC_FUNC_IMPL(__imp__sub_83B92CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92CD4"))) PPC_WEAK_FUNC(sub_83B92CD4);
PPC_FUNC_IMPL(__imp__sub_83B92CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92CD8"))) PPC_WEAK_FUNC(sub_83B92CD8);
PPC_FUNC_IMPL(__imp__sub_83B92CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5936
	ctx.r7.s64 = ctx.r8.s64 + -5936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B92D00"))) PPC_WEAK_FUNC(sub_83B92D00);
PPC_FUNC_IMPL(__imp__sub_83B92D00) {
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
	// addi r3,r11,-5940
	ctx.r3.s64 = ctx.r11.s64 + -5940;
	// bl 0x83523120
	ctx.lr = 0x83B92D18;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,240
	ctx.r3.s64 = ctx.r10.s64 + 240;
	// bl 0x831cdcc8
	ctx.lr = 0x83B92D24;
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

__attribute__((alias("__imp__sub_83B92D34"))) PPC_WEAK_FUNC(sub_83B92D34);
PPC_FUNC_IMPL(__imp__sub_83B92D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92D38"))) PPC_WEAK_FUNC(sub_83B92D38);
PPC_FUNC_IMPL(__imp__sub_83B92D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92D44"))) PPC_WEAK_FUNC(sub_83B92D44);
PPC_FUNC_IMPL(__imp__sub_83B92D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92D48"))) PPC_WEAK_FUNC(sub_83B92D48);
PPC_FUNC_IMPL(__imp__sub_83B92D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92D54"))) PPC_WEAK_FUNC(sub_83B92D54);
PPC_FUNC_IMPL(__imp__sub_83B92D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92D58"))) PPC_WEAK_FUNC(sub_83B92D58);
PPC_FUNC_IMPL(__imp__sub_83B92D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92D64"))) PPC_WEAK_FUNC(sub_83B92D64);
PPC_FUNC_IMPL(__imp__sub_83B92D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92D68"))) PPC_WEAK_FUNC(sub_83B92D68);
PPC_FUNC_IMPL(__imp__sub_83B92D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92D74"))) PPC_WEAK_FUNC(sub_83B92D74);
PPC_FUNC_IMPL(__imp__sub_83B92D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92D78"))) PPC_WEAK_FUNC(sub_83B92D78);
PPC_FUNC_IMPL(__imp__sub_83B92D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,288
	ctx.r3.s64 = ctx.r11.s64 + 288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92D84"))) PPC_WEAK_FUNC(sub_83B92D84);
PPC_FUNC_IMPL(__imp__sub_83B92D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92D88"))) PPC_WEAK_FUNC(sub_83B92D88);
PPC_FUNC_IMPL(__imp__sub_83B92D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,296
	ctx.r3.s64 = ctx.r11.s64 + 296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92D94"))) PPC_WEAK_FUNC(sub_83B92D94);
PPC_FUNC_IMPL(__imp__sub_83B92D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92D98"))) PPC_WEAK_FUNC(sub_83B92D98);
PPC_FUNC_IMPL(__imp__sub_83B92D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92DA4"))) PPC_WEAK_FUNC(sub_83B92DA4);
PPC_FUNC_IMPL(__imp__sub_83B92DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92DA8"))) PPC_WEAK_FUNC(sub_83B92DA8);
PPC_FUNC_IMPL(__imp__sub_83B92DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92DB4"))) PPC_WEAK_FUNC(sub_83B92DB4);
PPC_FUNC_IMPL(__imp__sub_83B92DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92DB8"))) PPC_WEAK_FUNC(sub_83B92DB8);
PPC_FUNC_IMPL(__imp__sub_83B92DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92DC4"))) PPC_WEAK_FUNC(sub_83B92DC4);
PPC_FUNC_IMPL(__imp__sub_83B92DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92DC8"))) PPC_WEAK_FUNC(sub_83B92DC8);
PPC_FUNC_IMPL(__imp__sub_83B92DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,328
	ctx.r3.s64 = ctx.r11.s64 + 328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92DD4"))) PPC_WEAK_FUNC(sub_83B92DD4);
PPC_FUNC_IMPL(__imp__sub_83B92DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92DD8"))) PPC_WEAK_FUNC(sub_83B92DD8);
PPC_FUNC_IMPL(__imp__sub_83B92DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92DE4"))) PPC_WEAK_FUNC(sub_83B92DE4);
PPC_FUNC_IMPL(__imp__sub_83B92DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92DE8"))) PPC_WEAK_FUNC(sub_83B92DE8);
PPC_FUNC_IMPL(__imp__sub_83B92DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,344
	ctx.r3.s64 = ctx.r11.s64 + 344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92DF4"))) PPC_WEAK_FUNC(sub_83B92DF4);
PPC_FUNC_IMPL(__imp__sub_83B92DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92DF8"))) PPC_WEAK_FUNC(sub_83B92DF8);
PPC_FUNC_IMPL(__imp__sub_83B92DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5924
	ctx.r7.s64 = ctx.r8.s64 + -5924;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5924(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5924);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5924(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5924, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B92E20"))) PPC_WEAK_FUNC(sub_83B92E20);
PPC_FUNC_IMPL(__imp__sub_83B92E20) {
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
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// bl 0x83523120
	ctx.lr = 0x83B92E38;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,352
	ctx.r3.s64 = ctx.r10.s64 + 352;
	// bl 0x831cdcc8
	ctx.lr = 0x83B92E44;
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

__attribute__((alias("__imp__sub_83B92E54"))) PPC_WEAK_FUNC(sub_83B92E54);
PPC_FUNC_IMPL(__imp__sub_83B92E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92E58"))) PPC_WEAK_FUNC(sub_83B92E58);
PPC_FUNC_IMPL(__imp__sub_83B92E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,368
	ctx.r3.s64 = ctx.r11.s64 + 368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92E64"))) PPC_WEAK_FUNC(sub_83B92E64);
PPC_FUNC_IMPL(__imp__sub_83B92E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92E68"))) PPC_WEAK_FUNC(sub_83B92E68);
PPC_FUNC_IMPL(__imp__sub_83B92E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92E74"))) PPC_WEAK_FUNC(sub_83B92E74);
PPC_FUNC_IMPL(__imp__sub_83B92E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92E78"))) PPC_WEAK_FUNC(sub_83B92E78);
PPC_FUNC_IMPL(__imp__sub_83B92E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92E84"))) PPC_WEAK_FUNC(sub_83B92E84);
PPC_FUNC_IMPL(__imp__sub_83B92E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92E88"))) PPC_WEAK_FUNC(sub_83B92E88);
PPC_FUNC_IMPL(__imp__sub_83B92E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,392
	ctx.r3.s64 = ctx.r11.s64 + 392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92E94"))) PPC_WEAK_FUNC(sub_83B92E94);
PPC_FUNC_IMPL(__imp__sub_83B92E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92E98"))) PPC_WEAK_FUNC(sub_83B92E98);
PPC_FUNC_IMPL(__imp__sub_83B92E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,400
	ctx.r3.s64 = ctx.r11.s64 + 400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92EA4"))) PPC_WEAK_FUNC(sub_83B92EA4);
PPC_FUNC_IMPL(__imp__sub_83B92EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92EA8"))) PPC_WEAK_FUNC(sub_83B92EA8);
PPC_FUNC_IMPL(__imp__sub_83B92EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92EB4"))) PPC_WEAK_FUNC(sub_83B92EB4);
PPC_FUNC_IMPL(__imp__sub_83B92EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92EB8"))) PPC_WEAK_FUNC(sub_83B92EB8);
PPC_FUNC_IMPL(__imp__sub_83B92EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,416
	ctx.r3.s64 = ctx.r11.s64 + 416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92EC4"))) PPC_WEAK_FUNC(sub_83B92EC4);
PPC_FUNC_IMPL(__imp__sub_83B92EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92EC8"))) PPC_WEAK_FUNC(sub_83B92EC8);
PPC_FUNC_IMPL(__imp__sub_83B92EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,424
	ctx.r3.s64 = ctx.r11.s64 + 424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92ED4"))) PPC_WEAK_FUNC(sub_83B92ED4);
PPC_FUNC_IMPL(__imp__sub_83B92ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92ED8"))) PPC_WEAK_FUNC(sub_83B92ED8);
PPC_FUNC_IMPL(__imp__sub_83B92ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,432
	ctx.r3.s64 = ctx.r11.s64 + 432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92EE4"))) PPC_WEAK_FUNC(sub_83B92EE4);
PPC_FUNC_IMPL(__imp__sub_83B92EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92EE8"))) PPC_WEAK_FUNC(sub_83B92EE8);
PPC_FUNC_IMPL(__imp__sub_83B92EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,440
	ctx.r3.s64 = ctx.r11.s64 + 440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92EF4"))) PPC_WEAK_FUNC(sub_83B92EF4);
PPC_FUNC_IMPL(__imp__sub_83B92EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92EF8"))) PPC_WEAK_FUNC(sub_83B92EF8);
PPC_FUNC_IMPL(__imp__sub_83B92EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,448
	ctx.r3.s64 = ctx.r11.s64 + 448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92F04"))) PPC_WEAK_FUNC(sub_83B92F04);
PPC_FUNC_IMPL(__imp__sub_83B92F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92F08"))) PPC_WEAK_FUNC(sub_83B92F08);
PPC_FUNC_IMPL(__imp__sub_83B92F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,456
	ctx.r3.s64 = ctx.r11.s64 + 456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92F14"))) PPC_WEAK_FUNC(sub_83B92F14);
PPC_FUNC_IMPL(__imp__sub_83B92F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92F18"))) PPC_WEAK_FUNC(sub_83B92F18);
PPC_FUNC_IMPL(__imp__sub_83B92F18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5912
	ctx.r7.s64 = ctx.r8.s64 + -5912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5912);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5912(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5912, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B92F40"))) PPC_WEAK_FUNC(sub_83B92F40);
PPC_FUNC_IMPL(__imp__sub_83B92F40) {
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
	// addi r3,r11,-5916
	ctx.r3.s64 = ctx.r11.s64 + -5916;
	// bl 0x83523120
	ctx.lr = 0x83B92F58;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,464
	ctx.r3.s64 = ctx.r10.s64 + 464;
	// bl 0x831cdcc8
	ctx.lr = 0x83B92F64;
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

__attribute__((alias("__imp__sub_83B92F74"))) PPC_WEAK_FUNC(sub_83B92F74);
PPC_FUNC_IMPL(__imp__sub_83B92F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92F78"))) PPC_WEAK_FUNC(sub_83B92F78);
PPC_FUNC_IMPL(__imp__sub_83B92F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,480
	ctx.r3.s64 = ctx.r11.s64 + 480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92F84"))) PPC_WEAK_FUNC(sub_83B92F84);
PPC_FUNC_IMPL(__imp__sub_83B92F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92F88"))) PPC_WEAK_FUNC(sub_83B92F88);
PPC_FUNC_IMPL(__imp__sub_83B92F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92F94"))) PPC_WEAK_FUNC(sub_83B92F94);
PPC_FUNC_IMPL(__imp__sub_83B92F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92F98"))) PPC_WEAK_FUNC(sub_83B92F98);
PPC_FUNC_IMPL(__imp__sub_83B92F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92FA4"))) PPC_WEAK_FUNC(sub_83B92FA4);
PPC_FUNC_IMPL(__imp__sub_83B92FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92FA8"))) PPC_WEAK_FUNC(sub_83B92FA8);
PPC_FUNC_IMPL(__imp__sub_83B92FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92FB4"))) PPC_WEAK_FUNC(sub_83B92FB4);
PPC_FUNC_IMPL(__imp__sub_83B92FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92FB8"))) PPC_WEAK_FUNC(sub_83B92FB8);
PPC_FUNC_IMPL(__imp__sub_83B92FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,512
	ctx.r3.s64 = ctx.r11.s64 + 512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92FC4"))) PPC_WEAK_FUNC(sub_83B92FC4);
PPC_FUNC_IMPL(__imp__sub_83B92FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92FC8"))) PPC_WEAK_FUNC(sub_83B92FC8);
PPC_FUNC_IMPL(__imp__sub_83B92FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92FD4"))) PPC_WEAK_FUNC(sub_83B92FD4);
PPC_FUNC_IMPL(__imp__sub_83B92FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92FD8"))) PPC_WEAK_FUNC(sub_83B92FD8);
PPC_FUNC_IMPL(__imp__sub_83B92FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,528
	ctx.r3.s64 = ctx.r11.s64 + 528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92FE4"))) PPC_WEAK_FUNC(sub_83B92FE4);
PPC_FUNC_IMPL(__imp__sub_83B92FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92FE8"))) PPC_WEAK_FUNC(sub_83B92FE8);
PPC_FUNC_IMPL(__imp__sub_83B92FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,536
	ctx.r3.s64 = ctx.r11.s64 + 536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B92FF4"))) PPC_WEAK_FUNC(sub_83B92FF4);
PPC_FUNC_IMPL(__imp__sub_83B92FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B92FF8"))) PPC_WEAK_FUNC(sub_83B92FF8);
PPC_FUNC_IMPL(__imp__sub_83B92FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,544
	ctx.r3.s64 = ctx.r11.s64 + 544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93004"))) PPC_WEAK_FUNC(sub_83B93004);
PPC_FUNC_IMPL(__imp__sub_83B93004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93008"))) PPC_WEAK_FUNC(sub_83B93008);
PPC_FUNC_IMPL(__imp__sub_83B93008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,552
	ctx.r3.s64 = ctx.r11.s64 + 552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93014"))) PPC_WEAK_FUNC(sub_83B93014);
PPC_FUNC_IMPL(__imp__sub_83B93014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93018"))) PPC_WEAK_FUNC(sub_83B93018);
PPC_FUNC_IMPL(__imp__sub_83B93018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,560
	ctx.r3.s64 = ctx.r11.s64 + 560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93024"))) PPC_WEAK_FUNC(sub_83B93024);
PPC_FUNC_IMPL(__imp__sub_83B93024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93028"))) PPC_WEAK_FUNC(sub_83B93028);
PPC_FUNC_IMPL(__imp__sub_83B93028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,568
	ctx.r3.s64 = ctx.r11.s64 + 568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93034"))) PPC_WEAK_FUNC(sub_83B93034);
PPC_FUNC_IMPL(__imp__sub_83B93034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93038"))) PPC_WEAK_FUNC(sub_83B93038);
PPC_FUNC_IMPL(__imp__sub_83B93038) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5900
	ctx.r7.s64 = ctx.r8.s64 + -5900;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5900(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5900);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5900(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5900, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B93060"))) PPC_WEAK_FUNC(sub_83B93060);
PPC_FUNC_IMPL(__imp__sub_83B93060) {
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
	// addi r3,r11,-5904
	ctx.r3.s64 = ctx.r11.s64 + -5904;
	// bl 0x83523120
	ctx.lr = 0x83B93078;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,576
	ctx.r3.s64 = ctx.r10.s64 + 576;
	// bl 0x831cdcc8
	ctx.lr = 0x83B93084;
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

__attribute__((alias("__imp__sub_83B93094"))) PPC_WEAK_FUNC(sub_83B93094);
PPC_FUNC_IMPL(__imp__sub_83B93094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93098"))) PPC_WEAK_FUNC(sub_83B93098);
PPC_FUNC_IMPL(__imp__sub_83B93098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,592
	ctx.r3.s64 = ctx.r11.s64 + 592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B930A4"))) PPC_WEAK_FUNC(sub_83B930A4);
PPC_FUNC_IMPL(__imp__sub_83B930A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B930A8"))) PPC_WEAK_FUNC(sub_83B930A8);
PPC_FUNC_IMPL(__imp__sub_83B930A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,600
	ctx.r3.s64 = ctx.r11.s64 + 600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B930B4"))) PPC_WEAK_FUNC(sub_83B930B4);
PPC_FUNC_IMPL(__imp__sub_83B930B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B930B8"))) PPC_WEAK_FUNC(sub_83B930B8);
PPC_FUNC_IMPL(__imp__sub_83B930B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B930C4"))) PPC_WEAK_FUNC(sub_83B930C4);
PPC_FUNC_IMPL(__imp__sub_83B930C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B930C8"))) PPC_WEAK_FUNC(sub_83B930C8);
PPC_FUNC_IMPL(__imp__sub_83B930C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B930D4"))) PPC_WEAK_FUNC(sub_83B930D4);
PPC_FUNC_IMPL(__imp__sub_83B930D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B930D8"))) PPC_WEAK_FUNC(sub_83B930D8);
PPC_FUNC_IMPL(__imp__sub_83B930D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B930E4"))) PPC_WEAK_FUNC(sub_83B930E4);
PPC_FUNC_IMPL(__imp__sub_83B930E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B930E8"))) PPC_WEAK_FUNC(sub_83B930E8);
PPC_FUNC_IMPL(__imp__sub_83B930E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B930F4"))) PPC_WEAK_FUNC(sub_83B930F4);
PPC_FUNC_IMPL(__imp__sub_83B930F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B930F8"))) PPC_WEAK_FUNC(sub_83B930F8);
PPC_FUNC_IMPL(__imp__sub_83B930F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,640
	ctx.r3.s64 = ctx.r11.s64 + 640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93104"))) PPC_WEAK_FUNC(sub_83B93104);
PPC_FUNC_IMPL(__imp__sub_83B93104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93108"))) PPC_WEAK_FUNC(sub_83B93108);
PPC_FUNC_IMPL(__imp__sub_83B93108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,648
	ctx.r3.s64 = ctx.r11.s64 + 648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93114"))) PPC_WEAK_FUNC(sub_83B93114);
PPC_FUNC_IMPL(__imp__sub_83B93114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93118"))) PPC_WEAK_FUNC(sub_83B93118);
PPC_FUNC_IMPL(__imp__sub_83B93118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93124"))) PPC_WEAK_FUNC(sub_83B93124);
PPC_FUNC_IMPL(__imp__sub_83B93124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93128"))) PPC_WEAK_FUNC(sub_83B93128);
PPC_FUNC_IMPL(__imp__sub_83B93128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,664
	ctx.r3.s64 = ctx.r11.s64 + 664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93134"))) PPC_WEAK_FUNC(sub_83B93134);
PPC_FUNC_IMPL(__imp__sub_83B93134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93138"))) PPC_WEAK_FUNC(sub_83B93138);
PPC_FUNC_IMPL(__imp__sub_83B93138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,672
	ctx.r3.s64 = ctx.r11.s64 + 672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93144"))) PPC_WEAK_FUNC(sub_83B93144);
PPC_FUNC_IMPL(__imp__sub_83B93144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93148"))) PPC_WEAK_FUNC(sub_83B93148);
PPC_FUNC_IMPL(__imp__sub_83B93148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,680
	ctx.r3.s64 = ctx.r11.s64 + 680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93154"))) PPC_WEAK_FUNC(sub_83B93154);
PPC_FUNC_IMPL(__imp__sub_83B93154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93158"))) PPC_WEAK_FUNC(sub_83B93158);
PPC_FUNC_IMPL(__imp__sub_83B93158) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5888
	ctx.r7.s64 = ctx.r8.s64 + -5888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5888(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B93180"))) PPC_WEAK_FUNC(sub_83B93180);
PPC_FUNC_IMPL(__imp__sub_83B93180) {
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
	// addi r3,r11,-5892
	ctx.r3.s64 = ctx.r11.s64 + -5892;
	// bl 0x83523120
	ctx.lr = 0x83B93198;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,688
	ctx.r3.s64 = ctx.r10.s64 + 688;
	// bl 0x831cdcc8
	ctx.lr = 0x83B931A4;
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

__attribute__((alias("__imp__sub_83B931B4"))) PPC_WEAK_FUNC(sub_83B931B4);
PPC_FUNC_IMPL(__imp__sub_83B931B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B931B8"))) PPC_WEAK_FUNC(sub_83B931B8);
PPC_FUNC_IMPL(__imp__sub_83B931B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B931C4"))) PPC_WEAK_FUNC(sub_83B931C4);
PPC_FUNC_IMPL(__imp__sub_83B931C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B931C8"))) PPC_WEAK_FUNC(sub_83B931C8);
PPC_FUNC_IMPL(__imp__sub_83B931C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,712
	ctx.r3.s64 = ctx.r11.s64 + 712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B931D4"))) PPC_WEAK_FUNC(sub_83B931D4);
PPC_FUNC_IMPL(__imp__sub_83B931D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B931D8"))) PPC_WEAK_FUNC(sub_83B931D8);
PPC_FUNC_IMPL(__imp__sub_83B931D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,720
	ctx.r3.s64 = ctx.r11.s64 + 720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B931E4"))) PPC_WEAK_FUNC(sub_83B931E4);
PPC_FUNC_IMPL(__imp__sub_83B931E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B931E8"))) PPC_WEAK_FUNC(sub_83B931E8);
PPC_FUNC_IMPL(__imp__sub_83B931E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,728
	ctx.r3.s64 = ctx.r11.s64 + 728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B931F4"))) PPC_WEAK_FUNC(sub_83B931F4);
PPC_FUNC_IMPL(__imp__sub_83B931F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B931F8"))) PPC_WEAK_FUNC(sub_83B931F8);
PPC_FUNC_IMPL(__imp__sub_83B931F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93204"))) PPC_WEAK_FUNC(sub_83B93204);
PPC_FUNC_IMPL(__imp__sub_83B93204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93208"))) PPC_WEAK_FUNC(sub_83B93208);
PPC_FUNC_IMPL(__imp__sub_83B93208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,744
	ctx.r3.s64 = ctx.r11.s64 + 744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93214"))) PPC_WEAK_FUNC(sub_83B93214);
PPC_FUNC_IMPL(__imp__sub_83B93214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93218"))) PPC_WEAK_FUNC(sub_83B93218);
PPC_FUNC_IMPL(__imp__sub_83B93218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,752
	ctx.r3.s64 = ctx.r11.s64 + 752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93224"))) PPC_WEAK_FUNC(sub_83B93224);
PPC_FUNC_IMPL(__imp__sub_83B93224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93228"))) PPC_WEAK_FUNC(sub_83B93228);
PPC_FUNC_IMPL(__imp__sub_83B93228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93234"))) PPC_WEAK_FUNC(sub_83B93234);
PPC_FUNC_IMPL(__imp__sub_83B93234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93238"))) PPC_WEAK_FUNC(sub_83B93238);
PPC_FUNC_IMPL(__imp__sub_83B93238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93244"))) PPC_WEAK_FUNC(sub_83B93244);
PPC_FUNC_IMPL(__imp__sub_83B93244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93248"))) PPC_WEAK_FUNC(sub_83B93248);
PPC_FUNC_IMPL(__imp__sub_83B93248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,776
	ctx.r3.s64 = ctx.r11.s64 + 776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93254"))) PPC_WEAK_FUNC(sub_83B93254);
PPC_FUNC_IMPL(__imp__sub_83B93254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93258"))) PPC_WEAK_FUNC(sub_83B93258);
PPC_FUNC_IMPL(__imp__sub_83B93258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,784
	ctx.r3.s64 = ctx.r11.s64 + 784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93264"))) PPC_WEAK_FUNC(sub_83B93264);
PPC_FUNC_IMPL(__imp__sub_83B93264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93268"))) PPC_WEAK_FUNC(sub_83B93268);
PPC_FUNC_IMPL(__imp__sub_83B93268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,792
	ctx.r3.s64 = ctx.r11.s64 + 792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93274"))) PPC_WEAK_FUNC(sub_83B93274);
PPC_FUNC_IMPL(__imp__sub_83B93274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93278"))) PPC_WEAK_FUNC(sub_83B93278);
PPC_FUNC_IMPL(__imp__sub_83B93278) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5876
	ctx.r7.s64 = ctx.r8.s64 + -5876;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5876(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5876);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5876(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5876, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B932A0"))) PPC_WEAK_FUNC(sub_83B932A0);
PPC_FUNC_IMPL(__imp__sub_83B932A0) {
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
	// addi r3,r11,-5880
	ctx.r3.s64 = ctx.r11.s64 + -5880;
	// bl 0x83523120
	ctx.lr = 0x83B932B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,800
	ctx.r3.s64 = ctx.r10.s64 + 800;
	// bl 0x831cdcc8
	ctx.lr = 0x83B932C4;
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

__attribute__((alias("__imp__sub_83B932D4"))) PPC_WEAK_FUNC(sub_83B932D4);
PPC_FUNC_IMPL(__imp__sub_83B932D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B932D8"))) PPC_WEAK_FUNC(sub_83B932D8);
PPC_FUNC_IMPL(__imp__sub_83B932D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B932E4"))) PPC_WEAK_FUNC(sub_83B932E4);
PPC_FUNC_IMPL(__imp__sub_83B932E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B932E8"))) PPC_WEAK_FUNC(sub_83B932E8);
PPC_FUNC_IMPL(__imp__sub_83B932E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B932F4"))) PPC_WEAK_FUNC(sub_83B932F4);
PPC_FUNC_IMPL(__imp__sub_83B932F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B932F8"))) PPC_WEAK_FUNC(sub_83B932F8);
PPC_FUNC_IMPL(__imp__sub_83B932F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,832
	ctx.r3.s64 = ctx.r11.s64 + 832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93304"))) PPC_WEAK_FUNC(sub_83B93304);
PPC_FUNC_IMPL(__imp__sub_83B93304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93308"))) PPC_WEAK_FUNC(sub_83B93308);
PPC_FUNC_IMPL(__imp__sub_83B93308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,840
	ctx.r3.s64 = ctx.r11.s64 + 840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93314"))) PPC_WEAK_FUNC(sub_83B93314);
PPC_FUNC_IMPL(__imp__sub_83B93314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93318"))) PPC_WEAK_FUNC(sub_83B93318);
PPC_FUNC_IMPL(__imp__sub_83B93318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93324"))) PPC_WEAK_FUNC(sub_83B93324);
PPC_FUNC_IMPL(__imp__sub_83B93324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93328"))) PPC_WEAK_FUNC(sub_83B93328);
PPC_FUNC_IMPL(__imp__sub_83B93328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,856
	ctx.r3.s64 = ctx.r11.s64 + 856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93334"))) PPC_WEAK_FUNC(sub_83B93334);
PPC_FUNC_IMPL(__imp__sub_83B93334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93338"))) PPC_WEAK_FUNC(sub_83B93338);
PPC_FUNC_IMPL(__imp__sub_83B93338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,864
	ctx.r3.s64 = ctx.r11.s64 + 864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93344"))) PPC_WEAK_FUNC(sub_83B93344);
PPC_FUNC_IMPL(__imp__sub_83B93344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93348"))) PPC_WEAK_FUNC(sub_83B93348);
PPC_FUNC_IMPL(__imp__sub_83B93348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,872
	ctx.r3.s64 = ctx.r11.s64 + 872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93354"))) PPC_WEAK_FUNC(sub_83B93354);
PPC_FUNC_IMPL(__imp__sub_83B93354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93358"))) PPC_WEAK_FUNC(sub_83B93358);
PPC_FUNC_IMPL(__imp__sub_83B93358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,880
	ctx.r3.s64 = ctx.r11.s64 + 880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93364"))) PPC_WEAK_FUNC(sub_83B93364);
PPC_FUNC_IMPL(__imp__sub_83B93364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93368"))) PPC_WEAK_FUNC(sub_83B93368);
PPC_FUNC_IMPL(__imp__sub_83B93368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93374"))) PPC_WEAK_FUNC(sub_83B93374);
PPC_FUNC_IMPL(__imp__sub_83B93374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93378"))) PPC_WEAK_FUNC(sub_83B93378);
PPC_FUNC_IMPL(__imp__sub_83B93378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,896
	ctx.r3.s64 = ctx.r11.s64 + 896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93384"))) PPC_WEAK_FUNC(sub_83B93384);
PPC_FUNC_IMPL(__imp__sub_83B93384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93388"))) PPC_WEAK_FUNC(sub_83B93388);
PPC_FUNC_IMPL(__imp__sub_83B93388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,904
	ctx.r3.s64 = ctx.r11.s64 + 904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93394"))) PPC_WEAK_FUNC(sub_83B93394);
PPC_FUNC_IMPL(__imp__sub_83B93394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93398"))) PPC_WEAK_FUNC(sub_83B93398);
PPC_FUNC_IMPL(__imp__sub_83B93398) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5864
	ctx.r7.s64 = ctx.r8.s64 + -5864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5864(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5864);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5864(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5864, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B933C0"))) PPC_WEAK_FUNC(sub_83B933C0);
PPC_FUNC_IMPL(__imp__sub_83B933C0) {
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
	// addi r3,r11,-5868
	ctx.r3.s64 = ctx.r11.s64 + -5868;
	// bl 0x83523120
	ctx.lr = 0x83B933D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,912
	ctx.r3.s64 = ctx.r10.s64 + 912;
	// bl 0x831cdcc8
	ctx.lr = 0x83B933E4;
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

__attribute__((alias("__imp__sub_83B933F4"))) PPC_WEAK_FUNC(sub_83B933F4);
PPC_FUNC_IMPL(__imp__sub_83B933F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

