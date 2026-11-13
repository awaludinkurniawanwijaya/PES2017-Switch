#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C61050"))) PPC_WEAK_FUNC(sub_83C61050);
PPC_FUNC_IMPL(__imp__sub_83C61050) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,4040
	ctx.r3.s64 = ctx.r11.s64 + 4040;
	// bl 0x83523120
	ctx.lr = 0x83C61068;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12640
	ctx.r3.s64 = ctx.r10.s64 + 12640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61074;
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

__attribute__((alias("__imp__sub_83C61084"))) PPC_WEAK_FUNC(sub_83C61084);
PPC_FUNC_IMPL(__imp__sub_83C61084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61088"))) PPC_WEAK_FUNC(sub_83C61088);
PPC_FUNC_IMPL(__imp__sub_83C61088) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4056
	ctx.r7.s64 = ctx.r8.s64 + 4056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4056(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4056);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4056(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4056, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C610B0"))) PPC_WEAK_FUNC(sub_83C610B0);
PPC_FUNC_IMPL(__imp__sub_83C610B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,29352
	ctx.r6.s64 = ctx.r7.s64 + 29352;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4056(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4056);
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
	// std r9,29352(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C610F8"))) PPC_WEAK_FUNC(sub_83C610F8);
PPC_FUNC_IMPL(__imp__sub_83C610F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61104"))) PPC_WEAK_FUNC(sub_83C61104);
PPC_FUNC_IMPL(__imp__sub_83C61104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61108"))) PPC_WEAK_FUNC(sub_83C61108);
PPC_FUNC_IMPL(__imp__sub_83C61108) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,4064
	ctx.r3.s64 = ctx.r11.s64 + 4064;
	// bl 0x8259af80
	ctx.lr = 0x83C61120;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12672
	ctx.r3.s64 = ctx.r10.s64 + 12672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6112C;
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

__attribute__((alias("__imp__sub_83C6113C"))) PPC_WEAK_FUNC(sub_83C6113C);
PPC_FUNC_IMPL(__imp__sub_83C6113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61140"))) PPC_WEAK_FUNC(sub_83C61140);
PPC_FUNC_IMPL(__imp__sub_83C61140) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4044
	ctx.r11.s64 = ctx.r8.s64 + 4044;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,29328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29328);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12664
	ctx.r3.s64 = ctx.r6.s64 + 12664;
	// stw r10,4044(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61170"))) PPC_WEAK_FUNC(sub_83C61170);
PPC_FUNC_IMPL(__imp__sub_83C61170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12680
	ctx.r3.s64 = ctx.r11.s64 + 12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6117C"))) PPC_WEAK_FUNC(sub_83C6117C);
PPC_FUNC_IMPL(__imp__sub_83C6117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61180"))) PPC_WEAK_FUNC(sub_83C61180);
PPC_FUNC_IMPL(__imp__sub_83C61180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12688
	ctx.r3.s64 = ctx.r11.s64 + 12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6118C"))) PPC_WEAK_FUNC(sub_83C6118C);
PPC_FUNC_IMPL(__imp__sub_83C6118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61190"))) PPC_WEAK_FUNC(sub_83C61190);
PPC_FUNC_IMPL(__imp__sub_83C61190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12696
	ctx.r3.s64 = ctx.r11.s64 + 12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6119C"))) PPC_WEAK_FUNC(sub_83C6119C);
PPC_FUNC_IMPL(__imp__sub_83C6119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C611A0"))) PPC_WEAK_FUNC(sub_83C611A0);
PPC_FUNC_IMPL(__imp__sub_83C611A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C611AC"))) PPC_WEAK_FUNC(sub_83C611AC);
PPC_FUNC_IMPL(__imp__sub_83C611AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C611B0"))) PPC_WEAK_FUNC(sub_83C611B0);
PPC_FUNC_IMPL(__imp__sub_83C611B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12712
	ctx.r3.s64 = ctx.r11.s64 + 12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C611BC"))) PPC_WEAK_FUNC(sub_83C611BC);
PPC_FUNC_IMPL(__imp__sub_83C611BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C611C0"))) PPC_WEAK_FUNC(sub_83C611C0);
PPC_FUNC_IMPL(__imp__sub_83C611C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12720
	ctx.r3.s64 = ctx.r11.s64 + 12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C611CC"))) PPC_WEAK_FUNC(sub_83C611CC);
PPC_FUNC_IMPL(__imp__sub_83C611CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C611D0"))) PPC_WEAK_FUNC(sub_83C611D0);
PPC_FUNC_IMPL(__imp__sub_83C611D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12728
	ctx.r3.s64 = ctx.r11.s64 + 12728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C611DC"))) PPC_WEAK_FUNC(sub_83C611DC);
PPC_FUNC_IMPL(__imp__sub_83C611DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C611E0"))) PPC_WEAK_FUNC(sub_83C611E0);
PPC_FUNC_IMPL(__imp__sub_83C611E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12736
	ctx.r3.s64 = ctx.r11.s64 + 12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C611EC"))) PPC_WEAK_FUNC(sub_83C611EC);
PPC_FUNC_IMPL(__imp__sub_83C611EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C611F0"))) PPC_WEAK_FUNC(sub_83C611F0);
PPC_FUNC_IMPL(__imp__sub_83C611F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12744
	ctx.r3.s64 = ctx.r11.s64 + 12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C611FC"))) PPC_WEAK_FUNC(sub_83C611FC);
PPC_FUNC_IMPL(__imp__sub_83C611FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61200"))) PPC_WEAK_FUNC(sub_83C61200);
PPC_FUNC_IMPL(__imp__sub_83C61200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12752
	ctx.r3.s64 = ctx.r11.s64 + 12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6120C"))) PPC_WEAK_FUNC(sub_83C6120C);
PPC_FUNC_IMPL(__imp__sub_83C6120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61210"))) PPC_WEAK_FUNC(sub_83C61210);
PPC_FUNC_IMPL(__imp__sub_83C61210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12760
	ctx.r3.s64 = ctx.r11.s64 + 12760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6121C"))) PPC_WEAK_FUNC(sub_83C6121C);
PPC_FUNC_IMPL(__imp__sub_83C6121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61220"))) PPC_WEAK_FUNC(sub_83C61220);
PPC_FUNC_IMPL(__imp__sub_83C61220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12768
	ctx.r3.s64 = ctx.r11.s64 + 12768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6122C"))) PPC_WEAK_FUNC(sub_83C6122C);
PPC_FUNC_IMPL(__imp__sub_83C6122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61230"))) PPC_WEAK_FUNC(sub_83C61230);
PPC_FUNC_IMPL(__imp__sub_83C61230) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,4408
	ctx.r3.s64 = ctx.r11.s64 + 4408;
	// bl 0x83523120
	ctx.lr = 0x83C61248;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12776
	ctx.r3.s64 = ctx.r10.s64 + 12776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61254;
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

__attribute__((alias("__imp__sub_83C61264"))) PPC_WEAK_FUNC(sub_83C61264);
PPC_FUNC_IMPL(__imp__sub_83C61264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61268"))) PPC_WEAK_FUNC(sub_83C61268);
PPC_FUNC_IMPL(__imp__sub_83C61268) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4424
	ctx.r7.s64 = ctx.r8.s64 + 4424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61290"))) PPC_WEAK_FUNC(sub_83C61290);
PPC_FUNC_IMPL(__imp__sub_83C61290) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,29480
	ctx.r6.s64 = ctx.r7.s64 + 29480;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4424);
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
	// std r9,29480(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C612D8"))) PPC_WEAK_FUNC(sub_83C612D8);
PPC_FUNC_IMPL(__imp__sub_83C612D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12792
	ctx.r3.s64 = ctx.r11.s64 + 12792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C612E4"))) PPC_WEAK_FUNC(sub_83C612E4);
PPC_FUNC_IMPL(__imp__sub_83C612E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C612E8"))) PPC_WEAK_FUNC(sub_83C612E8);
PPC_FUNC_IMPL(__imp__sub_83C612E8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// bl 0x8259af80
	ctx.lr = 0x83C61300;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6130C;
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

__attribute__((alias("__imp__sub_83C6131C"))) PPC_WEAK_FUNC(sub_83C6131C);
PPC_FUNC_IMPL(__imp__sub_83C6131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61320"))) PPC_WEAK_FUNC(sub_83C61320);
PPC_FUNC_IMPL(__imp__sub_83C61320) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4412
	ctx.r11.s64 = ctx.r8.s64 + 4412;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,29456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12800
	ctx.r3.s64 = ctx.r6.s64 + 12800;
	// stw r10,4412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61350"))) PPC_WEAK_FUNC(sub_83C61350);
PPC_FUNC_IMPL(__imp__sub_83C61350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12816
	ctx.r3.s64 = ctx.r11.s64 + 12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6135C"))) PPC_WEAK_FUNC(sub_83C6135C);
PPC_FUNC_IMPL(__imp__sub_83C6135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61360"))) PPC_WEAK_FUNC(sub_83C61360);
PPC_FUNC_IMPL(__imp__sub_83C61360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12824
	ctx.r3.s64 = ctx.r11.s64 + 12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6136C"))) PPC_WEAK_FUNC(sub_83C6136C);
PPC_FUNC_IMPL(__imp__sub_83C6136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61370"))) PPC_WEAK_FUNC(sub_83C61370);
PPC_FUNC_IMPL(__imp__sub_83C61370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12832
	ctx.r3.s64 = ctx.r11.s64 + 12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6137C"))) PPC_WEAK_FUNC(sub_83C6137C);
PPC_FUNC_IMPL(__imp__sub_83C6137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61380"))) PPC_WEAK_FUNC(sub_83C61380);
PPC_FUNC_IMPL(__imp__sub_83C61380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12840
	ctx.r3.s64 = ctx.r11.s64 + 12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6138C"))) PPC_WEAK_FUNC(sub_83C6138C);
PPC_FUNC_IMPL(__imp__sub_83C6138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61390"))) PPC_WEAK_FUNC(sub_83C61390);
PPC_FUNC_IMPL(__imp__sub_83C61390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12848
	ctx.r3.s64 = ctx.r11.s64 + 12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6139C"))) PPC_WEAK_FUNC(sub_83C6139C);
PPC_FUNC_IMPL(__imp__sub_83C6139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C613A0"))) PPC_WEAK_FUNC(sub_83C613A0);
PPC_FUNC_IMPL(__imp__sub_83C613A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12856
	ctx.r3.s64 = ctx.r11.s64 + 12856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C613AC"))) PPC_WEAK_FUNC(sub_83C613AC);
PPC_FUNC_IMPL(__imp__sub_83C613AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C613B0"))) PPC_WEAK_FUNC(sub_83C613B0);
PPC_FUNC_IMPL(__imp__sub_83C613B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12864
	ctx.r3.s64 = ctx.r11.s64 + 12864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C613BC"))) PPC_WEAK_FUNC(sub_83C613BC);
PPC_FUNC_IMPL(__imp__sub_83C613BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C613C0"))) PPC_WEAK_FUNC(sub_83C613C0);
PPC_FUNC_IMPL(__imp__sub_83C613C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12872
	ctx.r3.s64 = ctx.r11.s64 + 12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C613CC"))) PPC_WEAK_FUNC(sub_83C613CC);
PPC_FUNC_IMPL(__imp__sub_83C613CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C613D0"))) PPC_WEAK_FUNC(sub_83C613D0);
PPC_FUNC_IMPL(__imp__sub_83C613D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12880
	ctx.r3.s64 = ctx.r11.s64 + 12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C613DC"))) PPC_WEAK_FUNC(sub_83C613DC);
PPC_FUNC_IMPL(__imp__sub_83C613DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C613E0"))) PPC_WEAK_FUNC(sub_83C613E0);
PPC_FUNC_IMPL(__imp__sub_83C613E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12888
	ctx.r3.s64 = ctx.r11.s64 + 12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C613EC"))) PPC_WEAK_FUNC(sub_83C613EC);
PPC_FUNC_IMPL(__imp__sub_83C613EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C613F0"))) PPC_WEAK_FUNC(sub_83C613F0);
PPC_FUNC_IMPL(__imp__sub_83C613F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12896
	ctx.r3.s64 = ctx.r11.s64 + 12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C613FC"))) PPC_WEAK_FUNC(sub_83C613FC);
PPC_FUNC_IMPL(__imp__sub_83C613FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61400"))) PPC_WEAK_FUNC(sub_83C61400);
PPC_FUNC_IMPL(__imp__sub_83C61400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12904
	ctx.r3.s64 = ctx.r11.s64 + 12904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6140C"))) PPC_WEAK_FUNC(sub_83C6140C);
PPC_FUNC_IMPL(__imp__sub_83C6140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61410"))) PPC_WEAK_FUNC(sub_83C61410);
PPC_FUNC_IMPL(__imp__sub_83C61410) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,4776
	ctx.r3.s64 = ctx.r11.s64 + 4776;
	// bl 0x83523120
	ctx.lr = 0x83C61428;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12912
	ctx.r3.s64 = ctx.r10.s64 + 12912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61434;
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

__attribute__((alias("__imp__sub_83C61444"))) PPC_WEAK_FUNC(sub_83C61444);
PPC_FUNC_IMPL(__imp__sub_83C61444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61448"))) PPC_WEAK_FUNC(sub_83C61448);
PPC_FUNC_IMPL(__imp__sub_83C61448) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4792
	ctx.r7.s64 = ctx.r8.s64 + 4792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4792);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4792(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4792, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61470"))) PPC_WEAK_FUNC(sub_83C61470);
PPC_FUNC_IMPL(__imp__sub_83C61470) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,29608
	ctx.r6.s64 = ctx.r7.s64 + 29608;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4792);
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
	// std r9,29608(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C614B8"))) PPC_WEAK_FUNC(sub_83C614B8);
PPC_FUNC_IMPL(__imp__sub_83C614B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12928
	ctx.r3.s64 = ctx.r11.s64 + 12928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C614C4"))) PPC_WEAK_FUNC(sub_83C614C4);
PPC_FUNC_IMPL(__imp__sub_83C614C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C614C8"))) PPC_WEAK_FUNC(sub_83C614C8);
PPC_FUNC_IMPL(__imp__sub_83C614C8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,4800
	ctx.r3.s64 = ctx.r11.s64 + 4800;
	// bl 0x8259af80
	ctx.lr = 0x83C614E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12944
	ctx.r3.s64 = ctx.r10.s64 + 12944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C614EC;
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

__attribute__((alias("__imp__sub_83C614FC"))) PPC_WEAK_FUNC(sub_83C614FC);
PPC_FUNC_IMPL(__imp__sub_83C614FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61500"))) PPC_WEAK_FUNC(sub_83C61500);
PPC_FUNC_IMPL(__imp__sub_83C61500) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4780
	ctx.r11.s64 = ctx.r8.s64 + 4780;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,29584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12936
	ctx.r3.s64 = ctx.r6.s64 + 12936;
	// stw r10,4780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61530"))) PPC_WEAK_FUNC(sub_83C61530);
PPC_FUNC_IMPL(__imp__sub_83C61530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12952
	ctx.r3.s64 = ctx.r11.s64 + 12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6153C"))) PPC_WEAK_FUNC(sub_83C6153C);
PPC_FUNC_IMPL(__imp__sub_83C6153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61540"))) PPC_WEAK_FUNC(sub_83C61540);
PPC_FUNC_IMPL(__imp__sub_83C61540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12960
	ctx.r3.s64 = ctx.r11.s64 + 12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6154C"))) PPC_WEAK_FUNC(sub_83C6154C);
PPC_FUNC_IMPL(__imp__sub_83C6154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61550"))) PPC_WEAK_FUNC(sub_83C61550);
PPC_FUNC_IMPL(__imp__sub_83C61550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12968
	ctx.r3.s64 = ctx.r11.s64 + 12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6155C"))) PPC_WEAK_FUNC(sub_83C6155C);
PPC_FUNC_IMPL(__imp__sub_83C6155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61560"))) PPC_WEAK_FUNC(sub_83C61560);
PPC_FUNC_IMPL(__imp__sub_83C61560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6156C"))) PPC_WEAK_FUNC(sub_83C6156C);
PPC_FUNC_IMPL(__imp__sub_83C6156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61570"))) PPC_WEAK_FUNC(sub_83C61570);
PPC_FUNC_IMPL(__imp__sub_83C61570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12984
	ctx.r3.s64 = ctx.r11.s64 + 12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6157C"))) PPC_WEAK_FUNC(sub_83C6157C);
PPC_FUNC_IMPL(__imp__sub_83C6157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61580"))) PPC_WEAK_FUNC(sub_83C61580);
PPC_FUNC_IMPL(__imp__sub_83C61580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12992
	ctx.r3.s64 = ctx.r11.s64 + 12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6158C"))) PPC_WEAK_FUNC(sub_83C6158C);
PPC_FUNC_IMPL(__imp__sub_83C6158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61590"))) PPC_WEAK_FUNC(sub_83C61590);
PPC_FUNC_IMPL(__imp__sub_83C61590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6159C"))) PPC_WEAK_FUNC(sub_83C6159C);
PPC_FUNC_IMPL(__imp__sub_83C6159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C615A0"))) PPC_WEAK_FUNC(sub_83C615A0);
PPC_FUNC_IMPL(__imp__sub_83C615A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13008
	ctx.r3.s64 = ctx.r11.s64 + 13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C615AC"))) PPC_WEAK_FUNC(sub_83C615AC);
PPC_FUNC_IMPL(__imp__sub_83C615AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C615B0"))) PPC_WEAK_FUNC(sub_83C615B0);
PPC_FUNC_IMPL(__imp__sub_83C615B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13016
	ctx.r3.s64 = ctx.r11.s64 + 13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C615BC"))) PPC_WEAK_FUNC(sub_83C615BC);
PPC_FUNC_IMPL(__imp__sub_83C615BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C615C0"))) PPC_WEAK_FUNC(sub_83C615C0);
PPC_FUNC_IMPL(__imp__sub_83C615C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13024
	ctx.r3.s64 = ctx.r11.s64 + 13024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C615CC"))) PPC_WEAK_FUNC(sub_83C615CC);
PPC_FUNC_IMPL(__imp__sub_83C615CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C615D0"))) PPC_WEAK_FUNC(sub_83C615D0);
PPC_FUNC_IMPL(__imp__sub_83C615D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13032
	ctx.r3.s64 = ctx.r11.s64 + 13032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C615DC"))) PPC_WEAK_FUNC(sub_83C615DC);
PPC_FUNC_IMPL(__imp__sub_83C615DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C615E0"))) PPC_WEAK_FUNC(sub_83C615E0);
PPC_FUNC_IMPL(__imp__sub_83C615E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13040
	ctx.r3.s64 = ctx.r11.s64 + 13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C615EC"))) PPC_WEAK_FUNC(sub_83C615EC);
PPC_FUNC_IMPL(__imp__sub_83C615EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C615F0"))) PPC_WEAK_FUNC(sub_83C615F0);
PPC_FUNC_IMPL(__imp__sub_83C615F0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,5144
	ctx.r3.s64 = ctx.r11.s64 + 5144;
	// bl 0x83523120
	ctx.lr = 0x83C61608;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13048
	ctx.r3.s64 = ctx.r10.s64 + 13048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61614;
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

__attribute__((alias("__imp__sub_83C61624"))) PPC_WEAK_FUNC(sub_83C61624);
PPC_FUNC_IMPL(__imp__sub_83C61624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61628"))) PPC_WEAK_FUNC(sub_83C61628);
PPC_FUNC_IMPL(__imp__sub_83C61628) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5160
	ctx.r7.s64 = ctx.r8.s64 + 5160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61650"))) PPC_WEAK_FUNC(sub_83C61650);
PPC_FUNC_IMPL(__imp__sub_83C61650) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,29752
	ctx.r6.s64 = ctx.r7.s64 + 29752;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29680(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29680);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5160);
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
	// std r9,29752(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61698"))) PPC_WEAK_FUNC(sub_83C61698);
PPC_FUNC_IMPL(__imp__sub_83C61698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13064
	ctx.r3.s64 = ctx.r11.s64 + 13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C616A4"))) PPC_WEAK_FUNC(sub_83C616A4);
PPC_FUNC_IMPL(__imp__sub_83C616A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C616A8"))) PPC_WEAK_FUNC(sub_83C616A8);
PPC_FUNC_IMPL(__imp__sub_83C616A8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,5168
	ctx.r3.s64 = ctx.r11.s64 + 5168;
	// bl 0x8259af80
	ctx.lr = 0x83C616C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13080
	ctx.r3.s64 = ctx.r10.s64 + 13080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C616CC;
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

__attribute__((alias("__imp__sub_83C616DC"))) PPC_WEAK_FUNC(sub_83C616DC);
PPC_FUNC_IMPL(__imp__sub_83C616DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C616E0"))) PPC_WEAK_FUNC(sub_83C616E0);
PPC_FUNC_IMPL(__imp__sub_83C616E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5148
	ctx.r11.s64 = ctx.r8.s64 + 5148;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,29728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29728);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13072
	ctx.r3.s64 = ctx.r6.s64 + 13072;
	// stw r10,5148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61710"))) PPC_WEAK_FUNC(sub_83C61710);
PPC_FUNC_IMPL(__imp__sub_83C61710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13088
	ctx.r3.s64 = ctx.r11.s64 + 13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6171C"))) PPC_WEAK_FUNC(sub_83C6171C);
PPC_FUNC_IMPL(__imp__sub_83C6171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61720"))) PPC_WEAK_FUNC(sub_83C61720);
PPC_FUNC_IMPL(__imp__sub_83C61720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13096
	ctx.r3.s64 = ctx.r11.s64 + 13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6172C"))) PPC_WEAK_FUNC(sub_83C6172C);
PPC_FUNC_IMPL(__imp__sub_83C6172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61730"))) PPC_WEAK_FUNC(sub_83C61730);
PPC_FUNC_IMPL(__imp__sub_83C61730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13104
	ctx.r3.s64 = ctx.r11.s64 + 13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6173C"))) PPC_WEAK_FUNC(sub_83C6173C);
PPC_FUNC_IMPL(__imp__sub_83C6173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61740"))) PPC_WEAK_FUNC(sub_83C61740);
PPC_FUNC_IMPL(__imp__sub_83C61740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13112
	ctx.r3.s64 = ctx.r11.s64 + 13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6174C"))) PPC_WEAK_FUNC(sub_83C6174C);
PPC_FUNC_IMPL(__imp__sub_83C6174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61750"))) PPC_WEAK_FUNC(sub_83C61750);
PPC_FUNC_IMPL(__imp__sub_83C61750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13120
	ctx.r3.s64 = ctx.r11.s64 + 13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6175C"))) PPC_WEAK_FUNC(sub_83C6175C);
PPC_FUNC_IMPL(__imp__sub_83C6175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61760"))) PPC_WEAK_FUNC(sub_83C61760);
PPC_FUNC_IMPL(__imp__sub_83C61760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13128
	ctx.r3.s64 = ctx.r11.s64 + 13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6176C"))) PPC_WEAK_FUNC(sub_83C6176C);
PPC_FUNC_IMPL(__imp__sub_83C6176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61770"))) PPC_WEAK_FUNC(sub_83C61770);
PPC_FUNC_IMPL(__imp__sub_83C61770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13136
	ctx.r3.s64 = ctx.r11.s64 + 13136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6177C"))) PPC_WEAK_FUNC(sub_83C6177C);
PPC_FUNC_IMPL(__imp__sub_83C6177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61780"))) PPC_WEAK_FUNC(sub_83C61780);
PPC_FUNC_IMPL(__imp__sub_83C61780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13144
	ctx.r3.s64 = ctx.r11.s64 + 13144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6178C"))) PPC_WEAK_FUNC(sub_83C6178C);
PPC_FUNC_IMPL(__imp__sub_83C6178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61790"))) PPC_WEAK_FUNC(sub_83C61790);
PPC_FUNC_IMPL(__imp__sub_83C61790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13152
	ctx.r3.s64 = ctx.r11.s64 + 13152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6179C"))) PPC_WEAK_FUNC(sub_83C6179C);
PPC_FUNC_IMPL(__imp__sub_83C6179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C617A0"))) PPC_WEAK_FUNC(sub_83C617A0);
PPC_FUNC_IMPL(__imp__sub_83C617A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13160
	ctx.r3.s64 = ctx.r11.s64 + 13160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C617AC"))) PPC_WEAK_FUNC(sub_83C617AC);
PPC_FUNC_IMPL(__imp__sub_83C617AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C617B0"))) PPC_WEAK_FUNC(sub_83C617B0);
PPC_FUNC_IMPL(__imp__sub_83C617B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13168
	ctx.r3.s64 = ctx.r11.s64 + 13168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C617BC"))) PPC_WEAK_FUNC(sub_83C617BC);
PPC_FUNC_IMPL(__imp__sub_83C617BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C617C0"))) PPC_WEAK_FUNC(sub_83C617C0);
PPC_FUNC_IMPL(__imp__sub_83C617C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13176
	ctx.r3.s64 = ctx.r11.s64 + 13176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C617CC"))) PPC_WEAK_FUNC(sub_83C617CC);
PPC_FUNC_IMPL(__imp__sub_83C617CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C617D0"))) PPC_WEAK_FUNC(sub_83C617D0);
PPC_FUNC_IMPL(__imp__sub_83C617D0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,5512
	ctx.r3.s64 = ctx.r11.s64 + 5512;
	// bl 0x83523120
	ctx.lr = 0x83C617E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13184
	ctx.r3.s64 = ctx.r10.s64 + 13184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C617F4;
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

__attribute__((alias("__imp__sub_83C61804"))) PPC_WEAK_FUNC(sub_83C61804);
PPC_FUNC_IMPL(__imp__sub_83C61804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61808"))) PPC_WEAK_FUNC(sub_83C61808);
PPC_FUNC_IMPL(__imp__sub_83C61808) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5528
	ctx.r7.s64 = ctx.r8.s64 + 5528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61830"))) PPC_WEAK_FUNC(sub_83C61830);
PPC_FUNC_IMPL(__imp__sub_83C61830) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,29892
	ctx.r6.s64 = ctx.r7.s64 + 29892;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29820(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29820);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5528);
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
	// std r9,29892(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29892, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61878"))) PPC_WEAK_FUNC(sub_83C61878);
PPC_FUNC_IMPL(__imp__sub_83C61878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13200
	ctx.r3.s64 = ctx.r11.s64 + 13200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61884"))) PPC_WEAK_FUNC(sub_83C61884);
PPC_FUNC_IMPL(__imp__sub_83C61884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61888"))) PPC_WEAK_FUNC(sub_83C61888);
PPC_FUNC_IMPL(__imp__sub_83C61888) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,5536
	ctx.r3.s64 = ctx.r11.s64 + 5536;
	// bl 0x8259af80
	ctx.lr = 0x83C618A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13216
	ctx.r3.s64 = ctx.r10.s64 + 13216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C618AC;
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

__attribute__((alias("__imp__sub_83C618BC"))) PPC_WEAK_FUNC(sub_83C618BC);
PPC_FUNC_IMPL(__imp__sub_83C618BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C618C0"))) PPC_WEAK_FUNC(sub_83C618C0);
PPC_FUNC_IMPL(__imp__sub_83C618C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5516
	ctx.r11.s64 = ctx.r8.s64 + 5516;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,29868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29868);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13208
	ctx.r3.s64 = ctx.r6.s64 + 13208;
	// stw r10,5516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C618F0"))) PPC_WEAK_FUNC(sub_83C618F0);
PPC_FUNC_IMPL(__imp__sub_83C618F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13224
	ctx.r3.s64 = ctx.r11.s64 + 13224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C618FC"))) PPC_WEAK_FUNC(sub_83C618FC);
PPC_FUNC_IMPL(__imp__sub_83C618FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61900"))) PPC_WEAK_FUNC(sub_83C61900);
PPC_FUNC_IMPL(__imp__sub_83C61900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13232
	ctx.r3.s64 = ctx.r11.s64 + 13232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6190C"))) PPC_WEAK_FUNC(sub_83C6190C);
PPC_FUNC_IMPL(__imp__sub_83C6190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61910"))) PPC_WEAK_FUNC(sub_83C61910);
PPC_FUNC_IMPL(__imp__sub_83C61910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6191C"))) PPC_WEAK_FUNC(sub_83C6191C);
PPC_FUNC_IMPL(__imp__sub_83C6191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61920"))) PPC_WEAK_FUNC(sub_83C61920);
PPC_FUNC_IMPL(__imp__sub_83C61920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13248
	ctx.r3.s64 = ctx.r11.s64 + 13248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6192C"))) PPC_WEAK_FUNC(sub_83C6192C);
PPC_FUNC_IMPL(__imp__sub_83C6192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61930"))) PPC_WEAK_FUNC(sub_83C61930);
PPC_FUNC_IMPL(__imp__sub_83C61930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13256
	ctx.r3.s64 = ctx.r11.s64 + 13256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6193C"))) PPC_WEAK_FUNC(sub_83C6193C);
PPC_FUNC_IMPL(__imp__sub_83C6193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61940"))) PPC_WEAK_FUNC(sub_83C61940);
PPC_FUNC_IMPL(__imp__sub_83C61940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13264
	ctx.r3.s64 = ctx.r11.s64 + 13264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6194C"))) PPC_WEAK_FUNC(sub_83C6194C);
PPC_FUNC_IMPL(__imp__sub_83C6194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61950"))) PPC_WEAK_FUNC(sub_83C61950);
PPC_FUNC_IMPL(__imp__sub_83C61950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13272
	ctx.r3.s64 = ctx.r11.s64 + 13272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6195C"))) PPC_WEAK_FUNC(sub_83C6195C);
PPC_FUNC_IMPL(__imp__sub_83C6195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61960"))) PPC_WEAK_FUNC(sub_83C61960);
PPC_FUNC_IMPL(__imp__sub_83C61960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6196C"))) PPC_WEAK_FUNC(sub_83C6196C);
PPC_FUNC_IMPL(__imp__sub_83C6196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61970"))) PPC_WEAK_FUNC(sub_83C61970);
PPC_FUNC_IMPL(__imp__sub_83C61970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13288
	ctx.r3.s64 = ctx.r11.s64 + 13288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6197C"))) PPC_WEAK_FUNC(sub_83C6197C);
PPC_FUNC_IMPL(__imp__sub_83C6197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61980"))) PPC_WEAK_FUNC(sub_83C61980);
PPC_FUNC_IMPL(__imp__sub_83C61980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13296
	ctx.r3.s64 = ctx.r11.s64 + 13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6198C"))) PPC_WEAK_FUNC(sub_83C6198C);
PPC_FUNC_IMPL(__imp__sub_83C6198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61990"))) PPC_WEAK_FUNC(sub_83C61990);
PPC_FUNC_IMPL(__imp__sub_83C61990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13304
	ctx.r3.s64 = ctx.r11.s64 + 13304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6199C"))) PPC_WEAK_FUNC(sub_83C6199C);
PPC_FUNC_IMPL(__imp__sub_83C6199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C619A0"))) PPC_WEAK_FUNC(sub_83C619A0);
PPC_FUNC_IMPL(__imp__sub_83C619A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13312
	ctx.r3.s64 = ctx.r11.s64 + 13312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C619AC"))) PPC_WEAK_FUNC(sub_83C619AC);
PPC_FUNC_IMPL(__imp__sub_83C619AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C619B0"))) PPC_WEAK_FUNC(sub_83C619B0);
PPC_FUNC_IMPL(__imp__sub_83C619B0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// bl 0x83523120
	ctx.lr = 0x83C619C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13320
	ctx.r3.s64 = ctx.r10.s64 + 13320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C619D4;
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

__attribute__((alias("__imp__sub_83C619E4"))) PPC_WEAK_FUNC(sub_83C619E4);
PPC_FUNC_IMPL(__imp__sub_83C619E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C619E8"))) PPC_WEAK_FUNC(sub_83C619E8);
PPC_FUNC_IMPL(__imp__sub_83C619E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5896
	ctx.r7.s64 = ctx.r8.s64 + 5896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61A10"))) PPC_WEAK_FUNC(sub_83C61A10);
PPC_FUNC_IMPL(__imp__sub_83C61A10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,30020
	ctx.r6.s64 = ctx.r7.s64 + 30020;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29948(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29948);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5896(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5896);
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
	// std r9,30020(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30020, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61A58"))) PPC_WEAK_FUNC(sub_83C61A58);
PPC_FUNC_IMPL(__imp__sub_83C61A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13336
	ctx.r3.s64 = ctx.r11.s64 + 13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61A64"))) PPC_WEAK_FUNC(sub_83C61A64);
PPC_FUNC_IMPL(__imp__sub_83C61A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61A68"))) PPC_WEAK_FUNC(sub_83C61A68);
PPC_FUNC_IMPL(__imp__sub_83C61A68) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,5904
	ctx.r3.s64 = ctx.r11.s64 + 5904;
	// bl 0x8259af80
	ctx.lr = 0x83C61A80;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13352
	ctx.r3.s64 = ctx.r10.s64 + 13352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61A8C;
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

__attribute__((alias("__imp__sub_83C61A9C"))) PPC_WEAK_FUNC(sub_83C61A9C);
PPC_FUNC_IMPL(__imp__sub_83C61A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61AA0"))) PPC_WEAK_FUNC(sub_83C61AA0);
PPC_FUNC_IMPL(__imp__sub_83C61AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5884
	ctx.r11.s64 = ctx.r8.s64 + 5884;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,29996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29996);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13344
	ctx.r3.s64 = ctx.r6.s64 + 13344;
	// stw r10,5884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61AD0"))) PPC_WEAK_FUNC(sub_83C61AD0);
PPC_FUNC_IMPL(__imp__sub_83C61AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13360
	ctx.r3.s64 = ctx.r11.s64 + 13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61ADC"))) PPC_WEAK_FUNC(sub_83C61ADC);
PPC_FUNC_IMPL(__imp__sub_83C61ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61AE0"))) PPC_WEAK_FUNC(sub_83C61AE0);
PPC_FUNC_IMPL(__imp__sub_83C61AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13368
	ctx.r3.s64 = ctx.r11.s64 + 13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61AEC"))) PPC_WEAK_FUNC(sub_83C61AEC);
PPC_FUNC_IMPL(__imp__sub_83C61AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61AF0"))) PPC_WEAK_FUNC(sub_83C61AF0);
PPC_FUNC_IMPL(__imp__sub_83C61AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13376
	ctx.r3.s64 = ctx.r11.s64 + 13376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61AFC"))) PPC_WEAK_FUNC(sub_83C61AFC);
PPC_FUNC_IMPL(__imp__sub_83C61AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B00"))) PPC_WEAK_FUNC(sub_83C61B00);
PPC_FUNC_IMPL(__imp__sub_83C61B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13384
	ctx.r3.s64 = ctx.r11.s64 + 13384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B0C"))) PPC_WEAK_FUNC(sub_83C61B0C);
PPC_FUNC_IMPL(__imp__sub_83C61B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B10"))) PPC_WEAK_FUNC(sub_83C61B10);
PPC_FUNC_IMPL(__imp__sub_83C61B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13392
	ctx.r3.s64 = ctx.r11.s64 + 13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B1C"))) PPC_WEAK_FUNC(sub_83C61B1C);
PPC_FUNC_IMPL(__imp__sub_83C61B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B20"))) PPC_WEAK_FUNC(sub_83C61B20);
PPC_FUNC_IMPL(__imp__sub_83C61B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13400
	ctx.r3.s64 = ctx.r11.s64 + 13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B2C"))) PPC_WEAK_FUNC(sub_83C61B2C);
PPC_FUNC_IMPL(__imp__sub_83C61B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B30"))) PPC_WEAK_FUNC(sub_83C61B30);
PPC_FUNC_IMPL(__imp__sub_83C61B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13408
	ctx.r3.s64 = ctx.r11.s64 + 13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B3C"))) PPC_WEAK_FUNC(sub_83C61B3C);
PPC_FUNC_IMPL(__imp__sub_83C61B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B40"))) PPC_WEAK_FUNC(sub_83C61B40);
PPC_FUNC_IMPL(__imp__sub_83C61B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13416
	ctx.r3.s64 = ctx.r11.s64 + 13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B4C"))) PPC_WEAK_FUNC(sub_83C61B4C);
PPC_FUNC_IMPL(__imp__sub_83C61B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B50"))) PPC_WEAK_FUNC(sub_83C61B50);
PPC_FUNC_IMPL(__imp__sub_83C61B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B5C"))) PPC_WEAK_FUNC(sub_83C61B5C);
PPC_FUNC_IMPL(__imp__sub_83C61B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B60"))) PPC_WEAK_FUNC(sub_83C61B60);
PPC_FUNC_IMPL(__imp__sub_83C61B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B6C"))) PPC_WEAK_FUNC(sub_83C61B6C);
PPC_FUNC_IMPL(__imp__sub_83C61B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B70"))) PPC_WEAK_FUNC(sub_83C61B70);
PPC_FUNC_IMPL(__imp__sub_83C61B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13440
	ctx.r3.s64 = ctx.r11.s64 + 13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B7C"))) PPC_WEAK_FUNC(sub_83C61B7C);
PPC_FUNC_IMPL(__imp__sub_83C61B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B80"))) PPC_WEAK_FUNC(sub_83C61B80);
PPC_FUNC_IMPL(__imp__sub_83C61B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13448
	ctx.r3.s64 = ctx.r11.s64 + 13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61B8C"))) PPC_WEAK_FUNC(sub_83C61B8C);
PPC_FUNC_IMPL(__imp__sub_83C61B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61B90"))) PPC_WEAK_FUNC(sub_83C61B90);
PPC_FUNC_IMPL(__imp__sub_83C61B90) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,6248
	ctx.r3.s64 = ctx.r11.s64 + 6248;
	// bl 0x83523120
	ctx.lr = 0x83C61BA8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13456
	ctx.r3.s64 = ctx.r10.s64 + 13456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61BB4;
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

__attribute__((alias("__imp__sub_83C61BC4"))) PPC_WEAK_FUNC(sub_83C61BC4);
PPC_FUNC_IMPL(__imp__sub_83C61BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61BC8"))) PPC_WEAK_FUNC(sub_83C61BC8);
PPC_FUNC_IMPL(__imp__sub_83C61BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6264
	ctx.r7.s64 = ctx.r8.s64 + 6264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6264);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6264, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61BF0"))) PPC_WEAK_FUNC(sub_83C61BF0);
PPC_FUNC_IMPL(__imp__sub_83C61BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,30148
	ctx.r6.s64 = ctx.r7.s64 + 30148;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30076(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30076);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6264);
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
	// std r9,30148(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30148, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61C38"))) PPC_WEAK_FUNC(sub_83C61C38);
PPC_FUNC_IMPL(__imp__sub_83C61C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13472
	ctx.r3.s64 = ctx.r11.s64 + 13472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61C44"))) PPC_WEAK_FUNC(sub_83C61C44);
PPC_FUNC_IMPL(__imp__sub_83C61C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61C48"))) PPC_WEAK_FUNC(sub_83C61C48);
PPC_FUNC_IMPL(__imp__sub_83C61C48) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,6272
	ctx.r3.s64 = ctx.r11.s64 + 6272;
	// bl 0x8259af80
	ctx.lr = 0x83C61C60;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13488
	ctx.r3.s64 = ctx.r10.s64 + 13488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61C6C;
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

__attribute__((alias("__imp__sub_83C61C7C"))) PPC_WEAK_FUNC(sub_83C61C7C);
PPC_FUNC_IMPL(__imp__sub_83C61C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61C80"))) PPC_WEAK_FUNC(sub_83C61C80);
PPC_FUNC_IMPL(__imp__sub_83C61C80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6252
	ctx.r11.s64 = ctx.r8.s64 + 6252;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,30124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30124);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13480
	ctx.r3.s64 = ctx.r6.s64 + 13480;
	// stw r10,6252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61CB0"))) PPC_WEAK_FUNC(sub_83C61CB0);
PPC_FUNC_IMPL(__imp__sub_83C61CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13496
	ctx.r3.s64 = ctx.r11.s64 + 13496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61CBC"))) PPC_WEAK_FUNC(sub_83C61CBC);
PPC_FUNC_IMPL(__imp__sub_83C61CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61CC0"))) PPC_WEAK_FUNC(sub_83C61CC0);
PPC_FUNC_IMPL(__imp__sub_83C61CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13504
	ctx.r3.s64 = ctx.r11.s64 + 13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61CCC"))) PPC_WEAK_FUNC(sub_83C61CCC);
PPC_FUNC_IMPL(__imp__sub_83C61CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61CD0"))) PPC_WEAK_FUNC(sub_83C61CD0);
PPC_FUNC_IMPL(__imp__sub_83C61CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61CDC"))) PPC_WEAK_FUNC(sub_83C61CDC);
PPC_FUNC_IMPL(__imp__sub_83C61CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61CE0"))) PPC_WEAK_FUNC(sub_83C61CE0);
PPC_FUNC_IMPL(__imp__sub_83C61CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13520
	ctx.r3.s64 = ctx.r11.s64 + 13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61CEC"))) PPC_WEAK_FUNC(sub_83C61CEC);
PPC_FUNC_IMPL(__imp__sub_83C61CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61CF0"))) PPC_WEAK_FUNC(sub_83C61CF0);
PPC_FUNC_IMPL(__imp__sub_83C61CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13528
	ctx.r3.s64 = ctx.r11.s64 + 13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61CFC"))) PPC_WEAK_FUNC(sub_83C61CFC);
PPC_FUNC_IMPL(__imp__sub_83C61CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61D00"))) PPC_WEAK_FUNC(sub_83C61D00);
PPC_FUNC_IMPL(__imp__sub_83C61D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13536
	ctx.r3.s64 = ctx.r11.s64 + 13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61D0C"))) PPC_WEAK_FUNC(sub_83C61D0C);
PPC_FUNC_IMPL(__imp__sub_83C61D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61D10"))) PPC_WEAK_FUNC(sub_83C61D10);
PPC_FUNC_IMPL(__imp__sub_83C61D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13544
	ctx.r3.s64 = ctx.r11.s64 + 13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61D1C"))) PPC_WEAK_FUNC(sub_83C61D1C);
PPC_FUNC_IMPL(__imp__sub_83C61D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61D20"))) PPC_WEAK_FUNC(sub_83C61D20);
PPC_FUNC_IMPL(__imp__sub_83C61D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13552
	ctx.r3.s64 = ctx.r11.s64 + 13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61D2C"))) PPC_WEAK_FUNC(sub_83C61D2C);
PPC_FUNC_IMPL(__imp__sub_83C61D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61D30"))) PPC_WEAK_FUNC(sub_83C61D30);
PPC_FUNC_IMPL(__imp__sub_83C61D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13560
	ctx.r3.s64 = ctx.r11.s64 + 13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61D3C"))) PPC_WEAK_FUNC(sub_83C61D3C);
PPC_FUNC_IMPL(__imp__sub_83C61D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61D40"))) PPC_WEAK_FUNC(sub_83C61D40);
PPC_FUNC_IMPL(__imp__sub_83C61D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13568
	ctx.r3.s64 = ctx.r11.s64 + 13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61D4C"))) PPC_WEAK_FUNC(sub_83C61D4C);
PPC_FUNC_IMPL(__imp__sub_83C61D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61D50"))) PPC_WEAK_FUNC(sub_83C61D50);
PPC_FUNC_IMPL(__imp__sub_83C61D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13576
	ctx.r3.s64 = ctx.r11.s64 + 13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61D5C"))) PPC_WEAK_FUNC(sub_83C61D5C);
PPC_FUNC_IMPL(__imp__sub_83C61D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61D60"))) PPC_WEAK_FUNC(sub_83C61D60);
PPC_FUNC_IMPL(__imp__sub_83C61D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13584
	ctx.r3.s64 = ctx.r11.s64 + 13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61D6C"))) PPC_WEAK_FUNC(sub_83C61D6C);
PPC_FUNC_IMPL(__imp__sub_83C61D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61D70"))) PPC_WEAK_FUNC(sub_83C61D70);
PPC_FUNC_IMPL(__imp__sub_83C61D70) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,6616
	ctx.r3.s64 = ctx.r11.s64 + 6616;
	// bl 0x83523120
	ctx.lr = 0x83C61D88;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13592
	ctx.r3.s64 = ctx.r10.s64 + 13592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61D94;
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

__attribute__((alias("__imp__sub_83C61DA4"))) PPC_WEAK_FUNC(sub_83C61DA4);
PPC_FUNC_IMPL(__imp__sub_83C61DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61DA8"))) PPC_WEAK_FUNC(sub_83C61DA8);
PPC_FUNC_IMPL(__imp__sub_83C61DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6632
	ctx.r7.s64 = ctx.r8.s64 + 6632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61DD0"))) PPC_WEAK_FUNC(sub_83C61DD0);
PPC_FUNC_IMPL(__imp__sub_83C61DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,30276
	ctx.r6.s64 = ctx.r7.s64 + 30276;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30204(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30204);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6632(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6632);
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
	// std r9,30276(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30276, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C61E18"))) PPC_WEAK_FUNC(sub_83C61E18);
PPC_FUNC_IMPL(__imp__sub_83C61E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13608
	ctx.r3.s64 = ctx.r11.s64 + 13608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61E24"))) PPC_WEAK_FUNC(sub_83C61E24);
PPC_FUNC_IMPL(__imp__sub_83C61E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61E28"))) PPC_WEAK_FUNC(sub_83C61E28);
PPC_FUNC_IMPL(__imp__sub_83C61E28) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// bl 0x8259af80
	ctx.lr = 0x83C61E40;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,13624
	ctx.r3.s64 = ctx.r10.s64 + 13624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C61E4C;
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

__attribute__((alias("__imp__sub_83C61E5C"))) PPC_WEAK_FUNC(sub_83C61E5C);
PPC_FUNC_IMPL(__imp__sub_83C61E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61E60"))) PPC_WEAK_FUNC(sub_83C61E60);
PPC_FUNC_IMPL(__imp__sub_83C61E60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6620
	ctx.r11.s64 = ctx.r8.s64 + 6620;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,30252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30252);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13616
	ctx.r3.s64 = ctx.r6.s64 + 13616;
	// stw r10,6620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61E90"))) PPC_WEAK_FUNC(sub_83C61E90);
PPC_FUNC_IMPL(__imp__sub_83C61E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13632
	ctx.r3.s64 = ctx.r11.s64 + 13632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61E9C"))) PPC_WEAK_FUNC(sub_83C61E9C);
PPC_FUNC_IMPL(__imp__sub_83C61E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61EA0"))) PPC_WEAK_FUNC(sub_83C61EA0);
PPC_FUNC_IMPL(__imp__sub_83C61EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13640
	ctx.r3.s64 = ctx.r11.s64 + 13640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61EAC"))) PPC_WEAK_FUNC(sub_83C61EAC);
PPC_FUNC_IMPL(__imp__sub_83C61EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61EB0"))) PPC_WEAK_FUNC(sub_83C61EB0);
PPC_FUNC_IMPL(__imp__sub_83C61EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13648
	ctx.r3.s64 = ctx.r11.s64 + 13648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61EBC"))) PPC_WEAK_FUNC(sub_83C61EBC);
PPC_FUNC_IMPL(__imp__sub_83C61EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61EC0"))) PPC_WEAK_FUNC(sub_83C61EC0);
PPC_FUNC_IMPL(__imp__sub_83C61EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13656
	ctx.r3.s64 = ctx.r11.s64 + 13656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61ECC"))) PPC_WEAK_FUNC(sub_83C61ECC);
PPC_FUNC_IMPL(__imp__sub_83C61ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61ED0"))) PPC_WEAK_FUNC(sub_83C61ED0);
PPC_FUNC_IMPL(__imp__sub_83C61ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13664
	ctx.r3.s64 = ctx.r11.s64 + 13664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61EDC"))) PPC_WEAK_FUNC(sub_83C61EDC);
PPC_FUNC_IMPL(__imp__sub_83C61EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61EE0"))) PPC_WEAK_FUNC(sub_83C61EE0);
PPC_FUNC_IMPL(__imp__sub_83C61EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13672
	ctx.r3.s64 = ctx.r11.s64 + 13672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61EEC"))) PPC_WEAK_FUNC(sub_83C61EEC);
PPC_FUNC_IMPL(__imp__sub_83C61EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61EF0"))) PPC_WEAK_FUNC(sub_83C61EF0);
PPC_FUNC_IMPL(__imp__sub_83C61EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13680
	ctx.r3.s64 = ctx.r11.s64 + 13680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61EFC"))) PPC_WEAK_FUNC(sub_83C61EFC);
PPC_FUNC_IMPL(__imp__sub_83C61EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61F00"))) PPC_WEAK_FUNC(sub_83C61F00);
PPC_FUNC_IMPL(__imp__sub_83C61F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,13688
	ctx.r3.s64 = ctx.r11.s64 + 13688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C61F0C"))) PPC_WEAK_FUNC(sub_83C61F0C);
PPC_FUNC_IMPL(__imp__sub_83C61F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

