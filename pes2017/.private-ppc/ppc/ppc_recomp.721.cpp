#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C18B94"))) PPC_WEAK_FUNC(sub_83C18B94);
PPC_FUNC_IMPL(__imp__sub_83C18B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18B98"))) PPC_WEAK_FUNC(sub_83C18B98);
PPC_FUNC_IMPL(__imp__sub_83C18B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20688
	ctx.r3.s64 = ctx.r11.s64 + -20688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18BA4"))) PPC_WEAK_FUNC(sub_83C18BA4);
PPC_FUNC_IMPL(__imp__sub_83C18BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18BA8"))) PPC_WEAK_FUNC(sub_83C18BA8);
PPC_FUNC_IMPL(__imp__sub_83C18BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20680
	ctx.r3.s64 = ctx.r11.s64 + -20680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18BB4"))) PPC_WEAK_FUNC(sub_83C18BB4);
PPC_FUNC_IMPL(__imp__sub_83C18BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18BB8"))) PPC_WEAK_FUNC(sub_83C18BB8);
PPC_FUNC_IMPL(__imp__sub_83C18BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18BC4"))) PPC_WEAK_FUNC(sub_83C18BC4);
PPC_FUNC_IMPL(__imp__sub_83C18BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18BC8"))) PPC_WEAK_FUNC(sub_83C18BC8);
PPC_FUNC_IMPL(__imp__sub_83C18BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20664
	ctx.r3.s64 = ctx.r11.s64 + -20664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18BD4"))) PPC_WEAK_FUNC(sub_83C18BD4);
PPC_FUNC_IMPL(__imp__sub_83C18BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18BD8"))) PPC_WEAK_FUNC(sub_83C18BD8);
PPC_FUNC_IMPL(__imp__sub_83C18BD8) {
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
	// addi r3,r11,-23764
	ctx.r3.s64 = ctx.r11.s64 + -23764;
	// bl 0x83523120
	ctx.lr = 0x83C18BF0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-20656
	ctx.r3.s64 = ctx.r10.s64 + -20656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C18BFC;
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

__attribute__((alias("__imp__sub_83C18C0C"))) PPC_WEAK_FUNC(sub_83C18C0C);
PPC_FUNC_IMPL(__imp__sub_83C18C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18C10"))) PPC_WEAK_FUNC(sub_83C18C10);
PPC_FUNC_IMPL(__imp__sub_83C18C10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23748
	ctx.r7.s64 = ctx.r8.s64 + -23748;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23748(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23748);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23748, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18C38"))) PPC_WEAK_FUNC(sub_83C18C38);
PPC_FUNC_IMPL(__imp__sub_83C18C38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-3124
	ctx.r6.s64 = ctx.r7.s64 + -3124;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3196(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3196);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23748(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23748);
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
	// std r9,-3124(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3124, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18C80"))) PPC_WEAK_FUNC(sub_83C18C80);
PPC_FUNC_IMPL(__imp__sub_83C18C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20640
	ctx.r3.s64 = ctx.r11.s64 + -20640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18C8C"))) PPC_WEAK_FUNC(sub_83C18C8C);
PPC_FUNC_IMPL(__imp__sub_83C18C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18C90"))) PPC_WEAK_FUNC(sub_83C18C90);
PPC_FUNC_IMPL(__imp__sub_83C18C90) {
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
	// addi r3,r11,-23736
	ctx.r3.s64 = ctx.r11.s64 + -23736;
	// bl 0x8259af80
	ctx.lr = 0x83C18CA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-20624
	ctx.r3.s64 = ctx.r10.s64 + -20624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C18CB4;
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

__attribute__((alias("__imp__sub_83C18CC4"))) PPC_WEAK_FUNC(sub_83C18CC4);
PPC_FUNC_IMPL(__imp__sub_83C18CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18CC8"))) PPC_WEAK_FUNC(sub_83C18CC8);
PPC_FUNC_IMPL(__imp__sub_83C18CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23760
	ctx.r11.s64 = ctx.r8.s64 + -23760;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-3148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3148);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20632
	ctx.r3.s64 = ctx.r6.s64 + -20632;
	// stw r10,-23760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23760, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18CF8"))) PPC_WEAK_FUNC(sub_83C18CF8);
PPC_FUNC_IMPL(__imp__sub_83C18CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20616
	ctx.r3.s64 = ctx.r11.s64 + -20616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D04"))) PPC_WEAK_FUNC(sub_83C18D04);
PPC_FUNC_IMPL(__imp__sub_83C18D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D08"))) PPC_WEAK_FUNC(sub_83C18D08);
PPC_FUNC_IMPL(__imp__sub_83C18D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20608
	ctx.r3.s64 = ctx.r11.s64 + -20608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D14"))) PPC_WEAK_FUNC(sub_83C18D14);
PPC_FUNC_IMPL(__imp__sub_83C18D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D18"))) PPC_WEAK_FUNC(sub_83C18D18);
PPC_FUNC_IMPL(__imp__sub_83C18D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20600
	ctx.r3.s64 = ctx.r11.s64 + -20600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D24"))) PPC_WEAK_FUNC(sub_83C18D24);
PPC_FUNC_IMPL(__imp__sub_83C18D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D28"))) PPC_WEAK_FUNC(sub_83C18D28);
PPC_FUNC_IMPL(__imp__sub_83C18D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20592
	ctx.r3.s64 = ctx.r11.s64 + -20592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D34"))) PPC_WEAK_FUNC(sub_83C18D34);
PPC_FUNC_IMPL(__imp__sub_83C18D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D38"))) PPC_WEAK_FUNC(sub_83C18D38);
PPC_FUNC_IMPL(__imp__sub_83C18D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20584
	ctx.r3.s64 = ctx.r11.s64 + -20584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D44"))) PPC_WEAK_FUNC(sub_83C18D44);
PPC_FUNC_IMPL(__imp__sub_83C18D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D48"))) PPC_WEAK_FUNC(sub_83C18D48);
PPC_FUNC_IMPL(__imp__sub_83C18D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20576
	ctx.r3.s64 = ctx.r11.s64 + -20576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D54"))) PPC_WEAK_FUNC(sub_83C18D54);
PPC_FUNC_IMPL(__imp__sub_83C18D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D58"))) PPC_WEAK_FUNC(sub_83C18D58);
PPC_FUNC_IMPL(__imp__sub_83C18D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20568
	ctx.r3.s64 = ctx.r11.s64 + -20568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D64"))) PPC_WEAK_FUNC(sub_83C18D64);
PPC_FUNC_IMPL(__imp__sub_83C18D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D68"))) PPC_WEAK_FUNC(sub_83C18D68);
PPC_FUNC_IMPL(__imp__sub_83C18D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20560
	ctx.r3.s64 = ctx.r11.s64 + -20560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D74"))) PPC_WEAK_FUNC(sub_83C18D74);
PPC_FUNC_IMPL(__imp__sub_83C18D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D78"))) PPC_WEAK_FUNC(sub_83C18D78);
PPC_FUNC_IMPL(__imp__sub_83C18D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20552
	ctx.r3.s64 = ctx.r11.s64 + -20552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D84"))) PPC_WEAK_FUNC(sub_83C18D84);
PPC_FUNC_IMPL(__imp__sub_83C18D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D88"))) PPC_WEAK_FUNC(sub_83C18D88);
PPC_FUNC_IMPL(__imp__sub_83C18D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20544
	ctx.r3.s64 = ctx.r11.s64 + -20544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18D94"))) PPC_WEAK_FUNC(sub_83C18D94);
PPC_FUNC_IMPL(__imp__sub_83C18D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18D98"))) PPC_WEAK_FUNC(sub_83C18D98);
PPC_FUNC_IMPL(__imp__sub_83C18D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20536
	ctx.r3.s64 = ctx.r11.s64 + -20536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18DA4"))) PPC_WEAK_FUNC(sub_83C18DA4);
PPC_FUNC_IMPL(__imp__sub_83C18DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18DA8"))) PPC_WEAK_FUNC(sub_83C18DA8);
PPC_FUNC_IMPL(__imp__sub_83C18DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20528
	ctx.r3.s64 = ctx.r11.s64 + -20528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18DB4"))) PPC_WEAK_FUNC(sub_83C18DB4);
PPC_FUNC_IMPL(__imp__sub_83C18DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18DB8"))) PPC_WEAK_FUNC(sub_83C18DB8);
PPC_FUNC_IMPL(__imp__sub_83C18DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20520
	ctx.r3.s64 = ctx.r11.s64 + -20520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18DC4"))) PPC_WEAK_FUNC(sub_83C18DC4);
PPC_FUNC_IMPL(__imp__sub_83C18DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18DC8"))) PPC_WEAK_FUNC(sub_83C18DC8);
PPC_FUNC_IMPL(__imp__sub_83C18DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20512
	ctx.r3.s64 = ctx.r11.s64 + -20512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18DD4"))) PPC_WEAK_FUNC(sub_83C18DD4);
PPC_FUNC_IMPL(__imp__sub_83C18DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18DD8"))) PPC_WEAK_FUNC(sub_83C18DD8);
PPC_FUNC_IMPL(__imp__sub_83C18DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20504
	ctx.r3.s64 = ctx.r11.s64 + -20504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18DE4"))) PPC_WEAK_FUNC(sub_83C18DE4);
PPC_FUNC_IMPL(__imp__sub_83C18DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18DE8"))) PPC_WEAK_FUNC(sub_83C18DE8);
PPC_FUNC_IMPL(__imp__sub_83C18DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20496
	ctx.r3.s64 = ctx.r11.s64 + -20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18DF4"))) PPC_WEAK_FUNC(sub_83C18DF4);
PPC_FUNC_IMPL(__imp__sub_83C18DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18DF8"))) PPC_WEAK_FUNC(sub_83C18DF8);
PPC_FUNC_IMPL(__imp__sub_83C18DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20488
	ctx.r3.s64 = ctx.r11.s64 + -20488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E04"))) PPC_WEAK_FUNC(sub_83C18E04);
PPC_FUNC_IMPL(__imp__sub_83C18E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E08"))) PPC_WEAK_FUNC(sub_83C18E08);
PPC_FUNC_IMPL(__imp__sub_83C18E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20480
	ctx.r3.s64 = ctx.r11.s64 + -20480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E14"))) PPC_WEAK_FUNC(sub_83C18E14);
PPC_FUNC_IMPL(__imp__sub_83C18E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E18"))) PPC_WEAK_FUNC(sub_83C18E18);
PPC_FUNC_IMPL(__imp__sub_83C18E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20472
	ctx.r3.s64 = ctx.r11.s64 + -20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E24"))) PPC_WEAK_FUNC(sub_83C18E24);
PPC_FUNC_IMPL(__imp__sub_83C18E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E28"))) PPC_WEAK_FUNC(sub_83C18E28);
PPC_FUNC_IMPL(__imp__sub_83C18E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20464
	ctx.r3.s64 = ctx.r11.s64 + -20464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E34"))) PPC_WEAK_FUNC(sub_83C18E34);
PPC_FUNC_IMPL(__imp__sub_83C18E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E38"))) PPC_WEAK_FUNC(sub_83C18E38);
PPC_FUNC_IMPL(__imp__sub_83C18E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20456
	ctx.r3.s64 = ctx.r11.s64 + -20456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E44"))) PPC_WEAK_FUNC(sub_83C18E44);
PPC_FUNC_IMPL(__imp__sub_83C18E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E48"))) PPC_WEAK_FUNC(sub_83C18E48);
PPC_FUNC_IMPL(__imp__sub_83C18E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20448
	ctx.r3.s64 = ctx.r11.s64 + -20448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E54"))) PPC_WEAK_FUNC(sub_83C18E54);
PPC_FUNC_IMPL(__imp__sub_83C18E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E58"))) PPC_WEAK_FUNC(sub_83C18E58);
PPC_FUNC_IMPL(__imp__sub_83C18E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20440
	ctx.r3.s64 = ctx.r11.s64 + -20440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E64"))) PPC_WEAK_FUNC(sub_83C18E64);
PPC_FUNC_IMPL(__imp__sub_83C18E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E68"))) PPC_WEAK_FUNC(sub_83C18E68);
PPC_FUNC_IMPL(__imp__sub_83C18E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20432
	ctx.r3.s64 = ctx.r11.s64 + -20432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E74"))) PPC_WEAK_FUNC(sub_83C18E74);
PPC_FUNC_IMPL(__imp__sub_83C18E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E78"))) PPC_WEAK_FUNC(sub_83C18E78);
PPC_FUNC_IMPL(__imp__sub_83C18E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E84"))) PPC_WEAK_FUNC(sub_83C18E84);
PPC_FUNC_IMPL(__imp__sub_83C18E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E88"))) PPC_WEAK_FUNC(sub_83C18E88);
PPC_FUNC_IMPL(__imp__sub_83C18E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20416
	ctx.r3.s64 = ctx.r11.s64 + -20416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18E94"))) PPC_WEAK_FUNC(sub_83C18E94);
PPC_FUNC_IMPL(__imp__sub_83C18E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18E98"))) PPC_WEAK_FUNC(sub_83C18E98);
PPC_FUNC_IMPL(__imp__sub_83C18E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20408
	ctx.r3.s64 = ctx.r11.s64 + -20408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18EA4"))) PPC_WEAK_FUNC(sub_83C18EA4);
PPC_FUNC_IMPL(__imp__sub_83C18EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18EA8"))) PPC_WEAK_FUNC(sub_83C18EA8);
PPC_FUNC_IMPL(__imp__sub_83C18EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20400
	ctx.r3.s64 = ctx.r11.s64 + -20400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18EB4"))) PPC_WEAK_FUNC(sub_83C18EB4);
PPC_FUNC_IMPL(__imp__sub_83C18EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18EB8"))) PPC_WEAK_FUNC(sub_83C18EB8);
PPC_FUNC_IMPL(__imp__sub_83C18EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20392
	ctx.r3.s64 = ctx.r11.s64 + -20392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18EC4"))) PPC_WEAK_FUNC(sub_83C18EC4);
PPC_FUNC_IMPL(__imp__sub_83C18EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18EC8"))) PPC_WEAK_FUNC(sub_83C18EC8);
PPC_FUNC_IMPL(__imp__sub_83C18EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20384
	ctx.r3.s64 = ctx.r11.s64 + -20384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18ED4"))) PPC_WEAK_FUNC(sub_83C18ED4);
PPC_FUNC_IMPL(__imp__sub_83C18ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18ED8"))) PPC_WEAK_FUNC(sub_83C18ED8);
PPC_FUNC_IMPL(__imp__sub_83C18ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20376
	ctx.r3.s64 = ctx.r11.s64 + -20376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18EE4"))) PPC_WEAK_FUNC(sub_83C18EE4);
PPC_FUNC_IMPL(__imp__sub_83C18EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18EE8"))) PPC_WEAK_FUNC(sub_83C18EE8);
PPC_FUNC_IMPL(__imp__sub_83C18EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20368
	ctx.r3.s64 = ctx.r11.s64 + -20368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18EF4"))) PPC_WEAK_FUNC(sub_83C18EF4);
PPC_FUNC_IMPL(__imp__sub_83C18EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18EF8"))) PPC_WEAK_FUNC(sub_83C18EF8);
PPC_FUNC_IMPL(__imp__sub_83C18EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20360
	ctx.r3.s64 = ctx.r11.s64 + -20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18F04"))) PPC_WEAK_FUNC(sub_83C18F04);
PPC_FUNC_IMPL(__imp__sub_83C18F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18F08"))) PPC_WEAK_FUNC(sub_83C18F08);
PPC_FUNC_IMPL(__imp__sub_83C18F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20352
	ctx.r3.s64 = ctx.r11.s64 + -20352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18F14"))) PPC_WEAK_FUNC(sub_83C18F14);
PPC_FUNC_IMPL(__imp__sub_83C18F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18F18"))) PPC_WEAK_FUNC(sub_83C18F18);
PPC_FUNC_IMPL(__imp__sub_83C18F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20344
	ctx.r3.s64 = ctx.r11.s64 + -20344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18F24"))) PPC_WEAK_FUNC(sub_83C18F24);
PPC_FUNC_IMPL(__imp__sub_83C18F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18F28"))) PPC_WEAK_FUNC(sub_83C18F28);
PPC_FUNC_IMPL(__imp__sub_83C18F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20336
	ctx.r3.s64 = ctx.r11.s64 + -20336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18F34"))) PPC_WEAK_FUNC(sub_83C18F34);
PPC_FUNC_IMPL(__imp__sub_83C18F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18F38"))) PPC_WEAK_FUNC(sub_83C18F38);
PPC_FUNC_IMPL(__imp__sub_83C18F38) {
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
	// addi r3,r11,-23380
	ctx.r3.s64 = ctx.r11.s64 + -23380;
	// bl 0x83523120
	ctx.lr = 0x83C18F50;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-20328
	ctx.r3.s64 = ctx.r10.s64 + -20328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C18F5C;
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

__attribute__((alias("__imp__sub_83C18F6C"))) PPC_WEAK_FUNC(sub_83C18F6C);
PPC_FUNC_IMPL(__imp__sub_83C18F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18F70"))) PPC_WEAK_FUNC(sub_83C18F70);
PPC_FUNC_IMPL(__imp__sub_83C18F70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23376
	ctx.r7.s64 = ctx.r8.s64 + -23376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23376);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23376(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23376, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C18F98"))) PPC_WEAK_FUNC(sub_83C18F98);
PPC_FUNC_IMPL(__imp__sub_83C18F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20312
	ctx.r3.s64 = ctx.r11.s64 + -20312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18FA4"))) PPC_WEAK_FUNC(sub_83C18FA4);
PPC_FUNC_IMPL(__imp__sub_83C18FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18FA8"))) PPC_WEAK_FUNC(sub_83C18FA8);
PPC_FUNC_IMPL(__imp__sub_83C18FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20304
	ctx.r3.s64 = ctx.r11.s64 + -20304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18FB4"))) PPC_WEAK_FUNC(sub_83C18FB4);
PPC_FUNC_IMPL(__imp__sub_83C18FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18FB8"))) PPC_WEAK_FUNC(sub_83C18FB8);
PPC_FUNC_IMPL(__imp__sub_83C18FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20296
	ctx.r3.s64 = ctx.r11.s64 + -20296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18FC4"))) PPC_WEAK_FUNC(sub_83C18FC4);
PPC_FUNC_IMPL(__imp__sub_83C18FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18FC8"))) PPC_WEAK_FUNC(sub_83C18FC8);
PPC_FUNC_IMPL(__imp__sub_83C18FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20288
	ctx.r3.s64 = ctx.r11.s64 + -20288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18FD4"))) PPC_WEAK_FUNC(sub_83C18FD4);
PPC_FUNC_IMPL(__imp__sub_83C18FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18FD8"))) PPC_WEAK_FUNC(sub_83C18FD8);
PPC_FUNC_IMPL(__imp__sub_83C18FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20280
	ctx.r3.s64 = ctx.r11.s64 + -20280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18FE4"))) PPC_WEAK_FUNC(sub_83C18FE4);
PPC_FUNC_IMPL(__imp__sub_83C18FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18FE8"))) PPC_WEAK_FUNC(sub_83C18FE8);
PPC_FUNC_IMPL(__imp__sub_83C18FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C18FF4"))) PPC_WEAK_FUNC(sub_83C18FF4);
PPC_FUNC_IMPL(__imp__sub_83C18FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C18FF8"))) PPC_WEAK_FUNC(sub_83C18FF8);
PPC_FUNC_IMPL(__imp__sub_83C18FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20264
	ctx.r3.s64 = ctx.r11.s64 + -20264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19004"))) PPC_WEAK_FUNC(sub_83C19004);
PPC_FUNC_IMPL(__imp__sub_83C19004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19008"))) PPC_WEAK_FUNC(sub_83C19008);
PPC_FUNC_IMPL(__imp__sub_83C19008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20256
	ctx.r3.s64 = ctx.r11.s64 + -20256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19014"))) PPC_WEAK_FUNC(sub_83C19014);
PPC_FUNC_IMPL(__imp__sub_83C19014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19018"))) PPC_WEAK_FUNC(sub_83C19018);
PPC_FUNC_IMPL(__imp__sub_83C19018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20248
	ctx.r3.s64 = ctx.r11.s64 + -20248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19024"))) PPC_WEAK_FUNC(sub_83C19024);
PPC_FUNC_IMPL(__imp__sub_83C19024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19028"))) PPC_WEAK_FUNC(sub_83C19028);
PPC_FUNC_IMPL(__imp__sub_83C19028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20240
	ctx.r3.s64 = ctx.r11.s64 + -20240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19034"))) PPC_WEAK_FUNC(sub_83C19034);
PPC_FUNC_IMPL(__imp__sub_83C19034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19038"))) PPC_WEAK_FUNC(sub_83C19038);
PPC_FUNC_IMPL(__imp__sub_83C19038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20232
	ctx.r3.s64 = ctx.r11.s64 + -20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19044"))) PPC_WEAK_FUNC(sub_83C19044);
PPC_FUNC_IMPL(__imp__sub_83C19044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19048"))) PPC_WEAK_FUNC(sub_83C19048);
PPC_FUNC_IMPL(__imp__sub_83C19048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20224
	ctx.r3.s64 = ctx.r11.s64 + -20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19054"))) PPC_WEAK_FUNC(sub_83C19054);
PPC_FUNC_IMPL(__imp__sub_83C19054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19058"))) PPC_WEAK_FUNC(sub_83C19058);
PPC_FUNC_IMPL(__imp__sub_83C19058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20216
	ctx.r3.s64 = ctx.r11.s64 + -20216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19064"))) PPC_WEAK_FUNC(sub_83C19064);
PPC_FUNC_IMPL(__imp__sub_83C19064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19068"))) PPC_WEAK_FUNC(sub_83C19068);
PPC_FUNC_IMPL(__imp__sub_83C19068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20208
	ctx.r3.s64 = ctx.r11.s64 + -20208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19074"))) PPC_WEAK_FUNC(sub_83C19074);
PPC_FUNC_IMPL(__imp__sub_83C19074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19078"))) PPC_WEAK_FUNC(sub_83C19078);
PPC_FUNC_IMPL(__imp__sub_83C19078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20200
	ctx.r3.s64 = ctx.r11.s64 + -20200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19084"))) PPC_WEAK_FUNC(sub_83C19084);
PPC_FUNC_IMPL(__imp__sub_83C19084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19088"))) PPC_WEAK_FUNC(sub_83C19088);
PPC_FUNC_IMPL(__imp__sub_83C19088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20192
	ctx.r3.s64 = ctx.r11.s64 + -20192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19094"))) PPC_WEAK_FUNC(sub_83C19094);
PPC_FUNC_IMPL(__imp__sub_83C19094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19098"))) PPC_WEAK_FUNC(sub_83C19098);
PPC_FUNC_IMPL(__imp__sub_83C19098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20184
	ctx.r3.s64 = ctx.r11.s64 + -20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C190A4"))) PPC_WEAK_FUNC(sub_83C190A4);
PPC_FUNC_IMPL(__imp__sub_83C190A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C190A8"))) PPC_WEAK_FUNC(sub_83C190A8);
PPC_FUNC_IMPL(__imp__sub_83C190A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20176
	ctx.r3.s64 = ctx.r11.s64 + -20176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C190B4"))) PPC_WEAK_FUNC(sub_83C190B4);
PPC_FUNC_IMPL(__imp__sub_83C190B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C190B8"))) PPC_WEAK_FUNC(sub_83C190B8);
PPC_FUNC_IMPL(__imp__sub_83C190B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20168
	ctx.r3.s64 = ctx.r11.s64 + -20168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C190C4"))) PPC_WEAK_FUNC(sub_83C190C4);
PPC_FUNC_IMPL(__imp__sub_83C190C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C190C8"))) PPC_WEAK_FUNC(sub_83C190C8);
PPC_FUNC_IMPL(__imp__sub_83C190C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20160
	ctx.r3.s64 = ctx.r11.s64 + -20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C190D4"))) PPC_WEAK_FUNC(sub_83C190D4);
PPC_FUNC_IMPL(__imp__sub_83C190D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C190D8"))) PPC_WEAK_FUNC(sub_83C190D8);
PPC_FUNC_IMPL(__imp__sub_83C190D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20152
	ctx.r3.s64 = ctx.r11.s64 + -20152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C190E4"))) PPC_WEAK_FUNC(sub_83C190E4);
PPC_FUNC_IMPL(__imp__sub_83C190E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C190E8"))) PPC_WEAK_FUNC(sub_83C190E8);
PPC_FUNC_IMPL(__imp__sub_83C190E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20144
	ctx.r3.s64 = ctx.r11.s64 + -20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C190F4"))) PPC_WEAK_FUNC(sub_83C190F4);
PPC_FUNC_IMPL(__imp__sub_83C190F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C190F8"))) PPC_WEAK_FUNC(sub_83C190F8);
PPC_FUNC_IMPL(__imp__sub_83C190F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20136
	ctx.r3.s64 = ctx.r11.s64 + -20136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19104"))) PPC_WEAK_FUNC(sub_83C19104);
PPC_FUNC_IMPL(__imp__sub_83C19104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19108"))) PPC_WEAK_FUNC(sub_83C19108);
PPC_FUNC_IMPL(__imp__sub_83C19108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20128
	ctx.r3.s64 = ctx.r11.s64 + -20128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19114"))) PPC_WEAK_FUNC(sub_83C19114);
PPC_FUNC_IMPL(__imp__sub_83C19114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19118"))) PPC_WEAK_FUNC(sub_83C19118);
PPC_FUNC_IMPL(__imp__sub_83C19118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20120
	ctx.r3.s64 = ctx.r11.s64 + -20120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19124"))) PPC_WEAK_FUNC(sub_83C19124);
PPC_FUNC_IMPL(__imp__sub_83C19124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19128"))) PPC_WEAK_FUNC(sub_83C19128);
PPC_FUNC_IMPL(__imp__sub_83C19128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20112
	ctx.r3.s64 = ctx.r11.s64 + -20112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19134"))) PPC_WEAK_FUNC(sub_83C19134);
PPC_FUNC_IMPL(__imp__sub_83C19134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19138"))) PPC_WEAK_FUNC(sub_83C19138);
PPC_FUNC_IMPL(__imp__sub_83C19138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20104
	ctx.r3.s64 = ctx.r11.s64 + -20104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19144"))) PPC_WEAK_FUNC(sub_83C19144);
PPC_FUNC_IMPL(__imp__sub_83C19144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19148"))) PPC_WEAK_FUNC(sub_83C19148);
PPC_FUNC_IMPL(__imp__sub_83C19148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20096
	ctx.r3.s64 = ctx.r11.s64 + -20096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19154"))) PPC_WEAK_FUNC(sub_83C19154);
PPC_FUNC_IMPL(__imp__sub_83C19154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19158"))) PPC_WEAK_FUNC(sub_83C19158);
PPC_FUNC_IMPL(__imp__sub_83C19158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20088
	ctx.r3.s64 = ctx.r11.s64 + -20088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19164"))) PPC_WEAK_FUNC(sub_83C19164);
PPC_FUNC_IMPL(__imp__sub_83C19164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19168"))) PPC_WEAK_FUNC(sub_83C19168);
PPC_FUNC_IMPL(__imp__sub_83C19168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20080
	ctx.r3.s64 = ctx.r11.s64 + -20080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19174"))) PPC_WEAK_FUNC(sub_83C19174);
PPC_FUNC_IMPL(__imp__sub_83C19174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19178"))) PPC_WEAK_FUNC(sub_83C19178);
PPC_FUNC_IMPL(__imp__sub_83C19178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20072
	ctx.r3.s64 = ctx.r11.s64 + -20072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19184"))) PPC_WEAK_FUNC(sub_83C19184);
PPC_FUNC_IMPL(__imp__sub_83C19184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19188"))) PPC_WEAK_FUNC(sub_83C19188);
PPC_FUNC_IMPL(__imp__sub_83C19188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20064
	ctx.r3.s64 = ctx.r11.s64 + -20064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19194"))) PPC_WEAK_FUNC(sub_83C19194);
PPC_FUNC_IMPL(__imp__sub_83C19194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19198"))) PPC_WEAK_FUNC(sub_83C19198);
PPC_FUNC_IMPL(__imp__sub_83C19198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20056
	ctx.r3.s64 = ctx.r11.s64 + -20056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C191A4"))) PPC_WEAK_FUNC(sub_83C191A4);
PPC_FUNC_IMPL(__imp__sub_83C191A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C191A8"))) PPC_WEAK_FUNC(sub_83C191A8);
PPC_FUNC_IMPL(__imp__sub_83C191A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20048
	ctx.r3.s64 = ctx.r11.s64 + -20048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C191B4"))) PPC_WEAK_FUNC(sub_83C191B4);
PPC_FUNC_IMPL(__imp__sub_83C191B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C191B8"))) PPC_WEAK_FUNC(sub_83C191B8);
PPC_FUNC_IMPL(__imp__sub_83C191B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20040
	ctx.r3.s64 = ctx.r11.s64 + -20040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C191C4"))) PPC_WEAK_FUNC(sub_83C191C4);
PPC_FUNC_IMPL(__imp__sub_83C191C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C191C8"))) PPC_WEAK_FUNC(sub_83C191C8);
PPC_FUNC_IMPL(__imp__sub_83C191C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20032
	ctx.r3.s64 = ctx.r11.s64 + -20032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C191D4"))) PPC_WEAK_FUNC(sub_83C191D4);
PPC_FUNC_IMPL(__imp__sub_83C191D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C191D8"))) PPC_WEAK_FUNC(sub_83C191D8);
PPC_FUNC_IMPL(__imp__sub_83C191D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C191E4"))) PPC_WEAK_FUNC(sub_83C191E4);
PPC_FUNC_IMPL(__imp__sub_83C191E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C191E8"))) PPC_WEAK_FUNC(sub_83C191E8);
PPC_FUNC_IMPL(__imp__sub_83C191E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C191F4"))) PPC_WEAK_FUNC(sub_83C191F4);
PPC_FUNC_IMPL(__imp__sub_83C191F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C191F8"))) PPC_WEAK_FUNC(sub_83C191F8);
PPC_FUNC_IMPL(__imp__sub_83C191F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20008
	ctx.r3.s64 = ctx.r11.s64 + -20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19204"))) PPC_WEAK_FUNC(sub_83C19204);
PPC_FUNC_IMPL(__imp__sub_83C19204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19208"))) PPC_WEAK_FUNC(sub_83C19208);
PPC_FUNC_IMPL(__imp__sub_83C19208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19214"))) PPC_WEAK_FUNC(sub_83C19214);
PPC_FUNC_IMPL(__imp__sub_83C19214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19218"))) PPC_WEAK_FUNC(sub_83C19218);
PPC_FUNC_IMPL(__imp__sub_83C19218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19992
	ctx.r3.s64 = ctx.r11.s64 + -19992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19224"))) PPC_WEAK_FUNC(sub_83C19224);
PPC_FUNC_IMPL(__imp__sub_83C19224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19228"))) PPC_WEAK_FUNC(sub_83C19228);
PPC_FUNC_IMPL(__imp__sub_83C19228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19984
	ctx.r3.s64 = ctx.r11.s64 + -19984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19234"))) PPC_WEAK_FUNC(sub_83C19234);
PPC_FUNC_IMPL(__imp__sub_83C19234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19238"))) PPC_WEAK_FUNC(sub_83C19238);
PPC_FUNC_IMPL(__imp__sub_83C19238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19976
	ctx.r3.s64 = ctx.r11.s64 + -19976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19244"))) PPC_WEAK_FUNC(sub_83C19244);
PPC_FUNC_IMPL(__imp__sub_83C19244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19248"))) PPC_WEAK_FUNC(sub_83C19248);
PPC_FUNC_IMPL(__imp__sub_83C19248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19968
	ctx.r3.s64 = ctx.r11.s64 + -19968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19254"))) PPC_WEAK_FUNC(sub_83C19254);
PPC_FUNC_IMPL(__imp__sub_83C19254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19258"))) PPC_WEAK_FUNC(sub_83C19258);
PPC_FUNC_IMPL(__imp__sub_83C19258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19960
	ctx.r3.s64 = ctx.r11.s64 + -19960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19264"))) PPC_WEAK_FUNC(sub_83C19264);
PPC_FUNC_IMPL(__imp__sub_83C19264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19268"))) PPC_WEAK_FUNC(sub_83C19268);
PPC_FUNC_IMPL(__imp__sub_83C19268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19274"))) PPC_WEAK_FUNC(sub_83C19274);
PPC_FUNC_IMPL(__imp__sub_83C19274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19278"))) PPC_WEAK_FUNC(sub_83C19278);
PPC_FUNC_IMPL(__imp__sub_83C19278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19944
	ctx.r3.s64 = ctx.r11.s64 + -19944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19284"))) PPC_WEAK_FUNC(sub_83C19284);
PPC_FUNC_IMPL(__imp__sub_83C19284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19288"))) PPC_WEAK_FUNC(sub_83C19288);
PPC_FUNC_IMPL(__imp__sub_83C19288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19936
	ctx.r3.s64 = ctx.r11.s64 + -19936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19294"))) PPC_WEAK_FUNC(sub_83C19294);
PPC_FUNC_IMPL(__imp__sub_83C19294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19298"))) PPC_WEAK_FUNC(sub_83C19298);
PPC_FUNC_IMPL(__imp__sub_83C19298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19928
	ctx.r3.s64 = ctx.r11.s64 + -19928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C192A4"))) PPC_WEAK_FUNC(sub_83C192A4);
PPC_FUNC_IMPL(__imp__sub_83C192A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C192A8"))) PPC_WEAK_FUNC(sub_83C192A8);
PPC_FUNC_IMPL(__imp__sub_83C192A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19920
	ctx.r3.s64 = ctx.r11.s64 + -19920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C192B4"))) PPC_WEAK_FUNC(sub_83C192B4);
PPC_FUNC_IMPL(__imp__sub_83C192B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C192B8"))) PPC_WEAK_FUNC(sub_83C192B8);
PPC_FUNC_IMPL(__imp__sub_83C192B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C192C4"))) PPC_WEAK_FUNC(sub_83C192C4);
PPC_FUNC_IMPL(__imp__sub_83C192C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C192C8"))) PPC_WEAK_FUNC(sub_83C192C8);
PPC_FUNC_IMPL(__imp__sub_83C192C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19904
	ctx.r3.s64 = ctx.r11.s64 + -19904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C192D4"))) PPC_WEAK_FUNC(sub_83C192D4);
PPC_FUNC_IMPL(__imp__sub_83C192D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C192D8"))) PPC_WEAK_FUNC(sub_83C192D8);
PPC_FUNC_IMPL(__imp__sub_83C192D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19896
	ctx.r3.s64 = ctx.r11.s64 + -19896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C192E4"))) PPC_WEAK_FUNC(sub_83C192E4);
PPC_FUNC_IMPL(__imp__sub_83C192E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C192E8"))) PPC_WEAK_FUNC(sub_83C192E8);
PPC_FUNC_IMPL(__imp__sub_83C192E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19888
	ctx.r3.s64 = ctx.r11.s64 + -19888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C192F4"))) PPC_WEAK_FUNC(sub_83C192F4);
PPC_FUNC_IMPL(__imp__sub_83C192F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C192F8"))) PPC_WEAK_FUNC(sub_83C192F8);
PPC_FUNC_IMPL(__imp__sub_83C192F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19304"))) PPC_WEAK_FUNC(sub_83C19304);
PPC_FUNC_IMPL(__imp__sub_83C19304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19308"))) PPC_WEAK_FUNC(sub_83C19308);
PPC_FUNC_IMPL(__imp__sub_83C19308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19314"))) PPC_WEAK_FUNC(sub_83C19314);
PPC_FUNC_IMPL(__imp__sub_83C19314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19318"))) PPC_WEAK_FUNC(sub_83C19318);
PPC_FUNC_IMPL(__imp__sub_83C19318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19864
	ctx.r3.s64 = ctx.r11.s64 + -19864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19324"))) PPC_WEAK_FUNC(sub_83C19324);
PPC_FUNC_IMPL(__imp__sub_83C19324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19328"))) PPC_WEAK_FUNC(sub_83C19328);
PPC_FUNC_IMPL(__imp__sub_83C19328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19856
	ctx.r3.s64 = ctx.r11.s64 + -19856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19334"))) PPC_WEAK_FUNC(sub_83C19334);
PPC_FUNC_IMPL(__imp__sub_83C19334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19338"))) PPC_WEAK_FUNC(sub_83C19338);
PPC_FUNC_IMPL(__imp__sub_83C19338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19848
	ctx.r3.s64 = ctx.r11.s64 + -19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19344"))) PPC_WEAK_FUNC(sub_83C19344);
PPC_FUNC_IMPL(__imp__sub_83C19344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19348"))) PPC_WEAK_FUNC(sub_83C19348);
PPC_FUNC_IMPL(__imp__sub_83C19348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19840
	ctx.r3.s64 = ctx.r11.s64 + -19840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19354"))) PPC_WEAK_FUNC(sub_83C19354);
PPC_FUNC_IMPL(__imp__sub_83C19354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19358"))) PPC_WEAK_FUNC(sub_83C19358);
PPC_FUNC_IMPL(__imp__sub_83C19358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19832
	ctx.r3.s64 = ctx.r11.s64 + -19832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19364"))) PPC_WEAK_FUNC(sub_83C19364);
PPC_FUNC_IMPL(__imp__sub_83C19364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19368"))) PPC_WEAK_FUNC(sub_83C19368);
PPC_FUNC_IMPL(__imp__sub_83C19368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19824
	ctx.r3.s64 = ctx.r11.s64 + -19824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19374"))) PPC_WEAK_FUNC(sub_83C19374);
PPC_FUNC_IMPL(__imp__sub_83C19374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19378"))) PPC_WEAK_FUNC(sub_83C19378);
PPC_FUNC_IMPL(__imp__sub_83C19378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19384"))) PPC_WEAK_FUNC(sub_83C19384);
PPC_FUNC_IMPL(__imp__sub_83C19384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19388"))) PPC_WEAK_FUNC(sub_83C19388);
PPC_FUNC_IMPL(__imp__sub_83C19388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19394"))) PPC_WEAK_FUNC(sub_83C19394);
PPC_FUNC_IMPL(__imp__sub_83C19394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19398"))) PPC_WEAK_FUNC(sub_83C19398);
PPC_FUNC_IMPL(__imp__sub_83C19398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19800
	ctx.r3.s64 = ctx.r11.s64 + -19800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C193A4"))) PPC_WEAK_FUNC(sub_83C193A4);
PPC_FUNC_IMPL(__imp__sub_83C193A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C193A8"))) PPC_WEAK_FUNC(sub_83C193A8);
PPC_FUNC_IMPL(__imp__sub_83C193A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19792
	ctx.r3.s64 = ctx.r11.s64 + -19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C193B4"))) PPC_WEAK_FUNC(sub_83C193B4);
PPC_FUNC_IMPL(__imp__sub_83C193B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C193B8"))) PPC_WEAK_FUNC(sub_83C193B8);
PPC_FUNC_IMPL(__imp__sub_83C193B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19784
	ctx.r3.s64 = ctx.r11.s64 + -19784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C193C4"))) PPC_WEAK_FUNC(sub_83C193C4);
PPC_FUNC_IMPL(__imp__sub_83C193C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C193C8"))) PPC_WEAK_FUNC(sub_83C193C8);
PPC_FUNC_IMPL(__imp__sub_83C193C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19776
	ctx.r3.s64 = ctx.r11.s64 + -19776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C193D4"))) PPC_WEAK_FUNC(sub_83C193D4);
PPC_FUNC_IMPL(__imp__sub_83C193D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C193D8"))) PPC_WEAK_FUNC(sub_83C193D8);
PPC_FUNC_IMPL(__imp__sub_83C193D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19768
	ctx.r3.s64 = ctx.r11.s64 + -19768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C193E4"))) PPC_WEAK_FUNC(sub_83C193E4);
PPC_FUNC_IMPL(__imp__sub_83C193E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C193E8"))) PPC_WEAK_FUNC(sub_83C193E8);
PPC_FUNC_IMPL(__imp__sub_83C193E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19760
	ctx.r3.s64 = ctx.r11.s64 + -19760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C193F4"))) PPC_WEAK_FUNC(sub_83C193F4);
PPC_FUNC_IMPL(__imp__sub_83C193F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C193F8"))) PPC_WEAK_FUNC(sub_83C193F8);
PPC_FUNC_IMPL(__imp__sub_83C193F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19752
	ctx.r3.s64 = ctx.r11.s64 + -19752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19404"))) PPC_WEAK_FUNC(sub_83C19404);
PPC_FUNC_IMPL(__imp__sub_83C19404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19408"))) PPC_WEAK_FUNC(sub_83C19408);
PPC_FUNC_IMPL(__imp__sub_83C19408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19414"))) PPC_WEAK_FUNC(sub_83C19414);
PPC_FUNC_IMPL(__imp__sub_83C19414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19418"))) PPC_WEAK_FUNC(sub_83C19418);
PPC_FUNC_IMPL(__imp__sub_83C19418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19736
	ctx.r3.s64 = ctx.r11.s64 + -19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19424"))) PPC_WEAK_FUNC(sub_83C19424);
PPC_FUNC_IMPL(__imp__sub_83C19424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19428"))) PPC_WEAK_FUNC(sub_83C19428);
PPC_FUNC_IMPL(__imp__sub_83C19428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19728
	ctx.r3.s64 = ctx.r11.s64 + -19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19434"))) PPC_WEAK_FUNC(sub_83C19434);
PPC_FUNC_IMPL(__imp__sub_83C19434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19438"))) PPC_WEAK_FUNC(sub_83C19438);
PPC_FUNC_IMPL(__imp__sub_83C19438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19720
	ctx.r3.s64 = ctx.r11.s64 + -19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19444"))) PPC_WEAK_FUNC(sub_83C19444);
PPC_FUNC_IMPL(__imp__sub_83C19444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19448"))) PPC_WEAK_FUNC(sub_83C19448);
PPC_FUNC_IMPL(__imp__sub_83C19448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19712
	ctx.r3.s64 = ctx.r11.s64 + -19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19454"))) PPC_WEAK_FUNC(sub_83C19454);
PPC_FUNC_IMPL(__imp__sub_83C19454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19458"))) PPC_WEAK_FUNC(sub_83C19458);
PPC_FUNC_IMPL(__imp__sub_83C19458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19704
	ctx.r3.s64 = ctx.r11.s64 + -19704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19464"))) PPC_WEAK_FUNC(sub_83C19464);
PPC_FUNC_IMPL(__imp__sub_83C19464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19468"))) PPC_WEAK_FUNC(sub_83C19468);
PPC_FUNC_IMPL(__imp__sub_83C19468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19696
	ctx.r3.s64 = ctx.r11.s64 + -19696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19474"))) PPC_WEAK_FUNC(sub_83C19474);
PPC_FUNC_IMPL(__imp__sub_83C19474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19478"))) PPC_WEAK_FUNC(sub_83C19478);
PPC_FUNC_IMPL(__imp__sub_83C19478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19688
	ctx.r3.s64 = ctx.r11.s64 + -19688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19484"))) PPC_WEAK_FUNC(sub_83C19484);
PPC_FUNC_IMPL(__imp__sub_83C19484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19488"))) PPC_WEAK_FUNC(sub_83C19488);
PPC_FUNC_IMPL(__imp__sub_83C19488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19680
	ctx.r3.s64 = ctx.r11.s64 + -19680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C19494"))) PPC_WEAK_FUNC(sub_83C19494);
PPC_FUNC_IMPL(__imp__sub_83C19494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C19498"))) PPC_WEAK_FUNC(sub_83C19498);
PPC_FUNC_IMPL(__imp__sub_83C19498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19672
	ctx.r3.s64 = ctx.r11.s64 + -19672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C194A4"))) PPC_WEAK_FUNC(sub_83C194A4);
PPC_FUNC_IMPL(__imp__sub_83C194A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C194A8"))) PPC_WEAK_FUNC(sub_83C194A8);
PPC_FUNC_IMPL(__imp__sub_83C194A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

