#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D18BD0"))) PPC_WEAK_FUNC(sub_83D18BD0);
PPC_FUNC_IMPL(__imp__sub_83D18BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18BD4"))) PPC_WEAK_FUNC(sub_83D18BD4);
PPC_FUNC_IMPL(__imp__sub_83D18BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18BD8"))) PPC_WEAK_FUNC(sub_83D18BD8);
PPC_FUNC_IMPL(__imp__sub_83D18BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18BDC"))) PPC_WEAK_FUNC(sub_83D18BDC);
PPC_FUNC_IMPL(__imp__sub_83D18BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18BE0"))) PPC_WEAK_FUNC(sub_83D18BE0);
PPC_FUNC_IMPL(__imp__sub_83D18BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r11,7044
	ctx.r31.s64 = ctx.r11.s64 + 7044;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x838164b8
	ctx.lr = 0x83D18C0C;
	sub_838164B8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D18C20;
	sub_825952B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C34"))) PPC_WEAK_FUNC(sub_83D18C34);
PPC_FUNC_IMPL(__imp__sub_83D18C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C38"))) PPC_WEAK_FUNC(sub_83D18C38);
PPC_FUNC_IMPL(__imp__sub_83D18C38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C3C"))) PPC_WEAK_FUNC(sub_83D18C3C);
PPC_FUNC_IMPL(__imp__sub_83D18C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C40"))) PPC_WEAK_FUNC(sub_83D18C40);
PPC_FUNC_IMPL(__imp__sub_83D18C40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C44"))) PPC_WEAK_FUNC(sub_83D18C44);
PPC_FUNC_IMPL(__imp__sub_83D18C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C48"))) PPC_WEAK_FUNC(sub_83D18C48);
PPC_FUNC_IMPL(__imp__sub_83D18C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C4C"))) PPC_WEAK_FUNC(sub_83D18C4C);
PPC_FUNC_IMPL(__imp__sub_83D18C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C50"))) PPC_WEAK_FUNC(sub_83D18C50);
PPC_FUNC_IMPL(__imp__sub_83D18C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C54"))) PPC_WEAK_FUNC(sub_83D18C54);
PPC_FUNC_IMPL(__imp__sub_83D18C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C58"))) PPC_WEAK_FUNC(sub_83D18C58);
PPC_FUNC_IMPL(__imp__sub_83D18C58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C5C"))) PPC_WEAK_FUNC(sub_83D18C5C);
PPC_FUNC_IMPL(__imp__sub_83D18C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C60"))) PPC_WEAK_FUNC(sub_83D18C60);
PPC_FUNC_IMPL(__imp__sub_83D18C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C64"))) PPC_WEAK_FUNC(sub_83D18C64);
PPC_FUNC_IMPL(__imp__sub_83D18C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C68"))) PPC_WEAK_FUNC(sub_83D18C68);
PPC_FUNC_IMPL(__imp__sub_83D18C68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C6C"))) PPC_WEAK_FUNC(sub_83D18C6C);
PPC_FUNC_IMPL(__imp__sub_83D18C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C70"))) PPC_WEAK_FUNC(sub_83D18C70);
PPC_FUNC_IMPL(__imp__sub_83D18C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C74"))) PPC_WEAK_FUNC(sub_83D18C74);
PPC_FUNC_IMPL(__imp__sub_83D18C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C78"))) PPC_WEAK_FUNC(sub_83D18C78);
PPC_FUNC_IMPL(__imp__sub_83D18C78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C7C"))) PPC_WEAK_FUNC(sub_83D18C7C);
PPC_FUNC_IMPL(__imp__sub_83D18C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C80"))) PPC_WEAK_FUNC(sub_83D18C80);
PPC_FUNC_IMPL(__imp__sub_83D18C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C84"))) PPC_WEAK_FUNC(sub_83D18C84);
PPC_FUNC_IMPL(__imp__sub_83D18C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C88"))) PPC_WEAK_FUNC(sub_83D18C88);
PPC_FUNC_IMPL(__imp__sub_83D18C88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C8C"))) PPC_WEAK_FUNC(sub_83D18C8C);
PPC_FUNC_IMPL(__imp__sub_83D18C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C90"))) PPC_WEAK_FUNC(sub_83D18C90);
PPC_FUNC_IMPL(__imp__sub_83D18C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18C94"))) PPC_WEAK_FUNC(sub_83D18C94);
PPC_FUNC_IMPL(__imp__sub_83D18C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18C98"))) PPC_WEAK_FUNC(sub_83D18C98);
PPC_FUNC_IMPL(__imp__sub_83D18C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,7424
	ctx.r3.s64 = ctx.r11.s64 + 7424;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D18CA4"))) PPC_WEAK_FUNC(sub_83D18CA4);
PPC_FUNC_IMPL(__imp__sub_83D18CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CA8"))) PPC_WEAK_FUNC(sub_83D18CA8);
PPC_FUNC_IMPL(__imp__sub_83D18CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CAC"))) PPC_WEAK_FUNC(sub_83D18CAC);
PPC_FUNC_IMPL(__imp__sub_83D18CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CB0"))) PPC_WEAK_FUNC(sub_83D18CB0);
PPC_FUNC_IMPL(__imp__sub_83D18CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CB4"))) PPC_WEAK_FUNC(sub_83D18CB4);
PPC_FUNC_IMPL(__imp__sub_83D18CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CB8"))) PPC_WEAK_FUNC(sub_83D18CB8);
PPC_FUNC_IMPL(__imp__sub_83D18CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CBC"))) PPC_WEAK_FUNC(sub_83D18CBC);
PPC_FUNC_IMPL(__imp__sub_83D18CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CC0"))) PPC_WEAK_FUNC(sub_83D18CC0);
PPC_FUNC_IMPL(__imp__sub_83D18CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CC4"))) PPC_WEAK_FUNC(sub_83D18CC4);
PPC_FUNC_IMPL(__imp__sub_83D18CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CC8"))) PPC_WEAK_FUNC(sub_83D18CC8);
PPC_FUNC_IMPL(__imp__sub_83D18CC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CCC"))) PPC_WEAK_FUNC(sub_83D18CCC);
PPC_FUNC_IMPL(__imp__sub_83D18CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CD0"))) PPC_WEAK_FUNC(sub_83D18CD0);
PPC_FUNC_IMPL(__imp__sub_83D18CD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CD4"))) PPC_WEAK_FUNC(sub_83D18CD4);
PPC_FUNC_IMPL(__imp__sub_83D18CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CD8"))) PPC_WEAK_FUNC(sub_83D18CD8);
PPC_FUNC_IMPL(__imp__sub_83D18CD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CDC"))) PPC_WEAK_FUNC(sub_83D18CDC);
PPC_FUNC_IMPL(__imp__sub_83D18CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CE0"))) PPC_WEAK_FUNC(sub_83D18CE0);
PPC_FUNC_IMPL(__imp__sub_83D18CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CE4"))) PPC_WEAK_FUNC(sub_83D18CE4);
PPC_FUNC_IMPL(__imp__sub_83D18CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CE8"))) PPC_WEAK_FUNC(sub_83D18CE8);
PPC_FUNC_IMPL(__imp__sub_83D18CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CEC"))) PPC_WEAK_FUNC(sub_83D18CEC);
PPC_FUNC_IMPL(__imp__sub_83D18CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CF0"))) PPC_WEAK_FUNC(sub_83D18CF0);
PPC_FUNC_IMPL(__imp__sub_83D18CF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CF4"))) PPC_WEAK_FUNC(sub_83D18CF4);
PPC_FUNC_IMPL(__imp__sub_83D18CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18CF8"))) PPC_WEAK_FUNC(sub_83D18CF8);
PPC_FUNC_IMPL(__imp__sub_83D18CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18CFC"))) PPC_WEAK_FUNC(sub_83D18CFC);
PPC_FUNC_IMPL(__imp__sub_83D18CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D00"))) PPC_WEAK_FUNC(sub_83D18D00);
PPC_FUNC_IMPL(__imp__sub_83D18D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D04"))) PPC_WEAK_FUNC(sub_83D18D04);
PPC_FUNC_IMPL(__imp__sub_83D18D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D08"))) PPC_WEAK_FUNC(sub_83D18D08);
PPC_FUNC_IMPL(__imp__sub_83D18D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D0C"))) PPC_WEAK_FUNC(sub_83D18D0C);
PPC_FUNC_IMPL(__imp__sub_83D18D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D10"))) PPC_WEAK_FUNC(sub_83D18D10);
PPC_FUNC_IMPL(__imp__sub_83D18D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D14"))) PPC_WEAK_FUNC(sub_83D18D14);
PPC_FUNC_IMPL(__imp__sub_83D18D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D18"))) PPC_WEAK_FUNC(sub_83D18D18);
PPC_FUNC_IMPL(__imp__sub_83D18D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D1C"))) PPC_WEAK_FUNC(sub_83D18D1C);
PPC_FUNC_IMPL(__imp__sub_83D18D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D20"))) PPC_WEAK_FUNC(sub_83D18D20);
PPC_FUNC_IMPL(__imp__sub_83D18D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,7792
	ctx.r3.s64 = ctx.r11.s64 + 7792;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D18D2C"))) PPC_WEAK_FUNC(sub_83D18D2C);
PPC_FUNC_IMPL(__imp__sub_83D18D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D30"))) PPC_WEAK_FUNC(sub_83D18D30);
PPC_FUNC_IMPL(__imp__sub_83D18D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D34"))) PPC_WEAK_FUNC(sub_83D18D34);
PPC_FUNC_IMPL(__imp__sub_83D18D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D38"))) PPC_WEAK_FUNC(sub_83D18D38);
PPC_FUNC_IMPL(__imp__sub_83D18D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D3C"))) PPC_WEAK_FUNC(sub_83D18D3C);
PPC_FUNC_IMPL(__imp__sub_83D18D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D40"))) PPC_WEAK_FUNC(sub_83D18D40);
PPC_FUNC_IMPL(__imp__sub_83D18D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D44"))) PPC_WEAK_FUNC(sub_83D18D44);
PPC_FUNC_IMPL(__imp__sub_83D18D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D48"))) PPC_WEAK_FUNC(sub_83D18D48);
PPC_FUNC_IMPL(__imp__sub_83D18D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D4C"))) PPC_WEAK_FUNC(sub_83D18D4C);
PPC_FUNC_IMPL(__imp__sub_83D18D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D50"))) PPC_WEAK_FUNC(sub_83D18D50);
PPC_FUNC_IMPL(__imp__sub_83D18D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D54"))) PPC_WEAK_FUNC(sub_83D18D54);
PPC_FUNC_IMPL(__imp__sub_83D18D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D58"))) PPC_WEAK_FUNC(sub_83D18D58);
PPC_FUNC_IMPL(__imp__sub_83D18D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D5C"))) PPC_WEAK_FUNC(sub_83D18D5C);
PPC_FUNC_IMPL(__imp__sub_83D18D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D60"))) PPC_WEAK_FUNC(sub_83D18D60);
PPC_FUNC_IMPL(__imp__sub_83D18D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D64"))) PPC_WEAK_FUNC(sub_83D18D64);
PPC_FUNC_IMPL(__imp__sub_83D18D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D68"))) PPC_WEAK_FUNC(sub_83D18D68);
PPC_FUNC_IMPL(__imp__sub_83D18D68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D6C"))) PPC_WEAK_FUNC(sub_83D18D6C);
PPC_FUNC_IMPL(__imp__sub_83D18D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D70"))) PPC_WEAK_FUNC(sub_83D18D70);
PPC_FUNC_IMPL(__imp__sub_83D18D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D74"))) PPC_WEAK_FUNC(sub_83D18D74);
PPC_FUNC_IMPL(__imp__sub_83D18D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D78"))) PPC_WEAK_FUNC(sub_83D18D78);
PPC_FUNC_IMPL(__imp__sub_83D18D78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D7C"))) PPC_WEAK_FUNC(sub_83D18D7C);
PPC_FUNC_IMPL(__imp__sub_83D18D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D80"))) PPC_WEAK_FUNC(sub_83D18D80);
PPC_FUNC_IMPL(__imp__sub_83D18D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D84"))) PPC_WEAK_FUNC(sub_83D18D84);
PPC_FUNC_IMPL(__imp__sub_83D18D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D88"))) PPC_WEAK_FUNC(sub_83D18D88);
PPC_FUNC_IMPL(__imp__sub_83D18D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D8C"))) PPC_WEAK_FUNC(sub_83D18D8C);
PPC_FUNC_IMPL(__imp__sub_83D18D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D90"))) PPC_WEAK_FUNC(sub_83D18D90);
PPC_FUNC_IMPL(__imp__sub_83D18D90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D94"))) PPC_WEAK_FUNC(sub_83D18D94);
PPC_FUNC_IMPL(__imp__sub_83D18D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18D98"))) PPC_WEAK_FUNC(sub_83D18D98);
PPC_FUNC_IMPL(__imp__sub_83D18D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18D9C"))) PPC_WEAK_FUNC(sub_83D18D9C);
PPC_FUNC_IMPL(__imp__sub_83D18D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DA0"))) PPC_WEAK_FUNC(sub_83D18DA0);
PPC_FUNC_IMPL(__imp__sub_83D18DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DA4"))) PPC_WEAK_FUNC(sub_83D18DA4);
PPC_FUNC_IMPL(__imp__sub_83D18DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DA8"))) PPC_WEAK_FUNC(sub_83D18DA8);
PPC_FUNC_IMPL(__imp__sub_83D18DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D18DB4"))) PPC_WEAK_FUNC(sub_83D18DB4);
PPC_FUNC_IMPL(__imp__sub_83D18DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DB8"))) PPC_WEAK_FUNC(sub_83D18DB8);
PPC_FUNC_IMPL(__imp__sub_83D18DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DBC"))) PPC_WEAK_FUNC(sub_83D18DBC);
PPC_FUNC_IMPL(__imp__sub_83D18DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DC0"))) PPC_WEAK_FUNC(sub_83D18DC0);
PPC_FUNC_IMPL(__imp__sub_83D18DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DC4"))) PPC_WEAK_FUNC(sub_83D18DC4);
PPC_FUNC_IMPL(__imp__sub_83D18DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DC8"))) PPC_WEAK_FUNC(sub_83D18DC8);
PPC_FUNC_IMPL(__imp__sub_83D18DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DCC"))) PPC_WEAK_FUNC(sub_83D18DCC);
PPC_FUNC_IMPL(__imp__sub_83D18DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DD0"))) PPC_WEAK_FUNC(sub_83D18DD0);
PPC_FUNC_IMPL(__imp__sub_83D18DD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DD4"))) PPC_WEAK_FUNC(sub_83D18DD4);
PPC_FUNC_IMPL(__imp__sub_83D18DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DD8"))) PPC_WEAK_FUNC(sub_83D18DD8);
PPC_FUNC_IMPL(__imp__sub_83D18DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DDC"))) PPC_WEAK_FUNC(sub_83D18DDC);
PPC_FUNC_IMPL(__imp__sub_83D18DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DE0"))) PPC_WEAK_FUNC(sub_83D18DE0);
PPC_FUNC_IMPL(__imp__sub_83D18DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DE4"))) PPC_WEAK_FUNC(sub_83D18DE4);
PPC_FUNC_IMPL(__imp__sub_83D18DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DE8"))) PPC_WEAK_FUNC(sub_83D18DE8);
PPC_FUNC_IMPL(__imp__sub_83D18DE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DEC"))) PPC_WEAK_FUNC(sub_83D18DEC);
PPC_FUNC_IMPL(__imp__sub_83D18DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DF0"))) PPC_WEAK_FUNC(sub_83D18DF0);
PPC_FUNC_IMPL(__imp__sub_83D18DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DF4"))) PPC_WEAK_FUNC(sub_83D18DF4);
PPC_FUNC_IMPL(__imp__sub_83D18DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18DF8"))) PPC_WEAK_FUNC(sub_83D18DF8);
PPC_FUNC_IMPL(__imp__sub_83D18DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18DFC"))) PPC_WEAK_FUNC(sub_83D18DFC);
PPC_FUNC_IMPL(__imp__sub_83D18DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E00"))) PPC_WEAK_FUNC(sub_83D18E00);
PPC_FUNC_IMPL(__imp__sub_83D18E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E04"))) PPC_WEAK_FUNC(sub_83D18E04);
PPC_FUNC_IMPL(__imp__sub_83D18E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E08"))) PPC_WEAK_FUNC(sub_83D18E08);
PPC_FUNC_IMPL(__imp__sub_83D18E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E0C"))) PPC_WEAK_FUNC(sub_83D18E0C);
PPC_FUNC_IMPL(__imp__sub_83D18E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E10"))) PPC_WEAK_FUNC(sub_83D18E10);
PPC_FUNC_IMPL(__imp__sub_83D18E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E14"))) PPC_WEAK_FUNC(sub_83D18E14);
PPC_FUNC_IMPL(__imp__sub_83D18E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E18"))) PPC_WEAK_FUNC(sub_83D18E18);
PPC_FUNC_IMPL(__imp__sub_83D18E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E1C"))) PPC_WEAK_FUNC(sub_83D18E1C);
PPC_FUNC_IMPL(__imp__sub_83D18E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E20"))) PPC_WEAK_FUNC(sub_83D18E20);
PPC_FUNC_IMPL(__imp__sub_83D18E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E24"))) PPC_WEAK_FUNC(sub_83D18E24);
PPC_FUNC_IMPL(__imp__sub_83D18E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E28"))) PPC_WEAK_FUNC(sub_83D18E28);
PPC_FUNC_IMPL(__imp__sub_83D18E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E2C"))) PPC_WEAK_FUNC(sub_83D18E2C);
PPC_FUNC_IMPL(__imp__sub_83D18E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E30"))) PPC_WEAK_FUNC(sub_83D18E30);
PPC_FUNC_IMPL(__imp__sub_83D18E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,8528
	ctx.r3.s64 = ctx.r11.s64 + 8528;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D18E3C"))) PPC_WEAK_FUNC(sub_83D18E3C);
PPC_FUNC_IMPL(__imp__sub_83D18E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E40"))) PPC_WEAK_FUNC(sub_83D18E40);
PPC_FUNC_IMPL(__imp__sub_83D18E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E44"))) PPC_WEAK_FUNC(sub_83D18E44);
PPC_FUNC_IMPL(__imp__sub_83D18E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E48"))) PPC_WEAK_FUNC(sub_83D18E48);
PPC_FUNC_IMPL(__imp__sub_83D18E48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E4C"))) PPC_WEAK_FUNC(sub_83D18E4C);
PPC_FUNC_IMPL(__imp__sub_83D18E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E50"))) PPC_WEAK_FUNC(sub_83D18E50);
PPC_FUNC_IMPL(__imp__sub_83D18E50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E54"))) PPC_WEAK_FUNC(sub_83D18E54);
PPC_FUNC_IMPL(__imp__sub_83D18E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E58"))) PPC_WEAK_FUNC(sub_83D18E58);
PPC_FUNC_IMPL(__imp__sub_83D18E58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E5C"))) PPC_WEAK_FUNC(sub_83D18E5C);
PPC_FUNC_IMPL(__imp__sub_83D18E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E60"))) PPC_WEAK_FUNC(sub_83D18E60);
PPC_FUNC_IMPL(__imp__sub_83D18E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E64"))) PPC_WEAK_FUNC(sub_83D18E64);
PPC_FUNC_IMPL(__imp__sub_83D18E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E68"))) PPC_WEAK_FUNC(sub_83D18E68);
PPC_FUNC_IMPL(__imp__sub_83D18E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E6C"))) PPC_WEAK_FUNC(sub_83D18E6C);
PPC_FUNC_IMPL(__imp__sub_83D18E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E70"))) PPC_WEAK_FUNC(sub_83D18E70);
PPC_FUNC_IMPL(__imp__sub_83D18E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E74"))) PPC_WEAK_FUNC(sub_83D18E74);
PPC_FUNC_IMPL(__imp__sub_83D18E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E78"))) PPC_WEAK_FUNC(sub_83D18E78);
PPC_FUNC_IMPL(__imp__sub_83D18E78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E7C"))) PPC_WEAK_FUNC(sub_83D18E7C);
PPC_FUNC_IMPL(__imp__sub_83D18E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E80"))) PPC_WEAK_FUNC(sub_83D18E80);
PPC_FUNC_IMPL(__imp__sub_83D18E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E84"))) PPC_WEAK_FUNC(sub_83D18E84);
PPC_FUNC_IMPL(__imp__sub_83D18E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E88"))) PPC_WEAK_FUNC(sub_83D18E88);
PPC_FUNC_IMPL(__imp__sub_83D18E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E8C"))) PPC_WEAK_FUNC(sub_83D18E8C);
PPC_FUNC_IMPL(__imp__sub_83D18E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E90"))) PPC_WEAK_FUNC(sub_83D18E90);
PPC_FUNC_IMPL(__imp__sub_83D18E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E94"))) PPC_WEAK_FUNC(sub_83D18E94);
PPC_FUNC_IMPL(__imp__sub_83D18E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18E98"))) PPC_WEAK_FUNC(sub_83D18E98);
PPC_FUNC_IMPL(__imp__sub_83D18E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18E9C"))) PPC_WEAK_FUNC(sub_83D18E9C);
PPC_FUNC_IMPL(__imp__sub_83D18E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EA0"))) PPC_WEAK_FUNC(sub_83D18EA0);
PPC_FUNC_IMPL(__imp__sub_83D18EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18EA4"))) PPC_WEAK_FUNC(sub_83D18EA4);
PPC_FUNC_IMPL(__imp__sub_83D18EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EA8"))) PPC_WEAK_FUNC(sub_83D18EA8);
PPC_FUNC_IMPL(__imp__sub_83D18EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18EAC"))) PPC_WEAK_FUNC(sub_83D18EAC);
PPC_FUNC_IMPL(__imp__sub_83D18EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EB0"))) PPC_WEAK_FUNC(sub_83D18EB0);
PPC_FUNC_IMPL(__imp__sub_83D18EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18EB4"))) PPC_WEAK_FUNC(sub_83D18EB4);
PPC_FUNC_IMPL(__imp__sub_83D18EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EB8"))) PPC_WEAK_FUNC(sub_83D18EB8);
PPC_FUNC_IMPL(__imp__sub_83D18EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,8896
	ctx.r3.s64 = ctx.r11.s64 + 8896;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D18EC4"))) PPC_WEAK_FUNC(sub_83D18EC4);
PPC_FUNC_IMPL(__imp__sub_83D18EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EC8"))) PPC_WEAK_FUNC(sub_83D18EC8);
PPC_FUNC_IMPL(__imp__sub_83D18EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18ECC"))) PPC_WEAK_FUNC(sub_83D18ECC);
PPC_FUNC_IMPL(__imp__sub_83D18ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18ED0"))) PPC_WEAK_FUNC(sub_83D18ED0);
PPC_FUNC_IMPL(__imp__sub_83D18ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18ED4"))) PPC_WEAK_FUNC(sub_83D18ED4);
PPC_FUNC_IMPL(__imp__sub_83D18ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18ED8"))) PPC_WEAK_FUNC(sub_83D18ED8);
PPC_FUNC_IMPL(__imp__sub_83D18ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18EDC"))) PPC_WEAK_FUNC(sub_83D18EDC);
PPC_FUNC_IMPL(__imp__sub_83D18EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EE0"))) PPC_WEAK_FUNC(sub_83D18EE0);
PPC_FUNC_IMPL(__imp__sub_83D18EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18EE4"))) PPC_WEAK_FUNC(sub_83D18EE4);
PPC_FUNC_IMPL(__imp__sub_83D18EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EE8"))) PPC_WEAK_FUNC(sub_83D18EE8);
PPC_FUNC_IMPL(__imp__sub_83D18EE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18EEC"))) PPC_WEAK_FUNC(sub_83D18EEC);
PPC_FUNC_IMPL(__imp__sub_83D18EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EF0"))) PPC_WEAK_FUNC(sub_83D18EF0);
PPC_FUNC_IMPL(__imp__sub_83D18EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18EF4"))) PPC_WEAK_FUNC(sub_83D18EF4);
PPC_FUNC_IMPL(__imp__sub_83D18EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18EF8"))) PPC_WEAK_FUNC(sub_83D18EF8);
PPC_FUNC_IMPL(__imp__sub_83D18EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18EFC"))) PPC_WEAK_FUNC(sub_83D18EFC);
PPC_FUNC_IMPL(__imp__sub_83D18EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F00"))) PPC_WEAK_FUNC(sub_83D18F00);
PPC_FUNC_IMPL(__imp__sub_83D18F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F04"))) PPC_WEAK_FUNC(sub_83D18F04);
PPC_FUNC_IMPL(__imp__sub_83D18F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F08"))) PPC_WEAK_FUNC(sub_83D18F08);
PPC_FUNC_IMPL(__imp__sub_83D18F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F0C"))) PPC_WEAK_FUNC(sub_83D18F0C);
PPC_FUNC_IMPL(__imp__sub_83D18F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F10"))) PPC_WEAK_FUNC(sub_83D18F10);
PPC_FUNC_IMPL(__imp__sub_83D18F10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F14"))) PPC_WEAK_FUNC(sub_83D18F14);
PPC_FUNC_IMPL(__imp__sub_83D18F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F18"))) PPC_WEAK_FUNC(sub_83D18F18);
PPC_FUNC_IMPL(__imp__sub_83D18F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F1C"))) PPC_WEAK_FUNC(sub_83D18F1C);
PPC_FUNC_IMPL(__imp__sub_83D18F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F20"))) PPC_WEAK_FUNC(sub_83D18F20);
PPC_FUNC_IMPL(__imp__sub_83D18F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F24"))) PPC_WEAK_FUNC(sub_83D18F24);
PPC_FUNC_IMPL(__imp__sub_83D18F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F28"))) PPC_WEAK_FUNC(sub_83D18F28);
PPC_FUNC_IMPL(__imp__sub_83D18F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F2C"))) PPC_WEAK_FUNC(sub_83D18F2C);
PPC_FUNC_IMPL(__imp__sub_83D18F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F30"))) PPC_WEAK_FUNC(sub_83D18F30);
PPC_FUNC_IMPL(__imp__sub_83D18F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F34"))) PPC_WEAK_FUNC(sub_83D18F34);
PPC_FUNC_IMPL(__imp__sub_83D18F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F38"))) PPC_WEAK_FUNC(sub_83D18F38);
PPC_FUNC_IMPL(__imp__sub_83D18F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F3C"))) PPC_WEAK_FUNC(sub_83D18F3C);
PPC_FUNC_IMPL(__imp__sub_83D18F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F40"))) PPC_WEAK_FUNC(sub_83D18F40);
PPC_FUNC_IMPL(__imp__sub_83D18F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,9268
	ctx.r3.s64 = ctx.r11.s64 + 9268;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D18F4C"))) PPC_WEAK_FUNC(sub_83D18F4C);
PPC_FUNC_IMPL(__imp__sub_83D18F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F50"))) PPC_WEAK_FUNC(sub_83D18F50);
PPC_FUNC_IMPL(__imp__sub_83D18F50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F54"))) PPC_WEAK_FUNC(sub_83D18F54);
PPC_FUNC_IMPL(__imp__sub_83D18F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F58"))) PPC_WEAK_FUNC(sub_83D18F58);
PPC_FUNC_IMPL(__imp__sub_83D18F58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F5C"))) PPC_WEAK_FUNC(sub_83D18F5C);
PPC_FUNC_IMPL(__imp__sub_83D18F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F60"))) PPC_WEAK_FUNC(sub_83D18F60);
PPC_FUNC_IMPL(__imp__sub_83D18F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F64"))) PPC_WEAK_FUNC(sub_83D18F64);
PPC_FUNC_IMPL(__imp__sub_83D18F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F68"))) PPC_WEAK_FUNC(sub_83D18F68);
PPC_FUNC_IMPL(__imp__sub_83D18F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F6C"))) PPC_WEAK_FUNC(sub_83D18F6C);
PPC_FUNC_IMPL(__imp__sub_83D18F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F70"))) PPC_WEAK_FUNC(sub_83D18F70);
PPC_FUNC_IMPL(__imp__sub_83D18F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F74"))) PPC_WEAK_FUNC(sub_83D18F74);
PPC_FUNC_IMPL(__imp__sub_83D18F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F78"))) PPC_WEAK_FUNC(sub_83D18F78);
PPC_FUNC_IMPL(__imp__sub_83D18F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F7C"))) PPC_WEAK_FUNC(sub_83D18F7C);
PPC_FUNC_IMPL(__imp__sub_83D18F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F80"))) PPC_WEAK_FUNC(sub_83D18F80);
PPC_FUNC_IMPL(__imp__sub_83D18F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F84"))) PPC_WEAK_FUNC(sub_83D18F84);
PPC_FUNC_IMPL(__imp__sub_83D18F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F88"))) PPC_WEAK_FUNC(sub_83D18F88);
PPC_FUNC_IMPL(__imp__sub_83D18F88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F8C"))) PPC_WEAK_FUNC(sub_83D18F8C);
PPC_FUNC_IMPL(__imp__sub_83D18F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F90"))) PPC_WEAK_FUNC(sub_83D18F90);
PPC_FUNC_IMPL(__imp__sub_83D18F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F94"))) PPC_WEAK_FUNC(sub_83D18F94);
PPC_FUNC_IMPL(__imp__sub_83D18F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18F98"))) PPC_WEAK_FUNC(sub_83D18F98);
PPC_FUNC_IMPL(__imp__sub_83D18F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18F9C"))) PPC_WEAK_FUNC(sub_83D18F9C);
PPC_FUNC_IMPL(__imp__sub_83D18F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FA0"))) PPC_WEAK_FUNC(sub_83D18FA0);
PPC_FUNC_IMPL(__imp__sub_83D18FA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FA4"))) PPC_WEAK_FUNC(sub_83D18FA4);
PPC_FUNC_IMPL(__imp__sub_83D18FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FA8"))) PPC_WEAK_FUNC(sub_83D18FA8);
PPC_FUNC_IMPL(__imp__sub_83D18FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FAC"))) PPC_WEAK_FUNC(sub_83D18FAC);
PPC_FUNC_IMPL(__imp__sub_83D18FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FB0"))) PPC_WEAK_FUNC(sub_83D18FB0);
PPC_FUNC_IMPL(__imp__sub_83D18FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FB4"))) PPC_WEAK_FUNC(sub_83D18FB4);
PPC_FUNC_IMPL(__imp__sub_83D18FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FB8"))) PPC_WEAK_FUNC(sub_83D18FB8);
PPC_FUNC_IMPL(__imp__sub_83D18FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FBC"))) PPC_WEAK_FUNC(sub_83D18FBC);
PPC_FUNC_IMPL(__imp__sub_83D18FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FC0"))) PPC_WEAK_FUNC(sub_83D18FC0);
PPC_FUNC_IMPL(__imp__sub_83D18FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FC4"))) PPC_WEAK_FUNC(sub_83D18FC4);
PPC_FUNC_IMPL(__imp__sub_83D18FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FC8"))) PPC_WEAK_FUNC(sub_83D18FC8);
PPC_FUNC_IMPL(__imp__sub_83D18FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,9640
	ctx.r3.s64 = ctx.r11.s64 + 9640;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D18FD4"))) PPC_WEAK_FUNC(sub_83D18FD4);
PPC_FUNC_IMPL(__imp__sub_83D18FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FD8"))) PPC_WEAK_FUNC(sub_83D18FD8);
PPC_FUNC_IMPL(__imp__sub_83D18FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FDC"))) PPC_WEAK_FUNC(sub_83D18FDC);
PPC_FUNC_IMPL(__imp__sub_83D18FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FE0"))) PPC_WEAK_FUNC(sub_83D18FE0);
PPC_FUNC_IMPL(__imp__sub_83D18FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FE4"))) PPC_WEAK_FUNC(sub_83D18FE4);
PPC_FUNC_IMPL(__imp__sub_83D18FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FE8"))) PPC_WEAK_FUNC(sub_83D18FE8);
PPC_FUNC_IMPL(__imp__sub_83D18FE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FEC"))) PPC_WEAK_FUNC(sub_83D18FEC);
PPC_FUNC_IMPL(__imp__sub_83D18FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FF0"))) PPC_WEAK_FUNC(sub_83D18FF0);
PPC_FUNC_IMPL(__imp__sub_83D18FF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FF4"))) PPC_WEAK_FUNC(sub_83D18FF4);
PPC_FUNC_IMPL(__imp__sub_83D18FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D18FF8"))) PPC_WEAK_FUNC(sub_83D18FF8);
PPC_FUNC_IMPL(__imp__sub_83D18FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D18FFC"))) PPC_WEAK_FUNC(sub_83D18FFC);
PPC_FUNC_IMPL(__imp__sub_83D18FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19000"))) PPC_WEAK_FUNC(sub_83D19000);
PPC_FUNC_IMPL(__imp__sub_83D19000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19004"))) PPC_WEAK_FUNC(sub_83D19004);
PPC_FUNC_IMPL(__imp__sub_83D19004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19008"))) PPC_WEAK_FUNC(sub_83D19008);
PPC_FUNC_IMPL(__imp__sub_83D19008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1900C"))) PPC_WEAK_FUNC(sub_83D1900C);
PPC_FUNC_IMPL(__imp__sub_83D1900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19010"))) PPC_WEAK_FUNC(sub_83D19010);
PPC_FUNC_IMPL(__imp__sub_83D19010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19014"))) PPC_WEAK_FUNC(sub_83D19014);
PPC_FUNC_IMPL(__imp__sub_83D19014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19018"))) PPC_WEAK_FUNC(sub_83D19018);
PPC_FUNC_IMPL(__imp__sub_83D19018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1901C"))) PPC_WEAK_FUNC(sub_83D1901C);
PPC_FUNC_IMPL(__imp__sub_83D1901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19020"))) PPC_WEAK_FUNC(sub_83D19020);
PPC_FUNC_IMPL(__imp__sub_83D19020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19024"))) PPC_WEAK_FUNC(sub_83D19024);
PPC_FUNC_IMPL(__imp__sub_83D19024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19028"))) PPC_WEAK_FUNC(sub_83D19028);
PPC_FUNC_IMPL(__imp__sub_83D19028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1902C"))) PPC_WEAK_FUNC(sub_83D1902C);
PPC_FUNC_IMPL(__imp__sub_83D1902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19030"))) PPC_WEAK_FUNC(sub_83D19030);
PPC_FUNC_IMPL(__imp__sub_83D19030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19034"))) PPC_WEAK_FUNC(sub_83D19034);
PPC_FUNC_IMPL(__imp__sub_83D19034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19038"))) PPC_WEAK_FUNC(sub_83D19038);
PPC_FUNC_IMPL(__imp__sub_83D19038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1903C"))) PPC_WEAK_FUNC(sub_83D1903C);
PPC_FUNC_IMPL(__imp__sub_83D1903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19040"))) PPC_WEAK_FUNC(sub_83D19040);
PPC_FUNC_IMPL(__imp__sub_83D19040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D19044"))) PPC_WEAK_FUNC(sub_83D19044);
PPC_FUNC_IMPL(__imp__sub_83D19044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19048"))) PPC_WEAK_FUNC(sub_83D19048);
PPC_FUNC_IMPL(__imp__sub_83D19048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D1904C"))) PPC_WEAK_FUNC(sub_83D1904C);
PPC_FUNC_IMPL(__imp__sub_83D1904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D19050"))) PPC_WEAK_FUNC(sub_83D19050);
PPC_FUNC_IMPL(__imp__sub_83D19050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,10012
	ctx.r3.s64 = ctx.r11.s64 + 10012;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D1905C"))) PPC_WEAK_FUNC(sub_83D1905C);
PPC_FUNC_IMPL(__imp__sub_83D1905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

