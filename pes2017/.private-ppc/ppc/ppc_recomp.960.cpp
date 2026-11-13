#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CE7BC0"))) PPC_WEAK_FUNC(sub_83CE7BC0);
PPC_FUNC_IMPL(__imp__sub_83CE7BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8728
	ctx.r3.s64 = ctx.r11.s64 + 8728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7BCC"))) PPC_WEAK_FUNC(sub_83CE7BCC);
PPC_FUNC_IMPL(__imp__sub_83CE7BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7BD0"))) PPC_WEAK_FUNC(sub_83CE7BD0);
PPC_FUNC_IMPL(__imp__sub_83CE7BD0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-7048
	ctx.r3.s64 = ctx.r11.s64 + -7048;
	// bl 0x8259af80
	ctx.lr = 0x83CE7BE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,8744
	ctx.r3.s64 = ctx.r10.s64 + 8744;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE7BF4;
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

__attribute__((alias("__imp__sub_83CE7C04"))) PPC_WEAK_FUNC(sub_83CE7C04);
PPC_FUNC_IMPL(__imp__sub_83CE7C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7C08"))) PPC_WEAK_FUNC(sub_83CE7C08);
PPC_FUNC_IMPL(__imp__sub_83CE7C08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7068
	ctx.r11.s64 = ctx.r8.s64 + -7068;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,29456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8736
	ctx.r3.s64 = ctx.r6.s64 + 8736;
	// stw r10,-7068(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7068, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7C38"))) PPC_WEAK_FUNC(sub_83CE7C38);
PPC_FUNC_IMPL(__imp__sub_83CE7C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8752
	ctx.r3.s64 = ctx.r11.s64 + 8752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7C44"))) PPC_WEAK_FUNC(sub_83CE7C44);
PPC_FUNC_IMPL(__imp__sub_83CE7C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7C48"))) PPC_WEAK_FUNC(sub_83CE7C48);
PPC_FUNC_IMPL(__imp__sub_83CE7C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8760
	ctx.r3.s64 = ctx.r11.s64 + 8760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7C54"))) PPC_WEAK_FUNC(sub_83CE7C54);
PPC_FUNC_IMPL(__imp__sub_83CE7C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7C58"))) PPC_WEAK_FUNC(sub_83CE7C58);
PPC_FUNC_IMPL(__imp__sub_83CE7C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8768
	ctx.r3.s64 = ctx.r11.s64 + 8768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7C64"))) PPC_WEAK_FUNC(sub_83CE7C64);
PPC_FUNC_IMPL(__imp__sub_83CE7C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7C68"))) PPC_WEAK_FUNC(sub_83CE7C68);
PPC_FUNC_IMPL(__imp__sub_83CE7C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8776
	ctx.r3.s64 = ctx.r11.s64 + 8776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7C74"))) PPC_WEAK_FUNC(sub_83CE7C74);
PPC_FUNC_IMPL(__imp__sub_83CE7C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7C78"))) PPC_WEAK_FUNC(sub_83CE7C78);
PPC_FUNC_IMPL(__imp__sub_83CE7C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8784
	ctx.r3.s64 = ctx.r11.s64 + 8784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7C84"))) PPC_WEAK_FUNC(sub_83CE7C84);
PPC_FUNC_IMPL(__imp__sub_83CE7C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7C88"))) PPC_WEAK_FUNC(sub_83CE7C88);
PPC_FUNC_IMPL(__imp__sub_83CE7C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8792
	ctx.r3.s64 = ctx.r11.s64 + 8792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7C94"))) PPC_WEAK_FUNC(sub_83CE7C94);
PPC_FUNC_IMPL(__imp__sub_83CE7C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7C98"))) PPC_WEAK_FUNC(sub_83CE7C98);
PPC_FUNC_IMPL(__imp__sub_83CE7C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8800
	ctx.r3.s64 = ctx.r11.s64 + 8800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7CA4"))) PPC_WEAK_FUNC(sub_83CE7CA4);
PPC_FUNC_IMPL(__imp__sub_83CE7CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7CA8"))) PPC_WEAK_FUNC(sub_83CE7CA8);
PPC_FUNC_IMPL(__imp__sub_83CE7CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7CB4"))) PPC_WEAK_FUNC(sub_83CE7CB4);
PPC_FUNC_IMPL(__imp__sub_83CE7CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7CB8"))) PPC_WEAK_FUNC(sub_83CE7CB8);
PPC_FUNC_IMPL(__imp__sub_83CE7CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8816
	ctx.r3.s64 = ctx.r11.s64 + 8816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7CC4"))) PPC_WEAK_FUNC(sub_83CE7CC4);
PPC_FUNC_IMPL(__imp__sub_83CE7CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7CC8"))) PPC_WEAK_FUNC(sub_83CE7CC8);
PPC_FUNC_IMPL(__imp__sub_83CE7CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8824
	ctx.r3.s64 = ctx.r11.s64 + 8824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7CD4"))) PPC_WEAK_FUNC(sub_83CE7CD4);
PPC_FUNC_IMPL(__imp__sub_83CE7CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7CD8"))) PPC_WEAK_FUNC(sub_83CE7CD8);
PPC_FUNC_IMPL(__imp__sub_83CE7CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8832
	ctx.r3.s64 = ctx.r11.s64 + 8832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7CE4"))) PPC_WEAK_FUNC(sub_83CE7CE4);
PPC_FUNC_IMPL(__imp__sub_83CE7CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7CE8"))) PPC_WEAK_FUNC(sub_83CE7CE8);
PPC_FUNC_IMPL(__imp__sub_83CE7CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8840
	ctx.r3.s64 = ctx.r11.s64 + 8840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7CF4"))) PPC_WEAK_FUNC(sub_83CE7CF4);
PPC_FUNC_IMPL(__imp__sub_83CE7CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7CF8"))) PPC_WEAK_FUNC(sub_83CE7CF8);
PPC_FUNC_IMPL(__imp__sub_83CE7CF8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// bl 0x83523120
	ctx.lr = 0x83CE7D10;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,8848
	ctx.r3.s64 = ctx.r10.s64 + 8848;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE7D1C;
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

__attribute__((alias("__imp__sub_83CE7D2C"))) PPC_WEAK_FUNC(sub_83CE7D2C);
PPC_FUNC_IMPL(__imp__sub_83CE7D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7D30"))) PPC_WEAK_FUNC(sub_83CE7D30);
PPC_FUNC_IMPL(__imp__sub_83CE7D30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6688
	ctx.r7.s64 = ctx.r8.s64 + -6688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6688(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE7D58"))) PPC_WEAK_FUNC(sub_83CE7D58);
PPC_FUNC_IMPL(__imp__sub_83CE7D58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,29624
	ctx.r6.s64 = ctx.r7.s64 + 29624;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29552(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29552);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6688);
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
	// std r9,29624(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29624, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE7DA0"))) PPC_WEAK_FUNC(sub_83CE7DA0);
PPC_FUNC_IMPL(__imp__sub_83CE7DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8864
	ctx.r3.s64 = ctx.r11.s64 + 8864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7DAC"))) PPC_WEAK_FUNC(sub_83CE7DAC);
PPC_FUNC_IMPL(__imp__sub_83CE7DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7DB0"))) PPC_WEAK_FUNC(sub_83CE7DB0);
PPC_FUNC_IMPL(__imp__sub_83CE7DB0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-6680
	ctx.r3.s64 = ctx.r11.s64 + -6680;
	// bl 0x8259af80
	ctx.lr = 0x83CE7DC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,8880
	ctx.r3.s64 = ctx.r10.s64 + 8880;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE7DD4;
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

__attribute__((alias("__imp__sub_83CE7DE4"))) PPC_WEAK_FUNC(sub_83CE7DE4);
PPC_FUNC_IMPL(__imp__sub_83CE7DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7DE8"))) PPC_WEAK_FUNC(sub_83CE7DE8);
PPC_FUNC_IMPL(__imp__sub_83CE7DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6700
	ctx.r11.s64 = ctx.r8.s64 + -6700;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,29600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29600);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8872
	ctx.r3.s64 = ctx.r6.s64 + 8872;
	// stw r10,-6700(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6700, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E18"))) PPC_WEAK_FUNC(sub_83CE7E18);
PPC_FUNC_IMPL(__imp__sub_83CE7E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8888
	ctx.r3.s64 = ctx.r11.s64 + 8888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E24"))) PPC_WEAK_FUNC(sub_83CE7E24);
PPC_FUNC_IMPL(__imp__sub_83CE7E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7E28"))) PPC_WEAK_FUNC(sub_83CE7E28);
PPC_FUNC_IMPL(__imp__sub_83CE7E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8896
	ctx.r3.s64 = ctx.r11.s64 + 8896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E34"))) PPC_WEAK_FUNC(sub_83CE7E34);
PPC_FUNC_IMPL(__imp__sub_83CE7E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7E38"))) PPC_WEAK_FUNC(sub_83CE7E38);
PPC_FUNC_IMPL(__imp__sub_83CE7E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8904
	ctx.r3.s64 = ctx.r11.s64 + 8904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E44"))) PPC_WEAK_FUNC(sub_83CE7E44);
PPC_FUNC_IMPL(__imp__sub_83CE7E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7E48"))) PPC_WEAK_FUNC(sub_83CE7E48);
PPC_FUNC_IMPL(__imp__sub_83CE7E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8912
	ctx.r3.s64 = ctx.r11.s64 + 8912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E54"))) PPC_WEAK_FUNC(sub_83CE7E54);
PPC_FUNC_IMPL(__imp__sub_83CE7E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7E58"))) PPC_WEAK_FUNC(sub_83CE7E58);
PPC_FUNC_IMPL(__imp__sub_83CE7E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8920
	ctx.r3.s64 = ctx.r11.s64 + 8920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E64"))) PPC_WEAK_FUNC(sub_83CE7E64);
PPC_FUNC_IMPL(__imp__sub_83CE7E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7E68"))) PPC_WEAK_FUNC(sub_83CE7E68);
PPC_FUNC_IMPL(__imp__sub_83CE7E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8928
	ctx.r3.s64 = ctx.r11.s64 + 8928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E74"))) PPC_WEAK_FUNC(sub_83CE7E74);
PPC_FUNC_IMPL(__imp__sub_83CE7E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7E78"))) PPC_WEAK_FUNC(sub_83CE7E78);
PPC_FUNC_IMPL(__imp__sub_83CE7E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8936
	ctx.r3.s64 = ctx.r11.s64 + 8936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E84"))) PPC_WEAK_FUNC(sub_83CE7E84);
PPC_FUNC_IMPL(__imp__sub_83CE7E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7E88"))) PPC_WEAK_FUNC(sub_83CE7E88);
PPC_FUNC_IMPL(__imp__sub_83CE7E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8944
	ctx.r3.s64 = ctx.r11.s64 + 8944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7E94"))) PPC_WEAK_FUNC(sub_83CE7E94);
PPC_FUNC_IMPL(__imp__sub_83CE7E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7E98"))) PPC_WEAK_FUNC(sub_83CE7E98);
PPC_FUNC_IMPL(__imp__sub_83CE7E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8952
	ctx.r3.s64 = ctx.r11.s64 + 8952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7EA4"))) PPC_WEAK_FUNC(sub_83CE7EA4);
PPC_FUNC_IMPL(__imp__sub_83CE7EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7EA8"))) PPC_WEAK_FUNC(sub_83CE7EA8);
PPC_FUNC_IMPL(__imp__sub_83CE7EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8960
	ctx.r3.s64 = ctx.r11.s64 + 8960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7EB4"))) PPC_WEAK_FUNC(sub_83CE7EB4);
PPC_FUNC_IMPL(__imp__sub_83CE7EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7EB8"))) PPC_WEAK_FUNC(sub_83CE7EB8);
PPC_FUNC_IMPL(__imp__sub_83CE7EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8968
	ctx.r3.s64 = ctx.r11.s64 + 8968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7EC4"))) PPC_WEAK_FUNC(sub_83CE7EC4);
PPC_FUNC_IMPL(__imp__sub_83CE7EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7EC8"))) PPC_WEAK_FUNC(sub_83CE7EC8);
PPC_FUNC_IMPL(__imp__sub_83CE7EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,8976
	ctx.r3.s64 = ctx.r11.s64 + 8976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7ED4"))) PPC_WEAK_FUNC(sub_83CE7ED4);
PPC_FUNC_IMPL(__imp__sub_83CE7ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7ED8"))) PPC_WEAK_FUNC(sub_83CE7ED8);
PPC_FUNC_IMPL(__imp__sub_83CE7ED8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// bl 0x83523120
	ctx.lr = 0x83CE7EF0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,8984
	ctx.r3.s64 = ctx.r10.s64 + 8984;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE7EFC;
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

__attribute__((alias("__imp__sub_83CE7F0C"))) PPC_WEAK_FUNC(sub_83CE7F0C);
PPC_FUNC_IMPL(__imp__sub_83CE7F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7F10"))) PPC_WEAK_FUNC(sub_83CE7F10);
PPC_FUNC_IMPL(__imp__sub_83CE7F10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6320
	ctx.r7.s64 = ctx.r8.s64 + -6320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6320(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE7F38"))) PPC_WEAK_FUNC(sub_83CE7F38);
PPC_FUNC_IMPL(__imp__sub_83CE7F38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,29768
	ctx.r6.s64 = ctx.r7.s64 + 29768;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6320);
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
	// std r9,29768(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29768, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE7F80"))) PPC_WEAK_FUNC(sub_83CE7F80);
PPC_FUNC_IMPL(__imp__sub_83CE7F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9000
	ctx.r3.s64 = ctx.r11.s64 + 9000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7F8C"))) PPC_WEAK_FUNC(sub_83CE7F8C);
PPC_FUNC_IMPL(__imp__sub_83CE7F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7F90"))) PPC_WEAK_FUNC(sub_83CE7F90);
PPC_FUNC_IMPL(__imp__sub_83CE7F90) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-6312
	ctx.r3.s64 = ctx.r11.s64 + -6312;
	// bl 0x8259af80
	ctx.lr = 0x83CE7FA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9016
	ctx.r3.s64 = ctx.r10.s64 + 9016;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE7FB4;
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

__attribute__((alias("__imp__sub_83CE7FC4"))) PPC_WEAK_FUNC(sub_83CE7FC4);
PPC_FUNC_IMPL(__imp__sub_83CE7FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE7FC8"))) PPC_WEAK_FUNC(sub_83CE7FC8);
PPC_FUNC_IMPL(__imp__sub_83CE7FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6332
	ctx.r11.s64 = ctx.r8.s64 + -6332;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,29744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9008
	ctx.r3.s64 = ctx.r6.s64 + 9008;
	// stw r10,-6332(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6332, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE7FF8"))) PPC_WEAK_FUNC(sub_83CE7FF8);
PPC_FUNC_IMPL(__imp__sub_83CE7FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9024
	ctx.r3.s64 = ctx.r11.s64 + 9024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8004"))) PPC_WEAK_FUNC(sub_83CE8004);
PPC_FUNC_IMPL(__imp__sub_83CE8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8008"))) PPC_WEAK_FUNC(sub_83CE8008);
PPC_FUNC_IMPL(__imp__sub_83CE8008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9032
	ctx.r3.s64 = ctx.r11.s64 + 9032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8014"))) PPC_WEAK_FUNC(sub_83CE8014);
PPC_FUNC_IMPL(__imp__sub_83CE8014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8018"))) PPC_WEAK_FUNC(sub_83CE8018);
PPC_FUNC_IMPL(__imp__sub_83CE8018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9040
	ctx.r3.s64 = ctx.r11.s64 + 9040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8024"))) PPC_WEAK_FUNC(sub_83CE8024);
PPC_FUNC_IMPL(__imp__sub_83CE8024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8028"))) PPC_WEAK_FUNC(sub_83CE8028);
PPC_FUNC_IMPL(__imp__sub_83CE8028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9048
	ctx.r3.s64 = ctx.r11.s64 + 9048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8034"))) PPC_WEAK_FUNC(sub_83CE8034);
PPC_FUNC_IMPL(__imp__sub_83CE8034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8038"))) PPC_WEAK_FUNC(sub_83CE8038);
PPC_FUNC_IMPL(__imp__sub_83CE8038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9056
	ctx.r3.s64 = ctx.r11.s64 + 9056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8044"))) PPC_WEAK_FUNC(sub_83CE8044);
PPC_FUNC_IMPL(__imp__sub_83CE8044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8048"))) PPC_WEAK_FUNC(sub_83CE8048);
PPC_FUNC_IMPL(__imp__sub_83CE8048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9064
	ctx.r3.s64 = ctx.r11.s64 + 9064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8054"))) PPC_WEAK_FUNC(sub_83CE8054);
PPC_FUNC_IMPL(__imp__sub_83CE8054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8058"))) PPC_WEAK_FUNC(sub_83CE8058);
PPC_FUNC_IMPL(__imp__sub_83CE8058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9072
	ctx.r3.s64 = ctx.r11.s64 + 9072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8064"))) PPC_WEAK_FUNC(sub_83CE8064);
PPC_FUNC_IMPL(__imp__sub_83CE8064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8068"))) PPC_WEAK_FUNC(sub_83CE8068);
PPC_FUNC_IMPL(__imp__sub_83CE8068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9080
	ctx.r3.s64 = ctx.r11.s64 + 9080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8074"))) PPC_WEAK_FUNC(sub_83CE8074);
PPC_FUNC_IMPL(__imp__sub_83CE8074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8078"))) PPC_WEAK_FUNC(sub_83CE8078);
PPC_FUNC_IMPL(__imp__sub_83CE8078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9088
	ctx.r3.s64 = ctx.r11.s64 + 9088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8084"))) PPC_WEAK_FUNC(sub_83CE8084);
PPC_FUNC_IMPL(__imp__sub_83CE8084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8088"))) PPC_WEAK_FUNC(sub_83CE8088);
PPC_FUNC_IMPL(__imp__sub_83CE8088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9096
	ctx.r3.s64 = ctx.r11.s64 + 9096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8094"))) PPC_WEAK_FUNC(sub_83CE8094);
PPC_FUNC_IMPL(__imp__sub_83CE8094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8098"))) PPC_WEAK_FUNC(sub_83CE8098);
PPC_FUNC_IMPL(__imp__sub_83CE8098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9104
	ctx.r3.s64 = ctx.r11.s64 + 9104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE80A4"))) PPC_WEAK_FUNC(sub_83CE80A4);
PPC_FUNC_IMPL(__imp__sub_83CE80A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE80A8"))) PPC_WEAK_FUNC(sub_83CE80A8);
PPC_FUNC_IMPL(__imp__sub_83CE80A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9112
	ctx.r3.s64 = ctx.r11.s64 + 9112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE80B4"))) PPC_WEAK_FUNC(sub_83CE80B4);
PPC_FUNC_IMPL(__imp__sub_83CE80B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE80B8"))) PPC_WEAK_FUNC(sub_83CE80B8);
PPC_FUNC_IMPL(__imp__sub_83CE80B8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-5968
	ctx.r3.s64 = ctx.r11.s64 + -5968;
	// bl 0x83523120
	ctx.lr = 0x83CE80D0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9120
	ctx.r3.s64 = ctx.r10.s64 + 9120;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE80DC;
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

__attribute__((alias("__imp__sub_83CE80EC"))) PPC_WEAK_FUNC(sub_83CE80EC);
PPC_FUNC_IMPL(__imp__sub_83CE80EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE80F0"))) PPC_WEAK_FUNC(sub_83CE80F0);
PPC_FUNC_IMPL(__imp__sub_83CE80F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5952
	ctx.r7.s64 = ctx.r8.s64 + -5952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5952(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8118"))) PPC_WEAK_FUNC(sub_83CE8118);
PPC_FUNC_IMPL(__imp__sub_83CE8118) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,29912
	ctx.r6.s64 = ctx.r7.s64 + 29912;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29840(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29840);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5952);
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
	// std r9,29912(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29912, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8160"))) PPC_WEAK_FUNC(sub_83CE8160);
PPC_FUNC_IMPL(__imp__sub_83CE8160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE816C"))) PPC_WEAK_FUNC(sub_83CE816C);
PPC_FUNC_IMPL(__imp__sub_83CE816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8170"))) PPC_WEAK_FUNC(sub_83CE8170);
PPC_FUNC_IMPL(__imp__sub_83CE8170) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-5944
	ctx.r3.s64 = ctx.r11.s64 + -5944;
	// bl 0x8259af80
	ctx.lr = 0x83CE8188;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9152
	ctx.r3.s64 = ctx.r10.s64 + 9152;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8194;
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

__attribute__((alias("__imp__sub_83CE81A4"))) PPC_WEAK_FUNC(sub_83CE81A4);
PPC_FUNC_IMPL(__imp__sub_83CE81A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE81A8"))) PPC_WEAK_FUNC(sub_83CE81A8);
PPC_FUNC_IMPL(__imp__sub_83CE81A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5964
	ctx.r11.s64 = ctx.r8.s64 + -5964;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,29888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29888);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9144
	ctx.r3.s64 = ctx.r6.s64 + 9144;
	// stw r10,-5964(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE81D8"))) PPC_WEAK_FUNC(sub_83CE81D8);
PPC_FUNC_IMPL(__imp__sub_83CE81D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9160
	ctx.r3.s64 = ctx.r11.s64 + 9160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE81E4"))) PPC_WEAK_FUNC(sub_83CE81E4);
PPC_FUNC_IMPL(__imp__sub_83CE81E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE81E8"))) PPC_WEAK_FUNC(sub_83CE81E8);
PPC_FUNC_IMPL(__imp__sub_83CE81E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9168
	ctx.r3.s64 = ctx.r11.s64 + 9168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE81F4"))) PPC_WEAK_FUNC(sub_83CE81F4);
PPC_FUNC_IMPL(__imp__sub_83CE81F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE81F8"))) PPC_WEAK_FUNC(sub_83CE81F8);
PPC_FUNC_IMPL(__imp__sub_83CE81F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9176
	ctx.r3.s64 = ctx.r11.s64 + 9176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8204"))) PPC_WEAK_FUNC(sub_83CE8204);
PPC_FUNC_IMPL(__imp__sub_83CE8204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8208"))) PPC_WEAK_FUNC(sub_83CE8208);
PPC_FUNC_IMPL(__imp__sub_83CE8208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9184
	ctx.r3.s64 = ctx.r11.s64 + 9184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8214"))) PPC_WEAK_FUNC(sub_83CE8214);
PPC_FUNC_IMPL(__imp__sub_83CE8214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8218"))) PPC_WEAK_FUNC(sub_83CE8218);
PPC_FUNC_IMPL(__imp__sub_83CE8218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9192
	ctx.r3.s64 = ctx.r11.s64 + 9192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8224"))) PPC_WEAK_FUNC(sub_83CE8224);
PPC_FUNC_IMPL(__imp__sub_83CE8224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8228"))) PPC_WEAK_FUNC(sub_83CE8228);
PPC_FUNC_IMPL(__imp__sub_83CE8228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9200
	ctx.r3.s64 = ctx.r11.s64 + 9200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8234"))) PPC_WEAK_FUNC(sub_83CE8234);
PPC_FUNC_IMPL(__imp__sub_83CE8234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8238"))) PPC_WEAK_FUNC(sub_83CE8238);
PPC_FUNC_IMPL(__imp__sub_83CE8238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9208
	ctx.r3.s64 = ctx.r11.s64 + 9208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8244"))) PPC_WEAK_FUNC(sub_83CE8244);
PPC_FUNC_IMPL(__imp__sub_83CE8244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8248"))) PPC_WEAK_FUNC(sub_83CE8248);
PPC_FUNC_IMPL(__imp__sub_83CE8248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9216
	ctx.r3.s64 = ctx.r11.s64 + 9216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8254"))) PPC_WEAK_FUNC(sub_83CE8254);
PPC_FUNC_IMPL(__imp__sub_83CE8254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8258"))) PPC_WEAK_FUNC(sub_83CE8258);
PPC_FUNC_IMPL(__imp__sub_83CE8258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9224
	ctx.r3.s64 = ctx.r11.s64 + 9224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8264"))) PPC_WEAK_FUNC(sub_83CE8264);
PPC_FUNC_IMPL(__imp__sub_83CE8264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8268"))) PPC_WEAK_FUNC(sub_83CE8268);
PPC_FUNC_IMPL(__imp__sub_83CE8268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9232
	ctx.r3.s64 = ctx.r11.s64 + 9232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8274"))) PPC_WEAK_FUNC(sub_83CE8274);
PPC_FUNC_IMPL(__imp__sub_83CE8274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8278"))) PPC_WEAK_FUNC(sub_83CE8278);
PPC_FUNC_IMPL(__imp__sub_83CE8278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9240
	ctx.r3.s64 = ctx.r11.s64 + 9240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8284"))) PPC_WEAK_FUNC(sub_83CE8284);
PPC_FUNC_IMPL(__imp__sub_83CE8284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8288"))) PPC_WEAK_FUNC(sub_83CE8288);
PPC_FUNC_IMPL(__imp__sub_83CE8288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9248
	ctx.r3.s64 = ctx.r11.s64 + 9248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8294"))) PPC_WEAK_FUNC(sub_83CE8294);
PPC_FUNC_IMPL(__imp__sub_83CE8294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8298"))) PPC_WEAK_FUNC(sub_83CE8298);
PPC_FUNC_IMPL(__imp__sub_83CE8298) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-5600
	ctx.r3.s64 = ctx.r11.s64 + -5600;
	// bl 0x83523120
	ctx.lr = 0x83CE82B0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9256
	ctx.r3.s64 = ctx.r10.s64 + 9256;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE82BC;
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

__attribute__((alias("__imp__sub_83CE82CC"))) PPC_WEAK_FUNC(sub_83CE82CC);
PPC_FUNC_IMPL(__imp__sub_83CE82CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE82D0"))) PPC_WEAK_FUNC(sub_83CE82D0);
PPC_FUNC_IMPL(__imp__sub_83CE82D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5584
	ctx.r7.s64 = ctx.r8.s64 + -5584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5584(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE82F8"))) PPC_WEAK_FUNC(sub_83CE82F8);
PPC_FUNC_IMPL(__imp__sub_83CE82F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,30112
	ctx.r6.s64 = ctx.r7.s64 + 30112;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30040(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30040);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5584);
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
	// std r9,30112(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30112, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8340"))) PPC_WEAK_FUNC(sub_83CE8340);
PPC_FUNC_IMPL(__imp__sub_83CE8340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9272
	ctx.r3.s64 = ctx.r11.s64 + 9272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE834C"))) PPC_WEAK_FUNC(sub_83CE834C);
PPC_FUNC_IMPL(__imp__sub_83CE834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8350"))) PPC_WEAK_FUNC(sub_83CE8350);
PPC_FUNC_IMPL(__imp__sub_83CE8350) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-5576
	ctx.r3.s64 = ctx.r11.s64 + -5576;
	// bl 0x8259af80
	ctx.lr = 0x83CE8368;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9288
	ctx.r3.s64 = ctx.r10.s64 + 9288;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8374;
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

__attribute__((alias("__imp__sub_83CE8384"))) PPC_WEAK_FUNC(sub_83CE8384);
PPC_FUNC_IMPL(__imp__sub_83CE8384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8388"))) PPC_WEAK_FUNC(sub_83CE8388);
PPC_FUNC_IMPL(__imp__sub_83CE8388) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5596
	ctx.r11.s64 = ctx.r8.s64 + -5596;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,30088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30088);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9280
	ctx.r3.s64 = ctx.r6.s64 + 9280;
	// stw r10,-5596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE83B8"))) PPC_WEAK_FUNC(sub_83CE83B8);
PPC_FUNC_IMPL(__imp__sub_83CE83B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9296
	ctx.r3.s64 = ctx.r11.s64 + 9296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE83C4"))) PPC_WEAK_FUNC(sub_83CE83C4);
PPC_FUNC_IMPL(__imp__sub_83CE83C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE83C8"))) PPC_WEAK_FUNC(sub_83CE83C8);
PPC_FUNC_IMPL(__imp__sub_83CE83C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9304
	ctx.r3.s64 = ctx.r11.s64 + 9304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE83D4"))) PPC_WEAK_FUNC(sub_83CE83D4);
PPC_FUNC_IMPL(__imp__sub_83CE83D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE83D8"))) PPC_WEAK_FUNC(sub_83CE83D8);
PPC_FUNC_IMPL(__imp__sub_83CE83D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9312
	ctx.r3.s64 = ctx.r11.s64 + 9312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE83E4"))) PPC_WEAK_FUNC(sub_83CE83E4);
PPC_FUNC_IMPL(__imp__sub_83CE83E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE83E8"))) PPC_WEAK_FUNC(sub_83CE83E8);
PPC_FUNC_IMPL(__imp__sub_83CE83E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9320
	ctx.r3.s64 = ctx.r11.s64 + 9320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE83F4"))) PPC_WEAK_FUNC(sub_83CE83F4);
PPC_FUNC_IMPL(__imp__sub_83CE83F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE83F8"))) PPC_WEAK_FUNC(sub_83CE83F8);
PPC_FUNC_IMPL(__imp__sub_83CE83F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9328
	ctx.r3.s64 = ctx.r11.s64 + 9328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8404"))) PPC_WEAK_FUNC(sub_83CE8404);
PPC_FUNC_IMPL(__imp__sub_83CE8404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8408"))) PPC_WEAK_FUNC(sub_83CE8408);
PPC_FUNC_IMPL(__imp__sub_83CE8408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9336
	ctx.r3.s64 = ctx.r11.s64 + 9336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8414"))) PPC_WEAK_FUNC(sub_83CE8414);
PPC_FUNC_IMPL(__imp__sub_83CE8414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8418"))) PPC_WEAK_FUNC(sub_83CE8418);
PPC_FUNC_IMPL(__imp__sub_83CE8418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9344
	ctx.r3.s64 = ctx.r11.s64 + 9344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8424"))) PPC_WEAK_FUNC(sub_83CE8424);
PPC_FUNC_IMPL(__imp__sub_83CE8424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8428"))) PPC_WEAK_FUNC(sub_83CE8428);
PPC_FUNC_IMPL(__imp__sub_83CE8428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9352
	ctx.r3.s64 = ctx.r11.s64 + 9352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8434"))) PPC_WEAK_FUNC(sub_83CE8434);
PPC_FUNC_IMPL(__imp__sub_83CE8434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8438"))) PPC_WEAK_FUNC(sub_83CE8438);
PPC_FUNC_IMPL(__imp__sub_83CE8438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9360
	ctx.r3.s64 = ctx.r11.s64 + 9360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8444"))) PPC_WEAK_FUNC(sub_83CE8444);
PPC_FUNC_IMPL(__imp__sub_83CE8444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8448"))) PPC_WEAK_FUNC(sub_83CE8448);
PPC_FUNC_IMPL(__imp__sub_83CE8448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9368
	ctx.r3.s64 = ctx.r11.s64 + 9368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8454"))) PPC_WEAK_FUNC(sub_83CE8454);
PPC_FUNC_IMPL(__imp__sub_83CE8454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8458"))) PPC_WEAK_FUNC(sub_83CE8458);
PPC_FUNC_IMPL(__imp__sub_83CE8458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9376
	ctx.r3.s64 = ctx.r11.s64 + 9376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8464"))) PPC_WEAK_FUNC(sub_83CE8464);
PPC_FUNC_IMPL(__imp__sub_83CE8464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8468"))) PPC_WEAK_FUNC(sub_83CE8468);
PPC_FUNC_IMPL(__imp__sub_83CE8468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9384
	ctx.r3.s64 = ctx.r11.s64 + 9384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8474"))) PPC_WEAK_FUNC(sub_83CE8474);
PPC_FUNC_IMPL(__imp__sub_83CE8474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8478"))) PPC_WEAK_FUNC(sub_83CE8478);
PPC_FUNC_IMPL(__imp__sub_83CE8478) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-5232
	ctx.r3.s64 = ctx.r11.s64 + -5232;
	// bl 0x83523120
	ctx.lr = 0x83CE8490;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9392
	ctx.r3.s64 = ctx.r10.s64 + 9392;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE849C;
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

__attribute__((alias("__imp__sub_83CE84AC"))) PPC_WEAK_FUNC(sub_83CE84AC);
PPC_FUNC_IMPL(__imp__sub_83CE84AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE84B0"))) PPC_WEAK_FUNC(sub_83CE84B0);
PPC_FUNC_IMPL(__imp__sub_83CE84B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5216
	ctx.r7.s64 = ctx.r8.s64 + -5216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5216(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE84D8"))) PPC_WEAK_FUNC(sub_83CE84D8);
PPC_FUNC_IMPL(__imp__sub_83CE84D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,30256
	ctx.r6.s64 = ctx.r7.s64 + 30256;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30184(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30184);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5216);
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
	// std r9,30256(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30256, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8520"))) PPC_WEAK_FUNC(sub_83CE8520);
PPC_FUNC_IMPL(__imp__sub_83CE8520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9408
	ctx.r3.s64 = ctx.r11.s64 + 9408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE852C"))) PPC_WEAK_FUNC(sub_83CE852C);
PPC_FUNC_IMPL(__imp__sub_83CE852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8530"))) PPC_WEAK_FUNC(sub_83CE8530);
PPC_FUNC_IMPL(__imp__sub_83CE8530) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-5208
	ctx.r3.s64 = ctx.r11.s64 + -5208;
	// bl 0x8259af80
	ctx.lr = 0x83CE8548;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9424
	ctx.r3.s64 = ctx.r10.s64 + 9424;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8554;
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

__attribute__((alias("__imp__sub_83CE8564"))) PPC_WEAK_FUNC(sub_83CE8564);
PPC_FUNC_IMPL(__imp__sub_83CE8564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8568"))) PPC_WEAK_FUNC(sub_83CE8568);
PPC_FUNC_IMPL(__imp__sub_83CE8568) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5228
	ctx.r11.s64 = ctx.r8.s64 + -5228;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,30232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30232);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9416
	ctx.r3.s64 = ctx.r6.s64 + 9416;
	// stw r10,-5228(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8598"))) PPC_WEAK_FUNC(sub_83CE8598);
PPC_FUNC_IMPL(__imp__sub_83CE8598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9432
	ctx.r3.s64 = ctx.r11.s64 + 9432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE85A4"))) PPC_WEAK_FUNC(sub_83CE85A4);
PPC_FUNC_IMPL(__imp__sub_83CE85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE85A8"))) PPC_WEAK_FUNC(sub_83CE85A8);
PPC_FUNC_IMPL(__imp__sub_83CE85A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9440
	ctx.r3.s64 = ctx.r11.s64 + 9440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE85B4"))) PPC_WEAK_FUNC(sub_83CE85B4);
PPC_FUNC_IMPL(__imp__sub_83CE85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE85B8"))) PPC_WEAK_FUNC(sub_83CE85B8);
PPC_FUNC_IMPL(__imp__sub_83CE85B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9448
	ctx.r3.s64 = ctx.r11.s64 + 9448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE85C4"))) PPC_WEAK_FUNC(sub_83CE85C4);
PPC_FUNC_IMPL(__imp__sub_83CE85C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE85C8"))) PPC_WEAK_FUNC(sub_83CE85C8);
PPC_FUNC_IMPL(__imp__sub_83CE85C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9456
	ctx.r3.s64 = ctx.r11.s64 + 9456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE85D4"))) PPC_WEAK_FUNC(sub_83CE85D4);
PPC_FUNC_IMPL(__imp__sub_83CE85D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE85D8"))) PPC_WEAK_FUNC(sub_83CE85D8);
PPC_FUNC_IMPL(__imp__sub_83CE85D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9464
	ctx.r3.s64 = ctx.r11.s64 + 9464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE85E4"))) PPC_WEAK_FUNC(sub_83CE85E4);
PPC_FUNC_IMPL(__imp__sub_83CE85E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE85E8"))) PPC_WEAK_FUNC(sub_83CE85E8);
PPC_FUNC_IMPL(__imp__sub_83CE85E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9472
	ctx.r3.s64 = ctx.r11.s64 + 9472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE85F4"))) PPC_WEAK_FUNC(sub_83CE85F4);
PPC_FUNC_IMPL(__imp__sub_83CE85F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE85F8"))) PPC_WEAK_FUNC(sub_83CE85F8);
PPC_FUNC_IMPL(__imp__sub_83CE85F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9480
	ctx.r3.s64 = ctx.r11.s64 + 9480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8604"))) PPC_WEAK_FUNC(sub_83CE8604);
PPC_FUNC_IMPL(__imp__sub_83CE8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8608"))) PPC_WEAK_FUNC(sub_83CE8608);
PPC_FUNC_IMPL(__imp__sub_83CE8608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9488
	ctx.r3.s64 = ctx.r11.s64 + 9488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8614"))) PPC_WEAK_FUNC(sub_83CE8614);
PPC_FUNC_IMPL(__imp__sub_83CE8614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8618"))) PPC_WEAK_FUNC(sub_83CE8618);
PPC_FUNC_IMPL(__imp__sub_83CE8618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9496
	ctx.r3.s64 = ctx.r11.s64 + 9496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8624"))) PPC_WEAK_FUNC(sub_83CE8624);
PPC_FUNC_IMPL(__imp__sub_83CE8624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8628"))) PPC_WEAK_FUNC(sub_83CE8628);
PPC_FUNC_IMPL(__imp__sub_83CE8628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9504
	ctx.r3.s64 = ctx.r11.s64 + 9504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8634"))) PPC_WEAK_FUNC(sub_83CE8634);
PPC_FUNC_IMPL(__imp__sub_83CE8634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8638"))) PPC_WEAK_FUNC(sub_83CE8638);
PPC_FUNC_IMPL(__imp__sub_83CE8638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9512
	ctx.r3.s64 = ctx.r11.s64 + 9512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8644"))) PPC_WEAK_FUNC(sub_83CE8644);
PPC_FUNC_IMPL(__imp__sub_83CE8644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8648"))) PPC_WEAK_FUNC(sub_83CE8648);
PPC_FUNC_IMPL(__imp__sub_83CE8648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9520
	ctx.r3.s64 = ctx.r11.s64 + 9520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8654"))) PPC_WEAK_FUNC(sub_83CE8654);
PPC_FUNC_IMPL(__imp__sub_83CE8654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8658"))) PPC_WEAK_FUNC(sub_83CE8658);
PPC_FUNC_IMPL(__imp__sub_83CE8658) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// bl 0x83523120
	ctx.lr = 0x83CE8670;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9528
	ctx.r3.s64 = ctx.r10.s64 + 9528;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE867C;
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

__attribute__((alias("__imp__sub_83CE868C"))) PPC_WEAK_FUNC(sub_83CE868C);
PPC_FUNC_IMPL(__imp__sub_83CE868C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8690"))) PPC_WEAK_FUNC(sub_83CE8690);
PPC_FUNC_IMPL(__imp__sub_83CE8690) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4848
	ctx.r7.s64 = ctx.r8.s64 + -4848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4848(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE86B8"))) PPC_WEAK_FUNC(sub_83CE86B8);
PPC_FUNC_IMPL(__imp__sub_83CE86B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,30400
	ctx.r6.s64 = ctx.r7.s64 + 30400;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30328(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30328);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4848);
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
	// std r9,30400(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30400, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8700"))) PPC_WEAK_FUNC(sub_83CE8700);
PPC_FUNC_IMPL(__imp__sub_83CE8700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9544
	ctx.r3.s64 = ctx.r11.s64 + 9544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE870C"))) PPC_WEAK_FUNC(sub_83CE870C);
PPC_FUNC_IMPL(__imp__sub_83CE870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8710"))) PPC_WEAK_FUNC(sub_83CE8710);
PPC_FUNC_IMPL(__imp__sub_83CE8710) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-4840
	ctx.r3.s64 = ctx.r11.s64 + -4840;
	// bl 0x8259af80
	ctx.lr = 0x83CE8728;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9560
	ctx.r3.s64 = ctx.r10.s64 + 9560;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8734;
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

__attribute__((alias("__imp__sub_83CE8744"))) PPC_WEAK_FUNC(sub_83CE8744);
PPC_FUNC_IMPL(__imp__sub_83CE8744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8748"))) PPC_WEAK_FUNC(sub_83CE8748);
PPC_FUNC_IMPL(__imp__sub_83CE8748) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4860
	ctx.r11.s64 = ctx.r8.s64 + -4860;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,30376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30376);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9552
	ctx.r3.s64 = ctx.r6.s64 + 9552;
	// stw r10,-4860(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8778"))) PPC_WEAK_FUNC(sub_83CE8778);
PPC_FUNC_IMPL(__imp__sub_83CE8778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9568
	ctx.r3.s64 = ctx.r11.s64 + 9568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8784"))) PPC_WEAK_FUNC(sub_83CE8784);
PPC_FUNC_IMPL(__imp__sub_83CE8784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8788"))) PPC_WEAK_FUNC(sub_83CE8788);
PPC_FUNC_IMPL(__imp__sub_83CE8788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9576
	ctx.r3.s64 = ctx.r11.s64 + 9576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8794"))) PPC_WEAK_FUNC(sub_83CE8794);
PPC_FUNC_IMPL(__imp__sub_83CE8794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8798"))) PPC_WEAK_FUNC(sub_83CE8798);
PPC_FUNC_IMPL(__imp__sub_83CE8798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9584
	ctx.r3.s64 = ctx.r11.s64 + 9584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE87A4"))) PPC_WEAK_FUNC(sub_83CE87A4);
PPC_FUNC_IMPL(__imp__sub_83CE87A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE87A8"))) PPC_WEAK_FUNC(sub_83CE87A8);
PPC_FUNC_IMPL(__imp__sub_83CE87A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9592
	ctx.r3.s64 = ctx.r11.s64 + 9592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE87B4"))) PPC_WEAK_FUNC(sub_83CE87B4);
PPC_FUNC_IMPL(__imp__sub_83CE87B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE87B8"))) PPC_WEAK_FUNC(sub_83CE87B8);
PPC_FUNC_IMPL(__imp__sub_83CE87B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9600
	ctx.r3.s64 = ctx.r11.s64 + 9600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE87C4"))) PPC_WEAK_FUNC(sub_83CE87C4);
PPC_FUNC_IMPL(__imp__sub_83CE87C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE87C8"))) PPC_WEAK_FUNC(sub_83CE87C8);
PPC_FUNC_IMPL(__imp__sub_83CE87C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9608
	ctx.r3.s64 = ctx.r11.s64 + 9608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE87D4"))) PPC_WEAK_FUNC(sub_83CE87D4);
PPC_FUNC_IMPL(__imp__sub_83CE87D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE87D8"))) PPC_WEAK_FUNC(sub_83CE87D8);
PPC_FUNC_IMPL(__imp__sub_83CE87D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9616
	ctx.r3.s64 = ctx.r11.s64 + 9616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE87E4"))) PPC_WEAK_FUNC(sub_83CE87E4);
PPC_FUNC_IMPL(__imp__sub_83CE87E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE87E8"))) PPC_WEAK_FUNC(sub_83CE87E8);
PPC_FUNC_IMPL(__imp__sub_83CE87E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9624
	ctx.r3.s64 = ctx.r11.s64 + 9624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE87F4"))) PPC_WEAK_FUNC(sub_83CE87F4);
PPC_FUNC_IMPL(__imp__sub_83CE87F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE87F8"))) PPC_WEAK_FUNC(sub_83CE87F8);
PPC_FUNC_IMPL(__imp__sub_83CE87F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9632
	ctx.r3.s64 = ctx.r11.s64 + 9632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8804"))) PPC_WEAK_FUNC(sub_83CE8804);
PPC_FUNC_IMPL(__imp__sub_83CE8804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8808"))) PPC_WEAK_FUNC(sub_83CE8808);
PPC_FUNC_IMPL(__imp__sub_83CE8808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9640
	ctx.r3.s64 = ctx.r11.s64 + 9640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8814"))) PPC_WEAK_FUNC(sub_83CE8814);
PPC_FUNC_IMPL(__imp__sub_83CE8814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8818"))) PPC_WEAK_FUNC(sub_83CE8818);
PPC_FUNC_IMPL(__imp__sub_83CE8818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9648
	ctx.r3.s64 = ctx.r11.s64 + 9648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8824"))) PPC_WEAK_FUNC(sub_83CE8824);
PPC_FUNC_IMPL(__imp__sub_83CE8824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8828"))) PPC_WEAK_FUNC(sub_83CE8828);
PPC_FUNC_IMPL(__imp__sub_83CE8828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9656
	ctx.r3.s64 = ctx.r11.s64 + 9656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8834"))) PPC_WEAK_FUNC(sub_83CE8834);
PPC_FUNC_IMPL(__imp__sub_83CE8834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8838"))) PPC_WEAK_FUNC(sub_83CE8838);
PPC_FUNC_IMPL(__imp__sub_83CE8838) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-4496
	ctx.r3.s64 = ctx.r11.s64 + -4496;
	// bl 0x83523120
	ctx.lr = 0x83CE8850;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9664
	ctx.r3.s64 = ctx.r10.s64 + 9664;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE885C;
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

__attribute__((alias("__imp__sub_83CE886C"))) PPC_WEAK_FUNC(sub_83CE886C);
PPC_FUNC_IMPL(__imp__sub_83CE886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8870"))) PPC_WEAK_FUNC(sub_83CE8870);
PPC_FUNC_IMPL(__imp__sub_83CE8870) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4480
	ctx.r7.s64 = ctx.r8.s64 + -4480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8898"))) PPC_WEAK_FUNC(sub_83CE8898);
PPC_FUNC_IMPL(__imp__sub_83CE8898) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,30552
	ctx.r6.s64 = ctx.r7.s64 + 30552;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30480(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30480);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4480);
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
	// std r9,30552(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30552, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE88E0"))) PPC_WEAK_FUNC(sub_83CE88E0);
PPC_FUNC_IMPL(__imp__sub_83CE88E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9680
	ctx.r3.s64 = ctx.r11.s64 + 9680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE88EC"))) PPC_WEAK_FUNC(sub_83CE88EC);
PPC_FUNC_IMPL(__imp__sub_83CE88EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE88F0"))) PPC_WEAK_FUNC(sub_83CE88F0);
PPC_FUNC_IMPL(__imp__sub_83CE88F0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-4472
	ctx.r3.s64 = ctx.r11.s64 + -4472;
	// bl 0x8259af80
	ctx.lr = 0x83CE8908;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9696
	ctx.r3.s64 = ctx.r10.s64 + 9696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8914;
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

__attribute__((alias("__imp__sub_83CE8924"))) PPC_WEAK_FUNC(sub_83CE8924);
PPC_FUNC_IMPL(__imp__sub_83CE8924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8928"))) PPC_WEAK_FUNC(sub_83CE8928);
PPC_FUNC_IMPL(__imp__sub_83CE8928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4492
	ctx.r11.s64 = ctx.r8.s64 + -4492;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,30528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30528);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9688
	ctx.r3.s64 = ctx.r6.s64 + 9688;
	// stw r10,-4492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8958"))) PPC_WEAK_FUNC(sub_83CE8958);
PPC_FUNC_IMPL(__imp__sub_83CE8958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9704
	ctx.r3.s64 = ctx.r11.s64 + 9704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8964"))) PPC_WEAK_FUNC(sub_83CE8964);
PPC_FUNC_IMPL(__imp__sub_83CE8964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8968"))) PPC_WEAK_FUNC(sub_83CE8968);
PPC_FUNC_IMPL(__imp__sub_83CE8968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9712
	ctx.r3.s64 = ctx.r11.s64 + 9712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8974"))) PPC_WEAK_FUNC(sub_83CE8974);
PPC_FUNC_IMPL(__imp__sub_83CE8974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8978"))) PPC_WEAK_FUNC(sub_83CE8978);
PPC_FUNC_IMPL(__imp__sub_83CE8978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9720
	ctx.r3.s64 = ctx.r11.s64 + 9720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8984"))) PPC_WEAK_FUNC(sub_83CE8984);
PPC_FUNC_IMPL(__imp__sub_83CE8984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8988"))) PPC_WEAK_FUNC(sub_83CE8988);
PPC_FUNC_IMPL(__imp__sub_83CE8988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9728
	ctx.r3.s64 = ctx.r11.s64 + 9728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8994"))) PPC_WEAK_FUNC(sub_83CE8994);
PPC_FUNC_IMPL(__imp__sub_83CE8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8998"))) PPC_WEAK_FUNC(sub_83CE8998);
PPC_FUNC_IMPL(__imp__sub_83CE8998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9736
	ctx.r3.s64 = ctx.r11.s64 + 9736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE89A4"))) PPC_WEAK_FUNC(sub_83CE89A4);
PPC_FUNC_IMPL(__imp__sub_83CE89A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE89A8"))) PPC_WEAK_FUNC(sub_83CE89A8);
PPC_FUNC_IMPL(__imp__sub_83CE89A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9744
	ctx.r3.s64 = ctx.r11.s64 + 9744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE89B4"))) PPC_WEAK_FUNC(sub_83CE89B4);
PPC_FUNC_IMPL(__imp__sub_83CE89B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE89B8"))) PPC_WEAK_FUNC(sub_83CE89B8);
PPC_FUNC_IMPL(__imp__sub_83CE89B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9752
	ctx.r3.s64 = ctx.r11.s64 + 9752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE89C4"))) PPC_WEAK_FUNC(sub_83CE89C4);
PPC_FUNC_IMPL(__imp__sub_83CE89C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE89C8"))) PPC_WEAK_FUNC(sub_83CE89C8);
PPC_FUNC_IMPL(__imp__sub_83CE89C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9760
	ctx.r3.s64 = ctx.r11.s64 + 9760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE89D4"))) PPC_WEAK_FUNC(sub_83CE89D4);
PPC_FUNC_IMPL(__imp__sub_83CE89D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE89D8"))) PPC_WEAK_FUNC(sub_83CE89D8);
PPC_FUNC_IMPL(__imp__sub_83CE89D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9768
	ctx.r3.s64 = ctx.r11.s64 + 9768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE89E4"))) PPC_WEAK_FUNC(sub_83CE89E4);
PPC_FUNC_IMPL(__imp__sub_83CE89E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE89E8"))) PPC_WEAK_FUNC(sub_83CE89E8);
PPC_FUNC_IMPL(__imp__sub_83CE89E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9776
	ctx.r3.s64 = ctx.r11.s64 + 9776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE89F4"))) PPC_WEAK_FUNC(sub_83CE89F4);
PPC_FUNC_IMPL(__imp__sub_83CE89F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

