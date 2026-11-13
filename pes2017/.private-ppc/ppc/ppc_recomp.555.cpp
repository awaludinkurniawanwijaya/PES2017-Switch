#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B84E9C"))) PPC_WEAK_FUNC(sub_83B84E9C);
PPC_FUNC_IMPL(__imp__sub_83B84E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84EA0"))) PPC_WEAK_FUNC(sub_83B84EA0);
PPC_FUNC_IMPL(__imp__sub_83B84EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19920
	ctx.r3.s64 = ctx.r11.s64 + -19920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84EAC"))) PPC_WEAK_FUNC(sub_83B84EAC);
PPC_FUNC_IMPL(__imp__sub_83B84EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84EB0"))) PPC_WEAK_FUNC(sub_83B84EB0);
PPC_FUNC_IMPL(__imp__sub_83B84EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84EBC"))) PPC_WEAK_FUNC(sub_83B84EBC);
PPC_FUNC_IMPL(__imp__sub_83B84EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84EC0"))) PPC_WEAK_FUNC(sub_83B84EC0);
PPC_FUNC_IMPL(__imp__sub_83B84EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19904
	ctx.r3.s64 = ctx.r11.s64 + -19904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84ECC"))) PPC_WEAK_FUNC(sub_83B84ECC);
PPC_FUNC_IMPL(__imp__sub_83B84ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84ED0"))) PPC_WEAK_FUNC(sub_83B84ED0);
PPC_FUNC_IMPL(__imp__sub_83B84ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19896
	ctx.r3.s64 = ctx.r11.s64 + -19896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84EDC"))) PPC_WEAK_FUNC(sub_83B84EDC);
PPC_FUNC_IMPL(__imp__sub_83B84EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84EE0"))) PPC_WEAK_FUNC(sub_83B84EE0);
PPC_FUNC_IMPL(__imp__sub_83B84EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19888
	ctx.r3.s64 = ctx.r11.s64 + -19888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84EEC"))) PPC_WEAK_FUNC(sub_83B84EEC);
PPC_FUNC_IMPL(__imp__sub_83B84EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84EF0"))) PPC_WEAK_FUNC(sub_83B84EF0);
PPC_FUNC_IMPL(__imp__sub_83B84EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84EFC"))) PPC_WEAK_FUNC(sub_83B84EFC);
PPC_FUNC_IMPL(__imp__sub_83B84EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84F00"))) PPC_WEAK_FUNC(sub_83B84F00);
PPC_FUNC_IMPL(__imp__sub_83B84F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-26548
	ctx.r4.s64 = ctx.r11.s64 + -26548;
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
	// addi r3,r7,-12068
	ctx.r3.s64 = ctx.r7.s64 + -12068;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84F30"))) PPC_WEAK_FUNC(sub_83B84F30);
PPC_FUNC_IMPL(__imp__sub_83B84F30) {
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
	// addi r3,r11,-12080
	ctx.r3.s64 = ctx.r11.s64 + -12080;
	// bl 0x83523120
	ctx.lr = 0x83B84F48;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-19872
	ctx.r3.s64 = ctx.r10.s64 + -19872;
	// bl 0x831cdcc8
	ctx.lr = 0x83B84F54;
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

__attribute__((alias("__imp__sub_83B84F64"))) PPC_WEAK_FUNC(sub_83B84F64);
PPC_FUNC_IMPL(__imp__sub_83B84F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84F68"))) PPC_WEAK_FUNC(sub_83B84F68);
PPC_FUNC_IMPL(__imp__sub_83B84F68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12076
	ctx.r7.s64 = ctx.r8.s64 + -12076;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12076(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12076);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12076(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12076, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B84F90"))) PPC_WEAK_FUNC(sub_83B84F90);
PPC_FUNC_IMPL(__imp__sub_83B84F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19856
	ctx.r3.s64 = ctx.r11.s64 + -19856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84F9C"))) PPC_WEAK_FUNC(sub_83B84F9C);
PPC_FUNC_IMPL(__imp__sub_83B84F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84FA0"))) PPC_WEAK_FUNC(sub_83B84FA0);
PPC_FUNC_IMPL(__imp__sub_83B84FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19848
	ctx.r3.s64 = ctx.r11.s64 + -19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84FAC"))) PPC_WEAK_FUNC(sub_83B84FAC);
PPC_FUNC_IMPL(__imp__sub_83B84FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84FB0"))) PPC_WEAK_FUNC(sub_83B84FB0);
PPC_FUNC_IMPL(__imp__sub_83B84FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19840
	ctx.r3.s64 = ctx.r11.s64 + -19840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84FBC"))) PPC_WEAK_FUNC(sub_83B84FBC);
PPC_FUNC_IMPL(__imp__sub_83B84FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84FC0"))) PPC_WEAK_FUNC(sub_83B84FC0);
PPC_FUNC_IMPL(__imp__sub_83B84FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19832
	ctx.r3.s64 = ctx.r11.s64 + -19832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84FCC"))) PPC_WEAK_FUNC(sub_83B84FCC);
PPC_FUNC_IMPL(__imp__sub_83B84FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84FD0"))) PPC_WEAK_FUNC(sub_83B84FD0);
PPC_FUNC_IMPL(__imp__sub_83B84FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19824
	ctx.r3.s64 = ctx.r11.s64 + -19824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84FDC"))) PPC_WEAK_FUNC(sub_83B84FDC);
PPC_FUNC_IMPL(__imp__sub_83B84FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84FE0"))) PPC_WEAK_FUNC(sub_83B84FE0);
PPC_FUNC_IMPL(__imp__sub_83B84FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84FEC"))) PPC_WEAK_FUNC(sub_83B84FEC);
PPC_FUNC_IMPL(__imp__sub_83B84FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B84FF0"))) PPC_WEAK_FUNC(sub_83B84FF0);
PPC_FUNC_IMPL(__imp__sub_83B84FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B84FFC"))) PPC_WEAK_FUNC(sub_83B84FFC);
PPC_FUNC_IMPL(__imp__sub_83B84FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85000"))) PPC_WEAK_FUNC(sub_83B85000);
PPC_FUNC_IMPL(__imp__sub_83B85000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19800
	ctx.r3.s64 = ctx.r11.s64 + -19800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8500C"))) PPC_WEAK_FUNC(sub_83B8500C);
PPC_FUNC_IMPL(__imp__sub_83B8500C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85010"))) PPC_WEAK_FUNC(sub_83B85010);
PPC_FUNC_IMPL(__imp__sub_83B85010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19792
	ctx.r3.s64 = ctx.r11.s64 + -19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8501C"))) PPC_WEAK_FUNC(sub_83B8501C);
PPC_FUNC_IMPL(__imp__sub_83B8501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85020"))) PPC_WEAK_FUNC(sub_83B85020);
PPC_FUNC_IMPL(__imp__sub_83B85020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19784
	ctx.r3.s64 = ctx.r11.s64 + -19784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8502C"))) PPC_WEAK_FUNC(sub_83B8502C);
PPC_FUNC_IMPL(__imp__sub_83B8502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85030"))) PPC_WEAK_FUNC(sub_83B85030);
PPC_FUNC_IMPL(__imp__sub_83B85030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19776
	ctx.r3.s64 = ctx.r11.s64 + -19776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8503C"))) PPC_WEAK_FUNC(sub_83B8503C);
PPC_FUNC_IMPL(__imp__sub_83B8503C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85040"))) PPC_WEAK_FUNC(sub_83B85040);
PPC_FUNC_IMPL(__imp__sub_83B85040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19768
	ctx.r3.s64 = ctx.r11.s64 + -19768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8504C"))) PPC_WEAK_FUNC(sub_83B8504C);
PPC_FUNC_IMPL(__imp__sub_83B8504C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85050"))) PPC_WEAK_FUNC(sub_83B85050);
PPC_FUNC_IMPL(__imp__sub_83B85050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-26228
	ctx.r4.s64 = ctx.r11.s64 + -26228;
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
	// addi r3,r7,-12044
	ctx.r3.s64 = ctx.r7.s64 + -12044;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85080"))) PPC_WEAK_FUNC(sub_83B85080);
PPC_FUNC_IMPL(__imp__sub_83B85080) {
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
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// bl 0x83523120
	ctx.lr = 0x83B85098;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-19760
	ctx.r3.s64 = ctx.r10.s64 + -19760;
	// bl 0x831cdcc8
	ctx.lr = 0x83B850A4;
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

__attribute__((alias("__imp__sub_83B850B4"))) PPC_WEAK_FUNC(sub_83B850B4);
PPC_FUNC_IMPL(__imp__sub_83B850B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B850B8"))) PPC_WEAK_FUNC(sub_83B850B8);
PPC_FUNC_IMPL(__imp__sub_83B850B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12052
	ctx.r7.s64 = ctx.r8.s64 + -12052;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12052(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12052);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12052, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B850E0"))) PPC_WEAK_FUNC(sub_83B850E0);
PPC_FUNC_IMPL(__imp__sub_83B850E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B850EC"))) PPC_WEAK_FUNC(sub_83B850EC);
PPC_FUNC_IMPL(__imp__sub_83B850EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B850F0"))) PPC_WEAK_FUNC(sub_83B850F0);
PPC_FUNC_IMPL(__imp__sub_83B850F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19736
	ctx.r3.s64 = ctx.r11.s64 + -19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B850FC"))) PPC_WEAK_FUNC(sub_83B850FC);
PPC_FUNC_IMPL(__imp__sub_83B850FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85100"))) PPC_WEAK_FUNC(sub_83B85100);
PPC_FUNC_IMPL(__imp__sub_83B85100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19728
	ctx.r3.s64 = ctx.r11.s64 + -19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8510C"))) PPC_WEAK_FUNC(sub_83B8510C);
PPC_FUNC_IMPL(__imp__sub_83B8510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85110"))) PPC_WEAK_FUNC(sub_83B85110);
PPC_FUNC_IMPL(__imp__sub_83B85110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19720
	ctx.r3.s64 = ctx.r11.s64 + -19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8511C"))) PPC_WEAK_FUNC(sub_83B8511C);
PPC_FUNC_IMPL(__imp__sub_83B8511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85120"))) PPC_WEAK_FUNC(sub_83B85120);
PPC_FUNC_IMPL(__imp__sub_83B85120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19712
	ctx.r3.s64 = ctx.r11.s64 + -19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8512C"))) PPC_WEAK_FUNC(sub_83B8512C);
PPC_FUNC_IMPL(__imp__sub_83B8512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85130"))) PPC_WEAK_FUNC(sub_83B85130);
PPC_FUNC_IMPL(__imp__sub_83B85130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19704
	ctx.r3.s64 = ctx.r11.s64 + -19704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8513C"))) PPC_WEAK_FUNC(sub_83B8513C);
PPC_FUNC_IMPL(__imp__sub_83B8513C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85140"))) PPC_WEAK_FUNC(sub_83B85140);
PPC_FUNC_IMPL(__imp__sub_83B85140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19696
	ctx.r3.s64 = ctx.r11.s64 + -19696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8514C"))) PPC_WEAK_FUNC(sub_83B8514C);
PPC_FUNC_IMPL(__imp__sub_83B8514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85150"))) PPC_WEAK_FUNC(sub_83B85150);
PPC_FUNC_IMPL(__imp__sub_83B85150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19688
	ctx.r3.s64 = ctx.r11.s64 + -19688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8515C"))) PPC_WEAK_FUNC(sub_83B8515C);
PPC_FUNC_IMPL(__imp__sub_83B8515C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85160"))) PPC_WEAK_FUNC(sub_83B85160);
PPC_FUNC_IMPL(__imp__sub_83B85160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19680
	ctx.r3.s64 = ctx.r11.s64 + -19680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8516C"))) PPC_WEAK_FUNC(sub_83B8516C);
PPC_FUNC_IMPL(__imp__sub_83B8516C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85170"))) PPC_WEAK_FUNC(sub_83B85170);
PPC_FUNC_IMPL(__imp__sub_83B85170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19672
	ctx.r3.s64 = ctx.r11.s64 + -19672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8517C"))) PPC_WEAK_FUNC(sub_83B8517C);
PPC_FUNC_IMPL(__imp__sub_83B8517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85180"))) PPC_WEAK_FUNC(sub_83B85180);
PPC_FUNC_IMPL(__imp__sub_83B85180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8518C"))) PPC_WEAK_FUNC(sub_83B8518C);
PPC_FUNC_IMPL(__imp__sub_83B8518C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85190"))) PPC_WEAK_FUNC(sub_83B85190);
PPC_FUNC_IMPL(__imp__sub_83B85190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19656
	ctx.r3.s64 = ctx.r11.s64 + -19656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8519C"))) PPC_WEAK_FUNC(sub_83B8519C);
PPC_FUNC_IMPL(__imp__sub_83B8519C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B851A0"))) PPC_WEAK_FUNC(sub_83B851A0);
PPC_FUNC_IMPL(__imp__sub_83B851A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-25956
	ctx.r4.s64 = ctx.r11.s64 + -25956;
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
	// addi r3,r7,-12020
	ctx.r3.s64 = ctx.r7.s64 + -12020;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B851D0"))) PPC_WEAK_FUNC(sub_83B851D0);
PPC_FUNC_IMPL(__imp__sub_83B851D0) {
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
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// bl 0x83523120
	ctx.lr = 0x83B851E8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-19648
	ctx.r3.s64 = ctx.r10.s64 + -19648;
	// bl 0x831cdcc8
	ctx.lr = 0x83B851F4;
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

__attribute__((alias("__imp__sub_83B85204"))) PPC_WEAK_FUNC(sub_83B85204);
PPC_FUNC_IMPL(__imp__sub_83B85204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85208"))) PPC_WEAK_FUNC(sub_83B85208);
PPC_FUNC_IMPL(__imp__sub_83B85208) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12028
	ctx.r7.s64 = ctx.r8.s64 + -12028;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12028(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12028);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12028(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12028, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85230"))) PPC_WEAK_FUNC(sub_83B85230);
PPC_FUNC_IMPL(__imp__sub_83B85230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19632
	ctx.r3.s64 = ctx.r11.s64 + -19632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8523C"))) PPC_WEAK_FUNC(sub_83B8523C);
PPC_FUNC_IMPL(__imp__sub_83B8523C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85240"))) PPC_WEAK_FUNC(sub_83B85240);
PPC_FUNC_IMPL(__imp__sub_83B85240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19624
	ctx.r3.s64 = ctx.r11.s64 + -19624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8524C"))) PPC_WEAK_FUNC(sub_83B8524C);
PPC_FUNC_IMPL(__imp__sub_83B8524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85250"))) PPC_WEAK_FUNC(sub_83B85250);
PPC_FUNC_IMPL(__imp__sub_83B85250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19616
	ctx.r3.s64 = ctx.r11.s64 + -19616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8525C"))) PPC_WEAK_FUNC(sub_83B8525C);
PPC_FUNC_IMPL(__imp__sub_83B8525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85260"))) PPC_WEAK_FUNC(sub_83B85260);
PPC_FUNC_IMPL(__imp__sub_83B85260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19608
	ctx.r3.s64 = ctx.r11.s64 + -19608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8526C"))) PPC_WEAK_FUNC(sub_83B8526C);
PPC_FUNC_IMPL(__imp__sub_83B8526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85270"))) PPC_WEAK_FUNC(sub_83B85270);
PPC_FUNC_IMPL(__imp__sub_83B85270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19600
	ctx.r3.s64 = ctx.r11.s64 + -19600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8527C"))) PPC_WEAK_FUNC(sub_83B8527C);
PPC_FUNC_IMPL(__imp__sub_83B8527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85280"))) PPC_WEAK_FUNC(sub_83B85280);
PPC_FUNC_IMPL(__imp__sub_83B85280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19592
	ctx.r3.s64 = ctx.r11.s64 + -19592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8528C"))) PPC_WEAK_FUNC(sub_83B8528C);
PPC_FUNC_IMPL(__imp__sub_83B8528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85290"))) PPC_WEAK_FUNC(sub_83B85290);
PPC_FUNC_IMPL(__imp__sub_83B85290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19584
	ctx.r3.s64 = ctx.r11.s64 + -19584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8529C"))) PPC_WEAK_FUNC(sub_83B8529C);
PPC_FUNC_IMPL(__imp__sub_83B8529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B852A0"))) PPC_WEAK_FUNC(sub_83B852A0);
PPC_FUNC_IMPL(__imp__sub_83B852A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19576
	ctx.r3.s64 = ctx.r11.s64 + -19576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B852AC"))) PPC_WEAK_FUNC(sub_83B852AC);
PPC_FUNC_IMPL(__imp__sub_83B852AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B852B0"))) PPC_WEAK_FUNC(sub_83B852B0);
PPC_FUNC_IMPL(__imp__sub_83B852B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B852BC"))) PPC_WEAK_FUNC(sub_83B852BC);
PPC_FUNC_IMPL(__imp__sub_83B852BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B852C0"))) PPC_WEAK_FUNC(sub_83B852C0);
PPC_FUNC_IMPL(__imp__sub_83B852C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19560
	ctx.r3.s64 = ctx.r11.s64 + -19560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B852CC"))) PPC_WEAK_FUNC(sub_83B852CC);
PPC_FUNC_IMPL(__imp__sub_83B852CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B852D0"))) PPC_WEAK_FUNC(sub_83B852D0);
PPC_FUNC_IMPL(__imp__sub_83B852D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19552
	ctx.r3.s64 = ctx.r11.s64 + -19552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B852DC"))) PPC_WEAK_FUNC(sub_83B852DC);
PPC_FUNC_IMPL(__imp__sub_83B852DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B852E0"))) PPC_WEAK_FUNC(sub_83B852E0);
PPC_FUNC_IMPL(__imp__sub_83B852E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19544
	ctx.r3.s64 = ctx.r11.s64 + -19544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B852EC"))) PPC_WEAK_FUNC(sub_83B852EC);
PPC_FUNC_IMPL(__imp__sub_83B852EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B852F0"))) PPC_WEAK_FUNC(sub_83B852F0);
PPC_FUNC_IMPL(__imp__sub_83B852F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-25700
	ctx.r4.s64 = ctx.r11.s64 + -25700;
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
	// addi r3,r7,-11996
	ctx.r3.s64 = ctx.r7.s64 + -11996;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85320"))) PPC_WEAK_FUNC(sub_83B85320);
PPC_FUNC_IMPL(__imp__sub_83B85320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12004
	ctx.r7.s64 = ctx.r8.s64 + -12004;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12004(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12004);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12004(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12004, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85348"))) PPC_WEAK_FUNC(sub_83B85348);
PPC_FUNC_IMPL(__imp__sub_83B85348) {
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
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// bl 0x83523120
	ctx.lr = 0x83B85360;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-19536
	ctx.r3.s64 = ctx.r10.s64 + -19536;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8536C;
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

__attribute__((alias("__imp__sub_83B8537C"))) PPC_WEAK_FUNC(sub_83B8537C);
PPC_FUNC_IMPL(__imp__sub_83B8537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85380"))) PPC_WEAK_FUNC(sub_83B85380);
PPC_FUNC_IMPL(__imp__sub_83B85380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19520
	ctx.r3.s64 = ctx.r11.s64 + -19520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8538C"))) PPC_WEAK_FUNC(sub_83B8538C);
PPC_FUNC_IMPL(__imp__sub_83B8538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85390"))) PPC_WEAK_FUNC(sub_83B85390);
PPC_FUNC_IMPL(__imp__sub_83B85390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19512
	ctx.r3.s64 = ctx.r11.s64 + -19512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8539C"))) PPC_WEAK_FUNC(sub_83B8539C);
PPC_FUNC_IMPL(__imp__sub_83B8539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B853A0"))) PPC_WEAK_FUNC(sub_83B853A0);
PPC_FUNC_IMPL(__imp__sub_83B853A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19504
	ctx.r3.s64 = ctx.r11.s64 + -19504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B853AC"))) PPC_WEAK_FUNC(sub_83B853AC);
PPC_FUNC_IMPL(__imp__sub_83B853AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B853B0"))) PPC_WEAK_FUNC(sub_83B853B0);
PPC_FUNC_IMPL(__imp__sub_83B853B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B853BC"))) PPC_WEAK_FUNC(sub_83B853BC);
PPC_FUNC_IMPL(__imp__sub_83B853BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B853C0"))) PPC_WEAK_FUNC(sub_83B853C0);
PPC_FUNC_IMPL(__imp__sub_83B853C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19488
	ctx.r3.s64 = ctx.r11.s64 + -19488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B853CC"))) PPC_WEAK_FUNC(sub_83B853CC);
PPC_FUNC_IMPL(__imp__sub_83B853CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B853D0"))) PPC_WEAK_FUNC(sub_83B853D0);
PPC_FUNC_IMPL(__imp__sub_83B853D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19480
	ctx.r3.s64 = ctx.r11.s64 + -19480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B853DC"))) PPC_WEAK_FUNC(sub_83B853DC);
PPC_FUNC_IMPL(__imp__sub_83B853DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B853E0"))) PPC_WEAK_FUNC(sub_83B853E0);
PPC_FUNC_IMPL(__imp__sub_83B853E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19472
	ctx.r3.s64 = ctx.r11.s64 + -19472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B853EC"))) PPC_WEAK_FUNC(sub_83B853EC);
PPC_FUNC_IMPL(__imp__sub_83B853EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B853F0"))) PPC_WEAK_FUNC(sub_83B853F0);
PPC_FUNC_IMPL(__imp__sub_83B853F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19464
	ctx.r3.s64 = ctx.r11.s64 + -19464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B853FC"))) PPC_WEAK_FUNC(sub_83B853FC);
PPC_FUNC_IMPL(__imp__sub_83B853FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85400"))) PPC_WEAK_FUNC(sub_83B85400);
PPC_FUNC_IMPL(__imp__sub_83B85400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19456
	ctx.r3.s64 = ctx.r11.s64 + -19456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8540C"))) PPC_WEAK_FUNC(sub_83B8540C);
PPC_FUNC_IMPL(__imp__sub_83B8540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85410"))) PPC_WEAK_FUNC(sub_83B85410);
PPC_FUNC_IMPL(__imp__sub_83B85410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19448
	ctx.r3.s64 = ctx.r11.s64 + -19448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8541C"))) PPC_WEAK_FUNC(sub_83B8541C);
PPC_FUNC_IMPL(__imp__sub_83B8541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85420"))) PPC_WEAK_FUNC(sub_83B85420);
PPC_FUNC_IMPL(__imp__sub_83B85420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19440
	ctx.r3.s64 = ctx.r11.s64 + -19440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8542C"))) PPC_WEAK_FUNC(sub_83B8542C);
PPC_FUNC_IMPL(__imp__sub_83B8542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85430"))) PPC_WEAK_FUNC(sub_83B85430);
PPC_FUNC_IMPL(__imp__sub_83B85430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19432
	ctx.r3.s64 = ctx.r11.s64 + -19432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8543C"))) PPC_WEAK_FUNC(sub_83B8543C);
PPC_FUNC_IMPL(__imp__sub_83B8543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85440"))) PPC_WEAK_FUNC(sub_83B85440);
PPC_FUNC_IMPL(__imp__sub_83B85440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-25444
	ctx.r4.s64 = ctx.r11.s64 + -25444;
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
	// addi r3,r7,-11972
	ctx.r3.s64 = ctx.r7.s64 + -11972;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85470"))) PPC_WEAK_FUNC(sub_83B85470);
PPC_FUNC_IMPL(__imp__sub_83B85470) {
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
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// bl 0x83523120
	ctx.lr = 0x83B85488;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-19424
	ctx.r3.s64 = ctx.r10.s64 + -19424;
	// bl 0x831cdcc8
	ctx.lr = 0x83B85494;
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

__attribute__((alias("__imp__sub_83B854A4"))) PPC_WEAK_FUNC(sub_83B854A4);
PPC_FUNC_IMPL(__imp__sub_83B854A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B854A8"))) PPC_WEAK_FUNC(sub_83B854A8);
PPC_FUNC_IMPL(__imp__sub_83B854A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11980
	ctx.r7.s64 = ctx.r8.s64 + -11980;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11980(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11980);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11980, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B854D0"))) PPC_WEAK_FUNC(sub_83B854D0);
PPC_FUNC_IMPL(__imp__sub_83B854D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19408
	ctx.r3.s64 = ctx.r11.s64 + -19408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B854DC"))) PPC_WEAK_FUNC(sub_83B854DC);
PPC_FUNC_IMPL(__imp__sub_83B854DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B854E0"))) PPC_WEAK_FUNC(sub_83B854E0);
PPC_FUNC_IMPL(__imp__sub_83B854E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19400
	ctx.r3.s64 = ctx.r11.s64 + -19400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B854EC"))) PPC_WEAK_FUNC(sub_83B854EC);
PPC_FUNC_IMPL(__imp__sub_83B854EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B854F0"))) PPC_WEAK_FUNC(sub_83B854F0);
PPC_FUNC_IMPL(__imp__sub_83B854F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19392
	ctx.r3.s64 = ctx.r11.s64 + -19392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B854FC"))) PPC_WEAK_FUNC(sub_83B854FC);
PPC_FUNC_IMPL(__imp__sub_83B854FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85500"))) PPC_WEAK_FUNC(sub_83B85500);
PPC_FUNC_IMPL(__imp__sub_83B85500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19384
	ctx.r3.s64 = ctx.r11.s64 + -19384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8550C"))) PPC_WEAK_FUNC(sub_83B8550C);
PPC_FUNC_IMPL(__imp__sub_83B8550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85510"))) PPC_WEAK_FUNC(sub_83B85510);
PPC_FUNC_IMPL(__imp__sub_83B85510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8551C"))) PPC_WEAK_FUNC(sub_83B8551C);
PPC_FUNC_IMPL(__imp__sub_83B8551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85520"))) PPC_WEAK_FUNC(sub_83B85520);
PPC_FUNC_IMPL(__imp__sub_83B85520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19368
	ctx.r3.s64 = ctx.r11.s64 + -19368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8552C"))) PPC_WEAK_FUNC(sub_83B8552C);
PPC_FUNC_IMPL(__imp__sub_83B8552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85530"))) PPC_WEAK_FUNC(sub_83B85530);
PPC_FUNC_IMPL(__imp__sub_83B85530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19360
	ctx.r3.s64 = ctx.r11.s64 + -19360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8553C"))) PPC_WEAK_FUNC(sub_83B8553C);
PPC_FUNC_IMPL(__imp__sub_83B8553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85540"))) PPC_WEAK_FUNC(sub_83B85540);
PPC_FUNC_IMPL(__imp__sub_83B85540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19352
	ctx.r3.s64 = ctx.r11.s64 + -19352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8554C"))) PPC_WEAK_FUNC(sub_83B8554C);
PPC_FUNC_IMPL(__imp__sub_83B8554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85550"))) PPC_WEAK_FUNC(sub_83B85550);
PPC_FUNC_IMPL(__imp__sub_83B85550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19344
	ctx.r3.s64 = ctx.r11.s64 + -19344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8555C"))) PPC_WEAK_FUNC(sub_83B8555C);
PPC_FUNC_IMPL(__imp__sub_83B8555C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85560"))) PPC_WEAK_FUNC(sub_83B85560);
PPC_FUNC_IMPL(__imp__sub_83B85560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19336
	ctx.r3.s64 = ctx.r11.s64 + -19336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8556C"))) PPC_WEAK_FUNC(sub_83B8556C);
PPC_FUNC_IMPL(__imp__sub_83B8556C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85570"))) PPC_WEAK_FUNC(sub_83B85570);
PPC_FUNC_IMPL(__imp__sub_83B85570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19328
	ctx.r3.s64 = ctx.r11.s64 + -19328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8557C"))) PPC_WEAK_FUNC(sub_83B8557C);
PPC_FUNC_IMPL(__imp__sub_83B8557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85580"))) PPC_WEAK_FUNC(sub_83B85580);
PPC_FUNC_IMPL(__imp__sub_83B85580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19320
	ctx.r3.s64 = ctx.r11.s64 + -19320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8558C"))) PPC_WEAK_FUNC(sub_83B8558C);
PPC_FUNC_IMPL(__imp__sub_83B8558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85590"))) PPC_WEAK_FUNC(sub_83B85590);
PPC_FUNC_IMPL(__imp__sub_83B85590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-25108
	ctx.r4.s64 = ctx.r11.s64 + -25108;
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
	// addi r3,r7,-11948
	ctx.r3.s64 = ctx.r7.s64 + -11948;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B855C0"))) PPC_WEAK_FUNC(sub_83B855C0);
PPC_FUNC_IMPL(__imp__sub_83B855C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11956
	ctx.r7.s64 = ctx.r8.s64 + -11956;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11956(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11956);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11956(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11956, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B855E8"))) PPC_WEAK_FUNC(sub_83B855E8);
PPC_FUNC_IMPL(__imp__sub_83B855E8) {
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
	// addi r3,r11,-11960
	ctx.r3.s64 = ctx.r11.s64 + -11960;
	// bl 0x83523120
	ctx.lr = 0x83B85600;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-19312
	ctx.r3.s64 = ctx.r10.s64 + -19312;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8560C;
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

__attribute__((alias("__imp__sub_83B8561C"))) PPC_WEAK_FUNC(sub_83B8561C);
PPC_FUNC_IMPL(__imp__sub_83B8561C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85620"))) PPC_WEAK_FUNC(sub_83B85620);
PPC_FUNC_IMPL(__imp__sub_83B85620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19296
	ctx.r3.s64 = ctx.r11.s64 + -19296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8562C"))) PPC_WEAK_FUNC(sub_83B8562C);
PPC_FUNC_IMPL(__imp__sub_83B8562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85630"))) PPC_WEAK_FUNC(sub_83B85630);
PPC_FUNC_IMPL(__imp__sub_83B85630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19288
	ctx.r3.s64 = ctx.r11.s64 + -19288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8563C"))) PPC_WEAK_FUNC(sub_83B8563C);
PPC_FUNC_IMPL(__imp__sub_83B8563C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85640"))) PPC_WEAK_FUNC(sub_83B85640);
PPC_FUNC_IMPL(__imp__sub_83B85640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19280
	ctx.r3.s64 = ctx.r11.s64 + -19280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8564C"))) PPC_WEAK_FUNC(sub_83B8564C);
PPC_FUNC_IMPL(__imp__sub_83B8564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85650"))) PPC_WEAK_FUNC(sub_83B85650);
PPC_FUNC_IMPL(__imp__sub_83B85650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19272
	ctx.r3.s64 = ctx.r11.s64 + -19272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8565C"))) PPC_WEAK_FUNC(sub_83B8565C);
PPC_FUNC_IMPL(__imp__sub_83B8565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85660"))) PPC_WEAK_FUNC(sub_83B85660);
PPC_FUNC_IMPL(__imp__sub_83B85660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19264
	ctx.r3.s64 = ctx.r11.s64 + -19264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8566C"))) PPC_WEAK_FUNC(sub_83B8566C);
PPC_FUNC_IMPL(__imp__sub_83B8566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85670"))) PPC_WEAK_FUNC(sub_83B85670);
PPC_FUNC_IMPL(__imp__sub_83B85670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19256
	ctx.r3.s64 = ctx.r11.s64 + -19256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8567C"))) PPC_WEAK_FUNC(sub_83B8567C);
PPC_FUNC_IMPL(__imp__sub_83B8567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85680"))) PPC_WEAK_FUNC(sub_83B85680);
PPC_FUNC_IMPL(__imp__sub_83B85680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19248
	ctx.r3.s64 = ctx.r11.s64 + -19248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8568C"))) PPC_WEAK_FUNC(sub_83B8568C);
PPC_FUNC_IMPL(__imp__sub_83B8568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85690"))) PPC_WEAK_FUNC(sub_83B85690);
PPC_FUNC_IMPL(__imp__sub_83B85690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19240
	ctx.r3.s64 = ctx.r11.s64 + -19240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8569C"))) PPC_WEAK_FUNC(sub_83B8569C);
PPC_FUNC_IMPL(__imp__sub_83B8569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B856A0"))) PPC_WEAK_FUNC(sub_83B856A0);
PPC_FUNC_IMPL(__imp__sub_83B856A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19232
	ctx.r3.s64 = ctx.r11.s64 + -19232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B856AC"))) PPC_WEAK_FUNC(sub_83B856AC);
PPC_FUNC_IMPL(__imp__sub_83B856AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B856B0"))) PPC_WEAK_FUNC(sub_83B856B0);
PPC_FUNC_IMPL(__imp__sub_83B856B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19224
	ctx.r3.s64 = ctx.r11.s64 + -19224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B856BC"))) PPC_WEAK_FUNC(sub_83B856BC);
PPC_FUNC_IMPL(__imp__sub_83B856BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B856C0"))) PPC_WEAK_FUNC(sub_83B856C0);
PPC_FUNC_IMPL(__imp__sub_83B856C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19216
	ctx.r3.s64 = ctx.r11.s64 + -19216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B856CC"))) PPC_WEAK_FUNC(sub_83B856CC);
PPC_FUNC_IMPL(__imp__sub_83B856CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B856D0"))) PPC_WEAK_FUNC(sub_83B856D0);
PPC_FUNC_IMPL(__imp__sub_83B856D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19208
	ctx.r3.s64 = ctx.r11.s64 + -19208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B856DC"))) PPC_WEAK_FUNC(sub_83B856DC);
PPC_FUNC_IMPL(__imp__sub_83B856DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B856E0"))) PPC_WEAK_FUNC(sub_83B856E0);
PPC_FUNC_IMPL(__imp__sub_83B856E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11932
	ctx.r7.s64 = ctx.r8.s64 + -11932;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11932(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11932);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11932, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85708"))) PPC_WEAK_FUNC(sub_83B85708);
PPC_FUNC_IMPL(__imp__sub_83B85708) {
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
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// bl 0x83523120
	ctx.lr = 0x83B85720;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-19200
	ctx.r3.s64 = ctx.r10.s64 + -19200;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8572C;
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

__attribute__((alias("__imp__sub_83B8573C"))) PPC_WEAK_FUNC(sub_83B8573C);
PPC_FUNC_IMPL(__imp__sub_83B8573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85740"))) PPC_WEAK_FUNC(sub_83B85740);
PPC_FUNC_IMPL(__imp__sub_83B85740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-24672
	ctx.r4.s64 = ctx.r11.s64 + -24672;
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
	// addi r3,r7,-11924
	ctx.r3.s64 = ctx.r7.s64 + -11924;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85770"))) PPC_WEAK_FUNC(sub_83B85770);
PPC_FUNC_IMPL(__imp__sub_83B85770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19184
	ctx.r3.s64 = ctx.r11.s64 + -19184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8577C"))) PPC_WEAK_FUNC(sub_83B8577C);
PPC_FUNC_IMPL(__imp__sub_83B8577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85780"))) PPC_WEAK_FUNC(sub_83B85780);
PPC_FUNC_IMPL(__imp__sub_83B85780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8578C"))) PPC_WEAK_FUNC(sub_83B8578C);
PPC_FUNC_IMPL(__imp__sub_83B8578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85790"))) PPC_WEAK_FUNC(sub_83B85790);
PPC_FUNC_IMPL(__imp__sub_83B85790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19168
	ctx.r3.s64 = ctx.r11.s64 + -19168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8579C"))) PPC_WEAK_FUNC(sub_83B8579C);
PPC_FUNC_IMPL(__imp__sub_83B8579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B857A0"))) PPC_WEAK_FUNC(sub_83B857A0);
PPC_FUNC_IMPL(__imp__sub_83B857A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19160
	ctx.r3.s64 = ctx.r11.s64 + -19160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B857AC"))) PPC_WEAK_FUNC(sub_83B857AC);
PPC_FUNC_IMPL(__imp__sub_83B857AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B857B0"))) PPC_WEAK_FUNC(sub_83B857B0);
PPC_FUNC_IMPL(__imp__sub_83B857B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19152
	ctx.r3.s64 = ctx.r11.s64 + -19152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B857BC"))) PPC_WEAK_FUNC(sub_83B857BC);
PPC_FUNC_IMPL(__imp__sub_83B857BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B857C0"))) PPC_WEAK_FUNC(sub_83B857C0);
PPC_FUNC_IMPL(__imp__sub_83B857C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19144
	ctx.r3.s64 = ctx.r11.s64 + -19144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B857CC"))) PPC_WEAK_FUNC(sub_83B857CC);
PPC_FUNC_IMPL(__imp__sub_83B857CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B857D0"))) PPC_WEAK_FUNC(sub_83B857D0);
PPC_FUNC_IMPL(__imp__sub_83B857D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19136
	ctx.r3.s64 = ctx.r11.s64 + -19136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B857DC"))) PPC_WEAK_FUNC(sub_83B857DC);
PPC_FUNC_IMPL(__imp__sub_83B857DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B857E0"))) PPC_WEAK_FUNC(sub_83B857E0);
PPC_FUNC_IMPL(__imp__sub_83B857E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19128
	ctx.r3.s64 = ctx.r11.s64 + -19128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B857EC"))) PPC_WEAK_FUNC(sub_83B857EC);
PPC_FUNC_IMPL(__imp__sub_83B857EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B857F0"))) PPC_WEAK_FUNC(sub_83B857F0);
PPC_FUNC_IMPL(__imp__sub_83B857F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19120
	ctx.r3.s64 = ctx.r11.s64 + -19120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B857FC"))) PPC_WEAK_FUNC(sub_83B857FC);
PPC_FUNC_IMPL(__imp__sub_83B857FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85800"))) PPC_WEAK_FUNC(sub_83B85800);
PPC_FUNC_IMPL(__imp__sub_83B85800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19112
	ctx.r3.s64 = ctx.r11.s64 + -19112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8580C"))) PPC_WEAK_FUNC(sub_83B8580C);
PPC_FUNC_IMPL(__imp__sub_83B8580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85810"))) PPC_WEAK_FUNC(sub_83B85810);
PPC_FUNC_IMPL(__imp__sub_83B85810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19104
	ctx.r3.s64 = ctx.r11.s64 + -19104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8581C"))) PPC_WEAK_FUNC(sub_83B8581C);
PPC_FUNC_IMPL(__imp__sub_83B8581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85820"))) PPC_WEAK_FUNC(sub_83B85820);
PPC_FUNC_IMPL(__imp__sub_83B85820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19096
	ctx.r3.s64 = ctx.r11.s64 + -19096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8582C"))) PPC_WEAK_FUNC(sub_83B8582C);
PPC_FUNC_IMPL(__imp__sub_83B8582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85830"))) PPC_WEAK_FUNC(sub_83B85830);
PPC_FUNC_IMPL(__imp__sub_83B85830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-24372
	ctx.r4.s64 = ctx.r11.s64 + -24372;
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
	// addi r3,r7,-11900
	ctx.r3.s64 = ctx.r7.s64 + -11900;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85860"))) PPC_WEAK_FUNC(sub_83B85860);
PPC_FUNC_IMPL(__imp__sub_83B85860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11908
	ctx.r7.s64 = ctx.r8.s64 + -11908;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11908(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11908);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11908(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11908, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85888"))) PPC_WEAK_FUNC(sub_83B85888);
PPC_FUNC_IMPL(__imp__sub_83B85888) {
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
	// addi r3,r11,-11912
	ctx.r3.s64 = ctx.r11.s64 + -11912;
	// bl 0x83523120
	ctx.lr = 0x83B858A0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-19088
	ctx.r3.s64 = ctx.r10.s64 + -19088;
	// bl 0x831cdcc8
	ctx.lr = 0x83B858AC;
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

__attribute__((alias("__imp__sub_83B858BC"))) PPC_WEAK_FUNC(sub_83B858BC);
PPC_FUNC_IMPL(__imp__sub_83B858BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B858C0"))) PPC_WEAK_FUNC(sub_83B858C0);
PPC_FUNC_IMPL(__imp__sub_83B858C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19072
	ctx.r3.s64 = ctx.r11.s64 + -19072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B858CC"))) PPC_WEAK_FUNC(sub_83B858CC);
PPC_FUNC_IMPL(__imp__sub_83B858CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B858D0"))) PPC_WEAK_FUNC(sub_83B858D0);
PPC_FUNC_IMPL(__imp__sub_83B858D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19064
	ctx.r3.s64 = ctx.r11.s64 + -19064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B858DC"))) PPC_WEAK_FUNC(sub_83B858DC);
PPC_FUNC_IMPL(__imp__sub_83B858DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B858E0"))) PPC_WEAK_FUNC(sub_83B858E0);
PPC_FUNC_IMPL(__imp__sub_83B858E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19056
	ctx.r3.s64 = ctx.r11.s64 + -19056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B858EC"))) PPC_WEAK_FUNC(sub_83B858EC);
PPC_FUNC_IMPL(__imp__sub_83B858EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B858F0"))) PPC_WEAK_FUNC(sub_83B858F0);
PPC_FUNC_IMPL(__imp__sub_83B858F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B858FC"))) PPC_WEAK_FUNC(sub_83B858FC);
PPC_FUNC_IMPL(__imp__sub_83B858FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85900"))) PPC_WEAK_FUNC(sub_83B85900);
PPC_FUNC_IMPL(__imp__sub_83B85900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19040
	ctx.r3.s64 = ctx.r11.s64 + -19040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8590C"))) PPC_WEAK_FUNC(sub_83B8590C);
PPC_FUNC_IMPL(__imp__sub_83B8590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85910"))) PPC_WEAK_FUNC(sub_83B85910);
PPC_FUNC_IMPL(__imp__sub_83B85910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19032
	ctx.r3.s64 = ctx.r11.s64 + -19032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8591C"))) PPC_WEAK_FUNC(sub_83B8591C);
PPC_FUNC_IMPL(__imp__sub_83B8591C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85920"))) PPC_WEAK_FUNC(sub_83B85920);
PPC_FUNC_IMPL(__imp__sub_83B85920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19024
	ctx.r3.s64 = ctx.r11.s64 + -19024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8592C"))) PPC_WEAK_FUNC(sub_83B8592C);
PPC_FUNC_IMPL(__imp__sub_83B8592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85930"))) PPC_WEAK_FUNC(sub_83B85930);
PPC_FUNC_IMPL(__imp__sub_83B85930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8593C"))) PPC_WEAK_FUNC(sub_83B8593C);
PPC_FUNC_IMPL(__imp__sub_83B8593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85940"))) PPC_WEAK_FUNC(sub_83B85940);
PPC_FUNC_IMPL(__imp__sub_83B85940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19008
	ctx.r3.s64 = ctx.r11.s64 + -19008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8594C"))) PPC_WEAK_FUNC(sub_83B8594C);
PPC_FUNC_IMPL(__imp__sub_83B8594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85950"))) PPC_WEAK_FUNC(sub_83B85950);
PPC_FUNC_IMPL(__imp__sub_83B85950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-19000
	ctx.r3.s64 = ctx.r11.s64 + -19000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8595C"))) PPC_WEAK_FUNC(sub_83B8595C);
PPC_FUNC_IMPL(__imp__sub_83B8595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85960"))) PPC_WEAK_FUNC(sub_83B85960);
PPC_FUNC_IMPL(__imp__sub_83B85960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18992
	ctx.r3.s64 = ctx.r11.s64 + -18992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8596C"))) PPC_WEAK_FUNC(sub_83B8596C);
PPC_FUNC_IMPL(__imp__sub_83B8596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85970"))) PPC_WEAK_FUNC(sub_83B85970);
PPC_FUNC_IMPL(__imp__sub_83B85970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18984
	ctx.r3.s64 = ctx.r11.s64 + -18984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8597C"))) PPC_WEAK_FUNC(sub_83B8597C);
PPC_FUNC_IMPL(__imp__sub_83B8597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85980"))) PPC_WEAK_FUNC(sub_83B85980);
PPC_FUNC_IMPL(__imp__sub_83B85980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-24052
	ctx.r4.s64 = ctx.r11.s64 + -24052;
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
	// addi r3,r7,-11876
	ctx.r3.s64 = ctx.r7.s64 + -11876;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B859B0"))) PPC_WEAK_FUNC(sub_83B859B0);
PPC_FUNC_IMPL(__imp__sub_83B859B0) {
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
	// addi r3,r11,-11888
	ctx.r3.s64 = ctx.r11.s64 + -11888;
	// bl 0x83523120
	ctx.lr = 0x83B859C8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-18976
	ctx.r3.s64 = ctx.r10.s64 + -18976;
	// bl 0x831cdcc8
	ctx.lr = 0x83B859D4;
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

__attribute__((alias("__imp__sub_83B859E4"))) PPC_WEAK_FUNC(sub_83B859E4);
PPC_FUNC_IMPL(__imp__sub_83B859E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B859E8"))) PPC_WEAK_FUNC(sub_83B859E8);
PPC_FUNC_IMPL(__imp__sub_83B859E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11884
	ctx.r7.s64 = ctx.r8.s64 + -11884;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11884(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11884);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11884, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B85A10"))) PPC_WEAK_FUNC(sub_83B85A10);
PPC_FUNC_IMPL(__imp__sub_83B85A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18960
	ctx.r3.s64 = ctx.r11.s64 + -18960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85A1C"))) PPC_WEAK_FUNC(sub_83B85A1C);
PPC_FUNC_IMPL(__imp__sub_83B85A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85A20"))) PPC_WEAK_FUNC(sub_83B85A20);
PPC_FUNC_IMPL(__imp__sub_83B85A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18952
	ctx.r3.s64 = ctx.r11.s64 + -18952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85A2C"))) PPC_WEAK_FUNC(sub_83B85A2C);
PPC_FUNC_IMPL(__imp__sub_83B85A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85A30"))) PPC_WEAK_FUNC(sub_83B85A30);
PPC_FUNC_IMPL(__imp__sub_83B85A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85A3C"))) PPC_WEAK_FUNC(sub_83B85A3C);
PPC_FUNC_IMPL(__imp__sub_83B85A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85A40"))) PPC_WEAK_FUNC(sub_83B85A40);
PPC_FUNC_IMPL(__imp__sub_83B85A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18936
	ctx.r3.s64 = ctx.r11.s64 + -18936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85A4C"))) PPC_WEAK_FUNC(sub_83B85A4C);
PPC_FUNC_IMPL(__imp__sub_83B85A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85A50"))) PPC_WEAK_FUNC(sub_83B85A50);
PPC_FUNC_IMPL(__imp__sub_83B85A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18928
	ctx.r3.s64 = ctx.r11.s64 + -18928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85A5C"))) PPC_WEAK_FUNC(sub_83B85A5C);
PPC_FUNC_IMPL(__imp__sub_83B85A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85A60"))) PPC_WEAK_FUNC(sub_83B85A60);
PPC_FUNC_IMPL(__imp__sub_83B85A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85A6C"))) PPC_WEAK_FUNC(sub_83B85A6C);
PPC_FUNC_IMPL(__imp__sub_83B85A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85A70"))) PPC_WEAK_FUNC(sub_83B85A70);
PPC_FUNC_IMPL(__imp__sub_83B85A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18912
	ctx.r3.s64 = ctx.r11.s64 + -18912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B85A7C"))) PPC_WEAK_FUNC(sub_83B85A7C);
PPC_FUNC_IMPL(__imp__sub_83B85A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B85A80"))) PPC_WEAK_FUNC(sub_83B85A80);
PPC_FUNC_IMPL(__imp__sub_83B85A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-18904
	ctx.r3.s64 = ctx.r11.s64 + -18904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

