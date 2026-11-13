#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B81B44"))) PPC_WEAK_FUNC(sub_83B81B44);
PPC_FUNC_IMPL(__imp__sub_83B81B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81B48"))) PPC_WEAK_FUNC(sub_83B81B48);
PPC_FUNC_IMPL(__imp__sub_83B81B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-25032
	ctx.r3.s64 = ctx.r11.s64 + -25032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81B54"))) PPC_WEAK_FUNC(sub_83B81B54);
PPC_FUNC_IMPL(__imp__sub_83B81B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81B58"))) PPC_WEAK_FUNC(sub_83B81B58);
PPC_FUNC_IMPL(__imp__sub_83B81B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-25024
	ctx.r3.s64 = ctx.r11.s64 + -25024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81B64"))) PPC_WEAK_FUNC(sub_83B81B64);
PPC_FUNC_IMPL(__imp__sub_83B81B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81B68"))) PPC_WEAK_FUNC(sub_83B81B68);
PPC_FUNC_IMPL(__imp__sub_83B81B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-25016
	ctx.r3.s64 = ctx.r11.s64 + -25016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81B74"))) PPC_WEAK_FUNC(sub_83B81B74);
PPC_FUNC_IMPL(__imp__sub_83B81B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81B78"))) PPC_WEAK_FUNC(sub_83B81B78);
PPC_FUNC_IMPL(__imp__sub_83B81B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-25008
	ctx.r3.s64 = ctx.r11.s64 + -25008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81B84"))) PPC_WEAK_FUNC(sub_83B81B84);
PPC_FUNC_IMPL(__imp__sub_83B81B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81B88"))) PPC_WEAK_FUNC(sub_83B81B88);
PPC_FUNC_IMPL(__imp__sub_83B81B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-25000
	ctx.r3.s64 = ctx.r11.s64 + -25000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81B94"))) PPC_WEAK_FUNC(sub_83B81B94);
PPC_FUNC_IMPL(__imp__sub_83B81B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81B98"))) PPC_WEAK_FUNC(sub_83B81B98);
PPC_FUNC_IMPL(__imp__sub_83B81B98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13100
	ctx.r7.s64 = ctx.r8.s64 + -13100;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13100);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13100(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13100, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B81BC0"))) PPC_WEAK_FUNC(sub_83B81BC0);
PPC_FUNC_IMPL(__imp__sub_83B81BC0) {
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
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// bl 0x83523120
	ctx.lr = 0x83B81BD8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24992
	ctx.r3.s64 = ctx.r10.s64 + -24992;
	// bl 0x831cdcc8
	ctx.lr = 0x83B81BE4;
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

__attribute__((alias("__imp__sub_83B81BF4"))) PPC_WEAK_FUNC(sub_83B81BF4);
PPC_FUNC_IMPL(__imp__sub_83B81BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81BF8"))) PPC_WEAK_FUNC(sub_83B81BF8);
PPC_FUNC_IMPL(__imp__sub_83B81BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24976
	ctx.r3.s64 = ctx.r11.s64 + -24976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C04"))) PPC_WEAK_FUNC(sub_83B81C04);
PPC_FUNC_IMPL(__imp__sub_83B81C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C08"))) PPC_WEAK_FUNC(sub_83B81C08);
PPC_FUNC_IMPL(__imp__sub_83B81C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24968
	ctx.r3.s64 = ctx.r11.s64 + -24968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C14"))) PPC_WEAK_FUNC(sub_83B81C14);
PPC_FUNC_IMPL(__imp__sub_83B81C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C18"))) PPC_WEAK_FUNC(sub_83B81C18);
PPC_FUNC_IMPL(__imp__sub_83B81C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24960
	ctx.r3.s64 = ctx.r11.s64 + -24960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C24"))) PPC_WEAK_FUNC(sub_83B81C24);
PPC_FUNC_IMPL(__imp__sub_83B81C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C28"))) PPC_WEAK_FUNC(sub_83B81C28);
PPC_FUNC_IMPL(__imp__sub_83B81C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24952
	ctx.r3.s64 = ctx.r11.s64 + -24952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C34"))) PPC_WEAK_FUNC(sub_83B81C34);
PPC_FUNC_IMPL(__imp__sub_83B81C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C38"))) PPC_WEAK_FUNC(sub_83B81C38);
PPC_FUNC_IMPL(__imp__sub_83B81C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24944
	ctx.r3.s64 = ctx.r11.s64 + -24944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C44"))) PPC_WEAK_FUNC(sub_83B81C44);
PPC_FUNC_IMPL(__imp__sub_83B81C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C48"))) PPC_WEAK_FUNC(sub_83B81C48);
PPC_FUNC_IMPL(__imp__sub_83B81C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C54"))) PPC_WEAK_FUNC(sub_83B81C54);
PPC_FUNC_IMPL(__imp__sub_83B81C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C58"))) PPC_WEAK_FUNC(sub_83B81C58);
PPC_FUNC_IMPL(__imp__sub_83B81C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24928
	ctx.r3.s64 = ctx.r11.s64 + -24928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C64"))) PPC_WEAK_FUNC(sub_83B81C64);
PPC_FUNC_IMPL(__imp__sub_83B81C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C68"))) PPC_WEAK_FUNC(sub_83B81C68);
PPC_FUNC_IMPL(__imp__sub_83B81C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24920
	ctx.r3.s64 = ctx.r11.s64 + -24920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C74"))) PPC_WEAK_FUNC(sub_83B81C74);
PPC_FUNC_IMPL(__imp__sub_83B81C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C78"))) PPC_WEAK_FUNC(sub_83B81C78);
PPC_FUNC_IMPL(__imp__sub_83B81C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24912
	ctx.r3.s64 = ctx.r11.s64 + -24912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C84"))) PPC_WEAK_FUNC(sub_83B81C84);
PPC_FUNC_IMPL(__imp__sub_83B81C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C88"))) PPC_WEAK_FUNC(sub_83B81C88);
PPC_FUNC_IMPL(__imp__sub_83B81C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24904
	ctx.r3.s64 = ctx.r11.s64 + -24904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81C94"))) PPC_WEAK_FUNC(sub_83B81C94);
PPC_FUNC_IMPL(__imp__sub_83B81C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81C98"))) PPC_WEAK_FUNC(sub_83B81C98);
PPC_FUNC_IMPL(__imp__sub_83B81C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24896
	ctx.r3.s64 = ctx.r11.s64 + -24896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81CA4"))) PPC_WEAK_FUNC(sub_83B81CA4);
PPC_FUNC_IMPL(__imp__sub_83B81CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81CA8"))) PPC_WEAK_FUNC(sub_83B81CA8);
PPC_FUNC_IMPL(__imp__sub_83B81CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24888
	ctx.r3.s64 = ctx.r11.s64 + -24888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81CB4"))) PPC_WEAK_FUNC(sub_83B81CB4);
PPC_FUNC_IMPL(__imp__sub_83B81CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81CB8"))) PPC_WEAK_FUNC(sub_83B81CB8);
PPC_FUNC_IMPL(__imp__sub_83B81CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13088
	ctx.r7.s64 = ctx.r8.s64 + -13088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13088(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B81CE0"))) PPC_WEAK_FUNC(sub_83B81CE0);
PPC_FUNC_IMPL(__imp__sub_83B81CE0) {
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
	// addi r3,r11,-13092
	ctx.r3.s64 = ctx.r11.s64 + -13092;
	// bl 0x83523120
	ctx.lr = 0x83B81CF8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24880
	ctx.r3.s64 = ctx.r10.s64 + -24880;
	// bl 0x831cdcc8
	ctx.lr = 0x83B81D04;
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

__attribute__((alias("__imp__sub_83B81D14"))) PPC_WEAK_FUNC(sub_83B81D14);
PPC_FUNC_IMPL(__imp__sub_83B81D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D18"))) PPC_WEAK_FUNC(sub_83B81D18);
PPC_FUNC_IMPL(__imp__sub_83B81D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24864
	ctx.r3.s64 = ctx.r11.s64 + -24864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81D24"))) PPC_WEAK_FUNC(sub_83B81D24);
PPC_FUNC_IMPL(__imp__sub_83B81D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D28"))) PPC_WEAK_FUNC(sub_83B81D28);
PPC_FUNC_IMPL(__imp__sub_83B81D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24856
	ctx.r3.s64 = ctx.r11.s64 + -24856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81D34"))) PPC_WEAK_FUNC(sub_83B81D34);
PPC_FUNC_IMPL(__imp__sub_83B81D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D38"))) PPC_WEAK_FUNC(sub_83B81D38);
PPC_FUNC_IMPL(__imp__sub_83B81D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24848
	ctx.r3.s64 = ctx.r11.s64 + -24848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81D44"))) PPC_WEAK_FUNC(sub_83B81D44);
PPC_FUNC_IMPL(__imp__sub_83B81D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D48"))) PPC_WEAK_FUNC(sub_83B81D48);
PPC_FUNC_IMPL(__imp__sub_83B81D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81D54"))) PPC_WEAK_FUNC(sub_83B81D54);
PPC_FUNC_IMPL(__imp__sub_83B81D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D58"))) PPC_WEAK_FUNC(sub_83B81D58);
PPC_FUNC_IMPL(__imp__sub_83B81D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81D64"))) PPC_WEAK_FUNC(sub_83B81D64);
PPC_FUNC_IMPL(__imp__sub_83B81D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D68"))) PPC_WEAK_FUNC(sub_83B81D68);
PPC_FUNC_IMPL(__imp__sub_83B81D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24824
	ctx.r3.s64 = ctx.r11.s64 + -24824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81D74"))) PPC_WEAK_FUNC(sub_83B81D74);
PPC_FUNC_IMPL(__imp__sub_83B81D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D78"))) PPC_WEAK_FUNC(sub_83B81D78);
PPC_FUNC_IMPL(__imp__sub_83B81D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24816
	ctx.r3.s64 = ctx.r11.s64 + -24816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81D84"))) PPC_WEAK_FUNC(sub_83B81D84);
PPC_FUNC_IMPL(__imp__sub_83B81D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D88"))) PPC_WEAK_FUNC(sub_83B81D88);
PPC_FUNC_IMPL(__imp__sub_83B81D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24808
	ctx.r3.s64 = ctx.r11.s64 + -24808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81D94"))) PPC_WEAK_FUNC(sub_83B81D94);
PPC_FUNC_IMPL(__imp__sub_83B81D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81D98"))) PPC_WEAK_FUNC(sub_83B81D98);
PPC_FUNC_IMPL(__imp__sub_83B81D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24800
	ctx.r3.s64 = ctx.r11.s64 + -24800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81DA4"))) PPC_WEAK_FUNC(sub_83B81DA4);
PPC_FUNC_IMPL(__imp__sub_83B81DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81DA8"))) PPC_WEAK_FUNC(sub_83B81DA8);
PPC_FUNC_IMPL(__imp__sub_83B81DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24792
	ctx.r3.s64 = ctx.r11.s64 + -24792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81DB4"))) PPC_WEAK_FUNC(sub_83B81DB4);
PPC_FUNC_IMPL(__imp__sub_83B81DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81DB8"))) PPC_WEAK_FUNC(sub_83B81DB8);
PPC_FUNC_IMPL(__imp__sub_83B81DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24784
	ctx.r3.s64 = ctx.r11.s64 + -24784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81DC4"))) PPC_WEAK_FUNC(sub_83B81DC4);
PPC_FUNC_IMPL(__imp__sub_83B81DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81DC8"))) PPC_WEAK_FUNC(sub_83B81DC8);
PPC_FUNC_IMPL(__imp__sub_83B81DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24776
	ctx.r3.s64 = ctx.r11.s64 + -24776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81DD4"))) PPC_WEAK_FUNC(sub_83B81DD4);
PPC_FUNC_IMPL(__imp__sub_83B81DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81DD8"))) PPC_WEAK_FUNC(sub_83B81DD8);
PPC_FUNC_IMPL(__imp__sub_83B81DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13076
	ctx.r7.s64 = ctx.r8.s64 + -13076;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13076(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13076);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13076(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13076, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B81E00"))) PPC_WEAK_FUNC(sub_83B81E00);
PPC_FUNC_IMPL(__imp__sub_83B81E00) {
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
	// addi r3,r11,-13080
	ctx.r3.s64 = ctx.r11.s64 + -13080;
	// bl 0x83523120
	ctx.lr = 0x83B81E18;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24768
	ctx.r3.s64 = ctx.r10.s64 + -24768;
	// bl 0x831cdcc8
	ctx.lr = 0x83B81E24;
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

__attribute__((alias("__imp__sub_83B81E34"))) PPC_WEAK_FUNC(sub_83B81E34);
PPC_FUNC_IMPL(__imp__sub_83B81E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81E38"))) PPC_WEAK_FUNC(sub_83B81E38);
PPC_FUNC_IMPL(__imp__sub_83B81E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24752
	ctx.r3.s64 = ctx.r11.s64 + -24752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81E44"))) PPC_WEAK_FUNC(sub_83B81E44);
PPC_FUNC_IMPL(__imp__sub_83B81E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81E48"))) PPC_WEAK_FUNC(sub_83B81E48);
PPC_FUNC_IMPL(__imp__sub_83B81E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24744
	ctx.r3.s64 = ctx.r11.s64 + -24744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81E54"))) PPC_WEAK_FUNC(sub_83B81E54);
PPC_FUNC_IMPL(__imp__sub_83B81E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81E58"))) PPC_WEAK_FUNC(sub_83B81E58);
PPC_FUNC_IMPL(__imp__sub_83B81E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24736
	ctx.r3.s64 = ctx.r11.s64 + -24736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81E64"))) PPC_WEAK_FUNC(sub_83B81E64);
PPC_FUNC_IMPL(__imp__sub_83B81E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81E68"))) PPC_WEAK_FUNC(sub_83B81E68);
PPC_FUNC_IMPL(__imp__sub_83B81E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24728
	ctx.r3.s64 = ctx.r11.s64 + -24728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81E74"))) PPC_WEAK_FUNC(sub_83B81E74);
PPC_FUNC_IMPL(__imp__sub_83B81E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81E78"))) PPC_WEAK_FUNC(sub_83B81E78);
PPC_FUNC_IMPL(__imp__sub_83B81E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24720
	ctx.r3.s64 = ctx.r11.s64 + -24720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81E84"))) PPC_WEAK_FUNC(sub_83B81E84);
PPC_FUNC_IMPL(__imp__sub_83B81E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81E88"))) PPC_WEAK_FUNC(sub_83B81E88);
PPC_FUNC_IMPL(__imp__sub_83B81E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24712
	ctx.r3.s64 = ctx.r11.s64 + -24712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81E94"))) PPC_WEAK_FUNC(sub_83B81E94);
PPC_FUNC_IMPL(__imp__sub_83B81E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81E98"))) PPC_WEAK_FUNC(sub_83B81E98);
PPC_FUNC_IMPL(__imp__sub_83B81E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24704
	ctx.r3.s64 = ctx.r11.s64 + -24704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81EA4"))) PPC_WEAK_FUNC(sub_83B81EA4);
PPC_FUNC_IMPL(__imp__sub_83B81EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81EA8"))) PPC_WEAK_FUNC(sub_83B81EA8);
PPC_FUNC_IMPL(__imp__sub_83B81EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24696
	ctx.r3.s64 = ctx.r11.s64 + -24696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81EB4"))) PPC_WEAK_FUNC(sub_83B81EB4);
PPC_FUNC_IMPL(__imp__sub_83B81EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81EB8"))) PPC_WEAK_FUNC(sub_83B81EB8);
PPC_FUNC_IMPL(__imp__sub_83B81EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24688
	ctx.r3.s64 = ctx.r11.s64 + -24688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81EC4"))) PPC_WEAK_FUNC(sub_83B81EC4);
PPC_FUNC_IMPL(__imp__sub_83B81EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81EC8"))) PPC_WEAK_FUNC(sub_83B81EC8);
PPC_FUNC_IMPL(__imp__sub_83B81EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24680
	ctx.r3.s64 = ctx.r11.s64 + -24680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81ED4"))) PPC_WEAK_FUNC(sub_83B81ED4);
PPC_FUNC_IMPL(__imp__sub_83B81ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81ED8"))) PPC_WEAK_FUNC(sub_83B81ED8);
PPC_FUNC_IMPL(__imp__sub_83B81ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24672
	ctx.r3.s64 = ctx.r11.s64 + -24672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81EE4"))) PPC_WEAK_FUNC(sub_83B81EE4);
PPC_FUNC_IMPL(__imp__sub_83B81EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81EE8"))) PPC_WEAK_FUNC(sub_83B81EE8);
PPC_FUNC_IMPL(__imp__sub_83B81EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24664
	ctx.r3.s64 = ctx.r11.s64 + -24664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81EF4"))) PPC_WEAK_FUNC(sub_83B81EF4);
PPC_FUNC_IMPL(__imp__sub_83B81EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81EF8"))) PPC_WEAK_FUNC(sub_83B81EF8);
PPC_FUNC_IMPL(__imp__sub_83B81EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13064
	ctx.r7.s64 = ctx.r8.s64 + -13064;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13064(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13064);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13064(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13064, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B81F20"))) PPC_WEAK_FUNC(sub_83B81F20);
PPC_FUNC_IMPL(__imp__sub_83B81F20) {
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
	// addi r3,r11,-13068
	ctx.r3.s64 = ctx.r11.s64 + -13068;
	// bl 0x83523120
	ctx.lr = 0x83B81F38;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24656
	ctx.r3.s64 = ctx.r10.s64 + -24656;
	// bl 0x831cdcc8
	ctx.lr = 0x83B81F44;
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

__attribute__((alias("__imp__sub_83B81F54"))) PPC_WEAK_FUNC(sub_83B81F54);
PPC_FUNC_IMPL(__imp__sub_83B81F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81F58"))) PPC_WEAK_FUNC(sub_83B81F58);
PPC_FUNC_IMPL(__imp__sub_83B81F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24640
	ctx.r3.s64 = ctx.r11.s64 + -24640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81F64"))) PPC_WEAK_FUNC(sub_83B81F64);
PPC_FUNC_IMPL(__imp__sub_83B81F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81F68"))) PPC_WEAK_FUNC(sub_83B81F68);
PPC_FUNC_IMPL(__imp__sub_83B81F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24632
	ctx.r3.s64 = ctx.r11.s64 + -24632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81F74"))) PPC_WEAK_FUNC(sub_83B81F74);
PPC_FUNC_IMPL(__imp__sub_83B81F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81F78"))) PPC_WEAK_FUNC(sub_83B81F78);
PPC_FUNC_IMPL(__imp__sub_83B81F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24624
	ctx.r3.s64 = ctx.r11.s64 + -24624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81F84"))) PPC_WEAK_FUNC(sub_83B81F84);
PPC_FUNC_IMPL(__imp__sub_83B81F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81F88"))) PPC_WEAK_FUNC(sub_83B81F88);
PPC_FUNC_IMPL(__imp__sub_83B81F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24616
	ctx.r3.s64 = ctx.r11.s64 + -24616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81F94"))) PPC_WEAK_FUNC(sub_83B81F94);
PPC_FUNC_IMPL(__imp__sub_83B81F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81F98"))) PPC_WEAK_FUNC(sub_83B81F98);
PPC_FUNC_IMPL(__imp__sub_83B81F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81FA4"))) PPC_WEAK_FUNC(sub_83B81FA4);
PPC_FUNC_IMPL(__imp__sub_83B81FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81FA8"))) PPC_WEAK_FUNC(sub_83B81FA8);
PPC_FUNC_IMPL(__imp__sub_83B81FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24600
	ctx.r3.s64 = ctx.r11.s64 + -24600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81FB4"))) PPC_WEAK_FUNC(sub_83B81FB4);
PPC_FUNC_IMPL(__imp__sub_83B81FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81FB8"))) PPC_WEAK_FUNC(sub_83B81FB8);
PPC_FUNC_IMPL(__imp__sub_83B81FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24592
	ctx.r3.s64 = ctx.r11.s64 + -24592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81FC4"))) PPC_WEAK_FUNC(sub_83B81FC4);
PPC_FUNC_IMPL(__imp__sub_83B81FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81FC8"))) PPC_WEAK_FUNC(sub_83B81FC8);
PPC_FUNC_IMPL(__imp__sub_83B81FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24584
	ctx.r3.s64 = ctx.r11.s64 + -24584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81FD4"))) PPC_WEAK_FUNC(sub_83B81FD4);
PPC_FUNC_IMPL(__imp__sub_83B81FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81FD8"))) PPC_WEAK_FUNC(sub_83B81FD8);
PPC_FUNC_IMPL(__imp__sub_83B81FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24576
	ctx.r3.s64 = ctx.r11.s64 + -24576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81FE4"))) PPC_WEAK_FUNC(sub_83B81FE4);
PPC_FUNC_IMPL(__imp__sub_83B81FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81FE8"))) PPC_WEAK_FUNC(sub_83B81FE8);
PPC_FUNC_IMPL(__imp__sub_83B81FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24568
	ctx.r3.s64 = ctx.r11.s64 + -24568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B81FF4"))) PPC_WEAK_FUNC(sub_83B81FF4);
PPC_FUNC_IMPL(__imp__sub_83B81FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B81FF8"))) PPC_WEAK_FUNC(sub_83B81FF8);
PPC_FUNC_IMPL(__imp__sub_83B81FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24560
	ctx.r3.s64 = ctx.r11.s64 + -24560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82004"))) PPC_WEAK_FUNC(sub_83B82004);
PPC_FUNC_IMPL(__imp__sub_83B82004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82008"))) PPC_WEAK_FUNC(sub_83B82008);
PPC_FUNC_IMPL(__imp__sub_83B82008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24552
	ctx.r3.s64 = ctx.r11.s64 + -24552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82014"))) PPC_WEAK_FUNC(sub_83B82014);
PPC_FUNC_IMPL(__imp__sub_83B82014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82018"))) PPC_WEAK_FUNC(sub_83B82018);
PPC_FUNC_IMPL(__imp__sub_83B82018) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13052
	ctx.r7.s64 = ctx.r8.s64 + -13052;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13052(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13052);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13052, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B82040"))) PPC_WEAK_FUNC(sub_83B82040);
PPC_FUNC_IMPL(__imp__sub_83B82040) {
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
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// bl 0x83523120
	ctx.lr = 0x83B82058;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24544
	ctx.r3.s64 = ctx.r10.s64 + -24544;
	// bl 0x831cdcc8
	ctx.lr = 0x83B82064;
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

__attribute__((alias("__imp__sub_83B82074"))) PPC_WEAK_FUNC(sub_83B82074);
PPC_FUNC_IMPL(__imp__sub_83B82074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82078"))) PPC_WEAK_FUNC(sub_83B82078);
PPC_FUNC_IMPL(__imp__sub_83B82078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24528
	ctx.r3.s64 = ctx.r11.s64 + -24528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82084"))) PPC_WEAK_FUNC(sub_83B82084);
PPC_FUNC_IMPL(__imp__sub_83B82084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82088"))) PPC_WEAK_FUNC(sub_83B82088);
PPC_FUNC_IMPL(__imp__sub_83B82088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24520
	ctx.r3.s64 = ctx.r11.s64 + -24520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82094"))) PPC_WEAK_FUNC(sub_83B82094);
PPC_FUNC_IMPL(__imp__sub_83B82094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82098"))) PPC_WEAK_FUNC(sub_83B82098);
PPC_FUNC_IMPL(__imp__sub_83B82098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24512
	ctx.r3.s64 = ctx.r11.s64 + -24512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B820A4"))) PPC_WEAK_FUNC(sub_83B820A4);
PPC_FUNC_IMPL(__imp__sub_83B820A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B820A8"))) PPC_WEAK_FUNC(sub_83B820A8);
PPC_FUNC_IMPL(__imp__sub_83B820A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24504
	ctx.r3.s64 = ctx.r11.s64 + -24504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B820B4"))) PPC_WEAK_FUNC(sub_83B820B4);
PPC_FUNC_IMPL(__imp__sub_83B820B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B820B8"))) PPC_WEAK_FUNC(sub_83B820B8);
PPC_FUNC_IMPL(__imp__sub_83B820B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24496
	ctx.r3.s64 = ctx.r11.s64 + -24496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B820C4"))) PPC_WEAK_FUNC(sub_83B820C4);
PPC_FUNC_IMPL(__imp__sub_83B820C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B820C8"))) PPC_WEAK_FUNC(sub_83B820C8);
PPC_FUNC_IMPL(__imp__sub_83B820C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24488
	ctx.r3.s64 = ctx.r11.s64 + -24488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B820D4"))) PPC_WEAK_FUNC(sub_83B820D4);
PPC_FUNC_IMPL(__imp__sub_83B820D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B820D8"))) PPC_WEAK_FUNC(sub_83B820D8);
PPC_FUNC_IMPL(__imp__sub_83B820D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24480
	ctx.r3.s64 = ctx.r11.s64 + -24480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B820E4"))) PPC_WEAK_FUNC(sub_83B820E4);
PPC_FUNC_IMPL(__imp__sub_83B820E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B820E8"))) PPC_WEAK_FUNC(sub_83B820E8);
PPC_FUNC_IMPL(__imp__sub_83B820E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24472
	ctx.r3.s64 = ctx.r11.s64 + -24472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B820F4"))) PPC_WEAK_FUNC(sub_83B820F4);
PPC_FUNC_IMPL(__imp__sub_83B820F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B820F8"))) PPC_WEAK_FUNC(sub_83B820F8);
PPC_FUNC_IMPL(__imp__sub_83B820F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24464
	ctx.r3.s64 = ctx.r11.s64 + -24464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82104"))) PPC_WEAK_FUNC(sub_83B82104);
PPC_FUNC_IMPL(__imp__sub_83B82104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82108"))) PPC_WEAK_FUNC(sub_83B82108);
PPC_FUNC_IMPL(__imp__sub_83B82108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24456
	ctx.r3.s64 = ctx.r11.s64 + -24456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82114"))) PPC_WEAK_FUNC(sub_83B82114);
PPC_FUNC_IMPL(__imp__sub_83B82114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82118"))) PPC_WEAK_FUNC(sub_83B82118);
PPC_FUNC_IMPL(__imp__sub_83B82118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24448
	ctx.r3.s64 = ctx.r11.s64 + -24448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82124"))) PPC_WEAK_FUNC(sub_83B82124);
PPC_FUNC_IMPL(__imp__sub_83B82124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82128"))) PPC_WEAK_FUNC(sub_83B82128);
PPC_FUNC_IMPL(__imp__sub_83B82128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24440
	ctx.r3.s64 = ctx.r11.s64 + -24440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82134"))) PPC_WEAK_FUNC(sub_83B82134);
PPC_FUNC_IMPL(__imp__sub_83B82134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82138"))) PPC_WEAK_FUNC(sub_83B82138);
PPC_FUNC_IMPL(__imp__sub_83B82138) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13040
	ctx.r7.s64 = ctx.r8.s64 + -13040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13040(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B82160"))) PPC_WEAK_FUNC(sub_83B82160);
PPC_FUNC_IMPL(__imp__sub_83B82160) {
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
	// addi r3,r11,-13044
	ctx.r3.s64 = ctx.r11.s64 + -13044;
	// bl 0x83523120
	ctx.lr = 0x83B82178;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24432
	ctx.r3.s64 = ctx.r10.s64 + -24432;
	// bl 0x831cdcc8
	ctx.lr = 0x83B82184;
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

__attribute__((alias("__imp__sub_83B82194"))) PPC_WEAK_FUNC(sub_83B82194);
PPC_FUNC_IMPL(__imp__sub_83B82194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82198"))) PPC_WEAK_FUNC(sub_83B82198);
PPC_FUNC_IMPL(__imp__sub_83B82198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24416
	ctx.r3.s64 = ctx.r11.s64 + -24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B821A4"))) PPC_WEAK_FUNC(sub_83B821A4);
PPC_FUNC_IMPL(__imp__sub_83B821A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B821A8"))) PPC_WEAK_FUNC(sub_83B821A8);
PPC_FUNC_IMPL(__imp__sub_83B821A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24408
	ctx.r3.s64 = ctx.r11.s64 + -24408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B821B4"))) PPC_WEAK_FUNC(sub_83B821B4);
PPC_FUNC_IMPL(__imp__sub_83B821B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B821B8"))) PPC_WEAK_FUNC(sub_83B821B8);
PPC_FUNC_IMPL(__imp__sub_83B821B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24400
	ctx.r3.s64 = ctx.r11.s64 + -24400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B821C4"))) PPC_WEAK_FUNC(sub_83B821C4);
PPC_FUNC_IMPL(__imp__sub_83B821C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B821C8"))) PPC_WEAK_FUNC(sub_83B821C8);
PPC_FUNC_IMPL(__imp__sub_83B821C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24392
	ctx.r3.s64 = ctx.r11.s64 + -24392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B821D4"))) PPC_WEAK_FUNC(sub_83B821D4);
PPC_FUNC_IMPL(__imp__sub_83B821D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B821D8"))) PPC_WEAK_FUNC(sub_83B821D8);
PPC_FUNC_IMPL(__imp__sub_83B821D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24384
	ctx.r3.s64 = ctx.r11.s64 + -24384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B821E4"))) PPC_WEAK_FUNC(sub_83B821E4);
PPC_FUNC_IMPL(__imp__sub_83B821E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B821E8"))) PPC_WEAK_FUNC(sub_83B821E8);
PPC_FUNC_IMPL(__imp__sub_83B821E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24376
	ctx.r3.s64 = ctx.r11.s64 + -24376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B821F4"))) PPC_WEAK_FUNC(sub_83B821F4);
PPC_FUNC_IMPL(__imp__sub_83B821F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B821F8"))) PPC_WEAK_FUNC(sub_83B821F8);
PPC_FUNC_IMPL(__imp__sub_83B821F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24368
	ctx.r3.s64 = ctx.r11.s64 + -24368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82204"))) PPC_WEAK_FUNC(sub_83B82204);
PPC_FUNC_IMPL(__imp__sub_83B82204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82208"))) PPC_WEAK_FUNC(sub_83B82208);
PPC_FUNC_IMPL(__imp__sub_83B82208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24360
	ctx.r3.s64 = ctx.r11.s64 + -24360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82214"))) PPC_WEAK_FUNC(sub_83B82214);
PPC_FUNC_IMPL(__imp__sub_83B82214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82218"))) PPC_WEAK_FUNC(sub_83B82218);
PPC_FUNC_IMPL(__imp__sub_83B82218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82224"))) PPC_WEAK_FUNC(sub_83B82224);
PPC_FUNC_IMPL(__imp__sub_83B82224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82228"))) PPC_WEAK_FUNC(sub_83B82228);
PPC_FUNC_IMPL(__imp__sub_83B82228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24344
	ctx.r3.s64 = ctx.r11.s64 + -24344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82234"))) PPC_WEAK_FUNC(sub_83B82234);
PPC_FUNC_IMPL(__imp__sub_83B82234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82238"))) PPC_WEAK_FUNC(sub_83B82238);
PPC_FUNC_IMPL(__imp__sub_83B82238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24336
	ctx.r3.s64 = ctx.r11.s64 + -24336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82244"))) PPC_WEAK_FUNC(sub_83B82244);
PPC_FUNC_IMPL(__imp__sub_83B82244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82248"))) PPC_WEAK_FUNC(sub_83B82248);
PPC_FUNC_IMPL(__imp__sub_83B82248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24328
	ctx.r3.s64 = ctx.r11.s64 + -24328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82254"))) PPC_WEAK_FUNC(sub_83B82254);
PPC_FUNC_IMPL(__imp__sub_83B82254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82258"))) PPC_WEAK_FUNC(sub_83B82258);
PPC_FUNC_IMPL(__imp__sub_83B82258) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13028
	ctx.r7.s64 = ctx.r8.s64 + -13028;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13028(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13028);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13028(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13028, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B82280"))) PPC_WEAK_FUNC(sub_83B82280);
PPC_FUNC_IMPL(__imp__sub_83B82280) {
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
	// addi r3,r11,-13032
	ctx.r3.s64 = ctx.r11.s64 + -13032;
	// bl 0x83523120
	ctx.lr = 0x83B82298;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24320
	ctx.r3.s64 = ctx.r10.s64 + -24320;
	// bl 0x831cdcc8
	ctx.lr = 0x83B822A4;
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

__attribute__((alias("__imp__sub_83B822B4"))) PPC_WEAK_FUNC(sub_83B822B4);
PPC_FUNC_IMPL(__imp__sub_83B822B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B822B8"))) PPC_WEAK_FUNC(sub_83B822B8);
PPC_FUNC_IMPL(__imp__sub_83B822B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24304
	ctx.r3.s64 = ctx.r11.s64 + -24304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B822C4"))) PPC_WEAK_FUNC(sub_83B822C4);
PPC_FUNC_IMPL(__imp__sub_83B822C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B822C8"))) PPC_WEAK_FUNC(sub_83B822C8);
PPC_FUNC_IMPL(__imp__sub_83B822C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24296
	ctx.r3.s64 = ctx.r11.s64 + -24296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B822D4"))) PPC_WEAK_FUNC(sub_83B822D4);
PPC_FUNC_IMPL(__imp__sub_83B822D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B822D8"))) PPC_WEAK_FUNC(sub_83B822D8);
PPC_FUNC_IMPL(__imp__sub_83B822D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24288
	ctx.r3.s64 = ctx.r11.s64 + -24288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B822E4"))) PPC_WEAK_FUNC(sub_83B822E4);
PPC_FUNC_IMPL(__imp__sub_83B822E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B822E8"))) PPC_WEAK_FUNC(sub_83B822E8);
PPC_FUNC_IMPL(__imp__sub_83B822E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24280
	ctx.r3.s64 = ctx.r11.s64 + -24280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B822F4"))) PPC_WEAK_FUNC(sub_83B822F4);
PPC_FUNC_IMPL(__imp__sub_83B822F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B822F8"))) PPC_WEAK_FUNC(sub_83B822F8);
PPC_FUNC_IMPL(__imp__sub_83B822F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24272
	ctx.r3.s64 = ctx.r11.s64 + -24272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82304"))) PPC_WEAK_FUNC(sub_83B82304);
PPC_FUNC_IMPL(__imp__sub_83B82304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82308"))) PPC_WEAK_FUNC(sub_83B82308);
PPC_FUNC_IMPL(__imp__sub_83B82308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24264
	ctx.r3.s64 = ctx.r11.s64 + -24264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82314"))) PPC_WEAK_FUNC(sub_83B82314);
PPC_FUNC_IMPL(__imp__sub_83B82314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82318"))) PPC_WEAK_FUNC(sub_83B82318);
PPC_FUNC_IMPL(__imp__sub_83B82318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24256
	ctx.r3.s64 = ctx.r11.s64 + -24256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82324"))) PPC_WEAK_FUNC(sub_83B82324);
PPC_FUNC_IMPL(__imp__sub_83B82324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82328"))) PPC_WEAK_FUNC(sub_83B82328);
PPC_FUNC_IMPL(__imp__sub_83B82328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24248
	ctx.r3.s64 = ctx.r11.s64 + -24248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82334"))) PPC_WEAK_FUNC(sub_83B82334);
PPC_FUNC_IMPL(__imp__sub_83B82334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82338"))) PPC_WEAK_FUNC(sub_83B82338);
PPC_FUNC_IMPL(__imp__sub_83B82338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24240
	ctx.r3.s64 = ctx.r11.s64 + -24240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82344"))) PPC_WEAK_FUNC(sub_83B82344);
PPC_FUNC_IMPL(__imp__sub_83B82344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82348"))) PPC_WEAK_FUNC(sub_83B82348);
PPC_FUNC_IMPL(__imp__sub_83B82348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24232
	ctx.r3.s64 = ctx.r11.s64 + -24232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82354"))) PPC_WEAK_FUNC(sub_83B82354);
PPC_FUNC_IMPL(__imp__sub_83B82354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82358"))) PPC_WEAK_FUNC(sub_83B82358);
PPC_FUNC_IMPL(__imp__sub_83B82358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24224
	ctx.r3.s64 = ctx.r11.s64 + -24224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82364"))) PPC_WEAK_FUNC(sub_83B82364);
PPC_FUNC_IMPL(__imp__sub_83B82364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82368"))) PPC_WEAK_FUNC(sub_83B82368);
PPC_FUNC_IMPL(__imp__sub_83B82368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24216
	ctx.r3.s64 = ctx.r11.s64 + -24216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82374"))) PPC_WEAK_FUNC(sub_83B82374);
PPC_FUNC_IMPL(__imp__sub_83B82374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82378"))) PPC_WEAK_FUNC(sub_83B82378);
PPC_FUNC_IMPL(__imp__sub_83B82378) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13016
	ctx.r7.s64 = ctx.r8.s64 + -13016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13016);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13016(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13016, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B823A0"))) PPC_WEAK_FUNC(sub_83B823A0);
PPC_FUNC_IMPL(__imp__sub_83B823A0) {
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
	// addi r3,r11,-13020
	ctx.r3.s64 = ctx.r11.s64 + -13020;
	// bl 0x83523120
	ctx.lr = 0x83B823B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24208
	ctx.r3.s64 = ctx.r10.s64 + -24208;
	// bl 0x831cdcc8
	ctx.lr = 0x83B823C4;
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

__attribute__((alias("__imp__sub_83B823D4"))) PPC_WEAK_FUNC(sub_83B823D4);
PPC_FUNC_IMPL(__imp__sub_83B823D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B823D8"))) PPC_WEAK_FUNC(sub_83B823D8);
PPC_FUNC_IMPL(__imp__sub_83B823D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24192
	ctx.r3.s64 = ctx.r11.s64 + -24192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B823E4"))) PPC_WEAK_FUNC(sub_83B823E4);
PPC_FUNC_IMPL(__imp__sub_83B823E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B823E8"))) PPC_WEAK_FUNC(sub_83B823E8);
PPC_FUNC_IMPL(__imp__sub_83B823E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24184
	ctx.r3.s64 = ctx.r11.s64 + -24184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B823F4"))) PPC_WEAK_FUNC(sub_83B823F4);
PPC_FUNC_IMPL(__imp__sub_83B823F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B823F8"))) PPC_WEAK_FUNC(sub_83B823F8);
PPC_FUNC_IMPL(__imp__sub_83B823F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24176
	ctx.r3.s64 = ctx.r11.s64 + -24176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82404"))) PPC_WEAK_FUNC(sub_83B82404);
PPC_FUNC_IMPL(__imp__sub_83B82404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82408"))) PPC_WEAK_FUNC(sub_83B82408);
PPC_FUNC_IMPL(__imp__sub_83B82408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24168
	ctx.r3.s64 = ctx.r11.s64 + -24168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82414"))) PPC_WEAK_FUNC(sub_83B82414);
PPC_FUNC_IMPL(__imp__sub_83B82414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82418"))) PPC_WEAK_FUNC(sub_83B82418);
PPC_FUNC_IMPL(__imp__sub_83B82418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24160
	ctx.r3.s64 = ctx.r11.s64 + -24160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82424"))) PPC_WEAK_FUNC(sub_83B82424);
PPC_FUNC_IMPL(__imp__sub_83B82424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82428"))) PPC_WEAK_FUNC(sub_83B82428);
PPC_FUNC_IMPL(__imp__sub_83B82428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24152
	ctx.r3.s64 = ctx.r11.s64 + -24152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82434"))) PPC_WEAK_FUNC(sub_83B82434);
PPC_FUNC_IMPL(__imp__sub_83B82434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82438"))) PPC_WEAK_FUNC(sub_83B82438);
PPC_FUNC_IMPL(__imp__sub_83B82438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24144
	ctx.r3.s64 = ctx.r11.s64 + -24144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82444"))) PPC_WEAK_FUNC(sub_83B82444);
PPC_FUNC_IMPL(__imp__sub_83B82444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82448"))) PPC_WEAK_FUNC(sub_83B82448);
PPC_FUNC_IMPL(__imp__sub_83B82448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24136
	ctx.r3.s64 = ctx.r11.s64 + -24136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82454"))) PPC_WEAK_FUNC(sub_83B82454);
PPC_FUNC_IMPL(__imp__sub_83B82454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82458"))) PPC_WEAK_FUNC(sub_83B82458);
PPC_FUNC_IMPL(__imp__sub_83B82458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24128
	ctx.r3.s64 = ctx.r11.s64 + -24128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82464"))) PPC_WEAK_FUNC(sub_83B82464);
PPC_FUNC_IMPL(__imp__sub_83B82464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82468"))) PPC_WEAK_FUNC(sub_83B82468);
PPC_FUNC_IMPL(__imp__sub_83B82468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24120
	ctx.r3.s64 = ctx.r11.s64 + -24120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82474"))) PPC_WEAK_FUNC(sub_83B82474);
PPC_FUNC_IMPL(__imp__sub_83B82474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82478"))) PPC_WEAK_FUNC(sub_83B82478);
PPC_FUNC_IMPL(__imp__sub_83B82478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24112
	ctx.r3.s64 = ctx.r11.s64 + -24112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82484"))) PPC_WEAK_FUNC(sub_83B82484);
PPC_FUNC_IMPL(__imp__sub_83B82484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82488"))) PPC_WEAK_FUNC(sub_83B82488);
PPC_FUNC_IMPL(__imp__sub_83B82488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24104
	ctx.r3.s64 = ctx.r11.s64 + -24104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82494"))) PPC_WEAK_FUNC(sub_83B82494);
PPC_FUNC_IMPL(__imp__sub_83B82494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82498"))) PPC_WEAK_FUNC(sub_83B82498);
PPC_FUNC_IMPL(__imp__sub_83B82498) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13004
	ctx.r7.s64 = ctx.r8.s64 + -13004;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13004(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13004);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13004(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13004, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B824C0"))) PPC_WEAK_FUNC(sub_83B824C0);
PPC_FUNC_IMPL(__imp__sub_83B824C0) {
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
	// addi r3,r11,-13008
	ctx.r3.s64 = ctx.r11.s64 + -13008;
	// bl 0x83523120
	ctx.lr = 0x83B824D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-24096
	ctx.r3.s64 = ctx.r10.s64 + -24096;
	// bl 0x831cdcc8
	ctx.lr = 0x83B824E4;
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

__attribute__((alias("__imp__sub_83B824F4"))) PPC_WEAK_FUNC(sub_83B824F4);
PPC_FUNC_IMPL(__imp__sub_83B824F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B824F8"))) PPC_WEAK_FUNC(sub_83B824F8);
PPC_FUNC_IMPL(__imp__sub_83B824F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24080
	ctx.r3.s64 = ctx.r11.s64 + -24080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82504"))) PPC_WEAK_FUNC(sub_83B82504);
PPC_FUNC_IMPL(__imp__sub_83B82504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82508"))) PPC_WEAK_FUNC(sub_83B82508);
PPC_FUNC_IMPL(__imp__sub_83B82508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24072
	ctx.r3.s64 = ctx.r11.s64 + -24072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82514"))) PPC_WEAK_FUNC(sub_83B82514);
PPC_FUNC_IMPL(__imp__sub_83B82514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82518"))) PPC_WEAK_FUNC(sub_83B82518);
PPC_FUNC_IMPL(__imp__sub_83B82518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24064
	ctx.r3.s64 = ctx.r11.s64 + -24064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82524"))) PPC_WEAK_FUNC(sub_83B82524);
PPC_FUNC_IMPL(__imp__sub_83B82524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82528"))) PPC_WEAK_FUNC(sub_83B82528);
PPC_FUNC_IMPL(__imp__sub_83B82528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24056
	ctx.r3.s64 = ctx.r11.s64 + -24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82534"))) PPC_WEAK_FUNC(sub_83B82534);
PPC_FUNC_IMPL(__imp__sub_83B82534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82538"))) PPC_WEAK_FUNC(sub_83B82538);
PPC_FUNC_IMPL(__imp__sub_83B82538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24048
	ctx.r3.s64 = ctx.r11.s64 + -24048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82544"))) PPC_WEAK_FUNC(sub_83B82544);
PPC_FUNC_IMPL(__imp__sub_83B82544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82548"))) PPC_WEAK_FUNC(sub_83B82548);
PPC_FUNC_IMPL(__imp__sub_83B82548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24040
	ctx.r3.s64 = ctx.r11.s64 + -24040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82554"))) PPC_WEAK_FUNC(sub_83B82554);
PPC_FUNC_IMPL(__imp__sub_83B82554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82558"))) PPC_WEAK_FUNC(sub_83B82558);
PPC_FUNC_IMPL(__imp__sub_83B82558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24032
	ctx.r3.s64 = ctx.r11.s64 + -24032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82564"))) PPC_WEAK_FUNC(sub_83B82564);
PPC_FUNC_IMPL(__imp__sub_83B82564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82568"))) PPC_WEAK_FUNC(sub_83B82568);
PPC_FUNC_IMPL(__imp__sub_83B82568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24024
	ctx.r3.s64 = ctx.r11.s64 + -24024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82574"))) PPC_WEAK_FUNC(sub_83B82574);
PPC_FUNC_IMPL(__imp__sub_83B82574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82578"))) PPC_WEAK_FUNC(sub_83B82578);
PPC_FUNC_IMPL(__imp__sub_83B82578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24016
	ctx.r3.s64 = ctx.r11.s64 + -24016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82584"))) PPC_WEAK_FUNC(sub_83B82584);
PPC_FUNC_IMPL(__imp__sub_83B82584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82588"))) PPC_WEAK_FUNC(sub_83B82588);
PPC_FUNC_IMPL(__imp__sub_83B82588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B82594"))) PPC_WEAK_FUNC(sub_83B82594);
PPC_FUNC_IMPL(__imp__sub_83B82594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B82598"))) PPC_WEAK_FUNC(sub_83B82598);
PPC_FUNC_IMPL(__imp__sub_83B82598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B825A4"))) PPC_WEAK_FUNC(sub_83B825A4);
PPC_FUNC_IMPL(__imp__sub_83B825A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B825A8"))) PPC_WEAK_FUNC(sub_83B825A8);
PPC_FUNC_IMPL(__imp__sub_83B825A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-23992
	ctx.r3.s64 = ctx.r11.s64 + -23992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B825B4"))) PPC_WEAK_FUNC(sub_83B825B4);
PPC_FUNC_IMPL(__imp__sub_83B825B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B825B8"))) PPC_WEAK_FUNC(sub_83B825B8);
PPC_FUNC_IMPL(__imp__sub_83B825B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12992
	ctx.r7.s64 = ctx.r8.s64 + -12992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12992(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B825E0"))) PPC_WEAK_FUNC(sub_83B825E0);
PPC_FUNC_IMPL(__imp__sub_83B825E0) {
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
	// addi r3,r11,-12996
	ctx.r3.s64 = ctx.r11.s64 + -12996;
	// bl 0x83523120
	ctx.lr = 0x83B825F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-23984
	ctx.r3.s64 = ctx.r10.s64 + -23984;
	// bl 0x831cdcc8
	ctx.lr = 0x83B82604;
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

