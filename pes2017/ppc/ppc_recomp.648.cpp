#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BD1148"))) PPC_WEAK_FUNC(sub_83BD1148);
PPC_FUNC_IMPL(__imp__sub_83BD1148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16880
	ctx.r3.s64 = ctx.r11.s64 + 16880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1154"))) PPC_WEAK_FUNC(sub_83BD1154);
PPC_FUNC_IMPL(__imp__sub_83BD1154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1158"))) PPC_WEAK_FUNC(sub_83BD1158);
PPC_FUNC_IMPL(__imp__sub_83BD1158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16888
	ctx.r3.s64 = ctx.r11.s64 + 16888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1164"))) PPC_WEAK_FUNC(sub_83BD1164);
PPC_FUNC_IMPL(__imp__sub_83BD1164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1168"))) PPC_WEAK_FUNC(sub_83BD1168);
PPC_FUNC_IMPL(__imp__sub_83BD1168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16896
	ctx.r3.s64 = ctx.r11.s64 + 16896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1174"))) PPC_WEAK_FUNC(sub_83BD1174);
PPC_FUNC_IMPL(__imp__sub_83BD1174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1178"))) PPC_WEAK_FUNC(sub_83BD1178);
PPC_FUNC_IMPL(__imp__sub_83BD1178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16904
	ctx.r3.s64 = ctx.r11.s64 + 16904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1184"))) PPC_WEAK_FUNC(sub_83BD1184);
PPC_FUNC_IMPL(__imp__sub_83BD1184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1188"))) PPC_WEAK_FUNC(sub_83BD1188);
PPC_FUNC_IMPL(__imp__sub_83BD1188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16912
	ctx.r3.s64 = ctx.r11.s64 + 16912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1194"))) PPC_WEAK_FUNC(sub_83BD1194);
PPC_FUNC_IMPL(__imp__sub_83BD1194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1198"))) PPC_WEAK_FUNC(sub_83BD1198);
PPC_FUNC_IMPL(__imp__sub_83BD1198) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,20736
	ctx.r3.s64 = ctx.r11.s64 + 20736;
	// bl 0x83523120
	ctx.lr = 0x83BD11B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16920
	ctx.r3.s64 = ctx.r10.s64 + 16920;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD11BC;
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

__attribute__((alias("__imp__sub_83BD11CC"))) PPC_WEAK_FUNC(sub_83BD11CC);
PPC_FUNC_IMPL(__imp__sub_83BD11CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD11D0"))) PPC_WEAK_FUNC(sub_83BD11D0);
PPC_FUNC_IMPL(__imp__sub_83BD11D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20752
	ctx.r7.s64 = ctx.r8.s64 + 20752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD11F8"))) PPC_WEAK_FUNC(sub_83BD11F8);
PPC_FUNC_IMPL(__imp__sub_83BD11F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,21944
	ctx.r6.s64 = ctx.r7.s64 + 21944;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20752);
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
	// std r9,21944(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21944, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1240"))) PPC_WEAK_FUNC(sub_83BD1240);
PPC_FUNC_IMPL(__imp__sub_83BD1240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16936
	ctx.r3.s64 = ctx.r11.s64 + 16936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD124C"))) PPC_WEAK_FUNC(sub_83BD124C);
PPC_FUNC_IMPL(__imp__sub_83BD124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1250"))) PPC_WEAK_FUNC(sub_83BD1250);
PPC_FUNC_IMPL(__imp__sub_83BD1250) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,20760
	ctx.r3.s64 = ctx.r11.s64 + 20760;
	// bl 0x8259af80
	ctx.lr = 0x83BD1268;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16952
	ctx.r3.s64 = ctx.r10.s64 + 16952;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1274;
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

__attribute__((alias("__imp__sub_83BD1284"))) PPC_WEAK_FUNC(sub_83BD1284);
PPC_FUNC_IMPL(__imp__sub_83BD1284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1288"))) PPC_WEAK_FUNC(sub_83BD1288);
PPC_FUNC_IMPL(__imp__sub_83BD1288) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20740
	ctx.r11.s64 = ctx.r8.s64 + 20740;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,21920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21920);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16944
	ctx.r3.s64 = ctx.r6.s64 + 16944;
	// stw r10,20740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20740, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD12B8"))) PPC_WEAK_FUNC(sub_83BD12B8);
PPC_FUNC_IMPL(__imp__sub_83BD12B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16960
	ctx.r3.s64 = ctx.r11.s64 + 16960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD12C4"))) PPC_WEAK_FUNC(sub_83BD12C4);
PPC_FUNC_IMPL(__imp__sub_83BD12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD12C8"))) PPC_WEAK_FUNC(sub_83BD12C8);
PPC_FUNC_IMPL(__imp__sub_83BD12C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16968
	ctx.r3.s64 = ctx.r11.s64 + 16968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD12D4"))) PPC_WEAK_FUNC(sub_83BD12D4);
PPC_FUNC_IMPL(__imp__sub_83BD12D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD12D8"))) PPC_WEAK_FUNC(sub_83BD12D8);
PPC_FUNC_IMPL(__imp__sub_83BD12D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16976
	ctx.r3.s64 = ctx.r11.s64 + 16976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD12E4"))) PPC_WEAK_FUNC(sub_83BD12E4);
PPC_FUNC_IMPL(__imp__sub_83BD12E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD12E8"))) PPC_WEAK_FUNC(sub_83BD12E8);
PPC_FUNC_IMPL(__imp__sub_83BD12E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16984
	ctx.r3.s64 = ctx.r11.s64 + 16984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD12F4"))) PPC_WEAK_FUNC(sub_83BD12F4);
PPC_FUNC_IMPL(__imp__sub_83BD12F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD12F8"))) PPC_WEAK_FUNC(sub_83BD12F8);
PPC_FUNC_IMPL(__imp__sub_83BD12F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1304"))) PPC_WEAK_FUNC(sub_83BD1304);
PPC_FUNC_IMPL(__imp__sub_83BD1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1308"))) PPC_WEAK_FUNC(sub_83BD1308);
PPC_FUNC_IMPL(__imp__sub_83BD1308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17000
	ctx.r3.s64 = ctx.r11.s64 + 17000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1314"))) PPC_WEAK_FUNC(sub_83BD1314);
PPC_FUNC_IMPL(__imp__sub_83BD1314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1318"))) PPC_WEAK_FUNC(sub_83BD1318);
PPC_FUNC_IMPL(__imp__sub_83BD1318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17008
	ctx.r3.s64 = ctx.r11.s64 + 17008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1324"))) PPC_WEAK_FUNC(sub_83BD1324);
PPC_FUNC_IMPL(__imp__sub_83BD1324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1328"))) PPC_WEAK_FUNC(sub_83BD1328);
PPC_FUNC_IMPL(__imp__sub_83BD1328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17016
	ctx.r3.s64 = ctx.r11.s64 + 17016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1334"))) PPC_WEAK_FUNC(sub_83BD1334);
PPC_FUNC_IMPL(__imp__sub_83BD1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1338"))) PPC_WEAK_FUNC(sub_83BD1338);
PPC_FUNC_IMPL(__imp__sub_83BD1338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17024
	ctx.r3.s64 = ctx.r11.s64 + 17024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1344"))) PPC_WEAK_FUNC(sub_83BD1344);
PPC_FUNC_IMPL(__imp__sub_83BD1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1348"))) PPC_WEAK_FUNC(sub_83BD1348);
PPC_FUNC_IMPL(__imp__sub_83BD1348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17032
	ctx.r3.s64 = ctx.r11.s64 + 17032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1354"))) PPC_WEAK_FUNC(sub_83BD1354);
PPC_FUNC_IMPL(__imp__sub_83BD1354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1358"))) PPC_WEAK_FUNC(sub_83BD1358);
PPC_FUNC_IMPL(__imp__sub_83BD1358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17040
	ctx.r3.s64 = ctx.r11.s64 + 17040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1364"))) PPC_WEAK_FUNC(sub_83BD1364);
PPC_FUNC_IMPL(__imp__sub_83BD1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1368"))) PPC_WEAK_FUNC(sub_83BD1368);
PPC_FUNC_IMPL(__imp__sub_83BD1368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17048
	ctx.r3.s64 = ctx.r11.s64 + 17048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1374"))) PPC_WEAK_FUNC(sub_83BD1374);
PPC_FUNC_IMPL(__imp__sub_83BD1374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1378"))) PPC_WEAK_FUNC(sub_83BD1378);
PPC_FUNC_IMPL(__imp__sub_83BD1378) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,21104
	ctx.r3.s64 = ctx.r11.s64 + 21104;
	// bl 0x83523120
	ctx.lr = 0x83BD1390;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17056
	ctx.r3.s64 = ctx.r10.s64 + 17056;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD139C;
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

__attribute__((alias("__imp__sub_83BD13AC"))) PPC_WEAK_FUNC(sub_83BD13AC);
PPC_FUNC_IMPL(__imp__sub_83BD13AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD13B0"))) PPC_WEAK_FUNC(sub_83BD13B0);
PPC_FUNC_IMPL(__imp__sub_83BD13B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21120
	ctx.r7.s64 = ctx.r8.s64 + 21120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD13D8"))) PPC_WEAK_FUNC(sub_83BD13D8);
PPC_FUNC_IMPL(__imp__sub_83BD13D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,22092
	ctx.r6.s64 = ctx.r7.s64 + 22092;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22020(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22020);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21120);
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
	// std r9,22092(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22092, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1420"))) PPC_WEAK_FUNC(sub_83BD1420);
PPC_FUNC_IMPL(__imp__sub_83BD1420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17072
	ctx.r3.s64 = ctx.r11.s64 + 17072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD142C"))) PPC_WEAK_FUNC(sub_83BD142C);
PPC_FUNC_IMPL(__imp__sub_83BD142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1430"))) PPC_WEAK_FUNC(sub_83BD1430);
PPC_FUNC_IMPL(__imp__sub_83BD1430) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// bl 0x8259af80
	ctx.lr = 0x83BD1448;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17088
	ctx.r3.s64 = ctx.r10.s64 + 17088;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1454;
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

__attribute__((alias("__imp__sub_83BD1464"))) PPC_WEAK_FUNC(sub_83BD1464);
PPC_FUNC_IMPL(__imp__sub_83BD1464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1468"))) PPC_WEAK_FUNC(sub_83BD1468);
PPC_FUNC_IMPL(__imp__sub_83BD1468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21108
	ctx.r11.s64 = ctx.r8.s64 + 21108;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,22068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22068);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17080
	ctx.r3.s64 = ctx.r6.s64 + 17080;
	// stw r10,21108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21108, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1498"))) PPC_WEAK_FUNC(sub_83BD1498);
PPC_FUNC_IMPL(__imp__sub_83BD1498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17096
	ctx.r3.s64 = ctx.r11.s64 + 17096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD14A4"))) PPC_WEAK_FUNC(sub_83BD14A4);
PPC_FUNC_IMPL(__imp__sub_83BD14A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD14A8"))) PPC_WEAK_FUNC(sub_83BD14A8);
PPC_FUNC_IMPL(__imp__sub_83BD14A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17104
	ctx.r3.s64 = ctx.r11.s64 + 17104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD14B4"))) PPC_WEAK_FUNC(sub_83BD14B4);
PPC_FUNC_IMPL(__imp__sub_83BD14B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD14B8"))) PPC_WEAK_FUNC(sub_83BD14B8);
PPC_FUNC_IMPL(__imp__sub_83BD14B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17112
	ctx.r3.s64 = ctx.r11.s64 + 17112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD14C4"))) PPC_WEAK_FUNC(sub_83BD14C4);
PPC_FUNC_IMPL(__imp__sub_83BD14C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD14C8"))) PPC_WEAK_FUNC(sub_83BD14C8);
PPC_FUNC_IMPL(__imp__sub_83BD14C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17120
	ctx.r3.s64 = ctx.r11.s64 + 17120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD14D4"))) PPC_WEAK_FUNC(sub_83BD14D4);
PPC_FUNC_IMPL(__imp__sub_83BD14D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD14D8"))) PPC_WEAK_FUNC(sub_83BD14D8);
PPC_FUNC_IMPL(__imp__sub_83BD14D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17128
	ctx.r3.s64 = ctx.r11.s64 + 17128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD14E4"))) PPC_WEAK_FUNC(sub_83BD14E4);
PPC_FUNC_IMPL(__imp__sub_83BD14E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD14E8"))) PPC_WEAK_FUNC(sub_83BD14E8);
PPC_FUNC_IMPL(__imp__sub_83BD14E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17136
	ctx.r3.s64 = ctx.r11.s64 + 17136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD14F4"))) PPC_WEAK_FUNC(sub_83BD14F4);
PPC_FUNC_IMPL(__imp__sub_83BD14F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD14F8"))) PPC_WEAK_FUNC(sub_83BD14F8);
PPC_FUNC_IMPL(__imp__sub_83BD14F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17144
	ctx.r3.s64 = ctx.r11.s64 + 17144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1504"))) PPC_WEAK_FUNC(sub_83BD1504);
PPC_FUNC_IMPL(__imp__sub_83BD1504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1508"))) PPC_WEAK_FUNC(sub_83BD1508);
PPC_FUNC_IMPL(__imp__sub_83BD1508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17152
	ctx.r3.s64 = ctx.r11.s64 + 17152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1514"))) PPC_WEAK_FUNC(sub_83BD1514);
PPC_FUNC_IMPL(__imp__sub_83BD1514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1518"))) PPC_WEAK_FUNC(sub_83BD1518);
PPC_FUNC_IMPL(__imp__sub_83BD1518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17160
	ctx.r3.s64 = ctx.r11.s64 + 17160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1524"))) PPC_WEAK_FUNC(sub_83BD1524);
PPC_FUNC_IMPL(__imp__sub_83BD1524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1528"))) PPC_WEAK_FUNC(sub_83BD1528);
PPC_FUNC_IMPL(__imp__sub_83BD1528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17168
	ctx.r3.s64 = ctx.r11.s64 + 17168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1534"))) PPC_WEAK_FUNC(sub_83BD1534);
PPC_FUNC_IMPL(__imp__sub_83BD1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1538"))) PPC_WEAK_FUNC(sub_83BD1538);
PPC_FUNC_IMPL(__imp__sub_83BD1538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17176
	ctx.r3.s64 = ctx.r11.s64 + 17176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1544"))) PPC_WEAK_FUNC(sub_83BD1544);
PPC_FUNC_IMPL(__imp__sub_83BD1544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1548"))) PPC_WEAK_FUNC(sub_83BD1548);
PPC_FUNC_IMPL(__imp__sub_83BD1548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17184
	ctx.r3.s64 = ctx.r11.s64 + 17184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1554"))) PPC_WEAK_FUNC(sub_83BD1554);
PPC_FUNC_IMPL(__imp__sub_83BD1554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1558"))) PPC_WEAK_FUNC(sub_83BD1558);
PPC_FUNC_IMPL(__imp__sub_83BD1558) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,21472
	ctx.r3.s64 = ctx.r11.s64 + 21472;
	// bl 0x83523120
	ctx.lr = 0x83BD1570;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17192
	ctx.r3.s64 = ctx.r10.s64 + 17192;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD157C;
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

__attribute__((alias("__imp__sub_83BD158C"))) PPC_WEAK_FUNC(sub_83BD158C);
PPC_FUNC_IMPL(__imp__sub_83BD158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1590"))) PPC_WEAK_FUNC(sub_83BD1590);
PPC_FUNC_IMPL(__imp__sub_83BD1590) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21488
	ctx.r7.s64 = ctx.r8.s64 + 21488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD15B8"))) PPC_WEAK_FUNC(sub_83BD15B8);
PPC_FUNC_IMPL(__imp__sub_83BD15B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,22224
	ctx.r6.s64 = ctx.r7.s64 + 22224;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21488);
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
	// std r9,22224(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22224, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1600"))) PPC_WEAK_FUNC(sub_83BD1600);
PPC_FUNC_IMPL(__imp__sub_83BD1600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17208
	ctx.r3.s64 = ctx.r11.s64 + 17208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD160C"))) PPC_WEAK_FUNC(sub_83BD160C);
PPC_FUNC_IMPL(__imp__sub_83BD160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1610"))) PPC_WEAK_FUNC(sub_83BD1610);
PPC_FUNC_IMPL(__imp__sub_83BD1610) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,21496
	ctx.r3.s64 = ctx.r11.s64 + 21496;
	// bl 0x8259af80
	ctx.lr = 0x83BD1628;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17224
	ctx.r3.s64 = ctx.r10.s64 + 17224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1634;
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

__attribute__((alias("__imp__sub_83BD1644"))) PPC_WEAK_FUNC(sub_83BD1644);
PPC_FUNC_IMPL(__imp__sub_83BD1644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1648"))) PPC_WEAK_FUNC(sub_83BD1648);
PPC_FUNC_IMPL(__imp__sub_83BD1648) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21476
	ctx.r11.s64 = ctx.r8.s64 + 21476;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,22200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22200);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17216
	ctx.r3.s64 = ctx.r6.s64 + 17216;
	// stw r10,21476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21476, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1678"))) PPC_WEAK_FUNC(sub_83BD1678);
PPC_FUNC_IMPL(__imp__sub_83BD1678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17232
	ctx.r3.s64 = ctx.r11.s64 + 17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1684"))) PPC_WEAK_FUNC(sub_83BD1684);
PPC_FUNC_IMPL(__imp__sub_83BD1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1688"))) PPC_WEAK_FUNC(sub_83BD1688);
PPC_FUNC_IMPL(__imp__sub_83BD1688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17240
	ctx.r3.s64 = ctx.r11.s64 + 17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1694"))) PPC_WEAK_FUNC(sub_83BD1694);
PPC_FUNC_IMPL(__imp__sub_83BD1694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1698"))) PPC_WEAK_FUNC(sub_83BD1698);
PPC_FUNC_IMPL(__imp__sub_83BD1698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17248
	ctx.r3.s64 = ctx.r11.s64 + 17248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD16A4"))) PPC_WEAK_FUNC(sub_83BD16A4);
PPC_FUNC_IMPL(__imp__sub_83BD16A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD16A8"))) PPC_WEAK_FUNC(sub_83BD16A8);
PPC_FUNC_IMPL(__imp__sub_83BD16A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17256
	ctx.r3.s64 = ctx.r11.s64 + 17256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD16B4"))) PPC_WEAK_FUNC(sub_83BD16B4);
PPC_FUNC_IMPL(__imp__sub_83BD16B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD16B8"))) PPC_WEAK_FUNC(sub_83BD16B8);
PPC_FUNC_IMPL(__imp__sub_83BD16B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17264
	ctx.r3.s64 = ctx.r11.s64 + 17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD16C4"))) PPC_WEAK_FUNC(sub_83BD16C4);
PPC_FUNC_IMPL(__imp__sub_83BD16C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD16C8"))) PPC_WEAK_FUNC(sub_83BD16C8);
PPC_FUNC_IMPL(__imp__sub_83BD16C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17272
	ctx.r3.s64 = ctx.r11.s64 + 17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD16D4"))) PPC_WEAK_FUNC(sub_83BD16D4);
PPC_FUNC_IMPL(__imp__sub_83BD16D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD16D8"))) PPC_WEAK_FUNC(sub_83BD16D8);
PPC_FUNC_IMPL(__imp__sub_83BD16D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17280
	ctx.r3.s64 = ctx.r11.s64 + 17280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD16E4"))) PPC_WEAK_FUNC(sub_83BD16E4);
PPC_FUNC_IMPL(__imp__sub_83BD16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD16E8"))) PPC_WEAK_FUNC(sub_83BD16E8);
PPC_FUNC_IMPL(__imp__sub_83BD16E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17288
	ctx.r3.s64 = ctx.r11.s64 + 17288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD16F4"))) PPC_WEAK_FUNC(sub_83BD16F4);
PPC_FUNC_IMPL(__imp__sub_83BD16F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD16F8"))) PPC_WEAK_FUNC(sub_83BD16F8);
PPC_FUNC_IMPL(__imp__sub_83BD16F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17296
	ctx.r3.s64 = ctx.r11.s64 + 17296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1704"))) PPC_WEAK_FUNC(sub_83BD1704);
PPC_FUNC_IMPL(__imp__sub_83BD1704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1708"))) PPC_WEAK_FUNC(sub_83BD1708);
PPC_FUNC_IMPL(__imp__sub_83BD1708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17304
	ctx.r3.s64 = ctx.r11.s64 + 17304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1714"))) PPC_WEAK_FUNC(sub_83BD1714);
PPC_FUNC_IMPL(__imp__sub_83BD1714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1718"))) PPC_WEAK_FUNC(sub_83BD1718);
PPC_FUNC_IMPL(__imp__sub_83BD1718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17312
	ctx.r3.s64 = ctx.r11.s64 + 17312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1724"))) PPC_WEAK_FUNC(sub_83BD1724);
PPC_FUNC_IMPL(__imp__sub_83BD1724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1728"))) PPC_WEAK_FUNC(sub_83BD1728);
PPC_FUNC_IMPL(__imp__sub_83BD1728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17320
	ctx.r3.s64 = ctx.r11.s64 + 17320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1734"))) PPC_WEAK_FUNC(sub_83BD1734);
PPC_FUNC_IMPL(__imp__sub_83BD1734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1738"))) PPC_WEAK_FUNC(sub_83BD1738);
PPC_FUNC_IMPL(__imp__sub_83BD1738) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,21840
	ctx.r3.s64 = ctx.r11.s64 + 21840;
	// bl 0x83523120
	ctx.lr = 0x83BD1750;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17328
	ctx.r3.s64 = ctx.r10.s64 + 17328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD175C;
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

__attribute__((alias("__imp__sub_83BD176C"))) PPC_WEAK_FUNC(sub_83BD176C);
PPC_FUNC_IMPL(__imp__sub_83BD176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1770"))) PPC_WEAK_FUNC(sub_83BD1770);
PPC_FUNC_IMPL(__imp__sub_83BD1770) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21856
	ctx.r7.s64 = ctx.r8.s64 + 21856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21856);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21856, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1798"))) PPC_WEAK_FUNC(sub_83BD1798);
PPC_FUNC_IMPL(__imp__sub_83BD1798) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,22352
	ctx.r6.s64 = ctx.r7.s64 + 22352;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21856);
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
	// std r9,22352(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD17E0"))) PPC_WEAK_FUNC(sub_83BD17E0);
PPC_FUNC_IMPL(__imp__sub_83BD17E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17344
	ctx.r3.s64 = ctx.r11.s64 + 17344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD17EC"))) PPC_WEAK_FUNC(sub_83BD17EC);
PPC_FUNC_IMPL(__imp__sub_83BD17EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD17F0"))) PPC_WEAK_FUNC(sub_83BD17F0);
PPC_FUNC_IMPL(__imp__sub_83BD17F0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,21864
	ctx.r3.s64 = ctx.r11.s64 + 21864;
	// bl 0x8259af80
	ctx.lr = 0x83BD1808;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17360
	ctx.r3.s64 = ctx.r10.s64 + 17360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1814;
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

__attribute__((alias("__imp__sub_83BD1824"))) PPC_WEAK_FUNC(sub_83BD1824);
PPC_FUNC_IMPL(__imp__sub_83BD1824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1828"))) PPC_WEAK_FUNC(sub_83BD1828);
PPC_FUNC_IMPL(__imp__sub_83BD1828) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21844
	ctx.r11.s64 = ctx.r8.s64 + 21844;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,22328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22328);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17352
	ctx.r3.s64 = ctx.r6.s64 + 17352;
	// stw r10,21844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1858"))) PPC_WEAK_FUNC(sub_83BD1858);
PPC_FUNC_IMPL(__imp__sub_83BD1858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17368
	ctx.r3.s64 = ctx.r11.s64 + 17368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1864"))) PPC_WEAK_FUNC(sub_83BD1864);
PPC_FUNC_IMPL(__imp__sub_83BD1864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1868"))) PPC_WEAK_FUNC(sub_83BD1868);
PPC_FUNC_IMPL(__imp__sub_83BD1868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17376
	ctx.r3.s64 = ctx.r11.s64 + 17376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1874"))) PPC_WEAK_FUNC(sub_83BD1874);
PPC_FUNC_IMPL(__imp__sub_83BD1874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1878"))) PPC_WEAK_FUNC(sub_83BD1878);
PPC_FUNC_IMPL(__imp__sub_83BD1878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17384
	ctx.r3.s64 = ctx.r11.s64 + 17384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1884"))) PPC_WEAK_FUNC(sub_83BD1884);
PPC_FUNC_IMPL(__imp__sub_83BD1884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1888"))) PPC_WEAK_FUNC(sub_83BD1888);
PPC_FUNC_IMPL(__imp__sub_83BD1888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17392
	ctx.r3.s64 = ctx.r11.s64 + 17392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1894"))) PPC_WEAK_FUNC(sub_83BD1894);
PPC_FUNC_IMPL(__imp__sub_83BD1894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1898"))) PPC_WEAK_FUNC(sub_83BD1898);
PPC_FUNC_IMPL(__imp__sub_83BD1898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17400
	ctx.r3.s64 = ctx.r11.s64 + 17400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD18A4"))) PPC_WEAK_FUNC(sub_83BD18A4);
PPC_FUNC_IMPL(__imp__sub_83BD18A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD18A8"))) PPC_WEAK_FUNC(sub_83BD18A8);
PPC_FUNC_IMPL(__imp__sub_83BD18A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17408
	ctx.r3.s64 = ctx.r11.s64 + 17408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD18B4"))) PPC_WEAK_FUNC(sub_83BD18B4);
PPC_FUNC_IMPL(__imp__sub_83BD18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD18B8"))) PPC_WEAK_FUNC(sub_83BD18B8);
PPC_FUNC_IMPL(__imp__sub_83BD18B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17416
	ctx.r3.s64 = ctx.r11.s64 + 17416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD18C4"))) PPC_WEAK_FUNC(sub_83BD18C4);
PPC_FUNC_IMPL(__imp__sub_83BD18C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD18C8"))) PPC_WEAK_FUNC(sub_83BD18C8);
PPC_FUNC_IMPL(__imp__sub_83BD18C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17424
	ctx.r3.s64 = ctx.r11.s64 + 17424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD18D4"))) PPC_WEAK_FUNC(sub_83BD18D4);
PPC_FUNC_IMPL(__imp__sub_83BD18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD18D8"))) PPC_WEAK_FUNC(sub_83BD18D8);
PPC_FUNC_IMPL(__imp__sub_83BD18D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17432
	ctx.r3.s64 = ctx.r11.s64 + 17432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD18E4"))) PPC_WEAK_FUNC(sub_83BD18E4);
PPC_FUNC_IMPL(__imp__sub_83BD18E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD18E8"))) PPC_WEAK_FUNC(sub_83BD18E8);
PPC_FUNC_IMPL(__imp__sub_83BD18E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17440
	ctx.r3.s64 = ctx.r11.s64 + 17440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD18F4"))) PPC_WEAK_FUNC(sub_83BD18F4);
PPC_FUNC_IMPL(__imp__sub_83BD18F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD18F8"))) PPC_WEAK_FUNC(sub_83BD18F8);
PPC_FUNC_IMPL(__imp__sub_83BD18F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17448
	ctx.r3.s64 = ctx.r11.s64 + 17448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1904"))) PPC_WEAK_FUNC(sub_83BD1904);
PPC_FUNC_IMPL(__imp__sub_83BD1904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1908"))) PPC_WEAK_FUNC(sub_83BD1908);
PPC_FUNC_IMPL(__imp__sub_83BD1908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17456
	ctx.r3.s64 = ctx.r11.s64 + 17456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1914"))) PPC_WEAK_FUNC(sub_83BD1914);
PPC_FUNC_IMPL(__imp__sub_83BD1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1918"))) PPC_WEAK_FUNC(sub_83BD1918);
PPC_FUNC_IMPL(__imp__sub_83BD1918) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,22208
	ctx.r3.s64 = ctx.r11.s64 + 22208;
	// bl 0x83523120
	ctx.lr = 0x83BD1930;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17464
	ctx.r3.s64 = ctx.r10.s64 + 17464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD193C;
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

__attribute__((alias("__imp__sub_83BD194C"))) PPC_WEAK_FUNC(sub_83BD194C);
PPC_FUNC_IMPL(__imp__sub_83BD194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1950"))) PPC_WEAK_FUNC(sub_83BD1950);
PPC_FUNC_IMPL(__imp__sub_83BD1950) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22224
	ctx.r7.s64 = ctx.r8.s64 + 22224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1978"))) PPC_WEAK_FUNC(sub_83BD1978);
PPC_FUNC_IMPL(__imp__sub_83BD1978) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,22624
	ctx.r6.s64 = ctx.r7.s64 + 22624;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22552(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22552);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22224);
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
	// std r9,22624(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22624, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD19C0"))) PPC_WEAK_FUNC(sub_83BD19C0);
PPC_FUNC_IMPL(__imp__sub_83BD19C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17480
	ctx.r3.s64 = ctx.r11.s64 + 17480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD19CC"))) PPC_WEAK_FUNC(sub_83BD19CC);
PPC_FUNC_IMPL(__imp__sub_83BD19CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD19D0"))) PPC_WEAK_FUNC(sub_83BD19D0);
PPC_FUNC_IMPL(__imp__sub_83BD19D0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,22232
	ctx.r3.s64 = ctx.r11.s64 + 22232;
	// bl 0x8259af80
	ctx.lr = 0x83BD19E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17496
	ctx.r3.s64 = ctx.r10.s64 + 17496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD19F4;
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

__attribute__((alias("__imp__sub_83BD1A04"))) PPC_WEAK_FUNC(sub_83BD1A04);
PPC_FUNC_IMPL(__imp__sub_83BD1A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1A08"))) PPC_WEAK_FUNC(sub_83BD1A08);
PPC_FUNC_IMPL(__imp__sub_83BD1A08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22212
	ctx.r11.s64 = ctx.r8.s64 + 22212;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,22600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22600);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17488
	ctx.r3.s64 = ctx.r6.s64 + 17488;
	// stw r10,22212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1A38"))) PPC_WEAK_FUNC(sub_83BD1A38);
PPC_FUNC_IMPL(__imp__sub_83BD1A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r11,22656
	ctx.r9.s64 = ctx.r11.s64 + 22656;
	// lfs f0,22648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1A50"))) PPC_WEAK_FUNC(sub_83BD1A50);
PPC_FUNC_IMPL(__imp__sub_83BD1A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1A5C"))) PPC_WEAK_FUNC(sub_83BD1A5C);
PPC_FUNC_IMPL(__imp__sub_83BD1A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1A60"))) PPC_WEAK_FUNC(sub_83BD1A60);
PPC_FUNC_IMPL(__imp__sub_83BD1A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17512
	ctx.r3.s64 = ctx.r11.s64 + 17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1A6C"))) PPC_WEAK_FUNC(sub_83BD1A6C);
PPC_FUNC_IMPL(__imp__sub_83BD1A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1A70"))) PPC_WEAK_FUNC(sub_83BD1A70);
PPC_FUNC_IMPL(__imp__sub_83BD1A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1A7C"))) PPC_WEAK_FUNC(sub_83BD1A7C);
PPC_FUNC_IMPL(__imp__sub_83BD1A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1A80"))) PPC_WEAK_FUNC(sub_83BD1A80);
PPC_FUNC_IMPL(__imp__sub_83BD1A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1A8C"))) PPC_WEAK_FUNC(sub_83BD1A8C);
PPC_FUNC_IMPL(__imp__sub_83BD1A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1A90"))) PPC_WEAK_FUNC(sub_83BD1A90);
PPC_FUNC_IMPL(__imp__sub_83BD1A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17536
	ctx.r3.s64 = ctx.r11.s64 + 17536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1A9C"))) PPC_WEAK_FUNC(sub_83BD1A9C);
PPC_FUNC_IMPL(__imp__sub_83BD1A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1AA0"))) PPC_WEAK_FUNC(sub_83BD1AA0);
PPC_FUNC_IMPL(__imp__sub_83BD1AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17544
	ctx.r3.s64 = ctx.r11.s64 + 17544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1AAC"))) PPC_WEAK_FUNC(sub_83BD1AAC);
PPC_FUNC_IMPL(__imp__sub_83BD1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1AB0"))) PPC_WEAK_FUNC(sub_83BD1AB0);
PPC_FUNC_IMPL(__imp__sub_83BD1AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17552
	ctx.r3.s64 = ctx.r11.s64 + 17552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1ABC"))) PPC_WEAK_FUNC(sub_83BD1ABC);
PPC_FUNC_IMPL(__imp__sub_83BD1ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1AC0"))) PPC_WEAK_FUNC(sub_83BD1AC0);
PPC_FUNC_IMPL(__imp__sub_83BD1AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17560
	ctx.r3.s64 = ctx.r11.s64 + 17560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1ACC"))) PPC_WEAK_FUNC(sub_83BD1ACC);
PPC_FUNC_IMPL(__imp__sub_83BD1ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1AD0"))) PPC_WEAK_FUNC(sub_83BD1AD0);
PPC_FUNC_IMPL(__imp__sub_83BD1AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17568
	ctx.r3.s64 = ctx.r11.s64 + 17568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1ADC"))) PPC_WEAK_FUNC(sub_83BD1ADC);
PPC_FUNC_IMPL(__imp__sub_83BD1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1AE0"))) PPC_WEAK_FUNC(sub_83BD1AE0);
PPC_FUNC_IMPL(__imp__sub_83BD1AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17576
	ctx.r3.s64 = ctx.r11.s64 + 17576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1AEC"))) PPC_WEAK_FUNC(sub_83BD1AEC);
PPC_FUNC_IMPL(__imp__sub_83BD1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1AF0"))) PPC_WEAK_FUNC(sub_83BD1AF0);
PPC_FUNC_IMPL(__imp__sub_83BD1AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17584
	ctx.r3.s64 = ctx.r11.s64 + 17584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1AFC"))) PPC_WEAK_FUNC(sub_83BD1AFC);
PPC_FUNC_IMPL(__imp__sub_83BD1AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1B00"))) PPC_WEAK_FUNC(sub_83BD1B00);
PPC_FUNC_IMPL(__imp__sub_83BD1B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17592
	ctx.r3.s64 = ctx.r11.s64 + 17592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1B0C"))) PPC_WEAK_FUNC(sub_83BD1B0C);
PPC_FUNC_IMPL(__imp__sub_83BD1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1B10"))) PPC_WEAK_FUNC(sub_83BD1B10);
PPC_FUNC_IMPL(__imp__sub_83BD1B10) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,22576
	ctx.r3.s64 = ctx.r11.s64 + 22576;
	// bl 0x83523120
	ctx.lr = 0x83BD1B28;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17600
	ctx.r3.s64 = ctx.r10.s64 + 17600;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1B34;
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

__attribute__((alias("__imp__sub_83BD1B44"))) PPC_WEAK_FUNC(sub_83BD1B44);
PPC_FUNC_IMPL(__imp__sub_83BD1B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1B48"))) PPC_WEAK_FUNC(sub_83BD1B48);
PPC_FUNC_IMPL(__imp__sub_83BD1B48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22592
	ctx.r7.s64 = ctx.r8.s64 + 22592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1B70"))) PPC_WEAK_FUNC(sub_83BD1B70);
PPC_FUNC_IMPL(__imp__sub_83BD1B70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,23144
	ctx.r6.s64 = ctx.r7.s64 + 23144;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23072(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23072);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22592);
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
	// std r9,23144(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23144, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1BB8"))) PPC_WEAK_FUNC(sub_83BD1BB8);
PPC_FUNC_IMPL(__imp__sub_83BD1BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17616
	ctx.r3.s64 = ctx.r11.s64 + 17616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1BC4"))) PPC_WEAK_FUNC(sub_83BD1BC4);
PPC_FUNC_IMPL(__imp__sub_83BD1BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1BC8"))) PPC_WEAK_FUNC(sub_83BD1BC8);
PPC_FUNC_IMPL(__imp__sub_83BD1BC8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,22600
	ctx.r3.s64 = ctx.r11.s64 + 22600;
	// bl 0x8259af80
	ctx.lr = 0x83BD1BE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17632
	ctx.r3.s64 = ctx.r10.s64 + 17632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1BEC;
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

__attribute__((alias("__imp__sub_83BD1BFC"))) PPC_WEAK_FUNC(sub_83BD1BFC);
PPC_FUNC_IMPL(__imp__sub_83BD1BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1C00"))) PPC_WEAK_FUNC(sub_83BD1C00);
PPC_FUNC_IMPL(__imp__sub_83BD1C00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22580
	ctx.r11.s64 = ctx.r8.s64 + 22580;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,23120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23120);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17624
	ctx.r3.s64 = ctx.r6.s64 + 17624;
	// stw r10,22580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1C30"))) PPC_WEAK_FUNC(sub_83BD1C30);
PPC_FUNC_IMPL(__imp__sub_83BD1C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17640
	ctx.r3.s64 = ctx.r11.s64 + 17640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1C3C"))) PPC_WEAK_FUNC(sub_83BD1C3C);
PPC_FUNC_IMPL(__imp__sub_83BD1C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1C40"))) PPC_WEAK_FUNC(sub_83BD1C40);
PPC_FUNC_IMPL(__imp__sub_83BD1C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17648
	ctx.r3.s64 = ctx.r11.s64 + 17648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1C4C"))) PPC_WEAK_FUNC(sub_83BD1C4C);
PPC_FUNC_IMPL(__imp__sub_83BD1C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1C50"))) PPC_WEAK_FUNC(sub_83BD1C50);
PPC_FUNC_IMPL(__imp__sub_83BD1C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17656
	ctx.r3.s64 = ctx.r11.s64 + 17656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1C5C"))) PPC_WEAK_FUNC(sub_83BD1C5C);
PPC_FUNC_IMPL(__imp__sub_83BD1C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1C60"))) PPC_WEAK_FUNC(sub_83BD1C60);
PPC_FUNC_IMPL(__imp__sub_83BD1C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17664
	ctx.r3.s64 = ctx.r11.s64 + 17664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1C6C"))) PPC_WEAK_FUNC(sub_83BD1C6C);
PPC_FUNC_IMPL(__imp__sub_83BD1C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1C70"))) PPC_WEAK_FUNC(sub_83BD1C70);
PPC_FUNC_IMPL(__imp__sub_83BD1C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17672
	ctx.r3.s64 = ctx.r11.s64 + 17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1C7C"))) PPC_WEAK_FUNC(sub_83BD1C7C);
PPC_FUNC_IMPL(__imp__sub_83BD1C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1C80"))) PPC_WEAK_FUNC(sub_83BD1C80);
PPC_FUNC_IMPL(__imp__sub_83BD1C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17680
	ctx.r3.s64 = ctx.r11.s64 + 17680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1C8C"))) PPC_WEAK_FUNC(sub_83BD1C8C);
PPC_FUNC_IMPL(__imp__sub_83BD1C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1C90"))) PPC_WEAK_FUNC(sub_83BD1C90);
PPC_FUNC_IMPL(__imp__sub_83BD1C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17688
	ctx.r3.s64 = ctx.r11.s64 + 17688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1C9C"))) PPC_WEAK_FUNC(sub_83BD1C9C);
PPC_FUNC_IMPL(__imp__sub_83BD1C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1CA0"))) PPC_WEAK_FUNC(sub_83BD1CA0);
PPC_FUNC_IMPL(__imp__sub_83BD1CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17696
	ctx.r3.s64 = ctx.r11.s64 + 17696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1CAC"))) PPC_WEAK_FUNC(sub_83BD1CAC);
PPC_FUNC_IMPL(__imp__sub_83BD1CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1CB0"))) PPC_WEAK_FUNC(sub_83BD1CB0);
PPC_FUNC_IMPL(__imp__sub_83BD1CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17704
	ctx.r3.s64 = ctx.r11.s64 + 17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1CBC"))) PPC_WEAK_FUNC(sub_83BD1CBC);
PPC_FUNC_IMPL(__imp__sub_83BD1CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1CC0"))) PPC_WEAK_FUNC(sub_83BD1CC0);
PPC_FUNC_IMPL(__imp__sub_83BD1CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17712
	ctx.r3.s64 = ctx.r11.s64 + 17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1CCC"))) PPC_WEAK_FUNC(sub_83BD1CCC);
PPC_FUNC_IMPL(__imp__sub_83BD1CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1CD0"))) PPC_WEAK_FUNC(sub_83BD1CD0);
PPC_FUNC_IMPL(__imp__sub_83BD1CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17720
	ctx.r3.s64 = ctx.r11.s64 + 17720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1CDC"))) PPC_WEAK_FUNC(sub_83BD1CDC);
PPC_FUNC_IMPL(__imp__sub_83BD1CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1CE0"))) PPC_WEAK_FUNC(sub_83BD1CE0);
PPC_FUNC_IMPL(__imp__sub_83BD1CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17728
	ctx.r3.s64 = ctx.r11.s64 + 17728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1CEC"))) PPC_WEAK_FUNC(sub_83BD1CEC);
PPC_FUNC_IMPL(__imp__sub_83BD1CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1CF0"))) PPC_WEAK_FUNC(sub_83BD1CF0);
PPC_FUNC_IMPL(__imp__sub_83BD1CF0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,22944
	ctx.r3.s64 = ctx.r11.s64 + 22944;
	// bl 0x83523120
	ctx.lr = 0x83BD1D08;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17736
	ctx.r3.s64 = ctx.r10.s64 + 17736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1D14;
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

__attribute__((alias("__imp__sub_83BD1D24"))) PPC_WEAK_FUNC(sub_83BD1D24);
PPC_FUNC_IMPL(__imp__sub_83BD1D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1D28"))) PPC_WEAK_FUNC(sub_83BD1D28);
PPC_FUNC_IMPL(__imp__sub_83BD1D28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22960
	ctx.r7.s64 = ctx.r8.s64 + 22960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22960(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1D50"))) PPC_WEAK_FUNC(sub_83BD1D50);
PPC_FUNC_IMPL(__imp__sub_83BD1D50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,23300
	ctx.r6.s64 = ctx.r7.s64 + 23300;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23228(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23228);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22960(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22960);
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
	// std r9,23300(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1D98"))) PPC_WEAK_FUNC(sub_83BD1D98);
PPC_FUNC_IMPL(__imp__sub_83BD1D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17752
	ctx.r3.s64 = ctx.r11.s64 + 17752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1DA4"))) PPC_WEAK_FUNC(sub_83BD1DA4);
PPC_FUNC_IMPL(__imp__sub_83BD1DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1DA8"))) PPC_WEAK_FUNC(sub_83BD1DA8);
PPC_FUNC_IMPL(__imp__sub_83BD1DA8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,22968
	ctx.r3.s64 = ctx.r11.s64 + 22968;
	// bl 0x8259af80
	ctx.lr = 0x83BD1DC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17768
	ctx.r3.s64 = ctx.r10.s64 + 17768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1DCC;
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

__attribute__((alias("__imp__sub_83BD1DDC"))) PPC_WEAK_FUNC(sub_83BD1DDC);
PPC_FUNC_IMPL(__imp__sub_83BD1DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1DE0"))) PPC_WEAK_FUNC(sub_83BD1DE0);
PPC_FUNC_IMPL(__imp__sub_83BD1DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22948
	ctx.r11.s64 = ctx.r8.s64 + 22948;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,23276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23276);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17760
	ctx.r3.s64 = ctx.r6.s64 + 17760;
	// stw r10,22948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E10"))) PPC_WEAK_FUNC(sub_83BD1E10);
PPC_FUNC_IMPL(__imp__sub_83BD1E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17776
	ctx.r3.s64 = ctx.r11.s64 + 17776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E1C"))) PPC_WEAK_FUNC(sub_83BD1E1C);
PPC_FUNC_IMPL(__imp__sub_83BD1E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1E20"))) PPC_WEAK_FUNC(sub_83BD1E20);
PPC_FUNC_IMPL(__imp__sub_83BD1E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17784
	ctx.r3.s64 = ctx.r11.s64 + 17784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E2C"))) PPC_WEAK_FUNC(sub_83BD1E2C);
PPC_FUNC_IMPL(__imp__sub_83BD1E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1E30"))) PPC_WEAK_FUNC(sub_83BD1E30);
PPC_FUNC_IMPL(__imp__sub_83BD1E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17792
	ctx.r3.s64 = ctx.r11.s64 + 17792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E3C"))) PPC_WEAK_FUNC(sub_83BD1E3C);
PPC_FUNC_IMPL(__imp__sub_83BD1E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1E40"))) PPC_WEAK_FUNC(sub_83BD1E40);
PPC_FUNC_IMPL(__imp__sub_83BD1E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17800
	ctx.r3.s64 = ctx.r11.s64 + 17800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E4C"))) PPC_WEAK_FUNC(sub_83BD1E4C);
PPC_FUNC_IMPL(__imp__sub_83BD1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1E50"))) PPC_WEAK_FUNC(sub_83BD1E50);
PPC_FUNC_IMPL(__imp__sub_83BD1E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17808
	ctx.r3.s64 = ctx.r11.s64 + 17808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E5C"))) PPC_WEAK_FUNC(sub_83BD1E5C);
PPC_FUNC_IMPL(__imp__sub_83BD1E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1E60"))) PPC_WEAK_FUNC(sub_83BD1E60);
PPC_FUNC_IMPL(__imp__sub_83BD1E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17816
	ctx.r3.s64 = ctx.r11.s64 + 17816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E6C"))) PPC_WEAK_FUNC(sub_83BD1E6C);
PPC_FUNC_IMPL(__imp__sub_83BD1E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1E70"))) PPC_WEAK_FUNC(sub_83BD1E70);
PPC_FUNC_IMPL(__imp__sub_83BD1E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17824
	ctx.r3.s64 = ctx.r11.s64 + 17824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E7C"))) PPC_WEAK_FUNC(sub_83BD1E7C);
PPC_FUNC_IMPL(__imp__sub_83BD1E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1E80"))) PPC_WEAK_FUNC(sub_83BD1E80);
PPC_FUNC_IMPL(__imp__sub_83BD1E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17832
	ctx.r3.s64 = ctx.r11.s64 + 17832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E8C"))) PPC_WEAK_FUNC(sub_83BD1E8C);
PPC_FUNC_IMPL(__imp__sub_83BD1E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1E90"))) PPC_WEAK_FUNC(sub_83BD1E90);
PPC_FUNC_IMPL(__imp__sub_83BD1E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1E9C"))) PPC_WEAK_FUNC(sub_83BD1E9C);
PPC_FUNC_IMPL(__imp__sub_83BD1E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1EA0"))) PPC_WEAK_FUNC(sub_83BD1EA0);
PPC_FUNC_IMPL(__imp__sub_83BD1EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17848
	ctx.r3.s64 = ctx.r11.s64 + 17848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1EAC"))) PPC_WEAK_FUNC(sub_83BD1EAC);
PPC_FUNC_IMPL(__imp__sub_83BD1EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1EB0"))) PPC_WEAK_FUNC(sub_83BD1EB0);
PPC_FUNC_IMPL(__imp__sub_83BD1EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17856
	ctx.r3.s64 = ctx.r11.s64 + 17856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1EBC"))) PPC_WEAK_FUNC(sub_83BD1EBC);
PPC_FUNC_IMPL(__imp__sub_83BD1EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1EC0"))) PPC_WEAK_FUNC(sub_83BD1EC0);
PPC_FUNC_IMPL(__imp__sub_83BD1EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17864
	ctx.r3.s64 = ctx.r11.s64 + 17864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1ECC"))) PPC_WEAK_FUNC(sub_83BD1ECC);
PPC_FUNC_IMPL(__imp__sub_83BD1ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1ED0"))) PPC_WEAK_FUNC(sub_83BD1ED0);
PPC_FUNC_IMPL(__imp__sub_83BD1ED0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,23312
	ctx.r3.s64 = ctx.r11.s64 + 23312;
	// bl 0x83523120
	ctx.lr = 0x83BD1EE8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17872
	ctx.r3.s64 = ctx.r10.s64 + 17872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1EF4;
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

__attribute__((alias("__imp__sub_83BD1F04"))) PPC_WEAK_FUNC(sub_83BD1F04);
PPC_FUNC_IMPL(__imp__sub_83BD1F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1F08"))) PPC_WEAK_FUNC(sub_83BD1F08);
PPC_FUNC_IMPL(__imp__sub_83BD1F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23328
	ctx.r7.s64 = ctx.r8.s64 + 23328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23328);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23328, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1F30"))) PPC_WEAK_FUNC(sub_83BD1F30);
PPC_FUNC_IMPL(__imp__sub_83BD1F30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,23536
	ctx.r6.s64 = ctx.r7.s64 + 23536;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23464(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23464);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23328);
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
	// std r9,23536(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23536, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1F78"))) PPC_WEAK_FUNC(sub_83BD1F78);
PPC_FUNC_IMPL(__imp__sub_83BD1F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17888
	ctx.r3.s64 = ctx.r11.s64 + 17888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1F84"))) PPC_WEAK_FUNC(sub_83BD1F84);
PPC_FUNC_IMPL(__imp__sub_83BD1F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1F88"))) PPC_WEAK_FUNC(sub_83BD1F88);
PPC_FUNC_IMPL(__imp__sub_83BD1F88) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,23336
	ctx.r3.s64 = ctx.r11.s64 + 23336;
	// bl 0x8259af80
	ctx.lr = 0x83BD1FA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,17904
	ctx.r3.s64 = ctx.r10.s64 + 17904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1FAC;
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

__attribute__((alias("__imp__sub_83BD1FBC"))) PPC_WEAK_FUNC(sub_83BD1FBC);
PPC_FUNC_IMPL(__imp__sub_83BD1FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1FC0"))) PPC_WEAK_FUNC(sub_83BD1FC0);
PPC_FUNC_IMPL(__imp__sub_83BD1FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23316
	ctx.r11.s64 = ctx.r8.s64 + 23316;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,23512(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23512);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17896
	ctx.r3.s64 = ctx.r6.s64 + 17896;
	// stw r10,23316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1FF0"))) PPC_WEAK_FUNC(sub_83BD1FF0);
PPC_FUNC_IMPL(__imp__sub_83BD1FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r7,-31761
	ctx.r7.s64 = -2081488896;
	// addi r6,r11,23408
	ctx.r6.s64 = ctx.r11.s64 + 23408;
	// addi r5,r7,23680
	ctx.r5.s64 = ctx.r7.s64 + 23680;
	// lwz r8,23408(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23408);
	// lwz r11,-4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// lwz r10,-12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	// lwz r9,-8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r10,23680(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23680, ctx.r10.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD2028"))) PPC_WEAK_FUNC(sub_83BD2028);
PPC_FUNC_IMPL(__imp__sub_83BD2028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2034"))) PPC_WEAK_FUNC(sub_83BD2034);
PPC_FUNC_IMPL(__imp__sub_83BD2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2038"))) PPC_WEAK_FUNC(sub_83BD2038);
PPC_FUNC_IMPL(__imp__sub_83BD2038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,17920
	ctx.r3.s64 = ctx.r11.s64 + 17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2044"))) PPC_WEAK_FUNC(sub_83BD2044);
PPC_FUNC_IMPL(__imp__sub_83BD2044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

