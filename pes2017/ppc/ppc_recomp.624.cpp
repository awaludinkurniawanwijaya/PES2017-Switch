#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BB9C18"))) PPC_WEAK_FUNC(sub_83BB9C18);
PPC_FUNC_IMPL(__imp__sub_83BB9C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12864
	ctx.r3.s64 = ctx.r11.s64 + -12864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C24"))) PPC_WEAK_FUNC(sub_83BB9C24);
PPC_FUNC_IMPL(__imp__sub_83BB9C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9C28"))) PPC_WEAK_FUNC(sub_83BB9C28);
PPC_FUNC_IMPL(__imp__sub_83BB9C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12856
	ctx.r3.s64 = ctx.r11.s64 + -12856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C34"))) PPC_WEAK_FUNC(sub_83BB9C34);
PPC_FUNC_IMPL(__imp__sub_83BB9C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9C38"))) PPC_WEAK_FUNC(sub_83BB9C38);
PPC_FUNC_IMPL(__imp__sub_83BB9C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C44"))) PPC_WEAK_FUNC(sub_83BB9C44);
PPC_FUNC_IMPL(__imp__sub_83BB9C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9C48"))) PPC_WEAK_FUNC(sub_83BB9C48);
PPC_FUNC_IMPL(__imp__sub_83BB9C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12840
	ctx.r3.s64 = ctx.r11.s64 + -12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C54"))) PPC_WEAK_FUNC(sub_83BB9C54);
PPC_FUNC_IMPL(__imp__sub_83BB9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9C58"))) PPC_WEAK_FUNC(sub_83BB9C58);
PPC_FUNC_IMPL(__imp__sub_83BB9C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C64"))) PPC_WEAK_FUNC(sub_83BB9C64);
PPC_FUNC_IMPL(__imp__sub_83BB9C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9C68"))) PPC_WEAK_FUNC(sub_83BB9C68);
PPC_FUNC_IMPL(__imp__sub_83BB9C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12824
	ctx.r3.s64 = ctx.r11.s64 + -12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C74"))) PPC_WEAK_FUNC(sub_83BB9C74);
PPC_FUNC_IMPL(__imp__sub_83BB9C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9C78"))) PPC_WEAK_FUNC(sub_83BB9C78);
PPC_FUNC_IMPL(__imp__sub_83BB9C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C84"))) PPC_WEAK_FUNC(sub_83BB9C84);
PPC_FUNC_IMPL(__imp__sub_83BB9C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9C88"))) PPC_WEAK_FUNC(sub_83BB9C88);
PPC_FUNC_IMPL(__imp__sub_83BB9C88) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,11976
	ctx.r3.s64 = ctx.r11.s64 + 11976;
	// bl 0x83523120
	ctx.lr = 0x83BB9CA0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12808
	ctx.r3.s64 = ctx.r10.s64 + -12808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9CAC;
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

__attribute__((alias("__imp__sub_83BB9CBC"))) PPC_WEAK_FUNC(sub_83BB9CBC);
PPC_FUNC_IMPL(__imp__sub_83BB9CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9CC0"))) PPC_WEAK_FUNC(sub_83BB9CC0);
PPC_FUNC_IMPL(__imp__sub_83BB9CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11992
	ctx.r7.s64 = ctx.r8.s64 + 11992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9CE8"))) PPC_WEAK_FUNC(sub_83BB9CE8);
PPC_FUNC_IMPL(__imp__sub_83BB9CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-11844
	ctx.r6.s64 = ctx.r7.s64 + -11844;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11916(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11916);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11992);
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
	// std r9,-11844(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11844, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9D30"))) PPC_WEAK_FUNC(sub_83BB9D30);
PPC_FUNC_IMPL(__imp__sub_83BB9D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12792
	ctx.r3.s64 = ctx.r11.s64 + -12792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9D3C"))) PPC_WEAK_FUNC(sub_83BB9D3C);
PPC_FUNC_IMPL(__imp__sub_83BB9D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9D40"))) PPC_WEAK_FUNC(sub_83BB9D40);
PPC_FUNC_IMPL(__imp__sub_83BB9D40) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,12000
	ctx.r3.s64 = ctx.r11.s64 + 12000;
	// bl 0x8259af80
	ctx.lr = 0x83BB9D58;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12776
	ctx.r3.s64 = ctx.r10.s64 + -12776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9D64;
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

__attribute__((alias("__imp__sub_83BB9D74"))) PPC_WEAK_FUNC(sub_83BB9D74);
PPC_FUNC_IMPL(__imp__sub_83BB9D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9D78"))) PPC_WEAK_FUNC(sub_83BB9D78);
PPC_FUNC_IMPL(__imp__sub_83BB9D78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11980
	ctx.r11.s64 = ctx.r8.s64 + 11980;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-11868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11868);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12784
	ctx.r3.s64 = ctx.r6.s64 + -12784;
	// stw r10,11980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9DA8"))) PPC_WEAK_FUNC(sub_83BB9DA8);
PPC_FUNC_IMPL(__imp__sub_83BB9DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9DB4"))) PPC_WEAK_FUNC(sub_83BB9DB4);
PPC_FUNC_IMPL(__imp__sub_83BB9DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9DB8"))) PPC_WEAK_FUNC(sub_83BB9DB8);
PPC_FUNC_IMPL(__imp__sub_83BB9DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12760
	ctx.r3.s64 = ctx.r11.s64 + -12760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9DC4"))) PPC_WEAK_FUNC(sub_83BB9DC4);
PPC_FUNC_IMPL(__imp__sub_83BB9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9DC8"))) PPC_WEAK_FUNC(sub_83BB9DC8);
PPC_FUNC_IMPL(__imp__sub_83BB9DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9DD4"))) PPC_WEAK_FUNC(sub_83BB9DD4);
PPC_FUNC_IMPL(__imp__sub_83BB9DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9DD8"))) PPC_WEAK_FUNC(sub_83BB9DD8);
PPC_FUNC_IMPL(__imp__sub_83BB9DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9DE4"))) PPC_WEAK_FUNC(sub_83BB9DE4);
PPC_FUNC_IMPL(__imp__sub_83BB9DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9DE8"))) PPC_WEAK_FUNC(sub_83BB9DE8);
PPC_FUNC_IMPL(__imp__sub_83BB9DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9DF4"))) PPC_WEAK_FUNC(sub_83BB9DF4);
PPC_FUNC_IMPL(__imp__sub_83BB9DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9DF8"))) PPC_WEAK_FUNC(sub_83BB9DF8);
PPC_FUNC_IMPL(__imp__sub_83BB9DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12728
	ctx.r3.s64 = ctx.r11.s64 + -12728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9E04"))) PPC_WEAK_FUNC(sub_83BB9E04);
PPC_FUNC_IMPL(__imp__sub_83BB9E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9E08"))) PPC_WEAK_FUNC(sub_83BB9E08);
PPC_FUNC_IMPL(__imp__sub_83BB9E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12720
	ctx.r3.s64 = ctx.r11.s64 + -12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9E14"))) PPC_WEAK_FUNC(sub_83BB9E14);
PPC_FUNC_IMPL(__imp__sub_83BB9E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9E18"))) PPC_WEAK_FUNC(sub_83BB9E18);
PPC_FUNC_IMPL(__imp__sub_83BB9E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9E24"))) PPC_WEAK_FUNC(sub_83BB9E24);
PPC_FUNC_IMPL(__imp__sub_83BB9E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9E28"))) PPC_WEAK_FUNC(sub_83BB9E28);
PPC_FUNC_IMPL(__imp__sub_83BB9E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9E34"))) PPC_WEAK_FUNC(sub_83BB9E34);
PPC_FUNC_IMPL(__imp__sub_83BB9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9E38"))) PPC_WEAK_FUNC(sub_83BB9E38);
PPC_FUNC_IMPL(__imp__sub_83BB9E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9E44"))) PPC_WEAK_FUNC(sub_83BB9E44);
PPC_FUNC_IMPL(__imp__sub_83BB9E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9E48"))) PPC_WEAK_FUNC(sub_83BB9E48);
PPC_FUNC_IMPL(__imp__sub_83BB9E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12688
	ctx.r3.s64 = ctx.r11.s64 + -12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9E54"))) PPC_WEAK_FUNC(sub_83BB9E54);
PPC_FUNC_IMPL(__imp__sub_83BB9E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9E58"))) PPC_WEAK_FUNC(sub_83BB9E58);
PPC_FUNC_IMPL(__imp__sub_83BB9E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9E64"))) PPC_WEAK_FUNC(sub_83BB9E64);
PPC_FUNC_IMPL(__imp__sub_83BB9E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9E68"))) PPC_WEAK_FUNC(sub_83BB9E68);
PPC_FUNC_IMPL(__imp__sub_83BB9E68) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,12344
	ctx.r3.s64 = ctx.r11.s64 + 12344;
	// bl 0x83523120
	ctx.lr = 0x83BB9E80;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12672
	ctx.r3.s64 = ctx.r10.s64 + -12672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9E8C;
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

__attribute__((alias("__imp__sub_83BB9E9C"))) PPC_WEAK_FUNC(sub_83BB9E9C);
PPC_FUNC_IMPL(__imp__sub_83BB9E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9EA0"))) PPC_WEAK_FUNC(sub_83BB9EA0);
PPC_FUNC_IMPL(__imp__sub_83BB9EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12360
	ctx.r7.s64 = ctx.r8.s64 + 12360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9EC8"))) PPC_WEAK_FUNC(sub_83BB9EC8);
PPC_FUNC_IMPL(__imp__sub_83BB9EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-11672
	ctx.r6.s64 = ctx.r7.s64 + -11672;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11744(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11744);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12360);
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
	// std r9,-11672(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11672, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9F10"))) PPC_WEAK_FUNC(sub_83BB9F10);
PPC_FUNC_IMPL(__imp__sub_83BB9F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12656
	ctx.r3.s64 = ctx.r11.s64 + -12656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9F1C"))) PPC_WEAK_FUNC(sub_83BB9F1C);
PPC_FUNC_IMPL(__imp__sub_83BB9F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9F20"))) PPC_WEAK_FUNC(sub_83BB9F20);
PPC_FUNC_IMPL(__imp__sub_83BB9F20) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,12368
	ctx.r3.s64 = ctx.r11.s64 + 12368;
	// bl 0x8259af80
	ctx.lr = 0x83BB9F38;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12640
	ctx.r3.s64 = ctx.r10.s64 + -12640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9F44;
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

__attribute__((alias("__imp__sub_83BB9F54"))) PPC_WEAK_FUNC(sub_83BB9F54);
PPC_FUNC_IMPL(__imp__sub_83BB9F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9F58"))) PPC_WEAK_FUNC(sub_83BB9F58);
PPC_FUNC_IMPL(__imp__sub_83BB9F58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12348
	ctx.r11.s64 = ctx.r8.s64 + 12348;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-11696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11696);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12648
	ctx.r3.s64 = ctx.r6.s64 + -12648;
	// stw r10,12348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9F88"))) PPC_WEAK_FUNC(sub_83BB9F88);
PPC_FUNC_IMPL(__imp__sub_83BB9F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12632
	ctx.r3.s64 = ctx.r11.s64 + -12632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9F94"))) PPC_WEAK_FUNC(sub_83BB9F94);
PPC_FUNC_IMPL(__imp__sub_83BB9F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9F98"))) PPC_WEAK_FUNC(sub_83BB9F98);
PPC_FUNC_IMPL(__imp__sub_83BB9F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12624
	ctx.r3.s64 = ctx.r11.s64 + -12624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9FA4"))) PPC_WEAK_FUNC(sub_83BB9FA4);
PPC_FUNC_IMPL(__imp__sub_83BB9FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9FA8"))) PPC_WEAK_FUNC(sub_83BB9FA8);
PPC_FUNC_IMPL(__imp__sub_83BB9FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12616
	ctx.r3.s64 = ctx.r11.s64 + -12616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9FB4"))) PPC_WEAK_FUNC(sub_83BB9FB4);
PPC_FUNC_IMPL(__imp__sub_83BB9FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9FB8"))) PPC_WEAK_FUNC(sub_83BB9FB8);
PPC_FUNC_IMPL(__imp__sub_83BB9FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12608
	ctx.r3.s64 = ctx.r11.s64 + -12608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9FC4"))) PPC_WEAK_FUNC(sub_83BB9FC4);
PPC_FUNC_IMPL(__imp__sub_83BB9FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9FC8"))) PPC_WEAK_FUNC(sub_83BB9FC8);
PPC_FUNC_IMPL(__imp__sub_83BB9FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12600
	ctx.r3.s64 = ctx.r11.s64 + -12600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9FD4"))) PPC_WEAK_FUNC(sub_83BB9FD4);
PPC_FUNC_IMPL(__imp__sub_83BB9FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9FD8"))) PPC_WEAK_FUNC(sub_83BB9FD8);
PPC_FUNC_IMPL(__imp__sub_83BB9FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12592
	ctx.r3.s64 = ctx.r11.s64 + -12592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9FE4"))) PPC_WEAK_FUNC(sub_83BB9FE4);
PPC_FUNC_IMPL(__imp__sub_83BB9FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9FE8"))) PPC_WEAK_FUNC(sub_83BB9FE8);
PPC_FUNC_IMPL(__imp__sub_83BB9FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12584
	ctx.r3.s64 = ctx.r11.s64 + -12584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9FF4"))) PPC_WEAK_FUNC(sub_83BB9FF4);
PPC_FUNC_IMPL(__imp__sub_83BB9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9FF8"))) PPC_WEAK_FUNC(sub_83BB9FF8);
PPC_FUNC_IMPL(__imp__sub_83BB9FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12576
	ctx.r3.s64 = ctx.r11.s64 + -12576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA004"))) PPC_WEAK_FUNC(sub_83BBA004);
PPC_FUNC_IMPL(__imp__sub_83BBA004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA008"))) PPC_WEAK_FUNC(sub_83BBA008);
PPC_FUNC_IMPL(__imp__sub_83BBA008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA014"))) PPC_WEAK_FUNC(sub_83BBA014);
PPC_FUNC_IMPL(__imp__sub_83BBA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA018"))) PPC_WEAK_FUNC(sub_83BBA018);
PPC_FUNC_IMPL(__imp__sub_83BBA018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12560
	ctx.r3.s64 = ctx.r11.s64 + -12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA024"))) PPC_WEAK_FUNC(sub_83BBA024);
PPC_FUNC_IMPL(__imp__sub_83BBA024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA028"))) PPC_WEAK_FUNC(sub_83BBA028);
PPC_FUNC_IMPL(__imp__sub_83BBA028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12552
	ctx.r3.s64 = ctx.r11.s64 + -12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA034"))) PPC_WEAK_FUNC(sub_83BBA034);
PPC_FUNC_IMPL(__imp__sub_83BBA034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA038"))) PPC_WEAK_FUNC(sub_83BBA038);
PPC_FUNC_IMPL(__imp__sub_83BBA038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12544
	ctx.r3.s64 = ctx.r11.s64 + -12544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA044"))) PPC_WEAK_FUNC(sub_83BBA044);
PPC_FUNC_IMPL(__imp__sub_83BBA044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA048"))) PPC_WEAK_FUNC(sub_83BBA048);
PPC_FUNC_IMPL(__imp__sub_83BBA048) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,12712
	ctx.r3.s64 = ctx.r11.s64 + 12712;
	// bl 0x83523120
	ctx.lr = 0x83BBA060;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12536
	ctx.r3.s64 = ctx.r10.s64 + -12536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA06C;
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

__attribute__((alias("__imp__sub_83BBA07C"))) PPC_WEAK_FUNC(sub_83BBA07C);
PPC_FUNC_IMPL(__imp__sub_83BBA07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA080"))) PPC_WEAK_FUNC(sub_83BBA080);
PPC_FUNC_IMPL(__imp__sub_83BBA080) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12728
	ctx.r7.s64 = ctx.r8.s64 + 12728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA0A8"))) PPC_WEAK_FUNC(sub_83BBA0A8);
PPC_FUNC_IMPL(__imp__sub_83BBA0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-11396
	ctx.r6.s64 = ctx.r7.s64 + -11396;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11468(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11468);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12728);
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
	// std r9,-11396(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11396, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA0F0"))) PPC_WEAK_FUNC(sub_83BBA0F0);
PPC_FUNC_IMPL(__imp__sub_83BBA0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12520
	ctx.r3.s64 = ctx.r11.s64 + -12520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA0FC"))) PPC_WEAK_FUNC(sub_83BBA0FC);
PPC_FUNC_IMPL(__imp__sub_83BBA0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA100"))) PPC_WEAK_FUNC(sub_83BBA100);
PPC_FUNC_IMPL(__imp__sub_83BBA100) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,12736
	ctx.r3.s64 = ctx.r11.s64 + 12736;
	// bl 0x8259af80
	ctx.lr = 0x83BBA118;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12504
	ctx.r3.s64 = ctx.r10.s64 + -12504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA124;
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

__attribute__((alias("__imp__sub_83BBA134"))) PPC_WEAK_FUNC(sub_83BBA134);
PPC_FUNC_IMPL(__imp__sub_83BBA134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA138"))) PPC_WEAK_FUNC(sub_83BBA138);
PPC_FUNC_IMPL(__imp__sub_83BBA138) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12716
	ctx.r11.s64 = ctx.r8.s64 + 12716;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-11420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11420);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12512
	ctx.r3.s64 = ctx.r6.s64 + -12512;
	// stw r10,12716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA168"))) PPC_WEAK_FUNC(sub_83BBA168);
PPC_FUNC_IMPL(__imp__sub_83BBA168) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r30,r11,30124
	ctx.r30.s64 = ctx.r11.s64 + 30124;
	// addi r31,r10,-11368
	ctx.r31.s64 = ctx.r10.s64 + -11368;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x8259cc28
	ctx.lr = 0x83BBA19C;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8259cc28
	ctx.lr = 0x83BBA1C4;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// stb r9,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r9.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8259cc28
	ctx.lr = 0x83BBA1EC;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stb r9,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r9.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8259cc28
	ctx.lr = 0x83BBA214;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r9,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r9.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x83BBA23C;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-12496
	ctx.r3.s64 = ctx.r9.s64 + -12496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA248;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_83BBA260"))) PPC_WEAK_FUNC(sub_83BBA260);
PPC_FUNC_IMPL(__imp__sub_83BBA260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA26C"))) PPC_WEAK_FUNC(sub_83BBA26C);
PPC_FUNC_IMPL(__imp__sub_83BBA26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA270"))) PPC_WEAK_FUNC(sub_83BBA270);
PPC_FUNC_IMPL(__imp__sub_83BBA270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12384
	ctx.r3.s64 = ctx.r11.s64 + -12384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA27C"))) PPC_WEAK_FUNC(sub_83BBA27C);
PPC_FUNC_IMPL(__imp__sub_83BBA27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA280"))) PPC_WEAK_FUNC(sub_83BBA280);
PPC_FUNC_IMPL(__imp__sub_83BBA280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12376
	ctx.r3.s64 = ctx.r11.s64 + -12376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA28C"))) PPC_WEAK_FUNC(sub_83BBA28C);
PPC_FUNC_IMPL(__imp__sub_83BBA28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA290"))) PPC_WEAK_FUNC(sub_83BBA290);
PPC_FUNC_IMPL(__imp__sub_83BBA290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12368
	ctx.r3.s64 = ctx.r11.s64 + -12368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA29C"))) PPC_WEAK_FUNC(sub_83BBA29C);
PPC_FUNC_IMPL(__imp__sub_83BBA29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA2A0"))) PPC_WEAK_FUNC(sub_83BBA2A0);
PPC_FUNC_IMPL(__imp__sub_83BBA2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12360
	ctx.r3.s64 = ctx.r11.s64 + -12360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA2AC"))) PPC_WEAK_FUNC(sub_83BBA2AC);
PPC_FUNC_IMPL(__imp__sub_83BBA2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA2B0"))) PPC_WEAK_FUNC(sub_83BBA2B0);
PPC_FUNC_IMPL(__imp__sub_83BBA2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12352
	ctx.r3.s64 = ctx.r11.s64 + -12352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA2BC"))) PPC_WEAK_FUNC(sub_83BBA2BC);
PPC_FUNC_IMPL(__imp__sub_83BBA2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA2C0"))) PPC_WEAK_FUNC(sub_83BBA2C0);
PPC_FUNC_IMPL(__imp__sub_83BBA2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA2CC"))) PPC_WEAK_FUNC(sub_83BBA2CC);
PPC_FUNC_IMPL(__imp__sub_83BBA2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA2D0"))) PPC_WEAK_FUNC(sub_83BBA2D0);
PPC_FUNC_IMPL(__imp__sub_83BBA2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12336
	ctx.r3.s64 = ctx.r11.s64 + -12336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA2DC"))) PPC_WEAK_FUNC(sub_83BBA2DC);
PPC_FUNC_IMPL(__imp__sub_83BBA2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA2E0"))) PPC_WEAK_FUNC(sub_83BBA2E0);
PPC_FUNC_IMPL(__imp__sub_83BBA2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12328
	ctx.r3.s64 = ctx.r11.s64 + -12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA2EC"))) PPC_WEAK_FUNC(sub_83BBA2EC);
PPC_FUNC_IMPL(__imp__sub_83BBA2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA2F0"))) PPC_WEAK_FUNC(sub_83BBA2F0);
PPC_FUNC_IMPL(__imp__sub_83BBA2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12320
	ctx.r3.s64 = ctx.r11.s64 + -12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA2FC"))) PPC_WEAK_FUNC(sub_83BBA2FC);
PPC_FUNC_IMPL(__imp__sub_83BBA2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA300"))) PPC_WEAK_FUNC(sub_83BBA300);
PPC_FUNC_IMPL(__imp__sub_83BBA300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12312
	ctx.r3.s64 = ctx.r11.s64 + -12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA30C"))) PPC_WEAK_FUNC(sub_83BBA30C);
PPC_FUNC_IMPL(__imp__sub_83BBA30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA310"))) PPC_WEAK_FUNC(sub_83BBA310);
PPC_FUNC_IMPL(__imp__sub_83BBA310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA31C"))) PPC_WEAK_FUNC(sub_83BBA31C);
PPC_FUNC_IMPL(__imp__sub_83BBA31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA320"))) PPC_WEAK_FUNC(sub_83BBA320);
PPC_FUNC_IMPL(__imp__sub_83BBA320) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,13080
	ctx.r3.s64 = ctx.r11.s64 + 13080;
	// bl 0x83523120
	ctx.lr = 0x83BBA338;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12296
	ctx.r3.s64 = ctx.r10.s64 + -12296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA344;
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

__attribute__((alias("__imp__sub_83BBA354"))) PPC_WEAK_FUNC(sub_83BBA354);
PPC_FUNC_IMPL(__imp__sub_83BBA354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA358"))) PPC_WEAK_FUNC(sub_83BBA358);
PPC_FUNC_IMPL(__imp__sub_83BBA358) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13096
	ctx.r7.s64 = ctx.r8.s64 + 13096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA380"))) PPC_WEAK_FUNC(sub_83BBA380);
PPC_FUNC_IMPL(__imp__sub_83BBA380) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-11100
	ctx.r6.s64 = ctx.r7.s64 + -11100;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11172(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11172);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13096);
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
	// std r9,-11100(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA3C8"))) PPC_WEAK_FUNC(sub_83BBA3C8);
PPC_FUNC_IMPL(__imp__sub_83BBA3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12280
	ctx.r3.s64 = ctx.r11.s64 + -12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA3D4"))) PPC_WEAK_FUNC(sub_83BBA3D4);
PPC_FUNC_IMPL(__imp__sub_83BBA3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA3D8"))) PPC_WEAK_FUNC(sub_83BBA3D8);
PPC_FUNC_IMPL(__imp__sub_83BBA3D8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,13104
	ctx.r3.s64 = ctx.r11.s64 + 13104;
	// bl 0x8259af80
	ctx.lr = 0x83BBA3F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12264
	ctx.r3.s64 = ctx.r10.s64 + -12264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA3FC;
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

__attribute__((alias("__imp__sub_83BBA40C"))) PPC_WEAK_FUNC(sub_83BBA40C);
PPC_FUNC_IMPL(__imp__sub_83BBA40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA410"))) PPC_WEAK_FUNC(sub_83BBA410);
PPC_FUNC_IMPL(__imp__sub_83BBA410) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13084
	ctx.r11.s64 = ctx.r8.s64 + 13084;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-11124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11124);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12272
	ctx.r3.s64 = ctx.r6.s64 + -12272;
	// stw r10,13084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA440"))) PPC_WEAK_FUNC(sub_83BBA440);
PPC_FUNC_IMPL(__imp__sub_83BBA440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12256
	ctx.r3.s64 = ctx.r11.s64 + -12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA44C"))) PPC_WEAK_FUNC(sub_83BBA44C);
PPC_FUNC_IMPL(__imp__sub_83BBA44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA450"))) PPC_WEAK_FUNC(sub_83BBA450);
PPC_FUNC_IMPL(__imp__sub_83BBA450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12248
	ctx.r3.s64 = ctx.r11.s64 + -12248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA45C"))) PPC_WEAK_FUNC(sub_83BBA45C);
PPC_FUNC_IMPL(__imp__sub_83BBA45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA460"))) PPC_WEAK_FUNC(sub_83BBA460);
PPC_FUNC_IMPL(__imp__sub_83BBA460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12240
	ctx.r3.s64 = ctx.r11.s64 + -12240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA46C"))) PPC_WEAK_FUNC(sub_83BBA46C);
PPC_FUNC_IMPL(__imp__sub_83BBA46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA470"))) PPC_WEAK_FUNC(sub_83BBA470);
PPC_FUNC_IMPL(__imp__sub_83BBA470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12232
	ctx.r3.s64 = ctx.r11.s64 + -12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA47C"))) PPC_WEAK_FUNC(sub_83BBA47C);
PPC_FUNC_IMPL(__imp__sub_83BBA47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA480"))) PPC_WEAK_FUNC(sub_83BBA480);
PPC_FUNC_IMPL(__imp__sub_83BBA480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12224
	ctx.r3.s64 = ctx.r11.s64 + -12224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA48C"))) PPC_WEAK_FUNC(sub_83BBA48C);
PPC_FUNC_IMPL(__imp__sub_83BBA48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA490"))) PPC_WEAK_FUNC(sub_83BBA490);
PPC_FUNC_IMPL(__imp__sub_83BBA490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12216
	ctx.r3.s64 = ctx.r11.s64 + -12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA49C"))) PPC_WEAK_FUNC(sub_83BBA49C);
PPC_FUNC_IMPL(__imp__sub_83BBA49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA4A0"))) PPC_WEAK_FUNC(sub_83BBA4A0);
PPC_FUNC_IMPL(__imp__sub_83BBA4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12208
	ctx.r3.s64 = ctx.r11.s64 + -12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA4AC"))) PPC_WEAK_FUNC(sub_83BBA4AC);
PPC_FUNC_IMPL(__imp__sub_83BBA4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA4B0"))) PPC_WEAK_FUNC(sub_83BBA4B0);
PPC_FUNC_IMPL(__imp__sub_83BBA4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12200
	ctx.r3.s64 = ctx.r11.s64 + -12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA4BC"))) PPC_WEAK_FUNC(sub_83BBA4BC);
PPC_FUNC_IMPL(__imp__sub_83BBA4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA4C0"))) PPC_WEAK_FUNC(sub_83BBA4C0);
PPC_FUNC_IMPL(__imp__sub_83BBA4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12192
	ctx.r3.s64 = ctx.r11.s64 + -12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA4CC"))) PPC_WEAK_FUNC(sub_83BBA4CC);
PPC_FUNC_IMPL(__imp__sub_83BBA4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA4D0"))) PPC_WEAK_FUNC(sub_83BBA4D0);
PPC_FUNC_IMPL(__imp__sub_83BBA4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12184
	ctx.r3.s64 = ctx.r11.s64 + -12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA4DC"))) PPC_WEAK_FUNC(sub_83BBA4DC);
PPC_FUNC_IMPL(__imp__sub_83BBA4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA4E0"))) PPC_WEAK_FUNC(sub_83BBA4E0);
PPC_FUNC_IMPL(__imp__sub_83BBA4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA4EC"))) PPC_WEAK_FUNC(sub_83BBA4EC);
PPC_FUNC_IMPL(__imp__sub_83BBA4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA4F0"))) PPC_WEAK_FUNC(sub_83BBA4F0);
PPC_FUNC_IMPL(__imp__sub_83BBA4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12168
	ctx.r3.s64 = ctx.r11.s64 + -12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA4FC"))) PPC_WEAK_FUNC(sub_83BBA4FC);
PPC_FUNC_IMPL(__imp__sub_83BBA4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA500"))) PPC_WEAK_FUNC(sub_83BBA500);
PPC_FUNC_IMPL(__imp__sub_83BBA500) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,13448
	ctx.r3.s64 = ctx.r11.s64 + 13448;
	// bl 0x83523120
	ctx.lr = 0x83BBA518;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12160
	ctx.r3.s64 = ctx.r10.s64 + -12160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA524;
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

__attribute__((alias("__imp__sub_83BBA534"))) PPC_WEAK_FUNC(sub_83BBA534);
PPC_FUNC_IMPL(__imp__sub_83BBA534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA538"))) PPC_WEAK_FUNC(sub_83BBA538);
PPC_FUNC_IMPL(__imp__sub_83BBA538) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13464
	ctx.r7.s64 = ctx.r8.s64 + 13464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA560"))) PPC_WEAK_FUNC(sub_83BBA560);
PPC_FUNC_IMPL(__imp__sub_83BBA560) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-10920
	ctx.r6.s64 = ctx.r7.s64 + -10920;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10992(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10992);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13464);
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
	// std r9,-10920(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10920, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA5A8"))) PPC_WEAK_FUNC(sub_83BBA5A8);
PPC_FUNC_IMPL(__imp__sub_83BBA5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12144
	ctx.r3.s64 = ctx.r11.s64 + -12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA5B4"))) PPC_WEAK_FUNC(sub_83BBA5B4);
PPC_FUNC_IMPL(__imp__sub_83BBA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA5B8"))) PPC_WEAK_FUNC(sub_83BBA5B8);
PPC_FUNC_IMPL(__imp__sub_83BBA5B8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,13472
	ctx.r3.s64 = ctx.r11.s64 + 13472;
	// bl 0x8259af80
	ctx.lr = 0x83BBA5D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12128
	ctx.r3.s64 = ctx.r10.s64 + -12128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA5DC;
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

__attribute__((alias("__imp__sub_83BBA5EC"))) PPC_WEAK_FUNC(sub_83BBA5EC);
PPC_FUNC_IMPL(__imp__sub_83BBA5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA5F0"))) PPC_WEAK_FUNC(sub_83BBA5F0);
PPC_FUNC_IMPL(__imp__sub_83BBA5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13452
	ctx.r11.s64 = ctx.r8.s64 + 13452;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-10944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10944);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12136
	ctx.r3.s64 = ctx.r6.s64 + -12136;
	// stw r10,13452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA620"))) PPC_WEAK_FUNC(sub_83BBA620);
PPC_FUNC_IMPL(__imp__sub_83BBA620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA62C"))) PPC_WEAK_FUNC(sub_83BBA62C);
PPC_FUNC_IMPL(__imp__sub_83BBA62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA630"))) PPC_WEAK_FUNC(sub_83BBA630);
PPC_FUNC_IMPL(__imp__sub_83BBA630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12112
	ctx.r3.s64 = ctx.r11.s64 + -12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA63C"))) PPC_WEAK_FUNC(sub_83BBA63C);
PPC_FUNC_IMPL(__imp__sub_83BBA63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA640"))) PPC_WEAK_FUNC(sub_83BBA640);
PPC_FUNC_IMPL(__imp__sub_83BBA640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA64C"))) PPC_WEAK_FUNC(sub_83BBA64C);
PPC_FUNC_IMPL(__imp__sub_83BBA64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA650"))) PPC_WEAK_FUNC(sub_83BBA650);
PPC_FUNC_IMPL(__imp__sub_83BBA650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA65C"))) PPC_WEAK_FUNC(sub_83BBA65C);
PPC_FUNC_IMPL(__imp__sub_83BBA65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA660"))) PPC_WEAK_FUNC(sub_83BBA660);
PPC_FUNC_IMPL(__imp__sub_83BBA660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12088
	ctx.r3.s64 = ctx.r11.s64 + -12088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA66C"))) PPC_WEAK_FUNC(sub_83BBA66C);
PPC_FUNC_IMPL(__imp__sub_83BBA66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA670"))) PPC_WEAK_FUNC(sub_83BBA670);
PPC_FUNC_IMPL(__imp__sub_83BBA670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12080
	ctx.r3.s64 = ctx.r11.s64 + -12080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA67C"))) PPC_WEAK_FUNC(sub_83BBA67C);
PPC_FUNC_IMPL(__imp__sub_83BBA67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA680"))) PPC_WEAK_FUNC(sub_83BBA680);
PPC_FUNC_IMPL(__imp__sub_83BBA680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA68C"))) PPC_WEAK_FUNC(sub_83BBA68C);
PPC_FUNC_IMPL(__imp__sub_83BBA68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA690"))) PPC_WEAK_FUNC(sub_83BBA690);
PPC_FUNC_IMPL(__imp__sub_83BBA690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12064
	ctx.r3.s64 = ctx.r11.s64 + -12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA69C"))) PPC_WEAK_FUNC(sub_83BBA69C);
PPC_FUNC_IMPL(__imp__sub_83BBA69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA6A0"))) PPC_WEAK_FUNC(sub_83BBA6A0);
PPC_FUNC_IMPL(__imp__sub_83BBA6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA6AC"))) PPC_WEAK_FUNC(sub_83BBA6AC);
PPC_FUNC_IMPL(__imp__sub_83BBA6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA6B0"))) PPC_WEAK_FUNC(sub_83BBA6B0);
PPC_FUNC_IMPL(__imp__sub_83BBA6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA6BC"))) PPC_WEAK_FUNC(sub_83BBA6BC);
PPC_FUNC_IMPL(__imp__sub_83BBA6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA6C0"))) PPC_WEAK_FUNC(sub_83BBA6C0);
PPC_FUNC_IMPL(__imp__sub_83BBA6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12040
	ctx.r3.s64 = ctx.r11.s64 + -12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA6CC"))) PPC_WEAK_FUNC(sub_83BBA6CC);
PPC_FUNC_IMPL(__imp__sub_83BBA6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA6D0"))) PPC_WEAK_FUNC(sub_83BBA6D0);
PPC_FUNC_IMPL(__imp__sub_83BBA6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA6DC"))) PPC_WEAK_FUNC(sub_83BBA6DC);
PPC_FUNC_IMPL(__imp__sub_83BBA6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA6E0"))) PPC_WEAK_FUNC(sub_83BBA6E0);
PPC_FUNC_IMPL(__imp__sub_83BBA6E0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,13816
	ctx.r3.s64 = ctx.r11.s64 + 13816;
	// bl 0x83523120
	ctx.lr = 0x83BBA6F8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12024
	ctx.r3.s64 = ctx.r10.s64 + -12024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA704;
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

__attribute__((alias("__imp__sub_83BBA714"))) PPC_WEAK_FUNC(sub_83BBA714);
PPC_FUNC_IMPL(__imp__sub_83BBA714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA718"))) PPC_WEAK_FUNC(sub_83BBA718);
PPC_FUNC_IMPL(__imp__sub_83BBA718) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13832
	ctx.r7.s64 = ctx.r8.s64 + 13832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA740"))) PPC_WEAK_FUNC(sub_83BBA740);
PPC_FUNC_IMPL(__imp__sub_83BBA740) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-10784
	ctx.r6.s64 = ctx.r7.s64 + -10784;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10856(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10856);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13832);
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
	// std r9,-10784(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10784, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA788"))) PPC_WEAK_FUNC(sub_83BBA788);
PPC_FUNC_IMPL(__imp__sub_83BBA788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA794"))) PPC_WEAK_FUNC(sub_83BBA794);
PPC_FUNC_IMPL(__imp__sub_83BBA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA798"))) PPC_WEAK_FUNC(sub_83BBA798);
PPC_FUNC_IMPL(__imp__sub_83BBA798) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,13840
	ctx.r3.s64 = ctx.r11.s64 + 13840;
	// bl 0x8259af80
	ctx.lr = 0x83BBA7B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-11992
	ctx.r3.s64 = ctx.r10.s64 + -11992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA7BC;
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

__attribute__((alias("__imp__sub_83BBA7CC"))) PPC_WEAK_FUNC(sub_83BBA7CC);
PPC_FUNC_IMPL(__imp__sub_83BBA7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA7D0"))) PPC_WEAK_FUNC(sub_83BBA7D0);
PPC_FUNC_IMPL(__imp__sub_83BBA7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13820
	ctx.r11.s64 = ctx.r8.s64 + 13820;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-10808(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10808);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12000
	ctx.r3.s64 = ctx.r6.s64 + -12000;
	// stw r10,13820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13820, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA800"))) PPC_WEAK_FUNC(sub_83BBA800);
PPC_FUNC_IMPL(__imp__sub_83BBA800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA80C"))) PPC_WEAK_FUNC(sub_83BBA80C);
PPC_FUNC_IMPL(__imp__sub_83BBA80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA810"))) PPC_WEAK_FUNC(sub_83BBA810);
PPC_FUNC_IMPL(__imp__sub_83BBA810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11976
	ctx.r3.s64 = ctx.r11.s64 + -11976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA81C"))) PPC_WEAK_FUNC(sub_83BBA81C);
PPC_FUNC_IMPL(__imp__sub_83BBA81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA820"))) PPC_WEAK_FUNC(sub_83BBA820);
PPC_FUNC_IMPL(__imp__sub_83BBA820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11968
	ctx.r3.s64 = ctx.r11.s64 + -11968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA82C"))) PPC_WEAK_FUNC(sub_83BBA82C);
PPC_FUNC_IMPL(__imp__sub_83BBA82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA830"))) PPC_WEAK_FUNC(sub_83BBA830);
PPC_FUNC_IMPL(__imp__sub_83BBA830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11960
	ctx.r3.s64 = ctx.r11.s64 + -11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA83C"))) PPC_WEAK_FUNC(sub_83BBA83C);
PPC_FUNC_IMPL(__imp__sub_83BBA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA840"))) PPC_WEAK_FUNC(sub_83BBA840);
PPC_FUNC_IMPL(__imp__sub_83BBA840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11952
	ctx.r3.s64 = ctx.r11.s64 + -11952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA84C"))) PPC_WEAK_FUNC(sub_83BBA84C);
PPC_FUNC_IMPL(__imp__sub_83BBA84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA850"))) PPC_WEAK_FUNC(sub_83BBA850);
PPC_FUNC_IMPL(__imp__sub_83BBA850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11944
	ctx.r3.s64 = ctx.r11.s64 + -11944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA85C"))) PPC_WEAK_FUNC(sub_83BBA85C);
PPC_FUNC_IMPL(__imp__sub_83BBA85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA860"))) PPC_WEAK_FUNC(sub_83BBA860);
PPC_FUNC_IMPL(__imp__sub_83BBA860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA86C"))) PPC_WEAK_FUNC(sub_83BBA86C);
PPC_FUNC_IMPL(__imp__sub_83BBA86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA870"))) PPC_WEAK_FUNC(sub_83BBA870);
PPC_FUNC_IMPL(__imp__sub_83BBA870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11928
	ctx.r3.s64 = ctx.r11.s64 + -11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA87C"))) PPC_WEAK_FUNC(sub_83BBA87C);
PPC_FUNC_IMPL(__imp__sub_83BBA87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA880"))) PPC_WEAK_FUNC(sub_83BBA880);
PPC_FUNC_IMPL(__imp__sub_83BBA880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11920
	ctx.r3.s64 = ctx.r11.s64 + -11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA88C"))) PPC_WEAK_FUNC(sub_83BBA88C);
PPC_FUNC_IMPL(__imp__sub_83BBA88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA890"))) PPC_WEAK_FUNC(sub_83BBA890);
PPC_FUNC_IMPL(__imp__sub_83BBA890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11912
	ctx.r3.s64 = ctx.r11.s64 + -11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA89C"))) PPC_WEAK_FUNC(sub_83BBA89C);
PPC_FUNC_IMPL(__imp__sub_83BBA89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA8A0"))) PPC_WEAK_FUNC(sub_83BBA8A0);
PPC_FUNC_IMPL(__imp__sub_83BBA8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA8AC"))) PPC_WEAK_FUNC(sub_83BBA8AC);
PPC_FUNC_IMPL(__imp__sub_83BBA8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA8B0"))) PPC_WEAK_FUNC(sub_83BBA8B0);
PPC_FUNC_IMPL(__imp__sub_83BBA8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11896
	ctx.r3.s64 = ctx.r11.s64 + -11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA8BC"))) PPC_WEAK_FUNC(sub_83BBA8BC);
PPC_FUNC_IMPL(__imp__sub_83BBA8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA8C0"))) PPC_WEAK_FUNC(sub_83BBA8C0);
PPC_FUNC_IMPL(__imp__sub_83BBA8C0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// bl 0x83523120
	ctx.lr = 0x83BBA8D8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-11888
	ctx.r3.s64 = ctx.r10.s64 + -11888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA8E4;
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

__attribute__((alias("__imp__sub_83BBA8F4"))) PPC_WEAK_FUNC(sub_83BBA8F4);
PPC_FUNC_IMPL(__imp__sub_83BBA8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA8F8"))) PPC_WEAK_FUNC(sub_83BBA8F8);
PPC_FUNC_IMPL(__imp__sub_83BBA8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14200
	ctx.r7.s64 = ctx.r8.s64 + 14200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA920"))) PPC_WEAK_FUNC(sub_83BBA920);
PPC_FUNC_IMPL(__imp__sub_83BBA920) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-10648
	ctx.r6.s64 = ctx.r7.s64 + -10648;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10720(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10720);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14200);
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
	// std r9,-10648(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10648, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBA968"))) PPC_WEAK_FUNC(sub_83BBA968);
PPC_FUNC_IMPL(__imp__sub_83BBA968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA974"))) PPC_WEAK_FUNC(sub_83BBA974);
PPC_FUNC_IMPL(__imp__sub_83BBA974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA978"))) PPC_WEAK_FUNC(sub_83BBA978);
PPC_FUNC_IMPL(__imp__sub_83BBA978) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,14208
	ctx.r3.s64 = ctx.r11.s64 + 14208;
	// bl 0x8259af80
	ctx.lr = 0x83BBA990;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-11856
	ctx.r3.s64 = ctx.r10.s64 + -11856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBA99C;
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

__attribute__((alias("__imp__sub_83BBA9AC"))) PPC_WEAK_FUNC(sub_83BBA9AC);
PPC_FUNC_IMPL(__imp__sub_83BBA9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA9B0"))) PPC_WEAK_FUNC(sub_83BBA9B0);
PPC_FUNC_IMPL(__imp__sub_83BBA9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14188
	ctx.r11.s64 = ctx.r8.s64 + 14188;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-10672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10672);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11864
	ctx.r3.s64 = ctx.r6.s64 + -11864;
	// stw r10,14188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14188, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA9E0"))) PPC_WEAK_FUNC(sub_83BBA9E0);
PPC_FUNC_IMPL(__imp__sub_83BBA9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA9EC"))) PPC_WEAK_FUNC(sub_83BBA9EC);
PPC_FUNC_IMPL(__imp__sub_83BBA9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBA9F0"))) PPC_WEAK_FUNC(sub_83BBA9F0);
PPC_FUNC_IMPL(__imp__sub_83BBA9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11840
	ctx.r3.s64 = ctx.r11.s64 + -11840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBA9FC"))) PPC_WEAK_FUNC(sub_83BBA9FC);
PPC_FUNC_IMPL(__imp__sub_83BBA9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA00"))) PPC_WEAK_FUNC(sub_83BBAA00);
PPC_FUNC_IMPL(__imp__sub_83BBAA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11832
	ctx.r3.s64 = ctx.r11.s64 + -11832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA0C"))) PPC_WEAK_FUNC(sub_83BBAA0C);
PPC_FUNC_IMPL(__imp__sub_83BBAA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA10"))) PPC_WEAK_FUNC(sub_83BBAA10);
PPC_FUNC_IMPL(__imp__sub_83BBAA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA1C"))) PPC_WEAK_FUNC(sub_83BBAA1C);
PPC_FUNC_IMPL(__imp__sub_83BBAA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA20"))) PPC_WEAK_FUNC(sub_83BBAA20);
PPC_FUNC_IMPL(__imp__sub_83BBAA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11816
	ctx.r3.s64 = ctx.r11.s64 + -11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA2C"))) PPC_WEAK_FUNC(sub_83BBAA2C);
PPC_FUNC_IMPL(__imp__sub_83BBAA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA30"))) PPC_WEAK_FUNC(sub_83BBAA30);
PPC_FUNC_IMPL(__imp__sub_83BBAA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11808
	ctx.r3.s64 = ctx.r11.s64 + -11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA3C"))) PPC_WEAK_FUNC(sub_83BBAA3C);
PPC_FUNC_IMPL(__imp__sub_83BBAA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA40"))) PPC_WEAK_FUNC(sub_83BBAA40);
PPC_FUNC_IMPL(__imp__sub_83BBAA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11800
	ctx.r3.s64 = ctx.r11.s64 + -11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA4C"))) PPC_WEAK_FUNC(sub_83BBAA4C);
PPC_FUNC_IMPL(__imp__sub_83BBAA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA50"))) PPC_WEAK_FUNC(sub_83BBAA50);
PPC_FUNC_IMPL(__imp__sub_83BBAA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11792
	ctx.r3.s64 = ctx.r11.s64 + -11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA5C"))) PPC_WEAK_FUNC(sub_83BBAA5C);
PPC_FUNC_IMPL(__imp__sub_83BBAA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA60"))) PPC_WEAK_FUNC(sub_83BBAA60);
PPC_FUNC_IMPL(__imp__sub_83BBAA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11784
	ctx.r3.s64 = ctx.r11.s64 + -11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA6C"))) PPC_WEAK_FUNC(sub_83BBAA6C);
PPC_FUNC_IMPL(__imp__sub_83BBAA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA70"))) PPC_WEAK_FUNC(sub_83BBAA70);
PPC_FUNC_IMPL(__imp__sub_83BBAA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA7C"))) PPC_WEAK_FUNC(sub_83BBAA7C);
PPC_FUNC_IMPL(__imp__sub_83BBAA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA80"))) PPC_WEAK_FUNC(sub_83BBAA80);
PPC_FUNC_IMPL(__imp__sub_83BBAA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11768
	ctx.r3.s64 = ctx.r11.s64 + -11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA8C"))) PPC_WEAK_FUNC(sub_83BBAA8C);
PPC_FUNC_IMPL(__imp__sub_83BBAA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAA90"))) PPC_WEAK_FUNC(sub_83BBAA90);
PPC_FUNC_IMPL(__imp__sub_83BBAA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11760
	ctx.r3.s64 = ctx.r11.s64 + -11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAA9C"))) PPC_WEAK_FUNC(sub_83BBAA9C);
PPC_FUNC_IMPL(__imp__sub_83BBAA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAAA0"))) PPC_WEAK_FUNC(sub_83BBAAA0);
PPC_FUNC_IMPL(__imp__sub_83BBAAA0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,14552
	ctx.r3.s64 = ctx.r11.s64 + 14552;
	// bl 0x83523120
	ctx.lr = 0x83BBAAB8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-11752
	ctx.r3.s64 = ctx.r10.s64 + -11752;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBAAC4;
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

__attribute__((alias("__imp__sub_83BBAAD4"))) PPC_WEAK_FUNC(sub_83BBAAD4);
PPC_FUNC_IMPL(__imp__sub_83BBAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAAD8"))) PPC_WEAK_FUNC(sub_83BBAAD8);
PPC_FUNC_IMPL(__imp__sub_83BBAAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14568
	ctx.r7.s64 = ctx.r8.s64 + 14568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBAB00"))) PPC_WEAK_FUNC(sub_83BBAB00);
PPC_FUNC_IMPL(__imp__sub_83BBAB00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-10512
	ctx.r6.s64 = ctx.r7.s64 + -10512;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10584(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10584);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14568);
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
	// std r9,-10512(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10512, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBAB48"))) PPC_WEAK_FUNC(sub_83BBAB48);
PPC_FUNC_IMPL(__imp__sub_83BBAB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBAB54"))) PPC_WEAK_FUNC(sub_83BBAB54);
PPC_FUNC_IMPL(__imp__sub_83BBAB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAB58"))) PPC_WEAK_FUNC(sub_83BBAB58);
PPC_FUNC_IMPL(__imp__sub_83BBAB58) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,14576
	ctx.r3.s64 = ctx.r11.s64 + 14576;
	// bl 0x8259af80
	ctx.lr = 0x83BBAB70;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-11720
	ctx.r3.s64 = ctx.r10.s64 + -11720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBAB7C;
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

__attribute__((alias("__imp__sub_83BBAB8C"))) PPC_WEAK_FUNC(sub_83BBAB8C);
PPC_FUNC_IMPL(__imp__sub_83BBAB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBAB90"))) PPC_WEAK_FUNC(sub_83BBAB90);
PPC_FUNC_IMPL(__imp__sub_83BBAB90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14556
	ctx.r11.s64 = ctx.r8.s64 + 14556;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-10536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10536);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11728
	ctx.r3.s64 = ctx.r6.s64 + -11728;
	// stw r10,14556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBABC0"))) PPC_WEAK_FUNC(sub_83BBABC0);
PPC_FUNC_IMPL(__imp__sub_83BBABC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-11712
	ctx.r3.s64 = ctx.r11.s64 + -11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

