#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B7358C"))) PPC_WEAK_FUNC(sub_83B7358C);
PPC_FUNC_IMPL(__imp__sub_83B7358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73590"))) PPC_WEAK_FUNC(sub_83B73590);
PPC_FUNC_IMPL(__imp__sub_83B73590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7359C"))) PPC_WEAK_FUNC(sub_83B7359C);
PPC_FUNC_IMPL(__imp__sub_83B7359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B735A0"))) PPC_WEAK_FUNC(sub_83B735A0);
PPC_FUNC_IMPL(__imp__sub_83B735A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,19968
	ctx.r3.s64 = ctx.r11.s64 + 19968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B735AC"))) PPC_WEAK_FUNC(sub_83B735AC);
PPC_FUNC_IMPL(__imp__sub_83B735AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B735B0"))) PPC_WEAK_FUNC(sub_83B735B0);
PPC_FUNC_IMPL(__imp__sub_83B735B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,19976
	ctx.r3.s64 = ctx.r11.s64 + 19976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B735BC"))) PPC_WEAK_FUNC(sub_83B735BC);
PPC_FUNC_IMPL(__imp__sub_83B735BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B735C0"))) PPC_WEAK_FUNC(sub_83B735C0);
PPC_FUNC_IMPL(__imp__sub_83B735C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19260
	ctx.r7.s64 = ctx.r8.s64 + -19260;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19260);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19260(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19260, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B735E8"))) PPC_WEAK_FUNC(sub_83B735E8);
PPC_FUNC_IMPL(__imp__sub_83B735E8) {
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
	// addi r3,r11,-19264
	ctx.r3.s64 = ctx.r11.s64 + -19264;
	// bl 0x83523120
	ctx.lr = 0x83B73600;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,19984
	ctx.r3.s64 = ctx.r10.s64 + 19984;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7360C;
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

__attribute__((alias("__imp__sub_83B7361C"))) PPC_WEAK_FUNC(sub_83B7361C);
PPC_FUNC_IMPL(__imp__sub_83B7361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73620"))) PPC_WEAK_FUNC(sub_83B73620);
PPC_FUNC_IMPL(__imp__sub_83B73620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7362C"))) PPC_WEAK_FUNC(sub_83B7362C);
PPC_FUNC_IMPL(__imp__sub_83B7362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73630"))) PPC_WEAK_FUNC(sub_83B73630);
PPC_FUNC_IMPL(__imp__sub_83B73630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20008
	ctx.r3.s64 = ctx.r11.s64 + 20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7363C"))) PPC_WEAK_FUNC(sub_83B7363C);
PPC_FUNC_IMPL(__imp__sub_83B7363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73640"))) PPC_WEAK_FUNC(sub_83B73640);
PPC_FUNC_IMPL(__imp__sub_83B73640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7364C"))) PPC_WEAK_FUNC(sub_83B7364C);
PPC_FUNC_IMPL(__imp__sub_83B7364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73650"))) PPC_WEAK_FUNC(sub_83B73650);
PPC_FUNC_IMPL(__imp__sub_83B73650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20024
	ctx.r3.s64 = ctx.r11.s64 + 20024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7365C"))) PPC_WEAK_FUNC(sub_83B7365C);
PPC_FUNC_IMPL(__imp__sub_83B7365C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73660"))) PPC_WEAK_FUNC(sub_83B73660);
PPC_FUNC_IMPL(__imp__sub_83B73660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20032
	ctx.r3.s64 = ctx.r11.s64 + 20032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7366C"))) PPC_WEAK_FUNC(sub_83B7366C);
PPC_FUNC_IMPL(__imp__sub_83B7366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73670"))) PPC_WEAK_FUNC(sub_83B73670);
PPC_FUNC_IMPL(__imp__sub_83B73670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20040
	ctx.r3.s64 = ctx.r11.s64 + 20040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7367C"))) PPC_WEAK_FUNC(sub_83B7367C);
PPC_FUNC_IMPL(__imp__sub_83B7367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73680"))) PPC_WEAK_FUNC(sub_83B73680);
PPC_FUNC_IMPL(__imp__sub_83B73680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20048
	ctx.r3.s64 = ctx.r11.s64 + 20048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7368C"))) PPC_WEAK_FUNC(sub_83B7368C);
PPC_FUNC_IMPL(__imp__sub_83B7368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73690"))) PPC_WEAK_FUNC(sub_83B73690);
PPC_FUNC_IMPL(__imp__sub_83B73690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20056
	ctx.r3.s64 = ctx.r11.s64 + 20056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7369C"))) PPC_WEAK_FUNC(sub_83B7369C);
PPC_FUNC_IMPL(__imp__sub_83B7369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B736A0"))) PPC_WEAK_FUNC(sub_83B736A0);
PPC_FUNC_IMPL(__imp__sub_83B736A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20064
	ctx.r3.s64 = ctx.r11.s64 + 20064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B736AC"))) PPC_WEAK_FUNC(sub_83B736AC);
PPC_FUNC_IMPL(__imp__sub_83B736AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B736B0"))) PPC_WEAK_FUNC(sub_83B736B0);
PPC_FUNC_IMPL(__imp__sub_83B736B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B736BC"))) PPC_WEAK_FUNC(sub_83B736BC);
PPC_FUNC_IMPL(__imp__sub_83B736BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B736C0"))) PPC_WEAK_FUNC(sub_83B736C0);
PPC_FUNC_IMPL(__imp__sub_83B736C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20080
	ctx.r3.s64 = ctx.r11.s64 + 20080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B736CC"))) PPC_WEAK_FUNC(sub_83B736CC);
PPC_FUNC_IMPL(__imp__sub_83B736CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B736D0"))) PPC_WEAK_FUNC(sub_83B736D0);
PPC_FUNC_IMPL(__imp__sub_83B736D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20088
	ctx.r3.s64 = ctx.r11.s64 + 20088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B736DC"))) PPC_WEAK_FUNC(sub_83B736DC);
PPC_FUNC_IMPL(__imp__sub_83B736DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B736E0"))) PPC_WEAK_FUNC(sub_83B736E0);
PPC_FUNC_IMPL(__imp__sub_83B736E0) {
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
	// addi r3,r11,-18772
	ctx.r3.s64 = ctx.r11.s64 + -18772;
	// bl 0x83523120
	ctx.lr = 0x83B736F8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,20096
	ctx.r3.s64 = ctx.r10.s64 + 20096;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73704;
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

__attribute__((alias("__imp__sub_83B73714"))) PPC_WEAK_FUNC(sub_83B73714);
PPC_FUNC_IMPL(__imp__sub_83B73714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73718"))) PPC_WEAK_FUNC(sub_83B73718);
PPC_FUNC_IMPL(__imp__sub_83B73718) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18768
	ctx.r7.s64 = ctx.r8.s64 + -18768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B73740"))) PPC_WEAK_FUNC(sub_83B73740);
PPC_FUNC_IMPL(__imp__sub_83B73740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20144
	ctx.r3.s64 = ctx.r11.s64 + 20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7374C"))) PPC_WEAK_FUNC(sub_83B7374C);
PPC_FUNC_IMPL(__imp__sub_83B7374C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73750"))) PPC_WEAK_FUNC(sub_83B73750);
PPC_FUNC_IMPL(__imp__sub_83B73750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20152
	ctx.r3.s64 = ctx.r11.s64 + 20152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7375C"))) PPC_WEAK_FUNC(sub_83B7375C);
PPC_FUNC_IMPL(__imp__sub_83B7375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73760"))) PPC_WEAK_FUNC(sub_83B73760);
PPC_FUNC_IMPL(__imp__sub_83B73760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20160
	ctx.r3.s64 = ctx.r11.s64 + 20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7376C"))) PPC_WEAK_FUNC(sub_83B7376C);
PPC_FUNC_IMPL(__imp__sub_83B7376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73770"))) PPC_WEAK_FUNC(sub_83B73770);
PPC_FUNC_IMPL(__imp__sub_83B73770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20168
	ctx.r3.s64 = ctx.r11.s64 + 20168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7377C"))) PPC_WEAK_FUNC(sub_83B7377C);
PPC_FUNC_IMPL(__imp__sub_83B7377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73780"))) PPC_WEAK_FUNC(sub_83B73780);
PPC_FUNC_IMPL(__imp__sub_83B73780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20176
	ctx.r3.s64 = ctx.r11.s64 + 20176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7378C"))) PPC_WEAK_FUNC(sub_83B7378C);
PPC_FUNC_IMPL(__imp__sub_83B7378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73790"))) PPC_WEAK_FUNC(sub_83B73790);
PPC_FUNC_IMPL(__imp__sub_83B73790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20184
	ctx.r3.s64 = ctx.r11.s64 + 20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7379C"))) PPC_WEAK_FUNC(sub_83B7379C);
PPC_FUNC_IMPL(__imp__sub_83B7379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B737A0"))) PPC_WEAK_FUNC(sub_83B737A0);
PPC_FUNC_IMPL(__imp__sub_83B737A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20192
	ctx.r3.s64 = ctx.r11.s64 + 20192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B737AC"))) PPC_WEAK_FUNC(sub_83B737AC);
PPC_FUNC_IMPL(__imp__sub_83B737AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B737B0"))) PPC_WEAK_FUNC(sub_83B737B0);
PPC_FUNC_IMPL(__imp__sub_83B737B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20200
	ctx.r3.s64 = ctx.r11.s64 + 20200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B737BC"))) PPC_WEAK_FUNC(sub_83B737BC);
PPC_FUNC_IMPL(__imp__sub_83B737BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B737C0"))) PPC_WEAK_FUNC(sub_83B737C0);
PPC_FUNC_IMPL(__imp__sub_83B737C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20208
	ctx.r3.s64 = ctx.r11.s64 + 20208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B737CC"))) PPC_WEAK_FUNC(sub_83B737CC);
PPC_FUNC_IMPL(__imp__sub_83B737CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B737D0"))) PPC_WEAK_FUNC(sub_83B737D0);
PPC_FUNC_IMPL(__imp__sub_83B737D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20216
	ctx.r3.s64 = ctx.r11.s64 + 20216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B737DC"))) PPC_WEAK_FUNC(sub_83B737DC);
PPC_FUNC_IMPL(__imp__sub_83B737DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B737E0"))) PPC_WEAK_FUNC(sub_83B737E0);
PPC_FUNC_IMPL(__imp__sub_83B737E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20224
	ctx.r3.s64 = ctx.r11.s64 + 20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B737EC"))) PPC_WEAK_FUNC(sub_83B737EC);
PPC_FUNC_IMPL(__imp__sub_83B737EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B737F0"))) PPC_WEAK_FUNC(sub_83B737F0);
PPC_FUNC_IMPL(__imp__sub_83B737F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20232
	ctx.r3.s64 = ctx.r11.s64 + 20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B737FC"))) PPC_WEAK_FUNC(sub_83B737FC);
PPC_FUNC_IMPL(__imp__sub_83B737FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73800"))) PPC_WEAK_FUNC(sub_83B73800);
PPC_FUNC_IMPL(__imp__sub_83B73800) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18280
	ctx.r7.s64 = ctx.r8.s64 + -18280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18280);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18280, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B73828"))) PPC_WEAK_FUNC(sub_83B73828);
PPC_FUNC_IMPL(__imp__sub_83B73828) {
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
	// addi r3,r11,-18284
	ctx.r3.s64 = ctx.r11.s64 + -18284;
	// bl 0x83523120
	ctx.lr = 0x83B73840;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,20240
	ctx.r3.s64 = ctx.r10.s64 + 20240;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7384C;
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

__attribute__((alias("__imp__sub_83B7385C"))) PPC_WEAK_FUNC(sub_83B7385C);
PPC_FUNC_IMPL(__imp__sub_83B7385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73860"))) PPC_WEAK_FUNC(sub_83B73860);
PPC_FUNC_IMPL(__imp__sub_83B73860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20288
	ctx.r3.s64 = ctx.r11.s64 + 20288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7386C"))) PPC_WEAK_FUNC(sub_83B7386C);
PPC_FUNC_IMPL(__imp__sub_83B7386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73870"))) PPC_WEAK_FUNC(sub_83B73870);
PPC_FUNC_IMPL(__imp__sub_83B73870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7387C"))) PPC_WEAK_FUNC(sub_83B7387C);
PPC_FUNC_IMPL(__imp__sub_83B7387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73880"))) PPC_WEAK_FUNC(sub_83B73880);
PPC_FUNC_IMPL(__imp__sub_83B73880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20304
	ctx.r3.s64 = ctx.r11.s64 + 20304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7388C"))) PPC_WEAK_FUNC(sub_83B7388C);
PPC_FUNC_IMPL(__imp__sub_83B7388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73890"))) PPC_WEAK_FUNC(sub_83B73890);
PPC_FUNC_IMPL(__imp__sub_83B73890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20312
	ctx.r3.s64 = ctx.r11.s64 + 20312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7389C"))) PPC_WEAK_FUNC(sub_83B7389C);
PPC_FUNC_IMPL(__imp__sub_83B7389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B738A0"))) PPC_WEAK_FUNC(sub_83B738A0);
PPC_FUNC_IMPL(__imp__sub_83B738A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20320
	ctx.r3.s64 = ctx.r11.s64 + 20320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B738AC"))) PPC_WEAK_FUNC(sub_83B738AC);
PPC_FUNC_IMPL(__imp__sub_83B738AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B738B0"))) PPC_WEAK_FUNC(sub_83B738B0);
PPC_FUNC_IMPL(__imp__sub_83B738B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B738BC"))) PPC_WEAK_FUNC(sub_83B738BC);
PPC_FUNC_IMPL(__imp__sub_83B738BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B738C0"))) PPC_WEAK_FUNC(sub_83B738C0);
PPC_FUNC_IMPL(__imp__sub_83B738C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20336
	ctx.r3.s64 = ctx.r11.s64 + 20336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B738CC"))) PPC_WEAK_FUNC(sub_83B738CC);
PPC_FUNC_IMPL(__imp__sub_83B738CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B738D0"))) PPC_WEAK_FUNC(sub_83B738D0);
PPC_FUNC_IMPL(__imp__sub_83B738D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20344
	ctx.r3.s64 = ctx.r11.s64 + 20344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B738DC"))) PPC_WEAK_FUNC(sub_83B738DC);
PPC_FUNC_IMPL(__imp__sub_83B738DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B738E0"))) PPC_WEAK_FUNC(sub_83B738E0);
PPC_FUNC_IMPL(__imp__sub_83B738E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20352
	ctx.r3.s64 = ctx.r11.s64 + 20352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B738EC"))) PPC_WEAK_FUNC(sub_83B738EC);
PPC_FUNC_IMPL(__imp__sub_83B738EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B738F0"))) PPC_WEAK_FUNC(sub_83B738F0);
PPC_FUNC_IMPL(__imp__sub_83B738F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20360
	ctx.r3.s64 = ctx.r11.s64 + 20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B738FC"))) PPC_WEAK_FUNC(sub_83B738FC);
PPC_FUNC_IMPL(__imp__sub_83B738FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73900"))) PPC_WEAK_FUNC(sub_83B73900);
PPC_FUNC_IMPL(__imp__sub_83B73900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20368
	ctx.r3.s64 = ctx.r11.s64 + 20368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7390C"))) PPC_WEAK_FUNC(sub_83B7390C);
PPC_FUNC_IMPL(__imp__sub_83B7390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73910"))) PPC_WEAK_FUNC(sub_83B73910);
PPC_FUNC_IMPL(__imp__sub_83B73910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20376
	ctx.r3.s64 = ctx.r11.s64 + 20376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7391C"))) PPC_WEAK_FUNC(sub_83B7391C);
PPC_FUNC_IMPL(__imp__sub_83B7391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73920"))) PPC_WEAK_FUNC(sub_83B73920);
PPC_FUNC_IMPL(__imp__sub_83B73920) {
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
	// addi r3,r11,-17796
	ctx.r3.s64 = ctx.r11.s64 + -17796;
	// bl 0x83523120
	ctx.lr = 0x83B73938;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,20384
	ctx.r3.s64 = ctx.r10.s64 + 20384;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73944;
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

__attribute__((alias("__imp__sub_83B73954"))) PPC_WEAK_FUNC(sub_83B73954);
PPC_FUNC_IMPL(__imp__sub_83B73954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73958"))) PPC_WEAK_FUNC(sub_83B73958);
PPC_FUNC_IMPL(__imp__sub_83B73958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20432
	ctx.r3.s64 = ctx.r11.s64 + 20432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73964"))) PPC_WEAK_FUNC(sub_83B73964);
PPC_FUNC_IMPL(__imp__sub_83B73964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73968"))) PPC_WEAK_FUNC(sub_83B73968);
PPC_FUNC_IMPL(__imp__sub_83B73968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20440
	ctx.r3.s64 = ctx.r11.s64 + 20440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73974"))) PPC_WEAK_FUNC(sub_83B73974);
PPC_FUNC_IMPL(__imp__sub_83B73974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73978"))) PPC_WEAK_FUNC(sub_83B73978);
PPC_FUNC_IMPL(__imp__sub_83B73978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73984"))) PPC_WEAK_FUNC(sub_83B73984);
PPC_FUNC_IMPL(__imp__sub_83B73984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73988"))) PPC_WEAK_FUNC(sub_83B73988);
PPC_FUNC_IMPL(__imp__sub_83B73988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20456
	ctx.r3.s64 = ctx.r11.s64 + 20456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73994"))) PPC_WEAK_FUNC(sub_83B73994);
PPC_FUNC_IMPL(__imp__sub_83B73994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73998"))) PPC_WEAK_FUNC(sub_83B73998);
PPC_FUNC_IMPL(__imp__sub_83B73998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20464
	ctx.r3.s64 = ctx.r11.s64 + 20464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B739A4"))) PPC_WEAK_FUNC(sub_83B739A4);
PPC_FUNC_IMPL(__imp__sub_83B739A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B739A8"))) PPC_WEAK_FUNC(sub_83B739A8);
PPC_FUNC_IMPL(__imp__sub_83B739A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B739B4"))) PPC_WEAK_FUNC(sub_83B739B4);
PPC_FUNC_IMPL(__imp__sub_83B739B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B739B8"))) PPC_WEAK_FUNC(sub_83B739B8);
PPC_FUNC_IMPL(__imp__sub_83B739B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20480
	ctx.r3.s64 = ctx.r11.s64 + 20480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B739C4"))) PPC_WEAK_FUNC(sub_83B739C4);
PPC_FUNC_IMPL(__imp__sub_83B739C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B739C8"))) PPC_WEAK_FUNC(sub_83B739C8);
PPC_FUNC_IMPL(__imp__sub_83B739C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20488
	ctx.r3.s64 = ctx.r11.s64 + 20488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B739D4"))) PPC_WEAK_FUNC(sub_83B739D4);
PPC_FUNC_IMPL(__imp__sub_83B739D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B739D8"))) PPC_WEAK_FUNC(sub_83B739D8);
PPC_FUNC_IMPL(__imp__sub_83B739D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20496
	ctx.r3.s64 = ctx.r11.s64 + 20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B739E4"))) PPC_WEAK_FUNC(sub_83B739E4);
PPC_FUNC_IMPL(__imp__sub_83B739E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B739E8"))) PPC_WEAK_FUNC(sub_83B739E8);
PPC_FUNC_IMPL(__imp__sub_83B739E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B739F4"))) PPC_WEAK_FUNC(sub_83B739F4);
PPC_FUNC_IMPL(__imp__sub_83B739F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B739F8"))) PPC_WEAK_FUNC(sub_83B739F8);
PPC_FUNC_IMPL(__imp__sub_83B739F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20512
	ctx.r3.s64 = ctx.r11.s64 + 20512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73A04"))) PPC_WEAK_FUNC(sub_83B73A04);
PPC_FUNC_IMPL(__imp__sub_83B73A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73A08"))) PPC_WEAK_FUNC(sub_83B73A08);
PPC_FUNC_IMPL(__imp__sub_83B73A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20520
	ctx.r3.s64 = ctx.r11.s64 + 20520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73A14"))) PPC_WEAK_FUNC(sub_83B73A14);
PPC_FUNC_IMPL(__imp__sub_83B73A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73A18"))) PPC_WEAK_FUNC(sub_83B73A18);
PPC_FUNC_IMPL(__imp__sub_83B73A18) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r5,r11,-15864
	ctx.r5.s64 = ctx.r11.s64 + -15864;
	// addi r3,r10,-17056
	ctx.r3.s64 = ctx.r10.s64 + -17056;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83B73A3C;
	sub_8241F1E8(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,20528
	ctx.r3.s64 = ctx.r9.s64 + 20528;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73A48;
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

__attribute__((alias("__imp__sub_83B73A58"))) PPC_WEAK_FUNC(sub_83B73A58);
PPC_FUNC_IMPL(__imp__sub_83B73A58) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r5,r11,-15852
	ctx.r5.s64 = ctx.r11.s64 + -15852;
	// addi r3,r10,-17040
	ctx.r3.s64 = ctx.r10.s64 + -17040;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83B73A7C;
	sub_8241F1E8(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,20544
	ctx.r3.s64 = ctx.r9.s64 + 20544;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73A88;
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

__attribute__((alias("__imp__sub_83B73A98"))) PPC_WEAK_FUNC(sub_83B73A98);
PPC_FUNC_IMPL(__imp__sub_83B73A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20608
	ctx.r3.s64 = ctx.r11.s64 + 20608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73AA4"))) PPC_WEAK_FUNC(sub_83B73AA4);
PPC_FUNC_IMPL(__imp__sub_83B73AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73AA8"))) PPC_WEAK_FUNC(sub_83B73AA8);
PPC_FUNC_IMPL(__imp__sub_83B73AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20624
	ctx.r3.s64 = ctx.r11.s64 + 20624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73AB4"))) PPC_WEAK_FUNC(sub_83B73AB4);
PPC_FUNC_IMPL(__imp__sub_83B73AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73AB8"))) PPC_WEAK_FUNC(sub_83B73AB8);
PPC_FUNC_IMPL(__imp__sub_83B73AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20640
	ctx.r3.s64 = ctx.r11.s64 + 20640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73AC4"))) PPC_WEAK_FUNC(sub_83B73AC4);
PPC_FUNC_IMPL(__imp__sub_83B73AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73AC8"))) PPC_WEAK_FUNC(sub_83B73AC8);
PPC_FUNC_IMPL(__imp__sub_83B73AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73AD4"))) PPC_WEAK_FUNC(sub_83B73AD4);
PPC_FUNC_IMPL(__imp__sub_83B73AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73AD8"))) PPC_WEAK_FUNC(sub_83B73AD8);
PPC_FUNC_IMPL(__imp__sub_83B73AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20672
	ctx.r3.s64 = ctx.r11.s64 + 20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73AE4"))) PPC_WEAK_FUNC(sub_83B73AE4);
PPC_FUNC_IMPL(__imp__sub_83B73AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73AE8"))) PPC_WEAK_FUNC(sub_83B73AE8);
PPC_FUNC_IMPL(__imp__sub_83B73AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20680
	ctx.r3.s64 = ctx.r11.s64 + 20680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73AF4"))) PPC_WEAK_FUNC(sub_83B73AF4);
PPC_FUNC_IMPL(__imp__sub_83B73AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73AF8"))) PPC_WEAK_FUNC(sub_83B73AF8);
PPC_FUNC_IMPL(__imp__sub_83B73AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20688
	ctx.r3.s64 = ctx.r11.s64 + 20688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B04"))) PPC_WEAK_FUNC(sub_83B73B04);
PPC_FUNC_IMPL(__imp__sub_83B73B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B08"))) PPC_WEAK_FUNC(sub_83B73B08);
PPC_FUNC_IMPL(__imp__sub_83B73B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B14"))) PPC_WEAK_FUNC(sub_83B73B14);
PPC_FUNC_IMPL(__imp__sub_83B73B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B18"))) PPC_WEAK_FUNC(sub_83B73B18);
PPC_FUNC_IMPL(__imp__sub_83B73B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B24"))) PPC_WEAK_FUNC(sub_83B73B24);
PPC_FUNC_IMPL(__imp__sub_83B73B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B28"))) PPC_WEAK_FUNC(sub_83B73B28);
PPC_FUNC_IMPL(__imp__sub_83B73B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B34"))) PPC_WEAK_FUNC(sub_83B73B34);
PPC_FUNC_IMPL(__imp__sub_83B73B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B38"))) PPC_WEAK_FUNC(sub_83B73B38);
PPC_FUNC_IMPL(__imp__sub_83B73B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20720
	ctx.r3.s64 = ctx.r11.s64 + 20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B44"))) PPC_WEAK_FUNC(sub_83B73B44);
PPC_FUNC_IMPL(__imp__sub_83B73B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B48"))) PPC_WEAK_FUNC(sub_83B73B48);
PPC_FUNC_IMPL(__imp__sub_83B73B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20728
	ctx.r3.s64 = ctx.r11.s64 + 20728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B54"))) PPC_WEAK_FUNC(sub_83B73B54);
PPC_FUNC_IMPL(__imp__sub_83B73B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B58"))) PPC_WEAK_FUNC(sub_83B73B58);
PPC_FUNC_IMPL(__imp__sub_83B73B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20736
	ctx.r3.s64 = ctx.r11.s64 + 20736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B64"))) PPC_WEAK_FUNC(sub_83B73B64);
PPC_FUNC_IMPL(__imp__sub_83B73B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B68"))) PPC_WEAK_FUNC(sub_83B73B68);
PPC_FUNC_IMPL(__imp__sub_83B73B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20744
	ctx.r3.s64 = ctx.r11.s64 + 20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B74"))) PPC_WEAK_FUNC(sub_83B73B74);
PPC_FUNC_IMPL(__imp__sub_83B73B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B78"))) PPC_WEAK_FUNC(sub_83B73B78);
PPC_FUNC_IMPL(__imp__sub_83B73B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20752
	ctx.r3.s64 = ctx.r11.s64 + 20752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B84"))) PPC_WEAK_FUNC(sub_83B73B84);
PPC_FUNC_IMPL(__imp__sub_83B73B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B88"))) PPC_WEAK_FUNC(sub_83B73B88);
PPC_FUNC_IMPL(__imp__sub_83B73B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20760
	ctx.r3.s64 = ctx.r11.s64 + 20760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73B94"))) PPC_WEAK_FUNC(sub_83B73B94);
PPC_FUNC_IMPL(__imp__sub_83B73B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73B98"))) PPC_WEAK_FUNC(sub_83B73B98);
PPC_FUNC_IMPL(__imp__sub_83B73B98) {
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
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// bl 0x83523120
	ctx.lr = 0x83B73BB0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,20768
	ctx.r3.s64 = ctx.r10.s64 + 20768;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73BBC;
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

__attribute__((alias("__imp__sub_83B73BCC"))) PPC_WEAK_FUNC(sub_83B73BCC);
PPC_FUNC_IMPL(__imp__sub_83B73BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73BD0"))) PPC_WEAK_FUNC(sub_83B73BD0);
PPC_FUNC_IMPL(__imp__sub_83B73BD0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r5,r11,-14888
	ctx.r5.s64 = ctx.r11.s64 + -14888;
	// addi r3,r10,-16008
	ctx.r3.s64 = ctx.r10.s64 + -16008;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83B73BF4;
	sub_8241F1E8(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,20784
	ctx.r3.s64 = ctx.r9.s64 + 20784;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73C00;
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

__attribute__((alias("__imp__sub_83B73C10"))) PPC_WEAK_FUNC(sub_83B73C10);
PPC_FUNC_IMPL(__imp__sub_83B73C10) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r5,r11,-14880
	ctx.r5.s64 = ctx.r11.s64 + -14880;
	// addi r3,r10,-16040
	ctx.r3.s64 = ctx.r10.s64 + -16040;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83B73C34;
	sub_8241F1E8(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,20800
	ctx.r3.s64 = ctx.r9.s64 + 20800;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73C40;
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

__attribute__((alias("__imp__sub_83B73C50"))) PPC_WEAK_FUNC(sub_83B73C50);
PPC_FUNC_IMPL(__imp__sub_83B73C50) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r5,r11,-14872
	ctx.r5.s64 = ctx.r11.s64 + -14872;
	// addi r3,r10,-16056
	ctx.r3.s64 = ctx.r10.s64 + -16056;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83B73C74;
	sub_8241F1E8(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,20816
	ctx.r3.s64 = ctx.r9.s64 + 20816;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73C80;
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

__attribute__((alias("__imp__sub_83B73C90"))) PPC_WEAK_FUNC(sub_83B73C90);
PPC_FUNC_IMPL(__imp__sub_83B73C90) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r5,r11,-14864
	ctx.r5.s64 = ctx.r11.s64 + -14864;
	// addi r3,r10,-16024
	ctx.r3.s64 = ctx.r10.s64 + -16024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f1e8
	ctx.lr = 0x83B73CB4;
	sub_8241F1E8(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,20832
	ctx.r3.s64 = ctx.r9.s64 + 20832;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73CC0;
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

__attribute__((alias("__imp__sub_83B73CD0"))) PPC_WEAK_FUNC(sub_83B73CD0);
PPC_FUNC_IMPL(__imp__sub_83B73CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r9,r11,-14016
	ctx.r9.s64 = ctx.r11.s64 + -14016;
	// addi r8,r10,-15984
	ctx.r8.s64 = ctx.r10.s64 + -15984;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B73CEC"))) PPC_WEAK_FUNC(sub_83B73CEC);
PPC_FUNC_IMPL(__imp__sub_83B73CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73CF0"))) PPC_WEAK_FUNC(sub_83B73CF0);
PPC_FUNC_IMPL(__imp__sub_83B73CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20912
	ctx.r3.s64 = ctx.r11.s64 + 20912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73CFC"))) PPC_WEAK_FUNC(sub_83B73CFC);
PPC_FUNC_IMPL(__imp__sub_83B73CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D00"))) PPC_WEAK_FUNC(sub_83B73D00);
PPC_FUNC_IMPL(__imp__sub_83B73D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D0C"))) PPC_WEAK_FUNC(sub_83B73D0C);
PPC_FUNC_IMPL(__imp__sub_83B73D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D10"))) PPC_WEAK_FUNC(sub_83B73D10);
PPC_FUNC_IMPL(__imp__sub_83B73D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20928
	ctx.r3.s64 = ctx.r11.s64 + 20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D1C"))) PPC_WEAK_FUNC(sub_83B73D1C);
PPC_FUNC_IMPL(__imp__sub_83B73D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D20"))) PPC_WEAK_FUNC(sub_83B73D20);
PPC_FUNC_IMPL(__imp__sub_83B73D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20936
	ctx.r3.s64 = ctx.r11.s64 + 20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D2C"))) PPC_WEAK_FUNC(sub_83B73D2C);
PPC_FUNC_IMPL(__imp__sub_83B73D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D30"))) PPC_WEAK_FUNC(sub_83B73D30);
PPC_FUNC_IMPL(__imp__sub_83B73D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20944
	ctx.r3.s64 = ctx.r11.s64 + 20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D3C"))) PPC_WEAK_FUNC(sub_83B73D3C);
PPC_FUNC_IMPL(__imp__sub_83B73D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D40"))) PPC_WEAK_FUNC(sub_83B73D40);
PPC_FUNC_IMPL(__imp__sub_83B73D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D4C"))) PPC_WEAK_FUNC(sub_83B73D4C);
PPC_FUNC_IMPL(__imp__sub_83B73D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D50"))) PPC_WEAK_FUNC(sub_83B73D50);
PPC_FUNC_IMPL(__imp__sub_83B73D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D5C"))) PPC_WEAK_FUNC(sub_83B73D5C);
PPC_FUNC_IMPL(__imp__sub_83B73D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D60"))) PPC_WEAK_FUNC(sub_83B73D60);
PPC_FUNC_IMPL(__imp__sub_83B73D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20968
	ctx.r3.s64 = ctx.r11.s64 + 20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D6C"))) PPC_WEAK_FUNC(sub_83B73D6C);
PPC_FUNC_IMPL(__imp__sub_83B73D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D70"))) PPC_WEAK_FUNC(sub_83B73D70);
PPC_FUNC_IMPL(__imp__sub_83B73D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20976
	ctx.r3.s64 = ctx.r11.s64 + 20976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D7C"))) PPC_WEAK_FUNC(sub_83B73D7C);
PPC_FUNC_IMPL(__imp__sub_83B73D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D80"))) PPC_WEAK_FUNC(sub_83B73D80);
PPC_FUNC_IMPL(__imp__sub_83B73D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20984
	ctx.r3.s64 = ctx.r11.s64 + 20984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D8C"))) PPC_WEAK_FUNC(sub_83B73D8C);
PPC_FUNC_IMPL(__imp__sub_83B73D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73D90"))) PPC_WEAK_FUNC(sub_83B73D90);
PPC_FUNC_IMPL(__imp__sub_83B73D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73D9C"))) PPC_WEAK_FUNC(sub_83B73D9C);
PPC_FUNC_IMPL(__imp__sub_83B73D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73DA0"))) PPC_WEAK_FUNC(sub_83B73DA0);
PPC_FUNC_IMPL(__imp__sub_83B73DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21000
	ctx.r3.s64 = ctx.r11.s64 + 21000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73DAC"))) PPC_WEAK_FUNC(sub_83B73DAC);
PPC_FUNC_IMPL(__imp__sub_83B73DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73DB0"))) PPC_WEAK_FUNC(sub_83B73DB0);
PPC_FUNC_IMPL(__imp__sub_83B73DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73DBC"))) PPC_WEAK_FUNC(sub_83B73DBC);
PPC_FUNC_IMPL(__imp__sub_83B73DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73DC0"))) PPC_WEAK_FUNC(sub_83B73DC0);
PPC_FUNC_IMPL(__imp__sub_83B73DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21048
	ctx.r3.s64 = ctx.r11.s64 + 21048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73DCC"))) PPC_WEAK_FUNC(sub_83B73DCC);
PPC_FUNC_IMPL(__imp__sub_83B73DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73DD0"))) PPC_WEAK_FUNC(sub_83B73DD0);
PPC_FUNC_IMPL(__imp__sub_83B73DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73DDC"))) PPC_WEAK_FUNC(sub_83B73DDC);
PPC_FUNC_IMPL(__imp__sub_83B73DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73DE0"))) PPC_WEAK_FUNC(sub_83B73DE0);
PPC_FUNC_IMPL(__imp__sub_83B73DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21064
	ctx.r3.s64 = ctx.r11.s64 + 21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73DEC"))) PPC_WEAK_FUNC(sub_83B73DEC);
PPC_FUNC_IMPL(__imp__sub_83B73DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73DF0"))) PPC_WEAK_FUNC(sub_83B73DF0);
PPC_FUNC_IMPL(__imp__sub_83B73DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21072
	ctx.r3.s64 = ctx.r11.s64 + 21072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73DFC"))) PPC_WEAK_FUNC(sub_83B73DFC);
PPC_FUNC_IMPL(__imp__sub_83B73DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73E00"))) PPC_WEAK_FUNC(sub_83B73E00);
PPC_FUNC_IMPL(__imp__sub_83B73E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73E0C"))) PPC_WEAK_FUNC(sub_83B73E0C);
PPC_FUNC_IMPL(__imp__sub_83B73E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73E10"))) PPC_WEAK_FUNC(sub_83B73E10);
PPC_FUNC_IMPL(__imp__sub_83B73E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21088
	ctx.r3.s64 = ctx.r11.s64 + 21088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73E1C"))) PPC_WEAK_FUNC(sub_83B73E1C);
PPC_FUNC_IMPL(__imp__sub_83B73E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73E20"))) PPC_WEAK_FUNC(sub_83B73E20);
PPC_FUNC_IMPL(__imp__sub_83B73E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21096
	ctx.r3.s64 = ctx.r11.s64 + 21096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73E2C"))) PPC_WEAK_FUNC(sub_83B73E2C);
PPC_FUNC_IMPL(__imp__sub_83B73E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73E30"))) PPC_WEAK_FUNC(sub_83B73E30);
PPC_FUNC_IMPL(__imp__sub_83B73E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21104
	ctx.r3.s64 = ctx.r11.s64 + 21104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73E3C"))) PPC_WEAK_FUNC(sub_83B73E3C);
PPC_FUNC_IMPL(__imp__sub_83B73E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73E40"))) PPC_WEAK_FUNC(sub_83B73E40);
PPC_FUNC_IMPL(__imp__sub_83B73E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21112
	ctx.r3.s64 = ctx.r11.s64 + 21112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73E4C"))) PPC_WEAK_FUNC(sub_83B73E4C);
PPC_FUNC_IMPL(__imp__sub_83B73E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73E50"))) PPC_WEAK_FUNC(sub_83B73E50);
PPC_FUNC_IMPL(__imp__sub_83B73E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21120
	ctx.r3.s64 = ctx.r11.s64 + 21120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73E5C"))) PPC_WEAK_FUNC(sub_83B73E5C);
PPC_FUNC_IMPL(__imp__sub_83B73E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73E60"))) PPC_WEAK_FUNC(sub_83B73E60);
PPC_FUNC_IMPL(__imp__sub_83B73E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73E6C"))) PPC_WEAK_FUNC(sub_83B73E6C);
PPC_FUNC_IMPL(__imp__sub_83B73E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73E70"))) PPC_WEAK_FUNC(sub_83B73E70);
PPC_FUNC_IMPL(__imp__sub_83B73E70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15484
	ctx.r7.s64 = ctx.r8.s64 + -15484;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15484(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15484);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15484(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15484, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B73E98"))) PPC_WEAK_FUNC(sub_83B73E98);
PPC_FUNC_IMPL(__imp__sub_83B73E98) {
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
	// addi r3,r11,-15488
	ctx.r3.s64 = ctx.r11.s64 + -15488;
	// bl 0x83523120
	ctx.lr = 0x83B73EB0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,21136
	ctx.r3.s64 = ctx.r10.s64 + 21136;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73EBC;
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

__attribute__((alias("__imp__sub_83B73ECC"))) PPC_WEAK_FUNC(sub_83B73ECC);
PPC_FUNC_IMPL(__imp__sub_83B73ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73ED0"))) PPC_WEAK_FUNC(sub_83B73ED0);
PPC_FUNC_IMPL(__imp__sub_83B73ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21152
	ctx.r3.s64 = ctx.r11.s64 + 21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73EDC"))) PPC_WEAK_FUNC(sub_83B73EDC);
PPC_FUNC_IMPL(__imp__sub_83B73EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73EE0"))) PPC_WEAK_FUNC(sub_83B73EE0);
PPC_FUNC_IMPL(__imp__sub_83B73EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21160
	ctx.r3.s64 = ctx.r11.s64 + 21160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73EEC"))) PPC_WEAK_FUNC(sub_83B73EEC);
PPC_FUNC_IMPL(__imp__sub_83B73EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73EF0"))) PPC_WEAK_FUNC(sub_83B73EF0);
PPC_FUNC_IMPL(__imp__sub_83B73EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21168
	ctx.r3.s64 = ctx.r11.s64 + 21168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73EFC"))) PPC_WEAK_FUNC(sub_83B73EFC);
PPC_FUNC_IMPL(__imp__sub_83B73EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F00"))) PPC_WEAK_FUNC(sub_83B73F00);
PPC_FUNC_IMPL(__imp__sub_83B73F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21176
	ctx.r3.s64 = ctx.r11.s64 + 21176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F0C"))) PPC_WEAK_FUNC(sub_83B73F0C);
PPC_FUNC_IMPL(__imp__sub_83B73F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F10"))) PPC_WEAK_FUNC(sub_83B73F10);
PPC_FUNC_IMPL(__imp__sub_83B73F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21184
	ctx.r3.s64 = ctx.r11.s64 + 21184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F1C"))) PPC_WEAK_FUNC(sub_83B73F1C);
PPC_FUNC_IMPL(__imp__sub_83B73F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F20"))) PPC_WEAK_FUNC(sub_83B73F20);
PPC_FUNC_IMPL(__imp__sub_83B73F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21192
	ctx.r3.s64 = ctx.r11.s64 + 21192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F2C"))) PPC_WEAK_FUNC(sub_83B73F2C);
PPC_FUNC_IMPL(__imp__sub_83B73F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F30"))) PPC_WEAK_FUNC(sub_83B73F30);
PPC_FUNC_IMPL(__imp__sub_83B73F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21200
	ctx.r3.s64 = ctx.r11.s64 + 21200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F3C"))) PPC_WEAK_FUNC(sub_83B73F3C);
PPC_FUNC_IMPL(__imp__sub_83B73F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F40"))) PPC_WEAK_FUNC(sub_83B73F40);
PPC_FUNC_IMPL(__imp__sub_83B73F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21208
	ctx.r3.s64 = ctx.r11.s64 + 21208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F4C"))) PPC_WEAK_FUNC(sub_83B73F4C);
PPC_FUNC_IMPL(__imp__sub_83B73F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F50"))) PPC_WEAK_FUNC(sub_83B73F50);
PPC_FUNC_IMPL(__imp__sub_83B73F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21216
	ctx.r3.s64 = ctx.r11.s64 + 21216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F5C"))) PPC_WEAK_FUNC(sub_83B73F5C);
PPC_FUNC_IMPL(__imp__sub_83B73F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F60"))) PPC_WEAK_FUNC(sub_83B73F60);
PPC_FUNC_IMPL(__imp__sub_83B73F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F6C"))) PPC_WEAK_FUNC(sub_83B73F6C);
PPC_FUNC_IMPL(__imp__sub_83B73F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F70"))) PPC_WEAK_FUNC(sub_83B73F70);
PPC_FUNC_IMPL(__imp__sub_83B73F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21232
	ctx.r3.s64 = ctx.r11.s64 + 21232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F7C"))) PPC_WEAK_FUNC(sub_83B73F7C);
PPC_FUNC_IMPL(__imp__sub_83B73F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F80"))) PPC_WEAK_FUNC(sub_83B73F80);
PPC_FUNC_IMPL(__imp__sub_83B73F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21240
	ctx.r3.s64 = ctx.r11.s64 + 21240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73F8C"))) PPC_WEAK_FUNC(sub_83B73F8C);
PPC_FUNC_IMPL(__imp__sub_83B73F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73F90"))) PPC_WEAK_FUNC(sub_83B73F90);
PPC_FUNC_IMPL(__imp__sub_83B73F90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15472
	ctx.r7.s64 = ctx.r8.s64 + -15472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15472);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15472(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15472, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B73FB8"))) PPC_WEAK_FUNC(sub_83B73FB8);
PPC_FUNC_IMPL(__imp__sub_83B73FB8) {
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
	// addi r3,r11,-15476
	ctx.r3.s64 = ctx.r11.s64 + -15476;
	// bl 0x83523120
	ctx.lr = 0x83B73FD0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,21248
	ctx.r3.s64 = ctx.r10.s64 + 21248;
	// bl 0x831cdcc8
	ctx.lr = 0x83B73FDC;
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

__attribute__((alias("__imp__sub_83B73FEC"))) PPC_WEAK_FUNC(sub_83B73FEC);
PPC_FUNC_IMPL(__imp__sub_83B73FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B73FF0"))) PPC_WEAK_FUNC(sub_83B73FF0);
PPC_FUNC_IMPL(__imp__sub_83B73FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B73FFC"))) PPC_WEAK_FUNC(sub_83B73FFC);
PPC_FUNC_IMPL(__imp__sub_83B73FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74000"))) PPC_WEAK_FUNC(sub_83B74000);
PPC_FUNC_IMPL(__imp__sub_83B74000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21272
	ctx.r3.s64 = ctx.r11.s64 + 21272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7400C"))) PPC_WEAK_FUNC(sub_83B7400C);
PPC_FUNC_IMPL(__imp__sub_83B7400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74010"))) PPC_WEAK_FUNC(sub_83B74010);
PPC_FUNC_IMPL(__imp__sub_83B74010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21280
	ctx.r3.s64 = ctx.r11.s64 + 21280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7401C"))) PPC_WEAK_FUNC(sub_83B7401C);
PPC_FUNC_IMPL(__imp__sub_83B7401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74020"))) PPC_WEAK_FUNC(sub_83B74020);
PPC_FUNC_IMPL(__imp__sub_83B74020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7402C"))) PPC_WEAK_FUNC(sub_83B7402C);
PPC_FUNC_IMPL(__imp__sub_83B7402C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74030"))) PPC_WEAK_FUNC(sub_83B74030);
PPC_FUNC_IMPL(__imp__sub_83B74030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21296
	ctx.r3.s64 = ctx.r11.s64 + 21296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7403C"))) PPC_WEAK_FUNC(sub_83B7403C);
PPC_FUNC_IMPL(__imp__sub_83B7403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74040"))) PPC_WEAK_FUNC(sub_83B74040);
PPC_FUNC_IMPL(__imp__sub_83B74040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21304
	ctx.r3.s64 = ctx.r11.s64 + 21304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7404C"))) PPC_WEAK_FUNC(sub_83B7404C);
PPC_FUNC_IMPL(__imp__sub_83B7404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74050"))) PPC_WEAK_FUNC(sub_83B74050);
PPC_FUNC_IMPL(__imp__sub_83B74050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21312
	ctx.r3.s64 = ctx.r11.s64 + 21312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7405C"))) PPC_WEAK_FUNC(sub_83B7405C);
PPC_FUNC_IMPL(__imp__sub_83B7405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74060"))) PPC_WEAK_FUNC(sub_83B74060);
PPC_FUNC_IMPL(__imp__sub_83B74060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21320
	ctx.r3.s64 = ctx.r11.s64 + 21320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7406C"))) PPC_WEAK_FUNC(sub_83B7406C);
PPC_FUNC_IMPL(__imp__sub_83B7406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74070"))) PPC_WEAK_FUNC(sub_83B74070);
PPC_FUNC_IMPL(__imp__sub_83B74070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21328
	ctx.r3.s64 = ctx.r11.s64 + 21328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7407C"))) PPC_WEAK_FUNC(sub_83B7407C);
PPC_FUNC_IMPL(__imp__sub_83B7407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74080"))) PPC_WEAK_FUNC(sub_83B74080);
PPC_FUNC_IMPL(__imp__sub_83B74080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7408C"))) PPC_WEAK_FUNC(sub_83B7408C);
PPC_FUNC_IMPL(__imp__sub_83B7408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74090"))) PPC_WEAK_FUNC(sub_83B74090);
PPC_FUNC_IMPL(__imp__sub_83B74090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7409C"))) PPC_WEAK_FUNC(sub_83B7409C);
PPC_FUNC_IMPL(__imp__sub_83B7409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

