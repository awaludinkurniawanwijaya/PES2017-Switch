#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C13C64"))) PPC_WEAK_FUNC(sub_83C13C64);
PPC_FUNC_IMPL(__imp__sub_83C13C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13C68"))) PPC_WEAK_FUNC(sub_83C13C68);
PPC_FUNC_IMPL(__imp__sub_83C13C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28944
	ctx.r3.s64 = ctx.r11.s64 + -28944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13C74"))) PPC_WEAK_FUNC(sub_83C13C74);
PPC_FUNC_IMPL(__imp__sub_83C13C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13C78"))) PPC_WEAK_FUNC(sub_83C13C78);
PPC_FUNC_IMPL(__imp__sub_83C13C78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31440
	ctx.r7.s64 = ctx.r8.s64 + 31440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31440);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31440, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C13CA0"))) PPC_WEAK_FUNC(sub_83C13CA0);
PPC_FUNC_IMPL(__imp__sub_83C13CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-9928
	ctx.r6.s64 = ctx.r7.s64 + -9928;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10000(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10000);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31440(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31440);
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
	// std r9,-9928(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9928, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C13CE8"))) PPC_WEAK_FUNC(sub_83C13CE8);
PPC_FUNC_IMPL(__imp__sub_83C13CE8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// bl 0x83523120
	ctx.lr = 0x83C13D00;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-28936
	ctx.r3.s64 = ctx.r10.s64 + -28936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C13D0C;
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

__attribute__((alias("__imp__sub_83C13D1C"))) PPC_WEAK_FUNC(sub_83C13D1C);
PPC_FUNC_IMPL(__imp__sub_83C13D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13D20"))) PPC_WEAK_FUNC(sub_83C13D20);
PPC_FUNC_IMPL(__imp__sub_83C13D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28920
	ctx.r3.s64 = ctx.r11.s64 + -28920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13D2C"))) PPC_WEAK_FUNC(sub_83C13D2C);
PPC_FUNC_IMPL(__imp__sub_83C13D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13D30"))) PPC_WEAK_FUNC(sub_83C13D30);
PPC_FUNC_IMPL(__imp__sub_83C13D30) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,31448
	ctx.r3.s64 = ctx.r11.s64 + 31448;
	// bl 0x8259af80
	ctx.lr = 0x83C13D48;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-28904
	ctx.r3.s64 = ctx.r10.s64 + -28904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C13D54;
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

__attribute__((alias("__imp__sub_83C13D64"))) PPC_WEAK_FUNC(sub_83C13D64);
PPC_FUNC_IMPL(__imp__sub_83C13D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13D68"))) PPC_WEAK_FUNC(sub_83C13D68);
PPC_FUNC_IMPL(__imp__sub_83C13D68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31428
	ctx.r11.s64 = ctx.r8.s64 + 31428;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-9952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28912
	ctx.r3.s64 = ctx.r6.s64 + -28912;
	// stw r10,31428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31428, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13D98"))) PPC_WEAK_FUNC(sub_83C13D98);
PPC_FUNC_IMPL(__imp__sub_83C13D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28896
	ctx.r3.s64 = ctx.r11.s64 + -28896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13DA4"))) PPC_WEAK_FUNC(sub_83C13DA4);
PPC_FUNC_IMPL(__imp__sub_83C13DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13DA8"))) PPC_WEAK_FUNC(sub_83C13DA8);
PPC_FUNC_IMPL(__imp__sub_83C13DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28888
	ctx.r3.s64 = ctx.r11.s64 + -28888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13DB4"))) PPC_WEAK_FUNC(sub_83C13DB4);
PPC_FUNC_IMPL(__imp__sub_83C13DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13DB8"))) PPC_WEAK_FUNC(sub_83C13DB8);
PPC_FUNC_IMPL(__imp__sub_83C13DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28880
	ctx.r3.s64 = ctx.r11.s64 + -28880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13DC4"))) PPC_WEAK_FUNC(sub_83C13DC4);
PPC_FUNC_IMPL(__imp__sub_83C13DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13DC8"))) PPC_WEAK_FUNC(sub_83C13DC8);
PPC_FUNC_IMPL(__imp__sub_83C13DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28872
	ctx.r3.s64 = ctx.r11.s64 + -28872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13DD4"))) PPC_WEAK_FUNC(sub_83C13DD4);
PPC_FUNC_IMPL(__imp__sub_83C13DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13DD8"))) PPC_WEAK_FUNC(sub_83C13DD8);
PPC_FUNC_IMPL(__imp__sub_83C13DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28864
	ctx.r3.s64 = ctx.r11.s64 + -28864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13DE4"))) PPC_WEAK_FUNC(sub_83C13DE4);
PPC_FUNC_IMPL(__imp__sub_83C13DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13DE8"))) PPC_WEAK_FUNC(sub_83C13DE8);
PPC_FUNC_IMPL(__imp__sub_83C13DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28856
	ctx.r3.s64 = ctx.r11.s64 + -28856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13DF4"))) PPC_WEAK_FUNC(sub_83C13DF4);
PPC_FUNC_IMPL(__imp__sub_83C13DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13DF8"))) PPC_WEAK_FUNC(sub_83C13DF8);
PPC_FUNC_IMPL(__imp__sub_83C13DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28848
	ctx.r3.s64 = ctx.r11.s64 + -28848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13E04"))) PPC_WEAK_FUNC(sub_83C13E04);
PPC_FUNC_IMPL(__imp__sub_83C13E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13E08"))) PPC_WEAK_FUNC(sub_83C13E08);
PPC_FUNC_IMPL(__imp__sub_83C13E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28840
	ctx.r3.s64 = ctx.r11.s64 + -28840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13E14"))) PPC_WEAK_FUNC(sub_83C13E14);
PPC_FUNC_IMPL(__imp__sub_83C13E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13E18"))) PPC_WEAK_FUNC(sub_83C13E18);
PPC_FUNC_IMPL(__imp__sub_83C13E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28832
	ctx.r3.s64 = ctx.r11.s64 + -28832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13E24"))) PPC_WEAK_FUNC(sub_83C13E24);
PPC_FUNC_IMPL(__imp__sub_83C13E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13E28"))) PPC_WEAK_FUNC(sub_83C13E28);
PPC_FUNC_IMPL(__imp__sub_83C13E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28824
	ctx.r3.s64 = ctx.r11.s64 + -28824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13E34"))) PPC_WEAK_FUNC(sub_83C13E34);
PPC_FUNC_IMPL(__imp__sub_83C13E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13E38"))) PPC_WEAK_FUNC(sub_83C13E38);
PPC_FUNC_IMPL(__imp__sub_83C13E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28816
	ctx.r3.s64 = ctx.r11.s64 + -28816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13E44"))) PPC_WEAK_FUNC(sub_83C13E44);
PPC_FUNC_IMPL(__imp__sub_83C13E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13E48"))) PPC_WEAK_FUNC(sub_83C13E48);
PPC_FUNC_IMPL(__imp__sub_83C13E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28808
	ctx.r3.s64 = ctx.r11.s64 + -28808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13E54"))) PPC_WEAK_FUNC(sub_83C13E54);
PPC_FUNC_IMPL(__imp__sub_83C13E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13E58"))) PPC_WEAK_FUNC(sub_83C13E58);
PPC_FUNC_IMPL(__imp__sub_83C13E58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31808
	ctx.r7.s64 = ctx.r8.s64 + 31808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31808);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31808(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31808, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C13E80"))) PPC_WEAK_FUNC(sub_83C13E80);
PPC_FUNC_IMPL(__imp__sub_83C13E80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-9800
	ctx.r6.s64 = ctx.r7.s64 + -9800;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31808(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31808);
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
	// std r9,-9800(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9800, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C13EC8"))) PPC_WEAK_FUNC(sub_83C13EC8);
PPC_FUNC_IMPL(__imp__sub_83C13EC8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,31792
	ctx.r3.s64 = ctx.r11.s64 + 31792;
	// bl 0x83523120
	ctx.lr = 0x83C13EE0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-28800
	ctx.r3.s64 = ctx.r10.s64 + -28800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C13EEC;
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

__attribute__((alias("__imp__sub_83C13EFC"))) PPC_WEAK_FUNC(sub_83C13EFC);
PPC_FUNC_IMPL(__imp__sub_83C13EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13F00"))) PPC_WEAK_FUNC(sub_83C13F00);
PPC_FUNC_IMPL(__imp__sub_83C13F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28784
	ctx.r3.s64 = ctx.r11.s64 + -28784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13F0C"))) PPC_WEAK_FUNC(sub_83C13F0C);
PPC_FUNC_IMPL(__imp__sub_83C13F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13F10"))) PPC_WEAK_FUNC(sub_83C13F10);
PPC_FUNC_IMPL(__imp__sub_83C13F10) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,31816
	ctx.r3.s64 = ctx.r11.s64 + 31816;
	// bl 0x8259af80
	ctx.lr = 0x83C13F28;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-28768
	ctx.r3.s64 = ctx.r10.s64 + -28768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C13F34;
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

__attribute__((alias("__imp__sub_83C13F44"))) PPC_WEAK_FUNC(sub_83C13F44);
PPC_FUNC_IMPL(__imp__sub_83C13F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13F48"))) PPC_WEAK_FUNC(sub_83C13F48);
PPC_FUNC_IMPL(__imp__sub_83C13F48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31796
	ctx.r11.s64 = ctx.r8.s64 + 31796;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-9824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28776
	ctx.r3.s64 = ctx.r6.s64 + -28776;
	// stw r10,31796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31796, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13F78"))) PPC_WEAK_FUNC(sub_83C13F78);
PPC_FUNC_IMPL(__imp__sub_83C13F78) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-25480
	ctx.r4.s64 = ctx.r11.s64 + -25480;
	// addi r3,r10,-9776
	ctx.r3.s64 = ctx.r10.s64 + -9776;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C13F9C;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-28760
	ctx.r3.s64 = ctx.r9.s64 + -28760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C13FA8;
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

__attribute__((alias("__imp__sub_83C13FB8"))) PPC_WEAK_FUNC(sub_83C13FB8);
PPC_FUNC_IMPL(__imp__sub_83C13FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28656
	ctx.r3.s64 = ctx.r11.s64 + -28656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13FC4"))) PPC_WEAK_FUNC(sub_83C13FC4);
PPC_FUNC_IMPL(__imp__sub_83C13FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13FC8"))) PPC_WEAK_FUNC(sub_83C13FC8);
PPC_FUNC_IMPL(__imp__sub_83C13FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28648
	ctx.r3.s64 = ctx.r11.s64 + -28648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13FD4"))) PPC_WEAK_FUNC(sub_83C13FD4);
PPC_FUNC_IMPL(__imp__sub_83C13FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13FD8"))) PPC_WEAK_FUNC(sub_83C13FD8);
PPC_FUNC_IMPL(__imp__sub_83C13FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28640
	ctx.r3.s64 = ctx.r11.s64 + -28640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13FE4"))) PPC_WEAK_FUNC(sub_83C13FE4);
PPC_FUNC_IMPL(__imp__sub_83C13FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13FE8"))) PPC_WEAK_FUNC(sub_83C13FE8);
PPC_FUNC_IMPL(__imp__sub_83C13FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28632
	ctx.r3.s64 = ctx.r11.s64 + -28632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C13FF4"))) PPC_WEAK_FUNC(sub_83C13FF4);
PPC_FUNC_IMPL(__imp__sub_83C13FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C13FF8"))) PPC_WEAK_FUNC(sub_83C13FF8);
PPC_FUNC_IMPL(__imp__sub_83C13FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28624
	ctx.r3.s64 = ctx.r11.s64 + -28624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14004"))) PPC_WEAK_FUNC(sub_83C14004);
PPC_FUNC_IMPL(__imp__sub_83C14004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14008"))) PPC_WEAK_FUNC(sub_83C14008);
PPC_FUNC_IMPL(__imp__sub_83C14008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28616
	ctx.r3.s64 = ctx.r11.s64 + -28616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14014"))) PPC_WEAK_FUNC(sub_83C14014);
PPC_FUNC_IMPL(__imp__sub_83C14014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14018"))) PPC_WEAK_FUNC(sub_83C14018);
PPC_FUNC_IMPL(__imp__sub_83C14018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28608
	ctx.r3.s64 = ctx.r11.s64 + -28608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14024"))) PPC_WEAK_FUNC(sub_83C14024);
PPC_FUNC_IMPL(__imp__sub_83C14024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14028"))) PPC_WEAK_FUNC(sub_83C14028);
PPC_FUNC_IMPL(__imp__sub_83C14028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28600
	ctx.r3.s64 = ctx.r11.s64 + -28600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14034"))) PPC_WEAK_FUNC(sub_83C14034);
PPC_FUNC_IMPL(__imp__sub_83C14034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14038"))) PPC_WEAK_FUNC(sub_83C14038);
PPC_FUNC_IMPL(__imp__sub_83C14038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28592
	ctx.r3.s64 = ctx.r11.s64 + -28592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14044"))) PPC_WEAK_FUNC(sub_83C14044);
PPC_FUNC_IMPL(__imp__sub_83C14044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14048"))) PPC_WEAK_FUNC(sub_83C14048);
PPC_FUNC_IMPL(__imp__sub_83C14048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28584
	ctx.r3.s64 = ctx.r11.s64 + -28584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14054"))) PPC_WEAK_FUNC(sub_83C14054);
PPC_FUNC_IMPL(__imp__sub_83C14054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14058"))) PPC_WEAK_FUNC(sub_83C14058);
PPC_FUNC_IMPL(__imp__sub_83C14058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28576
	ctx.r3.s64 = ctx.r11.s64 + -28576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14064"))) PPC_WEAK_FUNC(sub_83C14064);
PPC_FUNC_IMPL(__imp__sub_83C14064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14068"))) PPC_WEAK_FUNC(sub_83C14068);
PPC_FUNC_IMPL(__imp__sub_83C14068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28568
	ctx.r3.s64 = ctx.r11.s64 + -28568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14074"))) PPC_WEAK_FUNC(sub_83C14074);
PPC_FUNC_IMPL(__imp__sub_83C14074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14078"))) PPC_WEAK_FUNC(sub_83C14078);
PPC_FUNC_IMPL(__imp__sub_83C14078) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-25296
	ctx.r4.s64 = ctx.r11.s64 + -25296;
	// addi r3,r10,-9644
	ctx.r3.s64 = ctx.r10.s64 + -9644;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C1409C;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-28544
	ctx.r3.s64 = ctx.r9.s64 + -28544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C140A8;
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

__attribute__((alias("__imp__sub_83C140B8"))) PPC_WEAK_FUNC(sub_83C140B8);
PPC_FUNC_IMPL(__imp__sub_83C140B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32164
	ctx.r7.s64 = ctx.r8.s64 + 32164;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32164(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32164);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32164, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C140E0"))) PPC_WEAK_FUNC(sub_83C140E0);
PPC_FUNC_IMPL(__imp__sub_83C140E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-9616
	ctx.r6.s64 = ctx.r7.s64 + -9616;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9716(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9716);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32164(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32164);
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
	// std r9,-9616(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9616, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14128"))) PPC_WEAK_FUNC(sub_83C14128);
PPC_FUNC_IMPL(__imp__sub_83C14128) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,32160
	ctx.r3.s64 = ctx.r11.s64 + 32160;
	// bl 0x83523120
	ctx.lr = 0x83C14140;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-28560
	ctx.r3.s64 = ctx.r10.s64 + -28560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1414C;
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

__attribute__((alias("__imp__sub_83C1415C"))) PPC_WEAK_FUNC(sub_83C1415C);
PPC_FUNC_IMPL(__imp__sub_83C1415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14160"))) PPC_WEAK_FUNC(sub_83C14160);
PPC_FUNC_IMPL(__imp__sub_83C14160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28440
	ctx.r3.s64 = ctx.r11.s64 + -28440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1416C"))) PPC_WEAK_FUNC(sub_83C1416C);
PPC_FUNC_IMPL(__imp__sub_83C1416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14170"))) PPC_WEAK_FUNC(sub_83C14170);
PPC_FUNC_IMPL(__imp__sub_83C14170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28432
	ctx.r3.s64 = ctx.r11.s64 + -28432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1417C"))) PPC_WEAK_FUNC(sub_83C1417C);
PPC_FUNC_IMPL(__imp__sub_83C1417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14180"))) PPC_WEAK_FUNC(sub_83C14180);
PPC_FUNC_IMPL(__imp__sub_83C14180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28424
	ctx.r3.s64 = ctx.r11.s64 + -28424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1418C"))) PPC_WEAK_FUNC(sub_83C1418C);
PPC_FUNC_IMPL(__imp__sub_83C1418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14190"))) PPC_WEAK_FUNC(sub_83C14190);
PPC_FUNC_IMPL(__imp__sub_83C14190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28416
	ctx.r3.s64 = ctx.r11.s64 + -28416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1419C"))) PPC_WEAK_FUNC(sub_83C1419C);
PPC_FUNC_IMPL(__imp__sub_83C1419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C141A0"))) PPC_WEAK_FUNC(sub_83C141A0);
PPC_FUNC_IMPL(__imp__sub_83C141A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28408
	ctx.r3.s64 = ctx.r11.s64 + -28408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C141AC"))) PPC_WEAK_FUNC(sub_83C141AC);
PPC_FUNC_IMPL(__imp__sub_83C141AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C141B0"))) PPC_WEAK_FUNC(sub_83C141B0);
PPC_FUNC_IMPL(__imp__sub_83C141B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28400
	ctx.r3.s64 = ctx.r11.s64 + -28400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C141BC"))) PPC_WEAK_FUNC(sub_83C141BC);
PPC_FUNC_IMPL(__imp__sub_83C141BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C141C0"))) PPC_WEAK_FUNC(sub_83C141C0);
PPC_FUNC_IMPL(__imp__sub_83C141C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28392
	ctx.r3.s64 = ctx.r11.s64 + -28392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C141CC"))) PPC_WEAK_FUNC(sub_83C141CC);
PPC_FUNC_IMPL(__imp__sub_83C141CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C141D0"))) PPC_WEAK_FUNC(sub_83C141D0);
PPC_FUNC_IMPL(__imp__sub_83C141D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28384
	ctx.r3.s64 = ctx.r11.s64 + -28384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C141DC"))) PPC_WEAK_FUNC(sub_83C141DC);
PPC_FUNC_IMPL(__imp__sub_83C141DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C141E0"))) PPC_WEAK_FUNC(sub_83C141E0);
PPC_FUNC_IMPL(__imp__sub_83C141E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28376
	ctx.r3.s64 = ctx.r11.s64 + -28376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C141EC"))) PPC_WEAK_FUNC(sub_83C141EC);
PPC_FUNC_IMPL(__imp__sub_83C141EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C141F0"))) PPC_WEAK_FUNC(sub_83C141F0);
PPC_FUNC_IMPL(__imp__sub_83C141F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28368
	ctx.r3.s64 = ctx.r11.s64 + -28368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C141FC"))) PPC_WEAK_FUNC(sub_83C141FC);
PPC_FUNC_IMPL(__imp__sub_83C141FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14200"))) PPC_WEAK_FUNC(sub_83C14200);
PPC_FUNC_IMPL(__imp__sub_83C14200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28360
	ctx.r3.s64 = ctx.r11.s64 + -28360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1420C"))) PPC_WEAK_FUNC(sub_83C1420C);
PPC_FUNC_IMPL(__imp__sub_83C1420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14210"))) PPC_WEAK_FUNC(sub_83C14210);
PPC_FUNC_IMPL(__imp__sub_83C14210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28352
	ctx.r3.s64 = ctx.r11.s64 + -28352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1421C"))) PPC_WEAK_FUNC(sub_83C1421C);
PPC_FUNC_IMPL(__imp__sub_83C1421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14220"))) PPC_WEAK_FUNC(sub_83C14220);
PPC_FUNC_IMPL(__imp__sub_83C14220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28344
	ctx.r3.s64 = ctx.r11.s64 + -28344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1422C"))) PPC_WEAK_FUNC(sub_83C1422C);
PPC_FUNC_IMPL(__imp__sub_83C1422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14230"))) PPC_WEAK_FUNC(sub_83C14230);
PPC_FUNC_IMPL(__imp__sub_83C14230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28336
	ctx.r3.s64 = ctx.r11.s64 + -28336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1423C"))) PPC_WEAK_FUNC(sub_83C1423C);
PPC_FUNC_IMPL(__imp__sub_83C1423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14240"))) PPC_WEAK_FUNC(sub_83C14240);
PPC_FUNC_IMPL(__imp__sub_83C14240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28328
	ctx.r3.s64 = ctx.r11.s64 + -28328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1424C"))) PPC_WEAK_FUNC(sub_83C1424C);
PPC_FUNC_IMPL(__imp__sub_83C1424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14250"))) PPC_WEAK_FUNC(sub_83C14250);
PPC_FUNC_IMPL(__imp__sub_83C14250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28320
	ctx.r3.s64 = ctx.r11.s64 + -28320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1425C"))) PPC_WEAK_FUNC(sub_83C1425C);
PPC_FUNC_IMPL(__imp__sub_83C1425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14260"))) PPC_WEAK_FUNC(sub_83C14260);
PPC_FUNC_IMPL(__imp__sub_83C14260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28312
	ctx.r3.s64 = ctx.r11.s64 + -28312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1426C"))) PPC_WEAK_FUNC(sub_83C1426C);
PPC_FUNC_IMPL(__imp__sub_83C1426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14270"))) PPC_WEAK_FUNC(sub_83C14270);
PPC_FUNC_IMPL(__imp__sub_83C14270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28304
	ctx.r3.s64 = ctx.r11.s64 + -28304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1427C"))) PPC_WEAK_FUNC(sub_83C1427C);
PPC_FUNC_IMPL(__imp__sub_83C1427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14280"))) PPC_WEAK_FUNC(sub_83C14280);
PPC_FUNC_IMPL(__imp__sub_83C14280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28296
	ctx.r3.s64 = ctx.r11.s64 + -28296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1428C"))) PPC_WEAK_FUNC(sub_83C1428C);
PPC_FUNC_IMPL(__imp__sub_83C1428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14290"))) PPC_WEAK_FUNC(sub_83C14290);
PPC_FUNC_IMPL(__imp__sub_83C14290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28288
	ctx.r3.s64 = ctx.r11.s64 + -28288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1429C"))) PPC_WEAK_FUNC(sub_83C1429C);
PPC_FUNC_IMPL(__imp__sub_83C1429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C142A0"))) PPC_WEAK_FUNC(sub_83C142A0);
PPC_FUNC_IMPL(__imp__sub_83C142A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28280
	ctx.r3.s64 = ctx.r11.s64 + -28280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C142AC"))) PPC_WEAK_FUNC(sub_83C142AC);
PPC_FUNC_IMPL(__imp__sub_83C142AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C142B0"))) PPC_WEAK_FUNC(sub_83C142B0);
PPC_FUNC_IMPL(__imp__sub_83C142B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28272
	ctx.r3.s64 = ctx.r11.s64 + -28272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C142BC"))) PPC_WEAK_FUNC(sub_83C142BC);
PPC_FUNC_IMPL(__imp__sub_83C142BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C142C0"))) PPC_WEAK_FUNC(sub_83C142C0);
PPC_FUNC_IMPL(__imp__sub_83C142C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28264
	ctx.r3.s64 = ctx.r11.s64 + -28264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C142CC"))) PPC_WEAK_FUNC(sub_83C142CC);
PPC_FUNC_IMPL(__imp__sub_83C142CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C142D0"))) PPC_WEAK_FUNC(sub_83C142D0);
PPC_FUNC_IMPL(__imp__sub_83C142D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28256
	ctx.r3.s64 = ctx.r11.s64 + -28256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C142DC"))) PPC_WEAK_FUNC(sub_83C142DC);
PPC_FUNC_IMPL(__imp__sub_83C142DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C142E0"))) PPC_WEAK_FUNC(sub_83C142E0);
PPC_FUNC_IMPL(__imp__sub_83C142E0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// bl 0x83523120
	ctx.lr = 0x83C142F8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-28248
	ctx.r3.s64 = ctx.r10.s64 + -28248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C14304;
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

__attribute__((alias("__imp__sub_83C14314"))) PPC_WEAK_FUNC(sub_83C14314);
PPC_FUNC_IMPL(__imp__sub_83C14314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14318"))) PPC_WEAK_FUNC(sub_83C14318);
PPC_FUNC_IMPL(__imp__sub_83C14318) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32192
	ctx.r7.s64 = ctx.r8.s64 + 32192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14340"))) PPC_WEAK_FUNC(sub_83C14340);
PPC_FUNC_IMPL(__imp__sub_83C14340) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-9388
	ctx.r6.s64 = ctx.r7.s64 + -9388;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32192);
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
	// std r9,-9388(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9388, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14388"))) PPC_WEAK_FUNC(sub_83C14388);
PPC_FUNC_IMPL(__imp__sub_83C14388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14394"))) PPC_WEAK_FUNC(sub_83C14394);
PPC_FUNC_IMPL(__imp__sub_83C14394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14398"))) PPC_WEAK_FUNC(sub_83C14398);
PPC_FUNC_IMPL(__imp__sub_83C14398) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,32200
	ctx.r3.s64 = ctx.r11.s64 + 32200;
	// bl 0x8259af80
	ctx.lr = 0x83C143B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-28216
	ctx.r3.s64 = ctx.r10.s64 + -28216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C143BC;
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

__attribute__((alias("__imp__sub_83C143CC"))) PPC_WEAK_FUNC(sub_83C143CC);
PPC_FUNC_IMPL(__imp__sub_83C143CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C143D0"))) PPC_WEAK_FUNC(sub_83C143D0);
PPC_FUNC_IMPL(__imp__sub_83C143D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32180
	ctx.r11.s64 = ctx.r8.s64 + 32180;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-9412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9412);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28224
	ctx.r3.s64 = ctx.r6.s64 + -28224;
	// stw r10,32180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32180, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14400"))) PPC_WEAK_FUNC(sub_83C14400);
PPC_FUNC_IMPL(__imp__sub_83C14400) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-24716
	ctx.r4.s64 = ctx.r11.s64 + -24716;
	// addi r3,r10,-9364
	ctx.r3.s64 = ctx.r10.s64 + -9364;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C14424;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-28208
	ctx.r3.s64 = ctx.r9.s64 + -28208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C14430;
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

__attribute__((alias("__imp__sub_83C14440"))) PPC_WEAK_FUNC(sub_83C14440);
PPC_FUNC_IMPL(__imp__sub_83C14440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28104
	ctx.r3.s64 = ctx.r11.s64 + -28104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1444C"))) PPC_WEAK_FUNC(sub_83C1444C);
PPC_FUNC_IMPL(__imp__sub_83C1444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14450"))) PPC_WEAK_FUNC(sub_83C14450);
PPC_FUNC_IMPL(__imp__sub_83C14450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28096
	ctx.r3.s64 = ctx.r11.s64 + -28096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1445C"))) PPC_WEAK_FUNC(sub_83C1445C);
PPC_FUNC_IMPL(__imp__sub_83C1445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14460"))) PPC_WEAK_FUNC(sub_83C14460);
PPC_FUNC_IMPL(__imp__sub_83C14460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28088
	ctx.r3.s64 = ctx.r11.s64 + -28088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1446C"))) PPC_WEAK_FUNC(sub_83C1446C);
PPC_FUNC_IMPL(__imp__sub_83C1446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14470"))) PPC_WEAK_FUNC(sub_83C14470);
PPC_FUNC_IMPL(__imp__sub_83C14470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28080
	ctx.r3.s64 = ctx.r11.s64 + -28080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1447C"))) PPC_WEAK_FUNC(sub_83C1447C);
PPC_FUNC_IMPL(__imp__sub_83C1447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14480"))) PPC_WEAK_FUNC(sub_83C14480);
PPC_FUNC_IMPL(__imp__sub_83C14480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28072
	ctx.r3.s64 = ctx.r11.s64 + -28072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1448C"))) PPC_WEAK_FUNC(sub_83C1448C);
PPC_FUNC_IMPL(__imp__sub_83C1448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14490"))) PPC_WEAK_FUNC(sub_83C14490);
PPC_FUNC_IMPL(__imp__sub_83C14490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28064
	ctx.r3.s64 = ctx.r11.s64 + -28064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1449C"))) PPC_WEAK_FUNC(sub_83C1449C);
PPC_FUNC_IMPL(__imp__sub_83C1449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C144A0"))) PPC_WEAK_FUNC(sub_83C144A0);
PPC_FUNC_IMPL(__imp__sub_83C144A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28056
	ctx.r3.s64 = ctx.r11.s64 + -28056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C144AC"))) PPC_WEAK_FUNC(sub_83C144AC);
PPC_FUNC_IMPL(__imp__sub_83C144AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C144B0"))) PPC_WEAK_FUNC(sub_83C144B0);
PPC_FUNC_IMPL(__imp__sub_83C144B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28048
	ctx.r3.s64 = ctx.r11.s64 + -28048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C144BC"))) PPC_WEAK_FUNC(sub_83C144BC);
PPC_FUNC_IMPL(__imp__sub_83C144BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C144C0"))) PPC_WEAK_FUNC(sub_83C144C0);
PPC_FUNC_IMPL(__imp__sub_83C144C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28040
	ctx.r3.s64 = ctx.r11.s64 + -28040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C144CC"))) PPC_WEAK_FUNC(sub_83C144CC);
PPC_FUNC_IMPL(__imp__sub_83C144CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C144D0"))) PPC_WEAK_FUNC(sub_83C144D0);
PPC_FUNC_IMPL(__imp__sub_83C144D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28032
	ctx.r3.s64 = ctx.r11.s64 + -28032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C144DC"))) PPC_WEAK_FUNC(sub_83C144DC);
PPC_FUNC_IMPL(__imp__sub_83C144DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C144E0"))) PPC_WEAK_FUNC(sub_83C144E0);
PPC_FUNC_IMPL(__imp__sub_83C144E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28024
	ctx.r3.s64 = ctx.r11.s64 + -28024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C144EC"))) PPC_WEAK_FUNC(sub_83C144EC);
PPC_FUNC_IMPL(__imp__sub_83C144EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C144F0"))) PPC_WEAK_FUNC(sub_83C144F0);
PPC_FUNC_IMPL(__imp__sub_83C144F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-28016
	ctx.r3.s64 = ctx.r11.s64 + -28016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C144FC"))) PPC_WEAK_FUNC(sub_83C144FC);
PPC_FUNC_IMPL(__imp__sub_83C144FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14500"))) PPC_WEAK_FUNC(sub_83C14500);
PPC_FUNC_IMPL(__imp__sub_83C14500) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-24520
	ctx.r4.s64 = ctx.r11.s64 + -24520;
	// addi r3,r10,-9232
	ctx.r3.s64 = ctx.r10.s64 + -9232;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C14524;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-27992
	ctx.r3.s64 = ctx.r9.s64 + -27992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C14530;
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

__attribute__((alias("__imp__sub_83C14540"))) PPC_WEAK_FUNC(sub_83C14540);
PPC_FUNC_IMPL(__imp__sub_83C14540) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32548
	ctx.r7.s64 = ctx.r8.s64 + 32548;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32548(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32548);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32548, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14568"))) PPC_WEAK_FUNC(sub_83C14568);
PPC_FUNC_IMPL(__imp__sub_83C14568) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-9204
	ctx.r6.s64 = ctx.r7.s64 + -9204;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32548(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32548);
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
	// std r9,-9204(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9204, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C145B0"))) PPC_WEAK_FUNC(sub_83C145B0);
PPC_FUNC_IMPL(__imp__sub_83C145B0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,32544
	ctx.r3.s64 = ctx.r11.s64 + 32544;
	// bl 0x83523120
	ctx.lr = 0x83C145C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-28008
	ctx.r3.s64 = ctx.r10.s64 + -28008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C145D4;
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

__attribute__((alias("__imp__sub_83C145E4"))) PPC_WEAK_FUNC(sub_83C145E4);
PPC_FUNC_IMPL(__imp__sub_83C145E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C145E8"))) PPC_WEAK_FUNC(sub_83C145E8);
PPC_FUNC_IMPL(__imp__sub_83C145E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27888
	ctx.r3.s64 = ctx.r11.s64 + -27888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C145F4"))) PPC_WEAK_FUNC(sub_83C145F4);
PPC_FUNC_IMPL(__imp__sub_83C145F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C145F8"))) PPC_WEAK_FUNC(sub_83C145F8);
PPC_FUNC_IMPL(__imp__sub_83C145F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27880
	ctx.r3.s64 = ctx.r11.s64 + -27880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14604"))) PPC_WEAK_FUNC(sub_83C14604);
PPC_FUNC_IMPL(__imp__sub_83C14604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14608"))) PPC_WEAK_FUNC(sub_83C14608);
PPC_FUNC_IMPL(__imp__sub_83C14608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27872
	ctx.r3.s64 = ctx.r11.s64 + -27872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14614"))) PPC_WEAK_FUNC(sub_83C14614);
PPC_FUNC_IMPL(__imp__sub_83C14614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14618"))) PPC_WEAK_FUNC(sub_83C14618);
PPC_FUNC_IMPL(__imp__sub_83C14618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27864
	ctx.r3.s64 = ctx.r11.s64 + -27864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14624"))) PPC_WEAK_FUNC(sub_83C14624);
PPC_FUNC_IMPL(__imp__sub_83C14624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14628"))) PPC_WEAK_FUNC(sub_83C14628);
PPC_FUNC_IMPL(__imp__sub_83C14628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27856
	ctx.r3.s64 = ctx.r11.s64 + -27856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14634"))) PPC_WEAK_FUNC(sub_83C14634);
PPC_FUNC_IMPL(__imp__sub_83C14634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14638"))) PPC_WEAK_FUNC(sub_83C14638);
PPC_FUNC_IMPL(__imp__sub_83C14638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27848
	ctx.r3.s64 = ctx.r11.s64 + -27848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14644"))) PPC_WEAK_FUNC(sub_83C14644);
PPC_FUNC_IMPL(__imp__sub_83C14644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14648"))) PPC_WEAK_FUNC(sub_83C14648);
PPC_FUNC_IMPL(__imp__sub_83C14648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27840
	ctx.r3.s64 = ctx.r11.s64 + -27840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14654"))) PPC_WEAK_FUNC(sub_83C14654);
PPC_FUNC_IMPL(__imp__sub_83C14654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14658"))) PPC_WEAK_FUNC(sub_83C14658);
PPC_FUNC_IMPL(__imp__sub_83C14658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27832
	ctx.r3.s64 = ctx.r11.s64 + -27832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14664"))) PPC_WEAK_FUNC(sub_83C14664);
PPC_FUNC_IMPL(__imp__sub_83C14664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14668"))) PPC_WEAK_FUNC(sub_83C14668);
PPC_FUNC_IMPL(__imp__sub_83C14668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27824
	ctx.r3.s64 = ctx.r11.s64 + -27824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14674"))) PPC_WEAK_FUNC(sub_83C14674);
PPC_FUNC_IMPL(__imp__sub_83C14674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14678"))) PPC_WEAK_FUNC(sub_83C14678);
PPC_FUNC_IMPL(__imp__sub_83C14678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27816
	ctx.r3.s64 = ctx.r11.s64 + -27816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14684"))) PPC_WEAK_FUNC(sub_83C14684);
PPC_FUNC_IMPL(__imp__sub_83C14684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14688"))) PPC_WEAK_FUNC(sub_83C14688);
PPC_FUNC_IMPL(__imp__sub_83C14688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27808
	ctx.r3.s64 = ctx.r11.s64 + -27808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14694"))) PPC_WEAK_FUNC(sub_83C14694);
PPC_FUNC_IMPL(__imp__sub_83C14694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14698"))) PPC_WEAK_FUNC(sub_83C14698);
PPC_FUNC_IMPL(__imp__sub_83C14698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27800
	ctx.r3.s64 = ctx.r11.s64 + -27800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C146A4"))) PPC_WEAK_FUNC(sub_83C146A4);
PPC_FUNC_IMPL(__imp__sub_83C146A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C146A8"))) PPC_WEAK_FUNC(sub_83C146A8);
PPC_FUNC_IMPL(__imp__sub_83C146A8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-24356
	ctx.r4.s64 = ctx.r11.s64 + -24356;
	// addi r3,r10,-9080
	ctx.r3.s64 = ctx.r10.s64 + -9080;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C146CC;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-27752
	ctx.r3.s64 = ctx.r9.s64 + -27752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C146D8;
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

__attribute__((alias("__imp__sub_83C146E8"))) PPC_WEAK_FUNC(sub_83C146E8);
PPC_FUNC_IMPL(__imp__sub_83C146E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32576
	ctx.r7.s64 = ctx.r8.s64 + 32576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32576(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14710"))) PPC_WEAK_FUNC(sub_83C14710);
PPC_FUNC_IMPL(__imp__sub_83C14710) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-9052
	ctx.r6.s64 = ctx.r7.s64 + -9052;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32576);
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
	// std r9,-9052(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9052, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14758"))) PPC_WEAK_FUNC(sub_83C14758);
PPC_FUNC_IMPL(__imp__sub_83C14758) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// bl 0x83523120
	ctx.lr = 0x83C14770;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-27792
	ctx.r3.s64 = ctx.r10.s64 + -27792;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1477C;
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

__attribute__((alias("__imp__sub_83C1478C"))) PPC_WEAK_FUNC(sub_83C1478C);
PPC_FUNC_IMPL(__imp__sub_83C1478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14790"))) PPC_WEAK_FUNC(sub_83C14790);
PPC_FUNC_IMPL(__imp__sub_83C14790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27776
	ctx.r3.s64 = ctx.r11.s64 + -27776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1479C"))) PPC_WEAK_FUNC(sub_83C1479C);
PPC_FUNC_IMPL(__imp__sub_83C1479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C147A0"))) PPC_WEAK_FUNC(sub_83C147A0);
PPC_FUNC_IMPL(__imp__sub_83C147A0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,32584
	ctx.r3.s64 = ctx.r11.s64 + 32584;
	// bl 0x8259af80
	ctx.lr = 0x83C147B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-27760
	ctx.r3.s64 = ctx.r10.s64 + -27760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C147C4;
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

__attribute__((alias("__imp__sub_83C147D4"))) PPC_WEAK_FUNC(sub_83C147D4);
PPC_FUNC_IMPL(__imp__sub_83C147D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C147D8"))) PPC_WEAK_FUNC(sub_83C147D8);
PPC_FUNC_IMPL(__imp__sub_83C147D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32564
	ctx.r11.s64 = ctx.r8.s64 + 32564;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-9104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27768
	ctx.r3.s64 = ctx.r6.s64 + -27768;
	// stw r10,32564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14808"))) PPC_WEAK_FUNC(sub_83C14808);
PPC_FUNC_IMPL(__imp__sub_83C14808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14814"))) PPC_WEAK_FUNC(sub_83C14814);
PPC_FUNC_IMPL(__imp__sub_83C14814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14818"))) PPC_WEAK_FUNC(sub_83C14818);
PPC_FUNC_IMPL(__imp__sub_83C14818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27640
	ctx.r3.s64 = ctx.r11.s64 + -27640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14824"))) PPC_WEAK_FUNC(sub_83C14824);
PPC_FUNC_IMPL(__imp__sub_83C14824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14828"))) PPC_WEAK_FUNC(sub_83C14828);
PPC_FUNC_IMPL(__imp__sub_83C14828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27632
	ctx.r3.s64 = ctx.r11.s64 + -27632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14834"))) PPC_WEAK_FUNC(sub_83C14834);
PPC_FUNC_IMPL(__imp__sub_83C14834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14838"))) PPC_WEAK_FUNC(sub_83C14838);
PPC_FUNC_IMPL(__imp__sub_83C14838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27624
	ctx.r3.s64 = ctx.r11.s64 + -27624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14844"))) PPC_WEAK_FUNC(sub_83C14844);
PPC_FUNC_IMPL(__imp__sub_83C14844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14848"))) PPC_WEAK_FUNC(sub_83C14848);
PPC_FUNC_IMPL(__imp__sub_83C14848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27616
	ctx.r3.s64 = ctx.r11.s64 + -27616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14854"))) PPC_WEAK_FUNC(sub_83C14854);
PPC_FUNC_IMPL(__imp__sub_83C14854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14858"))) PPC_WEAK_FUNC(sub_83C14858);
PPC_FUNC_IMPL(__imp__sub_83C14858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27608
	ctx.r3.s64 = ctx.r11.s64 + -27608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14864"))) PPC_WEAK_FUNC(sub_83C14864);
PPC_FUNC_IMPL(__imp__sub_83C14864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14868"))) PPC_WEAK_FUNC(sub_83C14868);
PPC_FUNC_IMPL(__imp__sub_83C14868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27600
	ctx.r3.s64 = ctx.r11.s64 + -27600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14874"))) PPC_WEAK_FUNC(sub_83C14874);
PPC_FUNC_IMPL(__imp__sub_83C14874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14878"))) PPC_WEAK_FUNC(sub_83C14878);
PPC_FUNC_IMPL(__imp__sub_83C14878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27592
	ctx.r3.s64 = ctx.r11.s64 + -27592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14884"))) PPC_WEAK_FUNC(sub_83C14884);
PPC_FUNC_IMPL(__imp__sub_83C14884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14888"))) PPC_WEAK_FUNC(sub_83C14888);
PPC_FUNC_IMPL(__imp__sub_83C14888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14894"))) PPC_WEAK_FUNC(sub_83C14894);
PPC_FUNC_IMPL(__imp__sub_83C14894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14898"))) PPC_WEAK_FUNC(sub_83C14898);
PPC_FUNC_IMPL(__imp__sub_83C14898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27576
	ctx.r3.s64 = ctx.r11.s64 + -27576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C148A4"))) PPC_WEAK_FUNC(sub_83C148A4);
PPC_FUNC_IMPL(__imp__sub_83C148A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C148A8"))) PPC_WEAK_FUNC(sub_83C148A8);
PPC_FUNC_IMPL(__imp__sub_83C148A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27568
	ctx.r3.s64 = ctx.r11.s64 + -27568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C148B4"))) PPC_WEAK_FUNC(sub_83C148B4);
PPC_FUNC_IMPL(__imp__sub_83C148B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C148B8"))) PPC_WEAK_FUNC(sub_83C148B8);
PPC_FUNC_IMPL(__imp__sub_83C148B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27560
	ctx.r3.s64 = ctx.r11.s64 + -27560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C148C4"))) PPC_WEAK_FUNC(sub_83C148C4);
PPC_FUNC_IMPL(__imp__sub_83C148C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C148C8"))) PPC_WEAK_FUNC(sub_83C148C8);
PPC_FUNC_IMPL(__imp__sub_83C148C8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r4,r11,-23968
	ctx.r4.s64 = ctx.r11.s64 + -23968;
	// addi r3,r10,-8924
	ctx.r3.s64 = ctx.r10.s64 + -8924;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C148EC;
	sub_8259CC28(ctx, base);
	// lis r9,-31789
	ctx.r9.s64 = -2083323904;
	// addi r3,r9,-27536
	ctx.r3.s64 = ctx.r9.s64 + -27536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C148F8;
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

__attribute__((alias("__imp__sub_83C14908"))) PPC_WEAK_FUNC(sub_83C14908);
PPC_FUNC_IMPL(__imp__sub_83C14908) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32600
	ctx.r7.s64 = ctx.r8.s64 + -32600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14930"))) PPC_WEAK_FUNC(sub_83C14930);
PPC_FUNC_IMPL(__imp__sub_83C14930) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-8896
	ctx.r6.s64 = ctx.r7.s64 + -8896;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8996(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8996);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32600);
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
	// std r9,-8896(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8896, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14978"))) PPC_WEAK_FUNC(sub_83C14978);
PPC_FUNC_IMPL(__imp__sub_83C14978) {
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
	// addi r3,r11,-32604
	ctx.r3.s64 = ctx.r11.s64 + -32604;
	// bl 0x83523120
	ctx.lr = 0x83C14990;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-27552
	ctx.r3.s64 = ctx.r10.s64 + -27552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1499C;
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

__attribute__((alias("__imp__sub_83C149AC"))) PPC_WEAK_FUNC(sub_83C149AC);
PPC_FUNC_IMPL(__imp__sub_83C149AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C149B0"))) PPC_WEAK_FUNC(sub_83C149B0);
PPC_FUNC_IMPL(__imp__sub_83C149B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C149BC"))) PPC_WEAK_FUNC(sub_83C149BC);
PPC_FUNC_IMPL(__imp__sub_83C149BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C149C0"))) PPC_WEAK_FUNC(sub_83C149C0);
PPC_FUNC_IMPL(__imp__sub_83C149C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27424
	ctx.r3.s64 = ctx.r11.s64 + -27424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C149CC"))) PPC_WEAK_FUNC(sub_83C149CC);
PPC_FUNC_IMPL(__imp__sub_83C149CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C149D0"))) PPC_WEAK_FUNC(sub_83C149D0);
PPC_FUNC_IMPL(__imp__sub_83C149D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27416
	ctx.r3.s64 = ctx.r11.s64 + -27416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C149DC"))) PPC_WEAK_FUNC(sub_83C149DC);
PPC_FUNC_IMPL(__imp__sub_83C149DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C149E0"))) PPC_WEAK_FUNC(sub_83C149E0);
PPC_FUNC_IMPL(__imp__sub_83C149E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27408
	ctx.r3.s64 = ctx.r11.s64 + -27408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C149EC"))) PPC_WEAK_FUNC(sub_83C149EC);
PPC_FUNC_IMPL(__imp__sub_83C149EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C149F0"))) PPC_WEAK_FUNC(sub_83C149F0);
PPC_FUNC_IMPL(__imp__sub_83C149F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27400
	ctx.r3.s64 = ctx.r11.s64 + -27400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C149FC"))) PPC_WEAK_FUNC(sub_83C149FC);
PPC_FUNC_IMPL(__imp__sub_83C149FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14A00"))) PPC_WEAK_FUNC(sub_83C14A00);
PPC_FUNC_IMPL(__imp__sub_83C14A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14A0C"))) PPC_WEAK_FUNC(sub_83C14A0C);
PPC_FUNC_IMPL(__imp__sub_83C14A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14A10"))) PPC_WEAK_FUNC(sub_83C14A10);
PPC_FUNC_IMPL(__imp__sub_83C14A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27384
	ctx.r3.s64 = ctx.r11.s64 + -27384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14A1C"))) PPC_WEAK_FUNC(sub_83C14A1C);
PPC_FUNC_IMPL(__imp__sub_83C14A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14A20"))) PPC_WEAK_FUNC(sub_83C14A20);
PPC_FUNC_IMPL(__imp__sub_83C14A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14A2C"))) PPC_WEAK_FUNC(sub_83C14A2C);
PPC_FUNC_IMPL(__imp__sub_83C14A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14A30"))) PPC_WEAK_FUNC(sub_83C14A30);
PPC_FUNC_IMPL(__imp__sub_83C14A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27368
	ctx.r3.s64 = ctx.r11.s64 + -27368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14A3C"))) PPC_WEAK_FUNC(sub_83C14A3C);
PPC_FUNC_IMPL(__imp__sub_83C14A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14A40"))) PPC_WEAK_FUNC(sub_83C14A40);
PPC_FUNC_IMPL(__imp__sub_83C14A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27360
	ctx.r3.s64 = ctx.r11.s64 + -27360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14A4C"))) PPC_WEAK_FUNC(sub_83C14A4C);
PPC_FUNC_IMPL(__imp__sub_83C14A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14A50"))) PPC_WEAK_FUNC(sub_83C14A50);
PPC_FUNC_IMPL(__imp__sub_83C14A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27352
	ctx.r3.s64 = ctx.r11.s64 + -27352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14A5C"))) PPC_WEAK_FUNC(sub_83C14A5C);
PPC_FUNC_IMPL(__imp__sub_83C14A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14A60"))) PPC_WEAK_FUNC(sub_83C14A60);
PPC_FUNC_IMPL(__imp__sub_83C14A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14A6C"))) PPC_WEAK_FUNC(sub_83C14A6C);
PPC_FUNC_IMPL(__imp__sub_83C14A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14A70"))) PPC_WEAK_FUNC(sub_83C14A70);
PPC_FUNC_IMPL(__imp__sub_83C14A70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32588
	ctx.r7.s64 = ctx.r8.s64 + -32588;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32588(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32588);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32588, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14A98"))) PPC_WEAK_FUNC(sub_83C14A98);
PPC_FUNC_IMPL(__imp__sub_83C14A98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-8772
	ctx.r6.s64 = ctx.r7.s64 + -8772;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8844(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8844);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32588(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32588);
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
	// std r9,-8772(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8772, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C14AE0"))) PPC_WEAK_FUNC(sub_83C14AE0);
PPC_FUNC_IMPL(__imp__sub_83C14AE0) {
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
	// addi r3,r11,-32592
	ctx.r3.s64 = ctx.r11.s64 + -32592;
	// bl 0x83523120
	ctx.lr = 0x83C14AF8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-27336
	ctx.r3.s64 = ctx.r10.s64 + -27336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C14B04;
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

__attribute__((alias("__imp__sub_83C14B14"))) PPC_WEAK_FUNC(sub_83C14B14);
PPC_FUNC_IMPL(__imp__sub_83C14B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14B18"))) PPC_WEAK_FUNC(sub_83C14B18);
PPC_FUNC_IMPL(__imp__sub_83C14B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C14B24"))) PPC_WEAK_FUNC(sub_83C14B24);
PPC_FUNC_IMPL(__imp__sub_83C14B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C14B28"))) PPC_WEAK_FUNC(sub_83C14B28);
PPC_FUNC_IMPL(__imp__sub_83C14B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

