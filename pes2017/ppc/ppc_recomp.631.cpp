#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BC0FA4"))) PPC_WEAK_FUNC(sub_83BC0FA4);
PPC_FUNC_IMPL(__imp__sub_83BC0FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0FA8"))) PPC_WEAK_FUNC(sub_83BC0FA8);
PPC_FUNC_IMPL(__imp__sub_83BC0FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4296
	ctx.r3.s64 = ctx.r11.s64 + -4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0FB4"))) PPC_WEAK_FUNC(sub_83BC0FB4);
PPC_FUNC_IMPL(__imp__sub_83BC0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0FB8"))) PPC_WEAK_FUNC(sub_83BC0FB8);
PPC_FUNC_IMPL(__imp__sub_83BC0FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4288
	ctx.r3.s64 = ctx.r11.s64 + -4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0FC4"))) PPC_WEAK_FUNC(sub_83BC0FC4);
PPC_FUNC_IMPL(__imp__sub_83BC0FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0FC8"))) PPC_WEAK_FUNC(sub_83BC0FC8);
PPC_FUNC_IMPL(__imp__sub_83BC0FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4280
	ctx.r3.s64 = ctx.r11.s64 + -4280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0FD4"))) PPC_WEAK_FUNC(sub_83BC0FD4);
PPC_FUNC_IMPL(__imp__sub_83BC0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0FD8"))) PPC_WEAK_FUNC(sub_83BC0FD8);
PPC_FUNC_IMPL(__imp__sub_83BC0FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4272
	ctx.r3.s64 = ctx.r11.s64 + -4272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0FE4"))) PPC_WEAK_FUNC(sub_83BC0FE4);
PPC_FUNC_IMPL(__imp__sub_83BC0FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0FE8"))) PPC_WEAK_FUNC(sub_83BC0FE8);
PPC_FUNC_IMPL(__imp__sub_83BC0FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4264
	ctx.r3.s64 = ctx.r11.s64 + -4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC0FF4"))) PPC_WEAK_FUNC(sub_83BC0FF4);
PPC_FUNC_IMPL(__imp__sub_83BC0FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC0FF8"))) PPC_WEAK_FUNC(sub_83BC0FF8);
PPC_FUNC_IMPL(__imp__sub_83BC0FF8) {
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
	// addi r3,r11,-31776
	ctx.r3.s64 = ctx.r11.s64 + -31776;
	// bl 0x83523120
	ctx.lr = 0x83BC1010;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4256
	ctx.r3.s64 = ctx.r10.s64 + -4256;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC101C;
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

__attribute__((alias("__imp__sub_83BC102C"))) PPC_WEAK_FUNC(sub_83BC102C);
PPC_FUNC_IMPL(__imp__sub_83BC102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1030"))) PPC_WEAK_FUNC(sub_83BC1030);
PPC_FUNC_IMPL(__imp__sub_83BC1030) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31760
	ctx.r7.s64 = ctx.r8.s64 + -31760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1058"))) PPC_WEAK_FUNC(sub_83BC1058);
PPC_FUNC_IMPL(__imp__sub_83BC1058) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-240
	ctx.r6.s64 = ctx.r7.s64 + -240;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31760(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31760);
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
	// std r9,-240(r7)
	PPC_STORE_U64(ctx.r7.u32 + -240, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC10A0"))) PPC_WEAK_FUNC(sub_83BC10A0);
PPC_FUNC_IMPL(__imp__sub_83BC10A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4240
	ctx.r3.s64 = ctx.r11.s64 + -4240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC10AC"))) PPC_WEAK_FUNC(sub_83BC10AC);
PPC_FUNC_IMPL(__imp__sub_83BC10AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC10B0"))) PPC_WEAK_FUNC(sub_83BC10B0);
PPC_FUNC_IMPL(__imp__sub_83BC10B0) {
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
	// addi r3,r11,-31752
	ctx.r3.s64 = ctx.r11.s64 + -31752;
	// bl 0x8259af80
	ctx.lr = 0x83BC10C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4224
	ctx.r3.s64 = ctx.r10.s64 + -4224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC10D4;
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

__attribute__((alias("__imp__sub_83BC10E4"))) PPC_WEAK_FUNC(sub_83BC10E4);
PPC_FUNC_IMPL(__imp__sub_83BC10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC10E8"))) PPC_WEAK_FUNC(sub_83BC10E8);
PPC_FUNC_IMPL(__imp__sub_83BC10E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31772
	ctx.r11.s64 = ctx.r8.s64 + -31772;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -264);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4232
	ctx.r3.s64 = ctx.r6.s64 + -4232;
	// stw r10,-31772(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1118"))) PPC_WEAK_FUNC(sub_83BC1118);
PPC_FUNC_IMPL(__imp__sub_83BC1118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4216
	ctx.r3.s64 = ctx.r11.s64 + -4216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1124"))) PPC_WEAK_FUNC(sub_83BC1124);
PPC_FUNC_IMPL(__imp__sub_83BC1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1128"))) PPC_WEAK_FUNC(sub_83BC1128);
PPC_FUNC_IMPL(__imp__sub_83BC1128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4208
	ctx.r3.s64 = ctx.r11.s64 + -4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1134"))) PPC_WEAK_FUNC(sub_83BC1134);
PPC_FUNC_IMPL(__imp__sub_83BC1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1138"))) PPC_WEAK_FUNC(sub_83BC1138);
PPC_FUNC_IMPL(__imp__sub_83BC1138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4200
	ctx.r3.s64 = ctx.r11.s64 + -4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1144"))) PPC_WEAK_FUNC(sub_83BC1144);
PPC_FUNC_IMPL(__imp__sub_83BC1144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1148"))) PPC_WEAK_FUNC(sub_83BC1148);
PPC_FUNC_IMPL(__imp__sub_83BC1148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4192
	ctx.r3.s64 = ctx.r11.s64 + -4192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1154"))) PPC_WEAK_FUNC(sub_83BC1154);
PPC_FUNC_IMPL(__imp__sub_83BC1154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1158"))) PPC_WEAK_FUNC(sub_83BC1158);
PPC_FUNC_IMPL(__imp__sub_83BC1158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4184
	ctx.r3.s64 = ctx.r11.s64 + -4184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1164"))) PPC_WEAK_FUNC(sub_83BC1164);
PPC_FUNC_IMPL(__imp__sub_83BC1164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1168"))) PPC_WEAK_FUNC(sub_83BC1168);
PPC_FUNC_IMPL(__imp__sub_83BC1168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4176
	ctx.r3.s64 = ctx.r11.s64 + -4176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1174"))) PPC_WEAK_FUNC(sub_83BC1174);
PPC_FUNC_IMPL(__imp__sub_83BC1174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1178"))) PPC_WEAK_FUNC(sub_83BC1178);
PPC_FUNC_IMPL(__imp__sub_83BC1178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4168
	ctx.r3.s64 = ctx.r11.s64 + -4168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1184"))) PPC_WEAK_FUNC(sub_83BC1184);
PPC_FUNC_IMPL(__imp__sub_83BC1184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1188"))) PPC_WEAK_FUNC(sub_83BC1188);
PPC_FUNC_IMPL(__imp__sub_83BC1188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4160
	ctx.r3.s64 = ctx.r11.s64 + -4160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1194"))) PPC_WEAK_FUNC(sub_83BC1194);
PPC_FUNC_IMPL(__imp__sub_83BC1194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1198"))) PPC_WEAK_FUNC(sub_83BC1198);
PPC_FUNC_IMPL(__imp__sub_83BC1198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4152
	ctx.r3.s64 = ctx.r11.s64 + -4152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC11A4"))) PPC_WEAK_FUNC(sub_83BC11A4);
PPC_FUNC_IMPL(__imp__sub_83BC11A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC11A8"))) PPC_WEAK_FUNC(sub_83BC11A8);
PPC_FUNC_IMPL(__imp__sub_83BC11A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4144
	ctx.r3.s64 = ctx.r11.s64 + -4144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC11B4"))) PPC_WEAK_FUNC(sub_83BC11B4);
PPC_FUNC_IMPL(__imp__sub_83BC11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC11B8"))) PPC_WEAK_FUNC(sub_83BC11B8);
PPC_FUNC_IMPL(__imp__sub_83BC11B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4136
	ctx.r3.s64 = ctx.r11.s64 + -4136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC11C4"))) PPC_WEAK_FUNC(sub_83BC11C4);
PPC_FUNC_IMPL(__imp__sub_83BC11C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC11C8"))) PPC_WEAK_FUNC(sub_83BC11C8);
PPC_FUNC_IMPL(__imp__sub_83BC11C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4128
	ctx.r3.s64 = ctx.r11.s64 + -4128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC11D4"))) PPC_WEAK_FUNC(sub_83BC11D4);
PPC_FUNC_IMPL(__imp__sub_83BC11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC11D8"))) PPC_WEAK_FUNC(sub_83BC11D8);
PPC_FUNC_IMPL(__imp__sub_83BC11D8) {
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
	// addi r3,r11,-31408
	ctx.r3.s64 = ctx.r11.s64 + -31408;
	// bl 0x83523120
	ctx.lr = 0x83BC11F0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4120
	ctx.r3.s64 = ctx.r10.s64 + -4120;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC11FC;
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

__attribute__((alias("__imp__sub_83BC120C"))) PPC_WEAK_FUNC(sub_83BC120C);
PPC_FUNC_IMPL(__imp__sub_83BC120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1210"))) PPC_WEAK_FUNC(sub_83BC1210);
PPC_FUNC_IMPL(__imp__sub_83BC1210) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31392
	ctx.r7.s64 = ctx.r8.s64 + -31392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1238"))) PPC_WEAK_FUNC(sub_83BC1238);
PPC_FUNC_IMPL(__imp__sub_83BC1238) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-100
	ctx.r6.s64 = ctx.r7.s64 + -100;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-172(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -172);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31392);
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
	// std r9,-100(r7)
	PPC_STORE_U64(ctx.r7.u32 + -100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1280"))) PPC_WEAK_FUNC(sub_83BC1280);
PPC_FUNC_IMPL(__imp__sub_83BC1280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4104
	ctx.r3.s64 = ctx.r11.s64 + -4104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC128C"))) PPC_WEAK_FUNC(sub_83BC128C);
PPC_FUNC_IMPL(__imp__sub_83BC128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1290"))) PPC_WEAK_FUNC(sub_83BC1290);
PPC_FUNC_IMPL(__imp__sub_83BC1290) {
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
	// addi r3,r11,-31384
	ctx.r3.s64 = ctx.r11.s64 + -31384;
	// bl 0x8259af80
	ctx.lr = 0x83BC12A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-4088
	ctx.r3.s64 = ctx.r10.s64 + -4088;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC12B4;
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

__attribute__((alias("__imp__sub_83BC12C4"))) PPC_WEAK_FUNC(sub_83BC12C4);
PPC_FUNC_IMPL(__imp__sub_83BC12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC12C8"))) PPC_WEAK_FUNC(sub_83BC12C8);
PPC_FUNC_IMPL(__imp__sub_83BC12C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31404
	ctx.r11.s64 = ctx.r8.s64 + -31404;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -124);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4096
	ctx.r3.s64 = ctx.r6.s64 + -4096;
	// stw r10,-31404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC12F8"))) PPC_WEAK_FUNC(sub_83BC12F8);
PPC_FUNC_IMPL(__imp__sub_83BC12F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4080
	ctx.r3.s64 = ctx.r11.s64 + -4080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1304"))) PPC_WEAK_FUNC(sub_83BC1304);
PPC_FUNC_IMPL(__imp__sub_83BC1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1308"))) PPC_WEAK_FUNC(sub_83BC1308);
PPC_FUNC_IMPL(__imp__sub_83BC1308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4072
	ctx.r3.s64 = ctx.r11.s64 + -4072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1314"))) PPC_WEAK_FUNC(sub_83BC1314);
PPC_FUNC_IMPL(__imp__sub_83BC1314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1318"))) PPC_WEAK_FUNC(sub_83BC1318);
PPC_FUNC_IMPL(__imp__sub_83BC1318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4064
	ctx.r3.s64 = ctx.r11.s64 + -4064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1324"))) PPC_WEAK_FUNC(sub_83BC1324);
PPC_FUNC_IMPL(__imp__sub_83BC1324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1328"))) PPC_WEAK_FUNC(sub_83BC1328);
PPC_FUNC_IMPL(__imp__sub_83BC1328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4056
	ctx.r3.s64 = ctx.r11.s64 + -4056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1334"))) PPC_WEAK_FUNC(sub_83BC1334);
PPC_FUNC_IMPL(__imp__sub_83BC1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1338"))) PPC_WEAK_FUNC(sub_83BC1338);
PPC_FUNC_IMPL(__imp__sub_83BC1338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4048
	ctx.r3.s64 = ctx.r11.s64 + -4048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1344"))) PPC_WEAK_FUNC(sub_83BC1344);
PPC_FUNC_IMPL(__imp__sub_83BC1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1348"))) PPC_WEAK_FUNC(sub_83BC1348);
PPC_FUNC_IMPL(__imp__sub_83BC1348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4040
	ctx.r3.s64 = ctx.r11.s64 + -4040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1354"))) PPC_WEAK_FUNC(sub_83BC1354);
PPC_FUNC_IMPL(__imp__sub_83BC1354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1358"))) PPC_WEAK_FUNC(sub_83BC1358);
PPC_FUNC_IMPL(__imp__sub_83BC1358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4032
	ctx.r3.s64 = ctx.r11.s64 + -4032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1364"))) PPC_WEAK_FUNC(sub_83BC1364);
PPC_FUNC_IMPL(__imp__sub_83BC1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1368"))) PPC_WEAK_FUNC(sub_83BC1368);
PPC_FUNC_IMPL(__imp__sub_83BC1368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4024
	ctx.r3.s64 = ctx.r11.s64 + -4024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1374"))) PPC_WEAK_FUNC(sub_83BC1374);
PPC_FUNC_IMPL(__imp__sub_83BC1374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1378"))) PPC_WEAK_FUNC(sub_83BC1378);
PPC_FUNC_IMPL(__imp__sub_83BC1378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4016
	ctx.r3.s64 = ctx.r11.s64 + -4016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1384"))) PPC_WEAK_FUNC(sub_83BC1384);
PPC_FUNC_IMPL(__imp__sub_83BC1384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1388"))) PPC_WEAK_FUNC(sub_83BC1388);
PPC_FUNC_IMPL(__imp__sub_83BC1388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4008
	ctx.r3.s64 = ctx.r11.s64 + -4008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1394"))) PPC_WEAK_FUNC(sub_83BC1394);
PPC_FUNC_IMPL(__imp__sub_83BC1394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1398"))) PPC_WEAK_FUNC(sub_83BC1398);
PPC_FUNC_IMPL(__imp__sub_83BC1398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-4000
	ctx.r3.s64 = ctx.r11.s64 + -4000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC13A4"))) PPC_WEAK_FUNC(sub_83BC13A4);
PPC_FUNC_IMPL(__imp__sub_83BC13A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC13A8"))) PPC_WEAK_FUNC(sub_83BC13A8);
PPC_FUNC_IMPL(__imp__sub_83BC13A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3992
	ctx.r3.s64 = ctx.r11.s64 + -3992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC13B4"))) PPC_WEAK_FUNC(sub_83BC13B4);
PPC_FUNC_IMPL(__imp__sub_83BC13B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC13B8"))) PPC_WEAK_FUNC(sub_83BC13B8);
PPC_FUNC_IMPL(__imp__sub_83BC13B8) {
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
	// addi r3,r11,-31040
	ctx.r3.s64 = ctx.r11.s64 + -31040;
	// bl 0x83523120
	ctx.lr = 0x83BC13D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3984
	ctx.r3.s64 = ctx.r10.s64 + -3984;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC13DC;
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

__attribute__((alias("__imp__sub_83BC13EC"))) PPC_WEAK_FUNC(sub_83BC13EC);
PPC_FUNC_IMPL(__imp__sub_83BC13EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC13F0"))) PPC_WEAK_FUNC(sub_83BC13F0);
PPC_FUNC_IMPL(__imp__sub_83BC13F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31024
	ctx.r7.s64 = ctx.r8.s64 + -31024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31024);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31024(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31024, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1418"))) PPC_WEAK_FUNC(sub_83BC1418);
PPC_FUNC_IMPL(__imp__sub_83BC1418) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,40
	ctx.r6.s64 = ctx.r7.s64 + 40;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31024);
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
	// std r9,40(r7)
	PPC_STORE_U64(ctx.r7.u32 + 40, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1460"))) PPC_WEAK_FUNC(sub_83BC1460);
PPC_FUNC_IMPL(__imp__sub_83BC1460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3968
	ctx.r3.s64 = ctx.r11.s64 + -3968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC146C"))) PPC_WEAK_FUNC(sub_83BC146C);
PPC_FUNC_IMPL(__imp__sub_83BC146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1470"))) PPC_WEAK_FUNC(sub_83BC1470);
PPC_FUNC_IMPL(__imp__sub_83BC1470) {
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
	// addi r3,r11,-31016
	ctx.r3.s64 = ctx.r11.s64 + -31016;
	// bl 0x8259af80
	ctx.lr = 0x83BC1488;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3952
	ctx.r3.s64 = ctx.r10.s64 + -3952;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC1494;
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

__attribute__((alias("__imp__sub_83BC14A4"))) PPC_WEAK_FUNC(sub_83BC14A4);
PPC_FUNC_IMPL(__imp__sub_83BC14A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC14A8"))) PPC_WEAK_FUNC(sub_83BC14A8);
PPC_FUNC_IMPL(__imp__sub_83BC14A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31036
	ctx.r11.s64 = ctx.r8.s64 + -31036;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3960
	ctx.r3.s64 = ctx.r6.s64 + -3960;
	// stw r10,-31036(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC14D8"))) PPC_WEAK_FUNC(sub_83BC14D8);
PPC_FUNC_IMPL(__imp__sub_83BC14D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3944
	ctx.r3.s64 = ctx.r11.s64 + -3944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC14E4"))) PPC_WEAK_FUNC(sub_83BC14E4);
PPC_FUNC_IMPL(__imp__sub_83BC14E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC14E8"))) PPC_WEAK_FUNC(sub_83BC14E8);
PPC_FUNC_IMPL(__imp__sub_83BC14E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3936
	ctx.r3.s64 = ctx.r11.s64 + -3936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC14F4"))) PPC_WEAK_FUNC(sub_83BC14F4);
PPC_FUNC_IMPL(__imp__sub_83BC14F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC14F8"))) PPC_WEAK_FUNC(sub_83BC14F8);
PPC_FUNC_IMPL(__imp__sub_83BC14F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3928
	ctx.r3.s64 = ctx.r11.s64 + -3928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1504"))) PPC_WEAK_FUNC(sub_83BC1504);
PPC_FUNC_IMPL(__imp__sub_83BC1504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1508"))) PPC_WEAK_FUNC(sub_83BC1508);
PPC_FUNC_IMPL(__imp__sub_83BC1508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3920
	ctx.r3.s64 = ctx.r11.s64 + -3920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1514"))) PPC_WEAK_FUNC(sub_83BC1514);
PPC_FUNC_IMPL(__imp__sub_83BC1514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1518"))) PPC_WEAK_FUNC(sub_83BC1518);
PPC_FUNC_IMPL(__imp__sub_83BC1518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3912
	ctx.r3.s64 = ctx.r11.s64 + -3912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1524"))) PPC_WEAK_FUNC(sub_83BC1524);
PPC_FUNC_IMPL(__imp__sub_83BC1524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1528"))) PPC_WEAK_FUNC(sub_83BC1528);
PPC_FUNC_IMPL(__imp__sub_83BC1528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3904
	ctx.r3.s64 = ctx.r11.s64 + -3904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1534"))) PPC_WEAK_FUNC(sub_83BC1534);
PPC_FUNC_IMPL(__imp__sub_83BC1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1538"))) PPC_WEAK_FUNC(sub_83BC1538);
PPC_FUNC_IMPL(__imp__sub_83BC1538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3896
	ctx.r3.s64 = ctx.r11.s64 + -3896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1544"))) PPC_WEAK_FUNC(sub_83BC1544);
PPC_FUNC_IMPL(__imp__sub_83BC1544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1548"))) PPC_WEAK_FUNC(sub_83BC1548);
PPC_FUNC_IMPL(__imp__sub_83BC1548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3888
	ctx.r3.s64 = ctx.r11.s64 + -3888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1554"))) PPC_WEAK_FUNC(sub_83BC1554);
PPC_FUNC_IMPL(__imp__sub_83BC1554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1558"))) PPC_WEAK_FUNC(sub_83BC1558);
PPC_FUNC_IMPL(__imp__sub_83BC1558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3880
	ctx.r3.s64 = ctx.r11.s64 + -3880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1564"))) PPC_WEAK_FUNC(sub_83BC1564);
PPC_FUNC_IMPL(__imp__sub_83BC1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1568"))) PPC_WEAK_FUNC(sub_83BC1568);
PPC_FUNC_IMPL(__imp__sub_83BC1568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3872
	ctx.r3.s64 = ctx.r11.s64 + -3872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1574"))) PPC_WEAK_FUNC(sub_83BC1574);
PPC_FUNC_IMPL(__imp__sub_83BC1574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1578"))) PPC_WEAK_FUNC(sub_83BC1578);
PPC_FUNC_IMPL(__imp__sub_83BC1578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3864
	ctx.r3.s64 = ctx.r11.s64 + -3864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1584"))) PPC_WEAK_FUNC(sub_83BC1584);
PPC_FUNC_IMPL(__imp__sub_83BC1584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1588"))) PPC_WEAK_FUNC(sub_83BC1588);
PPC_FUNC_IMPL(__imp__sub_83BC1588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3856
	ctx.r3.s64 = ctx.r11.s64 + -3856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1594"))) PPC_WEAK_FUNC(sub_83BC1594);
PPC_FUNC_IMPL(__imp__sub_83BC1594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1598"))) PPC_WEAK_FUNC(sub_83BC1598);
PPC_FUNC_IMPL(__imp__sub_83BC1598) {
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
	// addi r3,r11,-30672
	ctx.r3.s64 = ctx.r11.s64 + -30672;
	// bl 0x83523120
	ctx.lr = 0x83BC15B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3848
	ctx.r3.s64 = ctx.r10.s64 + -3848;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC15BC;
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

__attribute__((alias("__imp__sub_83BC15CC"))) PPC_WEAK_FUNC(sub_83BC15CC);
PPC_FUNC_IMPL(__imp__sub_83BC15CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC15D0"))) PPC_WEAK_FUNC(sub_83BC15D0);
PPC_FUNC_IMPL(__imp__sub_83BC15D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30656
	ctx.r7.s64 = ctx.r8.s64 + -30656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC15F8"))) PPC_WEAK_FUNC(sub_83BC15F8);
PPC_FUNC_IMPL(__imp__sub_83BC15F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,188
	ctx.r6.s64 = ctx.r7.s64 + 188;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30656);
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
	// std r9,188(r7)
	PPC_STORE_U64(ctx.r7.u32 + 188, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1640"))) PPC_WEAK_FUNC(sub_83BC1640);
PPC_FUNC_IMPL(__imp__sub_83BC1640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3832
	ctx.r3.s64 = ctx.r11.s64 + -3832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC164C"))) PPC_WEAK_FUNC(sub_83BC164C);
PPC_FUNC_IMPL(__imp__sub_83BC164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1650"))) PPC_WEAK_FUNC(sub_83BC1650);
PPC_FUNC_IMPL(__imp__sub_83BC1650) {
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
	// addi r3,r11,-30648
	ctx.r3.s64 = ctx.r11.s64 + -30648;
	// bl 0x8259af80
	ctx.lr = 0x83BC1668;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3816
	ctx.r3.s64 = ctx.r10.s64 + -3816;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC1674;
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

__attribute__((alias("__imp__sub_83BC1684"))) PPC_WEAK_FUNC(sub_83BC1684);
PPC_FUNC_IMPL(__imp__sub_83BC1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1688"))) PPC_WEAK_FUNC(sub_83BC1688);
PPC_FUNC_IMPL(__imp__sub_83BC1688) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30668
	ctx.r11.s64 = ctx.r8.s64 + -30668;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3824
	ctx.r3.s64 = ctx.r6.s64 + -3824;
	// stw r10,-30668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC16B8"))) PPC_WEAK_FUNC(sub_83BC16B8);
PPC_FUNC_IMPL(__imp__sub_83BC16B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3808
	ctx.r3.s64 = ctx.r11.s64 + -3808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC16C4"))) PPC_WEAK_FUNC(sub_83BC16C4);
PPC_FUNC_IMPL(__imp__sub_83BC16C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC16C8"))) PPC_WEAK_FUNC(sub_83BC16C8);
PPC_FUNC_IMPL(__imp__sub_83BC16C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3800
	ctx.r3.s64 = ctx.r11.s64 + -3800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC16D4"))) PPC_WEAK_FUNC(sub_83BC16D4);
PPC_FUNC_IMPL(__imp__sub_83BC16D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC16D8"))) PPC_WEAK_FUNC(sub_83BC16D8);
PPC_FUNC_IMPL(__imp__sub_83BC16D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3792
	ctx.r3.s64 = ctx.r11.s64 + -3792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC16E4"))) PPC_WEAK_FUNC(sub_83BC16E4);
PPC_FUNC_IMPL(__imp__sub_83BC16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC16E8"))) PPC_WEAK_FUNC(sub_83BC16E8);
PPC_FUNC_IMPL(__imp__sub_83BC16E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3784
	ctx.r3.s64 = ctx.r11.s64 + -3784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC16F4"))) PPC_WEAK_FUNC(sub_83BC16F4);
PPC_FUNC_IMPL(__imp__sub_83BC16F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC16F8"))) PPC_WEAK_FUNC(sub_83BC16F8);
PPC_FUNC_IMPL(__imp__sub_83BC16F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3776
	ctx.r3.s64 = ctx.r11.s64 + -3776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1704"))) PPC_WEAK_FUNC(sub_83BC1704);
PPC_FUNC_IMPL(__imp__sub_83BC1704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1708"))) PPC_WEAK_FUNC(sub_83BC1708);
PPC_FUNC_IMPL(__imp__sub_83BC1708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3768
	ctx.r3.s64 = ctx.r11.s64 + -3768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1714"))) PPC_WEAK_FUNC(sub_83BC1714);
PPC_FUNC_IMPL(__imp__sub_83BC1714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1718"))) PPC_WEAK_FUNC(sub_83BC1718);
PPC_FUNC_IMPL(__imp__sub_83BC1718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1724"))) PPC_WEAK_FUNC(sub_83BC1724);
PPC_FUNC_IMPL(__imp__sub_83BC1724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1728"))) PPC_WEAK_FUNC(sub_83BC1728);
PPC_FUNC_IMPL(__imp__sub_83BC1728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3752
	ctx.r3.s64 = ctx.r11.s64 + -3752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1734"))) PPC_WEAK_FUNC(sub_83BC1734);
PPC_FUNC_IMPL(__imp__sub_83BC1734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1738"))) PPC_WEAK_FUNC(sub_83BC1738);
PPC_FUNC_IMPL(__imp__sub_83BC1738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3744
	ctx.r3.s64 = ctx.r11.s64 + -3744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1744"))) PPC_WEAK_FUNC(sub_83BC1744);
PPC_FUNC_IMPL(__imp__sub_83BC1744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1748"))) PPC_WEAK_FUNC(sub_83BC1748);
PPC_FUNC_IMPL(__imp__sub_83BC1748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3736
	ctx.r3.s64 = ctx.r11.s64 + -3736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1754"))) PPC_WEAK_FUNC(sub_83BC1754);
PPC_FUNC_IMPL(__imp__sub_83BC1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1758"))) PPC_WEAK_FUNC(sub_83BC1758);
PPC_FUNC_IMPL(__imp__sub_83BC1758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3728
	ctx.r3.s64 = ctx.r11.s64 + -3728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1764"))) PPC_WEAK_FUNC(sub_83BC1764);
PPC_FUNC_IMPL(__imp__sub_83BC1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1768"))) PPC_WEAK_FUNC(sub_83BC1768);
PPC_FUNC_IMPL(__imp__sub_83BC1768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3720
	ctx.r3.s64 = ctx.r11.s64 + -3720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1774"))) PPC_WEAK_FUNC(sub_83BC1774);
PPC_FUNC_IMPL(__imp__sub_83BC1774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1778"))) PPC_WEAK_FUNC(sub_83BC1778);
PPC_FUNC_IMPL(__imp__sub_83BC1778) {
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
	// addi r3,r11,-30304
	ctx.r3.s64 = ctx.r11.s64 + -30304;
	// bl 0x83523120
	ctx.lr = 0x83BC1790;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3712
	ctx.r3.s64 = ctx.r10.s64 + -3712;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC179C;
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

__attribute__((alias("__imp__sub_83BC17AC"))) PPC_WEAK_FUNC(sub_83BC17AC);
PPC_FUNC_IMPL(__imp__sub_83BC17AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC17B0"))) PPC_WEAK_FUNC(sub_83BC17B0);
PPC_FUNC_IMPL(__imp__sub_83BC17B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30288
	ctx.r7.s64 = ctx.r8.s64 + -30288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30288(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC17D8"))) PPC_WEAK_FUNC(sub_83BC17D8);
PPC_FUNC_IMPL(__imp__sub_83BC17D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,316
	ctx.r6.s64 = ctx.r7.s64 + 316;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,244(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 244);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30288);
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
	// std r9,316(r7)
	PPC_STORE_U64(ctx.r7.u32 + 316, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1820"))) PPC_WEAK_FUNC(sub_83BC1820);
PPC_FUNC_IMPL(__imp__sub_83BC1820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3696
	ctx.r3.s64 = ctx.r11.s64 + -3696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC182C"))) PPC_WEAK_FUNC(sub_83BC182C);
PPC_FUNC_IMPL(__imp__sub_83BC182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1830"))) PPC_WEAK_FUNC(sub_83BC1830);
PPC_FUNC_IMPL(__imp__sub_83BC1830) {
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
	// addi r3,r11,-30280
	ctx.r3.s64 = ctx.r11.s64 + -30280;
	// bl 0x8259af80
	ctx.lr = 0x83BC1848;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3680
	ctx.r3.s64 = ctx.r10.s64 + -3680;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC1854;
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

__attribute__((alias("__imp__sub_83BC1864"))) PPC_WEAK_FUNC(sub_83BC1864);
PPC_FUNC_IMPL(__imp__sub_83BC1864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1868"))) PPC_WEAK_FUNC(sub_83BC1868);
PPC_FUNC_IMPL(__imp__sub_83BC1868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30300
	ctx.r11.s64 = ctx.r8.s64 + -30300;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3688
	ctx.r3.s64 = ctx.r6.s64 + -3688;
	// stw r10,-30300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30300, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1898"))) PPC_WEAK_FUNC(sub_83BC1898);
PPC_FUNC_IMPL(__imp__sub_83BC1898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3672
	ctx.r3.s64 = ctx.r11.s64 + -3672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC18A4"))) PPC_WEAK_FUNC(sub_83BC18A4);
PPC_FUNC_IMPL(__imp__sub_83BC18A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC18A8"))) PPC_WEAK_FUNC(sub_83BC18A8);
PPC_FUNC_IMPL(__imp__sub_83BC18A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3664
	ctx.r3.s64 = ctx.r11.s64 + -3664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC18B4"))) PPC_WEAK_FUNC(sub_83BC18B4);
PPC_FUNC_IMPL(__imp__sub_83BC18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC18B8"))) PPC_WEAK_FUNC(sub_83BC18B8);
PPC_FUNC_IMPL(__imp__sub_83BC18B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3656
	ctx.r3.s64 = ctx.r11.s64 + -3656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC18C4"))) PPC_WEAK_FUNC(sub_83BC18C4);
PPC_FUNC_IMPL(__imp__sub_83BC18C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC18C8"))) PPC_WEAK_FUNC(sub_83BC18C8);
PPC_FUNC_IMPL(__imp__sub_83BC18C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3648
	ctx.r3.s64 = ctx.r11.s64 + -3648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC18D4"))) PPC_WEAK_FUNC(sub_83BC18D4);
PPC_FUNC_IMPL(__imp__sub_83BC18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC18D8"))) PPC_WEAK_FUNC(sub_83BC18D8);
PPC_FUNC_IMPL(__imp__sub_83BC18D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3640
	ctx.r3.s64 = ctx.r11.s64 + -3640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC18E4"))) PPC_WEAK_FUNC(sub_83BC18E4);
PPC_FUNC_IMPL(__imp__sub_83BC18E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC18E8"))) PPC_WEAK_FUNC(sub_83BC18E8);
PPC_FUNC_IMPL(__imp__sub_83BC18E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3632
	ctx.r3.s64 = ctx.r11.s64 + -3632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC18F4"))) PPC_WEAK_FUNC(sub_83BC18F4);
PPC_FUNC_IMPL(__imp__sub_83BC18F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC18F8"))) PPC_WEAK_FUNC(sub_83BC18F8);
PPC_FUNC_IMPL(__imp__sub_83BC18F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3624
	ctx.r3.s64 = ctx.r11.s64 + -3624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1904"))) PPC_WEAK_FUNC(sub_83BC1904);
PPC_FUNC_IMPL(__imp__sub_83BC1904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1908"))) PPC_WEAK_FUNC(sub_83BC1908);
PPC_FUNC_IMPL(__imp__sub_83BC1908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3616
	ctx.r3.s64 = ctx.r11.s64 + -3616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1914"))) PPC_WEAK_FUNC(sub_83BC1914);
PPC_FUNC_IMPL(__imp__sub_83BC1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1918"))) PPC_WEAK_FUNC(sub_83BC1918);
PPC_FUNC_IMPL(__imp__sub_83BC1918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3608
	ctx.r3.s64 = ctx.r11.s64 + -3608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1924"))) PPC_WEAK_FUNC(sub_83BC1924);
PPC_FUNC_IMPL(__imp__sub_83BC1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1928"))) PPC_WEAK_FUNC(sub_83BC1928);
PPC_FUNC_IMPL(__imp__sub_83BC1928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3600
	ctx.r3.s64 = ctx.r11.s64 + -3600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1934"))) PPC_WEAK_FUNC(sub_83BC1934);
PPC_FUNC_IMPL(__imp__sub_83BC1934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1938"))) PPC_WEAK_FUNC(sub_83BC1938);
PPC_FUNC_IMPL(__imp__sub_83BC1938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3592
	ctx.r3.s64 = ctx.r11.s64 + -3592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1944"))) PPC_WEAK_FUNC(sub_83BC1944);
PPC_FUNC_IMPL(__imp__sub_83BC1944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1948"))) PPC_WEAK_FUNC(sub_83BC1948);
PPC_FUNC_IMPL(__imp__sub_83BC1948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3584
	ctx.r3.s64 = ctx.r11.s64 + -3584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1954"))) PPC_WEAK_FUNC(sub_83BC1954);
PPC_FUNC_IMPL(__imp__sub_83BC1954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1958"))) PPC_WEAK_FUNC(sub_83BC1958);
PPC_FUNC_IMPL(__imp__sub_83BC1958) {
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
	// addi r3,r11,-29936
	ctx.r3.s64 = ctx.r11.s64 + -29936;
	// bl 0x83523120
	ctx.lr = 0x83BC1970;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3576
	ctx.r3.s64 = ctx.r10.s64 + -3576;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC197C;
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

__attribute__((alias("__imp__sub_83BC198C"))) PPC_WEAK_FUNC(sub_83BC198C);
PPC_FUNC_IMPL(__imp__sub_83BC198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1990"))) PPC_WEAK_FUNC(sub_83BC1990);
PPC_FUNC_IMPL(__imp__sub_83BC1990) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29920
	ctx.r7.s64 = ctx.r8.s64 + -29920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29920);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29920, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC19B8"))) PPC_WEAK_FUNC(sub_83BC19B8);
PPC_FUNC_IMPL(__imp__sub_83BC19B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,444
	ctx.r6.s64 = ctx.r7.s64 + 444;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29920(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29920);
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
	// std r9,444(r7)
	PPC_STORE_U64(ctx.r7.u32 + 444, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1A00"))) PPC_WEAK_FUNC(sub_83BC1A00);
PPC_FUNC_IMPL(__imp__sub_83BC1A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3560
	ctx.r3.s64 = ctx.r11.s64 + -3560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1A0C"))) PPC_WEAK_FUNC(sub_83BC1A0C);
PPC_FUNC_IMPL(__imp__sub_83BC1A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1A10"))) PPC_WEAK_FUNC(sub_83BC1A10);
PPC_FUNC_IMPL(__imp__sub_83BC1A10) {
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
	// addi r3,r11,-29912
	ctx.r3.s64 = ctx.r11.s64 + -29912;
	// bl 0x8259af80
	ctx.lr = 0x83BC1A28;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3544
	ctx.r3.s64 = ctx.r10.s64 + -3544;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC1A34;
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

__attribute__((alias("__imp__sub_83BC1A44"))) PPC_WEAK_FUNC(sub_83BC1A44);
PPC_FUNC_IMPL(__imp__sub_83BC1A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1A48"))) PPC_WEAK_FUNC(sub_83BC1A48);
PPC_FUNC_IMPL(__imp__sub_83BC1A48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29932
	ctx.r11.s64 = ctx.r8.s64 + -29932;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3552
	ctx.r3.s64 = ctx.r6.s64 + -3552;
	// stw r10,-29932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29932, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1A78"))) PPC_WEAK_FUNC(sub_83BC1A78);
PPC_FUNC_IMPL(__imp__sub_83BC1A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3536
	ctx.r3.s64 = ctx.r11.s64 + -3536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1A84"))) PPC_WEAK_FUNC(sub_83BC1A84);
PPC_FUNC_IMPL(__imp__sub_83BC1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1A88"))) PPC_WEAK_FUNC(sub_83BC1A88);
PPC_FUNC_IMPL(__imp__sub_83BC1A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3528
	ctx.r3.s64 = ctx.r11.s64 + -3528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1A94"))) PPC_WEAK_FUNC(sub_83BC1A94);
PPC_FUNC_IMPL(__imp__sub_83BC1A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1A98"))) PPC_WEAK_FUNC(sub_83BC1A98);
PPC_FUNC_IMPL(__imp__sub_83BC1A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3520
	ctx.r3.s64 = ctx.r11.s64 + -3520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1AA4"))) PPC_WEAK_FUNC(sub_83BC1AA4);
PPC_FUNC_IMPL(__imp__sub_83BC1AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1AA8"))) PPC_WEAK_FUNC(sub_83BC1AA8);
PPC_FUNC_IMPL(__imp__sub_83BC1AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3512
	ctx.r3.s64 = ctx.r11.s64 + -3512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1AB4"))) PPC_WEAK_FUNC(sub_83BC1AB4);
PPC_FUNC_IMPL(__imp__sub_83BC1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1AB8"))) PPC_WEAK_FUNC(sub_83BC1AB8);
PPC_FUNC_IMPL(__imp__sub_83BC1AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3504
	ctx.r3.s64 = ctx.r11.s64 + -3504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1AC4"))) PPC_WEAK_FUNC(sub_83BC1AC4);
PPC_FUNC_IMPL(__imp__sub_83BC1AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1AC8"))) PPC_WEAK_FUNC(sub_83BC1AC8);
PPC_FUNC_IMPL(__imp__sub_83BC1AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3496
	ctx.r3.s64 = ctx.r11.s64 + -3496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1AD4"))) PPC_WEAK_FUNC(sub_83BC1AD4);
PPC_FUNC_IMPL(__imp__sub_83BC1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1AD8"))) PPC_WEAK_FUNC(sub_83BC1AD8);
PPC_FUNC_IMPL(__imp__sub_83BC1AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3488
	ctx.r3.s64 = ctx.r11.s64 + -3488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1AE4"))) PPC_WEAK_FUNC(sub_83BC1AE4);
PPC_FUNC_IMPL(__imp__sub_83BC1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1AE8"))) PPC_WEAK_FUNC(sub_83BC1AE8);
PPC_FUNC_IMPL(__imp__sub_83BC1AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3480
	ctx.r3.s64 = ctx.r11.s64 + -3480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1AF4"))) PPC_WEAK_FUNC(sub_83BC1AF4);
PPC_FUNC_IMPL(__imp__sub_83BC1AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1AF8"))) PPC_WEAK_FUNC(sub_83BC1AF8);
PPC_FUNC_IMPL(__imp__sub_83BC1AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3472
	ctx.r3.s64 = ctx.r11.s64 + -3472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1B04"))) PPC_WEAK_FUNC(sub_83BC1B04);
PPC_FUNC_IMPL(__imp__sub_83BC1B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1B08"))) PPC_WEAK_FUNC(sub_83BC1B08);
PPC_FUNC_IMPL(__imp__sub_83BC1B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3464
	ctx.r3.s64 = ctx.r11.s64 + -3464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1B14"))) PPC_WEAK_FUNC(sub_83BC1B14);
PPC_FUNC_IMPL(__imp__sub_83BC1B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1B18"))) PPC_WEAK_FUNC(sub_83BC1B18);
PPC_FUNC_IMPL(__imp__sub_83BC1B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3456
	ctx.r3.s64 = ctx.r11.s64 + -3456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1B24"))) PPC_WEAK_FUNC(sub_83BC1B24);
PPC_FUNC_IMPL(__imp__sub_83BC1B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1B28"))) PPC_WEAK_FUNC(sub_83BC1B28);
PPC_FUNC_IMPL(__imp__sub_83BC1B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3448
	ctx.r3.s64 = ctx.r11.s64 + -3448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1B34"))) PPC_WEAK_FUNC(sub_83BC1B34);
PPC_FUNC_IMPL(__imp__sub_83BC1B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1B38"))) PPC_WEAK_FUNC(sub_83BC1B38);
PPC_FUNC_IMPL(__imp__sub_83BC1B38) {
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
	// addi r3,r11,-29568
	ctx.r3.s64 = ctx.r11.s64 + -29568;
	// bl 0x83523120
	ctx.lr = 0x83BC1B50;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3440
	ctx.r3.s64 = ctx.r10.s64 + -3440;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC1B5C;
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

__attribute__((alias("__imp__sub_83BC1B6C"))) PPC_WEAK_FUNC(sub_83BC1B6C);
PPC_FUNC_IMPL(__imp__sub_83BC1B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1B70"))) PPC_WEAK_FUNC(sub_83BC1B70);
PPC_FUNC_IMPL(__imp__sub_83BC1B70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29552
	ctx.r7.s64 = ctx.r8.s64 + -29552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29552(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29552);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29552(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29552, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1B98"))) PPC_WEAK_FUNC(sub_83BC1B98);
PPC_FUNC_IMPL(__imp__sub_83BC1B98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,572
	ctx.r6.s64 = ctx.r7.s64 + 572;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,500(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 500);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29552(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29552);
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
	// std r9,572(r7)
	PPC_STORE_U64(ctx.r7.u32 + 572, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1BE0"))) PPC_WEAK_FUNC(sub_83BC1BE0);
PPC_FUNC_IMPL(__imp__sub_83BC1BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3424
	ctx.r3.s64 = ctx.r11.s64 + -3424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1BEC"))) PPC_WEAK_FUNC(sub_83BC1BEC);
PPC_FUNC_IMPL(__imp__sub_83BC1BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1BF0"))) PPC_WEAK_FUNC(sub_83BC1BF0);
PPC_FUNC_IMPL(__imp__sub_83BC1BF0) {
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
	// addi r3,r11,-29544
	ctx.r3.s64 = ctx.r11.s64 + -29544;
	// bl 0x8259af80
	ctx.lr = 0x83BC1C08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3408
	ctx.r3.s64 = ctx.r10.s64 + -3408;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC1C14;
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

__attribute__((alias("__imp__sub_83BC1C24"))) PPC_WEAK_FUNC(sub_83BC1C24);
PPC_FUNC_IMPL(__imp__sub_83BC1C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1C28"))) PPC_WEAK_FUNC(sub_83BC1C28);
PPC_FUNC_IMPL(__imp__sub_83BC1C28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29564
	ctx.r11.s64 = ctx.r8.s64 + -29564;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3416
	ctx.r3.s64 = ctx.r6.s64 + -3416;
	// stw r10,-29564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1C58"))) PPC_WEAK_FUNC(sub_83BC1C58);
PPC_FUNC_IMPL(__imp__sub_83BC1C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3400
	ctx.r3.s64 = ctx.r11.s64 + -3400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1C64"))) PPC_WEAK_FUNC(sub_83BC1C64);
PPC_FUNC_IMPL(__imp__sub_83BC1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1C68"))) PPC_WEAK_FUNC(sub_83BC1C68);
PPC_FUNC_IMPL(__imp__sub_83BC1C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3392
	ctx.r3.s64 = ctx.r11.s64 + -3392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1C74"))) PPC_WEAK_FUNC(sub_83BC1C74);
PPC_FUNC_IMPL(__imp__sub_83BC1C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1C78"))) PPC_WEAK_FUNC(sub_83BC1C78);
PPC_FUNC_IMPL(__imp__sub_83BC1C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3384
	ctx.r3.s64 = ctx.r11.s64 + -3384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1C84"))) PPC_WEAK_FUNC(sub_83BC1C84);
PPC_FUNC_IMPL(__imp__sub_83BC1C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1C88"))) PPC_WEAK_FUNC(sub_83BC1C88);
PPC_FUNC_IMPL(__imp__sub_83BC1C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3376
	ctx.r3.s64 = ctx.r11.s64 + -3376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1C94"))) PPC_WEAK_FUNC(sub_83BC1C94);
PPC_FUNC_IMPL(__imp__sub_83BC1C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1C98"))) PPC_WEAK_FUNC(sub_83BC1C98);
PPC_FUNC_IMPL(__imp__sub_83BC1C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3368
	ctx.r3.s64 = ctx.r11.s64 + -3368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1CA4"))) PPC_WEAK_FUNC(sub_83BC1CA4);
PPC_FUNC_IMPL(__imp__sub_83BC1CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1CA8"))) PPC_WEAK_FUNC(sub_83BC1CA8);
PPC_FUNC_IMPL(__imp__sub_83BC1CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1CB4"))) PPC_WEAK_FUNC(sub_83BC1CB4);
PPC_FUNC_IMPL(__imp__sub_83BC1CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1CB8"))) PPC_WEAK_FUNC(sub_83BC1CB8);
PPC_FUNC_IMPL(__imp__sub_83BC1CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3352
	ctx.r3.s64 = ctx.r11.s64 + -3352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1CC4"))) PPC_WEAK_FUNC(sub_83BC1CC4);
PPC_FUNC_IMPL(__imp__sub_83BC1CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1CC8"))) PPC_WEAK_FUNC(sub_83BC1CC8);
PPC_FUNC_IMPL(__imp__sub_83BC1CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3344
	ctx.r3.s64 = ctx.r11.s64 + -3344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1CD4"))) PPC_WEAK_FUNC(sub_83BC1CD4);
PPC_FUNC_IMPL(__imp__sub_83BC1CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1CD8"))) PPC_WEAK_FUNC(sub_83BC1CD8);
PPC_FUNC_IMPL(__imp__sub_83BC1CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3336
	ctx.r3.s64 = ctx.r11.s64 + -3336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1CE4"))) PPC_WEAK_FUNC(sub_83BC1CE4);
PPC_FUNC_IMPL(__imp__sub_83BC1CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1CE8"))) PPC_WEAK_FUNC(sub_83BC1CE8);
PPC_FUNC_IMPL(__imp__sub_83BC1CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3328
	ctx.r3.s64 = ctx.r11.s64 + -3328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1CF4"))) PPC_WEAK_FUNC(sub_83BC1CF4);
PPC_FUNC_IMPL(__imp__sub_83BC1CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1CF8"))) PPC_WEAK_FUNC(sub_83BC1CF8);
PPC_FUNC_IMPL(__imp__sub_83BC1CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3320
	ctx.r3.s64 = ctx.r11.s64 + -3320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1D04"))) PPC_WEAK_FUNC(sub_83BC1D04);
PPC_FUNC_IMPL(__imp__sub_83BC1D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1D08"))) PPC_WEAK_FUNC(sub_83BC1D08);
PPC_FUNC_IMPL(__imp__sub_83BC1D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3312
	ctx.r3.s64 = ctx.r11.s64 + -3312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1D14"))) PPC_WEAK_FUNC(sub_83BC1D14);
PPC_FUNC_IMPL(__imp__sub_83BC1D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1D18"))) PPC_WEAK_FUNC(sub_83BC1D18);
PPC_FUNC_IMPL(__imp__sub_83BC1D18) {
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
	// addi r3,r11,-29200
	ctx.r3.s64 = ctx.r11.s64 + -29200;
	// bl 0x83523120
	ctx.lr = 0x83BC1D30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3304
	ctx.r3.s64 = ctx.r10.s64 + -3304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC1D3C;
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

__attribute__((alias("__imp__sub_83BC1D4C"))) PPC_WEAK_FUNC(sub_83BC1D4C);
PPC_FUNC_IMPL(__imp__sub_83BC1D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1D50"))) PPC_WEAK_FUNC(sub_83BC1D50);
PPC_FUNC_IMPL(__imp__sub_83BC1D50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29184
	ctx.r7.s64 = ctx.r8.s64 + -29184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29184);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29184(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29184, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1D78"))) PPC_WEAK_FUNC(sub_83BC1D78);
PPC_FUNC_IMPL(__imp__sub_83BC1D78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,704
	ctx.r6.s64 = ctx.r7.s64 + 704;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29184);
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
	// std r9,704(r7)
	PPC_STORE_U64(ctx.r7.u32 + 704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC1DC0"))) PPC_WEAK_FUNC(sub_83BC1DC0);
PPC_FUNC_IMPL(__imp__sub_83BC1DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3288
	ctx.r3.s64 = ctx.r11.s64 + -3288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1DCC"))) PPC_WEAK_FUNC(sub_83BC1DCC);
PPC_FUNC_IMPL(__imp__sub_83BC1DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1DD0"))) PPC_WEAK_FUNC(sub_83BC1DD0);
PPC_FUNC_IMPL(__imp__sub_83BC1DD0) {
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
	// addi r3,r11,-29176
	ctx.r3.s64 = ctx.r11.s64 + -29176;
	// bl 0x8259af80
	ctx.lr = 0x83BC1DE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-3272
	ctx.r3.s64 = ctx.r10.s64 + -3272;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC1DF4;
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

__attribute__((alias("__imp__sub_83BC1E04"))) PPC_WEAK_FUNC(sub_83BC1E04);
PPC_FUNC_IMPL(__imp__sub_83BC1E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1E08"))) PPC_WEAK_FUNC(sub_83BC1E08);
PPC_FUNC_IMPL(__imp__sub_83BC1E08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29196
	ctx.r11.s64 = ctx.r8.s64 + -29196;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,680(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 680);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3280
	ctx.r3.s64 = ctx.r6.s64 + -3280;
	// stw r10,-29196(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1E38"))) PPC_WEAK_FUNC(sub_83BC1E38);
PPC_FUNC_IMPL(__imp__sub_83BC1E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3264
	ctx.r3.s64 = ctx.r11.s64 + -3264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1E44"))) PPC_WEAK_FUNC(sub_83BC1E44);
PPC_FUNC_IMPL(__imp__sub_83BC1E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1E48"))) PPC_WEAK_FUNC(sub_83BC1E48);
PPC_FUNC_IMPL(__imp__sub_83BC1E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC1E54"))) PPC_WEAK_FUNC(sub_83BC1E54);
PPC_FUNC_IMPL(__imp__sub_83BC1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC1E58"))) PPC_WEAK_FUNC(sub_83BC1E58);
PPC_FUNC_IMPL(__imp__sub_83BC1E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-3248
	ctx.r3.s64 = ctx.r11.s64 + -3248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

